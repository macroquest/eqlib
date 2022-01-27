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
/*0x11a8*/ EQ_Affect                             ShortBuff[NUM_SHORT_BUFFS];
/*0x2800*/ int                                   SpellBook[NUM_BOOK_SLOTS];
/*0x3980*/ int                                   MemorizedSpells[MAX_MEMORIZED_SPELLS];
/*0x39c8*/ int                                   Skill[NUM_SKILLS];
/*0x3b58*/ int                                   InnateSkill[NUM_INNATE];
/*0x3bbc*/ ArmorProperties                       ArmorProps[9];
/*0x3c70*/ uint32_t                              CharacterTint[9];
/*0x3c94*/ int8_t                                Gender;
/*0x3c98*/ int                                   Race;
/*0x3c9c*/ int                                   Class;
/*0x3ca0*/ CharacterPropertyHash                 properties;
/*0x3cb8*/ int                                   Level;
/*0x3cbc*/ int                                   Mana;
/*0x3cc0*/ int                                   Endurance;
/*0x3cc8*/ int64_t                               BaseHP;
/*0x3cd0*/ int                                   BaseSTR;
/*0x3cd4*/ int                                   BaseSTA;
/*0x3cd8*/ int                                   BaseCHA;
/*0x3cdc*/ int                                   BaseDEX;
/*0x3ce0*/ int                                   BaseINT;
/*0x3ce4*/ int                                   BaseAGI;
/*0x3ce8*/ int                                   BaseWIS;
/*0x3cec*/ int8_t                                Face;
/*0x3cf0*/ int                                   Plat;
/*0x3cf4*/ int                                   Gold;
/*0x3cf8*/ int                                   Silver;
/*0x3cfc*/ int                                   Copper;
/*0x3d00*/ int                                   CursorPlat;
/*0x3d04*/ int                                   CursorGold;
/*0x3d08*/ int                                   CursorSilver;
/*0x3d0c*/ int                                   CursorCopper;
/*0x3d10*/ int                                   _max_allowed_spell_slots;
/*0x3d14*/ int                                   practices;
/*0x3d18*/ int                                   height;
/*0x3d1c*/ int                                   width;
/*0x3d20*/ int                                   length;
/*0x3d24*/ int                                   view_height;
/*0x3d28*/ char                                  texture_type;
/*0x3d29*/ char                                  m_armorMat;
/*0x3d2a*/ char                                  m_armorVariation;
/*0x3d2b*/ char                                  headType;
/*0x3d2c*/ int                                   DisciplineTimer;
/*0x3d30*/ uint32_t                              MendTimer;
/*0x3d34*/ int                                   ForageTimer;
/*0x3d38*/ int                                   thirstlevel;
/*0x3d3c*/ int                                   hungerlevel;
/*0x3d40*/ eProfileType                          profileType;
/*0x3d44*/ int                                   Shrouded;                               // templateId
/*0x3d48*/ int                                   systemId;
/*0x3d4c*/ int                                   designId;
/*0x3d50*/ int                                   InventorySlotBitmask;
/*0x3d54*/ uint32_t                              CurrentProgressionID;
/*0x3d58*/ uint8_t                               Unknown0x3c28[0x54];
/*0x3dac*/ int                                   ParentId;
/*0x3db0*/ int                                   TattooIndex;
/*0x3db4*/ int                                   FacialAttachmentIndex;
/*0x3db8*/ //BaseProfile

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

// @sizeof(PcProfile) == 0x0B158 :: 2022-02-07 (test) @ 0x1406900E4
constexpr size_t PcProfile_size = 0xB158;

class [[offsetcomments]] PcProfile : public BaseProfile
{
	FORCE_SYMBOLS;

public:
/*0x3db8*/ WorldLocation                         BoundLocations[5];
/*0x3e1c*/ ArmorProperties                       ArmorType[22];
/*0x3fd4*/ AbilityInfo                           AAList[AA_CHAR_MAX_REAL];                         // AlternateAbilities
/*0x4de4*/ uint32_t                              BodyColor[9];
/*0x4e08*/ int                                   FactionTable[2048];
/*0x6e08*/ int                                   CombatAbilities[NUM_COMBAT_ABILITIES];            // KnownCombatAbilities
/*0x72b8*/ uint32_t                              SpellRecastTimer[15];
/*0x72f4*/ uint32_t                              CombatAbilityTimers[25];
/*0x7358*/ TList<CombatAbilityTimer>             CombatAbilityTimersList;
/*0x7368*/ uint32_t                              LinkedSpellTimers[25];                            // we used to call this CombatAbilityTimes
/*0x73cc*/ uint32_t                              ItemRecastTimers[100];
/*0x755c*/ uint32_t                              AATimers[100];
/*0x76ec*/ BandolierSet                          Bandolier[MAX_BANDOLIER_ITEMS];
/*0x8fec*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x9014*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x9068*/ ItemContainer                         GuildTributeBenefitItems;
/*0x9090*/ ItemContainer                         GuildTrophyTributeBenefitItems;
/*0x90b8*/ ArrayClass<CXStr>                     MercenarySaveStrings;
/*0x90d0*/ AssociatedNPCSaveStringNode*          PetSaveString;
/*0x90d8*/ int                                   Deity;
/*0x90dc*/ bool                                  bPVPFlag;
/*0x90dd*/ uint8_t                               HighestLevel;
/*0x90e0*/ int                                   Drunkenness;                            // inebriation
/*0x90e4*/ uint8_t                               HairColor;
/*0x90e5*/ uint8_t                               BeardColor;
/*0x90e8*/ int                                   NpcTintIndex;
/*0x90ec*/ uint8_t                               LeftEye;
/*0x90ed*/ uint8_t                               RightEye;
/*0x90ee*/ uint8_t                               Hair;
/*0x90ef*/ uint8_t                               Beard;
/*0x90f0*/ uint8_t                               OldFace;
/*0x90f4*/ int                                   AAPoints;
/*0x90f8*/ char                                  PocketPetSaveString[0x2000];            // 0x1000 in older clients
/*0xb0f8*/ CXStr                                 ItemBuffer;
/*0xb100*/ uint32_t                              LastShield;
/*0xb104*/ bool                                  bSneak;
/*0xb105*/ bool                                  bHide;
/*0xb108*/ int                                   AAPointsSpent;
/*0xb10c*/ int                                   AAPointsAssigned[6];                    // none, general, arch, class, special, focus, merc
/*0xb128*/ PetObjectData*                        pPetData;
/*0xb130*/ int                                   PrimaryActor;
/*0xb134*/ int                                   SecondaryActor;
/*0xb138*/ bool                                  bUseTemplateFaction;
/*0xb13c*/ int                                   TitlePrefixID;
/*0xb140*/ int                                   TitleSuffixID;
/*0xb144*/ bool                                  bAreHandsMagic;
/*0xb148*/ int                                   SoleEnabledZoneID;
/*0xb14c*/ int                                   NewBodyTint;
/*0xb150*/ int                                   CurrentMercenaryIndex;
/*0xb154*/
};

inline namespace deprecated {
	using CHARINFO2 DEPRECATE("Use PcProfile instead of CHARINFO2") = PcProfile;
	using PCHARINFO2 DEPRECATE("Use PcProfile* instead of PCHARINFO2") = PcProfile*;
}

SIZE_CHECK(PcProfile, PcProfile_size);

} // namespace eqlib
