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

#include <algorithm>
#include <limits>
#include <sys/stat.h>

#include "../common/Common.h"
#include "OffsetUtils.h"

#pragma warning(disable : 5030) // Single pragma seems to suffice for the entire codebase

#if !defined(NOMINMAX)
#define NOMINMAX
#endif

#if !defined(WIN32_LEAN_AND_MEAN)
#define WIN32_LEAN_AND_MEAN
#endif

#include <Windows.h>

#undef GetWindowText
#undef SetWindowText
#undef FindWindow
#undef GetClassName

#ifdef IsMinimized
#undef IsMinimized
#endif

#include <mq/base/Deprecation.h>

#include <cstdlib>
#include <cstdint>

#ifdef EQLIB_EXPORTS
#define EQLIB_API extern "C" __declspec(dllexport)
#define EQLIB_VAR extern "C" __declspec(dllexport)
#define EQLIB_OBJECT __declspec(dllexport)
#else
#define EQLIB_API extern "C" __declspec(dllimport)
#define EQLIB_VAR extern "C" __declspec(dllimport)
#define EQLIB_OBJECT __declspec(dllimport)
#endif

#if defined (_DEBUG) && (defined(EQLIB_EXPORTS) || defined(MQ2MAIN_EXPORTS))
#define FORCE_SYMBOLS __declspec(dllexport) const void* __force_symbol_generation__() const { return this; }
#else
#define FORCE_SYMBOLS
#endif

// these macros do nothing but indicate to the reader that the function is actually in AssemblyFunctions.asm
#define CONSTRUCTOR_AT_ADDRESS(function, offset)
#define DESTRUCTOR_AT_ADDRESS(function, offset)

#define FUNCTION_CHECKS_OFF() \
    __pragma(optimize("ytg", on)) __pragma(runtime_checks("", off)) __pragma(check_stack(off)) __pragma(strict_gs_check(push,off))
#define FUNCTION_CHECKS_ON() \
    __pragma(optimize("", on)) __pragma(runtime_checks("",restore)) __pragma(check_stack())    __pragma(strict_gs_check(pop))

namespace eqlib::detail{
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
		enum { value = ((std::is_reference_v<T> || std::is_pointer_v<T> || std::is_void_v<T>) ? 8 : !std::is_pod_v<T> ? 12 : check_size_t<T>::value) <= 8 ? 1 : 0 };
	};

}

#if defined(_M_AMD64)

#define FUNCTION_AT_ADDRESS(rettype, func, variable)                                               \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype func {                                                            \
		static_assert(eqlib::detail::is_size_ok<rettype>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return ((TargetFunction)variable)();                                                       \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#define FUNCTION_AT_VIRTUAL_ADDRESS(rettype, func, offset)                                         \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype func {                                                            \
		static_assert(eqlib::detail::is_size_ok<rettype>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return ((TargetFunction)(*(reinterpret_cast<uintptr_t**>(this)[0] + (offset/8))))();       \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#define FORWARD_FUNCTION_TO_VTABLE(rettype, function, Class, member)                               \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype Class::function {                                                 \
		static_assert(eqlib::detail::is_size_ok<rettype>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return ((TargetFunction)(Class::sm_vftable->member))();                                    \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#define FORWARD_FUNCTION_TO_VTABLE2(a, b, c, d, e) \
	FORWARD_FUNCTION_TO_VTABLE(a, b, c, e)

#define FUNCTION_AT_VIRTUAL_TABLE_ADDRESS(rettype, function, address, offset)                      \
	FUNCTION_CHECKS_OFF()                                                                          \
	__declspec(noinline) rettype function {                                                        \
		static_assert(eqlib::detail::check_size_t<rettype>::value <= 8, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = rettype(*)();                                                       \
		return (*(TargetFunction*)((address + offset * sizeof(uintptr_t))))();                     \
	}                                                                                              \
	FUNCTION_CHECKS_ON()

#else // x86 version

#define FUNCTION_AT_ADDRESS(RetType, Function, Variable)                                 \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		__asm mov eax, Variable                                                          \
		__asm jmp eax                                                                    \
	}

#define FUNCTION_AT_VIRTUAL_ADDRESS(RetType, Function, VirtualOffset)                    \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		__asm mov eax, [ecx]                                                             \
		__asm lea eax, [eax+VirtualOffset]                                               \
		__asm mov eax, [eax]                                                             \
		__asm jmp eax                                                                    \
	}

#define FORWARD_FUNCTION_TO_VTABLE(RetType, Function, Class, Member)                     \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		using VFT = Class::VirtualFunctionTable;                                         \
		__asm mov eax, [Class::sm_vftable]                                               \
		__asm jmp dword ptr [eax]VFT.Member                                              \
	}

#define FORWARD_FUNCTION_TO_VTABLE2(RetType, Function, Class, Base, Member)              \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		using VFT = Base::VirtualFunctionTable;                                          \
		__asm mov eax, [Class::sm_vftable]                                               \
		__asm jmp dword ptr [eax]VFT.Member                                              \
	}

