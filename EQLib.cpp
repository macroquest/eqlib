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
#include "EQLib.h"

namespace eqlib {

// allocate memory as if by using eq's malloc.
using eqAllocFn = void* (*)(std::size_t amount);
eqAllocFn eqAlloc_ = nullptr;

void* eqAlloc(std::size_t sz)
{
	return eqAlloc_(sz);
}

// free memory as if by using eq's free.
using eqFreeFn = void (*)(void*);
eqFreeFn eqFree_ = nullptr;

void eqFree(void* ptr)
{
	eqFree_(ptr);
}

namespace SoeUtil
{
	void* Alloc(size_t bytes, int align) {
		return eqAlloc(bytes);
	}
	void Free(void* p, int align) {
		return eqFree(p);
	}
}

FUNCTION_AT_ADDRESS(void*, eqAllocImpl(size_t), __eq_new);// Exception to Separate Function Addresses
FUNCTION_AT_ADDRESS(void, eqFreeImpl(void*), __eq_delete);// Exception to Separate Function Addresses

void InitializeEQLib()
{
	eqAlloc_ = eqAllocImpl;
	eqFree_ = eqFreeImpl;

	InitializeGlobals();

	InitializeUI();
	InitializeCXWnd();
	InitializeCXStr();
}

void InitializeEQLibForTesting()
{
	eqAlloc_ = malloc;
	eqFree_ = free;
}

void ShutdownEQLib()
{
	ShutdownCXStr();
}

uint32_t GetStringCRC(std::string_view sv)
{
	return GetBufferCRC(sv.data(), sv.length());
}

void GetFactionName(int FactionID, char* szBuffer, size_t bufferSize)
{
	if (const char* ptr = pCDBStr->GetString(FactionID, eFactionName, nullptr))
	{
		strcpy_s(szBuffer, bufferSize, ptr);
	}
	else
	{
		sprintf_s(szBuffer, bufferSize, "Unknown Faction[%d]", FactionID);
	}
}

CCachedFont* CCachedFont::Get(int fontStyle)
{
	if (!pGraphicsEngine) return nullptr;
	auto resourceMgr = pGraphicsEngine->pResourceManager;
	if (!resourceMgr) return nullptr;

	CCachedFont* pCachedFont = nullptr;
	EStatus status;

	// GetCachedFont may crash here if the font manager hasn't been created yet, but we're
	// using this routine to get access to the font manager. If it throws an access violation,
	// the application state is fine, we can just bail on this attempt.
	__try {
		status = resourceMgr->GetCachedFont(fontStyle, reinterpret_cast<CCachedFontInterface**>(&pCachedFont));
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		status = eStatusFailure;
	}

	if (status == eStatusFailure)
		return nullptr;

	return pCachedFont;
}


} // namespace eqlib

#if __has_include("../private/EQLib-private.cpp")
#include "../private/EQLib-private.cpp"
#endif
