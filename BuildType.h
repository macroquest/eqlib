/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

#include "Expansions.h"

// Defines the EverQuest build type (LIVE, TEST, etc)
#define LIVE

// Defines the expansion level of the build.
#if defined(LIVE)
#define MQ_EXPANSION_LEVEL EXPANSION_LEVEL_TOL
#elif defined(TEST)
#define MQ_EXPANSION_LEVEL EXPANSION_LEVEL_TOL
#endif

#define IS_EXPANSION_LEVEL(x) (MQ_EXPANSION_LEVEL >= x)
