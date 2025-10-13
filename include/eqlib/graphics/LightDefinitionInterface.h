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

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
struct COLOR;

//----------------------------------------------------------------------------
class CLightDefinitionInterface
{
public:
	virtual char* GetTag() = 0;
	virtual int GetUpdateInterval() = 0;
	virtual void SetUpdateInterval(int) = 0;
	virtual bool GetSkipFrames() = 0;
	virtual void SetSkipFrames(bool) = 0;
	virtual COLOR* GetColorList() = 0;
	virtual void SetColorList(COLOR*) = 0;
	virtual float* GetIntensityList() const = 0;
	virtual void SetIntensityList(float*) = 0;
	virtual int GetNumFrames() = 0;
	virtual void SetNumFrames(int) = 0;
};

//============================================================================

} // namespace eqlib
