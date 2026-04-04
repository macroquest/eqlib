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

#include "eqlib/game/Constants.h"
#include "eqlib/game/CXStr.h"

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

	EQLIB_OBJECT int operator==(const KeyCombo& Combo) const
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

class [[offsetcomments]] KeypressHandler
{
public:
	EQLIB_OBJECT static KeypressHandler& Get();

	EQLIB_OBJECT KeypressHandler();
	EQLIB_OBJECT ~KeypressHandler();
	EQLIB_OBJECT bool AttachAltKeyToEqCommand(const KeyCombo&, unsigned int);
	EQLIB_OBJECT bool AttachKeyToEqCommand(const KeyCombo&, unsigned int);
	EQLIB_OBJECT bool HandleKeyDown(const KeyCombo&);
	EQLIB_OBJECT bool HandleKeyUp(const KeyCombo&);
	EQLIB_OBJECT const KeyCombo& GetAltKeyAttachedToEqCommand(unsigned int) const;
	EQLIB_OBJECT const KeyCombo& GetKeyAttachedToEqCommand(unsigned int) const;
	EQLIB_OBJECT void ResetKeysToEqDefaults();

	// private
	EQLIB_OBJECT bool IsReservedKey(const KeyCombo&) const;
	EQLIB_OBJECT bool LoadAndConvertOldKeymappingFormat(unsigned int, int, KeyCombo*);
	EQLIB_OBJECT bool LoadKeymapping(unsigned int, int, KeyCombo*);
	EQLIB_OBJECT bool MapKeyToEqCommand(const KeyCombo&, int, unsigned int);
	EQLIB_OBJECT CXStr GetEqCommandSaveName(unsigned int, int) const;
	EQLIB_OBJECT void ClearCommandStateArray();
	EQLIB_OBJECT void LoadAndSetKeymappings();
	EQLIB_OBJECT void SaveKeymapping(unsigned int, const KeyCombo&, int);

/*0x0000*/ KeyCombo     NormalKey[nEQMappableCommands];
/*0x08a4*/ KeyCombo     AltKey[nEQMappableCommands];
/*0x1148*/ char         CommandState[nEQMappableCommands];
/*0x1374*/
};

} // namespace eqlib
