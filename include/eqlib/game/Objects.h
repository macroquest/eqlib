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

constexpr size_t EQGroundItem_size = 0xA0; // @sizeof(EQGroundItem) :: 2025-11-13 (live) @ 0x1401F861D

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

/*0x08*/ uint8_t       ID;
/*0x09*/ char          Name[0x20];
/*0x29*/ uint8_t       Type;
/*0x2a*/ uint8_t       State;                    // 0 = closed, 1 = open, 2 = opening, 3 = closing
/*0x2c*/ float         DefaultY;
/*0x30*/ float         DefaultX;
/*0x34*/ float         DefaultZ;
/*0x38*/ float         DefaultHeading;
/*0x3c*/ float         DefaultDoorAngle;
/*0x40*/ float         TopSpeed1;
/*0x44*/ float         TopSpeed2;
/*0x48*/ float         Y;
/*0x4c*/ float         X;
/*0x50*/ float         Z;
/*0x54*/ float         Heading;
/*0x58*/ float         DoorAngle;
/*0x5c*/ uint8_t       DefaultState;
/*0x5d*/ uint8_t       SelfActivated;
/*0x5e*/ uint8_t       Dependent;
/*0x5f*/ bool          bTemplate;
/*0x60*/ uint8_t       Difficulty;               // pick/disarm...
/*0x61*/ uint8_t       AffectSlots[5];
/*0x66*/ uint8_t       CurrentCombination[5];
/*0x6b*/ uint8_t       ReqCombination[5];
/*0x70*/ uint8_t       RandomCombo;
/*0x74*/ int           Key;
/*0x78*/ SHORT         ScaleFactor;              // divide by 100 to get scale multiplier
/*0x7c*/ int           SpellID;
/*0x80*/ BYTE          TargetID[0x5];
/*0x85*/ char          Script[0x20];
/*0xa8*/ CActorInterface* pActor;
/*0xb0*/ CParticleCloudInterface* particle;
/*0xb8*/ uint32_t      TimeStamp;                // last time UseSwitch
/*0xbc*/ float         Accel;
/*0xc0*/ uint8_t       AlwaysActive;
/*0xc4*/ int           AdventureDoorID;
/*0xc8*/ float         ReturnY;
/*0xcc*/ float         ReturnX;
/*0xd0*/ float         ReturnZ;
/*0xd4*/ int           DynDoorID;
/*0xd8*/ bool          bHasScript;
/*0xdc*/ int           SomeID;
/*0xe0*/ bool          bUsable;
/*0xe1*/ bool          bRemainOpen;
/*0xe2*/ bool          bVisible;
/*0xe3*/ bool          bHeadingChanged;
/*0xe4*/ bool          bAllowCorpseDrag;
/*0xe8*/ int           RealEstateDoorID;
/*0xec*/ float         unknownFloat1;
/*0xf0*/ float         unknownFloat2;
/*0xf4*/
	ALT_MEMBER_GETTER_DEPRECATED(CActorInterface*, pActor, pSwitch, "Use pActor instead of pSwitch");
};
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
