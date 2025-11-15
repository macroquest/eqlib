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

#include "pch.h"
#include "EQLibImpl.h"
#include "Logging.h"
#include "MemoryPatcherImpl.h"

#include "eqlib/Events.h"
#include "eqlib/game/Constants.h"
#include "eqlib/game/EverQuest.h"
#include "eqlib/game/EQClasses.h"
#include "eqlib/game/Globals.h"
#include "eqlib/game/Objects.h"
#include "eqlib/game/UI.h"

#if defined(COMMENT_UPDATER)
#include "eqlib/EQLib.h"
#endif

#include "mq/base/Enum.h"
#include "mq/base/WString.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

namespace eqlib {

static const char* logger_name = "eqlib";
static EQLibImpl* s_eqlibInstance = nullptr;

std::shared_ptr<spdlog::logger> logger;

void InitializeGlobals();
void InitializeEQGameOffsets();
void InitializeUI();
void InitializeCXWnd();
void InitializeCXStr();

//-------------------------------------------------------------

EQLibImpl::EQLibImpl(LibraryConfig* config)
	: m_memoryPatcher(std::make_unique<MemoryPatcherImpl>())
{
	if (config)
	{
		logger = config->logger;

		m_enableMainHooks = !(config->flags & ConfigFlags::NoMainHooks);
		m_enableSpawnEvents = !!(config->flags & ConfigFlags::EnableSpawnEvents);
		m_enableChatFilter = !!(config->flags & ConfigFlags::EnableChatEvents);
		m_enableNetworkEvents = !!(config->flags & ConfigFlags::EnableNetworkEvents);
		m_eventReceiver = config->eventReceiver;
	}
}

EQLibImpl::~EQLibImpl()
{
}

void EQLibImpl::Initialize()
{
	InitializeLogging();

	InitializeEQGameOffsets();
	InitializeGlobals();

	InitializeUI();
	InitializeCXWnd();
	InitializeCXStr();

	InitializeHooks();
}

void EQLibImpl::Shutdown()
{
	ShutdownHooks();

	logger.reset();

#ifndef EQLIB_STATIC
	spdlog::shutdown();
#endif
}

MemoryPatcher* EQLibImpl::GetMemoryPatcher()
{
	return m_memoryPatcher.get();
}

void EQLibImpl::InitializeLogging()
{
	if (!logger)
	{
		// No logger was provided through the configuration. Create a logger with no sinks and set the
		// level to be disabled.
		std::vector<spdlog::sink_ptr> sinks;

		logger = std::make_shared<spdlog::logger>(logger_name, std::begin(sinks), std::end(sinks));
		logger->set_level(spdlog::level::off);
	}
	else
	{
		LOG_DEBUG("Logging initialized");
	}
}

//=================================================================================================
//=================================================================================================

void EQLibImpl::HandleProcessGameEvents()
{
	if (pEverQuest)
	{
		// Not all game state transitions are reported through the call to SetGameState.
		int currentGameState = pEverQuest->GameState;

		if (currentGameState != m_lastGameState)
		{
			HandleSetGameState(currentGameState);
		}

		// If we transitioned to character select, we receive PreZone event but not the Zone event. Add it here.
		if (m_zoning
			&& (currentGameState == GAMESTATE_CHARSELECT || currentGameState == GAMESTATE_CHARCREATE))
		{
			HandleZoneMainUI();
		}
	}

	if (m_eventReceiver)
	{
		if (!m_pendingGroundItems.empty())
		{
			for (EQGroundItem* pGroundItem : m_pendingGroundItems)
			{
				m_eventReceiver->OnGroundItemAdded(pGroundItem);
			}

			m_pendingGroundItems.clear();
		}

		m_eventReceiver->OnProcessFrame();
	}
}

void EQLibImpl::HandleSetGameState(int gameState)
{
	m_lastGameState = gameState;

	if (m_eventReceiver)
	{
		m_eventReceiver->OnGameStateChanged(gameState);
	}
}

void EQLibImpl::HandleCleanGameUI()
{
	if (m_eventReceiver)
	{
		m_eventReceiver->OnCleanUI();
	}
}

void EQLibImpl::HandleReloadUI(const ReloadUIParams& params)
{
	InitializeInGameUI();

	if (m_eventReceiver)
	{
		m_eventReceiver->OnReloadUI(params);
	}
}

void EQLibImpl::HandleCreateCharSelectUI()
{
	InitializeInGameUI();

	//if (m_eventReceiver)
	//{
	//	m_eventReceiver->OnCreateCharSelectUI();
	//}
}

void EQLibImpl::HandlePreZoneMainUI()
{
	m_zoning = true;

	if (m_eventReceiver)
	{
		m_eventReceiver->OnPreZoneUI();
	}
}

void EQLibImpl::HandleZoneMainUI()
{
	m_zoning = false;

	if (m_eventReceiver)
	{
		m_eventReceiver->OnPostZoneUI();
	}
}

void EQLibImpl::HandleLoginPulse()
{
	// Check if this is the first pass through the login pulse. This gives us an opportunity to do
	// setup on the main thread once the game loop has begun.
	if (!m_inLoginFrontend)
	{
		m_inLoginFrontend = true;

		// Send our lifecycle notification that the login frontend has been entered.
		if (m_eventReceiver)
		{
			m_eventReceiver->OnLoginFrontendEntered();
		}

		// Fabricate a GameState notification since we wouldn't have received one. This may not be necessary
		// but AutoLogin is looking for it...
		int currentGameState = pEverQuest ? pEverQuest->GameState : -1;
		HandleSetGameState(currentGameState);
	}

	if (m_eventReceiver)
	{
		m_eventReceiver->OnProcessFrame();
	}
}

void EQLibImpl::HandleCreatePlayer(PlayerClient* player)
{
	m_eventReceiver->OnSpawnAdded(player);
}

void EQLibImpl::HandleDestroyPlayer(PlayerClient* player)
{
	m_eventReceiver->OnSpawnRemoved(player);
}

void EQLibImpl::HandleCreateGroundItem(EQGroundItem* groundItem)
{
	m_pendingGroundItems.push_back(groundItem);
}

void EQLibImpl::HandleDestroyGroundItem(EQGroundItem* groundItem)  
{
	auto it = std::find(m_pendingGroundItems.begin(), m_pendingGroundItems.end(), groundItem);
	if (it != m_pendingGroundItems.end())
	{
		m_pendingGroundItems.erase(it);
	}
	else
	{
		m_eventReceiver->OnGroundItemRemoved(groundItem);
	}
}

//=================================================================================================
//=================================================================================================

DETOUR_TRAMPOLINE_DEF(int, ProcessGameEvents_Trampoline, ());
int ProcessGameEvents_Detour()
{
	int result = ProcessGameEvents_Trampoline();

	s_eqlibInstance->HandleProcessGameEvents();

	return result;
}

class CEverQuest_Detours : public CEverQuest
{
public:
	DETOUR_TRAMPOLINE_DEF(void, SetGameState_Trampoline, (int))
		void SetGameState_Detour(int gameState)
	{
		SetGameState_Trampoline(gameState);

		s_eqlibInstance->HandleSetGameState(gameState);
	}

