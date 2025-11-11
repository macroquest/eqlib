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

#include <cstdint>

namespace eqlib {

#define EXPANSION_LEVEL_CLASSIC         0   // No Expansion
#define EXPANSION_LEVEL_ROK             1   // The Ruins of Kunark
#define EXPANSION_LEVEL_SOV             2   // The Scars of Velious
#define EXPANSION_LEVEL_SOL             3   // The Shadows of Luclin
#define EXPANSION_LEVEL_POP             4   // The Planes of Power
#define EXPANSION_LEVEL_LOY             5   // The Legacy of Ykesha
#define EXPANSION_LEVEL_LDON            6   // Lost Dungeons of Norrath
#define EXPANSION_LEVEL_GOD             7   // Gates of Discord
#define EXPANSION_LEVEL_OOW             8   // Omens of War
#define EXPANSION_LEVEL_DON             9   // Dragons of Norrath
#define EXPANSION_LEVEL_DODH            10  // Depths of Darkhollow
#define EXPANSION_LEVEL_POR             11  // Prophecy of Ro
#define EXPANSION_LEVEL_TSS             12  // The Serpent's Spine
#define EXPANSION_LEVEL_TBS             13  // The Buried Sea
#define EXPANSION_LEVEL_SOF             14  // Secrets of Faydwer
#define EXPANSION_LEVEL_SOD             15  // Seeds of Destruction
#define EXPANSION_LEVEL_UF              16  // Underfoot
#define EXPANSION_LEVEL_HOT             17  // House of Thule
#define EXPANSION_LEVEL_VOA             18  // Veil of Alaris
#define EXPANSION_LEVEL_ROF             19  // Rain of Fear
#define EXPANSION_LEVEL_COTF            20  // Call of the Forsaken
#define EXPANSION_LEVEL_TDS             21  // The Darkened Sea
#define EXPANSION_LEVEL_TBM             22  // The Broken Mirror
#define EXPANSION_LEVEL_EOK             23  // Empires of Kunark
#define EXPANSION_LEVEL_ROS             24  // Ring of Scale
#define EXPANSION_LEVEL_TBL             25  // The Burning Lands
#define EXPANSION_LEVEL_TOV             26  // Torment of Velious
#define EXPANSION_LEVEL_COV             27  // Claws of Veeshan
#define EXPANSION_LEVEL_TOL             28  // Terror of Luclin
#define EXPANSION_LEVEL_NOS             29  // Night of Shadows
#define EXPANSION_LEVEL_LS              30  // Laurion's Song
#define EXPANSION_LEVEL_TOB             31  // The Outer Brood
#define EXPANSION_LEVEL_SOR             32  // The Shattering of Ro

enum EQExpansion
{
	EQExpansionNone                 = EXPANSION_LEVEL_CLASSIC,
	EQExpansionKunark               = EXPANSION_LEVEL_ROK,
	EQExpansionVelious              = EXPANSION_LEVEL_SOV,
	EQExpansionLuclin               = EXPANSION_LEVEL_SOL,
	EQExpansionPOP                  = EXPANSION_LEVEL_POP,
	EQExpansionYkesha               = EXPANSION_LEVEL_LOY,
	EQExpansionLDON                 = EXPANSION_LEVEL_LDON,
	EQExpansionGates                = EXPANSION_LEVEL_GOD,
	EQExpansionOOW                  = EXPANSION_LEVEL_OOW,
	EQExpansionDON                  = EXPANSION_LEVEL_DON,
	EQExpansionDODH                 = EXPANSION_LEVEL_DODH,
	EQExpansionPOR                  = EXPANSION_LEVEL_POR,
	EQExpansionTSS                  = EXPANSION_LEVEL_TSS,
	EQExpansionTBS                  = EXPANSION_LEVEL_TBS,
	EQExpansionSOF                  = EXPANSION_LEVEL_SOF,
	EQExpansionSOD                  = EXPANSION_LEVEL_SOD,
	EQExpansionUF                   = EXPANSION_LEVEL_UF,
	EQExpansionHOT                  = EXPANSION_LEVEL_HOT,
	EQExpansionVOA                  = EXPANSION_LEVEL_VOA,
	EQExpansionROF                  = EXPANSION_LEVEL_ROF,
	EQExpansionCOTF                 = EXPANSION_LEVEL_COTF,
	EQExpansionTDS                  = EXPANSION_LEVEL_TDS,
	EQExpansionTBM                  = EXPANSION_LEVEL_TBM,
	EQExpansionEOK                  = EXPANSION_LEVEL_EOK,
	EQExpansionROS                  = EXPANSION_LEVEL_ROS,
	EQExpansionTBL                  = EXPANSION_LEVEL_TBL,
	EQExpansionTOV                  = EXPANSION_LEVEL_TOV,
	EQExpansionCOV                  = EXPANSION_LEVEL_COV,
	EQExpansionTOL                  = EXPANSION_LEVEL_TOL,
	EQExpansionNOS                  = EXPANSION_LEVEL_NOS,
	EQExpansionLS                   = EXPANSION_LEVEL_LS,
	EQExpansionTOB                  = EXPANSION_LEVEL_TOB,
	EQExpansionSOR                  = EXPANSION_LEVEL_SOR,
};

#define EQ_EXPANSION(x)             (1ll << (x - 1))

// These macros define the bit mask representing expansion flags, often used to determine
// expansion ownership or requirements
#define EXPANSION_RoK               EQ_EXPANSION(EXPANSION_LEVEL_ROK)
#define EXPANSION_SoV               EQ_EXPANSION(EXPANSION_LEVEL_SOV)
#define EXPANSION_SoL               EQ_EXPANSION(EXPANSION_LEVEL_SOL)
#define EXPANSION_PoP               EQ_EXPANSION(EXPANSION_LEVEL_POP)
#define EXPANSION_LoY               EQ_EXPANSION(EXPANSION_LEVEL_LOY)
#define EXPANSION_LDoN              EQ_EXPANSION(EXPANSION_LEVEL_LDON)
#define EXPANSION_GoD               EQ_EXPANSION(EXPANSION_LEVEL_GOD)
#define EXPANSION_OoW               EQ_EXPANSION(EXPANSION_LEVEL_OOW)
#define EXPANSION_DoN               EQ_EXPANSION(EXPANSION_LEVEL_DON)
#define EXPANSION_DoD               EQ_EXPANSION(EXPANSION_LEVEL_DODH)
#define EXPANSION_PoR               EQ_EXPANSION(EXPANSION_LEVEL_POR)
#define EXPANSION_TSS               EQ_EXPANSION(EXPANSION_LEVEL_TSS)
#define EXPANSION_TBS               EQ_EXPANSION(EXPANSION_LEVEL_TBS)
#define EXPANSION_SoF               EQ_EXPANSION(EXPANSION_LEVEL_SOF)
#define EXPANSION_SoD               EQ_EXPANSION(EXPANSION_LEVEL_SOD)
#define EXPANSION_UFT               EQ_EXPANSION(EXPANSION_LEVEL_UF)
#define EXPANSION_HoT               EQ_EXPANSION(EXPANSION_LEVEL_HOT)
#define EXPANSION_VoA               EQ_EXPANSION(EXPANSION_LEVEL_VOA)
#define EXPANSION_RoF               EQ_EXPANSION(EXPANSION_LEVEL_ROF)
#define EXPANSION_CotF              EQ_EXPANSION(EXPANSION_LEVEL_COTF)
#define EXPANSION_TDS               EQ_EXPANSION(EXPANSION_LEVEL_TDS)
#define EXPANSION_TBM               EQ_EXPANSION(EXPANSION_LEVEL_TBM)
#define EXPANSION_EoK               EQ_EXPANSION(EXPANSION_LEVEL_EOK)
#define EXPANSION_RoS               EQ_EXPANSION(EXPANSION_LEVEL_ROS)
#define EXPANSION_TBL               EQ_EXPANSION(EXPANSION_LEVEL_TBL)
#define EXPANSION_TOV               EQ_EXPANSION(EXPANSION_LEVEL_TOV)
#define EXPANSION_COV               EQ_EXPANSION(EXPANSION_LEVEL_COV)
#define EXPANSION_TOL               EQ_EXPANSION(EXPANSION_LEVEL_TOL)
#define EXPANSION_NOS               EQ_EXPANSION(EXPANSION_LEVEL_NOS)
#define EXPANSION_LS                EQ_EXPANSION(EXPANSION_LEVEL_LS)
#define EXPANSION_TOB               EQ_EXPANSION(EXPANSION_LEVEL_TOB)
#define EXPANSION_SOR               EQ_EXPANSION(EXPANSION_LEVEL_SOR)

// Enumeration defining expansion bit mask representing expansion flags. Often used to
// determine expansion ownership or requirements.
enum EQExpansionOwned : uint64_t
{
	EQExpansionNoneOwned            = 0,
	EQExpansionKunarkOwned          = EXPANSION_RoK,
	EQExpansionVeliousOwned         = EXPANSION_SoV,
	EQExpansionLuclinOwned          = EXPANSION_SoL,
	EQExpansionPOPOwned             = EXPANSION_PoP,
	EQExpansionYkeshaOwned          = EXPANSION_LoY,
	EQExpansionLDONOwned            = EXPANSION_LDoN,
	EQExpansionGatesOwned           = EXPANSION_GoD,
	EQExpansionOOWOwned             = EXPANSION_OoW,
	EQExpansionDONOwned             = EXPANSION_DoN,
	EQExpansionDODHOwned            = EXPANSION_DoD,
	EQExpansionPOROwned             = EXPANSION_PoR,
	EQExpansionTSSOwned             = EXPANSION_TBS,
	EQExpansionTBSOwned             = EXPANSION_TBS,
	EQExpansionSOFOwned             = EXPANSION_SoF,
	EQExpansionSODOwned             = EXPANSION_SoD,
	EQExpansionUFOwned              = EXPANSION_UFT,
	EQExpansionHOTOwned             = EXPANSION_HoT,
	EQExpansionVOAOwned             = EXPANSION_VoA,
	EQExpansionROFOwned             = EXPANSION_RoF,
	EQExpansionCOTFOwned            = EXPANSION_CotF,
	EQExpansionTDSOwned             = EXPANSION_TDS,
	EQExpansionTBMOwned             = EXPANSION_TBM,
	EQExpansionEOKOwned             = EXPANSION_EoK,
	EQExpansionROSOwned             = EXPANSION_RoS,
	EQExpansionTBLOwned             = EXPANSION_TBL,
	EQExpansionTOVOwned             = EXPANSION_TOV,
	EQExpansionCOVOwned             = EXPANSION_COV,
	EQExpansionTOLOwned             = EXPANSION_TOL,
	EQExpansionNOSOwned             = EXPANSION_NOS,
	EQExpansionLSOwned              = EXPANSION_LS,
	EQExpansionTOBOwned             = EXPANSION_TOB,
	EQExpansionSOROwned             = EXPANSION_SOR,

	// Mask representing all expansions
	EQExpansionHighestOwnedPlusOne_,
	EQExpansionAllOwned             = ((EQExpansionHighestOwnedPlusOne_ - 1ll) << 1) - 1,
};

} // namespace eqlib
