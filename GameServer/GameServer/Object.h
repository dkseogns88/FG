#pragma once

class Room;

class Object : public enable_shared_from_this<Object>
{
public:
	Object();
	virtual ~Object();

	void SetDead(bool isDead) { _isDead = isDead; }
	void SetBeforeDamage(float before_damage) { _before_damage = before_damage; }

	Protocol::TeamType GetTeamType() { return objectInfo->team_type(); }
	float GetBeforeDamage() { return _before_damage; }

	bool IsPlayer() { return _isPlayer; }
	bool IsDead() { return _isDead; }
public:
	Protocol::ObjectInfo* objectInfo;
	Protocol::PosInfo* posInfo;
	Protocol::StatInfo* statInfo;

public:
	atomic<weak_ptr<Room>> room;

protected:
	bool _isPlayer = false;
	bool _isDead = false;
	
	float _before_damage = 0.f;

};

