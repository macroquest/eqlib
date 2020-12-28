/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
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

namespace eqlib {

constexpr int EQ_MAX_NAME                      = 64;

enum EQExpansion
{
	EQExpansionNone = 0,
	EQExpansionKunark = 1,
	EQExpansionVelious = 2,
	EQExpansionLuclin = 3,
	EQExpansionPOP = 4,
	EQExpansionYkesha = 5,
	EQExpansionLDON = 6,
	EQExpansionGates = 7,
	EQExpansionOOW = 8,
	EQExpansionDON = 9,
	EQExpansionDODH = 10,
	EQExpansionPOR = 11,
	EQExpansionTSS = 12,
	EQExpansionTBS = 13,
	EQExpansionSOF = 14,
	EQExpansionSOD = 15,
	EQExpansionUF = 16,
	EQExpansionHOT = 17,
	EQExpansionVOA = 18,
	EQExpansionROF = 19,
	EQExpansionCOTF = 20,
	EQExpansionTDS = 21,
	EQExpansionTBM = 22,
	EQExpansionEOK = 23,
	EQExpansionROS = 24,
	EQExpansionTBL = 25,
	EQExpansionTOV = 26,
	EQExpansionCOV = 27,
};

enum EQExpansionOwned
{
	EQExpansionNoneOwned = 0x00000000,
	EQExpansionKunarkOwned = 0x00000001,
	EQExpansionVeliousOwned = 0x00000002,
	EQExpansionLuclinOwned = 0x00000004,
	EQExpansionPOPOwned = 0x00000008,
	EQExpansionYkeshaOwned = 0x00000010,
	EQExpansionLDONOwned = 0x00000020,
	EQExpansionGatesOwned = 0x00000040,
	EQExpansionOOWOwned = 0x00000080,
	EQExpansionDONOwned = 0x00000100,
	EQExpansionDODHOwned = 0x00000200,
	EQExpansionPOROwned = 0x00000400,
	EQExpansionTSSOwned = 0x00000800,
	EQExpansionTBSOwned = 0x00001000,
	EQExpansionSOFOwned = 0x00002000,
	EQExpansionSODOwned = 0x00004000,
	EQExpansionUFOwned = 0x00008000,
	EQExpansionHOTOwned = 0x00010000,
	EQExpansionVOAOwned = 0x00020000,
	EQExpansionROFOwned = 0x00040000,
	EQExpansionCOTFOwned = 0x00080000,
	EQExpansionTDSOwned = 0x00100000,
	EQExpansionTBMOwned = 0x00200000,
	EQExpansionEOKOwned = 0x00400000,
	EQExpansionROSOwned = 0x00800000,
	EQExpansionTBLOwned = 0x01000000,
	EQExpansionTOVOwned = 0x02000000,
	EQExpansionCOVOwned = 0x04000000,

