// Fill out your copyright notice in the Description page of Project Settings.


#include "GradGameplayAbility_RangedWeapon.h"
#include "AbilitySystemComponent.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"
#include "DrawDebugHelpers.h"
#include "GradRangedWeaponInstance.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "GradGame/AbilitySystem/GradGameplayAbilityTargetData_SingleTarget.h"
#include "GradGame/Physics/GradCollisionChannels.h"
#include "GradGame/Character/GradCharacter.h"

#include "GradGame/Network/GradNetworkComponent.h"
#include "GradGame/Network/NetworkManager.h"
#include "GradGame/Network/GradNetCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GradLogChannels.h"

UGradGameplayAbility_RangedWeapon::UGradGameplayAbility_RangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UGradGameplayAbility_RangedWeapon::StartRangedWeaponTargeting()
{
	check(CurrentActorInfo);

	AActor* AvatarActor = CurrentActorInfo->AvatarActor.Get();
	check(AvatarActor);

	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	// �Ѿ��� ������ Hit ������ ���
	TArray<FHitResult> FoundHits;
	PerformLocalTargeting(FoundHits);

	// GameplayAbilityTargetData�� Server/Client �� Ability�� ���� �����ͷ� �����ϸ� �ȴ�:
	// - �㳪, �츮�� �̱��÷����̹Ƿ� Ability�� �����ͷ� �����ϸ� �ǰڴ� (���� ū �ǹ̰� ���ٰ� �� �� �ִ�)
	FGameplayAbilityTargetDataHandle TargetData;
	TargetData.UniqueId = 0;

	if (FoundHits.Num() > 0)
	{
		// Cartridge�� �Ϲ� ������ ���, ź�࿡ �ϳ��� �Ѿ��� ���������, ������ ���, ź�࿡ �������� �Ѿ��� �ְ�, **ź���� īƮ������ ����**�ϸ� �� �� ����
		const int32 CartridgeID = FMath::Rand();
		for (const FHitResult& FoundHit : FoundHits)
		{
			// AbilityTargetData�� SingeTargetHit ������ ��´�
			// - ����� TargetData.Add()�� ���, SharedPtr�� �ֱ� ������ ���⼭ new�� ũ�� �Ű� �Ƚᵵ �ȴ�
			FGradGameplayAbilityTargetData_SingleTargetHit* NewTargetData = new FGradGameplayAbilityTargetData_SingleTargetHit();
			NewTargetData->HitResult = FoundHit;
			NewTargetData->CartridgeID = CartridgeID;
			TargetData.Add(NewTargetData);
		}
	}

	// ������ AbilityTargetData�� �غ�Ǿ����Ƿ�, OnTargetDataReadyCallback�� ȣ���Ѵ�
	OnTargetDataReadyCallback(TargetData, FGameplayTag());
}

PRAGMA_DISABLE_OPTIMIZATION
void UGradGameplayAbility_RangedWeapon::PerformLocalTargeting(TArray<FHitResult>& OutHits)
{
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());

	UGradRangedWeaponInstance* WeaponData = GetWeaponInstance();
	FRangedWeaponFiringInput InputData;
	InputData.WeaponData = WeaponData;
	InputData.bCanPlayBulletFX = true;

	if (AvatarPawn && AvatarPawn->IsLocallyControlled() && WeaponData)
	{
		const FTransform TargetTransform = GetTargetingTransform(AvatarPawn, EGradAbilityTargetingSource::CameraTowardsFocus);
		// �𸮾��� ForwardVector�� (1, 0, 0) �� EAxis::X�̴�
		// - GetUnitAxis()�� ���캸��
		InputData.AimDir = TargetTransform.GetUnitAxis(EAxis::X);
		InputData.StartTrace = TargetTransform.GetTranslation();
		InputData.EndAim = InputData.StartTrace + InputData.AimDir * WeaponData->MaxDamageRange;

		WeaponTransform = TargetTransform;
#if 0
		{
			static float DebugThickness = 2.0f;
			DrawDebugLine(GetWorld(), InputData.StartTrace, InputData.StartTrace + (InputData.AimDir * 100.0f), FColor::Yellow, false, 10.0f, 0, DebugThickness);
		}
#endif

		TraceBulletsInCartridge(InputData, OutHits);
	}
	else if (AGradNetCharacter* NetAvatarPawn = Cast<AGradNetCharacter>(AvatarPawn))
	{
		const FTransform TargetTransform = GetTargetingTransform(NetAvatarPawn, EGradAbilityTargetingSource::CameraTowardsFocus);

		InputData.AimDir = TargetTransform.GetUnitAxis(EAxis::X);
		InputData.StartTrace = TargetTransform.GetTranslation();
		InputData.EndAim = InputData.StartTrace + InputData.AimDir * WeaponData->MaxDamageRange;

#if 0
		{
			static float DebugThickness = 2.0f;
			DrawDebugLine(GetWorld(), InputData.StartTrace, InputData.StartTrace + (InputData.AimDir * 100.0f), FColor::Yellow, false, 10.0f, 0, DebugThickness);
		}
#endif

		TraceBulletsInCartridge(InputData, OutHits);
	}
}
PRAGMA_ENABLE_OPTIMIZATION

