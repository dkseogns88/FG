#pragma once

#define WIN32_LEAN_AND_MEAN

#ifdef _DEBUG
#pragma comment(lib, "ServerCore\\Debug\\ServerCore.lib")
#pragma comment(lib, "Protobuf\\Debug\\libprotobufd.lib")
#else
#pragma comment(lib, "ServerCore\\Release\\ServerCore.lib")
#pragma comment(lib, "Protobuf\\Release\\libprotobuf.lib")
#endif

#include "CorePch.h"


#include "FVector.h"
#include "Enum.pb.h"
#include "ClientPacketHandler.h"
#include "Utils.h"
#include "GameSession.h"

USING_SHARED_PTR(GameSession);
USING_SHARED_PTR(Room);
USING_SHARED_PTR(Object);
USING_SHARED_PTR(Player);
USING_SHARED_PTR(Statue);


#define SEND_PACKET(pkt)													\
	SendBufferRef sendBuffer = ClientPacketHandler::MakeSendBuffer(pkt);	\
	session->Send(sendBuffer)