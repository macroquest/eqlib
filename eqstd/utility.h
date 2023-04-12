// utility standard header (core)

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/eqstd/type_traits.h"

#include <tuple>
#include <utility>

#ifdef __cpp_lib_concepts
#include <concepts>
#endif // __cpp_lib_concepts

#if _HAS_CXX20
#include <compare>
#endif // _HAS_CXX20

#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)

namespace eqstd
{
	using std::_Is_implicitly_default_constructible;
	using std::piecewise_construct_t;
	using std::tuple;
	using std::reference_wrapper;
	using std::_Tuple_get;

	template <class _Ty1, class _Ty2>
	struct pair { // store a pair of values
		using first_type = _Ty1;
		using second_type = _Ty2;

		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_default_constructible<_Uty1>, is_default_constructible<_Uty2>>, int> = 0>
		constexpr explicit(
			!conjunction_v<_Is_implicitly_default_constructible<_Uty1>, _Is_implicitly_default_constructible<_Uty2>>)
			pair() noexcept(
				is_nothrow_default_constructible_v<_Uty1>&& is_nothrow_default_constructible_v<_Uty2>) // strengthened
			: first(), second() {}

		template <class _Uty1 = _Ty1, class _Uty2 = _Ty2,
			enable_if_t<conjunction_v<is_copy_constructible<_Uty1>, is_copy_constructible<_Uty2>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<const _Uty1&, _Uty1>, is_convertible<const _Uty2&, _Uty2>>)
			pair(const _Ty1& _Val1, const _Ty2& _Val2) noexcept(
				is_nothrow_copy_constructible_v<_Uty1>&& is_nothrow_copy_constructible_v<_Uty2>) // strengthened
			: first(_Val1), second(_Val2) {}

#if _HAS_CXX23
		template <class _Other1 = _Ty1, class _Other2 = _Ty2,
#else // ^^^ _HAS_CXX23 / !_HAS_CXX23 vvv
		template <class _Other1, class _Other2,
#endif // ^^^ !_HAS_CXX23 ^^^
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>)
			pair(_Other1&& _Val1, _Other2&& _Val2) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first(_STD forward<_Other1>(_Val1)), second(_STD forward<_Other2>(_Val2)) {
		}

		pair(const pair&) = default;
		pair(pair&&) = default;

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1&>, is_constructible<_Ty2, _Other2&>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<_Other1&, _Ty1>, is_convertible<_Other2&, _Ty2>>)
			pair(pair<_Other1, _Other2>& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1&>&& is_nothrow_constructible_v<_Ty2, _Other2&>) // strengthened
			: first(_Right.first), second(_Right.second) {}
#endif // _HAS_CXX23

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, const _Other1&>, is_constructible<_Ty2, const _Other2&>>,
			int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<const _Other1&, _Ty1>, is_convertible<const _Other2&, _Ty2>>)
			pair(const pair<_Other1, _Other2>& _Right) noexcept(is_nothrow_constructible_v<_Ty1, const _Other1&>&&
				is_nothrow_constructible_v<_Ty2, const _Other2&>) // strengthened
			: first(_Right.first), second(_Right.second) {}

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, _Other1>, is_constructible<_Ty2, _Other2>>, int> = 0>
		constexpr explicit(!conjunction_v<is_convertible<_Other1, _Ty1>, is_convertible<_Other2, _Ty2>>)
			pair(pair<_Other1, _Other2>&& _Right) noexcept(
				is_nothrow_constructible_v<_Ty1, _Other1>&& is_nothrow_constructible_v<_Ty2, _Other2>) // strengthened
			: first(_STD forward<_Other1>(_Right.first)), second(_STD forward<_Other2>(_Right.second)) {}

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<is_constructible<_Ty1, const _Other1>, is_constructible<_Ty2, const _Other2>>, int> =
			0>
		constexpr explicit(!conjunction_v<is_convertible<const _Other1, _Ty1>, is_convertible<const _Other2, _Ty2>>)
			pair(const pair<_Other1, _Other2>&& _Right) noexcept(is_nothrow_constructible_v<_Ty1, const _Other1>&&
				is_nothrow_constructible_v<_Ty2, const _Other2>) // strengthened
			: first(_STD forward<const _Other1>(_Right.first)), second(_STD forward<const _Other2>(_Right.second)) {}
#endif // _HAS_CXX23

		template <class _Tuple1, class _Tuple2, size_t... _Indexes1, size_t... _Indexes2>
		constexpr pair(_Tuple1& _Val1, _Tuple2& _Val2, index_sequence<_Indexes1...>, index_sequence<_Indexes2...>)
			: first(_Tuple_get<_Indexes1>(_STD move(_Val1))...), second(_Tuple_get<_Indexes2>(_STD move(_Val2))...) {}

		template <class... _Types1, class... _Types2>
		_CONSTEXPR20 pair(piecewise_construct_t, tuple<_Types1...> _Val1, tuple<_Types2...> _Val2)
			: pair(_Val1, _Val2, index_sequence_for<_Types1...>{}, index_sequence_for<_Types2...>{}) {}

		pair& operator=(const volatile pair&) = delete;

		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_copy_assignable_no_precondition_check<typename _Myself::first_type>,
			_Is_copy_assignable_no_precondition_check<typename _Myself::second_type>>,
			int> = 0>
			_CONSTEXPR20 pair& operator=(_Identity_t<const _Myself&> _Right) noexcept(
				conjunction_v<is_nothrow_copy_assignable<_Ty1>, is_nothrow_copy_assignable<_Ty2>>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}

