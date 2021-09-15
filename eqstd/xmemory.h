
#pragma once

#include <xmemory>

namespace eqstd
{
	template <class _Alloc, class _Value_type>
	using _Rebind_alloc_t = typename std::allocator_traits<_Alloc>::template rebind_alloc<_Value_type>;

	template <class _Ptr, class _Ty>
	using _Rebind_pointer_t = typename std::pointer_traits<_Ptr>::template rebind<_Ty>;

	// STRUCT TEMPLATE _Simple_types
	template <class _Value_type>
	struct _Simple_types { // wraps types from allocators with simple addressing for use in iterators
						   // and other SCARY machinery
		using value_type = _Value_type;
		using size_type = size_t;
		using difference_type = ptrdiff_t;
		using pointer = value_type*;
		using const_pointer = const value_type*;
	};

	// ALIAS TEMPLATE _Alloc_ptr_t
	template <class _Alloc>
	using _Alloc_ptr_t = typename std::allocator_traits<_Alloc>::pointer;

	// STRUCT TEMPLATE _Alloc_construct_ptr
	template <class _Alloc>
	struct _Alloc_construct_ptr { // pointer used to help construct 1 _Alloc::value_type without EH
		using pointer = _Alloc_ptr_t<_Alloc>;
		_Alloc& _Al;
		pointer _Ptr;

		_CONSTEXPR20_DYNALLOC explicit _Alloc_construct_ptr(_Alloc& _Al_) : _Al(_Al_), _Ptr(nullptr) {}

		[[nodiscard]] _CONSTEXPR20_DYNALLOC pointer _Release() noexcept { // disengage *this and return contained pointer
			return _STD exchange(_Ptr, nullptr);
		}

		_CONSTEXPR20_DYNALLOC void _Allocate() { // disengage *this, then allocate a new memory block
			_Ptr = nullptr; // if allocate throws, prevents double-free
			_Ptr = _Al.allocate(1);
		}

		_CONSTEXPR20_DYNALLOC ~_Alloc_construct_ptr() { // if this instance is engaged, deallocate storage
			if (_Ptr) {
				_Al.deallocate(_Ptr, 1);
			}
		}

		_Alloc_construct_ptr(const _Alloc_construct_ptr&) = delete;
		_Alloc_construct_ptr& operator=(const _Alloc_construct_ptr&) = delete;
	};

	struct _Equal_allocators {}; // usually allows contents to be stolen (e.g. with swap)
	using _Propagate_allocators = std::true_type; // usually allows the allocator to be propagated, and then contents stolen
	using _No_propagate_allocators = std::false_type; // usually turns moves into copies

	// VARIABLE TEMPLATE _Is_simple_alloc_v
	template <class _Alloc> // tests if allocator has simple addressing
	inline constexpr bool _Is_simple_alloc_v = std::is_same_v<typename std::allocator_traits<_Alloc>::size_type, size_t > &&
		std::is_same_v<typename std::allocator_traits<_Alloc>::difference_type, ptrdiff_t> &&
		std::is_same_v<typename std::allocator_traits<_Alloc>::pointer, typename _Alloc::value_type*> &&
		std::is_same_v<typename std::allocator_traits<_Alloc>::const_pointer, const typename _Alloc::value_type*>;

	// CLASS TEMPLATE _Compressed_pair
	struct _Zero_then_variadic_args_t {
		explicit _Zero_then_variadic_args_t() = default;
	}; // tag type for value-initializing first, constructing second from remaining args

	struct _One_then_variadic_args_t {
		explicit _One_then_variadic_args_t() = default;
	}; // tag type for constructing first from one arg, constructing second from remaining args

	template <class _Ty1, class _Ty2, bool = std::is_empty_v<_Ty1> && !std::is_final_v<_Ty1>>
	class _Compressed_pair final : private _Ty1 { // store a pair of values, deriving from empty first
	public:
		_Ty2 _Myval2;

		using _Mybase = _Ty1; // for visualization

