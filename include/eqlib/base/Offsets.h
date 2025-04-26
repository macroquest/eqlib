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

#include "eqlib/Config.h"

#include <cstddef>
#include <cstdint>

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

// These macros are used for statically building offsets. If using dynamic offset generation
// with the pattern matching, don't use the macro.

// These functions are used for dynamically building offsets.

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
uintptr_t FixEQGameOffset(T nOffset)
{
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


//
// ForeignPointer
//

// Variadic expansion of bases for ForeignPointer allow us to specify multiple allowable types for
// conversion. For example:
//
//     ForeignPointer<StringTable, EQSTRINGTABLE> pStringTable;
//
// This allows us to implicitly convert into StringTable or EQSTRINGTABLE.
//
// Both are valid:
//     EQSTRINGTABLE* pTable = pStringTable;
//     StringTable* pTable = pStringTable;
//
template <typename... Args>
struct ForeignPointer_StorageBase;

template <typename T>
struct ForeignPointer_StorageBase<T>
{
	operator T* () const noexcept
	{
		return get();
	}

	void set(T* value) noexcept
	{
		if (m_ptr)
		{
			*m_ptr = value;
		}
	}

	T* get() const noexcept
	{
		return m_ptr ? *m_ptr : nullptr;
	}

	T** get_raw() const noexcept
	{
		return m_ptr;
	}

protected:
	template <typename U>
	U* coerced_get() const noexcept
	{
		return (U*)get();
	}

	T** m_ptr = 0;
};

template <typename T, typename U, typename... Rest>
struct ForeignPointer_StorageBase<T, U, Rest...> : public ForeignPointer_StorageBase<T, Rest...>
{
	operator U* () const noexcept
	{
		return this->coerced_get<U>();
	}

	bool operator==(U* other) const noexcept
	{
		return this->coerced_get<U>() == other;
	}

	bool operator!=(U* other) const noexcept
	{
		return this->coerced_get<U>() != other;
	}

	using ForeignPointer_StorageBase<T, Rest...>::set;

	void set(U* value) noexcept
	{
		if (this->m_ptr)
		{
			*this->m_ptr = reinterpret_cast<T*>(value);
		}
	}
};

// a Utility helper class to replace those pesky pointer defines
template <typename T, typename... Conversions>
class ForeignPointer : public ForeignPointer_StorageBase<T, Conversions...>
{
public:
	ForeignPointer() noexcept = default;
	~ForeignPointer() noexcept = default;

	ForeignPointer(uintptr_t addr) noexcept
	{ this->m_ptr = reinterpret_cast<T**>(addr); }
	ForeignPointer(const ForeignPointer& other) noexcept
	{ this->m_ptr = other.m_ptr; }
	ForeignPointer(ForeignPointer&& other) noexcept
	{ this->m_ptr = other.m_ptr; }

	ForeignPointer& operator=(const ForeignPointer& other) noexcept
	{
		this->m_ptr = other.m_ptr;
		return *this;
	}

	ForeignPointer& operator=(ForeignPointer&& other) noexcept
	{
		this->m_ptr = other.m_ptr;
		return *this;
	}

	ForeignPointer& operator=(uintptr_t other) noexcept
	{
		set_offset(other);
		return *this;
	}

	ForeignPointer& operator=(nullptr_t) noexcept
	{
		if (this->m_ptr)
		{
			*this->m_ptr = nullptr;
		}

		return *this;
	}

	template <typename U>
	ForeignPointer& operator=(U* other)
	{
		this->set(other);
		return *this;
	}

	bool operator== (nullptr_t) const noexcept
	{
		return this->get() == nullptr;
	}

	bool operator!= (nullptr_t) const noexcept
	{
		return this->get() != nullptr;
	}

	// Compare with another type of ForeignPointer by comparing
	// the underlying pointer types.
	template <typename... T>
	bool operator== (const ForeignPointer<T...>& other)
	{
		return this->get() == other.get();
	}

	template <typename... T>
	bool operator!= (const ForeignPointer<T...>& other)
	{
		return this->get() != other.get();
	}

	T& operator*() const noexcept
	{
		assert(this->m_ptr != nullptr && *this->m_ptr != nullptr);
		return **this->m_ptr;
	}

	T* operator->() const noexcept
	{
		return this->get();
	}

	explicit operator bool() const noexcept
	{
		return is_valid();
	}

	operator void* () const noexcept
	{
		return this->get();
	}

	template <typename U>
	U* get_as() const noexcept { return (U*)this->get(); }

	bool is_valid() const noexcept { return this->m_ptr && *this->m_ptr; }

	uintptr_t get_offset() const noexcept { return reinterpret_cast<uintptr_t>(this->m_ptr); }
	void set_offset(uintptr_t offset) noexcept { this->m_ptr = reinterpret_cast<T**>(offset); }
	void set_offset(T** offset) noexcept { this->m_ptr = offset; }

	void reset() { this->m_ptr = nullptr; }

	// If the pointer is convertible, then this object is convertible
	template <typename U, typename = std::enable_if<std::is_convertible_v<T, U>, void>>
	inline operator ForeignPointer<U>& ()
	{
		return reinterpret_cast<ForeignPointer<U>&>(*this);
	}
};

//
// ComputedPointer
//

// A pointer-like type that gets its value by derive the computing from some expression.
// This pointer is non-copyable and non-reassignable.
template <typename T>
class ComputedPointer
{
public:
	using ComputedFn = T* (*)();

	ComputedPointer(ComputedFn fn) : m_fn(fn) {}
	~ComputedPointer() = default;

	ComputedPointer(const ComputedPointer&) = delete;
	ComputedPointer& operator= (const ComputedPointer&) = delete;

	operator T* () const noexcept
	{
		return get();
	}

	T& operator* () const noexcept
	{
		T* value = get();
		assert(value != nullptr);

		return *value;
	}

	T* operator-> () const noexcept
	{
		return get();
	}

	explicit operator bool() const noexcept { return get() != nullptr; }

	T* get() const noexcept
	{
		return m_fn();
	}

private:
	ComputedFn m_fn;
};


} // namespace eqlib