	DETOUR_TRAMPOLINE_DEF(void, dsp_chat_Trampoline, (const char*, int, bool, bool))
		void dsp_chat_Detour(const char* message, int color = USERCOLOR_DEFAULT, bool allowLog = true, bool doPercentConversion = true)
	{
		ChatMessageParams params;
		params.message = message;
		params.color = color;
		params.allowLog = allowLog;
		params.doPercentConversion = doPercentConversion;
		params.makeStmlSafe = true;

		if (!s_eqlibInstance->HandleChatMessage(params))
			return;

		dsp_chat_Trampoline(
			params.message,
			params.color,
			params.allowLog,
			params.doPercentConversion);
	}

	DETOUR_TRAMPOLINE_DEF(void, DoTellWindow_Trampoline, (const char*, const char*, const char*, const char*, int, bool))
		void DoTellWindow_Detour(const char* message, const char* senderName, const char* conversationName, const char* language, int color, bool allowLog = true)
	{
		TellWindowMessageParams params;
		params.message = message;
		params.color = color;
		params.senderName = senderName;
		params.conversationName = conversationName;
		params.language = language;
		params.allowLog = allowLog;

		if (!s_eqlibInstance->HandleTellWindowMessage(params))
			return;

		DoTellWindow_Trampoline(
			params.message,
			params.senderName,
			params.conversationName,
			language,
			color,
			allowLog);
	}

