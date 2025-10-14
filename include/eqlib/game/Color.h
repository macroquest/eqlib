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

#include "eqlib/Common.h"

#include <algorithm>

#ifdef RGB
#undef RGB
#endif

// How many ways can we define a color?

namespace eqlib {

//----------------------------------------------------------------------------
class CColor32Bit;

//----------------------------------------------------------------------------
namespace color_util
{
	constexpr uint8_t FromFloat(float f)
	{
		return static_cast<uint8_t>(std::clamp(static_cast<int>(f * 255.0f), 0, 255));
	}

	template <typename T, typename = std::enable_if_t<std::is_integral_v<T>>>
	constexpr float ToFloat(T c)
	{
		return std::clamp<float>(c / 255.0f, 0.0f, 1.0f);
	}
}

//----------------------------------------------------------------------------
struct COLOR
{
	float Red;
	float Green;
	float Blue;

	COLOR() : Red(0), Green(0), Blue(0)
	{
	}

	COLOR(float c) : Red(c), Green(c), Blue(c)
	{
	}

	COLOR(float red, float green, float blue) : Red(red), Green(green), Blue(blue)
	{
	}

	template <typename T, typename = std::enable_if_t<std::is_integral_v<T>>>
	COLOR(T red, T green, T blue)
		: Red(color_util::ToFloat(red))
		, Green(color_util::ToFloat(green))
		, Blue(color_util::ToFloat(blue))
	{
	}

	COLOR(const CColor32Bit& color);

	CColor32Bit ToColor32Bit() const;
};

//----------------------------------------------------------------------------
class CColor32Bit
{
public:
	union
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

	CColor32Bit() : ARGB(0) {}
	CColor32Bit(uint32_t argb) : ARGB(argb) {}
	CColor32Bit(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255) : Blue(b), Green(g), Red(r), Alpha(a) {}
};

//----------------------------------------------------------------------------
inline COLOR::COLOR(const CColor32Bit& color)
{
	Red = color.Red / 255.0f;
	Green = color.Green / 255.0f;
	Blue = color.Blue / 255.0f;
}

//----------------------------------------------------------------------------
inline CColor32Bit COLOR::ToColor32Bit() const
{
	return CColor32Bit(
		static_cast<uint8_t>(std::clamp(Red * 255.0f, 0.0f, 255.0f)),
		static_cast<uint8_t>(std::clamp(Green * 255.0f, 0.0f, 255.0f)),
		static_cast<uint8_t>(std::clamp(Blue * 255.0f, 0.0f, 255.0f)),
		255);
}

//----------------------------------------------------------------------------
class RGB
{
public:
	constexpr RGB() : ARGB(0)
	{
	}

	constexpr RGB(uint32_t ARGB)
		: ARGB(ARGB)
	{
	}

	constexpr RGB(uint8_t R, uint8_t G, uint8_t B, uint8_t A = 255)
		: Blue(B), Green(G), Red(R), Alpha(A)
	{
	}

	constexpr RGB(float R, float G, float B, float A = 1.0f)
		: Blue(color_util::FromFloat(B))
		, Green(color_util::FromFloat(G))
		, Red(color_util::FromFloat(R))
		, Alpha(color_util::FromFloat(A))
	{
	}

	constexpr RGB(const COLOR& color)
		: Blue(color_util::FromFloat(color.Blue))
		, Green(color_util::FromFloat(color.Green))
		, Red(color_util::FromFloat(color.Red))
	{
	}

	union
	{
		struct
		{
			uint8_t Blue;
			uint8_t Green;
			uint8_t Red;
			uint8_t Alpha;
		};

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

struct EQRGB
{
	uint8_t red;
	uint8_t green;
	uint8_t blue;
};

struct ARGBCOLOR : RGB {};

} // namespace eqlib

// Actually a windef.h type, but we use it nonetheless. Needs to match the windows definition.
using COLORREF = unsigned long;