	EQExpansionAllOwned = 0x01ffffff,
};

#define EQ_EXPANSION(x)                          (1 << (x - 1))
#define EXPANSION_RoK                            EQ_EXPANSION(1)
#define EXPANSION_SoV                            EQ_EXPANSION(2)
#define EXPANSION_SoL                            EQ_EXPANSION(3)
#define EXPANSION_PoP                            EQ_EXPANSION(4)
#define EXPANSION_LoY                            EQ_EXPANSION(5)
#define EXPANSION_LDoN                           EQ_EXPANSION(6)
#define EXPANSION_GoD                            EQ_EXPANSION(7)
#define EXPANSION_OoW                            EQ_EXPANSION(8)
#define EXPANSION_DoN                            EQ_EXPANSION(9)
#define EXPANSION_DoD                            EQ_EXPANSION(10)
#define EXPANSION_PoR                            EQ_EXPANSION(11)
#define EXPANSION_TSS                            EQ_EXPANSION(12)
#define EXPANSION_TBS                            EQ_EXPANSION(13)
#define EXPANSION_SoF                            EQ_EXPANSION(14)
#define EXPANSION_SoD                            EQ_EXPANSION(15)
#define EXPANSION_UFT                            EQ_EXPANSION(16)
#define EXPANSION_HoT                            EQ_EXPANSION(17)
#define EXPANSION_VoA                            EQ_EXPANSION(18)
#define EXPANSION_RoF                            EQ_EXPANSION(19)
#define EXPANSION_CotF                           EQ_EXPANSION(20)
#define EXPANSION_TDS                            EQ_EXPANSION(21)
#define EXPANSION_TBM                            EQ_EXPANSION(22)
#define EXPANSION_EoK                            EQ_EXPANSION(23)
#define EXPANSION_RoS                            EQ_EXPANSION(24)
#define EXPANSION_TBL                            EQ_EXPANSION(25)
#define EXPANSION_TOV                            EQ_EXPANSION(26)
#define EXPANSION_COV                            EQ_EXPANSION(27)
constexpr int NUM_EXPANSIONS = 27;


// AltCurrency values
enum ALTCURRENCY
{
	ALTCURRENCY_DOUBLOONS = 10, // TBS
	ALTCURRENCY_ORUX = 11, // TBS
	ALTCURRENCY_PHOSPHENES = 12, // TBS
	ALTCURRENCY_PHOSPHITES = 13, // TBS
	ALTCURRENCY_FAYCITES = 14, // SoF
	ALTCURRENCY_CHRONOBINES = 15, // SoD
	ALTCURRENCY_SILVERTOKENS = 16, // UF
	ALTCURRENCY_GOLDTOKENS = 17, // UF
	ALTCURRENCY_MCKENZIE = 18, // SoD
	ALTCURRENCY_BAYLE = 19, // SoD
	ALTCURRENCY_RECLAMATION = 20, // EQ
	ALTCURRENCY_BRELLIUM = 21, // UF
	ALTCURRENCY_MOTES = 22, // HoT
	ALTCURRENCY_REBELLIONCHITS = 23, // VoA
	ALTCURRENCY_DIAMONDCOINS = 24, // VoA
	ALTCURRENCY_BRONZEFIATS = 25, // VoA
	ALTCURRENCY_VOUCHER = 26, // TDS
	ALTCURRENCY_VELIUMSHARDS = 27, // RoF
	ALTCURRENCY_CRYSTALLIZEDFEAR = 28, // RoF
	ALTCURRENCY_SHADOWSTONES = 29, // RoF
	ALTCURRENCY_DREADSTONES = 30, // RoF
	ALTCURRENCY_MARKSOFVALOR = 31, // CoTF
	ALTCURRENCY_MEDALSOFHEROISM = 32, // CoTF
	ALTCURRENCY_COMMEMORATIVE_COINS = 33, // VoA
	ALTCURRENCY_FISTSOFBAYLE = 34, // CoTF
	ALTCURRENCY_NOBLES = 35, // EQ
	ALTCURRENCY_ENERGYCRYSTALS = 36, // TDS
	ALTCURRENCY_PIECESOFEIGHT = 37, // TDS
	ALTCURRENCY_REMNANTSOFTRANQUILITY = 38, // TBM
	ALTCURRENCY_BIFURCATEDCOIN = 39, // TBM
	ALTCURRENCY_ADOPTIVE = 40, // EQ
	ALTCURRENCY_SATHIRSTRADEGEMS = 41, // EoK
	ALTCURRENCY_ANCIENTSEBILISIANCOINS = 42, // EoK
	ALTCURRENCY_BATHEZIDTRADEGEMS = 43, // RoS
	ALTCURRENCY_ANCIENTDRACONICCOIN = 44, // RoS
	ALTCURRENCY_FETTERREDIFRITCOINS = 45, // TBL
	ALTCURRENCY_ENTWINEDDJINNCOINS = 46, // TBL
	ALTCURRENCY_CRYSTALLIZEDLUCK = 47, // TBL
	ALTCURRENCY_FROSTSTONEDUCAT = 48, // ToV Group
	ALTCURRENCY_WARLORDSSYMBOL = 49, // ToV Raid
	ALTCURRENCY_OVERSEERTETRADRACHM = 50, // Overseer
	ALTCURRENCY_RESTLESSMARK = 51, // CoV
	ALTCURRENCY_WARFORGEDEMBLEM = 52, // CoV
};
// Groups
constexpr int MAX_GROUP_SIZE = 6;
constexpr int MAX_GROUP_ASSISTS = 1;
constexpr int MAX_GROUP_MARK_TARGETS = 3;

// Raids
constexpr int MAX_RAID_NOTE = 64;
constexpr int MAX_RAID_LOOTERS = 19;
constexpr int MAX_RAID_SIZE = 72;
constexpr int MAX_RAID_MOTD = 1024;
constexpr int MAX_RAID_ASSISTS = 3;
constexpr int MAX_RAID_MARK_TARGETS = 3;
constexpr int MAX_RAID_MARKERS = 3;

constexpr int MAX_MOVEMENT_STATS = 20;

// zones
constexpr int ZONE_COUNT = 843;

} // namespace eqlib
