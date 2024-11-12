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

	// ��ǥ ����
	player->posInfo->set_x(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_y(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_z(88.f);
	player->posInfo->set_yaw(Utils::GetRandom(0.f, 500.f));
	player->posInfo->set_move_state(Protocol::MoveState::MOVE_STATE_IDLE);

	// ���� ����
	player->statInfo->set_object_id(player->objectInfo->object_id());
	player->statInfo->set_hp(100);
	player->statInfo->set_max_hp(100);
	player->statInfo->set_damage(10);


	// ���� ����� ���� �÷��̾�� �˸���.
	{
		Protocol::S_ENTER_GAME enterGamePkt;
		enterGamePkt.set_success(success);

		Protocol::ObjectInfo* objectInfo = new Protocol::ObjectInfo();
		objectInfo->CopyFrom(*player->objectInfo);
		enterGamePkt.set_allocated_player(objectInfo);

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(enterGamePkt);
		if (auto session = player->session.lock())
			session->Send(sendBuffer);

		static bool OnTime = false;

		//DoTimer(2000, &Room::TestSendStat, player->statInfo->object_id(), static_cast<float>(player->statInfo->hp()), 0.f);

	}


	// ���ο� ���� ����� ������ �ٸ� �÷��̾�� �˸���.
	{
		Protocol::S_SPAWN spawnPkt;

		Protocol::ObjectInfo* objectInfo = spawnPkt.add_objects();
		objectInfo->CopyFrom(*player->objectInfo);

		// TODO: Sector ���� 
		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(spawnPkt);
		Broadcast(sendBuffer, player->objectInfo->object_id());
	}

	// ������ ������ �÷��̾���� ���� ������ �÷��̾�� �˷���� �Ѵ�.
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

	return success;
}

bool Room::HandleLeavePlayer(PlayerRef player)
{
	if (player == nullptr)
		return false;

	const uint64 objectId = player->objectInfo->object_id();
	bool success = RemoveObject(objectId);

	// ���� ����� �����ϴ� �÷��̾�� �˸���.
	{
		Protocol::S_LEAVE_GAME leaveGamePkt;
		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(leaveGamePkt);
		if (auto session = player->session.lock())
			session->Send(sendBuffer);
	}

	// ���� ����� ��ο��� �˸���.
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
	const uint64 attackId = pkt.info().attack_object_id();
	const uint64 hitId = pkt.info().hit_object_id();
	const bool isHit = pkt.info().is_target_hit();


	if (isHit)
	{
		auto attackPlayer = _objects.find(attackId)->second;
		auto hitPlayer = _objects.find(hitId)->second;

		if (attackPlayer == nullptr || hitPlayer == nullptr) return;

		Protocol::S_FIRE firekPkt;
		{
			Protocol::FireInfo* info = firekPkt.mutable_info();
			info->CopyFrom(pkt.info());
		}

		{
			SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(firekPkt);
			Broadcast(sendBuffer);
		}
		float attackDamage = attackPlayer->statInfo->damage();
		float hitHp = hitPlayer->statInfo->hp();

		float newHP = hitHp - attackDamage;
		if (newHP <= 0)
		{
			newHP = 0;
			// TODO: �׾��ٴ� ��Ŷ ���� �ʿ�
		}

		// ====

		// TODO: ���߿� Health��� ��Ŷ���� damage���� ���ʿ��� ���� ���� ������
		Protocol::S_STAT statPkt;
		Protocol::StatInfo* info = statPkt.mutable_info();
		info->set_object_id(hitId);
		info->set_hp(newHP);
		{
			SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(statPkt);
			Broadcast(sendBuffer);
		}

		hitPlayer->statInfo->set_hp(newHP);

		cout << "���� ID: " << attackId << "�ǰ� ID: " << hitId << endl;
		cout << "���� Damage: " << attackDamage << "�ǰ� �� HP: " << newHP << endl << endl;

	}
	else
	{
		Protocol::S_FIRE firekPkt;
		{
			Protocol::FireInfo* info = firekPkt.mutable_info();
			info->CopyFrom(pkt.info());
		}

		SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(firekPkt);
		Broadcast(sendBuffer);
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
			
			// TODO: �������� źâ �˻� �� ����
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

void Room::TestSendStat(uint64 playerID, float BeforeHP, float NewHP)
{
	Protocol::S_STAT statPkt;
	Protocol::StatInfo* info = statPkt.mutable_info();
	info->set_object_id(playerID);
	info->set_hp(NewHP);
	
	SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(statPkt);
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