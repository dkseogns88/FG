#pragma once
#include "IocpCore.h"
#include "IocpEvent.h"
#include "NetAddress.h"
#include "RecvBuffer.h"

class Service;

/*----------------------------
	Session
	- client에 관한 정보들
	- 얘도 IocpCore에 등록할거임
-----------------------------*/

class Session : public IocpObject
{
	friend class Listener;
	friend class IocpCore;
	friend class Service;

	enum
	{
		BUFFER_SIZE = 0x10000, // 64KB
	};

public:
	Session();
	virtual ~Session();

public:
						/* 외부에서 사용 */
	void				Send(SendBufferRef sendBuffer);
	bool				Connect();
	void				Disconnect(const WCHAR* cause);

	shared_ptr<Service>	GetService() { return _service.lock(); }
	void				SetService(shared_ptr<Service> service) { _service = service; }

public:
						/* 정보 관련 */
	void				SetNetAddress(NetAddress address) { _netAddress = address; }
	NetAddress			GetAddress() { return _netAddress; }
	SOCKET				GetSocket() { return _socket; }
	bool				IsConnected() { return _connected; }
	SessionRef			GetSessionRef() { return static_pointer_cast<Session>(shared_from_this()); }

private:
						/* 인터페이스 구현 */
	virtual HANDLE		GetHandle() override;
	virtual void		Dispatch(class IocpEvent* iocpEvent, int32 numOfBytes = 0) override;

private:

						/* 전송 관련 */
	bool				RegisterConnect(); // 클라이언트 서비스에서 동작할 시 사용
	bool				RegisterDisconnect();
	void				RegisterRecv();
	void				RegisterSend();

	void				ProcessConnect();
	void				ProcessDisconnect();
	void				ProcessRecv(int32 numOfBytes);
	void				ProcessSend(int32 numOfBytes);

	void				HandleError(int32 errorCode);
protected:
						/* 컨텐츠 코드에서 오버라이딩 */
	virtual void		OnConnected() { }
	virtual int32		OnRecv(BYTE* buffer, int32 len) { return len; }
	virtual void		OnSend(int32 len) { }
	virtual void		OnDisconnected() { }

private:
	weak_ptr<Service>	_service;					// 서비스에 자신을 등록, 끊거나 하는 행동을 위한 것
	SOCKET				_socket = INVALID_SOCKET;	// client socket
	NetAddress			_netAddress = {};			// 접속했을때 client 주소
	Atomic<bool>		_connected = false;			// 진짜 접속중인지, 끊겼는지 확인

private:
	USE_LOCK;

							/* 수신 관련 */
	RecvBuffer				_recvBuffer;

							/* 송신 관련 */
	Queue<SendBufferRef>	_sendQueue;
	Atomic<bool>			_sendRegistered = false;

private:
						/* IocpEvent 재사용 */
	ConnectEvent		_connectEvent;
	DisconnectEvent		_disconnectEvent;
	RecvEvent			_recvEvent;
	SendEvent			_sendEvent; // 하나의 쓰레드만 WSASend(RegisterSend)를 사용하기 때문에 재사용
};

/*---------------------------------------------------
	PacketSession
	// - TCP의 특성인 데이터 경계가 없어서
	// - 100BYTE를 보내도 30BYTE를 받는 경우가 발생
	// - 모든 데이터가 전송이 되었는지 여부를
	// - 확인할 수 있는 PacketHeader를 이용
----------------------------------------------------*/

struct PacketHeader
{
	uint16 size;	// 전체 패킷 사이즈
	uint16 id;		// 프로토콜ID (ex. 1=로그인, 2=이동요청)
};

class PacketSession : public Session
{
public:
	PacketSession();
	virtual ~PacketSession();

	PacketSessionRef	GetPacketSessionRef() { return static_pointer_cast<PacketSession>(shared_from_this()); }

protected:
	virtual int32		OnRecv(BYTE* buffer, int32 len) sealed;
	virtual void		OnRecvPacket(BYTE* buffer, int32 len) abstract;
};