#define FUNCTION_AT_VIRTUAL_TABLE_ADDRESS(RetType, function, address, virtualoffset)     \
	__declspec(naked) RetType Function                                                   \
	{                                                                                    \
		__asm mov edx, virtualoffset                                                     \
		__asm mov eax, [address]                                                         \
		__asm lea eax, [eax+edx*4]                                                       \
		__asm mov eax, [eax]                                                             \
		__asm jmp eax                                                                    \
	}

#endif

 // Define access to a member with another name (and type if you so will it)
#define ALT_MEMBER_GETTER(type, orig, name) \
    type& getter_ ## name() { return (*reinterpret_cast<type*>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_MEMBER_ALIAS(type, orig, name) \
    type& getter_ ## name() { return orig; } \
    void setter_ ## name(const type& v) { orig = v; } \
    __declspec(property(get=getter_ ## name, put=setter_ ## name)) type name;

#define ALT_MEMBER_ALIAS_DEPRECATED(type, orig, name, msg) \
	DEPRECATE(msg) \
    type& getter_ ## name() { return orig; } \
    void setter_ ## name(const type& v) { orig = v; } \
    __declspec(property(get=getter_ ## name, put=setter_ ## name)) type name;

#define ALT_MEMBER_GETTER_ARRAY(type, size, orig, name) \
    type (&getter_ ## name())[size] { return (*reinterpret_cast<type(*)[size]>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type (&name)[size];

#define ALT_MEMBER_GETTER_COPY(type, orig, name) \
    type getter_ ## name() { return (type)(orig); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_MEMBER_GETTER_DEPRECATED(type, orig, name, msg) \
    DEPRECATE(msg) \
    type& getter_ ## name() { return (*reinterpret_cast<type*>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_VMEMBER_GETTER_DEPRECATED(type, orig, name, msg) \
    DEPRECATE(msg) \
    type getter_ ## name() { return (static_cast<type>(orig)); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_MEMBER_GETTER_ARRAY_DEPRECATED(type, size, orig, name, msg) \
    DEPRECATE(msg) \
    type (&getter_ ## name())[size] { return (*reinterpret_cast<type(*)[size]>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type (&name)[size];

#define SIZE_CHECKS_ENABLED 1

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

#include "base/Color.h"

namespace eqlib {

#if defined(_M_AMD64)
using eqtime_t = time_t;
using eqstat_t = struct ::_stat;
#else
using eqtime_t = __time32_t;
using eqstat_t = struct ::_stat32;
#endif // defined(_M_AMD64)

inline errno_t __cdecl eq_ctime(char* Buffer, size_t SizeInBytes, const eqtime_t* Time)
{
#if defined(_M_AMD64)
	return ctime_s
#else
	return _ctime32_s
#endif // defined(_M_AMD64)
		(Buffer, SizeInBytes, Time);
}

inline errno_t __cdecl eq_localtime(tm* Tm, const eqtime_t* Time)
{
#if defined(_M_AMD64)
	return localtime_s
#else
	return _localtime32_s
#endif // defined(_M_AMD64)
		(Tm, Time);
}


class CXSize;

class EQLIB_OBJECT CXPoint
{
public:
	CXPoint() = default;
	CXPoint(int x_, int y_) : x(x_), y(y_) {}
	CXPoint(const CXPoint& other) : x(other.x), y(other.y) {}
	explicit CXPoint(const CXSize& other);

	CXPoint& operator=(const CXPoint& other)
	{
		x = other.x;
		y = other.y;

		return *this;
	}

	bool operator==(const CXPoint& other)
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const CXPoint& other)
	{
		return !(*this == other);
	}

	int x = 0, y = 0;
};

// Literally the same as CXPoint, but the variable names are cx and cy...
class EQLIB_OBJECT CXSize
{
public:
	CXSize() = default;
	CXSize(int x_, int y_) : cx(x_), cy(y_) {}
	CXSize(const CXSize& other) : cx(other.cx), cy(other.cy) {}
	explicit CXSize(const CXPoint& other);

	CXSize& operator=(const CXSize& other)
	{
		cx = other.cx;
		cy = other.cy;

		return *this;
	}

	bool operator==(const CXSize& other)
	{
		return cx == other.cx && cy == other.cy;
	}

	bool operator!=(const CXSize& other)
	{
		return !(*this == other);
	}

	int cx = 0, cy = 0;
};

class EQLIB_OBJECT CXRect
{
public:
	CXRect() = default;
	CXRect(int left_, int top_, int right_, int bottom_)
		: left(left_), top(top_), right(right_), bottom(bottom_) {}
	CXRect(const CXPoint& pt, const CXSize& size)
		: left(pt.x), top(pt.y), right(pt.x + size.cx), bottom(pt.y + size.cy) {}
	CXRect(const CXPoint& pt1, const CXPoint& pt2)
		: left(pt1.x), top(pt1.y), right(pt2.x), bottom(pt2.y) {}
	CXRect(const CXRect& other)
		: left(other.left), top(other.top), right(other.right), bottom(other.bottom) {}

	CXRect& operator=(const CXRect& other)
	{
		left = other.left;
		top = other.top;
		right = other.right;
		bottom = other.bottom;

		return *this;
	}

	bool operator==(const CXRect& other)
	{
		return left == other.left
			&& top == other.top
			&& right == other.right
			&& bottom == other.bottom;
	}

	bool operator!=(const CXRect& other)
	{
		return !(*this == other);
	}

	CXRect operator&(const CXRect& other)
	{
		CXRect newRect(-1, -1, -1, -1);

		if (left > other.right)
			return newRect;
		if (top > other.bottom)
			return newRect;
		if (right < other.left)
			return newRect;
		if (bottom < other.top)
			return newRect;

		newRect.left = std::max(left, other.left);
		newRect.top = std::max(top, other.top);
		newRect.right = std::min(right, other.right);
		newRect.bottom = std::min(bottom, other.bottom);

		return newRect;
	}

	CXRect& operator+=(const CXRect& other)
	{
		left += other.left;
		top += other.top;
		bottom += other.bottom;
		right += other.right;
		return *this;
	}

	CXRect& operator+=(const CXPoint& other)
	{
		left += other.x;
		top += other.y;
		right += other.x;
		bottom += other.y;

		return *this;
	}

	CXRect operator+(const CXRect& other) const
	{
		CXRect temp = *this;
		temp += other;
		return temp;
	}

	CXRect operator+(const CXPoint& other) const
	{
		CXRect temp = *this;
		temp += other;
		return temp;
	}

	int GetWidth() const { return right - left; }
	void SetWidth(int width) { right = left + width; }
	int GetHeight() const { return bottom - top; }
	void SetHeight(int height) { bottom = top + height; }

	void SetSize(const CXSize& size)
	{
		right = left + size.cx;
		bottom = top + size.cy;
	}

	void SetLeft(int newLeft)
	{
		int width = GetWidth();
		left = newLeft;
		right = newLeft + width;
	}

	void SetTop(int newTop)
	{
		int height = GetHeight();
		top = newTop;
		bottom = newTop + height;
	}

	CXSize GetSize() const { return CXSize{ GetWidth(), GetHeight() }; }

	bool IsEmpty() const { return GetWidth() == 0 && GetHeight() == 0; }
	bool IsAbnormal() const { return GetWidth() < 0 && GetHeight() < 0; }

	CXPoint CenterPoint() const
	{
		return CXPoint{ left + (GetWidth() / 2), top + (GetHeight() / 2) };
	}

	CXPoint TopLeft() const { return CXPoint{ left, top }; }
	CXPoint TopRight() const { return CXPoint{ right, top }; }
	CXPoint BottomLeft() const { return CXPoint{ left, bottom }; }
	CXPoint BottomRight() const { return CXPoint{ right, bottom }; }

	bool ContainsPoint(const CXPoint& p)
	{
		return p.x >= left && p.x < right && p.y >= top && p.y < bottom;
	}

	int left = 0;
	int top = 0;
	int right = 0;
	int bottom = 0;
};

inline CXPoint::CXPoint(const CXSize& other)
{
	x = other.cx;
	y = other.cy;
}

inline CXSize::CXSize(const CXPoint& other)
{
	cx = other.x;
	cy= other.y;
}

class CVector2
{
public:
	float X, Y;
};

class CVector3
{
public:
	inline CVector3(float x, float y, float z) : X(x), Y(y), Z(z) {}
	inline CVector3() {}

	// float GetLength() const;
	EQLIB_OBJECT float NormalizeAndReturnLength();
	EQLIB_OBJECT void Normalize();

	void Set(float x, float y, float z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	inline CVector3& operator-=(const CVector3& vec)
	{
		X -= vec.X;
		Y -= vec.Y;
		Z -= vec.Z;
		return *this;
	}

	inline CVector3& operator+=(const CVector3& vec)
	{
		X += vec.X;
		Y += vec.Y;
		Z += vec.Z;
		return *this;
	}

	inline void Scale(float val)
	{
		X *= val;
		Y *= val;
		Z *= val;
	}

	inline CVector3 operator*(float val) const
	{
		CVector3 ret = *this;
		ret.Scale(val);

		return ret;
	}

	void SetMax()
	{
		X = Y = Z = std::numeric_limits<float>::max();
	}

	float GetLengthSquared() const
	{
		return (X * X) + (Y * Y) + (Z * Z);
	}

	float GetLength() const
	{
		return sqrtf(GetLengthSquared());
	}

	CVector3 operator-() const
	{
		CVector3 res;
		res.Set(-X, -Y, -Z);

		return res;
	}

	CVector3 operator-(const CVector3 & vec) const
	{
		CVector3 res;
		res.Set(X - vec.X, Y - vec.Y, Z - vec.Z);

		return res;
	}

	CVector3 operator+(const CVector3 & vec) const
	{
		CVector3 res;
		res.Set(vec.X + X, vec.Y + Y, vec.Z + Z);

		return res;
	}

	float GetDistanceSquared(const CVector3 & vec) const
	{
		CVector3 Delta = *this - vec;
		return Delta.GetLengthSquared();
	}

	float GetDistance(const CVector3& vec) const
	{
		return sqrtf((*this - vec).GetLengthSquared());
	}

	bool operator==(const CVector3& other)
	{
		return X == other.X && Y == other.Y && Z == other.Z;
	}

	float X = 0.f;
	float Y = 0.f;
	float Z = 0.f;
};

class CVector4
{
public:
	float X, Y, Z, W;
};

class CMatrix44
{
public:
	CVector4 row[4];
};

class CSphere
{
public:
	float radius;
	CVector3 center;
};

class CAABox
{
public:
	CVector3 center;
	CVector3 extents;
};

struct EQLOC
{
	float x;
	float y;
	float z;
};

union EqGuid
{
	uint64_t GUID;

	struct
	{
		uint32_t UniqueEntityID;
		uint16_t WorldUniqueID;
		uint16_t Reserved;
	};

	inline operator uint64_t() const { return GUID; }
	inline explicit operator bool() const { return GUID != 0; }
	inline bool operator==(EqGuid& other) { return GUID == other.GUID; }
	inline bool operator!=(EqGuid& other) { return GUID != other.GUID; }

	EqGuid() : GUID(0) {}
};

inline bool operator==(const EqGuid& a, const EqGuid& b)
{
	return a.GUID == b.GUID;
}

} // namespace eqlib

#include "Constants.h"
#include "ForwardDecls.h"

#include "SoeUtil.h"

namespace eqlib
{
	//class EnumKeyTypeRace;
	//using EQRace = SoeUtil::StrongType<int, EnumKeyTypeRace>;
	using EQRace = int;

	//class EnumKeyTypeClass;
	//using EQClass = SoeUtil::StrongType<int, EnumKeyTypeClass>;
	using EQClass = int;
}
