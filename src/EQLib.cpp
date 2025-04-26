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

#include "eqlib/base/Offsets.h"
#include "eqlib/Globals.h"
#include "eqlib/Startup.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

namespace eqlib {

// allocate memory as if by using eq's malloc.
using eqAllocFn = void* (*)(std::size_t amount);
eqAllocFn eqAlloc_ = nullptr;

void* eqAlloc(std::size_t sz)
{
	return eqAlloc_(sz);
}

// free memory as if by using eq's free.
using eqFreeFn = void (*)(void*);
eqFreeFn eqFree_ = nullptr;

void eqFree(void* ptr)
{
	eqFree_(ptr);
}

namespace SoeUtil
{
	void* Alloc(size_t bytes, int align) {
		return eqAlloc(bytes);
	}
	void Free(void* p, int align) {
		return eqFree(p);
	}
}

FUNCTION_AT_ADDRESS(void*, eqAllocImpl(size_t), __eq_new);// Exception to Separate Function Addresses
FUNCTION_AT_ADDRESS(void, eqFreeImpl(void*), __eq_delete);// Exception to Separate Function Addresses

static const std::string logger_name = "eqlib";

void InitializeGlobalOffsets();
void InitializeEQGameOffsets();
void InitializeEQGraphicsOffsets();
void InitializeUI();
void InitializeCXWnd();
void InitializeCXStr();

void ShutdownCXStr();

void InitializeLogging(const std::shared_ptr<spdlog::logger>& in_logger)
{
	auto logger = spdlog::get(logger_name);
	if (!logger)
	{
		auto& sinks = in_logger->sinks();

		logger = std::make_shared<spdlog::logger>(logger_name, std::begin(sinks), std::end(sinks));
		spdlog::set_pattern("%L %Y-%m-%d %T.%f [%n] %v (%@)");
		spdlog::set_default_logger(logger);
	}

	SPDLOG_DEBUG("Logging initialized");
}

void ShutdownLogging()
{
	spdlog::shutdown();
}

void InitializeGlobals()
{
	ZeroMemory(gDiKeyName, sizeof(gDiKeyName));
	for (int i = 0; gDiKeyID[i].Id; i++)
	{
		gDiKeyName[gDiKeyID[i].Id] = gDiKeyID[i].szName;
	}

	InitializeGlobalOffsets();
	InitializeEQGameOffsets();
	InitializeEQGraphicsOffsets();
}

void InitializeEQLib()
{
	eqAlloc_ = eqAllocImpl;
	eqFree_ = eqFreeImpl;

	InitializeGlobals();

	InitializeUI();
	InitializeCXWnd();
	InitializeCXStr();
}

void InitializeEQLibForTesting()
{
	eqAlloc_ = malloc;
	eqFree_ = free;
}

void ShutdownEQLib()
{
	ShutdownCXStr();
}

} // namespace eqlib

#if __has_include("../private/EQLib-private.cpp")
#include "../private/EQLib-private.cpp"
#endif
