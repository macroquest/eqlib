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

#include "eqlib/Events.h"
#include "eqlib/Init.h"

namespace eqlib {

class MemoryPatcherImpl;

class EQLibImpl final : public EQLibInterface
{
public:
	EQLibImpl(LibraryConfig* config);
	virtual ~EQLibImpl() override;

	void Initialize();
	void Shutdown();

	virtual MemoryPatcher* GetMemoryPatcher() override;

	void HandleProcessGameEvents();
	void HandleSetGameState(int gameState);
	void HandleLoginPulse();

	void HandleCleanGameUI();
	void HandleReloadUI(const ReloadUIParams& params);
	void HandleCreateCharSelectUI();
	void HandlePreZoneMainUI();
	void HandleZoneMainUI();

	bool HandleChatMessage(ChatMessageParams& params);
	bool HandleTellWindowMessage(TellWindowMessageParams& params);

	void HandleCreatePlayer(PlayerClient* player);
	void HandleDestroyPlayer(PlayerClient* player);
	void HandleCreateGroundItem(EQGroundItem* groundItem);
	void HandleDestroyGroundItem(EQGroundItem* groundItem);

	bool HandleWorldAuthenticationMessage(WorldMessageParams& params);
	bool HandleIncomingWorldMessage(WorldMessageParams& params);
	bool HandleOutgoingWorldMessage(WorldMessageParams& params);

	void InitializeEQGame();
	void ShutdownEQGame();
	void InitializeEQMain(uintptr_t BaseAddress);
	void ShutdownEQMain();
	void InitializeEQGraphics(uintptr_t BaseAddress);
	void ShutdownEQGraphics();

private:
	void InitializeLogging();

	void InitializeHooks();
	void ShutdownHooks();

	std::unique_ptr<MemoryPatcherImpl> m_memoryPatcher;
	EventInterface* m_eventReceiver = nullptr;

	bool m_enableMainHooks = true;
	bool m_enableSpawnEvents = false;
	bool m_enableChatFilter = false;
	bool m_enableNetworkEvents = false;
	int m_lastGameState = -1;
	bool m_zoning = false;
	bool m_eqGameHooked = false;
	bool m_eqMainLoaded = false;
	bool m_inLoginFrontend = false;
	bool m_loginDetoursInstalled = false;
	void* m_loaderNotificationCookie = nullptr;

	std::vector<EQGroundItem*> m_pendingGroundItems;
};

} // namespace eqlib