FTransform UGradGameplayAbility_RangedWeapon::GetTargetingTransform(APawn* SourcePawn, EGradAbilityTargetingSource Source)
{
	check(SourcePawn);
	check(Source == EGradAbilityTargetingSource::CameraTowardsFocus);

	AController* Controller = SourcePawn->Controller;
	AGradNetCharacter* NetAvatarPawn = Cast<AGradNetCharacter>(SourcePawn);
	if (Controller == nullptr && NetAvatarPawn)
	{
		return NetAvatarPawn->WeaponTransform;
	}

	// �����ѹ��̴�...
	double FocalDistance = 1024.0f;
	FVector FocalLoc;
	FVector CamLoc;
	FRotator CamRot;

	// PlayerController�κ���, Location�� Rotation ������ ������
	APlayerController* PC = Cast<APlayerController>(Controller);
	check(PC);
	PC->GetPlayerViewPoint(CamLoc, CamRot);

	FVector AimDir = CamRot.Vector().GetSafeNormal();
	FocalLoc = CamLoc + (AimDir * FocalDistance);

	// WeaponLoc�� �ƴ� Pawn�� Loc�̴�
	const FVector WeaponLoc = GetWeaponTargetingSourceLocation();
	FVector FinalCamLoc = FocalLoc + (((WeaponLoc - FocalLoc) | AimDir) * AimDir);

#if 0
	{
		// WeaponLoc (��ǻ� ActorLoc)
		DrawDebugPoint(GetWorld(), WeaponLoc, 10.0f, FColor::Red, false, 60.0f);
		// CamLoc
		DrawDebugPoint(GetWorld(), CamLoc, 10.0f, FColor::Yellow, false, 60.0f);
		// FinalCamLoc
		DrawDebugPoint(GetWorld(), FinalCamLoc, 10.0f, FColor::Magenta, false, 60.0f);

		// (WeaponLoc - FocalLoc)
		DrawDebugLine(GetWorld(), FocalLoc, WeaponLoc, FColor::Yellow, false, 60.0f, 0, 2.0f);
		// (AimDir)
		DrawDebugLine(GetWorld(), CamLoc, FocalLoc, FColor::Blue, false, 60.0f, 0, 2.0f);

		// Project Direction Line
		DrawDebugLine(GetWorld(), WeaponLoc, FinalCamLoc, FColor::Red, false, 60.0f, 0, 2.0f);
	}
#endif

	// Camera -> Focus ��� �Ϸ�
	return FTransform(CamRot, FinalCamLoc);
}

FVector UGradGameplayAbility_RangedWeapon::GetWeaponTargetingSourceLocation() const
{
	// �̱����ΰ� ����... Weapon ��ġ�� �ƴ� �׳� Pawn�� ��ġ�� �����´�...
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());
	check(AvatarPawn);

	const FVector SourceLoc = AvatarPawn->GetActorLocation();
	return SourceLoc;
}

