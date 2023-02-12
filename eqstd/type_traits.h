/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

#include <type_traits>

namespace eqstd {
	using std::false_type;
	using std::true_type;
	using std::enable_if;
	using std::enable_if_t;
	using std::is_convertible;
	using std::conjunction_v;
	using std::conditional_t;
	using std::is_array_v;
	using std::is_move_constructible;
	using std::void_t;
	using std::is_void;
	using std::remove_cv_t;
	using std::remove_extent_t;
	using std::is_empty_v;
	using std::is_final_v;
	using std::disjunction_v;
	using std::is_array;
	using std::is_same_v;
	using std::remove_reference_t;
	using std::is_convertible_v;
	using std::is_pointer;
	using std::negation;
	using std::is_default_constructible;
	using std::is_constructible;
	using std::is_constructible_v;
	using std::is_reference;
	using std::is_reference_v;
	using std::is_move_constructible_v;
	using std::is_same;
	using std::is_move_assignable_v;
	using std::is_assignable;
	using std::add_lvalue_reference_t;
	using std::is_pointer_v;
	using std::remove_pointer_t;
	using std::is_volatile;
	using std::is_nothrow_constructible_v;

	template <class _Ty>
	using _Remove_cvref_t = remove_cv_t<remove_reference_t<_Ty>>;
}
