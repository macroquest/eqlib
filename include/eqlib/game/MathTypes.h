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

namespace eqlib {
	
//------------------------------------------------------------------------------------------------
// CVector2

class CVector2
{
public:
	float X, Y;
};

//------------------------------------------------------------------------------------------------
// CVector3

class CVector3
{
public:
	CVector3(float x, float y, float z) : X(x), Y(y), Z(z) {}
	CVector3() {}

	// float GetLength() const;
	EQLIB_OBJECT float NormalizeAndReturnLength();
	EQLIB_OBJECT void Normalize();

	void Set(float x, float y, float z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	CVector3& operator-=(const CVector3& vec)
	{
		X -= vec.X;
		Y -= vec.Y;
		Z -= vec.Z;
		return *this;
	}

	CVector3& operator+=(const CVector3& vec)
	{
		X += vec.X;
		Y += vec.Y;
		Z += vec.Z;
		return *this;
	}

	void Scale(float val)
	{
		X *= val;
		Y *= val;
		Z *= val;
	}

	CVector3 operator*(float val) const
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

	CVector3 operator-(const CVector3& vec) const
	{
		CVector3 res;
		res.Set(X - vec.X, Y - vec.Y, Z - vec.Z);

		return res;
	}

	CVector3 operator+(const CVector3& vec) const
	{
		CVector3 res;
		res.Set(vec.X + X, vec.Y + Y, vec.Z + Z);

		return res;
	}

	float GetDistanceSquared(const CVector3& vec) const
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

//------------------------------------------------------------------------------------------------
// CIVector3

class CIVector3
{
public:
	int X, Y, Z;
};

//------------------------------------------------------------------------------------------------
// CVector4

class CVector4
{
public:
	float X, Y, Z, W;
};

//------------------------------------------------------------------------------------------------
// CMatrix44

class CMatrix44
{
public:
	CVector4 row[4];
};

//------------------------------------------------------------------------------------------------
// CSphere

class CSphere
{
public:
	float radius;
	CVector3 center;
};

//------------------------------------------------------------------------------------------------
// CAaBox

class CAABox
{
public:
	CVector3 center;
	CVector3 extents;
};

} // namespace eqlib