	DETOUR_TRAMPOLINE_DEF(void, UniversalChatProxyNotificationFlush_Trampoline, ())
	void UniversalChatProxyNotificationFlush_Detour()
	{
		// In EQ, this function actually calls DisplayChatText, however in the RoF2 client, this call is inlined, and the
		// chat hook does not capture it. So we will manually render the notification here.

		// in the live client, this is no longer needed because the call is not inlined.

		if (ucNotificationCount > 0)
		{
			fmt::memory_buffer buffer;
			auto iter = fmt::appender(buffer);

			if (ucNotificationEntering)
				fmt::format_to(iter, "* {} has entered channel ", ucNotificationPlayerName);
			else
				fmt::format_to(iter, "* {} has left channel ", ucNotificationPlayerName);

			for (int index = 0; index < ucNotificationCount; index++)
			{
				if (index != 0)
					fmt::format_to(iter, ", {}:{}", ucNotificationChannelName[index], ucNotificationChannelNumber[index] + 1);
				else
					fmt::format_to(iter, "{}:{}", ucNotificationChannelName[index], ucNotificationChannelNumber[index] + 1);
			}

			*iter = 0;

			dsp_chat(buffer.data(), USERCOLOR_CHAT_CHANNEL);

			ucNotificationCount = 0; // reset the notification count
			ucNotificationPlayerName[0] = 0;
		}
	}
};

class CDisplay_Detours
{
public:
	DETOUR_TRAMPOLINE_DEF(void, CleanGameUI_Trampoline, ())
	void CleanGameUI_Detour()
	{
		s_eqlibInstance->HandleCleanGameUI();

		CleanGameUI_Trampoline();
	}

	DETOUR_TRAMPOLINE_DEF(void, ReloadUI_Trampoline, (bool))
	void ReloadUI_Detour(bool useIni)
	{
		ReloadUI_Trampoline(useIni);

		ReloadUIParams params;
		params.loadIni = useIni;
		params.fastReload = false;

		s_eqlibInstance->HandleReloadUI(params);
	}

	DETOUR_TRAMPOLINE_DEF(void, FastReloadUI_Trampoline, ())
	void FastReloadUI_Detour()
	{
		FastReloadUI_Trampoline();

		ReloadUIParams params;
		params.loadIni = true;
		params.fastReload = true;

		s_eqlibInstance->HandleReloadUI(params);
	}

	DETOUR_TRAMPOLINE_DEF(void, InitCharSelectUI_Trampoline, ())
		void InitCharSelectUI_Detour()
	{
		InitCharSelectUI_Trampoline();

		s_eqlibInstance->HandleCreateCharSelectUI();
	}

	DETOUR_TRAMPOLINE_DEF(void, PreZoneMainUI_Trampoline, ())
	void PreZoneMainUI_Detour()
	{
		s_eqlibInstance->HandlePreZoneMainUI();
		PreZoneMainUI_Trampoline();
	}

	DETOUR_TRAMPOLINE_DEF(void, ZoneMainUI_Trampoline, ())
	void ZoneMainUI_Detour()
	{
		s_eqlibInstance->HandleZoneMainUI();
		ZoneMainUI_Trampoline();
	}
};

class PlayerManagerClient_Detours : public PlayerManagerClient
{
	static inline uint32_t s_lastRemovedSpawnID = 0;

public:
	DETOUR_TRAMPOLINE_DEF(PlayerClient*, CreatePlayer_Trampoline, (CUnSerializeBuffer*, uint8_t, EQRace, EQClass, const char*, bool, const char*, const char*))
	PlayerClient* CreatePlayer_Detour(CUnSerializeBuffer* pBuffer, uint8_t gender, EQRace nRace, EQClass nClass, const char* playerName, bool addToList, const char* ioGroupName, const char* ioReplaceName)
	{
		PlayerClient* pSpawn = CreatePlayer_Trampoline(pBuffer, gender, nRace, nClass, playerName, addToList, ioGroupName, ioReplaceName);

		s_eqlibInstance->HandleCreatePlayer(pSpawn);

		// Set the last removed spawn to zero if the ID was reused.
		if (s_lastRemovedSpawnID == pSpawn->GetId())
			s_lastRemovedSpawnID = 0;

		return pSpawn;
	}

	DETOUR_TRAMPOLINE_DEF(PlayerClient*, PrepForDestroyPlayer_Trampoline, (PlayerClient*))
		PlayerClient* PrepForDestroyPlayer_Detour(PlayerClient* pSpawn)
	{
		if (s_lastRemovedSpawnID != pSpawn->GetId())
		{
			// Store the ID of the spawn that is being removed so we can check if it is reused.
			s_lastRemovedSpawnID = pSpawn->GetId();
			s_eqlibInstance->HandleDestroyPlayer(pSpawn);
		}

		return PrepForDestroyPlayer_Trampoline(pSpawn);
	}

	DETOUR_TRAMPOLINE_DEF(void, DestroyAllPlayers_Trampoline, ())
	void DestroyAllPlayers_Detour()
	{
		PlayerClient* pSpawn = FirstSpawn;
		while (pSpawn)
		{
			s_eqlibInstance->HandleDestroyPlayer(pSpawn);

			pSpawn = pSpawn->GetNext();
		}

		return DestroyAllPlayers_Trampoline();
	}
};

class EQGroundItemListManager_Detours : public EQGroundItemListManager
{
public:
	DETOUR_TRAMPOLINE_DEF(void, Add_Trampoline, (EQGroundItem*))
	void Add_Detour(EQGroundItem* groundItem)
	{
		Add_Trampoline(groundItem);

		s_eqlibInstance->HandleCreateGroundItem(groundItem);
	}

