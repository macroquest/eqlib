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

/**
 * A fancy pointer that derives its value from a function rather than from an address
 *
 * @tparam T Type of the pointee
 */
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
