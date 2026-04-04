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

#include "eqlib/game/MathTypes.h"
#include "eqlib/graphics/GraphicsEngine.h"

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
class CMathInterface
{
public:
	virtual float Sin(float) = 0;
	virtual float Cos(float) = 0;
	virtual float FastSin(float) = 0;
	virtual float FastCos(float) = 0;
	virtual float Sqrt(float) = 0;
	virtual float InvSqrt(float) = 0;
	virtual float AngleArcTan(float) = 0;
	virtual void CalculateRotationCoefficients(float, float, float, float*) = 0;
};

//============================================================================

} // namespace eqlib