	DETOUR_TRAMPOLINE_DEF(void, Clear_Trampoline, ())
	void Clear_Detour()
	{
		EQGroundItem* pItem = Top;
		while (pItem)
		{
			s_eqlibInstance->HandleDestroyGroundItem(pItem);

			pItem = pItem->pNext;
		}

		Clear_Trampoline();
	}

	DETOUR_TRAMPOLINE_DEF(void, Delete_Trampoline, (EQGroundItem*))
	void Delete_Detour(EQGroundItem* groundItem)
	{
		s_eqlibInstance->HandleDestroyGroundItem(groundItem);

		Delete_Trampoline(groundItem);
	}
};

// Used to acquire a pulse during login
class LoginController_Detours
{
public:
	DETOUR_TRAMPOLINE_DEF(void, GiveTime_Trampoline, ())
	void GiveTime_Detour()
	{
		// This is called continually during the login mainloop so we can use it as our pulse when the MAIN
		// gameloop pulse is not active but login is.
		// that will allow plugins to work and execute commands all the way back pre login and server select etc.
		s_eqlibInstance->HandleLoginPulse();

		GiveTime_Trampoline();
	}
};

struct UNICODE_STRING
{
	uint16_t Length;
	uint16_t MaximumLength;
	wchar_t* Buffer;
};

struct LDR_DLL_NOTIFICATION_DATA
{
	uint32_t        Flags;
	UNICODE_STRING* FullDllName;
	UNICODE_STRING* BaseDllName;
	uintptr_t       DllBase;
	uint32_t        SizeOfImage;
};

constexpr uint32_t LDR_DLL_NOTIFICATION_REASON_LOADED = 1;
constexpr uint32_t LDR_DLL_NOTIFICATION_REASON_UNLOADED = 2;

void __stdcall LdrDllNotificationCallback(
	uint32_t                         NotificationReason,
	const LDR_DLL_NOTIFICATION_DATA* NotificationData,
	void*                            Context)
{
	if (NotificationReason == LDR_DLL_NOTIFICATION_REASON_LOADED)
	{
		if (mq::ci_equals(NotificationData->BaseDllName->Buffer, EQMainModuleName))
		{
			s_eqlibInstance->InitializeEQMain(NotificationData->DllBase);
		}
		else if (mq::ci_equals(NotificationData->BaseDllName->Buffer, EQGraphicsModuleName))
		{
			s_eqlibInstance->InitializeEQGraphics(NotificationData->DllBase);
		}
	}
	else if (NotificationReason == LDR_DLL_NOTIFICATION_REASON_UNLOADED)
	{
		if (mq::ci_equals(NotificationData->BaseDllName->Buffer, EQMainModuleName))
		{
			s_eqlibInstance->ShutdownEQMain();
		}
	}
}

using PLDR_DLL_NOTIFICATION_FUNCTION = void(__stdcall*)(
	uint32_t                         NotificationReason,
	const LDR_DLL_NOTIFICATION_DATA* NotificationData,
	void*                            Context
);

using PLDR_REGISTER_DLL_NOTIFICATION = uint32_t(__stdcall*)(
	uint32_t                       Flags,
	PLDR_DLL_NOTIFICATION_FUNCTION NotificationFunction,
	void*                          Context,
	void**                         Cookie
);

using PLDR_UNREGISTER_DLL_NOTIFICATION = uint32_t(__stdcall*)(
	void* Cookie
);

class UdpConnection_Detours : public UdpLibrary::UdpConnection
{
public:
#if defined(UdpConnection__Send_x)
	inline static bool s_inUdpConnection_Send = false;

	DETOUR_TRAMPOLINE_DEF(bool, Send_Trampoline, (int, uint8_t*, uint32_t));
	bool Send_Detour(int channel, uint8_t* data, uint32_t dataLength)
	{
		if (this == pConnection && data != nullptr && dataLength >= 2
			&& !s_inUdpConnection_Send)
		{
			s_inUdpConnection_Send = true;

			WorldMessageParams params;
			params.connection = this;
			params.messageId = *(uint16_t*)data;
			params.data = data + 2;
			params.dataLength = dataLength - 2;

			bool send = s_eqlibInstance->HandleOutgoingWorldMessage(params);

			s_inUdpConnection_Send = false;

			if (!send)
			{
				return true;
			}
		}

		return Send_Trampoline(channel, data, dataLength);
	}
#endif // defined(UdpConnection__Send_x)

#if defined(UdpConnection__OnRoutePacket_x)
	inline static bool s_inUdpConnection_OnRoutePacket = false;

