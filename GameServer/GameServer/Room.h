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


private:
	void TestGameStart();
	void GameStart(Protocol::S_GAMESTART pkt);
	void ObjectRespawn(uint64 objectId);

public:
	RoomRef GetRoomRef();

private:
	bool AddObject(ObjectRef object);

	bool RemoveObject(uint64 objectId);

public:
	void Broadcast(SendBufferRef sendBuffer, uint64 exceptId = 0);

private:
	unordered_map<uint64, ObjectRef> _objects;

	// TeamInfo
	int32 RedTeamCount = 1;
	int32 BlueTeamCount = 1;

	float RedTeamScore = 0;
	float BlueTeamScore = 0;

};

extern RoomRef GRoom;