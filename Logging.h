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

#include <spdlog/spdlog.h>

namespace eqlib {

EQLIB_OBJECT void InitializeLogging(const std::shared_ptr<spdlog::logger>& logger);

EQLIB_OBJECT void ShutdownLogging();

} // namespace eqlib