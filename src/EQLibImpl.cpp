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
#include "eqlib/Offsets.h"

#include "eqlib/Globals.h"

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

void EQLibImpl::InitializeHooks()
{

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
	ShutdownEQMain();

	// Unregister the loader notification callback
	PLDR_UNREGISTER_DLL_NOTIFICATION pLdrUnregisterDllNotification =
		reinterpret_cast<PLDR_UNREGISTER_DLL_NOTIFICATION>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"),
			"LdrUnregisterDllNotification"));
	pLdrUnregisterDllNotification(m_loaderNotificationCookie);
	m_loaderNotificationCookie = nullptr;

	m_memoryPatcher->RemoveAllPatches();
}

void EQLibImpl::InitializeEQMain(uintptr_t BaseAddress)
{
	LOG_INFO("Initializing EQMain");

	InitializeEQMainOffsets(BaseAddress);

	if (m_eventReceiver)
	{
		m_eventReceiver->OnEQMainDllLoadedStateChanged(true);
	}

	m_eqMainLoaded = true;
}

void EQLibImpl::ShutdownEQMain()
{
	if (!m_eqMainLoaded)
		return;

	LOG_DEBUG("Cleaning up EQMain");

	if (m_eventReceiver)
	{
		m_eventReceiver->OnEQMainDllLoadedStateChanged(false);
	}

	CleanupEQMainOffsets();

	m_eqMainLoaded = true;
}

void EQLibImpl::InitializeEQGraphics(uintptr_t BaseAddress)
{
	LOG_INFO("Initializing EQGraphics");

	InitializeEQGraphicsOffsets(BaseAddress);
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

#if __has_include("../private/EQLib-private.cpp")
#include "../private/EQLib-private.cpp"
#endif