void UGradGameplayAbility_RangedWeapon::TraceBulletsInCartridge(const FRangedWeaponFiringInput& InputData, TArray<FHitResult>& OutHits)
{
	UGradRangedWeaponInstance* WeaponData = InputData.WeaponData;
	check(WeaponData);

	// MaxDamageRange�� ����Ͽ�, EndTrace�� ��������
	const FVector BulletDir = InputData.AimDir;
	const FVector EndTrace = InputData.StartTrace + (BulletDir * WeaponData->MaxDamageRange);

	// HitLocation�� �ʱ�ȭ ������ EndTrace�� ����
	FVector HitLocation = EndTrace;

	// �Ѿ��� �ϳ� Trace �����Ѵ�:m
	// - ����� 
	// �� ���, ���ǰ� ���� Cartridge�� �������� �Ѿ��� ���� ��츦 ó���ϱ� ���� for-loop�� Ȱ���Ͽ�, ������ Bullet�� Trace�Ѵ�
	TArray<FHitResult> AllImpacts;
	FHitResult Impact = DoSingleBulletTrace(InputData.StartTrace, EndTrace, WeaponData->BulletTraceWeaponRadius, /**bIsSimulated=*/ false, /**out*/ AllImpacts);

	const AActor* HitActor = Impact.GetActor();
	if (HitActor)
	{
		if (AllImpacts.Num() > 0)
		{
			OutHits.Append(AllImpacts);
		}

		HitLocation = Impact.ImpactPoint;
	}

	// OutHits�� ��� �ϳ��� �����ϵ���, EndTrace�� Ȱ���Ͽ�, OutHits�� �߰����ش�
	if (OutHits.Num() == 0)
	{
		if (!Impact.bBlockingHit)
		{
			Impact.Location = EndTrace;
			Impact.ImpactPoint = EndTrace;
		}

		OutHits.Add(Impact);
	}
}

int32 FindFirstPawnHitResult(const TArray<FHitResult>& HitResults)
{
	for (int32 Idx = 0; Idx < HitResults.Num(); ++Idx)
	{
		const FHitResult& CurHitResult = HitResults[Idx];
		if (CurHitResult.HitObjectHandle.DoesRepresentClass(APawn::StaticClass()))
		{
			return Idx;
		}
		else
		{
			AActor* HitActor = CurHitResult.HitObjectHandle.FetchActor();

			// �Ѵܰ� AttachParent�� Actor�� Pawn�̶��?
			// - ���� ������ �ܰ�� AttachParent�� ���� �����Ƿ�, AttachParent ����� APawn�̶�� ������ ���� �ְڴ�
			if ((HitActor != nullptr) && (HitActor->GetAttachParentActor() != nullptr) && (Cast<APawn>(HitActor->GetAttachParentActor()) != nullptr))
			{
				return Idx;
			}
		}
	}
	return INDEX_NONE;
}

FHitResult UGradGameplayAbility_RangedWeapon::DoSingleBulletTrace(const FVector& StartTrace, const FVector& EndTrace,
	float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHits) const
{
	FHitResult Impact;

	// �켱 SweepRadius ���� �ѹ� Trace �����Ѵ� (SweepTrace�� ���̱� ����)
	// - FindFirstPawnHitResult()�� ������ Trace ������ ���� ����, OutHits�� Ȯ���ؼ� APawn �浹 ���������� ���̻� Trace���� �ʴ´�
	if (FindFirstPawnHitResult(OutHits) == INDEX_NONE)
	{
		Impact = WeaponTrace(StartTrace, EndTrace, /*SweepRadius=*/0.0f, bIsSimulated, /*out*/ OutHits);
	}

	if (FindFirstPawnHitResult(OutHits) == INDEX_NONE)
	{
		// ���� SweepRadius�� 0���� ũ��, 0.0�϶� ��� �浹 ���ɼ��� Ŀ���Ƿ� �ѹ� �� Trace ����
		if (SweepRadius > 0.0f)
		{
			// SweepHits�� Trace�� OutHits ������ ����
			TArray<FHitResult> SweepHits;
			Impact = WeaponTrace(StartTrace, EndTrace, SweepRadius, bIsSimulated, SweepHits);

			// Sphere Trace�� ������ ����� SweepHits�� �˻��Ͽ�, Pawn�� �ִ°� �˻�
			const int32 FirstPawnIdx = FindFirstPawnHitResult(SweepHits);
			if (SweepHits.IsValidIndex(FirstPawnIdx))
			{
				// ���� �ִٸ�, SweepHits�� FirstPawnIdx���� ��ȸ�ϸ�, bBlockingHit�� ���� OutHits�� ���� ��� üũ�Ѵ�
				bool bUseSweepHits = true;
				for (int32 Idx = 0; Idx < FirstPawnIdx; ++Idx)
				{
					const FHitResult& CurHitResult = SweepHits[Idx];

					auto Pred = [&CurHitResult](const FHitResult& Other)
						{
							return Other.HitObjectHandle == CurHitResult.HitObjectHandle;
						};

					// OutHits�� �ִٸ�... SweepHits�� OutHits�� ������Ʈ ���� �ʴ´� (�̹� �浹�ߴ� ������ �����ϱ�?) (early-out��)
					// - OutHits�� bBlockingHits�� SweepHits�� ������ �˰ԵǾ���
					if (CurHitResult.bBlockingHit && OutHits.ContainsByPredicate(Pred))
					{
						bUseSweepHits = false;
						break;
					}
				}

				// SweepHits
				if (bUseSweepHits)
				{
					OutHits = SweepHits;
				}
			}
		}
	}

	return Impact;
}

