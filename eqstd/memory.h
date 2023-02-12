// memory standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/Allocator.h"

#include "eqlib/eqstd/type_traits.h"
#include "eqlib/eqstd/xmemory.h"

#include <atomic>
#include <memory>

namespace eqlib {

//
// Configurable overrides for special behavior
//

// Enables implicit conversion from shared_ptr<T> -> T*
template <typename T>
struct has_implicit_shared_pointer_cast : std::false_type {};

// Enables implicit conversion from T* to shared_ptr<T> by adopting existing control block
template <typename T>
struct can_adopt_shared_ptr_control_block : std::false_type {};

} // namespace eqlib

namespace eqstd {

//----------------------------------------------------------------------------

using _Atomic_counter_t = unsigned long;

class __declspec(novtable) _Ref_count_base { // common code for reference counting
private:
	virtual void _Destroy() noexcept = 0; // destroy managed resource
	virtual void _Delete_this() noexcept = 0; // destroy self

	_Atomic_counter_t _Uses = 1;
	_Atomic_counter_t _Weaks = 1;

protected:
	constexpr _Ref_count_base() noexcept = default; // non-atomic initializations

public:
	_Ref_count_base(const _Ref_count_base&) = delete;
	_Ref_count_base& operator=(const _Ref_count_base&) = delete;

	virtual ~_Ref_count_base() noexcept {} // TRANSITION, should be non-virtual

	bool _Incref_nz() noexcept { // increment use count if not zero, return true if successful
		auto& _Volatile_uses = reinterpret_cast<volatile long&>(_Uses);
		long _Count = __iso_volatile_load32(reinterpret_cast<volatile int*>(&_Volatile_uses));
		while (_Count != 0) {
			const long _Old_value = _INTRIN_RELAXED(_InterlockedCompareExchange)(&_Volatile_uses, _Count + 1, _Count);
			if (_Old_value == _Count) {
				return true;
			}

			_Count = _Old_value;
		}

		return false;
	}

	void _Incref() noexcept { // increment use count
		_MT_INCR(_Uses);
	}

	void _Incwref() noexcept { // increment weak reference count
		_MT_INCR(_Weaks);
	}

	void _Decref() noexcept { // decrement use count
		if (_MT_DECR(_Uses) == 0) {
			_Destroy();
			_Decwref();
		}
	}

	void _Decwref() noexcept { // decrement weak reference count
		if (_MT_DECR(_Weaks) == 0) {
			_Delete_this();
		}
	}

	long _Use_count() const noexcept {
		return static_cast<long>(_Uses);
	}

	virtual void* _Get_deleter(const type_info&) const noexcept {
		return nullptr;
	}
};


template <class _Ty>
class _Ref_count : public _Ref_count_base { // handle reference counting for pointer without deleter
public:
	explicit _Ref_count(_Ty* _Px) : _Ref_count_base(), _Ptr(_Px) {}

private:
	virtual void _Destroy() noexcept override { // destroy managed resource
		eqlib::eqDelete(_Ptr);
	}

	virtual void _Delete_this() noexcept override { // destroy self
		eqlib::eqDelete(this);
	}

	_Ty* _Ptr;
};

template <class _Ty>
class shared_ptr;

template <class _Ty>
class weak_ptr;

template <class _Ty, class _Dx = _STD default_delete<_Ty>>
class unique_ptr;

template <class _Yty, class = void>
struct _Can_enable_shared : false_type {}; // detect unambiguous and accessible inheritance from enable_shared_from_this

template <class _Yty>
struct _Can_enable_shared<_Yty, void_t<typename _Yty::_Esft_type>>
	: is_convertible<remove_cv_t<_Yty>*, typename _Yty::_Esft_type*>::type {
	// is_convertible is necessary to verify unambiguous inheritance
};

struct _Exception_ptr_access;

template <class _Ty>
class _Ptr_base { // base class for shared_ptr and weak_ptr
public:
	using element_type = remove_extent_t<_Ty>;

	_NODISCARD long use_count() const noexcept {
		return _Rep ? _Rep->_Use_count() : 0;
	}

	template <class _Ty2>
	_NODISCARD bool owner_before(const _Ptr_base<_Ty2>& _Right) const noexcept { // compare addresses of manager objects
		return _Rep < _Right._Rep;
	}

	_Ptr_base(const _Ptr_base&) = delete;
	_Ptr_base& operator=(const _Ptr_base&) = delete;

protected:
	_NODISCARD element_type* get() const noexcept {
		return _Ptr;
	}

	constexpr _Ptr_base() noexcept = default;

	~_Ptr_base() = default;

	template <class _Ty2>
	void _Move_construct_from(_Ptr_base<_Ty2>&& _Right) noexcept {
		// implement shared_ptr's (converting) move ctor and weak_ptr's move ctor
		_Ptr = _Right._Ptr;
		_Rep = _Right._Rep;

		_Right._Ptr = nullptr;
		_Right._Rep = nullptr;
	}

	template <class _Ty2>
	void _Copy_construct_from(const shared_ptr<_Ty2>& _Other) noexcept {
		// implement shared_ptr's (converting) copy ctor
		_Other._Incref();

		_Ptr = _Other._Ptr;
		_Rep = _Other._Rep;
	}

	template <class _Ty2>
	void _Alias_construct_from(const shared_ptr<_Ty2>& _Other, element_type* _Px) noexcept {
		// implement shared_ptr's aliasing ctor
		_Other._Incref();

		_Ptr = _Px;
		_Rep = _Other._Rep;
	}

	template <class _Ty2>
	void _Alias_move_construct_from(shared_ptr<_Ty2>&& _Other, element_type* _Px) noexcept {
		// implement shared_ptr's aliasing move ctor
		_Ptr = _Px;
		_Rep = _Other._Rep;

		_Other._Ptr = nullptr;
		_Other._Rep = nullptr;
	}

	template <class _Ty0>
	friend class weak_ptr; // specifically, weak_ptr::lock()

	template <class _Ty2>
	bool _Construct_from_weak(const weak_ptr<_Ty2>& _Other) noexcept {
		// implement shared_ptr's ctor from weak_ptr, and weak_ptr::lock()
		if (_Other._Rep && _Other._Rep->_Incref_nz()) {
			_Ptr = _Other._Ptr;
			_Rep = _Other._Rep;
			return true;
		}

		return false;
	}

	void _Incref() const noexcept {
		if (_Rep) {
			_Rep->_Incref();
		}
	}

	void _Decref() noexcept { // decrement reference count
		if (_Rep) {
			_Rep->_Decref();
		}
	}

	void _Swap(_Ptr_base& _Right) noexcept { // swap pointers
		_STD swap(_Ptr, _Right._Ptr);
		_STD swap(_Rep, _Right._Rep);
	}

	template <class _Ty2>
	void _Weakly_construct_from(const _Ptr_base<_Ty2>& _Other) noexcept { // implement weak_ptr's ctors
		if (_Other._Rep) {
			_Ptr = _Other._Ptr;
			_Rep = _Other._Rep;
			_Rep->_Incwref();
		}
		else {
			_STL_INTERNAL_CHECK(!_Ptr && !_Rep);
		}
	}

