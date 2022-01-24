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
/*0x08*/ BaseProfile* pFirst;
/*0x10*/ BaseProfile* pLast;
/*0x18*/ ProfileList* pNext;
/*0x20*/ ProfileList* pPrev;
/*0x28*/
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
/*0x08*/ eProfileListType CurProfileList;
/*0x0c*/
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
/*0x0010*/ BaseProfile*                          prevProfile;
/*0x0018*/ eProfileListType                      profileListType;
/*0x0020*/ ItemContainer                         InventoryContainer;
/*0x0040*/ ItemContainer                         TributeBenefitItems;
/*0x0060*/ ItemContainer                         TrophyTributeBenefitItems;
/*0x0080*/ EQ_Affect                             Buff[NUM_LONG_BUFFS];
/*0x1190*/ EQ_Affect                             ShortBuff[NUM_SHORT_BUFFS];
/*0x27e8*/ int                                   SpellBook[NUM_BOOK_SLOTS];
/*0x3968*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x39b0*/ int                                   Skill[NUM_SKILLS];
/*0x3b40*/ int                                   InnateSkill[NUM_INNATE];
/*0x3ba4*/ ArmorProperties                       ArmorProps[9];
/*0x3c58*/ uint32_t                              CharacterTint[9];
/*0x3c7c*/ int8_t                                Gender;
/*0x3c80*/ int                                   Race;
/*0x3c84*/ int                                   Class;
/*0x3c88*/ CharacterPropertyHash                 properties;
/*0x3ca0*/ int                                   Level;
/*0x3ca4*/ int                                   Mana;
/*0x3ca8*/ int                                   Endurance;
/*0x3cb0*/ int64_t                               BaseHP;
/*0x3cb8*/ int                                   BaseSTR;
/*0x3cbc*/ int                                   BaseSTA;
/*0x3cc0*/ int                                   BaseCHA;
/*0x3cc4*/ int                                   BaseDEX;
/*0x3cc8*/ int                                   BaseINT;
/*0x3ccc*/ int                                   BaseAGI;
/*0x3cd0*/ int                                   BaseWIS;
/*0x3cd4*/ int8_t                                Face;
/*0x3cd8*/ int                                   Plat;
/*0x3cdc*/ int                                   Gold;
/*0x3ce0*/ int                                   Silver;
/*0x3ce4*/ int                                   Copper;
/*0x3ce8*/ int                                   CursorPlat;
/*0x3cec*/ int                                   CursorGold;
/*0x3cf0*/ int                                   CursorSilver;
/*0x3cf4*/ int                                   CursorCopper;
/*0x3cf8*/ int                                   _max_allowed_spell_slots;
/*0x3cfc*/ int                                   practices;
/*0x3d00*/ int                                   height;
/*0x3d04*/ int                                   width;
/*0x3d08*/ int                                   length;
/*0x3d0c*/ int                                   view_height;
/*0x3d10*/ char                                  texture_type;
/*0x3d11*/ char                                  m_armorMat;
/*0x3d12*/ char                                  m_armorVariation;
/*0x3d13*/ char                                  headType;
/*0x3d14*/ int                                   DisciplineTimer;
/*0x3d18*/ uint32_t                              MendTimer;
/*0x3d1c*/ int                                   ForageTimer;
/*0x3d20*/ int                                   thirstlevel;
/*0x3d24*/ int                                   hungerlevel;
/*0x3d28*/ eProfileType                          profileType;
/*0x3d2c*/ int                                   Shrouded;                               // templateId
/*0x3d30*/ int                                   systemId;
/*0x3d34*/ int                                   designId;
/*0x3d38*/ int                                   InventorySlotBitmask;
/*0x3d3c*/ uint32_t                              CurrentProgressionID;
/*0x3d40*/ uint8_t                               Unknown0x3c28[0x54];
/*0x3d94*/ int                                   ParentId;
/*0x3d98*/ int                                   TattooIndex;
/*0x3d9c*/ int                                   FacialAttachmentIndex;
/*0x3da0*/ //BaseProfile

	// This expects parameter of type eInventorySlot
	inline ItemPtr GetInventorySlot(int invSlot) const { return InventoryContainer.GetItem(invSlot); }
	inline const ItemContainer& GetInventory() const { return InventoryContainer; }
	inline ItemContainer& GetInventory() { return InventoryContainer; }

	inline ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemIndex(slot0, slot1, slot2); }
	inline ItemGlobalIndex CreateItemGlobalIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemGlobalIndex(eItemContainerPossessions, slot0, slot1, slot2); }
	inline ItemPtr GetItemPossession(const ItemIndex& index) const { return InventoryContainer.GetItem(index); }
	inline ItemContainer& GetItemPosessions() { return InventoryContainer; }

	inline int GetMemorizedSpell(int index) const { return MemorizedSpells[index]; }

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
/*0x18*/ int32_t  SpellGroup;
/*0x1c*/ uint32_t ExpireTimer;
/*0x20*/
};

