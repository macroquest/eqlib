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

#include "eqlib/game/MathTypes.h"
#include "eqlib/game/PlayerClient.h"
#include "eqlib/graphics/GraphicsEngine.h"

#include "glm/vec2.hpp"
#include "glm/vec3.hpp"

struct ID3DXBuffer;

namespace eqlib {

//============================================================================

class CCamera;

//----------------------------------------------------------------------------
class CCameraInterface
{
public:
	virtual CCamera* AsCamera() = 0;
	virtual void SetNearClipPlane(float) = 0;
	virtual float GetNearClipPlane() = 0;
	virtual void SetFarClipPlane(float) = 0;
	virtual float GetFarClipPlane() = 0;
	virtual void SetActorFarClipPlane(float) = 0;
	virtual float GetActorFarClipPlane() = 0;
	virtual void SetShadowFarClipPlane(float) = 0;
	virtual void SetZoneObjectFarClipPlane(float) = 0;
	virtual void SetViewAngles(float, float) = 0;
	virtual void SetRenderWindow(RECT*) = 0;
	virtual float GetRenderBufferWidth() = 0;
	virtual float GetRenderBufferHeight() = 0;
	virtual uint32_t GetRegionNumber() = 0;
	virtual EStatus Move(CVector3*, bool) = 0;
	virtual void Orient(CVector3*) = 0;
	virtual void GetPosition(CVector3*) = 0;
	virtual void GetOrientatio(CVector3*) = 0;
	virtual float GetHeading() = 0;
	virtual float GetPitch() = 0;
	virtual float GetRoll() = 0;
	virtual float GetX() = 0;
	virtual float GetY() = 0;
	virtual float GetZ() = 0;
	virtual CVector3* GetPositionPointer() = 0;
	virtual float* GetHeadingPointer() = 0;
	virtual bool GetClampedScreenCoordinates(float&, float&, float, float) const = 0;
	virtual int ComputeWorldToEyeCoefficients() = 0;
	virtual void ProjectScreenToWorld(float, float, CLineSegment&) const = 0;
	virtual bool ProjectWorldCoordinatesToScreen(const CVector3&, float&, float&) const = 0;
	virtual void ProjectScreenToCamera(float, float, CVector3&) const = 0;
	virtual bool ProjectCameraToScreen(const CVector3&, float&, float&) const = 0;
	virtual void TransformCameraCoordinatesToWorldCoordinates(const CVector3&, CVector3&) const = 0;
	virtual void TransformWorldCoordinatesToCameraCoordinates(const CVector3&, CVector3&) const = 0;
};

//----------------------------------------------------------------------------

class CCamera : public CCameraInterface
{
public:
/*0x008*/ float halfViewAngle;
/*0x00c*/ float aspectRatio;
/*0x010*/ float nearClip;
/*0x014*/ float nearClipRangeConst;
/*0x018*/ float farClip;
/*0x01c*/ float actorFarClip;
/*0x020*/ float actorFarClipSquared;
/*0x024*/ float shadowFarClip;
/*0x028*/ float shadowFarClipSquared;
/*0x02c*/ float zoneObjectFarClip;
/*0x030*/ float zoneObjectFarClipSquared;
/*0x034*/ float left;
/*0x038*/ float top;
/*0x03c*/ float halfRenderWidth;
/*0x040*/ float halfRenderHeight;
/*0x044*/ glm::vec3 worldToEyeCoef[3];
/*0x068*/ float cotangent;
/*0x06c*/ float cotAspectRatio;
/*0x070*/ glm::vec3 worldToEyeXAxisCot;
/*0x07c*/ glm::vec3 worldToEyeYAxisCotAspect;
/*0x088*/ glm::vec3 worldToImageXAxisCot;
/*0x094*/ glm::vec3 worldToImageYAxisCotAspect;
/*0x0a0*/ glm::vec3 normMultiplier;
/*0x0ac*/ glm::vec2 eyeInvMultiplier;
/*0x0b8*/ glm::vec3 orientation;
/*0x0c4*/ glm::vec3 position;
/*0x0d0*/ uint32_t renderWidth;
/*0x0d4*/ uint32_t renderHeight;
/*0x0d8*/ uint32_t associatedActor;
/*0x0dc*/
};

//============================================================================

} // namespace eqlib
