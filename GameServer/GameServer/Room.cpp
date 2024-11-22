#include "pch.h"
#include "Room.h"
#include "GameSession.h"
#include "ObjectUtils.h"
#include "Player.h"

RoomRef GRoom = make_shared<Room>();

Room::Room()
{}

Room::~Room()
{}

bool Room::HandleEnterPlayer(PlayerRef player)
{
	bool success = AddObject(player);

	// 인원 찼음! 입장 불가!
	if (RedTeamCount <= 0 && BlueTeamCount <= 0) return false;

	// 좌표 설정
	player->posInfo->set_x(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_y(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_z(88.f);
	player->posInfo->set_yaw(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_move_state(Protocol::MoveState::MOVE_STATE_IDLE);

	// 스탯 설정
	player->statInfo->set_object_id(player->objectInfo->object_id());
	player->statInfo->set_hp(100);
	player->statInfo->set_max_hp(100);
	player->statInfo->set_damage(50);

	// 팀 설정
	if (RedTeamCount > 0)
	{
		player->SetTeamType(ETeamType::Red);
		--RedTeamCount;
	}
	else if (BlueTeamCount > 0)
	{
		player->SetTeamType(ETeamType::Blue);
		--BlueTeamCount;
	}

	// 입장 사실을 들어온 플레이어에게 알린다.
	{
		Protocol::S_ENTER_GAME enterGamePkt;
		enterGamePkt.set_success(success);

		Protocol::ObjectInfo* objectInfo = new Protocol::ObjectInfo();
		objectInfo->CopyFrom(*player->objectInfo);
		enterGamePkt.set_allocated_player(objectInfo);

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(enterGamePkt);
		if (auto session = player->session.lock())
			session->Send(sendBuffer);
	}


	// 새로운 입장 사실을 기존의 다른 플레이어에게 알린다.
	{
		Protocol::S_SPAWN spawnPkt;

		Protocol::ObjectInfo* objectInfo = spawnPkt.add_objects();
		objectInfo->CopyFrom(*player->objectInfo);

		// TODO: Sector 관리 
		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(spawnPkt);
		Broadcast(sendBuffer, player->objectInfo->object_id());
	}

	// 기존의 입장한 플레이어들을 새로 입장한 플레이어에게 알려줘야 한다.
	{
		Protocol::S_SPAWN spawnPkt;

		for (auto& item : _objects)
		{
			if (item.second->IsPlayer() == false)
				continue;
			if (item.second == player)
				continue;

			Protocol::ObjectInfo* objectInfo = spawnPkt.add_objects();
			objectInfo->CopyFrom(*item.second->objectInfo);
		}

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(spawnPkt);
		if (auto session = player->session.lock())
			session->Send(sendBuffer);
	}

	// 모든 인원 입장 완료 게임 준비 및 시작
	if (RedTeamCount == 0 && BlueTeamCount == 0) {
		Protocol::S_GAMEREADY readyPkt;
		readyPkt.set_ready(true);


		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(readyPkt);
		Broadcast(sendBuffer);
		DoTimer(5000, &Room::TestGameStart);
	}

	return success;
}

bool Room::HandleLeavePlayer(PlayerRef player)
{
	if (player == nullptr)
		return false;

	const uint64 objectId = player->objectInfo->object_id();
	bool success = RemoveObject(objectId);

	// 퇴장 사실을 퇴장하는 플레이어에게 알린다.
	{
		Protocol::S_LEAVE_GAME leaveGamePkt;
		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(leaveGamePkt);
		if (auto session = player->session.lock())
			session->Send(sendBuffer);
	}

	// 퇴장 사실을 모두에게 알린다.
	{
		Protocol::S_DESPAWN despawnPkt;
		despawnPkt.add_object_ids(objectId);

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(despawnPkt);
		Broadcast(sendBuffer, objectId);

		if (auto session = player->session.lock())
			session->Send(sendBuffer);
	}

	return true;
}

void Room::HandleMove(Protocol::C_MOVE pkt)
{
	const uint64 objectId = pkt.info().object_id();
	if (_objects.find(objectId) == _objects.end())
		return;

	PlayerRef player = dynamic_pointer_cast<Player>(_objects[objectId]);
	player->posInfo->CopyFrom(pkt.info());

	{
		Protocol::S_MOVE movePkt;
		{
			Protocol::PosInfo* info = movePkt.mutable_info();
			info->CopyFrom(pkt.info());
		}

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(movePkt);
		Broadcast(sendBuffer);
	}
}

void Room::HandleFire(Protocol::C_FIRE pkt)
{
	{
		Protocol::S_FIRE firekPkt;
		{
			Protocol::FireInfo* info = firekPkt.mutable_info();
			info->CopyFrom(pkt.info());
		}
		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(firekPkt);
		Broadcast(sendBuffer);
	}

	const uint64 attackId = pkt.info().attack_object_id();
	const uint64 hitId = pkt.info().hit_object_id();
	const bool isHit = pkt.info().is_target_hit();
	
	auto attackIter = _objects.find(attackId);
	auto hitIter = _objects.find(hitId);

	if (attackIter == _objects.end() || hitIter == _objects.end()) return;
	
	auto attackPlayer = attackIter->second;
	auto hitPlayer = hitIter->second;

	if (attackPlayer == nullptr || hitPlayer == nullptr) return;


	if (isHit)
	{
		float attackDamage = attackPlayer->statInfo->damage();
		float hitHp = hitPlayer->statInfo->hp();

		float newHP = hitHp - attackDamage;

		if (hitPlayer->IsDead()) return;

		if (newHP <= 0)
		{
			newHP = 0;
			hitPlayer->SetDead(true);
			
			if (attackPlayer->GetTeamType() == ETeamType::Red)
			{
				++RedTeamScore;
			}
			else if (attackPlayer->GetTeamType() == ETeamType::Blue)
			{
				++BlueTeamScore;
			}

			Protocol::S_SCORE scorePkt;
			scorePkt.set_redscore(RedTeamScore);
			scorePkt.set_bluescore(BlueTeamScore);
			SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(scorePkt);
			Broadcast(sendBuffer);

			// TODO: 여기서 특정 시간 뒤에 클라이언트 Respawn 처리
			DoTimer(5000, &Room::ObjectRespawn, hitId);
		}

		Protocol::S_HIT hitPkt;
		Protocol::HitInfo* info = hitPkt.mutable_info();
		info->set_attack_object_id(attackId);
		info->set_attack_damage(attackDamage);
		info->set_hit_object_id(hitId);
		info->set_hit_hp(newHP);

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(hitPkt);
		Broadcast(sendBuffer);

		hitPlayer->statInfo->set_hp(newHP);

		cout << "공격 ID: " << attackId << "  피격 ID: " << hitId << endl;
		cout << "공격 Damage: " << attackDamage << "  피격 후 HP: " << newHP << endl << endl;
	}
}

void Room::HandleReload(Protocol::C_RELOAD pkt)
{
	const uint64 objectId = pkt.object_id();
	if (_objects.find(objectId) == _objects.end())
		return;

	{
		Protocol::S_RELOAD reloadPkt;
		{
			reloadPkt.set_object_id(objectId);
			
			// TODO: 서버에서 탄창 검사 후 전송
			reloadPkt.set_success(true);
		}

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(reloadPkt);
		Broadcast(sendBuffer);
	}

}

void Room::HandleDash(Protocol::C_DASH pkt)
{
	const uint64 objectId = pkt.object_id();
	if (_objects.find(objectId) == _objects.end())
		return;

	Protocol::S_DASH dashPkt;
	dashPkt.set_object_id(pkt.object_id());
	dashPkt.set_dash_type(pkt.dash_type());
	dashPkt.set_move_direction_x(pkt.move_direction_x());
	dashPkt.set_move_direction_y(pkt.move_direction_y());
	dashPkt.set_move_direction_z(pkt.move_direction_z());

	SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(dashPkt);
	Broadcast(sendBuffer);
}

void Room::TestGameStart()
{
	Protocol::S_GAMESTART gameStartpkt;
	gameStartpkt.set_start(true);


	SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(gameStartpkt);
	Broadcast(sendBuffer);
}

void Room::GameStart(Protocol::S_GAMESTART pkt)
{

}

void Room::ObjectRespawn(uint64 objectId)
{
	if (_objects.find(objectId) == _objects.end())
		return;

	PlayerRef player = dynamic_pointer_cast<Player>(_objects[objectId]);

	// 좌표 설정(레드팀, 블루팀)
	player->posInfo->set_x(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_y(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_z(88.f);
	player->posInfo->set_yaw(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_move_state(Protocol::MoveState::MOVE_STATE_IDLE);

	// 스탯 설정
	player->statInfo->set_hp(100);
	player->statInfo->set_max_hp(100);
	player->statInfo->set_damage(50);

	// 죽었다가 살아남
	player->SetDead(false);


	// 죽은 캐릭 재생성 전송
	Protocol::S_RESPAWN respawnPkt;

	Protocol::ObjectInfo* objectInfo = respawnPkt.mutable_objects();
	objectInfo->CopyFrom(*player->objectInfo);

	SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(respawnPkt);
	Broadcast(sendBuffer);
}

RoomRef Room::GetRoomRef()
{
	return static_pointer_cast<Room>(shared_from_this());
}

bool Room::AddObject(ObjectRef object)
{
	if (_objects.find(object->objectInfo->object_id()) != _objects.end())
		return false;

	_objects.insert(make_pair(object->objectInfo->object_id(), object));

	object->room.store(GetRoomRef());

	return true;
}

bool Room::RemoveObject(uint64 objectId)
{
	if (_objects.find(objectId) == _objects.end())
		return false;

	ObjectRef object = _objects[objectId];
	object->room.store(weak_ptr<Room>());

	_objects.erase(objectId);

	return true;
}

void Room::Broadcast(SendBufferRef sendBuffer, uint64 exceptId)
{
	for (auto& item : _objects)
	{
		PlayerRef player = dynamic_pointer_cast<Player>(item.second);
		if (player == nullptr)
			break;

		if (player->objectInfo->object_id() == exceptId)
			continue;

		if (GameSessionRef session = player->session.lock())
			session->Send(sendBuffer);
	}
}