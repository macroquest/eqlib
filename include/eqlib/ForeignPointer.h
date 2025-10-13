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

namespace eqlib {

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

/**
 * A fancy pointer that points to the object pointed at from another address. This is
 * effectively a wrapper to give a double pointer to create the behavior of a standard
 * single pointer.
 *
 * @tparam T Type of the pointee
 * @tparam Conversions Additional types that are allowed implicit conversions
 */
template <typename T, typename... Conversions>
class ForeignPointer : public ForeignPointer_StorageBase<T, Conversions...>
{
public:
	ForeignPointer() noexcept = default;
	~ForeignPointer() noexcept = default;

	ForeignPointer(uintptr_t addr) noexcept
	{
		this->m_ptr = reinterpret_cast<T**>(addr);
	}

	// To avoid accidental reassignment, ForeignPointer is non-copyable. To copy a ForeignPointer,
	// use .clone() or .reset()
	ForeignPointer(const ForeignPointer& other) noexcept = delete;
	ForeignPointer(ForeignPointer&& other) noexcept = delete;
	ForeignPointer& operator=(const ForeignPointer& other) noexcept = delete;
	ForeignPointer& operator=(ForeignPointer&& other) noexcept = delete;

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
	void reset(const ForeignPointer& other) { this->m_ptr = other.m_ptr; }

	ForeignPointer clone() const { return ForeignPointer<T, Conversions...>(get_offset()); }

	// If the pointer is convertible, then this object is convertible
	template <typename U>
	ForeignPointer<U>& ref()
	{
		return reinterpret_cast<ForeignPointer<U>&>(*this);
	}
};

template <typename T>
class ForeignReference
{
	using ValueType = std::remove_cv_t<std::remove_reference_t<T>>;

public:
	constexpr ForeignReference(nullptr_t) noexcept
		: m_ptr(nullptr)
	{
	}
	constexpr explicit ForeignReference(ValueType* ptr) noexcept
		: m_ptr(ptr)
	{}

	constexpr explicit ForeignReference(uintptr_t address) noexcept
		: m_ptr(reinterpret_cast<ValueType*>(address))
	{}

	constexpr ForeignReference(const ForeignReference& other) noexcept
	{
		m_ptr = other.m_ptr;
	}

	// assignment
	constexpr ForeignReference& operator=(const ForeignReference& other) noexcept
	{
		m_ptr = other.m_ptr;
		return *this;
	}

	constexpr ForeignReference& operator=(ForeignReference&& other) noexcept
	{
		m_ptr = other.m_ptr;
		return *this;
	}

	constexpr ForeignReference& operator=(T value) noexcept
	{
		*m_ptr = value;
		return *this;
	}

	// getters
	constexpr const ValueType& get() const noexcept
	{
		return *m_ptr;
	}

	constexpr ValueType& get() noexcept
	{
		return *m_ptr;
	}

	constexpr operator const ValueType& () const& noexcept // const-ref context converts to const-ref
	{
		return *m_ptr;
	}

	// setters
	constexpr void set(ValueType& value) noexcept
	{
		*m_ptr = value;
	}

	constexpr operator ValueType&() & noexcept // ref context converts to ref
	{
		return *m_ptr;
	}

	constexpr operator ValueType() && noexcept // r-value ref context converts to value
	{
		return *m_ptr;
	}

	// comparison operators
	template <typename U>
	constexpr bool operator==(const U& other) const noexcept
	{
		return *m_ptr == other;
	}

	template <typename U>
	constexpr bool operator!=(const U& other) const noexcept
	{
		return *m_ptr != other;
	}

	template <typename U>
	constexpr bool operator<(const U& other) const noexcept
	{
		return *m_ptr < other;
	}

	template <typename U>
	constexpr bool operator>(const U& other) const noexcept
	{
		return *m_ptr > other;
	}

	template <typename U>
	constexpr bool operator<=(const U& other) const noexcept
	{
		return *m_ptr <= other;
	}

	template <typename U>
	constexpr bool operator>=(const U& other) const noexcept
	{
		return *m_ptr >= other;
	}

private:
	ValueType* m_ptr;
};

} // namespace eqlib
