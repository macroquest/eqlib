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

	void InitializeEQMain(uintptr_t BaseAddress);
	void ShutdownEQMain();
	void InitializeEQGraphics(uintptr_t BaseAddress);

private:
	void InitializeLogging();

	void InitializeHooks();
	void ShutdownHooks();

	std::unique_ptr<MemoryPatcherImpl> m_memoryPatcher;
	EventInterface* m_eventReceiver = nullptr;

	void* m_loaderNotificationCookie = nullptr;
	bool m_eqMainLoaded = false;
};

} // namespace eqlib
