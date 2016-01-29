#ifndef _HV_AUTOLINK_H_
#define _HV_AUTOLINK_H_

#include "HVAPI_HANDLE_CONTEXT_EX.h"
#include<sys/types.h>
#include<sys/socket.h>

//主动连接 服务器句柄内容
typedef struct _SERVER_CONTEXT
{
	CHAR szVersion[8];

	INT nMonitorType;
	INT nMonitorPort;
	int hSocket;

	INT nMaxMonitorCount;
	INT nLinkCount;

	pthread_t  hThreadMonitor;
	BOOL fThreadMonitorExit;

	pthread_t* prgProcessNewLinkThread;

	_SERVER_CONTEXT()
		: hThreadMonitor(NULL)
		, fThreadMonitorExit(TRUE)
		, nMonitorPort(0)
		, nLinkCount(0)
		, nMaxMonitorCount(0)
		, hSocket(INVALID_SOCKET)
		, prgProcessNewLinkThread(NULL)
	{
		//ZeroMemory(szVersion , sizeof(szVersion));
		memset(szVersion, 0, sizeof(szVersion));
	};

} SERVER_CONTEXT;


enum DEV_STATUS
{
	DEV_STATUS_UNKOWN = 0,
	DEV_STATUS_OPEN ,
	DEV_STATUS_SETCONN
};

typedef struct _AUTOLINK_DEV_CONTEXT
{
	HVAPI_HANDLE_CONTEXT_EX handle;
	BOOL fFree;
	DEV_STATUS eStatus;

	_AUTOLINK_DEV_CONTEXT()
		: fFree(TRUE)
		, eStatus(DEV_STATUS_UNKOWN)
	{

	}

}AUTOLINK_DEV_CONTEXT;


typedef struct _MONITOR_CONTEXT
{
	CHAR szVersion[8];
	INT nMaxMonitorCount;

	AUTOLINK_DEV_CONTEXT* prgAutoLinkDevList;
	SERVER_CONTEXT* pRecordServer;

	_MONITOR_CONTEXT()
		: pRecordServer(NULL)
		, nMaxMonitorCount(0)
		, prgAutoLinkDevList(NULL)
	{

	}

}MONITOR_CONTEXT;


typedef struct _SOCKET_NUM //64bit
{
    int nNewSocket;
}SOCKET_NUM;

#endif
