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

class [[offsetcomments]] EQGroundItem
{
public:
/*0x00*/ EQGroundItem*    pPrev;
/*0x04*/ EQGroundItem*    pNext;
/*0x08*/ ItemPtr          Item;
/*0x0c*/ int              DropID;                   // unique id
/*0x10*/ DWORD            ZoneID;
/*0x14*/ DWORD            DropSubID;                // zonefile id
/*0x18*/ CActorInterface* pActor;
/*0x1c*/ char             Name[EQ_MAX_NAME];
/*0x5c*/ long             Expires;
/*0x60*/ float            Heading;
/*0x64*/ float            Pitch;
/*0x68*/ float            Roll;
/*0x6c*/ float            Scale;
/*0x70*/ float            Y;
/*0x74*/ float            X;
/*0x78*/ float            Z;
/*0x7c*/ int              Weight;                   // -1 means it can't be picked up
/*0x80*/

	DEPRECATE("Use Item instead of ID/pContents") inline ItemPtr get_ID() const { return Item; }
	DEPRECATE("Use Item instead of ID/pContents") inline void set_ID(ItemPtr ptr) { Item = ptr; }
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr ID;
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr pContents;

	ALT_MEMBER_GETTER_DEPRECATED(CActorInterface*, pActor, pSwitch, "Use pActor instead of pSwitch");
};
using GROUNDITEM = EQGroundItem;
using PGROUNDITEM = EQGroundItem*;

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
/*0x04*/ EQPlacedItem*    pPrev;
/*0x08*/ EQPlacedItem*    pNext;
/*0x0c*/ int              RecordNum;
/*0x10*/ EqItemGuid       ItemGuid;
/*0x24*/ int              RealEstateID;
/*0x28*/ int              RealEstateItemID;
/*0x2c*/ bool             bIsNPC;
/*0x30*/ unsigned int     PlacingItemNpcID;
/*0x34*/ CLightInterface* pLight;
/*0x38*/ CActorInterface* pActor;
/*0x3c*/ char             Name[EQ_ACTOR_TAG];
/*0x7c*/ int              Unknown0x7c;
/*0x80*/ int              Unknown0x80;
/*0x84*/ float            Scale;
/*0x88*/ float            Heading;
/*0x8c*/ float            Angle;
/*0x90*/ float            Roll;
/*0x94*/ float            Y;
/*0x98*/ float            X;
/*0x9c*/ float            Z;
/*0xa0*/ bool             bIgnoreCollisions;
/*0xa1*/ bool             bDisablePlacementRotation;
/*0xa2*/ bool             bDisableFreePlacement;
/*0xa4*/ ePlacementType   PlacementType;
/*0xa8*/ float            ScaleRangeMin;
/*0xac*/ float            ScaleRangeMax;
/*0xb0*/ float            DefaultScale;
/*0xb4*/ float            DefaultHeading;
/*0xb8*/ float            DefaultAngle;
/*0xbc*/ float            DefaultRoll;
/*0xc0*/ int              LightType;
/*0xc4*/ float            NPCHeight;
/*0xc8*/
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

/*0x04*/ uint8_t       ObjType;                  // always 5
/*0x05*/ uint8_t       ID;
/*0x06*/ char          Name[0x20];
/*0x26*/ uint8_t       Type;
/*0x27*/ uint8_t       State;                    // 0 = closed, 1 = open, 2 = opening, 3 = closing
/*0x28*/ float         DefaultY;
/*0x2c*/ float         DefaultX;
/*0x30*/ float         DefaultZ;
/*0x34*/ float         DefaultHeading;
/*0x38*/ float         DefaultDoorAngle;
/*0x3c*/ float         TopSpeed1;
/*0x40*/ float         TopSpeed2;
/*0x44*/ float         Y;
/*0x48*/ float         X;
/*0x4c*/ float         Z;
/*0x50*/ float         Heading;
/*0x54*/ float         DoorAngle;
/*0x58*/ uint8_t       DefaultState;
/*0x59*/ uint8_t       SelfActivated;
/*0x5a*/ uint8_t       Dependent;
/*0x5b*/ bool          bTemplate;
/*0x5c*/ uint8_t       Difficulty;               // pick/disarm...
/*0x5d*/ uint8_t       AffectSlots[5];
/*0x62*/ uint8_t       CurrentCombination[5];
/*0x67*/ uint8_t       ReqCombination[5];
/*0x6c*/ uint8_t       RandomCombo;
/*0x70*/ int           Key;
/*0x74*/ uint16_t      ScaleFactor;              // divide by 100 to get scale multiplier
/*0x78*/ int           SpellID;
/*0x7c*/ uint8_t       TargetID[0x5];
/*0x81*/ char          Script[0x20];
/*0xa4*/ CActorInterface* pActor;
/*0xa8*/ CParticleCloudInterface* particle;
/*0xac*/ uint32_t      TimeStamp;                // last time UseSwitch
/*0xb0*/ float         Accel;
/*0xb4*/ uint8_t       AlwaysActive;
/*0xb8*/ int           AdventureDoorID;
/*0xbc*/ float         ReturnY;
/*0xc0*/ float         ReturnX;
/*0xc4*/ float         ReturnZ;
/*0xc8*/ int           DynDoorID;
/*0xcc*/ bool          bHasScript;
/*0xd0*/ int           SomeID;
/*0xd4*/ bool          bUsable;
/*0xd5*/ bool          bRemainOpen;
/*0xd6*/ bool          bVisible;
/*0xd7*/ bool          bHeadingChanged;
/*0xd8*/ bool          bAllowCorpseDrag;
/*0xdc*/ int           RealEstateDoorID;
/*0xe0*/

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

/*0x000*/ int          NumEntries;
/*0x004*/ EQSwitch*    Switches[512];
/*0x804*/

	EQSwitch** get_pDoor() { return Switches; }
	__declspec(property(get = get_pDoor)) EQSwitch** pDoor;
};
using DOORTABLE = EqSwitchManager;
using PDOORTABLE = EqSwitchManager*;

} // namespace eqlib
