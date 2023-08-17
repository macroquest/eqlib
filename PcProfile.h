/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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
/*0x0098*/ SoeUtil::Array<EQ_Affect>             Buffs;
/*0x00b0*/ int                                   SpellBook[NUM_BOOK_SLOTS];
/*0x1230*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x1278*/ int                                   Skill[NUM_SKILLS];
/*0x1408*/ int                                   InnateSkill[NUM_INNATE];
/*0x146c*/ ArmorProperties                       ArmorProps[9];
/*0x1520*/ uint32_t                              CharacterTint[9];
/*0x1544*/ int8_t                                Gender;
/*0x1548*/ int                                   Race;
/*0x154c*/ int                                   Class;
/*0x1550*/ CharacterPropertyHash                 properties;
/*0x1568*/ int                                   Level;
/*0x156c*/ int                                   Mana;
/*0x1570*/ int                                   Endurance;
/*0x1578*/ int64_t                               BaseHP;
/*0x1580*/ int                                   BaseSTR;
/*0x1584*/ int                                   BaseSTA;
/*0x1588*/ int                                   BaseCHA;
/*0x158c*/ int                                   BaseDEX;
/*0x1590*/ int                                   BaseINT;
/*0x1594*/ int                                   BaseAGI;
/*0x1598*/ int                                   BaseWIS;
/*0x159c*/ int8_t                                Face;
/*0x15a0*/ int                                   Plat;
/*0x15a4*/ int                                   Gold;
/*0x15a8*/ int                                   Silver;
/*0x15ac*/ int                                   Copper;
/*0x15b0*/ int                                   CursorPlat;
/*0x15b4*/ int                                   CursorGold;
/*0x15b8*/ int                                   CursorSilver;
/*0x15bc*/ int                                   CursorCopper;
/*0x15c0*/ int                                   _max_allowed_spell_slots;
/*0x15c4*/ int                                   practices;
/*0x15c8*/ int                                   height;
/*0x15cc*/ int                                   width;
/*0x15d0*/ int                                   length;
/*0x15d4*/ int                                   view_height;
/*0x15d8*/ char                                  texture_type;
/*0x15d9*/ char                                  m_armorMat;
/*0x15da*/ char                                  m_armorVariation;
/*0x15db*/ char                                  headType;
/*0x15dc*/ int                                   DisciplineTimer;
/*0x15e0*/ uint32_t                              MendTimer;
/*0x15e4*/ int                                   ForageTimer;
/*0x15e8*/ int                                   thirstlevel;
/*0x15ec*/ int                                   hungerlevel;
/*0x15f0*/ bool                                  bIsHeadStartCharacter;
/*0x15f4*/ int                                   StartingCity;
/*0x15f8*/ eProfileType                          profileType;
/*0x15fc*/ int                                   Shrouded;                               // templateId
/*0x1600*/ int                                   systemId;
/*0x1604*/ int                                   designId;
/*0x1608*/ int                                   InventorySlotBitmask;
/*0x160c*/ uint32_t                              CurrentProgressionID;
/*0x1610*/ uint8_t                               Unknown0x3c28[0x58];
/*0x1668*/ int                                   ParentId;
/*0x166c*/ int                                   TattooIndex;
/*0x1670*/ int                                   FacialAttachmentIndex;
/*0x1674*/ ItemIndex                             StatKeyRingItemIndex[eKeyRingTypeCount];
/*0x1694*/ //BaseProfile

	// This expects parameter of type eInventorySlot
	inline ItemPtr GetInventorySlot(int invSlot) const { return InventoryContainer.GetItem(invSlot); }
	inline const ItemContainer& GetInventory() const { return InventoryContainer; }
	inline ItemContainer& GetInventory() { return InventoryContainer; }

	inline ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemIndex(slot0, slot1, slot2); }
	inline ItemGlobalIndex CreateItemGlobalIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return InventoryContainer.CreateItemGlobalIndex(eItemContainerPossessions, slot0, slot1, slot2); }
	inline ItemPtr GetItemPossession(const ItemIndex& index) const { return InventoryContainer.GetItem(index); }
	inline ItemContainer& GetItemPosessions() { return InventoryContainer; }

	inline int GetMemorizedSpell(int index) const { return MemorizedSpells[index]; }

	int GetRace() const { return Race; }
	int GetClass() const { return Class; }

	// Can be used to access both short and long buffs
	const EQ_Affect& GetEffect(uint32_t index) const
	{
		if ((int)index >= Buffs.GetSize())
			return Buffs[0];

		return Buffs[index];
	}
	EQ_Affect& GetEffect(uint32_t index) { return const_cast<EQ_Affect&>(const_cast<const BaseProfile*>(this)->GetEffect(index)); }

	const EQ_Affect& GetTempEffect(uint32_t index) const { return GetEffect(index + NUM_LONG_BUFFS); }
	EQ_Affect& GetTempEffect(uint32_t index) { return GetEffect(index + NUM_LONG_BUFFS); }

	int GetMaxEffects() const { return Buffs.GetSize(); }

	// Buffs array was converted to a dynamic array on 2022-04-14. Instead of relying on the memory layout of the buffs,
	// plugin authors should instead call GetEffect, GetTempEffect, and GetMaxEffects() as necessary.r

	// EQ_Affect Buff[NUM_LONG_BUFFS];
	DEPRECATE("Use GetEffect(index) instead of directly accessing member variable Buff[index]")
		EQ_Affect(&getter_Buff() const)[NUM_LONG_BUFFS] { return (*(EQ_Affect(*)[NUM_LONG_BUFFS])(&Buffs[0])); }
		__declspec(property(get = getter_Buff)) const EQ_Affect(&Buff)[NUM_LONG_BUFFS];

	// EQ_Affect ShortBuff[NUM_SHORT_BUFFS];
	DEPRECATE("Use GetTempEffect(index) instead of directly accessing member variable ShortBuff[index]")
		EQ_Affect(&getter_ShortBuff() const)[NUM_SHORT_BUFFS] { return (*(EQ_Affect(*)[NUM_SHORT_BUFFS])(&Buffs[NUM_LONG_BUFFS])); }
		__declspec(property(get = getter_ShortBuff)) const EQ_Affect(&ShortBuff)[NUM_SHORT_BUFFS];

	// INVENTORYARRAY* pInventoryArray
	DEPRECATE("Use GetInventorySlot(slot) instead directly accessing member variable pInventoryrArray");
	INVENTORYARRAY* getter_pInventoryArray() { return reinterpret_cast<INVENTORYARRAY*>(&InventoryContainer.Items[0]); }
	__declspec(property(get = getter_pInventoryArray)) INVENTORYARRAY* pInventoryArray;
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

