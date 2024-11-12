#include "pch.h"
#include "GameSessionManager.h"
#include "GameSession.h"

GameSessionManager GSessionManager;

void GameSessionManager::Add(GameSessionRef session)
{
	WRITE_LOCK;
	_sessions.insert(session);
}

void GameSessionManager::Remove(GameSessionRef session)
{
	WRITE_LOCK;
	_sessions.erase(session);
}

void GameSessionManager::Broadcast(SendBufferRef sendBuffer)
{
	// �����ϰ��� �ϴ� ��Ŷ�� 1000���� Session���� ������ wsaBuf�� �����Ͽ� Send�ϴ� �� ���� 
	// SendBuffer�� �ϳ� ����� �� SendBuffer�� ����Ʈ �����͸� �ǳ��ֵ��� �Ͽ� �������� ���̴� ���� �߿��� �����̴�.
	// �ᱹ ������ ������ ����Ʈ �����͸� ����ϰ� �Ǿ� Reference Counting�� ���

	WRITE_LOCK;
	for (GameSessionRef session : _sessions)
	{
		session->Send(sendBuffer);
	}
}