FHitResult UGradGameplayAbility_RangedWeapon::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace,float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHitResults) const
{
	TArray<FHitResult> HitResults;

	// Complex Geometry�� Trace�� �����ϸ�, AvatarActor�� AttachParent�� ������ ������Ʈ���� �浹�� �����Ѵ�
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(WeaponTrace), /*bTraceComplex*/true, /*IgnoreActor=*/GetAvatarActorFromActorInfo());
	TraceParams.bReturnPhysicalMaterial = true;

	// AvatarActor�� ������ Actors�� ã�� IgnoredActors�� �߰��Ѵ�
	AddAdditionalTraceIgnoreActors(TraceParams);

	// Weapon ���� Collision Channel�� Trace ����
	const ECollisionChannel TraceChannel = DetermineTraceChannel(TraceParams, bIsSimulated);
	if (SweepRadius > 0.0f)
	{
		GetWorld()->SweepMultiByChannel(HitResults, StartTrace, EndTrace, FQuat::Identity, TraceChannel, FCollisionShape::MakeSphere(SweepRadius), TraceParams);
	}
	else
	{
		GetWorld()->LineTraceMultiByChannel(HitResults, StartTrace, EndTrace, TraceChannel, TraceParams);
	}

	FHitResult Hit(ForceInit);
	if (HitResults.Num() > 0)
	{
		// HitResults �߿� �ߺ�(����) Object�� HitResult ������ ����
		for (FHitResult& CurHitResult : HitResults)
		{
			auto Pred = [&CurHitResult](const FHitResult& Other)
				{
					return Other.HitObjectHandle == CurHitResult.HitObjectHandle;
				};

			if (!OutHitResults.ContainsByPredicate(Pred))
			{
				OutHitResults.Add(CurHitResult);
			}
		}

		// Hit�� ���� ������ ���� Impact�� ����
		Hit = OutHitResults.Last();
	}
	else
	{
		// Hit�� ��� ���� �⺻ ������ ĳ��
		Hit.TraceStart = StartTrace;
		Hit.TraceEnd = EndTrace;
	}

	return Hit;
}

ECollisionChannel UGradGameplayAbility_RangedWeapon::DetermineTraceChannel(FCollisionQueryParams& TraceParams,
	bool bIsSimulated) const
{
	return Grad_TraceChannel_Weapon;
}

void UGradGameplayAbility_RangedWeapon::AddAdditionalTraceIgnoreActors(FCollisionQueryParams& TraceParams) const
{
	if (AActor* Avatar = GetAvatarActorFromActorInfo())
	{
		TArray<AActor*> AttachedActors;

		// GetAttachedActors�� �ѹ� ����:
		// - �ش� �Լ��� Recursively�ϰ� ��� Actors�� �����Ѵ�
		// - �ٵ� �� �ռ� FindFirstPawnHitResult �̰� �� �Ѵܰ踸 �ұ�? ---
		Avatar->GetAttachedActors(AttachedActors);

		TraceParams.AddIgnoredActors(AttachedActors);
	}
}

