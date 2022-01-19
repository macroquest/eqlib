/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

#include "Common.h"
#include "CXStr.h"
#include "EQData.h"
#include "GraphicsEngine.h"
#include "Items.h"
#include "Spells.h"

// The Profile class hierarchy (PcProfile and BaseProfile) represent the
// "profile" or stats and belongings of a character. Profiles are things that
// can be swapped out at runtime for things like monster missions (shrouds).
//
// This used to be called CHARINFO2.
// CHARINFO2
//   PcProfile -> BaseProfile

namespace eqlib {

class BaseProfile;
class PcProfile;

//============================================================================
// ProfileManager
//============================================================================

enum eProfileListType
{
	eProfileTypeNormal = 0,
	eProfileTypeMonsterMission,
};

enum eProfileType
{
	eProfileTypeMain = 0,
	eProfileTypeAlt,
	eProfileTypeMonster,
	eProfileTypeOther
};

// Two-dimensional doubly-linked-list of profiles. Profiles are
// grouped by type in the ProfileList, and then multiple profiles
// of the same type are linked together.

class [[offsetcomments]] ProfileList
{
public:
/*0x00*/ eProfileListType ListType;
/*0x04*/ BaseProfile* pFirst;
/*0x08*/ BaseProfile* pLast;
/*0x0c*/ ProfileList* pNext;
/*0x10*/ ProfileList* pPrev;
/*0x14*/
};

// Manages the list of profiles. Primarily used for accessing the
// current profile.
class [[offsetcomments]] ProfileManager
{
public:
	const ProfileList* GetCurrentProfileList() const
	{
		ProfileList* pWalk = pFirst;
		while (pWalk != nullptr)
		{
			if (pWalk->ListType == CurProfileList)
			{
				return pWalk;
			}

			pWalk = pWalk->pNext;
		}
		return nullptr;
	}

	BaseProfile* GetCurrentProfile()
	{
		const ProfileList* pList = GetCurrentProfileList();
		if (pList != nullptr)
		{
			return pList->pFirst;
		}
		return nullptr;
	}

	const BaseProfile* GetCurrentProfile() const
	{
		const ProfileList* pList = GetCurrentProfileList();
		if (pList != nullptr)
		{
			return pList->pFirst;
		}
		return nullptr;
	}

private:
/*0x00*/ ProfileList* pFirst;
/*0x04*/ eProfileListType CurProfileList;
/*0x08*/
};

//============================================================================

class CharacterPropertyHash : public HashTable<int>
{
};

//============================================================================
// BaseProfile
//============================================================================

class [[offsetcomments]] BaseProfile
{
public:
	virtual ~BaseProfile() {}
	// other virtual methods are not mapped out

/*0x0000*/ // vftable
/*0x0008*/ BaseProfile*                          nextProfile;
/*0x000c*/ BaseProfile*                          prevProfile;
/*0x0010*/ eProfileListType                      profileListType;
/*0x0014*/ ItemContainer                         InventoryContainer;
/*0x0030*/ ItemContainer                         TributeBenefitItems;
/*0x004c*/ ItemContainer                         TrophyTributeBenefitItems;
/*0x0068*/ EQ_Affect                             Buff[NUM_LONG_BUFFS];
/*0x1178*/ EQ_Affect                             ShortBuff[NUM_SHORT_BUFFS];
/*0x27d0*/ int                                   SpellBook[NUM_BOOK_SLOTS];
/*0x3950*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x3998*/ int                                   Skill[NUM_SKILLS];
/*0x3b28*/ int                                   InnateSkill[NUM_INNATE];
/*0x3b8c*/ ArmorProperties                       ArmorProps[9];
/*0x3c40*/ uint32_t                              CharacterTint[9];
/*0x3c64*/ int8_t                                Gender;
/*0x3c68*/ int                                   Race;
/*0x3c6c*/ int                                   Class;
/*0x3c70*/ CharacterPropertyHash                 properties;
/*0x3c80*/ int                                   Level;
/*0x3c84*/ int                                   Mana;
/*0x3c88*/ int                                   Endurance;
/*0x3c90*/ int64_t                               BaseHP;
/*0x3c98*/ int                                   BaseSTR;
/*0x3c9c*/ int                                   BaseSTA;
/*0x3ca0*/ int                                   BaseCHA;
/*0x3ca4*/ int                                   BaseDEX;
/*0x3ca8*/ int                                   BaseINT;
/*0x3cac*/ int                                   BaseAGI;
/*0x3cb0*/ int                                   BaseWIS;
/*0x3cb4*/ int8_t                                Face;
/*0x3cb8*/ int                                   Plat;
/*0x3cbc*/ int                                   Gold;
/*0x3cc0*/ int                                   Silver;
/*0x3cc4*/ int                                   Copper;
/*0x3cc8*/ int                                   CursorPlat;
/*0x3ccc*/ int                                   CursorGold;
/*0x3cd0*/ int                                   CursorSilver;
/*0x3cd4*/ int                                   CursorCopper;
/*0x3cd8*/ int                                   _max_allowed_spell_slots;
/*0x3cdc*/ int                                   practices;
/*0x3ce0*/ int                                   height;
/*0x3ce4*/ int                                   width;
/*0x3ce8*/ int                                   length;
/*0x3cec*/ int                                   view_height;
/*0x3cf0*/ char                                  texture_type;
/*0x3cf1*/ char                                  m_armorMat;
/*0x3cf2*/ char                                  m_armorVariation;
/*0x3cf3*/ char                                  headType;
/*0x3cf4*/ int                                   DisciplineTimer;
/*0x3cf8*/ uint32_t                              MendTimer;
/*0x3cfc*/ int                                   ForageTimer;
/*0x3d00*/ int                                   thirstlevel;
/*0x3d04*/ int                                   hungerlevel;
/*0x3d08*/ eProfileType                          profileType;
/*0x3d0c*/ int                                   Shrouded;                               // templateId
/*0x3d10*/ int                                   systemId;
/*0x3d14*/ int                                   designId;
/*0x3d18*/ int                                   InventorySlotBitmask;
/*0x3d1c*/ uint32_t                              CurrentProgressionID;
/*0x3d20*/ uint8_t                               Unknown0x3c28[0x54];
/*0x3d74*/ int                                   ParentId;
/*0x3d78*/ int                                   TattooIndex;
/*0x3d7c*/ int                                   FacialAttachmentIndex;
/*0x3d80*/ //BaseProfile