	template <class _Ty2>
	void _Weakly_convert_lvalue_avoiding_expired_conversions(const _Ptr_base<_Ty2>& _Other) noexcept {
		// implement weak_ptr's copy converting ctor
		if (_Other._Rep) {
			_Rep = _Other._Rep; // always share ownership
			_Rep->_Incwref();

			if (_Rep->_Incref_nz()) {
				_Ptr = _Other._Ptr; // keep resource alive during conversion, handling virtual inheritance
				_Rep->_Decref();
			}
			else {
				_STL_INTERNAL_CHECK(!_Ptr);
			}
		}
		else {
			_STL_INTERNAL_CHECK(!_Ptr && !_Rep);
		}
	}

	template <class _Ty2>
	void _Weakly_convert_rvalue_avoiding_expired_conversions(_Ptr_base<_Ty2>&& _Other) noexcept {
		// implement weak_ptr's move converting ctor
		_Rep = _Other._Rep; // always transfer ownership
		_Other._Rep = nullptr;

		if (_Rep && _Rep->_Incref_nz()) {
			_Ptr = _Other._Ptr; // keep resource alive during conversion, handling virtual inheritance
			_Rep->_Decref();
		}
		else {
			_STL_INTERNAL_CHECK(!_Ptr);
		}

		_Other._Ptr = nullptr;
	}

	void _Incwref() const noexcept {
		if (_Rep) {
			_Rep->_Incwref();
		}
	}

	void _Decwref() noexcept { // decrement weak reference count
		if (_Rep) {
			_Rep->_Decwref();
		}
	}

private:
	element_type* _Ptr{ nullptr };
	_Ref_count_base* _Rep{ nullptr };

	template <class _Ty0>
	friend class _Ptr_base;

	friend shared_ptr<_Ty>;

	template <class _Ty0>
	friend struct atomic;

	friend _Exception_ptr_access;

#if _HAS_STATIC_RTTI
	template <class _Dx, class _Ty0>
	friend _Dx* get_deleter(const shared_ptr<_Ty0>& _Sx) noexcept;
#endif // _HAS_STATIC_RTTI
};

template <class _Yty, class = void>
struct _Can_scalar_delete : false_type {};
template <class _Yty>
struct _Can_scalar_delete<_Yty, void_t<decltype(delete _STD declval<_Yty*>())>> : true_type {};

template <class _Yty, class = void>
struct _Can_array_delete : false_type {};
template <class _Yty>
struct _Can_array_delete<_Yty, void_t<decltype(delete[] _STD declval<_Yty*>())>> : true_type {};

template <class _Fx, class _Arg, class = void>
struct _Can_call_function_object : false_type {};
template <class _Fx, class _Arg>
struct _Can_call_function_object<_Fx, _Arg, void_t<decltype(_STD declval<_Fx>()(_STD declval<_Arg>()))>> : true_type {};

template <class _Yty, class _Ty>
struct _SP_convertible : is_convertible<_Yty*, _Ty*>::type {};
template <class _Yty, class _Uty>
struct _SP_convertible<_Yty, _Uty[]> : is_convertible<_Yty(*)[], _Uty(*)[]>::type {};
template <class _Yty, class _Uty, size_t _Ext>
struct _SP_convertible<_Yty, _Uty[_Ext]> : is_convertible<_Yty(*)[_Ext], _Uty(*)[_Ext]>::type {};

template <class _Yty, class _Ty>
struct _SP_pointer_compatible : is_convertible<_Yty*, _Ty*>::type {
	// N4659 [util.smartptr.shared]/5 "a pointer type Y* is said to be compatible
	// with a pointer type T* " "when either Y* is convertible to T* ..."
};
template <class _Uty, size_t _Ext>
struct _SP_pointer_compatible<_Uty[_Ext], _Uty[]> : true_type {
	// N4659 [util.smartptr.shared]/5 "... or Y is U[N] and T is cv U[]."
};
template <class _Uty, size_t _Ext>
struct _SP_pointer_compatible<_Uty[_Ext], const _Uty[]> : true_type {
	// N4659 [util.smartptr.shared]/5 "... or Y is U[N] and T is cv U[]."
};
template <class _Uty, size_t _Ext>
struct _SP_pointer_compatible<_Uty[_Ext], volatile _Uty[]> : true_type {
	// N4659 [util.smartptr.shared]/5 "... or Y is U[N] and T is cv U[]."
};
template <class _Uty, size_t _Ext>
struct _SP_pointer_compatible<_Uty[_Ext], const volatile _Uty[]> : true_type {
	// N4659 [util.smartptr.shared]/5 "... or Y is U[N] and T is cv U[]."
};

template <class _Ux>
struct _Temporary_owner {
	_Ux* _Ptr;

	explicit _Temporary_owner(_Ux* const _Ptr_) noexcept : _Ptr(_Ptr_) {}
	_Temporary_owner(const _Temporary_owner&) = delete;
	_Temporary_owner& operator=(const _Temporary_owner&) = delete;
	~_Temporary_owner() {
		eqlib::eqDelete(_Ptr);
	}
};

template <class _UxptrOrNullptr, class _Dx>
struct _Temporary_owner_del {
	_UxptrOrNullptr _Ptr;
	_Dx& _Dt;
	bool _Call_deleter = true;

	explicit _Temporary_owner_del(const _UxptrOrNullptr _Ptr_, _Dx& _Dt_) noexcept : _Ptr(_Ptr_), _Dt(_Dt_) {}
	_Temporary_owner_del(const _Temporary_owner_del&) = delete;
	_Temporary_owner_del& operator=(const _Temporary_owner_del&) = delete;
	~_Temporary_owner_del() {
		if (_Call_deleter) {
			_Dt(_Ptr);
		}
	}
};

template <class _Ty>
class shared_ptr : public _Ptr_base<_Ty> { // class for reference counted resource management
private:
	using _Mybase = _Ptr_base<_Ty>;

public:
	using typename _Mybase::element_type;

#if _HAS_CXX17
	using weak_type = weak_ptr<_Ty>;
#endif // _HAS_CXX17

	constexpr shared_ptr() noexcept = default;

	constexpr shared_ptr(nullptr_t) noexcept {} // construct empty shared_ptr

	template <class _Ux,
		enable_if_t<
			conjunction_v<
				conditional_t<is_array_v<_Ty>, _Can_array_delete<_Ux>, _Can_scalar_delete<_Ux>>,
				_SP_convertible<_Ux, _Ty>,
				negation<eqlib::can_adopt_shared_ptr_control_block<_Ux>>
			>,
			int
		> = 0>
	explicit shared_ptr(_Ux* _Px) { // construct shared_ptr object that owns _Px
		static_assert(false);
		if constexpr (conditional_t<_Ty>) {
			_Setpd(_Px, default_delete<_Ux[]>{});
		}
		else {
			_Temporary_owner<_Ux> _Owner(_Px);
			_Set_ptr_rep_and_enable_shared(_Owner._Ptr, eqlib::eqNew<_Ref_count<_Ux>>(_Owner._Ptr));
			_Owner._Ptr = nullptr;
		}
	}

