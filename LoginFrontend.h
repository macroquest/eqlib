/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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
/*0x00*/ ServerID      ID;
/*0x04*/ CXStr         ServerName;
/*0x08*/ CXStr         HostName;
/*0x0c*/ CXStr         ServerIP;
///*0x10*/ int           ExternalPort;
///*0x14*/ int           InternalPort;
/*0x10*/ Date          DateCreated;
/*0x30*/ int           Flags;
/*0x34*/ int           ServerType;
/*0x38*/ CXStr         LanguageCode;
/*0x3c*/ CXStr         CountryCode;
/*0x40*/ eServerStatus StatusFlags;
/*0x44*/ int           PopulationRanking;
/*0x48*/
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

struct [[offsetcomments]] IniKeyValuePair
{
/*0x00*/ CXStr            key;
/*0x04*/ CXStr            value;
/*0x08*/ const char*      valueStr;
/*0x0c*/ int              hashVal;
/*0x10*/ IniKeyValuePair* next;
/*0x14*/
};

struct [[offsetcomments]] IniFileSection
{
/*0x00*/ HashTable<IniKeyValuePair*> values;
/*0x10*/ int              numValues;
/*0x14*/ CXStr            section;
/*0x18*/ int              hashVal;
/*0x1c*/ IniKeyValuePair* firstKeyValue;
/*0x20*/ IniKeyValuePair* lastKeyValue;
/*0x24*/ IniFileSection*  nextSection;
/*0x28*/
};

class [[offsetcomments]] IniFileWrapper
{
public:
	virtual ~IniFileWrapper() {}

/*0x04*/ HashTable<IniFileSection*> sections;
/*0x14*/ int              numSections;
/*0x18*/ IniFileSection*  firstSection;
/*0x1c*/ IniFileSection*  lastSection;
/*0x20*/ bool             dirty;
/*0x24*/
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

/*0x008*/ EQLS::EQLogin*          pLoginData;
/*0x00c*/ DoublyLinkedList<Host*> Hosts;
/*0x02c*/ Host*                   pHost;
/*0x030*/ bool                    bRetryConnect;
/*0x034*/ IniFileWrapper          hostIniFile;
/*0x058*/ IniFileWrapper          systemMacrosIniFile;
/*0x07c*/ IniFileWrapper          userMacrosIniFile;
/*0x0a0*/ TimeCheck               timeCheck;
/*0x0b0*/ CXStr                   LoginName;
/*0x0b4*/ CXStr                   Password;
/*0x0b8*/ CXStr                   LoginNameCopy;
/*0x0bc*/ CXStr                   PasswordCopy;
/*0x0c0*/ CXStr                   AccountKey;
/*0x0c4*/ int                     accountId;
/*0x0c8*/ EQLS::EQClientServerData* selectedServer;
/*0x0cc*/ int                     displayDeviceIndex;
/*0x0d0*/ bool                    isLoggingIn;
/*0x0d4*/ DoublyLinkedList<EQLS::EQClientServerData*> ServerList;
/*0x0f8*/ EQLS::EQClientServerData QuickConnectServer;
/*0x140*/
};

//----------------------------------------------------------------------------

} // namespace eqlib