	DETOUR_TRAMPOLINE_DEF(void, OnRoutePacket_Trampoline, (uint8_t*, uint32_t))
	void OnRoutePacket_Detour(uint8_t* data, uint32_t dataLength)
	{
		if (this == pConnection && data != nullptr && dataLength >= 2
			&& !s_inUdpConnection_OnRoutePacket)
		{
			s_inUdpConnection_OnRoutePacket = true;

			WorldMessageParams params;
			params.connection = this;
			params.messageId = *(uint16_t*)data;
			params.data = data + 2;
			params.dataLength = dataLength - 2;

			bool send = s_eqlibInstance->HandleIncomingWorldMessage(params);

			s_inUdpConnection_OnRoutePacket = false;

			if (!send)
			{
				return;
			}
		}

		OnRoutePacket_Trampoline(data, dataLength);
	}
#endif // defined(UdpConnection__OnRoutePacket_x)
};

#if defined(WorldAuthenticationHandler__OnRoutePacket_x)
class WorldAuthenticationHandler_Detours : public UdpLibrary::UdpConnectionHandler
{
public:
	inline static bool s_inWorldAuthenticationHandler_OnRoutePacket = false;

	DETOUR_TRAMPOLINE_DEF(void, OnRoutePacket_Trampoline, (UdpLibrary::UdpConnection*, uint8_t*, uint32_t))
	void OnRoutePacket_Detour(UdpLibrary::UdpConnection* connection, uint8_t* data, uint32_t dataLength)
	{
		if (data != nullptr && dataLength >= 2 && !s_inWorldAuthenticationHandler_OnRoutePacket)
		{
			s_inWorldAuthenticationHandler_OnRoutePacket = true;

			WorldMessageParams params;
			params.connection = theConnection;
			params.messageId = *(uint16_t*)data;
			params.data = data + 2;
			params.dataLength = dataLength - 2;

			bool send = s_eqlibInstance->HandleWorldAuthenticationMessage(params);

			s_inWorldAuthenticationHandler_OnRoutePacket = false;

			if (!send)
			{
				return;
			}
		}

		OnRoutePacket_Trampoline(connection, data, dataLength);
	}

private:
	UdpLibrary::UdpConnection*& theConnection;
};
#endif // defined(WorldAuthenticationHandler__OnRoutePacket_x)

void EQLibImpl::InitializeHooks()
{
	LOG_DEBUG("Initializing hooks");

	if (m_enableMainHooks)
	{
		// Check if the process is named eqgame.exe. If it is, initialize the EQGame hooks.
		char szFileName[MAX_PATH] = {};
		if (GetModuleFileNameA(nullptr, szFileName, MAX_PATH))
		{
			std::string_view fullPath = szFileName;

			// Extract just the filename from the full path
			size_t pos = fullPath.find_last_of("\\/");
			if (pos != std::string::npos)
			{
				std::string_view fileName = fullPath.substr(pos + 1);

				if (mq::ci_equals(fileName, "eqgame.exe"))
				{
					InitializeEQGame();
				}
			}
		}
	}

	// Check if EQMain has already been loaded, and hook it if it has.
	HMODULE hEQMainModule = ::GetModuleHandleW(EQMainModuleName);
	if (hEQMainModule != nullptr)
	{
		InitializeEQMain(reinterpret_cast<uintptr_t>(hEQMainModule));
	}

	// Check if EQGraphics has already been loaded, and hook it if it has.
	HMODULE hEQGraphicsModule = ::GetModuleHandleW(EQGraphicsModuleName);
	if (hEQGraphicsModule != nullptr)
	{
		InitializeEQGraphics(reinterpret_cast<uintptr_t>(hEQGraphicsModule));
	}

	// Otherwise we wait for any of the modules we need to be loaded.
	PLDR_REGISTER_DLL_NOTIFICATION pLdrRegisterDllNotification =
		reinterpret_cast<PLDR_REGISTER_DLL_NOTIFICATION>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"),
			"LdrRegisterDllNotification"));
	pLdrRegisterDllNotification(0, &LdrDllNotificationCallback, nullptr, &m_loaderNotificationCookie);
}

