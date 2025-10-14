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
class CColor32Bit;

//----------------------------------------------------------------------------
class CLightInterface
{
public:
	virtual void SetDynamicSceneInfluenceFlag() = 0;
	virtual void SetStaticSceneInfluenceFlag() = 0;
	virtual void SetNormal(CVector3*) = 0;
	virtual void SetColor(const CColor32Bit&) = 0;
	virtual void SetRadius(float) = 0;
	virtual float GetRadius() = 0;
	virtual void SetPlayerTorchFlag(bool) = 0;
	virtual void SetPrimaryPlayerTorchFlag(bool) = 0;
	virtual EStatus Move(CVector3*) = 0;
	virtual void GetPosition(CVector3*) = 0;
};

//============================================================================

} // namespace eqlib

