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

#if IMGUI_CONVERSION_FUNCTIONS
#include "imgui/imgui.h"
#endif

namespace eqlib {

class CXSize;


//------------------------------------------------------------------------------------------------
// CXPoint

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

#if IMGUI_CONVERSION_FUNCTIONS
	CXPoint(const ImVec2& other)
		: x(static_cast<int>(other.x)), y(static_cast<int>(other.y))
	{
	}

	operator ImVec2() const
	{
		return ImVec2(static_cast<float>(x), static_cast<float>(y));
	}
#endif

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

	CXPoint operator+(int value)
	{
		return CXPoint(x + value, y + value);
	}

	CXPoint operator+(const CXPoint& other)
	{
		return CXPoint(x + other.x, y + other.y);
	}

	CXPoint operator-(int value)
	{
		return CXPoint(x - value, y - value);
	}

	CXPoint operator-(const CXPoint& other)
	{
		return CXPoint(x - other.x, y - other.y);
	}

	CXPoint operator+(const CXSize& other);
	CXPoint operator-(const CXSize& other);

	int x = 0;
	int y = 0;
};

//------------------------------------------------------------------------------------------------
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

#if IMGUI_CONVERSION_FUNCTIONS
	CXSize(const ImVec2& other)
		: cx(static_cast<int>(other.x)), cy(static_cast<int>(other.y))
	{
	}

	operator ImVec2() const
	{
		return ImVec2(static_cast<float>(cx), static_cast<float>(cy));
	}
#endif

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

	CXSize operator+(int value)
	{
		return CXSize(cx + value, cy + value);
	}

	CXSize operator-(int value)
	{
		return CXSize(cx - value, cy - value);
	}

	CXSize operator+(const CXSize& other)
	{
		return CXSize(cx + other.cx, cy + other.cy);
	}

	CXSize operator-(const CXSize& other)
	{
		return CXSize(cx - other.cx, cy - other.cy);
	}

	int cx = 0, cy = 0;
};

inline CXPoint::CXPoint(const CXSize& other)
	: x(other.cx), y(other.cy)
{
}

inline CXPoint CXPoint::operator+(const CXSize& other)
{
	return CXPoint(x + other.cx, y + other.cy);
}

inline CXPoint CXPoint::operator-(const CXSize& other)
{
	return CXPoint(x - other.cx, y - other.cy);
}

//------------------------------------------------------------------------------------------------
// CXRect

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

	CXRect& operator*=(float scalar)
	{
		SetSize(GetSize() * scalar);
		return *this;
	}

	CXRect operator*(float scalar)
	{
		CXRect temp = *this;
		temp.SetSize(temp.GetSize() * scalar);
		return temp;
	}

	CXRect& operator/=(float scalar)
	{
		SetSize(GetSize() / scalar);
		return *this;
	}

	CXRect operator/(float scalar)
	{
		CXRect temp = *this;
		temp.SetSize(temp.GetSize() / scalar);
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

} // namespace eqlib