void EQLibImpl::ShutdownHooks()
{
	LOG_DEBUG("Shutting down hooks");

	ShutdownEQMain();
	ShutdownEQGraphics();
	ShutdownEQGame();

	// Unregister the loader notification callback
	PLDR_UNREGISTER_DLL_NOTIFICATION pLdrUnregisterDllNotification =
		reinterpret_cast<PLDR_UNREGISTER_DLL_NOTIFICATION>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"),
			"LdrUnregisterDllNotification"));
	pLdrUnregisterDllNotification(m_loaderNotificationCookie);
	m_loaderNotificationCookie = nullptr;

	m_memoryPatcher->RemoveAllPatches();
}

void EQLibImpl::InitializeEQGame()
{
	if (m_eqGameHooked)
		return;

	LOG_DEBUG("Initializing EQGame");

	m_memoryPatcher->EzDetour(__ProcessGameEvents, ProcessGameEvents_Detour, ProcessGameEvents_Trampoline);
	m_memoryPatcher->EzDetour(CEverQuest__SetGameState, &CEverQuest_Detours::SetGameState_Detour, &CEverQuest_Detours::SetGameState_Trampoline);

	// TODO: Need to check some of these for overlaps
	m_memoryPatcher->EzDetour(CDisplay__CleanGameUI, &CDisplay_Detours::CleanGameUI_Detour, &CDisplay_Detours::CleanGameUI_Trampoline);
	m_memoryPatcher->EzDetour(CDisplay__ReloadUI, &CDisplay_Detours::ReloadUI_Detour, &CDisplay_Detours::ReloadUI_Trampoline);
	m_memoryPatcher->EzDetour(CDisplay__InitCharSelectUI, &CDisplay_Detours::InitCharSelectUI_Detour, &CDisplay_Detours::InitCharSelectUI_Trampoline);
	m_memoryPatcher->EzDetour(CDisplay__ZoneMainUI, &CDisplay_Detours::ZoneMainUI_Detour, &CDisplay_Detours::ZoneMainUI_Trampoline);
	m_memoryPatcher->EzDetour(CDisplay__PreZoneMainUI, &CDisplay_Detours::PreZoneMainUI_Detour, &CDisplay_Detours::PreZoneMainUI_Trampoline);
#ifdef CDisplay__RestartUI_x
	m_memoryPatcher->EzDetour(CDisplay__RestartUI, &CDisplay_Detours::FastReloadUI_Detour, &CDisplay_Detours::FastReloadUI_Trampoline);
#endif

	if (m_enableChatFilter && m_eventReceiver != nullptr)
	{
		m_memoryPatcher->EzDetour(CEverQuest__dsp_chat, &CEverQuest_Detours::dsp_chat_Detour, &CEverQuest_Detours::dsp_chat_Trampoline);
		m_memoryPatcher->EzDetour(CEverQuest__DoTellWindow, &CEverQuest_Detours::DoTellWindow_Detour, &CEverQuest_Detours::DoTellWindow_Trampoline);
		m_memoryPatcher->EzDetour(CEverQuest__UPCNotificationFlush, &CEverQuest_Detours::UniversalChatProxyNotificationFlush_Detour, &CEverQuest_Detours::UniversalChatProxyNotificationFlush_Trampoline);
	}

	if (m_enableSpawnEvents && m_eventReceiver != nullptr)
	{
#ifdef EQGroundItemListManager__Add_x
		m_memoryPatcher->EzDetour(EQGroundItemListManager__Add, &EQGroundItemListManager_Detours::Add_Detour, &EQGroundItemListManager_Detours::Add_Trampoline);
#endif
#ifdef EQGroundItemListManager__Clear_x
		m_memoryPatcher->EzDetour(EQGroundItemListManager__Clear, &EQGroundItemListManager_Detours::Clear_Detour, &EQGroundItemListManager_Detours::Clear_Trampoline);
#endif
#ifdef EQGroundItemListManager__Delete_x
		m_memoryPatcher->EzDetour(EQGroundItemListManager__Delete, &EQGroundItemListManager_Detours::Delete_Detour, &EQGroundItemListManager_Detours::Delete_Trampoline);
#endif
#ifdef PlayerManagerClient__CreatePlayer_x
		m_memoryPatcher->EzDetour(PlayerManagerClient__CreatePlayer, &PlayerManagerClient_Detours::CreatePlayer_Detour, &PlayerManagerClient_Detours::CreatePlayer_Trampoline);
#endif
#ifdef PlayerManagerBase__PrepForDestroyPlayer_x
		m_memoryPatcher->EzDetour(PlayerManagerBase__PrepForDestroyPlayer, &PlayerManagerClient_Detours::PrepForDestroyPlayer_Detour, &PlayerManagerClient_Detours::PrepForDestroyPlayer_Trampoline);
#endif
#ifdef PlayerManagerBase__DestroyAllPlayers_x
		m_memoryPatcher->EzDetour(PlayerManagerBase__DestroyAllPlayers, &PlayerManagerClient_Detours::DestroyAllPlayers_Detour, &PlayerManagerClient_Detours::DestroyAllPlayers_Trampoline);
#endif
	}

	if (m_enableNetworkEvents && m_eventReceiver != nullptr)
	{
#ifdef UdpConnection__Send_x
		m_memoryPatcher->EzDetour(UdpConnection__Send, &UdpConnection_Detours::Send_Detour, &UdpConnection_Detours::Send_Trampoline);
#endif
#ifdef UdpConnection__OnRoutePacket_x
		m_memoryPatcher->EzDetour(UdpConnection__OnRoutePacket, &UdpConnection_Detours::OnRoutePacket_Detour, &UdpConnection_Detours::OnRoutePacket_Trampoline);
#endif
#ifdef WorldAuthenticationHandler__OnRoutePacket_x
		m_memoryPatcher->EzDetour(WorldAuthenticationHandler__OnRoutePacket, &WorldAuthenticationHandler_Detours::OnRoutePacket_Detour, &WorldAuthenticationHandler_Detours::OnRoutePacket_Trampoline);
#endif
	}

	m_eqGameHooked = true;
}