	// This expects parameter of type eInventorySlot
	inline ItemPtr GetInventorySlot(int invSlot) const { return InventoryContainer.GetItem(invSlot); }
	inline const ItemContainer& GetInventory() const { return InventoryContainer; }
	inline ItemContainer& GetInventory() { return InventoryContainer; }

	inline ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemIndex(slot0, slot1, slot2); }
	inline ItemGlobalIndex CreateItemGlobalIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemGlobalIndex(eItemContainerPossessions, slot0, slot1, slot2); }
	inline ItemPtr GetItemPossession(const ItemIndex& index) const { return InventoryContainer.GetItem(index); }
	inline ItemContainer& GetItemPosessions() { return InventoryContainer; }

	const EQ_Affect& GetEffect(int index) const { return Buff[index]; }
	EQ_Affect& GetEffect(int index) { return Buff[index]; }

	const EQ_Affect& GetTempEffect(int index) const { return ShortBuff[index]; }
	EQ_Affect& GetTempEffect(int index) { return ShortBuff[index]; }

	INVENTORYARRAY* getter_pInventoryArray() { return reinterpret_cast<INVENTORYARRAY*>(&InventoryContainer.Items[0]); }
	__declspec(property(get = getter_pInventoryArray)) INVENTORYARRAY* pInventoryArray;

	int GetRace() const { return Race; }
	int GetClass() const { return Class; }
};

//============================================================================
// PcProfile Data
//============================================================================

struct [[offsetcomments]] WorldLocation
{
/*0x00*/ uint32_t     ZoneBoundID;
/*0x04*/ float        ZoneBoundY;
/*0x08*/ float        ZoneBoundX;
/*0x0c*/ float        ZoneBoundZ;
/*0x10*/ float        ZoneBoundHeading;
/*0x14*/
};

struct [[offsetcomments]] AbilityInfo
{
/*0x00*/ int          AAIndex;
/*0x04*/ int          PointsSpent;
/*0x08*/ int          ChargeSpent;            // charges spent in the last 10 min?
/*0x0c*/
};

inline namespace deprecated {
	using PAALIST DEPRECATE("Use AALIST instead of PAALIST") = AbilityInfo*;
	using AALIST DEPRECATE("Use AbilityInfo instead of AALIST") = AbilityInfo;
}

