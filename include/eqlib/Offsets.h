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

#include "eqlib/ComputedPointer.h"
#include "eqlib/ForeignPointer.h"

namespace eqlib {

//
// Offset adjustment helpers
//

// the preferred base of eqgame.exe
#if defined(_M_AMD64)
constexpr uintptr_t EQGamePreferredAddress = 0x140000000;
#else
constexpr uintptr_t EQGamePreferredAddress = 0x400000;
#endif // defined(_M_AMD64)

#if defined(_M_AMD64)
constexpr uintptr_t EQLibraryPreferredAddress = 0x180000000;
#else
constexpr uintptr_t EQLibraryPreferredAddress = 0x10000000;
#endif

// the base address of eqgame.exe
EQLIB_VAR uintptr_t EQGameBaseAddress;

// the base address of eqgraphicsdx9.dll
EQLIB_VAR uintptr_t EQGraphicsBaseAddress;

// the base address of eqmain.dll
EQLIB_VAR uintptr_t EQMainBaseAddress;

// the base address of kernel32.dll
EQLIB_VAR uintptr_t Kernel32BaseAddress;

// The name of eqmain.dll
EQLIB_VAR const wchar_t* EQMainModuleName;

// The name of eqgraphics.dll
EQLIB_VAR const wchar_t* EQGraphicsModuleName;

// For initializing base address at startup
EQLIB_OBJECT void InitBaseAddress();

// These macros are used for statically building offsets. If using dynamic offset generation
// with the pattern matching, don't use the macro.

// These functions are used for dynamically building offsets.

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
uintptr_t FixEQGameOffset(T nOffset)
{
	if (EQGameBaseAddress == 0)
		InitBaseAddress();

	return static_cast<uintptr_t>(nOffset) - static_cast<uintptr_t>(EQGamePreferredAddress) + EQGameBaseAddress;
}

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
uintptr_t FixEQGraphicsOffset(T nOffset)
{
	return static_cast<uintptr_t>(nOffset) - static_cast<uintptr_t>(EQLibraryPreferredAddress) + EQGraphicsBaseAddress;
}

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
uintptr_t FixEQMainOffset(T nOffset)
{
	return static_cast<uintptr_t>(nOffset) - static_cast<uintptr_t>(EQLibraryPreferredAddress) + EQMainBaseAddress;
}

#define INITIALIZE_EQGAME_OFFSET(var) uintptr_t var = FixEQGameOffset(var##_x)
#define INITIALIZE_EQGRAPHICS_OFFSET(var) uintptr_t var = FixEQGraphicsOffset(var##_x)
#define INITIALIZE_EQMAIN_OFFSET(var) uintptr_t var = FixEQMainOffset(var##_x)


// these macros do nothing but indicate to the reader that the function is actually in AssemblyFunctions.asm
#define CONSTRUCTOR_AT_ADDRESS(function, offset)
#define DESTRUCTOR_AT_ADDRESS(function, offset)

#define FUNCTION_CHECKS_OFF() \
    __pragma(optimize("ytg", on)) __pragma(runtime_checks("", off)) __pragma(check_stack(off)) __pragma(strict_gs_check(push,off))
#define FUNCTION_CHECKS_ON() \
    __pragma(optimize("", on)) __pragma(runtime_checks("",restore)) __pragma(check_stack())    __pragma(strict_gs_check(pop))


//
// FUNCTION_AT_ADDRESS macros
//

#if defined(_M_AMD64)

#define FUNCTION_AT_ADDRESS(rettype, func, variable)                                               \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype func {                                                            \
		static_assert(eqlib::detail::is_size_ok<rettype>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return ((TargetFunction)variable)();                                                       \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#define FUNCTION_AT_VIRTUAL_ADDRESS(rettype, func, offset)                                         \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype func {                                                            \
		static_assert(eqlib::detail::is_size_ok<rettype>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return ((TargetFunction)(*(reinterpret_cast<uintptr_t**>(this)[0] + (offset/8))))();       \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#define FORWARD_FUNCTION_TO_VTABLE(rettype, function, Class, member)                               \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype Class::function {                                                 \
		static_assert(eqlib::detail::is_size_ok<rettype>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return ((TargetFunction)(Class::sm_vftable->member))();                                    \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#define FORWARD_FUNCTION_TO_VTABLE2(a, b, c, d, e) \
	FORWARD_FUNCTION_TO_VTABLE(a, b, c, e)

#define FUNCTION_AT_VIRTUAL_TABLE_ADDRESS(rettype, function, address, offset)                      \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype function {                                                        \
		static_assert(eqlib::detail::check_size_t<rettype>::value <= 8, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return (*(TargetFunction*)((address + offset * sizeof(uintptr_t))))();                     \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#else // x86 version

#define FUNCTION_AT_ADDRESS(RetType, Function, Variable)                                 \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		__asm mov eax, Variable                                                          \
		__asm jmp eax                                                                    \
	}

#define FUNCTION_AT_VIRTUAL_ADDRESS(RetType, Function, VirtualOffset)                    \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		__asm mov eax, [ecx]                                                             \
		__asm lea eax, [eax+VirtualOffset]                                               \
		__asm mov eax, [eax]                                                             \
		__asm jmp eax                                                                    \
	}

#define FORWARD_FUNCTION_TO_VTABLE(RetType, Function, Class, Member)                     \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		using VFT = Class::VirtualFunctionTable;                                         \
		__asm mov eax, [Class::sm_vftable]                                               \
		__asm jmp dword ptr [eax]VFT.Member                                              \
	}

#define FORWARD_FUNCTION_TO_VTABLE2(RetType, Function, Class, Base, Member)              \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		using VFT = Base::VirtualFunctionTable;                                          \
		__asm mov eax, [Class::sm_vftable]                                               \
		__asm jmp dword ptr [eax]VFT.Member                                              \
	}

#define FUNCTION_AT_VIRTUAL_TABLE_ADDRESS(RetType, function, address, virtualoffset)     \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		__asm mov edx, virtualoffset                                                     \
		__asm mov eax, [address]                                                         \
		__asm lea eax, [eax+edx*4]                                                       \
		__asm mov eax, [eax]                                                             \
		__asm jmp eax                                                                    \
	}

#endif // !defined(_M_X64)


EQLIB_API bool DataCompare(const uint8_t* pData, const uint8_t* bMask, const char* szMask);

EQLIB_API uintptr_t FindPattern(uintptr_t dwAddress, uintptr_t dwLen, const uint8_t* bPattern, const char* szMask);

EQLIB_API uintptr_t GetDWordAt(uintptr_t address, uintptr_t numBytes);

EQLIB_API uintptr_t GetFunctionAddressAt(uintptr_t address, uintptr_t addressOffset, uintptr_t numBytes);

} // namespace eqlib
