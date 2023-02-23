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
// BaseProfile
//============================================================================

class [[offsetcomments]] BaseProfile
{
public:
	virtual ~BaseProfile() {}
	// other virtual methods are not mapped out

/*0x0000*/ // vftable
/*0x0004*/ uint32_t                              padding;
/*0x0008*/ BaseProfile*                          nextProfile;
/*0x000c*/ BaseProfile*                          prevProfile;
/*0x0010*/ eProfileListType                      profileListType;
/*0x0014*/ int                                   Unknown0x14;
/*0x0018*/ ItemContainer                         InventoryContainer;
/*0x0050*/ ItemContainer                         TributeBenefitItems;
/*0x0088*/ ItemContainer                         TrophyTributeBenefitItems;
/*0x00c0*/ EQ_Affect                             Buffs[MAX_TOTAL_BUFFS];
/*0x2218*/ uint32_t                              BuffCasterIDs[MAX_TOTAL_BUFFS];
/*0x239c*/ uint32_t                              DiseaseSpreadTimers[MAX_TOTAL_BUFFS];
/*0x2520*/ int                                   SpellBook[NUM_BOOK_SLOTS];
/*0x3060*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x30a0*/ int                                   Skill[NUM_SKILLS];
/*0x3230*/ int                                   InnateSkill[NUM_INNATE];
/*0x3294*/ ArmorProperties                       ArmorProps[9];
/*0x3348*/ uint32_t                              CharacterTint[9];
/*0x336c*/ int8_t                                Gender;
/*0x3370*/ int                                   Race;
/*0x3374*/ int                                   Class;
/*0x3378*/ CharacterPropertyHash                 properties;
/*0x3388*/ int                                   Level;
/*0x338c*/ int                                   Mana;
/*0x3390*/ int                                   Endurance;
/*0x3394*/ int                                   BaseHP; // emu: 64 -> 32
/*0x3398*/ int                                   BaseSTR;
/*0x339c*/ int                                   BaseSTA;
/*0x33a0*/ int                                   BaseCHA;
/*0x33a4*/ int                                   BaseDEX;
/*0x33a8*/ int                                   BaseINT;
/*0x33ac*/ int                                   BaseAGI;
/*0x33b0*/ int                                   BaseWIS;
/*0x33b4*/ int8_t                                Face;
/*0x33b8*/ int                                   Plat;
/*0x33bc*/ int                                   Gold;
/*0x33c0*/ int                                   Silver;
/*0x33c4*/ int                                   Copper;
/*0x33c8*/ int                                   CursorPlat;
/*0x33cc*/ int                                   CursorGold;
/*0x33d0*/ int                                   CursorSilver;
/*0x33d4*/ int                                   CursorCopper;
/*0x33d8*/ int                                   max_allowed_spell_slots;
/*0x33dc*/ int                                   practices;
/*0x33e0*/ int                                   height;
/*0x33e4*/ int                                   width;
/*0x33e8*/ int                                   length;
/*0x33ec*/ int                                   view_height;
/*0x33f0*/ char                                  texture_type;
/*0x33f1*/ char                                  m_armorMat;
/*0x33f2*/ char                                  m_armorVariation;
/*0x33f3*/ char                                  headType;
/*0x33f4*/ char                                  canEditFace;
/*0x33f8*/ int                                   DisciplineTimer;
/*0x33fc*/ uint32_t                              MendTimer;
/*0x3400*/ int                                   thirstlevel;
/*0x3404*/ int                                   hungerlevel;
/*0x3408*/ int                                   potionCount;
/*0x340c*/ eProfileType                          profileType;
/*0x3410*/ int                                   Shrouded;                               // templateId
/*0x3414*/ int                                   systemId;
/*0x3418*/ int                                   designId;
/*0x341c*/ int                                   InventorySlotBitmask;
/*0x3420*/ uint32_t                              CurrentProgressionID;
/*0x3424*/ uint8_t                               Unknown0x3c28[0x57];
/*0x347c*/ int                                   ParentId;
/*0x3480*/ int                                   TattooIndex;
/*0x3484*/ int                                   FacialAttachmentIndex;
/*0x3488*/ //BaseProfile

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
		if ((int)index >= NUM_LONG_BUFFS + NUM_SHORT_BUFFS)
			return Buffs[0];

