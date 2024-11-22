#include "ServerPacketHandler.h"
#include "BufferReader.h"
#include "../GradGame.h"
#include "../System/GradGameInstance.h"
#include "NetworkManager.h"

PacketHandlerFunc GPacketHandler[UINT16_MAX];

UNetworkManager* GetWorldNetwork(const PacketSessionRef& Session)
{
	for (auto World : GEngine->GetWorldContexts())
	{
		if (const UGameInstance* GameInstance = World.World()->GetGameInstance())
		{
			if (UNetworkManager* NetworkManager = GameInstance->GetSubsystem<UNetworkManager>())
			{
				if (NetworkManager->GameServerSession == Session)
					return NetworkManager;
			}
		}
	}
	return nullptr;
}

bool Handle_INVALID(PacketSessionRef& session, BYTE* buffer, int32 len)
{
	PacketHeader* header = reinterpret_cast<PacketHeader*>(buffer);

	// TODO : Log
	
	return false;
}

bool Handle_S_LOGIN(PacketSessionRef& session, Protocol::S_LOGIN& pkt)
{
	// TODO : 로그인 실패 처리

	Protocol::C_ENTER_GAME EnterGamePkt;
	EnterGamePkt.set_playerindex(0);

	if (const UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->SendPacket(EnterGamePkt);
		return true;
	}

	return false;
}

bool Handle_S_ENTER_GAME(PacketSessionRef& session, Protocol::S_ENTER_GAME& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleSpawn(pkt);
		return true;
	}
	return false;
}

bool Handle_S_LEAVE_GAME(PacketSessionRef& session, Protocol::S_LEAVE_GAME& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleLeave(pkt);
		return true;
	}

	return false;
}

bool Handle_S_SPAWN(PacketSessionRef& session, Protocol::S_SPAWN& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleSpawn(pkt);
		return true;
	}

	return false;
}

bool Handle_S_DESPAWN(PacketSessionRef& session, Protocol::S_DESPAWN& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleDespawn(pkt);
		return true;
	}

	return false;
}

bool Handle_S_RESPAWN(PacketSessionRef& session, Protocol::S_RESPAWN& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleRespawn(pkt);
		return true;
	}

	return false;
}

bool Handle_S_MOVE(PacketSessionRef& session, Protocol::S_MOVE& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleMove(pkt);
		return true;
	}

	return false;
}

bool Handle_S_STAT(PacketSessionRef& session, Protocol::S_STAT& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleStat(pkt);
		return true;
	}
	return false;
}

bool Handle_S_GAMEREADY(PacketSessionRef& session, Protocol::S_GAMEREADY& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleGameReady(pkt);
		return true;
	}
	return false;
}

bool Handle_S_GAMESTART(PacketSessionRef& session, Protocol::S_GAMESTART& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleGameStart(pkt);
		return true;
	}
	return false;
}

bool Handle_S_FIRE(PacketSessionRef& session, Protocol::S_FIRE& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleFire(pkt);
		return true;
	}
	return false;
}

bool Handle_S_RELOAD(PacketSessionRef& session, Protocol::S_RELOAD& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleReload(pkt);
		return true;
	}
	return false;
}

bool Handle_S_HIT(PacketSessionRef& session, Protocol::S_HIT& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleHit(pkt);
		return true;
	}
	return false;
}

bool Handle_S_SCORE(PacketSessionRef& session, Protocol::S_SCORE& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleScore(pkt);
		return true;
	}
	return false;
}

bool Handle_S_DASH(PacketSessionRef& session, Protocol::S_DASH& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleDash(pkt);
		return true;
	}
	return false;
}

bool Handle_S_SHIELD(PacketSessionRef& session, Protocol::S_SHIELD& pkt)
{
	if (UNetworkManager* GameNetwork = GetWorldNetwork(session))
	{
		GameNetwork->HandleShield(pkt);
		return true;
	}
	return false;
}