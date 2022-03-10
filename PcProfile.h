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
/*0x0048*/ ItemContainer                         TributeBenefitItems;
/*0x0070*/ ItemContainer                         TrophyTributeBenefitItems;
/*0x0098*/ EQ_Affect                             Buff[NUM_LONG_BUFFS];
/*0x1988*/ EQ_Affect                             ShortBuff[NUM_SHORT_BUFFS];
/*0x3a30*/ int                                   SpellBook[NUM_BOOK_SLOTS];
/*0x4bb0*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x4bf8*/ int                                   Skill[NUM_SKILLS];
/*0x4d88*/ int                                   InnateSkill[NUM_INNATE];
/*0x4dec*/ ArmorProperties                       ArmorProps[9];
/*0x4ea0*/ uint32_t                              CharacterTint[9];
/*0x4ec4*/ int8_t                                Gender;
/*0x4ec8*/ int                                   Race;
/*0x4ecc*/ int                                   Class;
/*0x4ed0*/ CharacterPropertyHash                 properties;
/*0x4ee8*/ int                                   Level;
/*0x4eec*/ int                                   Mana;
/*0x4ef0*/ int                                   Endurance;
/*0x4ef8*/ int64_t                               BaseHP;
/*0x4f00*/ int                                   BaseSTR;
/*0x4f04*/ int                                   BaseSTA;
/*0x4f08*/ int                                   BaseCHA;
/*0x4f0c*/ int                                   BaseDEX;
/*0x4f10*/ int                                   BaseINT;
/*0x4f14*/ int                                   BaseAGI;
/*0x4f18*/ int                                   BaseWIS;
/*0x4f1c*/ int8_t                                Face;
/*0x4f20*/ int                                   Plat;
/*0x4f24*/ int                                   Gold;
/*0x4f28*/ int                                   Silver;
/*0x4f2c*/ int                                   Copper;
/*0x4f30*/ int                                   CursorPlat;
/*0x4f34*/ int                                   CursorGold;
/*0x4f38*/ int                                   CursorSilver;
/*0x4f3c*/ int                                   CursorCopper;
/*0x4f40*/ int                                   _max_allowed_spell_slots;
/*0x4f44*/ int                                   practices;
/*0x4f48*/ int                                   height;
/*0x4f4c*/ int                                   width;
/*0x4f50*/ int                                   length;
/*0x4f54*/ int                                   view_height;
/*0x4f58*/ char                                  texture_type;
/*0x4f59*/ char                                  m_armorMat;
/*0x4f5a*/ char                                  m_armorVariation;
/*0x4f5b*/ char                                  headType;
/*0x4f5c*/ int                                   DisciplineTimer;
/*0x4f60*/ uint32_t                              MendTimer;
/*0x4f64*/ int                                   ForageTimer;
/*0x4f68*/ int                                   thirstlevel;
/*0x4f6c*/ int                                   hungerlevel;
/*0x4f70*/ eProfileType                          profileType;
/*0x4f74*/ int                                   Shrouded;                               // templateId
/*0x4f78*/ int                                   systemId;
/*0x4f7c*/ int                                   designId;
/*0x4f80*/ int                                   InventorySlotBitmask;
/*0x4f84*/ uint32_t                              CurrentProgressionID;
/*0x4f88*/ uint8_t                               Unknown0x3c28[0x58];
/*0x4fe0*/ int                                   ParentId;
/*0x4fe4*/ int                                   TattooIndex;
/*0x4fe8*/ int                                   FacialAttachmentIndex;
/*0x4fec*/ //BaseProfile

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

// @sizeof(PcProfile) == 0xc390 :: 2022-03-03 (live) @ 0x1406976a4
constexpr size_t PcProfile_size = 0xc390;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x4ff0*/ WorldLocation                         BoundLocations[5];
/*0x5054*/ ArmorProperties                       ArmorType[22];
/*0x520c*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x601c*/ uint32_t                              BodyColor[9];
/*0x6040*/ int                                   FactionTable[2048];
/*0x8040*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x84f0*/ uint32_t                              SpellRecastTimer[15];
/*0x852c*/ uint32_t                              CombatAbilityTimers[25];
/*0x8590*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x85a0*/ uint32_t                              LinkedSpellTimers[25];                            // we used to call this CombatAbilityTimes
/*0x8604*/ uint32_t                              ItemRecastTimers[100];
/*0x8794*/ uint32_t                              AATimers[100];
/*0x8924*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0xa224*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0xa24c*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0xa2a0*/ ItemContainer                         GuildTributeBenefitItems;
/*0xa2c8*/ ItemContainer                         GuildTrophyTributeBenefitItems;
/*0xa2f0*/ ArrayClass<CXStr>                     MercenarySaveStrings;
/*0xa308*/ AssociatedNPCSaveStringNode*          PetSaveString;
/*0xa310*/ int                                   Deity;
/*0xa314*/ bool                                  bPVPFlag;
/*0xa315*/ uint8_t                               HighestLevel;
/*0xa318*/ int                                   Drunkenness;                            // inebriation
/*0xa31c*/ uint8_t                               HairColor;
/*0xa31d*/ uint8_t                               BeardColor;
/*0xa320*/ int                                   NpcTintIndex;
/*0xa324*/ uint8_t                               LeftEye;
/*0xa325*/ uint8_t                               RightEye;
/*0xa326*/ uint8_t                               Hair;
/*0xa327*/ uint8_t                               Beard;
/*0xa328*/ uint8_t                               OldFace;
/*0xa32c*/ int                                   AAPoints;
/*0xa330*/ char                                  PocketPetSaveString[0x2000];            // 0x1000 in older clients
/*0xc330*/ CXStr                                 ItemBuffer;
/*0xc338*/ uint32_t                              LastShield;
/*0xc33c*/ bool                                  bSneak;
/*0xc33d*/ bool                                  bHide;
/*0xc340*/ int                                   AAPointsSpent;
/*0xc344*/ int                                   AAPointsAssigned[6];                    // none, general, arch, class, special, focus, merc
/*0xc360*/ PetObjectData*                        pPetData;
/*0xc368*/ int                                   PrimaryActor;
/*0xc36c*/ int                                   SecondaryActor;
/*0xc370*/ bool                                  bUseTemplateFaction;
/*0xc374*/ int                                   TitlePrefixID;
/*0xc378*/ int                                   TitleSuffixID;
/*0xc37c*/ bool                                  bAreHandsMagic;
/*0xc380*/ int                                   SoleEnabledZoneID;
/*0xc384*/ int                                   NewBodyTint;
/*0xc388*/ int                                   CurrentMercenaryIndex;
/*0xc38c*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