		return Buffs[index];
	}
	EQ_Affect& GetEffect(uint32_t index) { return const_cast<EQ_Affect&>(const_cast<const BaseProfile*>(this)->GetEffect(index)); }

	const EQ_Affect& GetTempEffect(uint32_t index) const { return GetEffect(index + NUM_LONG_BUFFS); }
	EQ_Affect& GetTempEffect(uint32_t index) { return GetEffect(index + NUM_LONG_BUFFS); }

	int GetMaxEffects() const { return NUM_LONG_BUFFS + NUM_SHORT_BUFFS; }

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

//============================================================================
// PcProfile
//============================================================================

// @sizeof(PcProfile) == 0x9950 :: 2013-05-10 (emu) @ 0x7BEC13
constexpr size_t PcProfile_size = 0x9950;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x3488*/ WorldLocation                         BoundLocations[5];
/*0x34ec*/ ArmorProperties                       ArmorType[22];
/*0x36a4*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x44b4*/ uint32_t                              BodyColor[9];
/*0x44d8*/ int                                   FactionTable[2048];
/*0x64d8*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x6988*/ uint32_t                              SpellRecastTimer[13];
/*0x69bc*/ uint32_t                              CombatAbilityTimers[NUM_COMBAT_ABILITY_TIMERS];
///*0x6a28*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x6a0c*/ uint32_t                              LinkedSpellTimers[20];
/*0x6a5c*/ uint32_t                              ItemRecastTimers[100];
/*0x6bec*/ uint32_t                              AATimers[100];
/*0x6d7c*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0x867c*/ BandolierItemInfo                     PotionBelt[5]; // emu
///*0x86b4*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x87e4*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x8834*/ uint32_t                              Unknown0x8834[11];
/*0x8860*/ ItemContainer                         GuildTributeBenefitItems;
/*0x8898*/ ItemContainer                         GuildTrophyTributeBenefitItems;
/*0x88d0*/ ArrayClass<CXStr>                     MercenarySaveStrings;
/*0x88e0*/ AssociatedNPCSaveStringNode*          PetSaveString; // 88E0
/*0x88e4*/ int                                   Deity;
/*0x88e8*/ bool                                  bPVPFlag;
/*0x88e9*/ uint8_t                               HighestLevel;
/*0x88ec*/ int                                   Drunkenness;                            // inebriation
/*0x88f0*/ uint8_t                               HairColor;
/*0x88f1*/ uint8_t                               BeardColor;
/*0x88f4*/ int                                   NpcTintIndex;
/*0x88f8*/ uint8_t                               LeftEye;
/*0x88f9*/ uint8_t                               RightEye;
/*0x88fa*/ uint8_t                               Hair;
/*0x88fb*/ uint8_t                               Beard;
/*0x88fc*/ uint8_t                               OldFace;
/*0x8900*/ int                                   AAPoints;
/*0x8904*/ char                                  PocketPetSaveString[0x1000];
/*0x9904*/ CXStr                                 ItemBuffer;
/*0x9908*/ uint32_t                              LastShield;
/*0x990c*/ bool                                  bSneak;
/*0x990d*/ bool                                  bHide;
/*0x9910*/ int                                   AAPointsSpent;
/*0x9914*/ int                                   AAPointsAssigned[6];                    // total, general, arch, class, special, focus
/*0x992c*/ int                                   PrimaryActor;
/*0x9930*/ int                                   SecondaryActor;
/*0x9934*/ bool                                  bUseTemplateFaction;
/*0x9938*/ int                                   TitlePrefixID;
/*0x993c*/ int                                   TitleSuffixID;
/*0x9940*/ bool                                  bAreHandsMagic;
/*0x9944*/ int                                   SoleEnabledZoneID;
/*0x9948*/ int                                   NewBodyTint;
/*0x994c*/ int                                   CurrentMercenaryIndex;
/*0x9950*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