void EQLibImpl::ShutdownEQGame()
{
	if (!m_eqGameHooked)
		return;

	LOG_DEBUG("Shutting down EQGame");

	m_memoryPatcher->RemoveDetour(__ProcessGameEvents);
	m_memoryPatcher->RemoveDetour(CEverQuest__SetGameState);

	// TODO: Need to check some of these for overlaps
	m_memoryPatcher->RemoveDetour(CDisplay__CleanGameUI);
	m_memoryPatcher->RemoveDetour(CDisplay__ReloadUI);
	m_memoryPatcher->RemoveDetour(CDisplay__InitCharSelectUI);
	m_memoryPatcher->RemoveDetour(CDisplay__ZoneMainUI);
	m_memoryPatcher->RemoveDetour(CDisplay__PreZoneMainUI);
#ifdef CDisplay__RestartUI_x
	m_memoryPatcher->RemoveDetour(CDisplay__RestartUI);
#endif

	if (m_enableChatFilter && m_eventReceiver != nullptr)
	{
		m_memoryPatcher->RemoveDetour(CEverQuest__dsp_chat);
		m_memoryPatcher->RemoveDetour(CEverQuest__DoTellWindow);
		m_memoryPatcher->RemoveDetour(CEverQuest__UPCNotificationFlush);
	}

	if (m_enableSpawnEvents && m_eventReceiver != nullptr)
	{
#ifdef EQGroundItemListManager__Add_x
		m_memoryPatcher->RemoveDetour(EQGroundItemListManager__Add);
#endif
#ifdef EQGroundItemListManager__Clear_x
		m_memoryPatcher->RemoveDetour(EQGroundItemListManager__Clear);
#endif
#ifdef EQGroundItemListManager__Delete_x
		m_memoryPatcher->RemoveDetour(EQGroundItemListManager__Delete);
#endif
#ifdef PlayerManagerClient__CreatePlayer_x
		m_memoryPatcher->RemoveDetour(PlayerManagerClient__CreatePlayer);
#endif
#ifdef PlayerManagerBase__PrepForDestroyPlayer_x
		m_memoryPatcher->RemoveDetour(PlayerManagerBase__PrepForDestroyPlayer);
#endif
#ifdef PlayerManagerBase__DestroyAllPlayers_x
		m_memoryPatcher->RemoveDetour(PlayerManagerBase__DestroyAllPlayers);
#endif
	}

	if (m_enableNetworkEvents && m_eventReceiver != nullptr)
	{
#ifdef UdpConnection__Send_x
		m_memoryPatcher->RemoveDetour(UdpConnection__Send);
#endif
#ifdef UdpConnection__OnRoutePacket_x
		m_memoryPatcher->RemoveDetour(UdpConnection__OnRoutePacket);
#endif
#ifdef WorldAuthenticationHandler__OnRoutePacket_x
		m_memoryPatcher->RemoveDetour(WorldAuthenticationHandler__OnRoutePacket);
#endif
	}

	m_eqGameHooked = false;
}

void EQLibImpl::InitializeEQMain(uintptr_t BaseAddress)
{
	if (m_loginDetoursInstalled)
		return;

	LOG_INFO("Initializing EQMain");

	m_inLoginFrontend = false;

	InitializeEQMainOffsets(BaseAddress);

	if (m_eventReceiver)
	{
		m_eventReceiver->OnEQMainDllLoadedStateChanged(true);
	}

	m_eqMainLoaded = true;

	if (m_enableMainHooks)
	{
		// Once we hook GiveTime, we wait for it to be called to finalize our hooks.
		m_memoryPatcher->EzDetour(EQMain__LoginController__GiveTime, &LoginController_Detours::GiveTime_Detour, &LoginController_Detours::GiveTime_Trampoline);
	}

	m_loginDetoursInstalled = true;
}

