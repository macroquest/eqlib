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

namespace eqlib {

/**
 * @brief Structure that provides configuration for EQLib.
 */
struct LibraryConfig
{
	/**
	 * If true, chat events will be enabled in the EventInterface
	 */
	bool enableChatFilter = false;

	/**
	 * If true, incoming network eventst will be enabled in the EventInterface.
	 */
	bool enableNetworkEvents = false;
};

EQLIB_API bool InitializeEQLib(LibraryConfig* config);

} // namespace eqlib
