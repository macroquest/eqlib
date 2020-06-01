/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "Common.h"

namespace eqlib {

//----------------------------------------------------------------------------

// Types used by the frontend a.k.a. eqmain.dll

class [[offsetcomments]] LoginController
{
public:
	EQLIB_OBJECT LoginController(HINSTANCE hInstance, HWND hWnd);
	EQLIB_OBJECT ~LoginController();

	EQLIB_OBJECT void Startup();
	EQLIB_OBJECT void Shutdown();
	EQLIB_OBJECT void GiveTime();

	EQLIB_OBJECT int ProcessKeyboardEvents();
	EQLIB_OBJECT int ProcessMouseEvents();
	EQLIB_OBJECT int FlushDxKeyboard();


/*0x00*/ IDirectInput8A*          pDI;
/*0x04*/ IDirectInputDevice8A*    pDIKeyboard;
/*0x08*/ IDirectInputDevice8A*    pDIMouse;
/*0x0c*/ HWND                     hWnd;
/*0x10*/ HINSTANCE                hInstance;
/*0x14*/ bool                     bIsKeyboardActive;
/*0x15*/ bool                     bIsMouseActive;
/*0x18*/ uint32_t                 Unknown0x18;
/*0x1c*/ int                      LastInputKey;
/*0x20*/
};

class CLoginViewManager
{
public:
	EQLIB_OBJECT int HandleLButtonUp(CXPoint&);
};

class LoginServerAPI
{
public:
	//see 100129F0 in eqmain.dll dated jul 13 2017 - eqmule
	EQLIB_OBJECT unsigned int JoinServer(int serverID, void* userdata = 0, int timeoutseconds = 10);
};

namespace EQLS {

struct [[offsetcomments]] Date
{
/*0x00*/ int8_t    Hours;
/*0x01*/ int8_t    Minutes;
/*0x02*/ int8_t    Seconds;
/*0x03*/ int8_t    Month;
/*0x04*/ int8_t    Day;
/*0x06*/ int16_t   Year;
/*0x08*/ CXStr     Unknown0x08;
/*0x0c*/ CXStr     Unknown0x0c;
/*0x10*/ CXStr     Unknown0x10;
/*0x18*/ int64_t   TimeStamp;
/*0x20*/
};

enum eServerStatus : uint32_t
{
	eServerStatus_Down = 1,
	eServerStatus_Locked = 4
};

struct [[offsetcomments]] EQClientServerData
{
/*0x00*/ int           ID;
/*0x04*/ CXStr         ServerName;
/*0x08*/ CXStr         HostName;
/*0x0c*/ CXStr         ServerIP;
/*0x10*/ int           ExternalPort;
/*0x14*/ int           InternalPort;
/*0x18*/ Date          DateCreated;
/*0x38*/ int           Flags;
/*0x3c*/ int           ServerType;
/*0x40*/ CXStr         LanguageCode;
/*0x44*/ CXStr         CountryCode;
/*0x48*/ eServerStatus StatusFlags;
/*0x4c*/ int           PopulationRanking;
/*0x50*/
};

class [[offsetcomments]] LoginServerCallback
{
public:
	virtual void OnConnect() {}
	virtual void OnDisconnect(bool) {}
	// more virtuals...
};

class [[offsetcomments]] ChannelServerHandler
{
public:
	virtual void Channel_VirtualFunction1(bool) {}
	virtual void Channel_VirtualFunction2(void*) {}
	// more virtuals ...
};

struct [[offsetcomments]] EQDevice
{
	/*0x00*/ char Name[0x40];
/*0x40*/ };

struct [[offsetcomments]] EQLogin
{
/*0x000*/ EQDevice  Devices[0x10];
/*0x400*/ int       NumDevices;
/*0x404*/ HWND      hEQWnd;
/*0x408*/ int       ReturnCode; // -1 = failed login
/*0x40c*/ char      Login[0x80];
/*0x48c*/ char      PW[0x80];
/*0x50c*/ char      PW2[0x80];
/*0x58c*/ char      ServerLong[0x80];
/*0x60c*/ int       ServerPort;
/*0x610*/ char      AccountKey[0x80];
/*0x690*/ int       ActiveDeviceIndex;
/*0x694*/ char      LastZoneEntered[0x20];
/*0x6b4*/ char      StationName[0x20];
/*0x6d4*/ char      ExeName[0x20];
/*0x6f4*/ char      CommandLine[0x1c0];
/*0x8b4*/ char      ServerShort[0x80];
/*0x934*/ char      Session[0x40];
/*0x974*/ char      Character[0x40];
/*0x9b4*/ // more...
};

} // namespace EQLS

// LoginClient
class [[offsetcomments]] LoginClient : public EQLS::LoginServerCallback,
	public EQLS::ChannelServerHandler
{
public:
	struct Host
	{
		CXStr Name;
		int   Port;
	};

/*0x008*/ EQLS::EQLogin* pLoginData;
/*0x00c*/ DoublyLinkedList<Host*> Hosts;
/*0x02c*/ Host*    pHost;
/*0x030*/ bool     bRetryConnect;
/*0x031*/ uint8_t  Unknown0x031[0x7C];
/*0x0b0*/ CXStr    LoginName;
/*0x0b4*/ CXStr    Password;
/*0x0b8*/ CXStr    LoginNameCopy;
/*0x0bc*/ CXStr    PasswordCopy;
/*0x0c0*/ CXStr    AccountKey;
/*0x0c4*/ uint8_t  Unknown0x0C4[0x10];
/*0x0d4*/ DoublyLinkedList<EQLS::EQClientServerData*> ServerList;
/*0x0f8*/ EQLS::EQClientServerData QuickConnectServer;
/*0x148*/ };

//----------------------------------------------------------------------------

} // namespace eqlib