void EQLibImpl::ShutdownEQMain()
{
	if (!m_eqMainLoaded)
		return;

	LOG_DEBUG("Cleaning up EQMain");

	// If we already entered login at this point we should notify that we are no longer there.
	if (m_inLoginFrontend)
	{
		m_inLoginFrontend = false;

		if (m_eventReceiver && m_enableMainHooks)
		{
			m_eventReceiver->OnLoginFrontendExited();
		}
	}

	if (m_eventReceiver)
	{
		m_eventReceiver->OnEQMainDllLoadedStateChanged(false);
	}

	if (m_loginDetoursInstalled)
	{
		if (m_enableMainHooks)
		{
			m_memoryPatcher->RemoveDetour(EQMain__LoginController__GiveTime);
		}

		m_loginDetoursInstalled = false;
	}

	CleanupEQMainOffsets();

	m_eqMainLoaded = false;
}

void EQLibImpl::InitializeEQGraphics(uintptr_t BaseAddress)
{
	LOG_INFO("Initializing EQGraphics");

	InitializeEQGraphicsOffsets(BaseAddress);
}

void EQLibImpl::ShutdownEQGraphics()
{
	if (EQGraphicsBaseAddress == 0)
		return;

	LOG_DEBUG("Shutting down EQGraphics");

	CleanupEQGraphicsOffsets();
}

//=================================================================================================

static bool s_handlingDisplayChatText = false;
static void HandleMessage_DisplayChatText(const ChatMessageParams& params)
{
	if (!s_handlingDisplayChatText)
		return;

	pEverQuest.get_as<CEverQuest_Detours>()->dsp_chat_Trampoline(
		params.message,
		params.color,
		params.allowLog,
		params.doPercentConversion);

	s_handlingDisplayChatText = false;
}

bool EQLibImpl::HandleChatMessage(ChatMessageParams& params)
{
	params.messageHandler = HandleMessage_DisplayChatText;

	s_handlingDisplayChatText = true;

	bool result = m_eventReceiver->OnChatMessage(params);

	// If we sent the message with the handler, don't try to send it again.
	if (!s_handlingDisplayChatText)
		result = false;
	s_handlingDisplayChatText = false;

	return result;
}

static bool s_handlingDisplayTellText = false;
static void HandleMessage_DisplayTellText(const TellWindowMessageParams& params)
{
	if (!s_handlingDisplayTellText)
		return;

	pChatManager.get_as<CEverQuest_Detours>()->DoTellWindow_Trampoline(
		params.message,
		params.senderName,
		params.conversationName,
		params.language,
		params.color,
		params.allowLog);

	s_handlingDisplayTellText = false;
}

bool EQLibImpl::HandleTellWindowMessage(TellWindowMessageParams& params)
{
	params.messageHandler = HandleMessage_DisplayTellText;

	s_handlingDisplayTellText = true;

	bool result = m_eventReceiver->OnTellWindowMessage(params);

	// If we sent the message with the handler, don't try to send it again.
	if (!s_handlingDisplayTellText)
		result = false;
	s_handlingDisplayTellText = false;

	return result;
}

bool EQLibImpl::HandleIncomingWorldMessage(WorldMessageParams& params)
{
	return m_eventReceiver->OnIncomingWorldMessage(params);
}

bool EQLibImpl::HandleWorldAuthenticationMessage(WorldMessageParams& params)
{
	return m_eventReceiver->OnIncomingWorldMessage(params);
}

bool EQLibImpl::HandleOutgoingWorldMessage(WorldMessageParams& params)
{
	return m_eventReceiver->OnOutgoingWorldMessage(params);
}

//=================================================================================================
//=================================================================================================

EQLibInterface* Initialize(LibraryConfig* config)
{
	assert(s_eqlibInstance == nullptr);

	s_eqlibInstance = new EQLibImpl(config);
	s_eqlibInstance->Initialize();

	return s_eqlibInstance;
}

void Shutdown(EQLibInterface* eqInterface)
{
	assert(s_eqlibInstance == eqInterface);

	s_eqlibInstance->Shutdown();

	delete s_eqlibInstance;
	s_eqlibInstance = nullptr;
}

} // namespace eqlib

#if __has_include("../../private/EQLib-private.cpp")
#include "../../private/EQLib-private.cpp"
#endif
