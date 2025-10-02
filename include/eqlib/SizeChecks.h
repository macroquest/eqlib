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

namespace eqlib {
	
//
// Size Checks
//

#define SIZE_CHECKS_ENABLED 1

namespace detail{
	template <typename T>
	struct check_size_t {
		enum { value = sizeof(T) };
	};
	template <>
	struct check_size_t<void> {
		enum { value = 1 };
	};

	template <typename T>
	struct is_size_ok
	{
		enum { value = ((std::is_reference_v<T> || std::is_pointer_v<T> || std::is_void_v<T>) ? 8 : !std::is_trivial_v<T> ? 12 : check_size_t<T>::value) <= 8 ? 1 : 0 };
	};
} // namespace eqlib::detail

#if defined(COMMENT_UPDATER) || !defined(_DEBUG) || SIZE_CHECKS_ENABLED == 0
#define SIZE_CHECK(type, expectedSize)
#define SIZE_CHECK2(name, type, expectedSize)
#else
#define SIZE_CHECK(type, expectedSize)                                                                    \
	template <typename TypeToCheck, std::size_t ExpectedSize, std::size_t RealSize = sizeof(TypeToCheck)> \
	std::enable_if_t<ExpectedSize == RealSize, void> CheckSizeOf##type##__() {                            \
		static_assert(ExpectedSize == RealSize, "Size of " #type " does not match expected size.");       \
	}                                                                                                     \
	inline void CheckSizeHelper##type##__() { CheckSizeOf##type##__<type, expectedSize>(); }
#define SIZE_CHECK2(name, type, expectedSize)                                                             \
	template <typename TypeToCheck, std::size_t ExpectedSize, std::size_t RealSize = sizeof(TypeToCheck)> \
	std::enable_if_t<ExpectedSize == RealSize, void> CheckSizeOf##name##__() {                            \
		static_assert(ExpectedSize == RealSize, "Size of " #type " does not match expected size.");       \
	}                                                                                                     \
	inline void CheckSizeHelper##name##__() { CheckSizeOf##name##__<type, expectedSize>(); }
#endif

} // namespace eqlib
