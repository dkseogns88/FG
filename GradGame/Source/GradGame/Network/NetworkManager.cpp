#include "NetworkManager.h"
#include "Sockets.h"
#include "Common/TcpSocketBuilder.h"
#include "SocketSubsystem.h"
#include "PacketSession.h"
#include "Protocol.pb.h"
#include "ServerPacketHandler.h"
#include "Kismet/GameplayStatics.h"
#include "GradGame/GradLogChannels.h"
#include "GradGame/GameModes/GradExperienceManagerComponent.h"
#include "GradGame/GameModes/GradGameModeBase.h"
#include "GradGame/GameModes/GradExperienceDefinition.h"
#include "GradGame/Character/GradPawnData.h"
#include "GradGame/Character/GradCharacter.h"
#include "GradGame/Character/GradHealthComponent.h"
#include "GradGame/Network/GradNetCharacter.h"
#include "GradNetworkComponent.h"
#include "AbilitySystem/GradAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/GradGameplayAbility.h"
#include "AbilitySystem/GradAbilitySet.h"


#include "GradGameplayTags.h"
#include "GameplayCueFunctionLibrary.h"

void UNetworkManager::Deinitialize()
{
	// DisconnectFromGameServer();
}

void UNetworkManager::ConnectToGameServer()
{
	Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(TEXT("Stream"), TEXT("Client Socket"));

	FIPv4Address Ip;
	FIPv4Address::Parse(IpAddress, Ip);

	TSharedRef<FInternetAddr> InternetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	InternetAddr->SetIp(Ip.Value);
	InternetAddr->SetPort(Port);


	bool Connected = Socket->Connect(*InternetAddr);

	if (Connected)
	{
		// Session
		GameServerSession = MakeShared<PacketSession>(Socket);
		GameServerSession->Run();
		
		// TEMP : Lobby에서 캐릭터 선택창 등
		{
			Protocol::C_LOGIN Pkt;
			SendBufferRef SendBuffer = ServerPacketHandler::MakeSendBuffer(Pkt);
			SendPacket(SendBuffer);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connection Failed")));
	}
}

void UNetworkManager::DisconnectFromGameServer()
{
	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	if (MyPlayer == nullptr) return;
	UGradNetworkComponent* NetComponent = MyPlayer->FindComponentByClass<UGradNetworkComponent>();
	
	if (NetComponent) {
		Protocol::C_LEAVE_GAME LeavePkt;
		Protocol::PosInfo* Info = LeavePkt.mutable_info();
		Info->CopyFrom(*(NetComponent->GetPosInfo()));
		SendPacket(LeavePkt);
	}
}

void UNetworkManager::HandleRecvPackets()
{
	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	GameServerSession->HandleRecvPackets();
}

void UNetworkManager::SendPacket(SendBufferRef SendBuffer)
{
	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	GameServerSession->SendPacket(SendBuffer);
}

void UNetworkManager::HandleSpawn(const Protocol::ObjectInfo& ObjectInfo, bool IsMine)
{
	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	const uint64 ObjectId = ObjectInfo.object_id();
	if (Objects.Find(ObjectId) != nullptr)
		return;

	switch (ObjectInfo.object_type())
	{
	case Protocol::ObjectType::OBJECT_TYPE_PLAYER:
		SpawnPlayer(ObjectInfo, IsMine);
		// 캐릭터가 추가되었으니 왼쪽 하단에 팀 체력바 업그레이드 해보자
		OnTeamMembersChanged.ExecuteIfBound(PlayerIDs, Objects.Num());
		break;
	default:
		break;
	}
}

void UNetworkManager::HandleSpawn(const Protocol::S_ENTER_GAME& EnterGamePkt)
{
	HandleSpawn(EnterGamePkt.player(), true);
}

void UNetworkManager::HandleSpawn(const Protocol::S_SPAWN& SpawnPkt)
{
	for (auto& object : SpawnPkt.objects())
	{
		HandleSpawn(object, false);
	}
}

void UNetworkManager::HandleDespawn(uint64 ObjectId)
{
	// TODO: 다른 플레이어가 삭제 될 때, UGradControllerComponent_CharacterParts에서 삭제를 시켜줘야 함

}

void UNetworkManager::HandleDespawn(const Protocol::S_DESPAWN& DespawnPkt)
{
}

void UNetworkManager::HandleLeave(const Protocol::S_LEAVE_GAME& LeavePkt)
{
}

void UNetworkManager::HandleMove(const Protocol::S_MOVE& MovePkt)
{
	const uint64 ObjectId = MovePkt.info().object_id();
	
	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	auto* World = GetWorld();
	if (World == nullptr)
		return;

	TObjectPtr<APawn>* FindActor = Objects.Find(ObjectId);
	if (FindActor == nullptr)
		return;

	if (MyPlayer == (*FindActor)) return;

	const Protocol::PosInfo& Info = MovePkt.info();
	if (UGradNetworkComponent* PawnNetComp = (*FindActor)->FindComponentByClass<UGradNetworkComponent>())
	{
		PawnNetComp->SetPosInfo(Info);
	}
}

PRAGMA_DISABLE_OPTIMIZATION
void UNetworkManager::HandleStat(const Protocol::S_STAT& StatPkt)
{
	const uint64 ObjectId = StatPkt.info().object_id();

	TObjectPtr<APawn>* FindActor = Objects.Find(ObjectId);
	if (FindActor == nullptr)
		return;
	
	float BeforeHP;
	float NewHP;
	const Protocol::StatInfo& Info = StatPkt.info();
	if (UGradNetworkComponent* PawnNetComp = (*FindActor)->FindComponentByClass<UGradNetworkComponent>())
	{
		BeforeHP = PawnNetComp->GetStatInfo()->hp();

		PawnNetComp->SetStatInfo(Info);

		NewHP = StatPkt.info().hp();

		// 왼쪽 밑에 팀원들에 피 Update
		OnTeamHpChanged.Broadcast(ObjectId, BeforeHP, NewHP);
	}

	if (UGradHealthComponent* PawnHealthComp = (*FindActor)->FindComponentByClass<UGradHealthComponent>())
	{
		// Lyra에 있는 HealthComponent를 사용하고 있다. 추후에 변경이 필요하다.
		// 나의 캐릭터에 대한 피 Update
		PawnHealthComp->OnHealthChanged.Broadcast(PawnHealthComp, BeforeHP, NewHP, nullptr);
	}

	// TODO: 여기서 죽음에 처리
	if (NewHP <= 0.f)
	{
		{
			UGradAbilitySystemComponent* GradASC = (*FindActor)->FindComponentByClass<UGradAbilitySystemComponent>();
			if (GradASC)
			{
				FGameplayEventData Payload;
				Payload.EventTag = FGradGameplayTags::Get().GameplayEvent_Death;
				Payload.Instigator = *FindActor;
				Payload.Target = GradASC->GetAvatarActor();

				GradASC->HandleGameplayEvent(Payload.EventTag, &Payload);
			}
		}
	}

}

void UNetworkManager::HandleFire(const Protocol::S_FIRE& FirePkt)
{
	const uint64 AttackId = FirePkt.info().attack_object_id();

	Protocol::SkillType SkillType = FirePkt.info().skill_type();

	float camrot_pitch = FirePkt.info().camrot_pitch();
	float camrot_yaw = FirePkt.info().camrot_yaw();
	float camrot_roll = FirePkt.info().camrot_roll();

	float finalcamloc_x = FirePkt.info().finalcamloc_x();
	float finalcamloc_y = FirePkt.info().finalcamloc_y();
	float finalcamloc_z = FirePkt.info().finalcamloc_z();

	FRotator CamRot(camrot_pitch, camrot_yaw, camrot_roll);
	FVector FinalCamLoc(finalcamloc_x, finalcamloc_y, finalcamloc_z);

	TObjectPtr<APawn>* AttackPlayer = Objects.Find(AttackId);
	if (AttackPlayer == nullptr)
		return;

	if (MyPlayer != (*AttackPlayer))
	{
		const FGradGameplayTags& GameplayTags = FGradGameplayTags::Get();
		if (AGradNetCharacter* NetPawn = Cast<AGradNetCharacter>(*AttackPlayer))
		{
			NetPawn->WeaponTransform = FTransform(CamRot, FinalCamLoc);

			switch (SkillType)
			{
			case Protocol::SkillType::Skill_TYPE_RIFLE:
				NetPawn->HandleSkill(GameplayTags.InputTag_Weapon_Fire);
				break;
			}
		}
	}
	

	const bool IsHit = FirePkt.info().is_target_hit();
	if (IsHit)
	{
		const uint64 HitId = FirePkt.info().hit_object_id();
		TObjectPtr<APawn>* HitPlayer = Objects.Find(HitId);

		FHitResult HitResult;
		HitResult.HitObjectHandle = FActorInstanceHandle(HitPlayer->Get());
		HitResult.Location = (*HitPlayer)->GetActorLocation();
		AActor* HitGetActor = HitResult.GetActor();
		HitGetActor =  HitPlayer->Get();


		FGameplayCueParameters CueParams;
		CueParams.EffectContext = FGameplayEffectContextHandle(new FGameplayEffectContext());
		CueParams.EffectContext.AddHitResult(HitResult);
		// TODO: 데미지를 단순 10이 아니러 캐릭터에 데미지로 변경 해야함
		CueParams.RawMagnitude = 10.f;

		FGameplayTag HitEffectTag =	FGradGameplayTags::Get().GameplayCue_Character_DamageTaken;
		UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(AttackPlayer->Get(), HitEffectTag, CueParams);

	}

}

void UNetworkManager::HandleReload(const Protocol::S_RELOAD& ReloadkPkt)
{
	const uint64 ObjectId = ReloadkPkt.object_id();
	const bool Success = ReloadkPkt.success();

	if (Success == false) return;

	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	auto* World = GetWorld();
	if (World == nullptr)
		return;

	TObjectPtr<APawn>* FindActor = Objects.Find(ObjectId);
	if (FindActor == nullptr)
		return;

	if (MyPlayer == (*FindActor)) return;

	const FGradGameplayTags& GameplayTags = FGradGameplayTags::Get();
	if (AGradNetCharacter* NetPawn = Cast<AGradNetCharacter>(*FindActor))
	{
		NetPawn->HandleSkill(GameplayTags.InputTag_Weapon_Reload);
	}
}

void UNetworkManager::HandleDash(const Protocol::S_DASH& DashPkt)
{
	const uint64 ObjectId = DashPkt.object_id();

	TObjectPtr<APawn>* FindActor = Objects.Find(ObjectId);
	if (FindActor == nullptr)
		return;

	if (MyPlayer == (*FindActor)) return;

	AGradNetCharacter* NetPawn = Cast<AGradNetCharacter>(*FindActor);

	if (NetPawn) {
		Protocol::DashDirectionType DashType = DashPkt.dash_type();
		switch (DashType)
		{
		case Protocol::DASH_DIRECTION_TYPE_FORWARD:
			NetPawn->DashDirection = EGradAbilityDashDirection::Forward;
			break;
		case Protocol::DASH_DIRECTION_TYPE_BACKWARD:
			NetPawn->DashDirection = EGradAbilityDashDirection::Backward;
			break;
		case Protocol::DASH_DIRECTION_TYPE_LEFT:
			NetPawn->DashDirection = EGradAbilityDashDirection::Left;
			break;
		case Protocol::DASH_DIRECTION_TYPE_RIGHT:
			NetPawn->DashDirection = EGradAbilityDashDirection::Right;
			break;
		case Protocol::DASH_DIRECTION_TYPE_NONE:
			NetPawn->DashDirection = EGradAbilityDashDirection::None;
			break;
		default:
			break;
		}

		NetPawn->MoveDirection = FVector(DashPkt.move_direction_x(), DashPkt.move_direction_y(), DashPkt.move_direction_z());

		const FGradGameplayTags& GameplayTags = FGradGameplayTags::Get();
		NetPawn->HandleSkill(GameplayTags.InputTag_Ability_Dash);
	}
}

void UNetworkManager::SpawnPlayer(const Protocol::ObjectInfo& ObjectInfo, bool IsMine)
{
	auto* World = GetWorld();
	if (World == nullptr)
		return;

	FVector SpawnLocation(ObjectInfo.pos_info().x(), ObjectInfo.pos_info().y(), ObjectInfo.pos_info().z());
	
	PlayerIDs.Add(ObjectInfo.pos_info().object_id());
	PlayerIDs.Sort(); // 음 정렬을 해야 할까?

	if (IsMine)
	{
		auto* PC = UGameplayStatics::GetPlayerController(this, 0);
		check(PC);
		TObjectPtr<APawn> Player = PC->GetPawn();
		if (Player == nullptr)
			return;

		if (UGradNetworkComponent* PawnNetComp = Player->FindComponentByClass<UGradNetworkComponent>())
		{
			PawnNetComp->SetObjectInfo(ObjectInfo);
			PawnNetComp->SetPosInfo(ObjectInfo.pos_info());
			PawnNetComp->SetStatInfo(ObjectInfo.stat_info());

			Player->SetActorLocation(SpawnLocation);
		}

		MyPlayer = Player;
		Objects.Add(ObjectInfo.object_id(), Player);
	}
	else
	{
		const AGameStateBase* GameState = GetWorld()->GetGameState();
		check(GameState);

		UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
		check(ExperienceManagerComponent);

		UClass* NetClass = ExperienceManagerComponent->CurrentExperience->DefaultPawnData->NetPawnClass;
		TObjectPtr<AGradNetCharacter> Player = Cast<AGradNetCharacter>(World->SpawnActor(NetClass, &SpawnLocation));

		if (const UGradPawnData* PawnData = ExperienceManagerComponent->CurrentExperience->DefaultPawnData)
		{
			for (UGradAbilitySet* AbilitySet : PawnData->AbilitySets)
			{
				if (AbilitySet)
				{
					AbilitySet->GiveToAbilitySystem(Player->GetGradAbilitySystemComponent(), nullptr);
				}
			}
		}

		if (UGradNetworkComponent* PawnNetComp = Player->FindComponentByClass<UGradNetworkComponent>())
		{
			PawnNetComp->SetObjectInfo(ObjectInfo);
			PawnNetComp->SetPosInfo(ObjectInfo.pos_info());
			PawnNetComp->SetStatInfo(ObjectInfo.stat_info());

			Player->K2_NetOnEquipped();
		}

		Objects.Add(ObjectInfo.object_id(), Player);
	}

	// 캐릭터가 추가되었으니 왼쪽 하단에 팀 체력바 업그레이드 해보자
	//OnTeamMembersChanged.ExecuteIfBound(PlayerIDs, Objects.Num());

}
PRAGMA_ENABLE_OPTIMIZATION