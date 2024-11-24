#pragma once
#include "JobQueue.h"

class Room : public JobQueue
{
public:
	Room();
	virtual ~Room();

	bool HandleEnterPlayer(PlayerRef player);
	bool HandleLeavePlayer(PlayerRef player);

	void HandleMove(Protocol::C_MOVE pkt);
	void HandleFire(Protocol::C_FIRE pkt);
	void HandleReload(Protocol::C_RELOAD pkt);
	void HandleDash(Protocol::C_DASH pkt);
	void HandleShield(Protocol::C_SHIELD pkt);

	void HandleStatueActive(Protocol::C_STATUEACTIVE pkt);
	void HandleStatueDeActive(Protocol::C_STATUEDEACTIVE pkt);

private:
	void GameStart();
	void ObjectRespawn(uint64 objectId);

	void RandomStatueActive();
	void RedTeamStatueGaugeUp(uint64 objectId);
	void BlueTeamStatueGaugeUp(uint64 objectId);

	void ResetGaugeAndSendGauge(uint64 objectId);


	void ResetPlayerBuff(uint64 objectId);

public:
	RoomRef GetRoomRef();

private:
	bool AddObject(ObjectRef object);

	bool RemoveObject(uint64 objectId);

public:
	void Broadcast(SendBufferRef sendBuffer, uint64 exceptId = 0);
	void RedTeamBroadcast(SendBufferRef sendBuffer);
	void BlueTeamBroadcast(SendBufferRef sendBuffer);

private:
	unordered_map<uint64, ObjectRef> _objects;
	unordered_map<uint64, ObjectRef> _redTeam_objects;
	unordered_map<uint64, ObjectRef> _blueTeam_objects;

	// TeamInfo
	int32 RedTeamCount	= 1;
	int32 BlueTeamCount = 1;

	float RedTeamScore = 0;
	float BlueTeamScore = 0;

	// Statue
	Array<StatueRef, 4> _statues;

	float RedTeamGauge = 0.f;
	float BlueTeamGauge = 0.f;

	bool RedTeamStatueActive = false;
	bool BlueTeamStatueActive = false;
};

extern RoomRef GRoom;