	template <class _Ux,
		enable_if_t<
			conjunction_v<
				conditional_t<is_array_v<_Ty>, _Can_array_delete<_Ux>, _Can_scalar_delete<_Ux>>,
				_SP_convertible<_Ux, _Ty>,
				eqlib::can_adopt_shared_ptr_control_block<_Ux>
			>,
			int
		> = 0>
	shared_ptr(_Ux* _Px) { // construct shared_ptr object that owns _Px
		_Temporary_owner<_Ux> _Owner(_Px);
		_Set_ptr_rep_and_enable_shared(_Owner._Ptr,
			static_cast<_Ref_count_base* const>(_Owner._Ptr ? eqlib::adopt_existing_shared_ptr_control_block(*_Owner._Ptr) : nullptr));
		if (_Rep) _Rep->_Incref_nz();
		_Owner._Ptr = nullptr;
	}

	template <class _Ux, class _Dx,
		enable_if_t<conjunction_v<is_move_constructible<_Dx>, _Can_call_function_object<_Dx&, _Ux*&>,
		_SP_convertible<_Ux, _Ty>>,
		int> = 0>
		shared_ptr(_Ux* _Px, _Dx _Dt) { // construct with _Px, deleter
		_Setpd(_Px, _STD move(_Dt));
	}

	template <class _Ux, class _Dx, class _Alloc,
		enable_if_t<conjunction_v<is_move_constructible<_Dx>, _Can_call_function_object<_Dx&, _Ux*&>,
		_SP_convertible<_Ux, _Ty>>,
		int> = 0>
		shared_ptr(_Ux* _Px, _Dx _Dt, _Alloc _Ax) { // construct with _Px, deleter, allocator
		_Setpda(_Px, _STD move(_Dt), _Ax);
	}

	template <class _Dx,
		enable_if_t<conjunction_v<is_move_constructible<_Dx>, _Can_call_function_object<_Dx&, nullptr_t&>>, int> = 0>
	shared_ptr(nullptr_t, _Dx _Dt) { // construct with nullptr, deleter
		_Setpd(nullptr, _STD move(_Dt));
	}

	template <class _Dx, class _Alloc,
		enable_if_t<conjunction_v<is_move_constructible<_Dx>, _Can_call_function_object<_Dx&, nullptr_t&>>, int> = 0>
	shared_ptr(nullptr_t, _Dx _Dt, _Alloc _Ax) { // construct with nullptr, deleter, allocator
		_Setpda(nullptr, _STD move(_Dt), _Ax);
	}

	template <class _Ty2>
	shared_ptr(const shared_ptr<_Ty2>& _Right, element_type* _Px) noexcept {
		// construct shared_ptr object that aliases _Right
		this->_Alias_construct_from(_Right, _Px);
	}

	template <class _Ty2>
	shared_ptr(shared_ptr<_Ty2>&& _Right, element_type* _Px) noexcept {
		// move construct shared_ptr object that aliases _Right
		this->_Alias_move_construct_from(_STD move(_Right), _Px);
	}

	shared_ptr(const shared_ptr& _Other) noexcept { // construct shared_ptr object that owns same resource as _Other
		this->_Copy_construct_from(_Other);
	}

	template <class _Ty2, enable_if_t<_SP_pointer_compatible<_Ty2, _Ty>::value, int> = 0>
	shared_ptr(const shared_ptr<_Ty2>& _Other) noexcept {
		// construct shared_ptr object that owns same resource as _Other
		this->_Copy_construct_from(_Other);
	}

	shared_ptr(shared_ptr&& _Right) noexcept { // construct shared_ptr object that takes resource from _Right
		this->_Move_construct_from(_STD move(_Right));
	}

	template <class _Ty2, enable_if_t<_SP_pointer_compatible<_Ty2, _Ty>::value, int> = 0>
	shared_ptr(shared_ptr<_Ty2>&& _Right) noexcept { // construct shared_ptr object that takes resource from _Right
		this->_Move_construct_from(_STD move(_Right));
	}

	template <class _Ty2, enable_if_t<_SP_pointer_compatible<_Ty2, _Ty>::value, int> = 0>
	explicit shared_ptr(const weak_ptr<_Ty2>& _Other) { // construct shared_ptr object that owns resource *_Other
		if (!this->_Construct_from_weak(_Other)) {
			_Throw_bad_weak_ptr();
		}
	}

	template <class _Ux, class _Dx,
		enable_if_t<conjunction_v<_SP_pointer_compatible<_Ux, _Ty>,
				is_convertible<typename unique_ptr<_Ux, _Dx>::pointer, element_type*>>,
			int> = 0>
	shared_ptr(unique_ptr<_Ux, _Dx>&& _Other) {
		using _Fancy_t = typename unique_ptr<_Ux, _Dx>::pointer;
		using _Raw_t = typename unique_ptr<_Ux, _Dx>::element_type*;
		using _Deleter_t = conditional_t<is_reference_v<_Dx>, decltype(_STD ref(_Other.get_deleter())), _Dx>;

		const _Fancy_t _Fancy = _Other.get();

		if (_Fancy) {
			const _Raw_t _Raw = _Fancy;
			const auto _Rx = new _Ref_count_resource<_Fancy_t, _Deleter_t>(_Fancy, _Other.get_deleter());
			_Set_ptr_rep_and_enable_shared(_Raw, _Rx);
			_Other.release();
		}
	}

	~shared_ptr() noexcept { // release resource
		this->_Decref();
	}

	shared_ptr& operator=(const shared_ptr& _Right) noexcept {
		shared_ptr(_Right).swap(*this);
		return *this;
	}

	template <class _Ty2>
	shared_ptr& operator=(const shared_ptr<_Ty2>& _Right) noexcept {
		shared_ptr(_Right).swap(*this);
		return *this;
	}

	shared_ptr& operator=(shared_ptr&& _Right) noexcept { // take resource from _Right
		shared_ptr(_STD move(_Right)).swap(*this);
		return *this;
	}

	template <class _Ty2>
	shared_ptr& operator=(shared_ptr<_Ty2>&& _Right) noexcept { // take resource from _Right
		shared_ptr(_STD move(_Right)).swap(*this);
		return *this;
	}

	template <class _Ux, class _Dx>
	shared_ptr& operator=(unique_ptr<_Ux, _Dx>&& _Right) { // move from unique_ptr
		shared_ptr(_STD move(_Right)).swap(*this);
		return *this;
	}

	void swap(shared_ptr& _Other) noexcept {
		this->_Swap(_Other);
	}

	void reset() noexcept { // release resource and convert to empty shared_ptr object
		shared_ptr().swap(*this);
	}

	template <class _Ux>
	void reset(_Ux* _Px) { // release, take ownership of _Px
		shared_ptr(_Px).swap(*this);
	}

	template <class _Ux, class _Dx>
	void reset(_Ux* _Px, _Dx _Dt) { // release, take ownership of _Px, with deleter _Dt
		shared_ptr(_Px, _Dt).swap(*this);
	}

	template <class _Ux, class _Dx, class _Alloc>
	void reset(_Ux* _Px, _Dx _Dt, _Alloc _Ax) { // release, take ownership of _Px, with deleter _Dt, allocator _Ax
		shared_ptr(_Px, _Dt, _Ax).swap(*this);
	}

	using _Mybase::get;

