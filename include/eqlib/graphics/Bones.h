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
#include "eqlib/graphics/Animation.h"

namespace eqlib {

class CActor;
class CActorDefinition;
class CEQBoneDefinition;
class CSimpleModel;

enum EBones
{
	eBoneHead,
	eBoneHelm,
	eBoneGuild,
	eBonePrimary,
	eBoneSecondary,
	eBoneShield,
	eBoneBloodSpurt,
	eBoneTunic,
	eBoneHair,
	eBoneBeard,
	eBoneEyebrows,
	eBoneChest,
	eBoneLeftBracer,
	eBoneRightBracer,
	eBonePelvis,
	eBoneSpell,
	eBoneCamera,
	eBoneArms,
	eBoneLeftGlove,
	eBoneRightGlove,
	eBoneLegs,
	eBoneLeftBoot,
	eBoneRightBoot,
	eBoneTorch,
	eBoneFacialAttachment,
	eBoneTattoo,
	eBoneLeftShoulder,
	eBoneRightShoulder,

	eNumBones,
	eBoneNone = -1,
};

class CBoneGroupInterface
{
public:
	virtual void SetCurrentAnimationParameters(float speed, bool reversed) = 0;
	virtual void SetPendingAnimationParameters(float speed, bool reversed) = 0;
	virtual void BlendToAnimation(CAnimationInterface* anim, float speed, bool reverse, EAnimationMode mode, float blendTime) = 0;
	virtual void SetCurrentAnimation(CAnimationInterface* anim, float speed, bool reverse, EAnimationMode mode) = 0;
	virtual void SetPendingAnimation(CAnimationInterface* anim, float speed, bool reverse, EAnimationMode mode, float blendTime) = 0;
	virtual EStatus AddAnimation(CAnimationInterface* anim) = 0;
	virtual void Update() = 0;
	virtual bool HasCompletedCycle() = 0;
	virtual CAnimationInterface* GetCurrentAnimation() = 0;
	virtual CAnimationInterface* GetPendingAnimation() = 0;
	virtual void ClearAnimationParticles() = 0;
	virtual void SyncToBoneGroup(CBoneGroupInterface* boneGroup) = 0;
};

class CBoneInterface
{
public:
	virtual const char* GetTag() const = 0;
	virtual void AddBoneOrientation(CVector3& orientation) = 0;
};

class CEQBone : public CBoneInterface
{
public:
	virtual CActorInterface* GetAttachedActor() const;
	virtual void SetAttachedActor(CActorInterface* actor);
	virtual void SetAttachedActorSprite(CActorInterface* actor);
	virtual CActor* GetParentActor() const;
	virtual void SetParentActor(CActor* actor);
	virtual void SetBoneOrientation(CVector3& orientation);

	CActor*             m_pAttachedActor;
	CActor*             m_pParentActor;
	CSimpleModel*       m_pSimpleAttachment;
	CMatrix44*          m_pCurrentMatrix;
	CEQBone**           m_ppSubBones;
	CEQBone*            m_pBoneAttachedTo;
	CEQBoneDefinition*  m_pDefinition;
	CMatrix44           m_position;
	CMatrix44           m_boneToWorld;
	CMatrix44           m_attachmentMatrix;
	uint32_t            m_boneFlags;
};

class CEQBoneDefinition
{
public:
	CMatrix44           m_position;
	CMatrix44           m_defaultPoseMatrix;
	CActorDefinition*   m_attachedActorDefinition;
	uint32_t            m_numSubBones;
	CEQBoneDefinition** m_ppSubBones;
	const char*         m_pTag;
	bool                m_invalidStickFigureSubBone;
	bool                m_invalidStickFigureBone;
	bool                m_validStickFigureAttachmentBone;
};

} // namespace eqlib
