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

#include "eqlib/Config.h"
#include "eqlib/MemoryPatcher.h"

#include "mq/base/Enum.h"

#include <memory>

namespace spdlog
{
	class logger;
}

namespace eqlib {

class EventInterface;

/**
 * Flags for enabling various functionality built into EQLib.
 */
enum class ConfigFlags
{
	None                          = 0,
	EnableSpawnEvents             = 1 << 0, /** Enable spawn events in the EventInterface */
	EnableChatEvents              = 1 << 1, /** Enable chat events in the EventInterface */
	EnableNetworkEvents           = 1 << 2, /** Enable network events in the EventInterface */

	EnableAllEvents = EnableSpawnEvents | EnableChatEvents | EnableNetworkEvents,
};
constexpr bool has_bitwise_operations(ConfigFlags) { return true; }

/**
 * Configuration object that is passed in to eqlib::Initialize.
 */
struct LibraryConfig
{
	/**
	 * A logger to use for logging from the library. If no logger is provided,
	 * logging will be disabled.
	 */
	std::shared_ptr<spdlog::logger> logger;

	/**
	 * Configuration flags for the library. See ConfigFlags for more information on each flag.
	 */
	ConfigFlags flags = ConfigFlags::None;

	/**
	 * Pointer to the event receiver interface. The caller should ensure that this pointer is
	 * kept alive for the duration of the library's lifetime. The library will not take ownership.
	 */
	EventInterface* eventReceiver = nullptr;
};

/**
 * Interface to functionality maintatined by eqlib
 */
class EQLibInterface
{
public:
	virtual ~EQLibInterface() {}

	/** Retrieve the MemoryPatcher instance for EQLib */
	virtual MemoryPatcher* GetMemoryPatcher() = 0;
};

/**
 * Initialize the EQLib library. This should be performed at application startup prior to performing
 * any other actions. Configure the library by passing a pointer to an LibraryConfig struct. This
 * parameter is optional, and null can be provided instead. If not provided, the default configuration will be used.
 * 
 * @param config Pointer to a LibraryConfig struct that contains configuration options for the library.
 * @return Pointer to an EQLibInterface object representing the initialized library.
 */
EQLIB_API EQLibInterface* Initialize(LibraryConfig* config);

/**
 * Shutdown the EQLib library. This should be performed at application shutdown to clean up any resources
 * allocated by the library.
 *
 * @param eqInterface Pointer to the EQLibInterface object returned by Initialize.
 */
EQLIB_API void Shutdown(EQLibInterface* eqInterface);

} // namespace eqlib
