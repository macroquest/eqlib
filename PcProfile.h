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
/*0x36d0*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x3718*/ int                                   Skill[NUM_SKILLS];
/*0x38a8*/ int                                   InnateSkill[NUM_INNATE];
/*0x390c*/ ArmorProperties                       ArmorProps[9];
/*0x39c0*/ uint32_t                              CharacterTint[9];
/*0x39e4*/ int8_t                                Gender;
/*0x39e8*/ int                                   Race;
/*0x39ec*/ int                                   Class;
/*0x39f0*/ CharacterPropertyHash                 properties;
/*0x3a00*/ int                                   Level;
/*0x3a04*/ int                                   Mana;
/*0x3a08*/ int                                   Endurance;
/*0x3a10*/ int64_t                               BaseHP;
/*0x3a18*/ int                                   BaseSTR;
/*0x3a1c*/ int                                   BaseSTA;
/*0x3a20*/ int                                   BaseCHA;
/*0x3a24*/ int                                   BaseDEX;
/*0x3a28*/ int                                   BaseINT;
/*0x3a2c*/ int                                   BaseAGI;
/*0x3a30*/ int                                   BaseWIS;
/*0x3a34*/ int8_t                                Face;
/*0x3a38*/ int                                   Plat;
/*0x3a3c*/ int                                   Gold;
/*0x3a40*/ int                                   Silver;
/*0x3a44*/ int                                   Copper;
/*0x3a48*/ int                                   CursorPlat;
/*0x3a4c*/ int                                   CursorGold;
/*0x3a50*/ int                                   CursorSilver;
/*0x3a54*/ int                                   CursorCopper;
/*0x3a58*/ int                                   _max_allowed_spell_slots;
/*0x3a5c*/ int                                   practices;
/*0x3a60*/ int                                   height;
/*0x3a64*/ int                                   width;
/*0x3a68*/ int                                   length;
/*0x3a6c*/ int                                   view_height;
/*0x3a70*/ char                                  texture_type;
/*0x3a71*/ char                                  m_armorMat;
/*0x3a72*/ char                                  m_armorVariation;
/*0x3a73*/ char                                  headType;
/*0x3a74*/ int                                   DisciplineTimer;
/*0x3a78*/ uint32_t                              MendTimer;
/*0x3a7c*/ int                                   ForageTimer;
/*0x3a80*/ int                                   thirstlevel;
/*0x3a84*/ int                                   hungerlevel;
/*0x3a88*/ eProfileType                          profileType;
/*0x3a8c*/ int                                   Shrouded;                               // templateId
/*0x3a90*/ int                                   systemId;
/*0x3a94*/ int                                   designId;
/*0x3a98*/ int                                   InventorySlotBitmask;
/*0x3a9c*/ uint32_t                              CurrentProgressionID;
/*0x3aa0*/ uint8_t                               Unknown0x3c28[0x54];
/*0x3af4*/ int                                   ParentId;
/*0x3af8*/ int                                   TattooIndex;
/*0x3afc*/ int                                   FacialAttachmentIndex;
/*0x3b00*/ //BaseProfile

	// This expects parameter of type eInventorySlot
	inline ItemPtr GetInventorySlot(int invSlot) const { return InventoryContainer.GetItem(invSlot); }
	inline const ItemContainer& GetInventory() const { return InventoryContainer; }
	inline ItemContainer& GetInventory() { return InventoryContainer; }

	inline ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemIndex(slot0, slot1, slot2); }
	inline ItemGlobalIndex CreateItemGlobalIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemGlobalIndex(eItemContainerPossessions, slot0, slot1, slot2); }
	inline ItemPtr GetItemPossession(const ItemIndex& index) const { return InventoryContainer.GetItem(index); }
	inline ItemContainer& GetItemPosessions() { return InventoryContainer; }

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

// @sizeof(PcProfile) == 0xAE60 :: 2021-09-13 (live) @ 0x8F94D3
constexpr size_t PcProfile_size = 0xAE60;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x3b00*/ WorldLocation                         BoundLocations[5];
/*0x3b64*/ ArmorProperties                       ArmorType[22];
/*0x3d1c*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x4b2c*/ uint32_t                              BodyColor[9];
/*0x4b50*/ int                                   FactionTable[2048];
/*0x6b50*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x7000*/ uint32_t                              SpellRecastTimer[15];
/*0x703c*/ uint32_t                              CombatAbilityTimers[25];
/*0x70a0*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x70a8*/ uint32_t                              LinkedSpellTimers[25];                            // we used to call this CombatAbilityTimes
/*0x710c*/ uint32_t                              ItemRecastTimers[100];
/*0x729c*/ uint32_t                              AATimers[100];
/*0x742c*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0x8d2c*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x8d54*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x8da4*/ ItemContainer                         GuildTributeBenefitItems;               // size 0x1c for sure see 8C9D9C in 21 Sep 2018
/*0x8dc0*/ ItemContainer                         GuildTrophyTributeBenefitItems;         // size 0x1c
/*0x8ddc*/ ArrayClass<CXStr>                     MercenarySaveStrings;                   // size 0x10
/*0x8dec*/ AssociatedNPCSaveStringNode*          PetSaveString;                          // for sure
/*0x8df0*/ int                                   Deity;                                  // fs see 8DE504 Jan 04 2019 test
/*0x8df4*/ bool                                  bPVPFlag;
/*0x8df5*/ uint8_t                               HighestLevel;
/*0x8df8*/ int                                   Drunkenness;                            // inebriation
/*0x8dfc*/ uint8_t                               HairColor;
/*0x8dfd*/ uint8_t                               BeardColor;
/*0x8e00*/ int                                   NpcTintIndex;
/*0x8e04*/ uint8_t                               LeftEye;
/*0x8e05*/ uint8_t                               RightEye;
/*0x8e06*/ uint8_t                               Hair;
/*0x8e07*/ uint8_t                               Beard;
/*0x8e08*/ uint8_t                               OldFace;
/*0x8e0c*/ int                                   AAPoints;
/*0x8e10*/ char                                  PocketPetSaveString[0x2000];            // 0x1000 in older clients
/*0xae10*/ CXStr                                 ItemBuffer;
/*0xae14*/ uint32_t                              LastShield;
/*0xae18*/ bool                                  bSneak;
/*0xae19*/ bool                                  bHide;
/*0xae1c*/ int                                   AAPointsSpent;
/*0xae20*/ int                                   AAPointsAssigned[6];                    // none, general, arch, class, special, focus, merc
/*0xae38*/ PetObjectData*                        pPetData;
/*0xae3c*/ int                                   PrimaryActor;
/*0xae40*/ int                                   SecondaryActor;
/*0xae44*/ bool                                  bUseTemplateFaction;
/*0xae48*/ int                                   TitlePrefixID;
/*0xae4c*/ int                                   TitleSuffixID;
/*0xae50*/ bool                                  bAreHandsMagic;
/*0xae54*/ int                                   SoleEnabledZoneID;
/*0xae58*/ int                                   NewBodyTint;
/*0xae5c*/ int                                   CurrentMercenaryIndex;
/*0xae60*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