#if _HAS_CXX23
		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_copy_assignable_no_precondition_check<const typename _Myself::first_type>,
			_Is_copy_assignable_no_precondition_check<const typename _Myself::second_type>>,
			int> = 0>
			constexpr const pair& operator=(_Identity_t<const _Myself&> _Right) const
			noexcept(conjunction_v<is_nothrow_copy_assignable<const _Ty1>,
				is_nothrow_copy_assignable<const _Ty2>>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}
#endif // _HAS_CXX23

		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_move_assignable_no_precondition_check<typename _Myself::first_type>,
			_Is_move_assignable_no_precondition_check<typename _Myself::second_type>>,
			int> = 0>
			_CONSTEXPR20 pair& operator=(_Identity_t<_Myself&&> _Right) noexcept(
				conjunction_v<is_nothrow_move_assignable<_Ty1>, is_nothrow_move_assignable<_Ty2>>) /* strengthened */ {
			first = _STD forward<_Ty1>(_Right.first);
			second = _STD forward<_Ty2>(_Right.second);
			return *this;
		}

#if _HAS_CXX23
		template <class _Myself = pair,
			enable_if_t<conjunction_v<_Is_assignable_no_precondition_check<const typename _Myself::first_type&, _Ty1>,
			_Is_assignable_no_precondition_check<const typename _Myself::second_type&, _Ty2>>,
			int> = 0>
			constexpr const pair& operator=(_Identity_t<_Myself&&> _Right) const
			noexcept(conjunction_v<is_nothrow_assignable<const _Ty1&, _Ty1>,
				is_nothrow_assignable<const _Ty2&, _Ty2>>) /* strengthened */ {
			first = _STD forward<_Ty1>(_Right.first);
			second = _STD forward<_Ty2>(_Right.second);
			return *this;
		}
#endif // _HAS_CXX23

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>, is_assignable<_Ty1&, const _Other1&>,
			is_assignable<_Ty2&, const _Other2&>>,
			int> = 0>
			_CONSTEXPR20 pair& operator=(const pair<_Other1, _Other2>& _Right) noexcept(
				is_nothrow_assignable_v<_Ty1&, const _Other1&>&&
				is_nothrow_assignable_v<_Ty2&, const _Other2&>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>,
			is_assignable<const _Ty1&, const _Other1&>, is_assignable<const _Ty2&, const _Other2&>>,
			int> = 0>
			constexpr const pair& operator=(const pair<_Other1, _Other2>& _Right) const
			noexcept(is_nothrow_assignable_v<const _Ty1&, const _Other1&>&&
				is_nothrow_assignable_v<const _Ty2&, const _Other2&>) /* strengthened */ {
			first = _Right.first;
			second = _Right.second;
			return *this;
		}
#endif // _HAS_CXX23

		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>, is_assignable<_Ty1&, _Other1>,
			is_assignable<_Ty2&, _Other2>>,
			int> = 0>
			_CONSTEXPR20 pair& operator=(pair<_Other1, _Other2>&& _Right) noexcept(
				is_nothrow_assignable_v<_Ty1&, _Other1>&& is_nothrow_assignable_v<_Ty2&, _Other2>) /* strengthened */ {
			first = _STD forward<_Other1>(_Right.first);
			second = _STD forward<_Other2>(_Right.second);
			return *this;
		}

#if _HAS_CXX23
		template <class _Other1, class _Other2,
			enable_if_t<conjunction_v<negation<is_same<pair, pair<_Other1, _Other2>>>, is_assignable<const _Ty1&, _Other1>,
			is_assignable<const _Ty2&, _Other2>>,
			int> = 0>
			constexpr const pair& operator=(pair<_Other1, _Other2>&& _Right) const
			noexcept(is_nothrow_assignable_v<const _Ty1&, _Other1>&&
				is_nothrow_assignable_v<const _Ty2&, _Other2>) /* strengthened */ {
			first = _STD forward<_Other1>(_Right.first);
			second = _STD forward<_Other2>(_Right.second);
			return *this;
		}
#endif // _HAS_CXX23

		_CONSTEXPR20 void swap(pair& _Right) noexcept(
			_Is_nothrow_swappable<_Ty1>::value&& _Is_nothrow_swappable<_Ty2>::value) {
			if (this != _STD addressof(_Right)) {
				_Swap_adl(first, _Right.first);
				_Swap_adl(second, _Right.second);
			}
		}

#if _HAS_CXX23
		template <int = 0> // see GH-3013
		constexpr void swap(const pair& _Right) const
			noexcept(is_nothrow_swappable_v<const _Ty1>&& is_nothrow_swappable_v<const _Ty2>) {
			if (this != _STD addressof(_Right)) {
				_Swap_adl(first, _Right.first);
				_Swap_adl(second, _Right.second);
			}
		}
#endif // _HAS_CXX23

		_Ty1 first; // the first stored value
		_Ty2 second; // the second stored value
	};