struct [[offsetcomments]] AssociatedNPCSaveStringNode
{
/*0x0000*/ char              SaveString[0x2000];              // 0x1000 in older clients
/*0x2000*/ AssociatedNPCSaveStringNode* pNext;
/*0x2008*/
};

// Struct not mapped yet
struct PetObjectData;

//============================================================================
// PcProfile
//============================================================================

// @sizeof(PcProfile) == 0x0B158 :: 2022-01-11 (test) @ 0x140690DE4
constexpr size_t PcProfile_size = 0xB158;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x3da0*/ WorldLocation                         BoundLocations[5];
/*0x3e04*/ ArmorProperties                       ArmorType[22];
/*0x3fbc*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x4dcc*/ uint32_t                              BodyColor[9];
/*0x4df0*/ int                                   FactionTable[2048];
/*0x6df0*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x72a0*/ uint32_t                              SpellRecastTimer[15];
/*0x72dc*/ uint32_t                              CombatAbilityTimers[25];
/*0x7340*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x7350*/ uint32_t                              LinkedSpellTimers[25];                            // we used to call this CombatAbilityTimes
/*0x73b4*/ uint32_t                              ItemRecastTimers[100];
/*0x7544*/ uint32_t                              AATimers[100];
/*0x76d4*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0x8fd4*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x8ffc*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x9050*/ ItemContainer                         GuildTributeBenefitItems;               // size 0x1c for sure see 8C9D9C in 21 Sep 2018
/*0x9070*/ ItemContainer                         GuildTrophyTributeBenefitItems;         // size 0x1c
/*0x9090*/ ArrayClass<CXStr>                     MercenarySaveStrings;                   // size 0x10
/*0x90a8*/ AssociatedNPCSaveStringNode*          PetSaveString;                          // for sure
/*0x90b0*/ int                                   Deity;                                  // fs see 8DE504 Jan 04 2019 test
/*0x90b4*/ bool                                  bPVPFlag;
/*0x90b5*/ uint8_t                               HighestLevel;
/*0x90b8*/ int                                   Drunkenness;                            // inebriation
/*0x90bc*/ uint8_t                               HairColor;
/*0x90bd*/ uint8_t                               BeardColor;
/*0x90c0*/ int                                   NpcTintIndex;
/*0x90c4*/ uint8_t                               LeftEye;
/*0x90c5*/ uint8_t                               RightEye;
/*0x90c6*/ uint8_t                               Hair;
/*0x90c7*/ uint8_t                               Beard;
/*0x90c8*/ uint8_t                               OldFace;
/*0x90cc*/ int                                   AAPoints;
/*0x90d0*/ char                                  PocketPetSaveString[0x2000];            // 0x1000 in older clients
/*0xb0d0*/ CXStr                                 ItemBuffer;
/*0xb0d8*/ uint32_t                              LastShield;
/*0xb0dc*/ bool                                  bSneak;
/*0xb0dd*/ bool                                  bHide;
/*0xb0e0*/ int                                   AAPointsSpent;
/*0xb0e4*/ int                                   AAPointsAssigned[6];                    // none, general, arch, class, special, focus, merc
/*0xb100*/ PetObjectData*                        pPetData;
/*0xb108*/ int                                   PrimaryActor;
/*0xb10c*/ int                                   SecondaryActor;
/*0xb110*/ bool                                  bUseTemplateFaction;
/*0xb114*/ int                                   TitlePrefixID;
/*0xb118*/ int                                   TitleSuffixID;
/*0xb11c*/ bool                                  bAreHandsMagic;
/*0xb120*/ int                                   SoleEnabledZoneID;
/*0xb124*/ int                                   NewBodyTint;
/*0xb128*/ int                                   CurrentMercenaryIndex;
/*0xb12c*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