void UGradGameplayAbility_RangedWeapon::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData,FGameplayTag ApplicationTag)
{
	UAbilitySystemComponent* MyAbilitySystemComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilitySystemComponent);

	if (const FGameplayAbilitySpec* AbilitySpec = MyAbilitySystemComponent->FindAbilitySpecFromHandle(CurrentSpecHandle))
	{
		// ���� Stack���� InData���� ���� Local�� Ownership�� �����´�
		FGameplayAbilityTargetDataHandle LocalTargetDataHandle(MoveTemp(const_cast<FGameplayAbilityTargetDataHandle&>(InData)));

		// CommitAbility ȣ��� GE(GameplayEffect)�� ó���Ѵ�
		// - ���� ���� �츮�� GE�� ���� ó���� �������� ���� ���̴�
		if (CommitAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo))
		{
			// OnRangeWeaponTargetDataReady BP ��� ȣ���Ѵ�:
			// - ���� ���⼭ �츮�� GCN(GameplayCueNotify)�� ó���� ���̴�
			OnRangeWeaponTargetDataReady(LocalTargetDataHandle);

			FHitResult HitResult = UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(LocalTargetDataHandle, 0);
			
			// ���� ��Ŷ��? 
			AGradCharacter* const AttackAvatar = Cast<AGradCharacter>(GetAvatarActorFromActorInfo());
			if (AttackAvatar)
			{
				// �浹 �ȰŶ��?
				AGradNetCharacter* const HitAvatar = Cast<AGradNetCharacter>(HitResult.GetActor());
				if (HitAvatar)
				{
					// ���� ���� �ƴ϶��?
					if (AttackAvatar->GetTeamType() != HitAvatar->GetTeamType())
					{
						SendFire(HitAvatar->GetPlayerId(), true);
					}
					else
					{
						SendFire(0, false);
					}
				}
				else
				{
					SendFire(0, false);
				}
			}
		}
		else
		{
			// CommitAbility�� �����Ͽ�����, EndAbility BP Node ȣ���Ѵ�
			K2_EndAbility();
		}
	}
}

UGradRangedWeaponInstance* UGradGameplayAbility_RangedWeapon::GetWeaponInstance()
{
	return Cast<UGradRangedWeaponInstance>(GetAssociatedEquipment());
}

void UGradGameplayAbility_RangedWeapon::SendFire(uint64 HitObjectId, bool IsHit)
{
	AGradCharacter* const AvatarPawn = Cast<AGradCharacter>(GetAvatarActorFromActorInfo());
	if (AvatarPawn)
	{
		if (UGradNetworkComponent* NCP = AvatarPawn->FindComponentByClass<UGradNetworkComponent>())
		{
			Protocol::PosInfo* PosInfo = NCP->GetPosInfo();

			Protocol::C_FIRE FirekPkt;
			
			Protocol::FireInfo* Info = FirekPkt.mutable_info();

			Info->set_attack_object_id(PosInfo->object_id());
			Info->set_hit_object_id(HitObjectId);
			Info->set_is_target_hit(IsHit);
			Info->set_skill_type(Protocol::Skill_TYPE_RIFLE);
			Info->set_finalcamloc_x(WeaponTransform.GetTranslation().X);
			Info->set_finalcamloc_y(WeaponTransform.GetTranslation().Y);
			Info->set_finalcamloc_z(WeaponTransform.GetTranslation().Z);
			Info->set_camrot_pitch(WeaponTransform.Rotator().Pitch);
			Info->set_camrot_yaw(WeaponTransform.Rotator().Yaw);
			Info->set_camrot_roll(WeaponTransform.Rotator().Roll);

			for (auto World : GEngine->GetWorldContexts())
			{
				if (const UGameInstance* GameInstance = World.World()->GetGameInstance())
				{
					if (UNetworkManager* NetworkManager = GameInstance->GetSubsystem<UNetworkManager>())
					{
						NetworkManager->SendPacket(FirekPkt);
						return;
					}
				}
			}
		}
	}
}