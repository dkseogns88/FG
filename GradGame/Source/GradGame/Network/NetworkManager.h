#pragma once

#include "CoreMinimal.h"
#include "ServerPacketHandler.h"
#include "PacketSession.h"
#include "Protocol.pb.h"
#include "../GradGame.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "NetworkManager.generated.h"

class AGradCharacter;
class AGradNetCharacter;


// TODO: 추후에는 UGameInstanceSubsystem를 사용하지 않고 GameStateComponent에 추가하는 방식으로 작성하자


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameReady_Delegate, bool, Ready);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStart_Delegate, bool, Start);
DECLARE_DELEGATE_TwoParams(FTeamMembers_ChangedDelegate, TArray<int32>, int32);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTeamHp_ChangedDelegate,int32, PlayerID, float, OldValue, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScoreGoal_Delegate, float, RedGoal, float, BlueGoal);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScore_ChangedDelegate, float, RedScore, float, BlueScore);

UCLASS()
class GRADGAME_API UNetworkManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
public:
	virtual void Deinitialize() override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override { return UObject::GetStatID(); };
	virtual bool IsTickable() const override { return IsConnected; }

public:
	UFUNCTION(BlueprintCallable)
	bool ConnectToGameServer();

	UFUNCTION(BlueprintCallable)
	void DisconnectFromGameServer();

	UFUNCTION(BlueprintCallable)
	void HandleRecvPackets();

	void SendPacket(SendBufferRef SendBuffer);

	template<typename T>
	void SendPacket(T packet) const;

public:
	void HandleSpawn(const Protocol::ObjectInfo& ObjectInfo, bool IsMine);
	void HandleSpawn(const Protocol::S_ENTER_GAME& EnterGamePkt);
	void HandleSpawn(const Protocol::S_SPAWN& SpawnPkt);

	void HandleDespawn(uint64 ObjectId);
	void HandleDespawn(const Protocol::S_DESPAWN& DespawnPkt);

	void HandleRespawn(const Protocol::S_RESPAWN& RespawnPkt);

	void HandleLeave(const Protocol::S_LEAVE_GAME& LeavePkt);

	void HandleMove(const Protocol::S_MOVE& MovePkt);
	void HandleStat(const Protocol::S_STAT& StatPkt);
	void HandleGameReady(const Protocol::S_GAMEREADY& ReadyPkt);
	void HandleGameStart(const Protocol::S_GAMESTART& StatPkt);
	void HandleFire(const Protocol::S_FIRE& FirePkt);
	void HandleReload(const Protocol::S_RELOAD& ReloadkPkt);
	void HandleHit(const Protocol::S_HIT& HitPkt);
	void HandleScore(const Protocol::S_SCORE& ScorePkt);
	void HandleDash(const Protocol::S_DASH& DashPkt);

private:
	void SpawnPlayer(const Protocol::ObjectInfo& ObjectInfo, bool IsMine);

public:
	class FSocket* Socket;

	UPROPERTY(BlueprintReadWrite, Category = "Network")
	FString IpAddress = TEXT("127.0.0.1");
	
	int16 Port = 7777;

	TSharedPtr<class PacketSession> GameServerSession;

	bool IsConnected = false;

public:
	UPROPERTY()
	TObjectPtr<APawn> MyPlayer;
	uint64 MyPlayerId = 0;

	UPROPERTY()
	TMap<uint64, TObjectPtr<APawn>> Objects;
	TArray<int32> PlayerIDs;

public:
	UPROPERTY(BlueprintAssignable)
	FGameReady_Delegate OnGameReady;
	UPROPERTY(BlueprintAssignable)
	FGameStart_Delegate OnGameStart;

	FTeamMembers_ChangedDelegate OnTeamMembersChanged;

	UPROPERTY(BlueprintAssignable)
	FTeamHp_ChangedDelegate OnTeamHpChanged;

	UPROPERTY(BlueprintAssignable)
	FScoreGoal_Delegate OnScoreGoal;

	UPROPERTY(BlueprintAssignable)
	FScore_ChangedDelegate OnScore;
};

template <typename T> 
void UNetworkManager::SendPacket(T packet) const
{
	if (Socket == nullptr || GameServerSession == nullptr)
		return;

	const SendBufferRef SendBuffer = ServerPacketHandler::MakeSendBuffer(packet);
	GameServerSession->SendPacket(SendBuffer);
}