// @sizeof(PcProfile) == 0x6a78 :: 2023-08-14 (live) @ 0x140613214
constexpr size_t PcProfile_size = 0x6a78;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x1698*/ WorldLocation                         BoundLocations[5];
/*0x16fc*/ ArmorProperties                       ArmorType[22];
/*0x18b4*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x26c4*/ uint32_t                              BodyColor[9];
/*0x26e8*/ int                                   FactionTable[2048];
/*0x46e8*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x4b98*/ uint32_t                              SpellRecastTimer[15];
/*0x4bd4*/ uint32_t                              CombatAbilityTimers[NUM_COMBAT_ABILITY_TIMERS];
/*0x4c38*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x4c48*/ uint32_t                              LinkedSpellTimers[25];                            // we used to call this CombatAbilityTimes
/*0x4cac*/ uint32_t                              ItemRecastTimers[100];
/*0x4e3c*/ uint32_t                              AATimers[100];
/*0x4fcc*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0x68cc*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x68f4*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x6948*/ ItemContainer                         GuildTributeBenefitItems;
/*0x6970*/ ItemContainer                         GuildTrophyTributeBenefitItems;
/*0x6998*/ ItemContainer                         TradeskillDepotItems;
/*0x69c0*/ ArrayClass<CXStr>                     MercenarySaveStrings;
/*0x69d8*/ AssociatedNPCSaveStringNode*          PetSaveString;
/*0x69e0*/ int                                   Deity;
/*0x69e4*/ bool                                  bPVPFlag;
/*0x69e5*/ uint8_t                               HighestLevel;
/*0x69e8*/ int                                   Drunkenness;                            // inebriation
/*0x69ec*/ uint8_t                               HairColor;
/*0x69ed*/ uint8_t                               BeardColor;
/*0x69f0*/ int                                   NpcTintIndex;
/*0x69f4*/ uint8_t                               LeftEye;
/*0x69f5*/ uint8_t                               RightEye;
/*0x69f6*/ uint8_t                               Hair;
/*0x69f7*/ uint8_t                               Beard;
/*0x69f8*/ uint8_t                               OldFace;
/*0x69fc*/ int                                   AAPoints;
/*0x6a00*/ SoeUtil::String                       PocketPetSaveString;
/*0x6a18*/ CXStr                                 ItemBuffer;
/*0x6a20*/ uint32_t                              LastShield;
/*0x6a24*/ bool                                  bSneak;
/*0x6a25*/ bool                                  bHide;
/*0x6a28*/ int                                   AAPointsSpent;
/*0x6a2c*/ int                                   AAPointsAssigned[6];                    // none, general, arch, class, special, focus, merc
/*0x6a48*/ PetObjectData*                        pPetData;
/*0x6a50*/ int                                   PrimaryActor;
/*0x6a54*/ int                                   SecondaryActor;
/*0x6a58*/ bool                                  bUseTemplateFaction;
/*0x6a5c*/ int                                   TitlePrefixID;
/*0x6a60*/ int                                   TitleSuffixID;
/*0x6a64*/ bool                                  bAreHandsMagic;
/*0x6a68*/ int                                   SoleEnabledZoneID;
/*0x6a6c*/ int                                   NewBodyTint;
/*0x6a70*/ int                                   CurrentMercenaryIndex;
/*0x6a74*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
