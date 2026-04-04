//  mutex standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/game/Allocator.h"
#include "mq/base/Traits.h"

#include "eqstd/type_traits.h"
#include "eqstd/xmemory.h"

#include <cstdlib>
#include <system_error>
#include <thread>
#include <utility>
#include <type_traits>

namespace eqstd {

using _Smtx_t = void*;

struct _Stl_critical_section {
	void* _Unused = nullptr; // TRANSITION, ABI: was the vptr
	_Smtx_t _M_srw_lock = nullptr;
};

struct _Mtx_internal_imp_t {
	// TRANSITION, ABI: We should directly store _M_srw_lock above.
#ifdef _WIN64
	static constexpr size_t _Critical_section_size = 64;
#else // ^^^ 64-bit / 32-bit vvv
	static constexpr size_t _Critical_section_size = 36;
#endif // ^^^ 32-bit ^^^

	int _Type{};
	union {
		_Stl_critical_section _Critical_section{};
		std::aligned_storage_t<_Critical_section_size, alignof(void*)> _Cs_storage;
	};
	long _Thread_id{};
	int _Count{};
};

using _Mtx_t = _Mtx_internal_imp_t*;

class _Mutex_base { // base class for all mutex types
public:
	constexpr _Mutex_base(int _Flags = 0) noexcept {
		_Mtx_storage._Critical_section = {};
		_Mtx_storage._Thread_id = -1;
		_Mtx_storage._Type = _Flags | _Mtx_try;
		_Mtx_storage._Count = 0;
	}

	_Mutex_base(const _Mutex_base&) = delete;
	_Mutex_base& operator=(const _Mutex_base&) = delete;

	//void lock() {
	//	if (_Mtx_lock(_Mymtx()) != _Thrd_result::_Success) {
	//		// undefined behavior, only occurs for plain mutexes (N4950 [thread.mutex.requirements.mutex.general]/6)
	//		std::_Throw_Cpp_error(5 /*_RESOURCE_DEADLOCK_WOULD_OCCUR*/);
	//	}

	//	if (!_Verify_ownership_levels()) {
	//		// only occurs for recursive mutexes (N4950 [thread.mutex.recursive]/3)
	//		// POSIX specifies EAGAIN in the corresponding situation:
	//		// https://pubs.opengroup.org/onlinepubs/9699919799/functions/pthread_mutex_lock.html
	//		std::_Throw_Cpp_error(6 /*_RESOURCE_UNAVAILABLE_TRY_AGAIN*/);
	//	}
	//}

	//bool try_lock() noexcept /* strengthened */ {
	//	// false may be from undefined behavior for plain mutexes (N4950 [thread.mutex.requirements.mutex.general]/6)
	//	return _Mtx_trylock(_Mymtx()) == _Thrd_result::_Success;
	//}

	//void unlock() noexcept /* strengthened */ {
	//	_Mtx_unlock((::_Mtx_t*)_Mymtx());
	//}

	// native_handle_type and native_handle() have intentionally been removed. See GH-3820.

protected:
	bool _Verify_ownership_levels() noexcept {
		if (_Mtx_storage._Count == INT_MAX) {
			// only occurs for recursive mutexes (N4950 [thread.mutex.recursive]/3)
			--_Mtx_storage._Count;
			return false;
		}

		return true;
	}

private:
	_Mtx_internal_imp_t _Mtx_storage{};

	_Mtx_t _Mymtx() noexcept {
		return &_Mtx_storage;
	}
};

class mutex : public _Mutex_base { // class for mutual exclusion
public:
	mutex() noexcept = default;

	mutex(const mutex&) = delete;
	mutex& operator=(const mutex&) = delete;
};

} // namespace eqstd
