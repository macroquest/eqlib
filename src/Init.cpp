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

#include "eqlib/Init.h"
#include "eqlib/Offsets.h"
#include "eqlib/game/Globals.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

namespace eqlib {

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

bool InitializeEQLib(LibraryConfig* config)
{
	InitializeGlobals();

	InitializeUI();
	InitializeCXWnd();
	InitializeCXStr();

	return true;
}

void ShutdownEQLib()
{
	ShutdownCXStr();
}

} // namespace eqlib

#if __has_include("../private/EQLib-private.cpp")
#include "../private/EQLib-private.cpp"
#endif