	template <class _Ty2 = _Ty, enable_if_t<!disjunction_v<is_array<_Ty2>, is_void<_Ty2>>, int> = 0>
	_NODISCARD _Ty2& operator*() const noexcept {
		return *get();
	}

	template <class _Ty2 = _Ty, enable_if_t<!is_array_v<_Ty2>, int> = 0>
	_NODISCARD _Ty2* operator->() const noexcept {
		return get();
	}

	template <class _Ty2 = _Ty, class _Elem = element_type, enable_if_t<is_array_v<_Ty2>, int> = 0>
	_NODISCARD _Elem& operator[](ptrdiff_t _Idx) const noexcept /* strengthened */ {
		return get()[_Idx];
	}

	explicit operator bool() const noexcept {
		return get() != nullptr;
	}

	template <typename _Ty2 = _Ty, typename = enable_if_t<eqlib::has_implicit_shared_pointer_cast<_Ty2>::value>>
	operator _Ty2* () {
		return static_cast<_Ty2*>(get());
	}

private:
	template <class _UxptrOrNullptr, class _Dx>
	void _Setpd(const _UxptrOrNullptr _Px, _Dx _Dt) { // take ownership of _Px, deleter _Dt
		_Temporary_owner_del<_UxptrOrNullptr, _Dx> _Owner(_Px, _Dt);
		_Set_ptr_rep_and_enable_shared(
			_Owner._Ptr, eqlib::eqNew<_Ref_count_resource<_UxptrOrNullptr, _Dx>>(_Owner._Ptr, _STD move(_Dt)));
		_Owner._Call_deleter = false;
	}

	template <class _UxptrOrNullptr, class _Dx, class _Alloc>
	void _Setpda(const _UxptrOrNullptr _Px, _Dx _Dt, _Alloc _Ax) { // take ownership of _Px, deleter _Dt, allocator _Ax
		using _Alref_alloc = _Rebind_alloc_t<_Alloc, _Ref_count_resource_alloc<_UxptrOrNullptr, _Dx, _Alloc>>;

		_Temporary_owner_del<_UxptrOrNullptr, _Dx> _Owner(_Px, _Dt);
		_Alref_alloc _Alref(_Ax);
		_Alloc_construct_ptr<_Alref_alloc> _Constructor(_Alref);
		_Constructor._Allocate();
		_Construct_in_place(*_Constructor._Ptr, _Owner._Ptr, _STD move(_Dt), _Ax);
		_Set_ptr_rep_and_enable_shared(_Owner._Ptr, _Unfancy(_Constructor._Ptr));
		_Constructor._Ptr = nullptr;
		_Owner._Call_deleter = false;
	}

	template <class _Ty0, class... _Types>
	friend shared_ptr<_Ty0> make_shared(_Types&&... _Args);

	template <class _Ux>
	void _Set_ptr_rep_and_enable_shared(_Ux* const _Px, _Ref_count_base* const _Rx) noexcept { // take ownership of _Px
		this->_Ptr = _Px;
		this->_Rep = _Rx;
		if constexpr (conjunction_v<negation<is_array<_Ty>>, negation<is_volatile<_Ux>>, _Can_enable_shared<_Ux>>) {
			if (_Px && _Px->_Wptr.expired()) {
				_Px->_Wptr = shared_ptr<remove_cv_t<_Ux>>(*this, const_cast<remove_cv_t<_Ux>*>(_Px));
			}
		}
	}

	void _Set_ptr_rep_and_enable_shared(nullptr_t, _Ref_count_base* const _Rx) noexcept { // take ownership of nullptr
		this->_Ptr = nullptr;
		this->_Rep = _Rx;
	}
};

#if _HAS_CXX17
template <class _Ty>
shared_ptr(weak_ptr<_Ty>) -> shared_ptr<_Ty>;

//template <class _Ty, class _Dx>
//shared_ptr(unique_ptr<_Ty, _Dx>) -> shared_ptr<_Ty>;
#endif // _HAS_CXX17

template <class _Ty1, class _Ty2>
_NODISCARD bool operator==(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() == _Right.get();
}

#if _HAS_CXX20
template <class _Ty1, class _Ty2>
_NODISCARD strong_ordering operator<=>(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() <=> _Right.get();
}
#else // ^^^ _HAS_CXX20 / !_HAS_CXX20 vvv
template <class _Ty1, class _Ty2>
_NODISCARD bool operator!=(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() != _Right.get();
}

template <class _Ty1, class _Ty2>
_NODISCARD bool operator<(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() < _Right.get();
}

template <class _Ty1, class _Ty2>
_NODISCARD bool operator>=(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() >= _Right.get();
}

template <class _Ty1, class _Ty2>
_NODISCARD bool operator>(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() > _Right.get();
}

template <class _Ty1, class _Ty2>
_NODISCARD bool operator<=(const shared_ptr<_Ty1>& _Left, const shared_ptr<_Ty2>& _Right) noexcept {
	return _Left.get() <= _Right.get();
}
#endif // ^^^ !_HAS_CXX20 ^^^

template <class _Ty>
_NODISCARD bool operator==(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() == nullptr;
}

#if _HAS_CXX20
template <class _Ty>
_NODISCARD strong_ordering operator<=>(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() <=> static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr);
}
#else // ^^^ _HAS_CXX20 / !_HAS_CXX20 vvv
template <class _Ty>
_NODISCARD bool operator==(nullptr_t, const shared_ptr<_Ty>& _Right) noexcept {
	return nullptr == _Right.get();
}

template <class _Ty>
_NODISCARD bool operator!=(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() != nullptr;
}

template <class _Ty>
_NODISCARD bool operator!=(nullptr_t, const shared_ptr<_Ty>& _Right) noexcept {
	return nullptr != _Right.get();
}

template <class _Ty>
_NODISCARD bool operator<(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() < static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr);
}

template <class _Ty>
_NODISCARD bool operator<(nullptr_t, const shared_ptr<_Ty>& _Right) noexcept {
	return static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr) < _Right.get();
}

template <class _Ty>
_NODISCARD bool operator>=(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() >= static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr);
}

template <class _Ty>
_NODISCARD bool operator>=(nullptr_t, const shared_ptr<_Ty>& _Right) noexcept {
	return static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr) >= _Right.get();
}

template <class _Ty>
_NODISCARD bool operator>(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() > static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr);
}

template <class _Ty>
_NODISCARD bool operator>(nullptr_t, const shared_ptr<_Ty>& _Right) noexcept {
	return static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr) > _Right.get();
}

template <class _Ty>
_NODISCARD bool operator<=(const shared_ptr<_Ty>& _Left, nullptr_t) noexcept {
	return _Left.get() <= static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr);
}

template <class _Ty>
_NODISCARD bool operator<=(nullptr_t, const shared_ptr<_Ty>& _Right) noexcept {
	return static_cast<typename shared_ptr<_Ty>::element_type*>(nullptr) <= _Right.get();
}
#endif // ^^^ !_HAS_CXX20 ^^^

