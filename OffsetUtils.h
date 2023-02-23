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

#include <cstdint>

namespace eqlib {

#pragma warning( push )
#pragma warning( disable : 4312 ) // remove the warnings for the reinterpret cast from pointer to byte

inline bool DataCompare(const uint8_t* pData, const uint8_t* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
	{
		if (*szMask == 'x' && *pData != *bMask)
			return false;
	}
	return (*szMask) == 0;
}

inline uintptr_t FindPattern(uintptr_t dwAddress, uintptr_t dwLen, const uint8_t* bPattern, const char* szMask)
{
	for (uintptr_t i = 0; i < dwLen; i++)
	{
		if (DataCompare(reinterpret_cast<uint8_t*>(dwAddress + i), bPattern, szMask))
			return dwAddress + i;
	}

	return 0;
}

inline uintptr_t GetDWordAt(uintptr_t address, uintptr_t numBytes)
{
	if (address)
	{
		address += numBytes;
		return *reinterpret_cast<uintptr_t*>(address);
	}

	return 0;
}

inline uintptr_t GetFunctionAddressAt(uintptr_t address, uintptr_t addressOffset, uintptr_t numBytes)
{
	if (address)
	{
		uintptr_t displacement = *reinterpret_cast<uintptr_t*>(address + addressOffset);
		return address + numBytes + displacement;
	}

	return 0;
}

#pragma warning( pop )

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
		if (m_ptr)
		{
			*m_ptr = reinterpret_cast<T*>(value);
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
	{ m_ptr = reinterpret_cast<T**>(addr); }
	ForeignPointer(const ForeignPointer& other) noexcept
	{ m_ptr = other.m_ptr; }
	ForeignPointer(ForeignPointer&& other) noexcept
	{ m_ptr = other.m_ptr; }

	ForeignPointer& operator=(const ForeignPointer& other) noexcept
	{
		m_ptr = other.m_ptr;
		return *this;
	}

	ForeignPointer& operator=(ForeignPointer&& other) noexcept
	{
		m_ptr = other.m_ptr;
		return *this;
	}

	ForeignPointer& operator=(uintptr_t other) noexcept
	{
		set_offset(other);
		return *this;
	}

	ForeignPointer& operator=(nullptr_t) noexcept
	{
		if (m_ptr)
		{
			*m_ptr = nullptr;
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
		return get() == nullptr;
	}

	bool operator!= (nullptr_t) const noexcept
	{
		return get() != nullptr;
	}

	// Compare with another type of ForeignPointer by comparing
	// the underlying pointer types.
	template <typename... T>
	bool operator== (const ForeignPointer<T...>& other)
	{
		return get() == other.get();
	}

	template <typename... T>
	bool operator!= (const ForeignPointer<T...>& other)
	{
		return get() != other.get();
	}

	T& operator*() const noexcept
	{
		assert(m_ptr != nullptr && *m_ptr != nullptr);
		return **m_ptr;
	}

	T* operator->() const noexcept
	{
		return get();
	}

	explicit operator bool() const noexcept
	{
		return is_valid();
	}

	operator void* () const noexcept
	{
		return get();
	}

	template <typename U>
	U* get_as() const noexcept { return (U*)get(); }

	bool is_valid() const noexcept { return m_ptr && *m_ptr; }

	uintptr_t get_offset() const noexcept { return reinterpret_cast<uintptr_t>(m_ptr); }
	void set_offset(uintptr_t offset) noexcept { m_ptr = reinterpret_cast<T**>(offset); }
	void set_offset(T** offset) noexcept { m_ptr = offset; }

	void reset() { m_ptr = nullptr; }

	// If the pointer is convertible, then this object is convertible
	template <typename U, typename = std::enable_if<std::is_convertible_v<T, U>, void>>
	inline operator ForeignPointer<U>& ()
	{
		return reinterpret_cast<ForeignPointer<U>&>(*this);
	}
};

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
