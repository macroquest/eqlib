/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

/*0x00*/ IDirectInput8A*          pDI;
/*0x08*/ IDirectInputDevice8A*    pDIKeyboard;
/*0x10*/ IDirectInputDevice8A*    pDIMouse;
/*0x18*/ HWND                     hWnd;
/*0x20*/ HINSTANCE                hInstance;
/*0x28*/ bool                     bIsKeyboardActive;
/*0x29*/ bool                     bIsMouseActive;
/*0x2c*/ uint32_t                 Unknown0x18;
/*0x30*/ int                      LastInputKey;
/*0x34*/
};

class CLoginViewManager
{
public:
	EQLIB_OBJECT int HandleLButtonUp(CXPoint&);
};

class LoginServerAPI
{
public:
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
/*0x10*/ CXStr     Unknown0x0c;
/*0x18*/ CXStr     Unknown0x10;
/*0x20*/ int64_t   TimeStamp;
/*0x28*/
};

enum eServerStatus : uint32_t
{
	eServerStatus_Down = 1,
	eServerStatus_Locked = 4
};

struct [[offsetcomments]] EQClientServerData
{
/*0x00*/ ServerID      ID;
/*0x08*/ CXStr         ServerName;
/*0x10*/ CXStr         HostName;
/*0x18*/ CXStr         ServerIP;
/*0x20*/ int           ExternalPort;
/*0x24*/ int           InternalPort;
/*0x28*/ Date          DateCreated;
/*0x50*/ int           Flags;
/*0x54*/ int           ServerType;
/*0x58*/ CXStr         LanguageCode;
/*0x60*/ CXStr         CountryCode;
/*0x68*/ eServerStatus StatusFlags;
/*0x6c*/ int           PopulationRanking;
/*0x70*/
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
/*0x408*/ HWND      hEQWnd;
/*0x410*/ int       ReturnCode; // -1 = failed login
/*0x414*/ char      Login[0x80];
/*0x494*/ char      PW[0x80];
/*0x514*/ char      PW2[0x80];
/*0x594*/ char      ServerLong[0x80];
/*0x614*/ int       ServerPort;
/*0x618*/ char      AccountKey[0x80];
/*0x698*/ int       ActiveDeviceIndex;
/*0x69c*/ char      LastZoneEntered[0x20];
/*0x6bc*/ char      StationName[0x20];
/*0x6dc*/ char      ExeName[0x20];
/*0x6fc*/ char      CommandLine[0x1c0];
/*0x8bc*/ char      ServerShort[0x80];
/*0x93c*/ char      Session[0x40];
/*0x97c*/ char      Character[0x40];
/*0x9bc*/ // more...
};

} // namespace EQLS

struct [[offsetcomments]] IniKeyValuePair
{
/*0x00*/ CXStr            key;
/*0x08*/ CXStr            value;
/*0x10*/ const char*      valueStr;
/*0x18*/ int              hashVal;
/*0x20*/ IniKeyValuePair* next;
/*0x28*/
};

struct [[offsetcomments]] IniFileSection
{
/*0x00*/ HashTable<IniKeyValuePair*> values;
/*0x18*/ int              numValues;
/*0x20*/ CXStr            section;
/*0x28*/ int              hashVal;
/*0x30*/ IniKeyValuePair* firstKeyValue;
/*0x38*/ IniKeyValuePair* lastKeyValue;
/*0x40*/ IniFileSection*  nextSection;
/*0x48*/
};

class [[offsetcomments]] IniFileWrapper
{
public:
	virtual ~IniFileWrapper() {}

/*0x08*/ HashTable<IniFileSection*> sections;
/*0x20*/ int              numSections;
/*0x28*/ IniFileSection*  firstSection;
/*0x30*/ IniFileSection*  lastSection;
/*0x38*/ bool             dirty;
/*0x3c*/
};

struct [[offsetcomments]] TimeCheck
{
/*0x00*/ int64_t    lastTimeChecked;
/*0x08*/ int64_t    elapsedTime;
/*0x10*/
};

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

/*0x010*/ EQLS::EQLogin*          pLoginData;
/*0x018*/ DoublyLinkedList<Host*> Hosts;
/*0x050*/ Host*                   pHost;
/*0x058*/ bool                    bRetryConnect;
/*0x060*/ IniFileWrapper          hostIniFile;
/*0x0a0*/ IniFileWrapper          systemMacrosIniFile;
/*0x0e0*/ IniFileWrapper          userMacrosIniFile;
/*0x120*/ TimeCheck               timeCheck;
/*0x130*/ CXStr                   LoginName;
/*0x138*/ CXStr                   Password;
/*0x140*/ CXStr                   LoginNameCopy;
/*0x148*/ CXStr                   PasswordCopy;
/*0x150*/ CXStr                   AccountKey;
/*0x158*/ int                     accountId;
/*0x160*/ EQLS::EQClientServerData* selectedServer;
/*0x168*/ int                     displayDeviceIndex;
/*0x16c*/ bool                    isLoggingIn;
/*0x170*/ DoublyLinkedList<EQLS::EQClientServerData*> ServerList;
/*0x1a8*/ EQLS::EQClientServerData QuickConnectServer;
/*0x218*/
};

//----------------------------------------------------------------------------

} // namespace eqlib