template <class _Ty>
void swap(shared_ptr<_Ty>& _Left, shared_ptr<_Ty>& _Right) noexcept {
	_Left.swap(_Right);
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> static_pointer_cast(const shared_ptr<_Ty2>& _Other) noexcept {
	// static_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = static_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());
	return shared_ptr<_Ty1>(_Other, _Ptr);
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> static_pointer_cast(shared_ptr<_Ty2>&& _Other) noexcept {
	// static_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = static_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());
	return shared_ptr<_Ty1>(_STD move(_Other), _Ptr);
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> const_pointer_cast(const shared_ptr<_Ty2>& _Other) noexcept {
	// const_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = const_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());
	return shared_ptr<_Ty1>(_Other, _Ptr);
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> const_pointer_cast(shared_ptr<_Ty2>&& _Other) noexcept {
	// const_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = const_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());
	return shared_ptr<_Ty1>(_STD move(_Other), _Ptr);
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> reinterpret_pointer_cast(const shared_ptr<_Ty2>& _Other) noexcept {
	// reinterpret_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = reinterpret_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());
	return shared_ptr<_Ty1>(_Other, _Ptr);
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> reinterpret_pointer_cast(shared_ptr<_Ty2>&& _Other) noexcept {
	// reinterpret_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = reinterpret_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());
	return shared_ptr<_Ty1>(_STD move(_Other), _Ptr);
}

#ifdef _CPPRTTI
template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> dynamic_pointer_cast(const shared_ptr<_Ty2>& _Other) noexcept {
	// dynamic_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = dynamic_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());

	if (_Ptr) {
		return shared_ptr<_Ty1>(_Other, _Ptr);
	}

	return {};
}

template <class _Ty1, class _Ty2>
_NODISCARD shared_ptr<_Ty1> dynamic_pointer_cast(shared_ptr<_Ty2>&& _Other) noexcept {
	// dynamic_cast for shared_ptr that properly respects the reference count control block
	const auto _Ptr = dynamic_cast<typename shared_ptr<_Ty1>::element_type*>(_Other.get());

	if (_Ptr) {
		return shared_ptr<_Ty1>(_STD move(_Other), _Ptr);
	}

	return {};
}
#else // _CPPRTTI
template <class _Ty1, class _Ty2>
shared_ptr<_Ty1> dynamic_pointer_cast(const shared_ptr<_Ty2>&) noexcept = delete; // requires /GR option
template <class _Ty1, class _Ty2>
shared_ptr<_Ty1> dynamic_pointer_cast(shared_ptr<_Ty2>&&) noexcept = delete; // requires /GR option
#endif // _CPPRTTI

#if _HAS_STATIC_RTTI
template <class _Dx, class _Ty>
_NODISCARD _Dx* get_deleter(const shared_ptr<_Ty>& _Sx) noexcept {
	// return pointer to shared_ptr's deleter object if its type is _Dx
	if (_Sx._Rep) {
		return static_cast<_Dx*>(_Sx._Rep->_Get_deleter(typeid(_Dx)));
	}

	return nullptr;
}
#else // _HAS_STATIC_RTTI
template <class _Dx, class _Ty>
_Dx* get_deleter(const shared_ptr<_Ty>&) noexcept = delete; // requires static RTTI
#endif // _HAS_STATIC_RTTI

template <class _Ty>
class _Ref_count_obj2 : public _Ref_count_base { // handle reference counting for object in control block, no allocator
public:
	template <class... _Types>
	explicit _Ref_count_obj2(_Types&&... _Args) : _Ref_count_base() {
		{
			_STD _Construct_in_place(_Storage._Value, _STD forward<_Types>(_Args)...);
		}
	}

	virtual ~_Ref_count_obj2() noexcept override { // TRANSITION, should be non-virtual
		// nothing to do, _Storage._Value was already destroyed in _Destroy

		// N4849 [class.dtor]/7:
		// "A defaulted destructor for a class X is defined as deleted if:
		// X is a union-like class that has a variant member with a non-trivial destructor"
	}

	union {
		_Wrap<_Ty> _Storage;
	};

private:
	virtual void _Destroy() noexcept override { // destroy managed resource
		_STD _Destroy_in_place(_Storage._Value);
	}

	virtual void _Delete_this() noexcept override { // destroy self
		eqlib::eqDelete(this);
	}
};

template <class _Ty,
	bool = is_empty_v<_Ty> && !is_final_v<_Ty>>
	class _Ebco_base : private _Ty { // Empty Base Class Optimization, active
	private:
		using _Mybase = _Ty; // for visualization

	protected:
		template <class _Other, enable_if_t<!is_same_v<_Remove_cvref_t<_Other>, _Ebco_base>, int> = 0>
		constexpr explicit _Ebco_base(_Other&& _Val) noexcept(is_nothrow_constructible_v<_Ty, _Other>)
			: _Ty(_STD forward<_Other>(_Val)) {}

		constexpr _Ty& _Get_val() noexcept {
			return *this;
		}

		constexpr const _Ty& _Get_val() const noexcept {
			return *this;
		}
};

template <class _Ty>
class _Ebco_base<_Ty, false> { // Empty Base Class Optimization, inactive
private:
	_Ty _Myval;

protected:
	template <class _Other, enable_if_t<!is_same_v<_Remove_cvref_t<_Other>, _Ebco_base>, int> = 0>
	constexpr explicit _Ebco_base(_Other&& _Val) noexcept(is_nothrow_constructible_v<_Ty, _Other>)
		: _Myval(_STD forward<_Other>(_Val)) {}

	constexpr _Ty& _Get_val() noexcept {
		return _Myval;
	}

	constexpr const _Ty& _Get_val() const noexcept {
		return _Myval;
	}
};

template <class _Ty, class _Alloc>
class _Ref_count_obj_alloc3 : public _Ebco_base<_Rebind_alloc_t<_Alloc, _Ty>>, public _Ref_count_base {
	// handle reference counting for object in control block, allocator
private:
	static_assert(is_same_v<_Ty, remove_cv_t<_Ty>>, "allocate_shared should remove_cv_t");

	using _Rebound = _Rebind_alloc_t<_Alloc, _Ty>;

public:
	template <class... _Types>
	explicit _Ref_count_obj_alloc3(const _Alloc& _Al_arg, _Types&&... _Args)
		: _Ebco_base<_Rebound>(_Al_arg), _Ref_count_base() {
			allocator_traits<_Rebound>::construct(
				this->_Get_val(), _STD addressof(_Storage._Value), _STD forward<_Types>(_Args)...);
	}

	union {
		_Wrap<_Ty> _Storage;
	};

private:
	virtual ~_Ref_count_obj_alloc3() noexcept override { // TRANSITION, should be non-virtual
		// nothing to do; _Storage._Value already destroyed by _Destroy()

		// See N4849 [class.dtor]/7.
	}

	virtual void _Destroy() noexcept override { // destroy managed resource
		allocator_traits<_Rebound>::destroy(this->_Get_val(), _STD addressof(_Storage._Value));
	}

	virtual void _Delete_this() noexcept override { // destroy self
		_Rebind_alloc_t<_Alloc, _Ref_count_obj_alloc3> _Al(this->_Get_val());
		this->~_Ref_count_obj_alloc3();
		_Deallocate_plain(_Al, this);
	}
};

template <class _Ty, class... _Types>
_NODISCARD shared_ptr<_Ty> make_shared(_Types&&... _Args) { // make a shared_ptr to non-array object
	const auto _Rx = eqlib::eqNew<_Ref_count_obj2<_Ty>>(_STD forward<_Types>(_Args)...);
	shared_ptr<_Ty> _Ret;
	_Ret._Set_ptr_rep_and_enable_shared(_STD addressof(_Rx->_Storage._Value), _Rx);
	return _Ret;
}

template <class _Ty>
class weak_ptr : public _Ptr_base<_Ty> { // class for pointer to reference counted resource
public:
	constexpr weak_ptr() noexcept {}

	weak_ptr(const weak_ptr& _Other) noexcept {
		this->_Weakly_construct_from(_Other); // same type, no conversion
	}

	template <class _Ty2, enable_if_t<_SP_pointer_compatible<_Ty2, _Ty>::value, int> = 0>
	weak_ptr(const shared_ptr<_Ty2>& _Other) noexcept {
		this->_Weakly_construct_from(_Other); // shared_ptr keeps resource alive during conversion
	}

	template <class _Ty2, enable_if_t<_SP_pointer_compatible<_Ty2, _Ty>::value, int> = 0>
	weak_ptr(const weak_ptr<_Ty2>& _Other) noexcept {
		this->_Weakly_convert_lvalue_avoiding_expired_conversions(_Other);
	}

	weak_ptr(weak_ptr&& _Other) noexcept {
		this->_Move_construct_from(_STD move(_Other));
	}

	template <class _Ty2, enable_if_t<_SP_pointer_compatible<_Ty2, _Ty>::value, int> = 0>
	weak_ptr(weak_ptr<_Ty2>&& _Other) noexcept {
		this->_Weakly_convert_rvalue_avoiding_expired_conversions(_STD move(_Other));
	}

	~weak_ptr() noexcept {
		this->_Decwref();
	}

	weak_ptr& operator=(const weak_ptr& _Right) noexcept {
		weak_ptr(_Right).swap(*this);
		return *this;
	}

	template <class _Ty2>
	weak_ptr& operator=(const weak_ptr<_Ty2>& _Right) noexcept {
		weak_ptr(_Right).swap(*this);
		return *this;
	}

	weak_ptr& operator=(weak_ptr&& _Right) noexcept {
		weak_ptr(_STD move(_Right)).swap(*this);
		return *this;
	}

	template <class _Ty2>
	weak_ptr& operator=(weak_ptr<_Ty2>&& _Right) noexcept {
		weak_ptr(_STD move(_Right)).swap(*this);
		return *this;
	}

	template <class _Ty2>
	weak_ptr& operator=(const shared_ptr<_Ty2>& _Right) noexcept {
		weak_ptr(_Right).swap(*this);
		return *this;
	}

	void reset() noexcept { // release resource, convert to null weak_ptr object
		weak_ptr{}.swap(*this);
	}

	void swap(weak_ptr& _Other) noexcept {
		this->_Swap(_Other);
	}

	_NODISCARD bool expired() const noexcept {
		return this->use_count() == 0;
	}

	_NODISCARD shared_ptr<_Ty> lock() const noexcept { // convert to shared_ptr
		shared_ptr<_Ty> _Ret;
		(void)_Ret._Construct_from_weak(*this);
		return _Ret;
	}
};

#if _HAS_CXX17
template <class _Ty>
weak_ptr(shared_ptr<_Ty>) -> weak_ptr<_Ty>;
#endif // _HAS_CXX17

template <class _Ty>
void swap(weak_ptr<_Ty>& _Left, weak_ptr<_Ty>& _Right) noexcept {
	_Left.swap(_Right);
}

template <class _Ty>
class enable_shared_from_this { // provide member functions that create shared_ptr to this
public:
	using _Esft_type = enable_shared_from_this;

	_NODISCARD shared_ptr<_Ty> shared_from_this() {
		return shared_ptr<_Ty>(_Wptr);
	}

	_NODISCARD shared_ptr<const _Ty> shared_from_this() const {
		return shared_ptr<const _Ty>(_Wptr);
	}

	_NODISCARD weak_ptr<_Ty> weak_from_this() noexcept {
		return _Wptr;
	}

	_NODISCARD weak_ptr<const _Ty> weak_from_this() const noexcept {
		return _Wptr;
	}

protected:
	constexpr enable_shared_from_this() noexcept : _Wptr() {}

	enable_shared_from_this(const enable_shared_from_this&) noexcept : _Wptr() {
		// construct (must value-initialize _Wptr)
	}

	enable_shared_from_this& operator=(const enable_shared_from_this&) noexcept { // assign (must not change _Wptr)
		return *this;
	}

	~enable_shared_from_this() = default;

private:
	template <class _Yty>
	friend class shared_ptr;

	mutable weak_ptr<_Ty> _Wptr;
};

template <class _Ty>
struct default_delete { // default deleter for unique_ptr
	constexpr default_delete() noexcept = default;

	template <class _Ty2, enable_if_t<is_convertible_v<_Ty2*, _Ty*>, int> = 0>
	default_delete(const default_delete<_Ty2>&) noexcept {}

	void operator()(_Ty* _Ptr) const noexcept /* strengthened */ { // delete a pointer
		static_assert(0 < sizeof(_Ty), "can't delete an incomplete type");
		eqlib::eqDelete(_Ptr);
	}
};

template <class _Ty>
struct default_delete<_Ty[]> { // default deleter for unique_ptr to array of unknown size
	constexpr default_delete() noexcept = default;

	template <class _Uty, enable_if_t<is_convertible_v<_Uty(*)[], _Ty(*)[]>, int> = 0>
	default_delete(const default_delete<_Uty[]>&) noexcept {}

	template <class _Uty, enable_if_t<is_convertible_v<_Uty(*)[], _Ty(*)[]>, int> = 0>
	void operator()(_Uty* _Ptr) const noexcept /* strengthened */ { // delete a pointer
		static_assert(0 < sizeof(_Uty), "can't delete an incomplete type");
		eqlib::eqVecDelete(_Ptr);
	}
};

template <class _Ty, class _Dx_noref, class = void>
struct _Get_deleter_pointer_type { // provide fallback
	using type = _Ty*;
};

template <class _Ty, class _Dx_noref>
struct _Get_deleter_pointer_type<_Ty, _Dx_noref, void_t<typename _Dx_noref::pointer>> { // get _Dx_noref::pointer
	using type = typename _Dx_noref::pointer;
};

template <class _Dx2>
using _Unique_ptr_enable_default_t =
enable_if_t<conjunction_v<negation<is_pointer<_Dx2>>, is_default_constructible<_Dx2>>, int>;

template <class _Ty, class _Dx /* = default_delete<_Ty> */>
class unique_ptr { // non-copyable pointer to an object
public:
	using pointer = typename _Get_deleter_pointer_type<_Ty, remove_reference_t<_Dx>>::type;
	using element_type = _Ty;
	using deleter_type = _Dx;

	template <class _Dx2 = _Dx, _Unique_ptr_enable_default_t<_Dx2> = 0>
	constexpr unique_ptr() noexcept : _Mypair(_Zero_then_variadic_args_t{}) {}

	template <class _Dx2 = _Dx, _Unique_ptr_enable_default_t<_Dx2> = 0>
	constexpr unique_ptr(nullptr_t) noexcept : _Mypair(_Zero_then_variadic_args_t{}) {}

	unique_ptr& operator=(nullptr_t) noexcept {
		reset();
		return *this;
	}

	template <class _Dx2 = _Dx, _Unique_ptr_enable_default_t<_Dx2> = 0>
	explicit unique_ptr(pointer _Ptr) noexcept : _Mypair(_Zero_then_variadic_args_t{}, _Ptr) {}

	template <class _Dx2 = _Dx, enable_if_t<is_constructible_v<_Dx2, const _Dx2&>, int> = 0>
	unique_ptr(pointer _Ptr, const _Dx& _Dt) noexcept : _Mypair(_One_then_variadic_args_t{}, _Dt, _Ptr) {}

	template <class _Dx2 = _Dx,
		enable_if_t<conjunction_v<negation<is_reference<_Dx2>>, is_constructible<_Dx2, _Dx2>>, int> = 0>
	unique_ptr(pointer _Ptr, _Dx&& _Dt) noexcept : _Mypair(_One_then_variadic_args_t{}, _STD move(_Dt), _Ptr) {}

	template <class _Dx2 = _Dx,
		enable_if_t<conjunction_v<is_reference<_Dx2>, is_constructible<_Dx2, remove_reference_t<_Dx2>>>, int> = 0>
	unique_ptr(pointer, remove_reference_t<_Dx>&&) = delete;

	template <class _Dx2 = _Dx, enable_if_t<is_move_constructible_v<_Dx2>, int> = 0>
	unique_ptr(unique_ptr&& _Right) noexcept
		: _Mypair(_One_then_variadic_args_t{}, _STD forward<_Dx>(_Right.get_deleter()), _Right.release()) {}

	template <class _Ty2, class _Dx2,
		enable_if_t<
		conjunction_v<negation<is_array<_Ty2>>, is_convertible<typename unique_ptr<_Ty2, _Dx2>::pointer, pointer>,
		conditional_t<is_reference_v<_Dx>, is_same<_Dx2, _Dx>, is_convertible<_Dx2, _Dx>>>,
		int> = 0>
	unique_ptr(unique_ptr<_Ty2, _Dx2>&& _Right) noexcept
		: _Mypair(_One_then_variadic_args_t{}, _STD forward<_Dx2>(_Right.get_deleter()), _Right.release()) {}

#if _HAS_AUTO_PTR_ETC
	template <class _Ty2,
		enable_if_t<conjunction_v<is_convertible<_Ty2*, _Ty*>, is_same<_Dx, default_delete<_Ty>>>, int> = 0>
	unique_ptr(auto_ptr<_Ty2>&& _Right) noexcept : _Mypair(_Zero_then_variadic_args_t{}, _Right.release()) {}
#endif // _HAS_AUTO_PTR_ETC

	template <class _Ty2, class _Dx2,
		enable_if_t<conjunction_v<negation<is_array<_Ty2>>, is_assignable<_Dx&, _Dx2>,
		is_convertible<typename unique_ptr<_Ty2, _Dx2>::pointer, pointer>>,
		int> = 0>
		unique_ptr& operator=(unique_ptr<_Ty2, _Dx2>&& _Right) noexcept {
		reset(_Right.release());
		_Mypair._Get_first() = _STD forward<_Dx2>(_Right._Mypair._Get_first());
		return *this;
	}

	template <class _Dx2 = _Dx, enable_if_t<is_move_assignable_v<_Dx2>, int> = 0>
	unique_ptr& operator=(unique_ptr&& _Right) noexcept {
		if (this != _STD addressof(_Right)) {
			reset(_Right.release());
			_Mypair._Get_first() = _STD forward<_Dx>(_Right._Mypair._Get_first());
		}
		return *this;
	}

	void swap(unique_ptr& _Right) noexcept {
		_Swap_adl(_Mypair._Myval2, _Right._Mypair._Myval2);
		_Swap_adl(_Mypair._Get_first(), _Right._Mypair._Get_first());
	}

	~unique_ptr() noexcept {
		if (_Mypair._Myval2) {
			_Mypair._Get_first()(_Mypair._Myval2);
		}
	}

	_NODISCARD _Dx& get_deleter() noexcept {
		return _Mypair._Get_first();
	}

	_NODISCARD const _Dx& get_deleter() const noexcept {
		return _Mypair._Get_first();
	}

	_NODISCARD add_lvalue_reference_t<_Ty> operator*() const noexcept /* strengthened */ {
		return *_Mypair._Myval2;
	}

	_NODISCARD pointer operator->() const noexcept {
		return _Mypair._Myval2;
	}

	_NODISCARD pointer get() const noexcept {
		return _Mypair._Myval2;
	}

	explicit operator bool() const noexcept {
		return static_cast<bool>(_Mypair._Myval2);
	}

	pointer release() noexcept {
		return _STD exchange(_Mypair._Myval2, nullptr);
	}

	void reset(pointer _Ptr = nullptr) noexcept {
		pointer _Old = _STD exchange(_Mypair._Myval2, _Ptr);
		if (_Old) {
			_Mypair._Get_first()(_Old);
		}
	}

	unique_ptr(const unique_ptr&) = delete;
	unique_ptr& operator=(const unique_ptr&) = delete;

private:
	template <class, class>
	friend class unique_ptr;

	_Compressed_pair<_Dx, pointer> _Mypair;
};

template <class _Ty, class _Dx>
class unique_ptr<_Ty[], _Dx> { // non-copyable pointer to an array object
public:
	using pointer = typename _Get_deleter_pointer_type<_Ty, remove_reference_t<_Dx>>::type;
	using element_type = _Ty;
	using deleter_type = _Dx;

	template <class _Dx2 = _Dx, _Unique_ptr_enable_default_t<_Dx2> = 0>
	constexpr unique_ptr() noexcept : _Mypair(_Zero_then_variadic_args_t{}) {}

	template <class _Uty, class _Is_nullptr = is_same<_Uty, nullptr_t>>
	using _Enable_ctor_reset =
		enable_if_t<is_same_v<_Uty, pointer> //
		|| _Is_nullptr::value //
		|| (is_same_v<pointer, element_type*> //
			&& is_pointer_v<_Uty> //
			&& is_convertible_v<remove_pointer_t<_Uty>(*)[], element_type(*)[]>)>; // TRANSITION, GH-248

	template <class _Uty, class _Dx2 = _Dx, _Unique_ptr_enable_default_t<_Dx2> = 0, class = _Enable_ctor_reset<_Uty>>
	explicit unique_ptr(_Uty _Ptr) noexcept : _Mypair(_Zero_then_variadic_args_t{}, _Ptr) {}

	template <class _Uty, class _Dx2 = _Dx, enable_if_t<is_constructible_v<_Dx2, const _Dx2&>, int> = 0,
		class = _Enable_ctor_reset<_Uty>>
		unique_ptr(_Uty _Ptr, const _Dx& _Dt) noexcept : _Mypair(_One_then_variadic_args_t{}, _Dt, _Ptr) {}

	template <class _Uty, class _Dx2 = _Dx,
		enable_if_t<conjunction_v<negation<is_reference<_Dx2>>, is_constructible<_Dx2, _Dx2>>, int> = 0,
		class = _Enable_ctor_reset<_Uty>>
		unique_ptr(_Uty _Ptr, _Dx&& _Dt) noexcept : _Mypair(_One_then_variadic_args_t{}, _STD move(_Dt), _Ptr) {}

	template <class _Uty, class _Dx2 = _Dx,
		enable_if_t<conjunction_v<is_reference<_Dx2>, is_constructible<_Dx2, remove_reference_t<_Dx2>>>, int> = 0>
	unique_ptr(_Uty, remove_reference_t<_Dx>&&) = delete;

	template <class _Dx2 = _Dx, enable_if_t<is_move_constructible_v<_Dx2>, int> = 0>
	unique_ptr(unique_ptr&& _Right) noexcept
		: _Mypair(_One_then_variadic_args_t{}, _STD forward<_Dx>(_Right.get_deleter()), _Right.release()) {}

	template <class _Dx2 = _Dx, enable_if_t<is_move_assignable_v<_Dx2>, int> = 0>
	unique_ptr& operator=(unique_ptr&& _Right) noexcept {
		if (this != _STD addressof(_Right)) {
			reset(_Right.release());
			_Mypair._Get_first() = _STD move(_Right._Mypair._Get_first());
		}

		return *this;
	}

	template <class _Uty, class _Ex, class _More, class _UP_pointer = typename unique_ptr<_Uty, _Ex>::pointer,
		class _UP_element_type = typename unique_ptr<_Uty, _Ex>::element_type>
	using _Enable_conversion = enable_if_t<
		conjunction_v<is_array<_Uty>, is_same<pointer, element_type*>, is_same<_UP_pointer, _UP_element_type*>,
		is_convertible<_UP_element_type(*)[], element_type(*)[]>, _More>>; // TRANSITION, GH-248

	template <class _Uty, class _Ex,
		class = _Enable_conversion<_Uty, _Ex,
		conditional_t<is_reference_v<_Dx>, is_same<_Ex, _Dx>, is_convertible<_Ex, _Dx>>>>
		unique_ptr(unique_ptr<_Uty, _Ex>&& _Right) noexcept
		: _Mypair(_One_then_variadic_args_t{}, _STD forward<_Ex>(_Right.get_deleter()), _Right.release()) {}

	template <class _Uty, class _Ex, class = _Enable_conversion<_Uty, _Ex, is_assignable<_Dx&, _Ex>>>
	unique_ptr& operator=(unique_ptr<_Uty, _Ex>&& _Right) noexcept {
		reset(_Right.release());
		_Mypair._Get_first() = _STD forward<_Ex>(_Right._Mypair._Get_first());
		return *this;
	}

	template <class _Dx2 = _Dx, _Unique_ptr_enable_default_t<_Dx2> = 0>
	constexpr unique_ptr(nullptr_t) noexcept : _Mypair(_Zero_then_variadic_args_t{}) {}

	unique_ptr& operator=(nullptr_t) noexcept {
		reset();
		return *this;
	}

	void reset(nullptr_t = nullptr) noexcept {
		reset(pointer());
	}

	void swap(unique_ptr& _Right) noexcept {
		_Swap_adl(_Mypair._Myval2, _Right._Mypair._Myval2);
		_Swap_adl(_Mypair._Get_first(), _Right._Mypair._Get_first());
	}

	~unique_ptr() noexcept {
		if (_Mypair._Myval2) {
			_Mypair._Get_first()(_Mypair._Myval2);
		}
	}

	_NODISCARD _Dx& get_deleter() noexcept {
		return _Mypair._Get_first();
	}

	_NODISCARD const _Dx& get_deleter() const noexcept {
		return _Mypair._Get_first();
	}

	_NODISCARD _Ty& operator[](size_t _Idx) const noexcept /* strengthened */ {
		return _Mypair._Myval2[_Idx];
	}

	_NODISCARD pointer get() const noexcept {
		return _Mypair._Myval2;
	}

	explicit operator bool() const noexcept {
		return static_cast<bool>(_Mypair._Myval2);
	}

	pointer release() noexcept {
		return _STD exchange(_Mypair._Myval2, nullptr);
	}

	template <class _Uty, class = _Enable_ctor_reset<_Uty, false_type>>
	void reset(_Uty _Ptr) noexcept {
		pointer _Old = _STD exchange(_Mypair._Myval2, _Ptr);
		if (_Old) {
			_Mypair._Get_first()(_Old);
		}
	}

	unique_ptr(const unique_ptr&) = delete;
	unique_ptr& operator=(const unique_ptr&) = delete;

private:
	template <class, class>
	friend class unique_ptr;

	_Compressed_pair<_Dx, pointer> _Mypair;
};


template <class _Ty = void>
struct owner_less; // not defined

template <class _Ty>
struct owner_less<shared_ptr<_Ty>> {
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS typedef shared_ptr<_Ty> _FIRST_ARGUMENT_TYPE_NAME;
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS typedef shared_ptr<_Ty> _SECOND_ARGUMENT_TYPE_NAME;
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS typedef bool _RESULT_TYPE_NAME;

	_NODISCARD bool operator()(const shared_ptr<_Ty>& _Left, const shared_ptr<_Ty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	_NODISCARD bool operator()(const shared_ptr<_Ty>& _Left, const weak_ptr<_Ty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	_NODISCARD bool operator()(const weak_ptr<_Ty>& _Left, const shared_ptr<_Ty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}
};

template <class _Ty>
struct owner_less<weak_ptr<_Ty>> {
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS typedef weak_ptr<_Ty> _FIRST_ARGUMENT_TYPE_NAME;
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS typedef weak_ptr<_Ty> _SECOND_ARGUMENT_TYPE_NAME;
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS typedef bool _RESULT_TYPE_NAME;

	_NODISCARD bool operator()(const weak_ptr<_Ty>& _Left, const weak_ptr<_Ty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	_NODISCARD bool operator()(const weak_ptr<_Ty>& _Left, const shared_ptr<_Ty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	_NODISCARD bool operator()(const shared_ptr<_Ty>& _Left, const weak_ptr<_Ty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}
};

template <>
struct owner_less<void> {
	template <class _Ty, class _Uty>
	_NODISCARD bool operator()(const shared_ptr<_Ty>& _Left, const shared_ptr<_Uty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	template <class _Ty, class _Uty>
	_NODISCARD bool operator()(const shared_ptr<_Ty>& _Left, const weak_ptr<_Uty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	template <class _Ty, class _Uty>
	_NODISCARD bool operator()(const weak_ptr<_Ty>& _Left, const shared_ptr<_Uty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	template <class _Ty, class _Uty>
	_NODISCARD bool operator()(const weak_ptr<_Ty>& _Left, const weak_ptr<_Uty>& _Right) const noexcept {
		return _Left.owner_before(_Right);
	}

	using is_transparent = int;
};

} // namespace eqstd

namespace std {

template <class _Ty>
struct hash<eqstd::shared_ptr<_Ty>> {
	_NODISCARD size_t operator()(const eqstd::shared_ptr<_Ty>& _Keyval) const noexcept {
		return hash<typename eqstd::shared_ptr<_Ty>::element_type*>()(_Keyval.get());
	}
};

} // namespace std
