#pragma once



class Statue
{
public:
	Statue();
	~Statue();


	Protocol::StatueType GetStatueType();
	void SetStatueType(const Protocol::StatueType statueType);

private:
	Protocol::StatueType _statueType = Protocol::StatueType::STATUE_TYPE_NONE;
};

