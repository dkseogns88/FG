#include "pch.h"
#include "Statue.h"

Statue::Statue()
{
}

Statue::~Statue()
{
}

Protocol::StatueType Statue::GetStatueType()
{
	return _statueType;
}

void Statue::SetStatueType(const Protocol::StatueType statueType)
{
	_statueType = statueType;
}
