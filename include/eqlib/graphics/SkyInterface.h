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

#include "eqlib/graphics/GraphicsEngine.h"

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
class CColor32Bit;

//----------------------------------------------------------------------------
enum ERainColor
{
	RainColor_Rain1,
	RainColor_Rain2,
	RainColor_Snow1,
	RainColor_Snow2,
	RainColor_Hail1,
	RainColor_Hail2,
	RainColor_Ice1,
	RainColor_Ice2,
	RainColor_Blood1,
	RainColor_Blood2,
	RainColor_Slime1,
	RainColor_Slime2,
	RainColor_Fire1,
	RainColor_Fire2,

	RainColor_Count,
};

//----------------------------------------------------------------------------
enum ESkyMode
{
	SkyMode_Off,
	SkyMode_Simple,
	SkyMode_Complex,
};

//----------------------------------------------------------------------------
class CSkyInterface
{
public:
	virtual ~CSkyInterface();
	virtual void SetSkyType(const char*) = 0;
	virtual const char* GetSkyType() = 0;
	virtual void SetWeatherType(const char*, float) = 0;
	virtual const char* GetWeatherType() const = 0;
	virtual const char* GetDefaultWeatherType() const = 0;
	virtual float GetSunAngle() = 0;
	virtual void SetSunAngle(float) = 0;
	virtual float GetMoonAngle() = 0;
	virtual void SetMoonAngle(float) = 0;
	virtual const CColor32Bit& GetAmbient() = 0;
	virtual const CColor32Bit& GetFogColor() = 0;
	virtual const CColor32Bit& GetSunColor() = 0;
	virtual const CColor32Bit& GetMoonColor() = 0;
	virtual const CColor32Bit& GetRainColor(ERainColor) = 0;
	virtual const CColor32Bit& GetSunBounceColor() = 0;
	virtual const CColor32Bit& GetMoonBounceColor() = 0;
	virtual float GetDayTime() = 0;
	virtual void SetDayTime(float) = 0;
	virtual bool IsMoonlightActive() = 0;
	virtual void Reset();
	virtual CVector3& GetSunDirection() = 0;
	virtual void SetUserMode(ESkyMode) = 0;
	virtual bool UsingFogAreaOverride() = 0;
	virtual void SetUsingFogAreaOverride(bool) = 0;
	virtual RGB* GetFogAreaOverride() = 0;
	virtual void SetFogAreaOverride(const RGB&) = 0;
	virtual float GetFogDensityOverride() = 0;
	virtual void SetFogDensityOverride(float) = 0;
};

//============================================================================

} // namespace eqlib
