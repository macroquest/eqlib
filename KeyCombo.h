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

#include "Common.h"

namespace eqlib {

class KeyCombo
{
public:
	EQLIB_OBJECT KeyCombo(int);

	EQLIB_OBJECT KeyCombo(unsigned char keycode, bool alt, bool ctrl, bool shift)
	{
		Data[0] = alt;
		Data[1] = ctrl;
		Data[2] = shift;
		Data[3] = keycode;
	}

	EQLIB_OBJECT KeyCombo(unsigned int, unsigned int, bool, bool, bool);

	EQLIB_OBJECT KeyCombo()
	{
		Data[0] = 0;
		Data[1] = 0;
		Data[2] = 0;
		Data[3] = 0;
	}

	EQLIB_OBJECT void Clear()
	{
		Data[0] = 0;
		Data[1] = 0;
		Data[2] = 0;
		Data[3] = 0;
	}

	EQLIB_OBJECT bool UsesAlt() const
	{
		return Data[0] != 0;
	}

	EQLIB_OBJECT bool UsesCtrl() const
	{
		return Data[1] != 0;
	}

	EQLIB_OBJECT bool UsesShift() const
	{
		return Data[2] != 0;
	}

	EQLIB_OBJECT uint8_t GetKey() const
	{
		return Data[3];
	}

	EQLIB_OBJECT int operator==(const KeyCombo& Combo)
	{
		return *(uint32_t*)&Data == *(uint32_t*)&Combo.Data;
	}

	EQLIB_OBJECT CXStr GetTextDescription() const;

	EQLIB_OBJECT const KeyCombo& operator=(int);

	EQLIB_OBJECT operator int() const;
	EQLIB_OBJECT bool GetPrintableLetter(unsigned short*) const;

	inline bool IsEmpty()
	{
		return Data[0] == 0 && Data[1] == 0 && Data[2] == 0 && Data[3] == 0;
	}

	// private
	EQLIB_OBJECT bool GetPrintableLetterFromScanCode(unsigned char, bool, bool, unsigned short*) const;
	EQLIB_OBJECT bool GetPrintableLetterFromVirtualKey(unsigned int, unsigned int, bool, bool, unsigned short*) const;
	EQLIB_OBJECT bool GetScanCodeFromVirtualKey(unsigned int, unsigned int, unsigned char*) const;
	EQLIB_OBJECT bool GetVirtualKeyFromScanCode(unsigned char, int*) const;

	uint8_t Data[4];

	// actually:
	// bool Alt;
	// bool Ctrl;
	// bool Shift;
	// uint8_t KeyCode;
};

} // namespace eqlib
