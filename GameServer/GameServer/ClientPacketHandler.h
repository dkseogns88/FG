#pragma once
#include "Protocol.pb.h"

#if UE_BUILD_DEBUG + UE_BUILD_DEVELOPMENT + UE_BUILD_TEST + UE_BUILD_SHIPPING >= 1
#include "../GradGame.h"
#endif

using PacketHandlerFunc = std::function<bool(PacketSessionRef&, BYTE*, int32)>;
extern PacketHandlerFunc GPacketHandler[UINT16_MAX];

enum : uint16
{
	PKT_C_LOGIN = 1000,
	PKT_S_LOGIN = 1001,
	PKT_C_ENTER_GAME = 1002,
	PKT_S_ENTER_GAME = 1003,
	PKT_C_LEAVE_GAME = 1004,
	PKT_S_LEAVE_GAME = 1005,
	PKT_S_SPAWN = 1006,
	PKT_S_DESPAWN = 1007,
	PKT_S_RESPAWN = 1008,
	PKT_C_MOVE = 1009,
	PKT_S_MOVE = 1010,
	PKT_S_STAT = 1011,
	PKT_S_GAMEREADY = 1012,
	PKT_S_GAMESTART = 1013,
	PKT_C_FIRE = 1014,
	PKT_S_FIRE = 1015,
	PKT_C_RELOAD = 1016,
	PKT_S_RELOAD = 1017,
	PKT_S_HIT = 1018,
	PKT_S_SCORE = 1019,
	PKT_C_DASH = 1020,
	PKT_S_DASH = 1021,
	PKT_C_SHIELD = 1022,
	PKT_S_SHIELD = 1023,
	PKT_C_STATUEACTIVE = 1024,
	PKT_S_STATUEACTIVE = 1025,
	PKT_C_STATUEDEACTIVE = 1026,
	PKT_S_STATUEDEACTIVE = 1027,
};

// Custom Handlers
bool Handle_INVALID(PacketSessionRef& session, BYTE* buffer, int32 len);
bool Handle_C_LOGIN(PacketSessionRef& session, Protocol::C_LOGIN& pkt);
bool Handle_C_ENTER_GAME(PacketSessionRef& session, Protocol::C_ENTER_GAME& pkt);
bool Handle_C_LEAVE_GAME(PacketSessionRef& session, Protocol::C_LEAVE_GAME& pkt);
bool Handle_C_MOVE(PacketSessionRef& session, Protocol::C_MOVE& pkt);
bool Handle_C_FIRE(PacketSessionRef& session, Protocol::C_FIRE& pkt);
bool Handle_C_RELOAD(PacketSessionRef& session, Protocol::C_RELOAD& pkt);
bool Handle_C_DASH(PacketSessionRef& session, Protocol::C_DASH& pkt);
bool Handle_C_SHIELD(PacketSessionRef& session, Protocol::C_SHIELD& pkt);
bool Handle_C_STATUEACTIVE(PacketSessionRef& session, Protocol::C_STATUEACTIVE& pkt);
bool Handle_C_STATUEDEACTIVE(PacketSessionRef& session, Protocol::C_STATUEDEACTIVE& pkt);