#if _HAS_CXX17
	template <class _Ty1, class _Ty2>
	pair(_Ty1, _Ty2) -> pair<_Ty1, _Ty2>;
#endif // _HAS_CXX17

	template <class _Ty1, class _Ty2,
	enable_if_t<_Is_swappable<_Ty1>::value&& _Is_swappable<_Ty2>::value, int> = 0>
		_CONSTEXPR20 void swap(pair<_Ty1, _Ty2>& _Left, pair<_Ty1, _Ty2>& _Right) noexcept(noexcept(_Left.swap(_Right))) {
		_Left.swap(_Right);
	}

	template <class _Ty1, class _Ty2>
		_NODISCARD constexpr bool operator==(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return _Left.first == _Right.first && _Left.second == _Right.second;
	}

#ifdef __cpp_lib_concepts
	template <class _Ty1, class _Ty2>
		_NODISCARD constexpr common_comparison_category_t<_Synth_three_way_result<_Ty1>, _Synth_three_way_result<_Ty2>>
		operator<=>(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		if (auto _Result = _Synth_three_way{}(_Left.first, _Right.first); _Result != 0) {
			return _Result;
		}
		return _Synth_three_way{}(_Left.second, _Right.second);
	}
#else // ^^^ defined(__cpp_lib_concepts) / !defined(__cpp_lib_concepts) vvv
#if !_HAS_CXX20
	template <class _Ty1, class _Ty2>
	_NODISCARD constexpr bool operator!=(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return !(_Left == _Right);
	}
#endif // !_HAS_CXX20

	template <class _Ty1, class _Ty2>
	_NODISCARD constexpr bool operator<(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return _Left.first < _Right.first || (!(_Right.first < _Left.first) && _Left.second < _Right.second);
	}

	template <class _Ty1, class _Ty2>
	_NODISCARD constexpr bool operator>(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return _Right < _Left;
	}

	template <class _Ty1, class _Ty2>
	_NODISCARD constexpr bool operator<=(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return !(_Right < _Left);
	}

	template <class _Ty1, class _Ty2>
	_NODISCARD constexpr bool operator>=(const pair<_Ty1, _Ty2>& _Left, const pair<_Ty1, _Ty2>& _Right) {
		return !(_Left < _Right);
	}
#endif // ^^^ !defined(__cpp_lib_concepts) ^^^

#ifdef __cpp_lib_concepts
	template <class _Ty1, class _Ty2, class _Uty1, class _Uty2, template <class> class _TQual,
		template <class> class _UQual>
		requires requires {
		typename pair<common_reference_t<_TQual<_Ty1>, _UQual<_Uty1>>,
			common_reference_t<_TQual<_Ty2>, _UQual<_Uty2>>>;
	}
	struct basic_common_reference<pair<_Ty1, _Ty2>, pair<_Uty1, _Uty2>, _TQual, _UQual> {
		using type = pair<common_reference_t<_TQual<_Ty1>, _UQual<_Uty1>>, common_reference_t<_TQual<_Ty2>, _UQual<_Uty2>>>;
	};

	template <class _Ty1, class _Ty2, class _Uty1, class _Uty2>
		requires requires { typename pair<common_type_t<_Ty1, _Uty1>, common_type_t<_Ty2, _Uty2>>; }
	struct common_type<pair<_Ty1, _Ty2>, pair<_Uty1, _Uty2>> {
		using type = pair<common_type_t<_Ty1, _Uty1>, common_type_t<_Ty2, _Uty2>>;
	};
#endif // __cpp_lib_concepts

	template <class _Ty>
	struct _Unrefwrap_helper { // leave unchanged if not a reference_wrapper
		using type = _Ty;
	};

	template <class _Ty>
	struct _Unrefwrap_helper<reference_wrapper<_Ty>> { // make a reference from a reference_wrapper
		using type = _Ty&;
	};

	// decay, then unwrap a reference_wrapper
	template <class _Ty>
	using _Unrefwrap_t = typename _Unrefwrap_helper<decay_t<_Ty>>::type;

	template <class _Ty1, class _Ty2>
	_NODISCARD constexpr pair<_Unrefwrap_t<_Ty1>, _Unrefwrap_t<_Ty2>> make_pair(_Ty1&& _Val1, _Ty2&& _Val2) noexcept(
			is_nothrow_constructible_v<_Unrefwrap_t<_Ty1>, _Ty1>&&
			is_nothrow_constructible_v<_Unrefwrap_t<_Ty2>, _Ty2>) /* strengthened */ {
		// return pair composed from arguments
		using _Mypair = pair<_Unrefwrap_t<_Ty1>, _Unrefwrap_t<_Ty2>>;
		return _Mypair(_STD forward<_Ty1>(_Val1), _STD forward<_Ty2>(_Val2));
	}

} // namespace eqstd

#pragma warning(pop)
