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

#include "eqlib/game/Actors.h"
#include "eqlib/game/Constants.h"
#include "eqlib/game/Items.h"

namespace eqlib {

class PlayerClient;
class CParticleCloudInterface;

constexpr size_t EQGroundItem_size = 0xA0; // @sizeof(EQGroundItem) :: 2026-03-16 (test) @ 0x1401FFD58

class [[offsetcomments]] EQGroundItem
{
public:
/*0x00*/ EQGroundItem*    pPrev;
/*0x08*/ EQGroundItem*    pNext;
/*0x10*/ ItemPtr          Item;
/*0x20*/ int              DropID;                   // unique id
/*0x24*/ DWORD            ZoneID;
/*0x28*/ DWORD            DropSubID;                // zonefile id
/*0x30*/ CActorInterface* pActor;
/*0x38*/ char             Name[EQ_MAX_NAME];
/*0x78*/ long             Expires;
/*0x7c*/ float            Heading;
/*0x80*/ float            Pitch;
/*0x84*/ float            Roll;
/*0x88*/ float            Scale;
/*0x8c*/ float            Y;
/*0x90*/ float            X;
/*0x94*/ float            Z;
/*0x98*/ int              Weight;                   // -1 means it can't be picked up
/*0x9c*/

	DEPRECATE("Use Item instead of ID/pContents") inline ItemPtr get_ID() const { return Item; }
	DEPRECATE("Use Item instead of ID/pContents") inline void set_ID(ItemPtr ptr) { Item = ptr; }
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr ID;
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr pContents;

	ALT_MEMBER_GETTER_DEPRECATED(CActorInterface*, pActor, pSwitch, "Use pActor instead of pSwitch");
};
using GROUNDITEM = EQGroundItem;
using PGROUNDITEM = EQGroundItem*;

SIZE_CHECK(EQGroundItem, EQGroundItem_size);

class EQGroundItemListManager
{
public:
	EQGroundItem*      Top;

	static EQLIB_OBJECT EQGroundItemListManager& Instance();
};


enum ePlacementType
{
	PLACEMENT_TYPE_FLOOR,
	PLACEMENT_TYPE_WALL,
	PLACEMENT_TYPE_CEILING,
};

class [[offsetcomments]] EQPlacedItem : public CActorApplicationData
{
public:
/*0x08*/ EQPlacedItem*    pPrev;
/*0x10*/ EQPlacedItem*    pNext;
/*0x18*/ int              RecordNum;
/*0x1c*/ EqItemGuid       ItemGuid;
/*0x30*/ int              RealEstateID;
/*0x34*/ int              RealEstateItemID;
/*0x38*/ bool             bIsNPC;
/*0x3c*/ unsigned int     PlacingItemNpcID;
/*0x40*/ CLightInterface* pLight;
/*0x48*/ CActorInterface* pActor;
/*0x50*/ char             Name[EQ_ACTOR_TAG];
/*0x90*/ int              Unknown0x7c;
/*0x94*/ int              Unknown0x80;
/*0x98*/ float            Scale;
/*0x9c*/ float            Heading;
/*0xa0*/ float            Angle;
/*0xa4*/ float            Roll;
/*0xa8*/ float            Y;
/*0xac*/ float            X;
/*0xb0*/ float            Z;
/*0xb4*/ bool             bIgnoreCollisions;
/*0xb5*/ bool             bDisablePlacementRotation;
/*0xb6*/ bool             bDisableFreePlacement;
/*0xb8*/ ePlacementType   PlacementType;
/*0xbc*/ float            ScaleRangeMin;
/*0xc0*/ float            ScaleRangeMax;
/*0xc4*/ float            DefaultScale;
/*0xc8*/ float            DefaultHeading;
/*0xcc*/ float            DefaultAngle;
/*0xd0*/ float            DefaultRoll;
/*0xd4*/ int              LightType;
/*0xd8*/ float            NPCHeight;
/*0xdc*/
};

class EQPlacedItemManager
{
public:
	EQLIB_OBJECT static EQPlacedItemManager& Instance();
	EQLIB_OBJECT EQPlacedItem* GetItemByGuid(const EqItemGuid& ItemGuid);
	EQLIB_OBJECT EQPlacedItem* GetItemByRealEstateAndRealEstateItemIds(int RealEstateID, int RealEstateItemID);

	EQPlacedItem*      Top;
};

class EQObject
{
public:
	EQLIB_OBJECT EQObject(EQObject*, PlayerZoneClient*, char*, char*);
	EQLIB_OBJECT ~EQObject();

