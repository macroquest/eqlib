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

#include "pch.h"

#include "eqlib/Offsets.h"

namespace eqlib {

// These don't change during the execution of the program. They can be loaded
// at static initialization time because of this.
uintptr_t EQGameBaseAddress = (uintptr_t)GetModuleHandle(nullptr);

#if HAS_DIRECTX_9
uintptr_t EQGraphicsBaseAddress = (uintptr_t)GetModuleHandle("EQGraphicsDX9.dll");
#else
uintptr_t EQGraphicsBaseAddress = (uintptr_t)GetModuleHandle("EQGraphics.dll");
#endif

uintptr_t EQMainBaseAddress = (uintptr_t)GetModuleHandle("eqmain.dll");

uintptr_t Kernel32BaseAddress = (uintptr_t)GetModuleHandle("kernel32.dll");

#pragma warning(push)
#pragma warning(disable: 4312) // remove the warnings for the reinterpret cast from pointer to byte

bool DataCompare(const uint8_t* pData, const uint8_t* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
	{
		if (*szMask == 'x' && *pData != *bMask)
			return false;
	}
	return (*szMask) == 0;
}

uintptr_t FindPattern(uintptr_t dwAddress, uintptr_t dwLen, const uint8_t* bPattern, const char* szMask)
{
	for (uintptr_t i = 0; i < dwLen; i++)
	{
		if (DataCompare(reinterpret_cast<uint8_t*>(dwAddress + i), bPattern, szMask))
			return dwAddress + i;
	}

	return 0;
}

uintptr_t GetDWordAt(uintptr_t address, uintptr_t numBytes)
{
	if (address)
	{
		address += numBytes;
		return *reinterpret_cast<uintptr_t*>(address);
	}

	return 0;
}

uintptr_t GetFunctionAddressAt(uintptr_t address, uintptr_t addressOffset, uintptr_t numBytes)
{
	if (address)
	{
		uintptr_t displacement = *reinterpret_cast<uintptr_t*>(address + addressOffset);
		return address + numBytes + displacement;
	}

	return 0;
}

#pragma warning(pop)

} // namespace eqlib
