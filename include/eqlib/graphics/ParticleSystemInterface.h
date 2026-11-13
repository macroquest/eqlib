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

#include "eqlib/graphics/GraphicsEngine.h"
#include "eqlib/game/MathTypes.h"

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
class CActorInterface;
class CBoneInterface;
class CEQBone;

//----------------------------------------------------------------------------
class CParticleSystemInterface
{
public:
	virtual void UpdateAllEmittersScalingRadius(CActorInterface*) = 0;
	virtual int LoadEmitterDefinitions() = 0;
};

//============================================================================
// ParticlePointInterface
//============================================================================

// The data behind CActorInterface::AddPointDefinition / GetParticlePointData.
class [[offsetcomments]] CParticlePointDefinition
{
public:
/*0x00*/ CXStr      Tag;
/*0x04*/ int        BoneIndex;
/*0x08*/ CVector3   Translation;
/*0x14*/ CVector3   Rotation;       // EQ 512-unit angles
/*0x20*/ CVector3   Scale;
/*0x2c*/ CMatrix44  Transform;      // built from Translation, Rotation and Scale
/*0x6c*/
};

// A named attach point on an actor's model (e.g. R_POINT_DAG), see ActorClient::pParticlePoints.
class [[offsetcomments]] CParticlePointInterface
{
public:
/*0x00*/ virtual CXStr& GetName() = 0;
/*0x04*/ virtual CMatrix44& GetWorldSpaceMatrix() = 0; // refreshes from the bone or model first; row[3] is the world position
/*0x08*/ virtual CVector3& GetPositionOffset() = 0;     // the definition's Translation
};

// The graphics engine's particle point, behind CParticlePointInterface. Its fields aren't mapped yet.
class CParticlePoint : public CParticlePointInterface
{
};

//============================================================================
// Emitter
//============================================================================

struct SEmitterDefData;

class [[offsetcomments]] CEmitterInterface
{
public:
/*0x00*/ virtual void SetBoundingScale(float scale, const SEmitterDefData*) = 0;
/*0x04*/ virtual float GetBoundingScale() const = 0;
/*0x08*/ virtual float GetBoundingRadius() const = 0;
/*0x0c*/ virtual void SetAlwaysVisible(bool) = 0;
/*0x10*/ virtual bool IsAlwaysVisible() const = 0;
/*0x14*/ virtual void SetLocation(const CVector3&) = 0;
/*0x18*/ virtual void SetOrientation(const CMatrix33&) = 0;
/*0x1c*/ virtual void SetTransform(const CMatrix44&) = 0;
/*0x20*/ virtual void SetLifeRemaining(float) = 0;
/*0x24*/ virtual float GetLifeRemaining() const = 0;
/*0x28*/ virtual ~CEmitterInterface() {}
};

class [[offsetcomments]] CEmitter : public CEmitterInterface
{
public:
/*0x04*/ bool                     bInitialized;       // set once the particle buffer is allocated
/*0x05*/ uint8_t                  Unknown0x0005[0x0c - 0x05];
/*0x0c*/ int                      MaxParticles;
/*0x10*/ uint8_t                  Unknown0x0010[0x38 - 0x10];
/*0x38*/ CVector3                 Position;
/*0x44*/ CMatrix33                Orientation;
/*0x68*/ CActorInterface*         pActor;
/*0x6c*/ CEQBone*                 pAttachBone;        // the bone this emitter follows every frame (ahead of pActor)
/*0x70*/ CParticlePoint*          pAttachPoint;       // the particle point this emitter follows every frame
/*0x74*/ void*                    pParticles;         // 0x80-byte particle records
/*0x78*/ void*                    pParticlesEnd;      // pParticles + MaxParticles records
/*0x7c*/ uint8_t                  Unknown0x007c[0x9c - 0x7c];
/*0x9c*/
};

// Returned by CSceneGraph::CreateParticleCloudInstance.
class [[offsetcomments]] CParticleCloudInterface
{
public:
/*0x00*/ virtual CEmitterInterface* GetEmitterInterface() const = 0;
/*0x04*/ virtual int AttachToBone(CBoneInterface*) = 0; // the old spell effect spawner calls this for hand emitters; EQGraphicsDX9 ignores it and returns -1
};

//============================================================================

} // namespace eqlib
