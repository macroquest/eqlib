/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#include <mq/base/Deprecation.h>
#include <cstdint>

namespace eqlib {

union RGB
{
	struct
	{
		uint8_t Blue;
		uint8_t Green;
		uint8_t Red;
		uint8_t Alpha;
	};
	uint32_t ARGB;
};

struct EQRGB
{
	uint8_t red;
	uint8_t green;
	uint8_t blue;
};

struct ARGBCOLOR
{
	union
	{
		struct
		{
			uint8_t B;
			uint8_t G;
			uint8_t R;
			uint8_t A;
		};

		uint32_t ARGB;
	};
};
using PARGBCOLOR DEPRECATE("Use ARGBCOLOR* instead of PARGBCOLOR") = ARGBCOLOR *;

struct COLOR
{
	float red;
	float green;
	float blue;
};

} // namespace eqlib

// Actually a windef.h type, but we use it nontheless. Needs to match the windows definition.
typedef unsigned long COLORREF;
