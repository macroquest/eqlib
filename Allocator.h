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

#include <memory>

// Provides Alloc and Free methods that use the everquest heap. This is to allow
// us to allocate memory in a way that can later be freed by everquest later on.
// This enables us to do things like create new strings or modify existing strings,
// insert elements into containers, etc.

namespace eqlib {

EQLIB_API void* eqAlloc(std::size_t sz);
EQLIB_API void eqFree(void* ptr);

// c++17 based custom allocator for creating objects on eq's heap
template <typename T>
struct everquest_allocator
{
	using value_type = T;
	using propogate_on_container_move_assignment = std::true_type;
	using is_always_equal = std::true_type;

	everquest_allocator() noexcept {}
	everquest_allocator(const everquest_allocator&) noexcept {}
	~everquest_allocator() {}

	template <class U>
	everquest_allocator(const everquest_allocator<U>&) noexcept {}

	T* allocate(std::size_t count)
	{
		return reinterpret_cast<T*>(eqAlloc(count * sizeof(T)));
	}

	void deallocate(T* p, size_t)
	{
		eqFree(p);
	}
};

template <typename T>
bool operator==(const everquest_allocator<T>&, const everquest_allocator<T>&) noexcept
{
	return true;
}

template <typename T>
bool operator!=(const everquest_allocator<T>&, const everquest_allocator<T>&) noexcept
{
	return false;
}

namespace detail
{
	// tag type used to enable the eq allocator overloads of operator new/delete
	// example:
	// int Foo = new(eqAllocator) int;
	constexpr struct EqAllocate {} eqAllocator;
}} // namespace eqlib

inline void* operator new (size_t bytes, eqlib::detail::EqAllocate)
{
	return eqlib::eqAlloc(bytes);
}

inline void* operator new[](size_t bytes, eqlib::detail::EqAllocate)
{
	return eqlib::eqAlloc(bytes);
}

inline void operator delete(void* m, eqlib::detail::EqAllocate)
{
	eqlib::eqFree(m);
}

inline void operator delete[](void* m, eqlib::detail::EqAllocate)
{
	eqlib::eqFree(m);
}

namespace eqlib {

// custom replacement for delete m;
template <typename T>
inline void eqDelete(T* m)
{
	if (m)
	{
		std::destroy_at(m);
		eqFree(m);
	}
}

// custom replacement for new T;
template <typename T>
[[nodiscard]] T* eqNew()
{
	return new (detail::eqAllocator) T;
}

// custom replacement for new T(...)
template <typename T, typename... Types>
[[nodiscard]] T* eqNew(Types&&... args)
{
	return new (detail::eqAllocator) T(std::forward<Types>(args)...);
}

// custom delete[]
template <typename T>
inline void eqVecDelete(T* m)
{
	if (m)
	{
		if constexpr (std::is_trivially_destructible_v<T>)
		{
			eqFree(m);
		}
		else
		{
			size_t* ptr = (size_t*)m;
			--ptr;

			std::destroy_n(m, *ptr);
			eqFree(ptr);
		}
	}
}

// custom new[]
template <typename T>
[[nodiscard]] T* eqVecNew(size_t count)
{
	if constexpr (std::is_trivially_destructible_v<T>)
	{
		size_t sizeBytes = sizeof(T) * count;
		T* ptr = (T*)eqAlloc(sizeBytes);
		if (ptr)
		{
			if constexpr (!std::is_trivially_default_constructible_v<T>)
			{
				std::uninitialized_default_construct_n(ptr, count);
			}
			return ptr;
		}
	}
	else
	{
		size_t sizeBytes = 4 + (sizeof(T) * count);
		size_t* ptr = (size_t*)eqAlloc(sizeBytes);
		if (ptr)
		{
			*ptr = count;
			T* result = (T*)(ptr + 1);

			if constexpr (!std::is_trivially_default_constructible_v<T>)
			{
				std::uninitialized_default_construct_n(result, count);
			}
			return result;
		}
	}

	return nullptr;
}

} // namespace eqlib
