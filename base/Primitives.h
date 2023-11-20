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

#include "imgui/imgui.h"

namespace eqlib {

class CXSize;

class CXPoint
{
public:
	CXPoint() = default;

	CXPoint(int x_, int y_)
		: x(x_), y(y_)
	{
	}

	CXPoint(const CXPoint& other)
		: x(other.x), y(other.y)
	{
	}

	explicit CXPoint(const CXSize& other);

	CXPoint(const ImVec2& other)
		: x(static_cast<int>(other.x)), y(static_cast<int>(other.y))
	{
	}

	operator ImVec2() const
	{
		return ImVec2(static_cast<float>(x), static_cast<float>(y));
	}

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

	int x = 0;
	int y = 0;
};

// Same as CXPoint, but the variable names are cx and cy
class CXSize
{
public:
	CXSize() = default;

	CXSize(int x, int y)
		: cx(x), cy(y)
	{
	}

	CXSize(const CXSize& other)
		: cx(other.cx), cy(other.cy)
	{
	}

	explicit CXSize(const CXPoint& other)
		: cx(other.x), cy(other.y)
	{
	}

	CXSize(const ImVec2& other)
		: cx(static_cast<int>(other.x)), cy(static_cast<int>(other.y))
	{
	}

	operator ImVec2() const
	{
		return ImVec2(static_cast<float>(cx), static_cast<float>(cy));
	}

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


inline CXPoint::CXPoint(const CXSize& other)
	: x(other.cx), y(other.cy)
{
}

class CXRect
{
public:
	CXRect() = default;

	CXRect(int left_, int top_, int right_, int bottom_)
		: left(left_), top(top_), right(right_), bottom(bottom_)
	{
	}

	CXRect(const CXPoint& pt, const CXSize& size)
		: left(pt.x), top(pt.y), right(pt.x + size.cx), bottom(pt.y + size.cy)
	{
	}

	CXRect(const CXPoint& pt1, const CXPoint& pt2)
		: left(pt1.x), top(pt1.y), right(pt2.x), bottom(pt2.y)
	{
	}

	CXRect(const CXRect& other)
		: left(other.left), top(other.top), right(other.right), bottom(other.bottom)
	{
	}

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