class ClientPacketHandler
{
public:
	static void Init()
	{
		for (int32 i = 0; i < UINT16_MAX; i++)
			GPacketHandler[i] = Handle_INVALID;
		GPacketHandler[PKT_C_LOGIN] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_LOGIN>(Handle_C_LOGIN, session, buffer, len); };
		GPacketHandler[PKT_C_ENTER_GAME] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_ENTER_GAME>(Handle_C_ENTER_GAME, session, buffer, len); };
		GPacketHandler[PKT_C_LEAVE_GAME] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_LEAVE_GAME>(Handle_C_LEAVE_GAME, session, buffer, len); };
		GPacketHandler[PKT_C_MOVE] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_MOVE>(Handle_C_MOVE, session, buffer, len); };
		GPacketHandler[PKT_C_FIRE] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_FIRE>(Handle_C_FIRE, session, buffer, len); };
		GPacketHandler[PKT_C_RELOAD] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_RELOAD>(Handle_C_RELOAD, session, buffer, len); };
		GPacketHandler[PKT_C_DASH] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_DASH>(Handle_C_DASH, session, buffer, len); };
		GPacketHandler[PKT_C_SHIELD] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_SHIELD>(Handle_C_SHIELD, session, buffer, len); };
		GPacketHandler[PKT_C_STATUEACTIVE] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_STATUEACTIVE>(Handle_C_STATUEACTIVE, session, buffer, len); };
		GPacketHandler[PKT_C_STATUEDEACTIVE] = [](PacketSessionRef& session, BYTE* buffer, int32 len) { return HandlePacket<Protocol::C_STATUEDEACTIVE>(Handle_C_STATUEDEACTIVE, session, buffer, len); };
	}

	static bool HandlePacket(PacketSessionRef& session, BYTE* buffer, int32 len)
	{
		PacketHeader* header = reinterpret_cast<PacketHeader*>(buffer);
		return GPacketHandler[header->id](session, buffer, len);
	}
	static SendBufferRef MakeSendBuffer(Protocol::S_LOGIN& pkt) { return MakeSendBuffer(pkt, PKT_S_LOGIN); }
	static SendBufferRef MakeSendBuffer(Protocol::S_ENTER_GAME& pkt) { return MakeSendBuffer(pkt, PKT_S_ENTER_GAME); }
	static SendBufferRef MakeSendBuffer(Protocol::S_LEAVE_GAME& pkt) { return MakeSendBuffer(pkt, PKT_S_LEAVE_GAME); }
	static SendBufferRef MakeSendBuffer(Protocol::S_SPAWN& pkt) { return MakeSendBuffer(pkt, PKT_S_SPAWN); }
	static SendBufferRef MakeSendBuffer(Protocol::S_DESPAWN& pkt) { return MakeSendBuffer(pkt, PKT_S_DESPAWN); }
	static SendBufferRef MakeSendBuffer(Protocol::S_RESPAWN& pkt) { return MakeSendBuffer(pkt, PKT_S_RESPAWN); }
	static SendBufferRef MakeSendBuffer(Protocol::S_MOVE& pkt) { return MakeSendBuffer(pkt, PKT_S_MOVE); }
	static SendBufferRef MakeSendBuffer(Protocol::S_STAT& pkt) { return MakeSendBuffer(pkt, PKT_S_STAT); }
	static SendBufferRef MakeSendBuffer(Protocol::S_GAMEREADY& pkt) { return MakeSendBuffer(pkt, PKT_S_GAMEREADY); }
	static SendBufferRef MakeSendBuffer(Protocol::S_GAMESTART& pkt) { return MakeSendBuffer(pkt, PKT_S_GAMESTART); }
	static SendBufferRef MakeSendBuffer(Protocol::S_FIRE& pkt) { return MakeSendBuffer(pkt, PKT_S_FIRE); }
	static SendBufferRef MakeSendBuffer(Protocol::S_RELOAD& pkt) { return MakeSendBuffer(pkt, PKT_S_RELOAD); }
	static SendBufferRef MakeSendBuffer(Protocol::S_HIT& pkt) { return MakeSendBuffer(pkt, PKT_S_HIT); }
	static SendBufferRef MakeSendBuffer(Protocol::S_SCORE& pkt) { return MakeSendBuffer(pkt, PKT_S_SCORE); }
	static SendBufferRef MakeSendBuffer(Protocol::S_DASH& pkt) { return MakeSendBuffer(pkt, PKT_S_DASH); }
	static SendBufferRef MakeSendBuffer(Protocol::S_SHIELD& pkt) { return MakeSendBuffer(pkt, PKT_S_SHIELD); }
	static SendBufferRef MakeSendBuffer(Protocol::S_STATUEACTIVE& pkt) { return MakeSendBuffer(pkt, PKT_S_STATUEACTIVE); }
	static SendBufferRef MakeSendBuffer(Protocol::S_STATUEDEACTIVE& pkt) { return MakeSendBuffer(pkt, PKT_S_STATUEDEACTIVE); }

private:
	template<typename PacketType, typename ProcessFunc>
	static bool HandlePacket(ProcessFunc func, PacketSessionRef& session, BYTE* buffer, int32 len)
	{
		PacketType pkt;
		if (pkt.ParseFromArray(buffer + sizeof(PacketHeader), len - sizeof(PacketHeader)) == false)
			return false;

		return func(session, pkt);
	}

	template<typename T>
	static SendBufferRef MakeSendBuffer(T& pkt, uint16 pktId)
	{
		const uint16 dataSize = static_cast<uint16>(pkt.ByteSizeLong());
		const uint16 packetSize = dataSize + sizeof(PacketHeader);

#if UE_BUILD_DEBUG + UE_BUILD_DEVELOPMENT + UE_BUILD_TEST + UE_BUILD_SHIPPING >= 1
		SendBufferRef sendBuffer = MakeShared<SendBuffer>(packetSize);
#else
		SendBufferRef sendBuffer = GSendBufferManager->Open(packetSize);
#endif

		PacketHeader* header = reinterpret_cast<PacketHeader*>(sendBuffer->Buffer());
		header->size = packetSize;
		header->id = pktId;
		pkt.SerializeToArray(&header[1], dataSize);
		sendBuffer->Close(packetSize);

		return sendBuffer;
	}
};