	static EQObject* top;
};

constexpr size_t EQSwitch_size = 0x108; // @sizeof(EQSwitch) :: 2026-03-16 (test) @ 0x1401F6D2F

class [[offsetcomments]] EQSwitch : public CActorApplicationData
{
public:
	EQLIB_OBJECT float GetCustomMoveDistance();
	EQLIB_OBJECT float TopSpeed(float*);
	EQLIB_OBJECT int GetSwitchDamage();
	EQLIB_OBJECT unsigned char SwitchIsNotUsable(int);
	EQLIB_OBJECT unsigned char SwitchWasOpened(int, int, PlayerClient*, bool*);
	EQLIB_OBJECT unsigned char SwitchWasOpenedActual(int, int, PlayerClient*, bool*);
	EQLIB_OBJECT unsigned int RepopFrequency();
	EQLIB_OBJECT void ChangeState(unsigned char, PlayerClient*, bool);
	EQLIB_OBJECT void LoadSwitchSounds(int);
	EQLIB_OBJECT void PostInit();
	EQLIB_OBJECT void PreInit();
	EQLIB_OBJECT void RepopSwitch();
	EQLIB_OBJECT void ResetSwitchState(unsigned char);
	EQLIB_OBJECT void UseSwitch(UINT SpawnID, int KeyID, int PickSkill, const CVector3* hitloc = nullptr);

/*0x008*/ uint32_t                 ID;
/*0x00c*/ char                     Name[0x20];
/*0x02c*/ uint8_t                  Type;
/*0x02d*/ uint8_t                  State;                    // 0 = closed, 1 = open, 2 = opening, 3 = closing
/*0x030*/ float                    DefaultY;
/*0x034*/ float                    DefaultX;
/*0x038*/ float                    DefaultZ;
/*0x03c*/ float                    DefaultHeading;
/*0x040*/ float                    DefaultDoorAngle;
/*0x044*/ float                    TopSpeed1;
/*0x048*/ float                    TopSpeed2;
/*0x04c*/ float                    Y;
/*0x050*/ float                    X;
/*0x054*/ float                    Z;
/*0x058*/ float                    Heading;
/*0x05c*/ float                    DoorAngle;
/*0x060*/ uint8_t                  DefaultState;
/*0x061*/ uint8_t                  SelfActivated;
/*0x062*/ uint8_t                  Dependent;
/*0x063*/ bool                     bTemplate;
/*0x064*/ uint8_t                  Difficulty;               // pick/disarm...
/*0x065*/ uint8_t                  AffectSlots[5];
/*0x06a*/ uint8_t                  CurrentCombination[5];
/*0x06f*/ uint8_t                  ReqCombination[5];
/*0x074*/ uint8_t                  RandomCombo;
/*0x078*/ int                      Key;
/*0x07c*/ SHORT                    ScaleFactor;              // divide by 100 to get scale multiplier
/*0x080*/ int                      SpellID;
/*0x084*/ BYTE                     TargetID[0xf];
/*0x093*/ char                     Script[0x20];
/*0x0b8*/ CActorInterface*         pActor;
/*0x0c0*/ CParticleCloudInterface* particle;
/*0x0c8*/ uint32_t                 TimeStamp;                // last time UseSwitch
/*0x0cc*/ float                    Accel;
/*0x0d0*/ uint8_t                  AlwaysActive;
/*0x0d4*/ int                      AdventureDoorID;
/*0x0d8*/ float                    ReturnY;
/*0x0dc*/ float                    ReturnX;
/*0x0e0*/ float                    ReturnZ;
/*0x0e4*/ int                      DynDoorID;
/*0x0e8*/ bool                     bHasScript;
/*0x0ec*/ int                      SomeID;
/*0x0f0*/ bool                     bUsable;
/*0x0f1*/ bool                     bRemainOpen;
/*0x0f2*/ bool                     bVisible;
/*0x0f3*/ bool                     bHeadingChanged;
/*0x0f4*/ bool                     bAllowCorpseDrag;
/*0x0f8*/ int                      RealEstateDoorID;
/*0x0fc*/ float                    unknownFloat1;
/*0x100*/ float                    unknownFloat2;
/*0x104*/ bool                     unknownBool1;
/*0x108*/
	ALT_MEMBER_GETTER_DEPRECATED(CActorInterface*, pActor, pSwitch, "Use pActor instead of pSwitch");
};

SIZE_CHECK(EQSwitch, EQSwitch_size);

using DOOR = EQSwitch;
using PDOOR = EQSwitch*;

struct SwitchGroupEntry;

// size: 0x840 @ 05-14-2021
class [[offsetcomments]] EqSwitchManager
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT EqSwitchManager();
	EQLIB_OBJECT ~EqSwitchManager();

	int GetCount() const { return NumEntries; }

	EQSwitch* GetSwitch(int index)
	{
		if (index >= 0 && index < NumEntries)
			return Switches[index];

		return nullptr;
	}

	EQSwitch* GetSwitchById(int id)
	{
		for (int i = 0; i < NumEntries; ++i)
		{
			if (Switches[i] && Switches[i]->ID == id)
				return Switches[i];
		}

		return nullptr;
	}

	EQSwitch* GetSwitchByActor(CActorInterface* pActor)
	{
		for (int i = 0; i < NumEntries; ++i)
		{
			if (Switches[i] && Switches[i]->pActor == pActor)
				return Switches[i];
		}

		return nullptr;
	}

/*0x0000*/ int          NumEntries;
/*0x0008*/ EQSwitch*    Switches[512];
/*0x1008*/
	inline EQSwitch** get_pDoor() { return Switches; }
	__declspec(property(get = get_pDoor)) EQSwitch** pDoor;
};
using DOORTABLE = EqSwitchManager;
using PDOORTABLE = EqSwitchManager*;

} // namespace eqlib
