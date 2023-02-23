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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "pch.h"

#include "Globals.h"
#include "UITemplates.h"

namespace eqlib {

//============================================================================
// CButtonDrawTemplate
//============================================================================

CTextureAnimation* CButtonDrawTemplate::GetAnimation(bool pressed, bool hover, bool disabled, bool decal /*= false*/) const
{
	if (decal)
	{
		if (disabled)
		{
			if (pressed && ptaPressedDisabledDecal != nullptr)
			{
				return ptaPressedDisabledDecal;
			}

			if (ptaDisabledDecal != nullptr)
			{
				return ptaDisabledDecal;
			}

			return ptaNormalDecal;
		}

		if (pressed)
		{
			if (hover && ptaPressedFlybyDecal != nullptr)
			{
				return ptaPressedFlybyDecal;
			}

			if (ptaPressedDecal != nullptr)
			{
				return ptaPressedDecal;
			}

			return ptaNormalDecal;
		}

		if (hover)
		{
			if (ptaFlybyDecal != nullptr)
			{
				return ptaFlybyDecal;
			}

			return ptaNormalDecal;
		}
	}
	else // not a decal
	{
		if (disabled)
		{
			if (pressed && ptaPressedDisabled != nullptr)
			{
				return ptaPressedDisabled;
			}

			if (ptaDisabled != nullptr)
			{
				return ptaDisabled;
			}

			return ptaNormal;
		}

		if (pressed)
		{
			if (hover && ptaPressedFlyby != nullptr)
			{
				return ptaPressedFlyby;
			}

			if (ptaPressed != nullptr)
			{
				return ptaPressed;
			}

			return ptaNormal;
		}

		if (hover)
		{
			if (ptaFlyby != nullptr)
			{
				return ptaFlyby;
			}

			return ptaNormal;
		}
	}

	return ptaNormal;
}

CXSize CButtonDrawTemplate::GetSize() const
{
	if (ptaNormal != nullptr)
	{
		return ptaNormal->GetSize();
	}

	return { 0, 0 };
}

//============================================================================
// CScreenPieceTemplate
//============================================================================

void CScreenPieceTemplate::DeclareType(uint32_t type)
{
	arRuntimeTypes.Add(type);
}

bool CScreenPieceTemplate::IsType(uint32_t type) const
{
	for (int i = 0; i < arRuntimeTypes.GetLength(); ++i)
	{
		if (arRuntimeTypes[i] == type)
			return true;
	}

	return false;
}

uint32_t CScreenPieceTemplate::GetUltimateType() const
{
	if (arRuntimeTypes.GetLength() > 0)
	{
		return arRuntimeTypes[arRuntimeTypes.GetLength() - 1];
	}

	return 0;
}

const char* XWndBackgroundTypeToString(XWndBackgroundType type)
{
	switch (type)
	{
	case eNormal: return "Normal";
	case eNoTexture: return "NoTexture";
	default: return "Unknown";
	}
}

const char* XWndBackgroundDrawTypeToString(XWndBackgroundDrawType type)
{
	switch (type)
	{
	case eDrawTile: return "Tile";
	case eDrawNormal: return "Normal";
	case eDrawStretch: return "Stretch";
	case eDrawCentered: return "Centered";
	case eDrawCenteredVertical: return "Centered Vertically";
	case eDrawCenteredHorizontal: return "Centered Horizontally";
	default: return "Unknown";
	}
}

//----------------------------------------------------------------------------

CScreenPieceTemplate::CScreenPieceTemplate()
{
}

CControlTemplate::CControlTemplate()
{
}

CPageTemplate::CPageTemplate()
{
}

//============================================================================

} // namespace eqlib