struct [[offsetcomments]] BandolierItemInfo
{
/*0x00*/ int                 ItemID;
/*0x04*/ int                 IconID;
/*0x08*/ char                Name[EQ_MAX_NAME];
/*0x48*/
};

struct [[offsetcomments]] BandolierSet
{
/*0x000*/ char               Name[32];
/*0x020*/ BandolierItemInfo  Items[MAX_BANDOLIER_SLOTS];
/*0x140*/
};

struct [[offsetcomments]] CombatAbilityTimer : public TListNode<CombatAbilityTimer>
{
/*0x0c*/ int32_t  SpellGroup;
/*0x10*/ uint32_t ExpireTimer;
/*0x14*/
};

struct [[offsetcomments]] AssociatedNPCSaveStringNode
{
/*0x0000*/ char              SaveString[0x2000];              // 0x1000 in older clients
/*0x2000*/ AssociatedNPCSaveStringNode* pNext;
/*0x2004*/
};

// Struct not mapped yet
struct PetObjectData;

//============================================================================
// PcProfile
//============================================================================

// @sizeof(PcProfile) == 0xB0E0 :: 2022-01-13 (live) @ 0x8FBFFD
constexpr size_t PcProfile_size = 0xB0E0;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x3d80*/ WorldLocation                         BoundLocations[5];
/*0x3de4*/ ArmorProperties                       ArmorType[22];
/*0x3f9c*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x4dac*/ uint32_t                              BodyColor[9];
/*0x4dd0*/ int                                   FactionTable[2048];
/*0x6dd0*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x7280*/ uint32_t                              SpellRecastTimer[15];
/*0x72bc*/ uint32_t                              CombatAbilityTimers[25];
/*0x7320*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x7328*/ uint32_t                              LinkedSpellTimers[25];                            // we used to call this CombatAbilityTimes
/*0x738c*/ uint32_t                              ItemRecastTimers[100];
/*0x751c*/ uint32_t                              AATimers[100];
/*0x76ac*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0x8fac*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x8fd4*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x9024*/ ItemContainer                         GuildTributeBenefitItems;               // size 0x1c for sure see 8C9D9C in 21 Sep 2018
/*0x9040*/ ItemContainer                         GuildTrophyTributeBenefitItems;         // size 0x1c
/*0x905c*/ ArrayClass<CXStr>                     MercenarySaveStrings;                   // size 0x10
/*0x906c*/ AssociatedNPCSaveStringNode*          PetSaveString;                          // for sure
/*0x9070*/ int                                   Deity;                                  // fs see 8DE504 Jan 04 2019 test
/*0x9074*/ bool                                  bPVPFlag;
/*0x9075*/ uint8_t                               HighestLevel;
/*0x9078*/ int                                   Drunkenness;                            // inebriation
/*0x907c*/ uint8_t                               HairColor;
/*0x907d*/ uint8_t                               BeardColor;
/*0x9080*/ int                                   NpcTintIndex;
/*0x9084*/ uint8_t                               LeftEye;
/*0x9085*/ uint8_t                               RightEye;
/*0x9086*/ uint8_t                               Hair;
/*0x9087*/ uint8_t                               Beard;
/*0x9088*/ uint8_t                               OldFace;
/*0x908c*/ int                                   AAPoints;
/*0x9090*/ char                                  PocketPetSaveString[0x2000];            // 0x1000 in older clients
/*0xb090*/ CXStr                                 ItemBuffer;
/*0xb094*/ uint32_t                              LastShield;
/*0xb098*/ bool                                  bSneak;
/*0xb099*/ bool                                  bHide;
/*0xb09c*/ int                                   AAPointsSpent;
/*0xb0a0*/ int                                   AAPointsAssigned[6];                    // none, general, arch, class, special, focus, merc
/*0xb0b8*/ PetObjectData*                        pPetData;
/*0xb0bc*/ int                                   PrimaryActor;
/*0xb0c0*/ int                                   SecondaryActor;
/*0xb0c4*/ bool                                  bUseTemplateFaction;
/*0xb0c8*/ int                                   TitlePrefixID;
/*0xb0cc*/ int                                   TitleSuffixID;
/*0xb0d0*/ bool                                  bAreHandsMagic;
/*0xb0d4*/ int                                   SoleEnabledZoneID;
/*0xb0d8*/ int                                   NewBodyTint;
/*0xb0dc*/ int                                   CurrentMercenaryIndex;
/*0xb0e0*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