		template <class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t, _Other2&&... _Val2) noexcept(
			std::conjunction_v<std::is_nothrow_default_constructible<_Ty1>, std::is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Ty1(), _Myval2(std::forward<_Other2>(_Val2)...) {}

		template <class _Other1, class... _Other2>
		constexpr _Compressed_pair(_One_then_variadic_args_t, _Other1&& _Val1, _Other2&&... _Val2) noexcept(
			std::conjunction_v<std::is_nothrow_constructible<_Ty1, _Other1>, std::is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Ty1(std::forward<_Other1>(_Val1)), _Myval2(std::forward<_Other2>(_Val2)...) {}

		constexpr _Ty1& _Get_first() noexcept {
			return *this;
		}

		constexpr const _Ty1& _Get_first() const noexcept {
			return *this;
		}
	};

	template <class _Ty1, class _Ty2>
	class _Compressed_pair<_Ty1, _Ty2, false> final { // store a pair of values, not deriving from first
	public:
		_Ty1 _Myval1;
		_Ty2 _Myval2;

		template <class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t, _Other2&&... _Val2) noexcept(
			std::conjunction_v<std::is_nothrow_default_constructible<_Ty1>, std::is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Myval1(), _Myval2(std::forward<_Other2>(_Val2)...) {}

		template <class _Other1, class... _Other2>
		constexpr _Compressed_pair(_One_then_variadic_args_t, _Other1&& _Val1, _Other2&&... _Val2) noexcept(
			std::conjunction_v<std::is_nothrow_constructible<_Ty1, _Other1>, std::is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Myval1(_STD forward<_Other1>(_Val1)), _Myval2(_STD forward<_Other2>(_Val2)...) {}

		constexpr _Ty1& _Get_first() noexcept {
			return _Myval1;
		}

		constexpr const _Ty1& _Get_first() const noexcept {
			return _Myval1;
		}
	};

	// VARIABLE TEMPLATE _Nothrow_compare
	template <class _Keycmp, class _Lhs, class _Rhs>
	_INLINE_VAR constexpr bool _Nothrow_compare = noexcept(
		static_cast<bool>(std::declval<const _Keycmp&>()(std::declval<const _Lhs&>(), std::declval<const _Rhs&>())));

	template <class _Alloc>
	using _Choose_pocma = std::conditional_t<std::allocator_traits<_Alloc>::is_always_equal::value, _Equal_allocators,
		typename std::allocator_traits<_Alloc>::propagate_on_container_move_assignment::type>;

	// CLASSES _Container_base*, _Iterator_base*
	struct _Fake_allocator {};
	inline constexpr _Fake_allocator _Fake_alloc{};

	struct _Container_base0 {
		_CONSTEXPR20_CONTAINER void _Orphan_all() noexcept {}
		_CONSTEXPR20_CONTAINER void _Swap_proxy_and_iterators(_Container_base0&) noexcept {}
		_CONSTEXPR20_CONTAINER void _Alloc_proxy(const _Fake_allocator&) noexcept {}
		_CONSTEXPR20_CONTAINER void _Reload_proxy(const _Fake_allocator&, const _Fake_allocator&) noexcept {}
	};

	struct _Iterator_base0 {
		_CONSTEXPR20_CONTAINER void _Adopt(const void*) noexcept {}
		_CONSTEXPR20_CONTAINER const _Container_base0* _Getcont() const noexcept {
			return nullptr;
		}

		static constexpr bool _Unwrap_when_unverified = true;
	};

	using _Container_base = _Container_base0;
	using _Iterator_base = _Iterator_base0;

	// ALIAS TEMPLATE _Container_proxy_ptr AND SUPPORTING MACHINERY
	struct _Leave_proxy_unbound {
		explicit _Leave_proxy_unbound() = default;
	}; // tag to indicate that a proxy is being allocated before it is safe to bind to a _Container_base12

	struct _Fake_proxy_ptr_impl { // fake replacement for a container proxy smart pointer when no container proxy is in use
		_Fake_proxy_ptr_impl(const _Fake_proxy_ptr_impl&) = delete;
		_Fake_proxy_ptr_impl& operator=(const _Fake_proxy_ptr_impl&) = delete;
		_CONSTEXPR20_CONTAINER _Fake_proxy_ptr_impl(const _Fake_allocator&, _Leave_proxy_unbound) noexcept {}
		_CONSTEXPR20_CONTAINER _Fake_proxy_ptr_impl(const _Fake_allocator&, const _Container_base0&) noexcept {}

		_CONSTEXPR20_CONTAINER void _Bind(const _Fake_allocator&, _Container_base0*) noexcept {}
		_CONSTEXPR20_CONTAINER void _Release() noexcept {}
	};

	template <class _Alloc>
	using _Container_proxy_ptr = _Fake_proxy_ptr_impl;
}
