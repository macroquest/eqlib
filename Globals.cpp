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

#include "pch.h"
#include "EQLib.h"
#include "Logging.h"

#include "Common/StringUtils.h"

#include <spdlog/spdlog.h>
#include <spdlog/logger.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace eqlib {

// These don't change during the execution of the program. They can be loaded
// at static initialization time because of this.
uintptr_t EQGameBaseAddress = (uintptr_t)GetModuleHandle(nullptr);

uintptr_t EQGraphicsBaseAddress = (uintptr_t)GetModuleHandle("EQGraphicsDX9.dll");

uintptr_t EQMainBaseAddress = (uintptr_t)GetModuleHandle("eqmain.dll");

uintptr_t Kernel32BaseAddress = (uintptr_t)GetModuleHandle("kernel32.dll");

//============================================================================
// Data
//============================================================================

const char* szCombineTypes[] = {
#include "../eqdata/combines.h"
	nullptr
};
size_t MAX_COMBINES = lengthof(szCombineTypes);

const char* szItemClasses[] = {
#include "../eqdata/itemclasses.h"
	nullptr
};
size_t MAX_ITEMCLASSES = lengthof(szItemClasses);
const char** szItemTypes = szItemClasses;
size_t MAX_ITEMTYPES = lengthof(szItemClasses);

const char* szSPATypes[] = {
#include "../eqdata/spelleffects.h"
	nullptr
};
size_t MAX_SPELLEFFECTS = lengthof(szSPATypes) - 1;

const char* szFactionNames[] = {
#include "../eqdata/factionnames.h"
	nullptr
};
size_t MAX_FACTIONNAMES = lengthof(szFactionNames) - 1;

ACTORDEFENTRY ActorDefList[] = {
#include "../eqdata/actordef.h"
	0, 0, "NULL"
};

DIKEYID gDiKeyID[] = {
#include "../eqdata/dikeys.h"
	{ 0, 0 }
};

const char* gDiKeyName[256];

ServerID ServerIDArray[(int)ServerID::NumServers] = {
	ServerID::Test,
	ServerID::Antonius,
	ServerID::Bertox,
	ServerID::Bristle,
	ServerID::Cazic,
	ServerID::Drinal,
	ServerID::Erollisi,
	ServerID::Firiona,
	ServerID::Luclin,
	ServerID::Mayong,
	ServerID::Miragul,
	ServerID::Phinigel,
	ServerID::Povar,
	ServerID::Ragefire,
	ServerID::Rathe,
	ServerID::Rizlona,
	ServerID::Tunare,
	ServerID::Vox,
	ServerID::Xegony,
	ServerID::Zek,
};

const char* GetServerNameFromServerID(ServerID id)
{
	switch (id)
	{
	case ServerID::Test: return "test";
	case ServerID::Antonius: return "antonius";
	case ServerID::Bertox: return "bertox";
	case ServerID::Bristle: return "bristle";
	case ServerID::Cazic: return "cazic";
	case ServerID::Drinal: return "drinal";
	case ServerID::Erollisi: return "erollisi";
	case ServerID::Firiona: return "firiona";
	case ServerID::Luclin: return "luclin";
	case ServerID::Mayong: return "mayong";
	case ServerID::Miragul: return "miragul";
	case ServerID::Phinigel: return "phinigel";
	case ServerID::Povar: return "povar";
	case ServerID::Ragefire: return "ragefire";
	case ServerID::Rathe: return "rathe";
	case ServerID::Rizlona: return "rizlona";
	case ServerID::Tunare: return "tunare";
	case ServerID::Vox: return "vox";
	case ServerID::Xegony: return "xegony";
	case ServerID::Zek: return "zek";
	}

	return "unknown";
}

ServerID GetServerIDFromServerName(const char* serverName)
{
	static const mq::ci_unordered::map<std::string_view, ServerID> serverMapping{
#if defined(TEST)
		{ "test", ServerID::Test },
#elif defined(LIVE)
		{ "antonius", ServerID::Antonius },
		{ "bertox", ServerID::Bertox },
		{ "bristle", ServerID::Bristle },
		{ "cazic", ServerID::Cazic },
		{ "drinal", ServerID::Drinal },
		{ "erollisi", ServerID::Erollisi },
		{ "firiona", ServerID::Firiona },
		{ "luclin", ServerID::Luclin },
		{ "mayong", ServerID::Mayong },
		{ "miragul", ServerID::Miragul },
		{ "phinigel", ServerID::Phinigel },
		{ "povar", ServerID::Povar },
		{ "ragefire", ServerID::Ragefire },
		{ "rathe", ServerID::Rathe },
		{ "rizlona", ServerID::Rizlona },
		{ "tunare", ServerID::Tunare },
		{ "vox", ServerID::Vox },
		{ "xegony", ServerID::Xegony },
		{ "zek", ServerID::Zek },
#endif
	};

	auto iter = serverMapping.find(serverName);
	if (iter != serverMapping.end())
		return iter->second;

	return ServerID::Invalid;
}

const char* szExpansions[NUM_EXPANSIONS + 1] = {
	"The Ruins of Kunark",
	"The Scars of Velious",
	"The Shadows of Luclin",
	"The Planes of Power",
	"The Legacy of Ykesha",
	"Lost Dungeons of Norrath",
	"Gates of Discord",
	"Omens of War",
	"Dragons of Norrath",
	"Depths of Darkhollow",
	"Prophecy of Ro",
	"The Serpent's Spine",
	"The Buried Sea",
	"Secrets of Faydwer",
	"Seeds of Destruction",
	"Underfoot",
	"House of Thule",
	"Veil of Alaris",
	"Rain of Fear",
#if IS_EXPANSION_LEVEL(EXPANSION_LEVEL_COTF)
	"Call of the Forsaken",
	"The Darkened Sea",
	"The Broken Mirror",
	"Empires of Kunark",
	"Ring of Scale",
	"The Burning Lands",
	"Torment of Velious",
	"Claws of Veeshan",
#endif
#if IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TOL)
	"Terror of Luclin",
#endif
#if IS_EXPANSION_LEVEL(EXPANSION_LEVEL_NOS)
	"Night of Shadows",
#endif
	nullptr
};
static_assert(lengthof(szExpansions) - 1 == NUM_EXPANSIONS,
	"Need to update szExpansions to match NUM_EXPANSIONS");

//============================================================================
// Offset Definitions & Initialization
//============================================================================

#pragma region eqgame.exe offsets
//============================================================================
//
// eqgame.exe Offsets

#if defined(__ActualVersionBuild_x)
INITIALIZE_EQGAME_OFFSET(__ActualVersionBuild);
#else

#endif
INITIALIZE_EQGAME_OFFSET(__ActualVersionDate);
INITIALIZE_EQGAME_OFFSET(__ActualVersionTime);
INITIALIZE_EQGAME_OFFSET(__BindList);
INITIALIZE_EQGAME_OFFSET(__CommandList);
INITIALIZE_EQGAME_OFFSET(__CurrentMapLabel);
INITIALIZE_EQGAME_OFFSET(__CurrentSocial);
INITIALIZE_EQGAME_OFFSET(__do_loot);
INITIALIZE_EQGAME_OFFSET(__ExceptionFilter);
INITIALIZE_EQGAME_OFFSET(__gpbCommandEvent);
INITIALIZE_EQGAME_OFFSET(__Guilds);
INITIALIZE_EQGAME_OFFSET(__gWorld);
INITIALIZE_EQGAME_OFFSET(__HandleMouseWheel);
INITIALIZE_EQGAME_OFFSET(__heqmain);
INITIALIZE_EQGAME_OFFSET(__HWnd);
INITIALIZE_EQGAME_OFFSET(__LabelCache);
INITIALIZE_EQGAME_OFFSET(__LoginName);
INITIALIZE_EQGAME_OFFSET(__Mouse);
INITIALIZE_EQGAME_OFFSET(__MouseEventTime);
INITIALIZE_EQGAME_OFFSET(__ScreenMode);
INITIALIZE_EQGAME_OFFSET(__ServerHost);
INITIALIZE_EQGAME_OFFSET(__SubscriptionType);
INITIALIZE_EQGAME_OFFSET(__ThrottleFrameRate);
#if defined(__ThrottleFrameRateEnd_x)
INITIALIZE_EQGAME_OFFSET(__ThrottleFrameRateEnd);
#endif
INITIALIZE_EQGAME_OFFSET(EQObject_Top);
INITIALIZE_EQGAME_OFFSET(g_eqCommandStates);
INITIALIZE_EQGAME_OFFSET(instCRaid);
INITIALIZE_EQGAME_OFFSET(instDynamicZone);
INITIALIZE_EQGAME_OFFSET(instTribute);
INITIALIZE_EQGAME_OFFSET(instEQZoneInfo);
INITIALIZE_EQGAME_OFFSET(instExpeditionLeader);
INITIALIZE_EQGAME_OFFSET(instExpeditionName);
INITIALIZE_EQGAME_OFFSET(instTributeActive);
INITIALIZE_EQGAME_OFFSET(pinstActiveBanker);
INITIALIZE_EQGAME_OFFSET(pinstActiveCorpse);
INITIALIZE_EQGAME_OFFSET(pinstActiveGMaster);
INITIALIZE_EQGAME_OFFSET(pinstActiveMerchant);
INITIALIZE_EQGAME_OFFSET(pinstAltAdvManager);
INITIALIZE_EQGAME_OFFSET(pinstCamActor);
INITIALIZE_EQGAME_OFFSET(pinstCChatWindowManager);
INITIALIZE_EQGAME_OFFSET(pinstCContainerMgr);
INITIALIZE_EQGAME_OFFSET(pinstCContextMenuManager);
INITIALIZE_EQGAME_OFFSET(pinstCDBStr);
INITIALIZE_EQGAME_OFFSET(pinstCDisplay);
INITIALIZE_EQGAME_OFFSET(pinstCEverQuest);
INITIALIZE_EQGAME_OFFSET(pinstCInvSlotMgr);
INITIALIZE_EQGAME_OFFSET(pinstCItemDisplayManager);
INITIALIZE_EQGAME_OFFSET(pinstControlledPlayer);
INITIALIZE_EQGAME_OFFSET(pinstCMercenaryClientManager);
INITIALIZE_EQGAME_OFFSET(pinstCPopupWndManager);
INITIALIZE_EQGAME_OFFSET(pinstCResolutionHandler);
INITIALIZE_EQGAME_OFFSET(pinstCSidlManager);
INITIALIZE_EQGAME_OFFSET(pinstCSpellDisplayMgr);
INITIALIZE_EQGAME_OFFSET(pinstCTaskManager);
INITIALIZE_EQGAME_OFFSET(pinstCXWndManager);
INITIALIZE_EQGAME_OFFSET(pinstDZMember);
INITIALIZE_EQGAME_OFFSET(pinstDZTimerInfo);
INITIALIZE_EQGAME_OFFSET(pinstEqLogin);
INITIALIZE_EQGAME_OFFSET(pinstEQSoundManager);
#if defined(pinstEQSpellStrings_x)
INITIALIZE_EQGAME_OFFSET(pinstEQSpellStrings);
#endif
INITIALIZE_EQGAME_OFFSET(pinstEQSuiteTextureLoader);
INITIALIZE_EQGAME_OFFSET(pinstEverQuestInfo);
INITIALIZE_EQGAME_OFFSET(pinstItemIconCache);
#if defined(pinstKeypressHandler_x)
INITIALIZE_EQGAME_OFFSET(pinstKeypressHandler);
#endif
INITIALIZE_EQGAME_OFFSET(pinstLocalPC);
INITIALIZE_EQGAME_OFFSET(pinstLocalPlayer);
INITIALIZE_EQGAME_OFFSET(pinstModelPlayer);
INITIALIZE_EQGAME_OFFSET(pinstRenderInterface);
INITIALIZE_EQGAME_OFFSET(pinstPlayerPath);
INITIALIZE_EQGAME_OFFSET(pinstSGraphicsEngine);
INITIALIZE_EQGAME_OFFSET(pinstSkillMgr);
INITIALIZE_EQGAME_OFFSET(pinstSpawnManager);
INITIALIZE_EQGAME_OFFSET(pinstSpellManager);
INITIALIZE_EQGAME_OFFSET(pinstStringTable);
INITIALIZE_EQGAME_OFFSET(pinstSwitchManager);
INITIALIZE_EQGAME_OFFSET(pinstTarget);
INITIALIZE_EQGAME_OFFSET(pinstTargetIndicator);
INITIALIZE_EQGAME_OFFSET(pinstTaskMember);
INITIALIZE_EQGAME_OFFSET(pinstTrackTarget);
INITIALIZE_EQGAME_OFFSET(pinstTradeTarget);
INITIALIZE_EQGAME_OFFSET(pinstViewActor);
INITIALIZE_EQGAME_OFFSET(pinstWorldData);

INITIALIZE_EQGAME_OFFSET(__MemChecker0);
INITIALIZE_EQGAME_OFFSET(__MemChecker1);
#if defined(__MemChecker4_x)
INITIALIZE_EQGAME_OFFSET(__MemChecker4);
#endif
INITIALIZE_EQGAME_OFFSET(__EncryptPad0);
INITIALIZE_EQGAME_OFFSET(DI8__Main);
INITIALIZE_EQGAME_OFFSET(DI8__Keyboard);
INITIALIZE_EQGAME_OFFSET(DI8__Mouse);
INITIALIZE_EQGAME_OFFSET(DI8__Mouse_Check);

INITIALIZE_EQGAME_OFFSET(__CastRay);
INITIALIZE_EQGAME_OFFSET(__CastRay2);
INITIALIZE_EQGAME_OFFSET(__CleanItemTags);
INITIALIZE_EQGAME_OFFSET(__ConvertItemTags);
INITIALIZE_EQGAME_OFFSET(__CopyLayout);
INITIALIZE_EQGAME_OFFSET(__CreateCascadeMenuItems);
INITIALIZE_EQGAME_OFFSET(__DoesFileExist);
INITIALIZE_EQGAME_OFFSET(__eq_delete);
INITIALIZE_EQGAME_OFFSET(__eq_new);
INITIALIZE_EQGAME_OFFSET(__EQGetTime);
INITIALIZE_EQGAME_OFFSET(__ExecuteCmd);
INITIALIZE_EQGAME_OFFSET(__FixHeading);
INITIALIZE_EQGAME_OFFSET(__FlushDxKeyboard);
INITIALIZE_EQGAME_OFFSET(__get_bearing);
INITIALIZE_EQGAME_OFFSET(__get_melee_range);
INITIALIZE_EQGAME_OFFSET(__GetAnimationCache);
INITIALIZE_EQGAME_OFFSET(__GetGaugeValueFromEQ);
INITIALIZE_EQGAME_OFFSET(__GetLabelFromEQ);
INITIALIZE_EQGAME_OFFSET(__GetXTargetType);
INITIALIZE_EQGAME_OFFSET(__HeadingDiff);
INITIALIZE_EQGAME_OFFSET(__HelpPath);
INITIALIZE_EQGAME_OFFSET(__InitMouse);
INITIALIZE_EQGAME_OFFSET(__msgTokenTextParam);
INITIALIZE_EQGAME_OFFSET(__NewUIINI);
INITIALIZE_EQGAME_OFFSET(__ProcessGameEvents);
INITIALIZE_EQGAME_OFFSET(__ProcessKeyboardEvents);
INITIALIZE_EQGAME_OFFSET(__ProcessMouseEvents);
INITIALIZE_EQGAME_OFFSET(__SaveColors);
INITIALIZE_EQGAME_OFFSET(__STMLToText);
INITIALIZE_EQGAME_OFFSET(__WndProc);

INITIALIZE_EQGAME_OFFSET(AchievementManager__Instance);
INITIALIZE_EQGAME_OFFSET(AggroMeterManagerClient__Instance);
INITIALIZE_EQGAME_OFFSET(AltAdvManager__CanSeeAbility);
INITIALIZE_EQGAME_OFFSET(AltAdvManager__CanTrainAbility);
INITIALIZE_EQGAME_OFFSET(AltAdvManager__GetAAById);
INITIALIZE_EQGAME_OFFSET(AltAdvManager__GetCalculatedTimer);
INITIALIZE_EQGAME_OFFSET(AltAdvManager__IsAbilityReady);
INITIALIZE_EQGAME_OFFSET(CAAWnd__ShowAbility);
INITIALIZE_EQGAME_OFFSET(CAAWnd__Update);
INITIALIZE_EQGAME_OFFSET(CAAWnd__UpdateSelected);
#if HAS_ADVANCED_LOOT
INITIALIZE_EQGAME_OFFSET(CAdvancedLootWnd__AddPlayerToList);
INITIALIZE_EQGAME_OFFSET(CAdvancedLootWnd__DoAdvLootAction);
INITIALIZE_EQGAME_OFFSET(CAdvancedLootWnd__DoSharedAdvLootAction);
INITIALIZE_EQGAME_OFFSET(CAdvancedLootWnd__UpdateMasterLooter);
#endif
#if HAS_MERCENARY_AA
INITIALIZE_EQGAME_OFFSET(CAltAbilityData__GetMercCurrentRank);
INITIALIZE_EQGAME_OFFSET(CAltAbilityData__GetMercMaxRank);
#endif
INITIALIZE_EQGAME_OFFSET(CBankWnd__WndNotification);
INITIALIZE_EQGAME_OFFSET(CBarterSearchWnd__UpdateInventoryList);
INITIALIZE_EQGAME_OFFSET(CBarterSearchWnd__WndNotification);
INITIALIZE_EQGAME_OFFSET(CBarterWnd__WndNotification);
INITIALIZE_EQGAME_OFFSET(CBazaarSearchWnd__HandleSearchResults);
INITIALIZE_EQGAME_OFFSET(CBroadcast__Get);
INITIALIZE_EQGAME_OFFSET(CButtonWnd__vftable);
INITIALIZE_EQGAME_OFFSET(CCastSpellWnd__ForgetMemorizedSpell);
INITIALIZE_EQGAME_OFFSET(CCastSpellWnd__IsBardSongPlaying);
INITIALIZE_EQGAME_OFFSET(CCastSpellWnd__RefreshSpellGemButtons);
INITIALIZE_EQGAME_OFFSET(CCharacterListWnd__EnterWorld);
INITIALIZE_EQGAME_OFFSET(CCharacterListWnd__Quit);
INITIALIZE_EQGAME_OFFSET(CCharacterListWnd__SelectCharacter);
INITIALIZE_EQGAME_OFFSET(CCharacterListWnd__UpdateList);
INITIALIZE_EQGAME_OFFSET(CChatService__GetFriendName);
INITIALIZE_EQGAME_OFFSET(CChatService__GetNumberOfFriends);
INITIALIZE_EQGAME_OFFSET(CChatWindow__AddHistory);
INITIALIZE_EQGAME_OFFSET(CChatWindow__CChatWindow);
INITIALIZE_EQGAME_OFFSET(CChatWindow__Clear);
INITIALIZE_EQGAME_OFFSET(CChatWindow__WndNotification);
INITIALIZE_EQGAME_OFFSET(CChatWindowManager__CreateChatWindow);
INITIALIZE_EQGAME_OFFSET(CChatWindowManager__FreeChatWindow);
INITIALIZE_EQGAME_OFFSET(CChatWindowManager__GetRGBAFromIndex);
INITIALIZE_EQGAME_OFFSET(CChatWindowManager__InitContextMenu);
INITIALIZE_EQGAME_OFFSET(CChatWindowManager__SetLockedActiveChatWindow);
INITIALIZE_EQGAME_OFFSET(CColorPickerWnd__Open);
INITIALIZE_EQGAME_OFFSET(CComboWnd__DeleteAll);
INITIALIZE_EQGAME_OFFSET(CComboWnd__Draw);
INITIALIZE_EQGAME_OFFSET(CComboWnd__GetChoiceText);
INITIALIZE_EQGAME_OFFSET(CComboWnd__GetCurChoice);
INITIALIZE_EQGAME_OFFSET(CComboWnd__GetCurChoiceText);
INITIALIZE_EQGAME_OFFSET(CComboWnd__GetItemCount);
INITIALIZE_EQGAME_OFFSET(CComboWnd__GetListRect);
INITIALIZE_EQGAME_OFFSET(CComboWnd__InsertChoice);
INITIALIZE_EQGAME_OFFSET(CComboWnd__SetChoice);
INITIALIZE_EQGAME_OFFSET(CComboWnd__SetColors);
INITIALIZE_EQGAME_OFFSET(CContainerMgr__CloseContainer);
INITIALIZE_EQGAME_OFFSET(CContainerMgr__OpenContainer);
INITIALIZE_EQGAME_OFFSET(CContainerMgr__OpenExperimentContainer);
INITIALIZE_EQGAME_OFFSET(CContainerWnd__HandleCombine);
INITIALIZE_EQGAME_OFFSET(CContainerWnd__SetContainer);
INITIALIZE_EQGAME_OFFSET(CContainerWnd__vftable);
INITIALIZE_EQGAME_OFFSET(CContextMenu__AddMenuItem);
INITIALIZE_EQGAME_OFFSET(CContextMenu__AddSeparator);
INITIALIZE_EQGAME_OFFSET(CContextMenu__CheckMenuItem);
INITIALIZE_EQGAME_OFFSET(CContextMenu__RemoveAllMenuItems);
INITIALIZE_EQGAME_OFFSET(CContextMenu__RemoveMenuItem);
INITIALIZE_EQGAME_OFFSET(CContextMenu__SetMenuItem);
INITIALIZE_EQGAME_OFFSET(CContextMenuManager__AddMenu);
INITIALIZE_EQGAME_OFFSET(CContextMenuManager__CreateDefaultMenu);
INITIALIZE_EQGAME_OFFSET(CContextMenuManager__Flush);
INITIALIZE_EQGAME_OFFSET(CContextMenuManager__PopupMenu);
INITIALIZE_EQGAME_OFFSET(CContextMenuManager__RemoveMenu);
INITIALIZE_EQGAME_OFFSET(CCursorAttachment__AttachToCursor);
INITIALIZE_EQGAME_OFFSET(CCursorAttachment__AttachToCursor1);
INITIALIZE_EQGAME_OFFSET(CCursorAttachment__Deactivate);
INITIALIZE_EQGAME_OFFSET(CDBStr__GetString);
INITIALIZE_EQGAME_OFFSET(CDisplay__cameraType);
INITIALIZE_EQGAME_OFFSET(CDisplay__CleanGameUI);
INITIALIZE_EQGAME_OFFSET(CDisplay__GetClickedActor);
INITIALIZE_EQGAME_OFFSET(CDisplay__GetFloorHeight);
INITIALIZE_EQGAME_OFFSET(CDisplay__GetUserDefinedColor);
INITIALIZE_EQGAME_OFFSET(CDisplay__InitCharSelectUI);
INITIALIZE_EQGAME_OFFSET(CDisplay__PreZoneMainUI);
INITIALIZE_EQGAME_OFFSET(CDisplay__RealRender_World);
INITIALIZE_EQGAME_OFFSET(CDisplay__ReloadUI);
INITIALIZE_EQGAME_OFFSET(CDisplay__SetViewActor);
INITIALIZE_EQGAME_OFFSET(CDisplay__ToggleScreenshotMode);
INITIALIZE_EQGAME_OFFSET(CDisplay__TrueDistance);
INITIALIZE_EQGAME_OFFSET(CDisplay__WriteTextHD2);
INITIALIZE_EQGAME_OFFSET(CDisplay__ZoneMainUI);
#if defined(CDistillerInfo__Instance_x) // FIXME: emulator
INITIALIZE_EQGAME_OFFSET(CDistillerInfo__GetIDFromRecordNum);
INITIALIZE_EQGAME_OFFSET(CDistillerInfo__Instance);
#endif
INITIALIZE_EQGAME_OFFSET(CEditBaseWnd__SetSel);
INITIALIZE_EQGAME_OFFSET(CEditWnd__DrawCaret);
INITIALIZE_EQGAME_OFFSET(CEditWnd__EnsureCaretVisible);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetCaretPt);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetCharIndexPt);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetDisplayString);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetHorzOffset);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetLineForPrintableChar);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetSelStartPt);
INITIALIZE_EQGAME_OFFSET(CEditWnd__GetSTMLSafeText);
INITIALIZE_EQGAME_OFFSET(CEditWnd__PointFromPrintableChar);
INITIALIZE_EQGAME_OFFSET(CEditWnd__ReplaceSelection);
INITIALIZE_EQGAME_OFFSET(CEditWnd__SelectableCharFromPoint);
INITIALIZE_EQGAME_OFFSET(CEditWnd__SetEditable);
INITIALIZE_EQGAME_OFFSET(CEditWnd__SetWindowText);
INITIALIZE_EQGAME_OFFSET(CEQSuiteTextureLoader__CreateTexture);
INITIALIZE_EQGAME_OFFSET(CEQSuiteTextureLoader__GetDefaultUIPath);
INITIALIZE_EQGAME_OFFSET(CEQSuiteTextureLoader__GetTexture);
INITIALIZE_EQGAME_OFFSET(CEverQuest__ClickedPlayer);
INITIALIZE_EQGAME_OFFSET(CEverQuest__CreateTargetIndicator);
INITIALIZE_EQGAME_OFFSET(CEverQuest__DoPercentConvert);
INITIALIZE_EQGAME_OFFSET(CEverQuest__DoTellWindow);
INITIALIZE_EQGAME_OFFSET(CEverQuest__DropHeldItemOnGround);
INITIALIZE_EQGAME_OFFSET(CEverQuest__dsp_chat);
INITIALIZE_EQGAME_OFFSET(CEverQuest__Emote);
INITIALIZE_EQGAME_OFFSET(CEverQuest__GetBodyTypeDesc);
INITIALIZE_EQGAME_OFFSET(CEverQuest__GetClassDesc);
INITIALIZE_EQGAME_OFFSET(CEverQuest__GetClassThreeLetterCode);
INITIALIZE_EQGAME_OFFSET(CEverQuest__GetDeityDesc);
INITIALIZE_EQGAME_OFFSET(CEverQuest__GetLangDesc);
INITIALIZE_EQGAME_OFFSET(CEverQuest__GetRaceDesc);
INITIALIZE_EQGAME_OFFSET(CEverQuest__InterpretCmd);
INITIALIZE_EQGAME_OFFSET(CEverQuest__IssuePetCommand);
INITIALIZE_EQGAME_OFFSET(CEverQuest__LeftClickedOnPlayer);
INITIALIZE_EQGAME_OFFSET(CEverQuest__LMouseUp);
INITIALIZE_EQGAME_OFFSET(CEverQuest__OutputTextToLog);
#if defined(CEverQuest__ReportSuccessfulHeal_x)
INITIALIZE_EQGAME_OFFSET(CEverQuest__ReportSuccessfulHeal);
#endif
INITIALIZE_EQGAME_OFFSET(CEverQuest__ReportSuccessfulHit);
INITIALIZE_EQGAME_OFFSET(CEverQuest__RightClickedOnPlayer);
INITIALIZE_EQGAME_OFFSET(CEverQuest__RMouseUp);
INITIALIZE_EQGAME_OFFSET(CEverQuest__SetGameState);
INITIALIZE_EQGAME_OFFSET(CEverQuest__trimName);
INITIALIZE_EQGAME_OFFSET(CEverQuest__UPCNotificationFlush);
#if HAS_FIND_ITEM_WINDOW
INITIALIZE_EQGAME_OFFSET(CFindItemWnd__PickupSelectedItem);
INITIALIZE_EQGAME_OFFSET(CFindItemWnd__Update);
INITIALIZE_EQGAME_OFFSET(CFindItemWnd__WndNotification);
#endif
INITIALIZE_EQGAME_OFFSET(CGaugeWnd__Draw);
INITIALIZE_EQGAME_OFFSET(CGroupWnd__UpdateDisplay);
INITIALIZE_EQGAME_OFFSET(CGroupWnd__WndNotification);
INITIALIZE_EQGAME_OFFSET(CGuild__FindMemberByName);
INITIALIZE_EQGAME_OFFSET(CGuild__GetGuildIndex);
INITIALIZE_EQGAME_OFFSET(CGuild__GetGuildName);
INITIALIZE_EQGAME_OFFSET(CharacterBase__GetItemByGlobalIndex);
INITIALIZE_EQGAME_OFFSET(CharacterBase__GetItemByGlobalIndex1);
INITIALIZE_EQGAME_OFFSET(CharacterBase__IsExpansionFlag);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__BardCastBard);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__CalcAffectChange);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__CalcAffectChangeGeneric);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__CanUseItem);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__CanUseMemorizedSpellSlot);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__CastSpell);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__CharacterZoneClient);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__Cur_HP);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__Cur_Mana);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__FindAffectSlot);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetAdjustedSkill);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetBaseSkill);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetCastingTimeModifier);
#if defined(CharacterZoneClient__GetCurrentMod_x)
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetCurrentMod);
#endif
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetCursorItemCount);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetEnduranceRegen);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetFirstEffectSlot);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetFocusCastingTimeModifier);
#if defined(CharacterZoneClient__GetFocusDurationMod_x)
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetFocusDurationMod);
#endif
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetFocusRangeModifier);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetFocusReuseMod);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetHPRegen);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetItemCountInInventory);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetItemCountWorn);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetLastEffectSlot);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetManaRegen);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetMaxEffects);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetModCap);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetOpenEffectSlot);
#if defined(CharacterZoneClient__GetPctModAndMin_x)
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetPctModAndMin);
#endif
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__GetPCSpellAffect);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__HasSkill);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__IsStackBlocked);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__MakeMeVisible);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__Max_Endurance);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__Max_HP);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__Max_Mana);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__NotifyPCAffectChange);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__RemovePCAffectex);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__SpellDuration);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__TotalEffect);
INITIALIZE_EQGAME_OFFSET(CharacterZoneClient__UseSkill);
#if defined(ChatManagerClient__Instance_x)
INITIALIZE_EQGAME_OFFSET(ChatManagerClient__Instance);
#endif
INITIALIZE_EQGAME_OFFSET(CHelpWnd__SetFile);
INITIALIZE_EQGAME_OFFSET(CHotButton__SetButtonSize);
INITIALIZE_EQGAME_OFFSET(CHotButton__SetCheck);
INITIALIZE_EQGAME_OFFSET(CHotButtonWnd__DoHotButton);
INITIALIZE_EQGAME_OFFSET(CInvSlot__GetItemBase);
INITIALIZE_EQGAME_OFFSET(CInvSlot__HandleRButtonUp);
INITIALIZE_EQGAME_OFFSET(CInvSlot__SliderComplete);
INITIALIZE_EQGAME_OFFSET(CInvSlot__UpdateItem);
INITIALIZE_EQGAME_OFFSET(CInvSlotMgr__MoveItem);
INITIALIZE_EQGAME_OFFSET(CInvSlotMgr__SelectSlot);
INITIALIZE_EQGAME_OFFSET(CInvSlotWnd__CInvSlotWnd);
INITIALIZE_EQGAME_OFFSET(CInvSlotWnd__HandleLButtonUp);
INITIALIZE_EQGAME_OFFSET(CItemDisplayManager__CreateWindowInstance);
INITIALIZE_EQGAME_OFFSET(CItemDisplayWnd__InsertAugmentRequest);
INITIALIZE_EQGAME_OFFSET(CItemDisplayWnd__RemoveAugmentRequest);
#if HAS_ITEM_CONVERT_BUTTON
INITIALIZE_EQGAME_OFFSET(CItemDisplayWnd__RequestConvertItem);
#endif
INITIALIZE_EQGAME_OFFSET(CItemDisplayWnd__SetItem);
INITIALIZE_EQGAME_OFFSET(CItemDisplayWnd__UpdateStrings);
#if HAS_KEYRING_WINDOW
INITIALIZE_EQGAME_OFFSET(CKeyRingWnd__ExecuteRightClick);
#endif
INITIALIZE_EQGAME_OFFSET(CLabel__UpdateText);
INITIALIZE_EQGAME_OFFSET(CLargeDialogWnd__Open);
INITIALIZE_EQGAME_OFFSET(ClientSOIManager__GetSingleton);
INITIALIZE_EQGAME_OFFSET(CListWnd__AddColumn);
INITIALIZE_EQGAME_OFFSET(CListWnd__AddColumn1);
INITIALIZE_EQGAME_OFFSET(CListWnd__AddLine);
INITIALIZE_EQGAME_OFFSET(CListWnd__AddString);
INITIALIZE_EQGAME_OFFSET(CListWnd__CalculateCustomWindowPositions);
INITIALIZE_EQGAME_OFFSET(CListWnd__CalculateFirstVisibleLine);
INITIALIZE_EQGAME_OFFSET(CListWnd__CalculateVSBRange);
INITIALIZE_EQGAME_OFFSET(CListWnd__ClearAllSel);
INITIALIZE_EQGAME_OFFSET(CListWnd__ClearSel);
INITIALIZE_EQGAME_OFFSET(CListWnd__CListWnd);
INITIALIZE_EQGAME_OFFSET(CListWnd__CloseAndUpdateEditWindow);
INITIALIZE_EQGAME_OFFSET(CListWnd__Compare);
INITIALIZE_EQGAME_OFFSET(CListWnd__dCListWnd);
INITIALIZE_EQGAME_OFFSET(CListWnd__Draw);
INITIALIZE_EQGAME_OFFSET(CListWnd__DrawColumnSeparators);
INITIALIZE_EQGAME_OFFSET(CListWnd__DrawHeader);
INITIALIZE_EQGAME_OFFSET(CListWnd__DrawItem);
INITIALIZE_EQGAME_OFFSET(CListWnd__DrawLine);
INITIALIZE_EQGAME_OFFSET(CListWnd__DrawSeparator);
INITIALIZE_EQGAME_OFFSET(CListWnd__EnableLine);
INITIALIZE_EQGAME_OFFSET(CListWnd__EnsureVisible);
INITIALIZE_EQGAME_OFFSET(CListWnd__ExtendSel);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetColumnMinWidth);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetColumnWidth);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetCurSel);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetItemData);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetItemHeight);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetItemRect);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetItemText);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetItemWnd);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetSelList);
INITIALIZE_EQGAME_OFFSET(CListWnd__GetSeparatorRect);
INITIALIZE_EQGAME_OFFSET(CListWnd__InsertLine);
INITIALIZE_EQGAME_OFFSET(CListWnd__RemoveLine);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetColors);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetColumnJustification);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetColumnLabel);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetColumnsSizable);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetColumnWidth);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetCurSel);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetItemColor);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetItemData);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetItemIcon);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetItemText);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetItemWnd);
INITIALIZE_EQGAME_OFFSET(CListWnd__SetVScrollPos);
INITIALIZE_EQGAME_OFFSET(CListWnd__Sort);
INITIALIZE_EQGAME_OFFSET(CListWnd__ToggleSel);
INITIALIZE_EQGAME_OFFSET(CListWnd__vftable);
INITIALIZE_EQGAME_OFFSET(CLootWnd__LootAll);
INITIALIZE_EQGAME_OFFSET(CLootWnd__RequestLootSlot);
INITIALIZE_EQGAME_OFFSET(CMapViewWnd__CMapViewWnd);
INITIALIZE_EQGAME_OFFSET(CMemoryMappedFile__SetFile);
INITIALIZE_EQGAME_OFFSET(CMerchantWnd__DisplayBuyOrSellPrice);
INITIALIZE_EQGAME_OFFSET(CMerchantWnd__PurchasePageHandler__RequestGetItem);
INITIALIZE_EQGAME_OFFSET(CMerchantWnd__PurchasePageHandler__RequestPutItem);
INITIALIZE_EQGAME_OFFSET(CMerchantWnd__PurchasePageHandler__UpdateList);
INITIALIZE_EQGAME_OFFSET(CMerchantWnd__SelectBuySellSlot);
INITIALIZE_EQGAME_OFFSET(COptionsWnd__FillChatFilterList);
INITIALIZE_EQGAME_OFFSET(CPacketScrambler__hton);
INITIALIZE_EQGAME_OFFSET(CPacketScrambler__ntoh);
#if HAS_TABBED_CHAT
INITIALIZE_EQGAME_OFFSET(CPageWnd__FlashTab);
#endif
INITIALIZE_EQGAME_OFFSET(CPageWnd__SetTabText);
INITIALIZE_EQGAME_OFFSET(CQuantityWnd__Open);
INITIALIZE_EQGAME_OFFSET(CResolutionHandler__GetWindowedStyle);
INITIALIZE_EQGAME_OFFSET(CResolutionHandler__UpdateResolution);
INITIALIZE_EQGAME_OFFSET(CScreenPieceTemplate__IsType);
INITIALIZE_EQGAME_OFFSET(CSidlManager__CreateHotButtonWnd);
INITIALIZE_EQGAME_OFFSET(CSidlManager__CreateXWnd);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__CreateXWnd);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__CreateXWndFromTemplate);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__CreateXWndFromTemplate1);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__FindAnimation1);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__FindButtonDrawTemplate);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__FindScreenPieceTemplate);
INITIALIZE_EQGAME_OFFSET(CSidlManagerBase__FindScreenPieceTemplate1);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__CalculateHSBRange);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__CalculateVSBRange);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__ConvertToRes);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__CreateChildrenFromSidl);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__CSidlScreenWnd1);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__CSidlScreenWnd2);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__dCSidlScreenWnd);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__DrawSidlPiece);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__EnableIniStorage);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__GetChildItem);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__GetSidlPiece);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__Init1);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__LoadIniListWnd);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__LoadSidlScreen);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__m_layoutCopy);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__StoreIniVis);
INITIALIZE_EQGAME_OFFSET(CSidlScreenWnd__vftable);
INITIALIZE_EQGAME_OFFSET(CSkillMgr__GetNameToken);
INITIALIZE_EQGAME_OFFSET(CSkillMgr__GetSkillCap);
INITIALIZE_EQGAME_OFFSET(CSkillMgr__IsActivatedSkill);
INITIALIZE_EQGAME_OFFSET(CSkillMgr__IsAvailable);
INITIALIZE_EQGAME_OFFSET(CSkillMgr__IsCombatSkill);
INITIALIZE_EQGAME_OFFSET(CSliderWnd__GetValue);
INITIALIZE_EQGAME_OFFSET(CSliderWnd__SetNumTicks);
INITIALIZE_EQGAME_OFFSET(CSliderWnd__SetValue);
INITIALIZE_EQGAME_OFFSET(CSpellBookWnd__MemorizeSet);
INITIALIZE_EQGAME_OFFSET(CSpellDisplayWnd__SetSpell);
INITIALIZE_EQGAME_OFFSET(CSpellDisplayWnd__UpdateStrings);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__AppendSTML);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__CalculateHSBRange);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__CalculateVSBRange);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__FastForwardToEndOfTag);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__ForceParseNow);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__GetVisibleText);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__MakeStmlColorTag);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__MakeWndNotificationTag);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__SetSTMLText);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__StripFirstSTMLLines);
INITIALIZE_EQGAME_OFFSET(CStmlWnd__UpdateHistoryString);
INITIALIZE_EQGAME_OFFSET(CTabWnd__Draw);
INITIALIZE_EQGAME_OFFSET(CTabWnd__DrawCurrentPage);
INITIALIZE_EQGAME_OFFSET(CTabWnd__DrawTab);
INITIALIZE_EQGAME_OFFSET(CTabWnd__GetTabRect);
INITIALIZE_EQGAME_OFFSET(CTabWnd__InsertPage);
INITIALIZE_EQGAME_OFFSET(CTabWnd__RemovePage);
INITIALIZE_EQGAME_OFFSET(CTabWnd__SetPage);
INITIALIZE_EQGAME_OFFSET(CTabWnd__UpdatePage);
INITIALIZE_EQGAME_OFFSET(CTargetManager__Get);
INITIALIZE_EQGAME_OFFSET(CTargetWnd__GetBuffCaster);
INITIALIZE_EQGAME_OFFSET(CTargetWnd__HandleBuffRemoveRequest);
INITIALIZE_EQGAME_OFFSET(CTargetWnd__RefreshTargetBuffs);
INITIALIZE_EQGAME_OFFSET(CTargetWnd__WndNotification);
INITIALIZE_EQGAME_OFFSET(CTaskManager__GetElementDescription);
INITIALIZE_EQGAME_OFFSET(CTaskManager__GetEntry);
INITIALIZE_EQGAME_OFFSET(CTaskManager__GetTaskStatus);
INITIALIZE_EQGAME_OFFSET(CTaskWnd__UpdateTaskTimers);
INITIALIZE_EQGAME_OFFSET(CTextOverlay__DisplayText);
INITIALIZE_EQGAME_OFFSET(CTextureAnimation__Draw);
INITIALIZE_EQGAME_OFFSET(CTextureAnimation__SetCurCell);
INITIALIZE_EQGAME_OFFSET(CTextureFont__DrawWrappedText);
INITIALIZE_EQGAME_OFFSET(CTextureFont__DrawWrappedText1);
INITIALIZE_EQGAME_OFFSET(CTextureFont__DrawWrappedText2);
#if defined(CTextureFont__GetHeight_x)
INITIALIZE_EQGAME_OFFSET(CTextureFont__GetHeight);
#endif
INITIALIZE_EQGAME_OFFSET(CTextureFont__GetTextExtent);
INITIALIZE_EQGAME_OFFSET(CTribute__GetActiveFavorCost);
INITIALIZE_EQGAME_OFFSET(CUnSerializeBuffer__GetString);
INITIALIZE_EQGAME_OFFSET(CWndDisplayManager__FindWindow);
INITIALIZE_EQGAME_OFFSET(CXMLDataManager__GetXMLData);
INITIALIZE_EQGAME_OFFSET(CXMLSOMDocumentBase__XMLRead);
INITIALIZE_EQGAME_OFFSET(CXStr__gCXStrAccess);
INITIALIZE_EQGAME_OFFSET(CXStr__gFreeLists);
INITIALIZE_EQGAME_OFFSET(CXWnd__BringToTop);
INITIALIZE_EQGAME_OFFSET(CXWnd__ClrFocus);
INITIALIZE_EQGAME_OFFSET(CXWnd__CXWnd);
INITIALIZE_EQGAME_OFFSET(CXWnd__dCXWnd);
INITIALIZE_EQGAME_OFFSET(CXWnd__Destroy);
INITIALIZE_EQGAME_OFFSET(CXWnd__DoAllDrawing);
INITIALIZE_EQGAME_OFFSET(CXWnd__DrawColoredRect);
INITIALIZE_EQGAME_OFFSET(CXWnd__DrawTooltip);
INITIALIZE_EQGAME_OFFSET(CXWnd__DrawTooltipAtPoint);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetChildItem);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetChildWndAt);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetClientClipRect);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetRelativeRect);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetScreenClipRect);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetScreenRect);
INITIALIZE_EQGAME_OFFSET(CXWnd__GetTooltipRect);
INITIALIZE_EQGAME_OFFSET(CXWnd__IsActive);
INITIALIZE_EQGAME_OFFSET(CXWnd__IsDescendantOf);
INITIALIZE_EQGAME_OFFSET(CXWnd__IsReallyVisible);
INITIALIZE_EQGAME_OFFSET(CXWnd__IsType);
INITIALIZE_EQGAME_OFFSET(CXWnd__Minimize);
INITIALIZE_EQGAME_OFFSET(CXWnd__ProcessTransition);
INITIALIZE_EQGAME_OFFSET(CXWnd__Refade);
INITIALIZE_EQGAME_OFFSET(CXWnd__Resize);
INITIALIZE_EQGAME_OFFSET(CXWnd__Right);
INITIALIZE_EQGAME_OFFSET(CXWnd__SetFocus);
INITIALIZE_EQGAME_OFFSET(CXWnd__SetFont);
INITIALIZE_EQGAME_OFFSET(CXWnd__SetKeyTooltip);
INITIALIZE_EQGAME_OFFSET(CXWnd__SetMouseOver);
INITIALIZE_EQGAME_OFFSET(CXWnd__SetParent);
INITIALIZE_EQGAME_OFFSET(CXWnd__StartFade);
INITIALIZE_EQGAME_OFFSET(CXWnd__vftable);
INITIALIZE_EQGAME_OFFSET(CXWndManager__DrawCursor);
INITIALIZE_EQGAME_OFFSET(CXWndManager__DrawWindows);
INITIALIZE_EQGAME_OFFSET(CXWndManager__GetKeyboardFlags);
INITIALIZE_EQGAME_OFFSET(CXWndManager__HandleKeyboardMsg);
INITIALIZE_EQGAME_OFFSET(CXWndManager__RemoveWnd);
INITIALIZE_EQGAME_OFFSET(DrawNetStatus);
INITIALIZE_EQGAME_OFFSET(EQ_LoadingS__Array);
INITIALIZE_EQGAME_OFFSET(EQ_LoadingS__SetProgressBar);
#ifdef EQ_Spell__GetSpellAffectBySlot_x
INITIALIZE_EQGAME_OFFSET(EQ_Spell__GetSpellAffectBySlot);
#endif
INITIALIZE_EQGAME_OFFSET(EQ_Spell__GetSpellLevelNeeded);
#if defined(EQ_Spell__IsDegeneratingLevelMod_x)
INITIALIZE_EQGAME_OFFSET(EQ_Spell__IsDegeneratingLevelMod);
#endif
INITIALIZE_EQGAME_OFFSET(EQ_Spell__IsSPAIgnoredByStacking);
INITIALIZE_EQGAME_OFFSET(EQ_Spell__IsSPAStacking);
INITIALIZE_EQGAME_OFFSET(EQ_Spell__SpellAffectBase);
INITIALIZE_EQGAME_OFFSET(EQ_Spell__SpellAffects);
INITIALIZE_EQGAME_OFFSET(EQGroundItemListManager__Instance);
INITIALIZE_EQGAME_OFFSET(EQItemList__add_item);
INITIALIZE_EQGAME_OFFSET(EQItemList__delete_item);
INITIALIZE_EQGAME_OFFSET(EQItemList__EQItemList);
INITIALIZE_EQGAME_OFFSET(EQItemList__FreeItemList);
INITIALIZE_EQGAME_OFFSET(EQPlacedItemManager__GetItemByGuid);
INITIALIZE_EQGAME_OFFSET(EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds);
INITIALIZE_EQGAME_OFFSET(EQPlacedItemManager__Instance);
INITIALIZE_EQGAME_OFFSET(EqSoundManager__PlayScriptMp3);
INITIALIZE_EQGAME_OFFSET(EqSoundManager__SoundAssistPlay);
INITIALIZE_EQGAME_OFFSET(EqSoundManager__WaveInstancePlay);
INITIALIZE_EQGAME_OFFSET(EqSoundManager__WavePlay);
#if defined(pinstEQSpellStrings_x) // FIXME: Added 2018-02-21
INITIALIZE_EQGAME_OFFSET(EQSpellStrings__GetString);
#endif
INITIALIZE_EQGAME_OFFSET(EQSwitch__UseSwitch);
#if HAS_FACTION_WINDOW
INITIALIZE_EQGAME_OFFSET(FactionManagerClient__HandleFactionMessage);
INITIALIZE_EQGAME_OFFSET(FactionManagerClient__Instance);
#endif
INITIALIZE_EQGAME_OFFSET(FreeTargetTracker__CastSpell);
INITIALIZE_EQGAME_OFFSET(IconCache__GetIcon);
INITIALIZE_EQGAME_OFFSET(ItemBase__CanGemFitInSlot);
INITIALIZE_EQGAME_OFFSET(ItemBase__CreateItemTagString);
INITIALIZE_EQGAME_OFFSET(ItemBase__GetImageNum);
INITIALIZE_EQGAME_OFFSET(ItemBase__GetItemValue);
INITIALIZE_EQGAME_OFFSET(ItemBase__IsEmpty);
#if HAS_KEYRING_WINDOW
INITIALIZE_EQGAME_OFFSET(ItemBase__IsKeyRingItem);
#endif
INITIALIZE_EQGAME_OFFSET(ItemBase__IsLore);
#if HAS_LORE_EQUIPPED
INITIALIZE_EQGAME_OFFSET(ItemBase__IsLoreEquipped);
#endif
INITIALIZE_EQGAME_OFFSET(ItemBase__ValueSellMerchant);
INITIALIZE_EQGAME_OFFSET(ItemClient__CanDrop);
INITIALIZE_EQGAME_OFFSET(ItemClient__CanGoInBag);
INITIALIZE_EQGAME_OFFSET(ItemClient__CreateItemClient);
INITIALIZE_EQGAME_OFFSET(ItemClient__dItemClient);
INITIALIZE_EQGAME_OFFSET(KeyCombo__GetTextDescription);
INITIALIZE_EQGAME_OFFSET(KeypressHandler__AttachAltKeyToEqCommand);
INITIALIZE_EQGAME_OFFSET(KeypressHandler__AttachKeyToEqCommand);
INITIALIZE_EQGAME_OFFSET(KeypressHandler__ClearCommandStateArray);
#if defined(KeypressHandler__Get_x)
INITIALIZE_EQGAME_OFFSET(KeypressHandler__Get);
#endif
INITIALIZE_EQGAME_OFFSET(KeypressHandler__HandleKeyDown);
INITIALIZE_EQGAME_OFFSET(KeypressHandler__HandleKeyUp);
INITIALIZE_EQGAME_OFFSET(KeypressHandler__SaveKeymapping);
#if HAS_ADVANCED_LOOT
INITIALIZE_EQGAME_OFFSET(LootFiltersManager__AddItemLootFilter);
INITIALIZE_EQGAME_OFFSET(LootFiltersManager__GetItemFilterData);
INITIALIZE_EQGAME_OFFSET(LootFiltersManager__RemoveItemLootFilter);
INITIALIZE_EQGAME_OFFSET(LootFiltersManager__SetItemLootFilter);
#endif
INITIALIZE_EQGAME_OFFSET(MapViewMap__Clear);
INITIALIZE_EQGAME_OFFSET(MapViewMap__SetZoom);
INITIALIZE_EQGAME_OFFSET(MapViewMap__vftable);
#if HAS_MERCENARY_AA
INITIALIZE_EQGAME_OFFSET(MercenaryAlternateAdvancementManagerClient__BuyAbility);
INITIALIZE_EQGAME_OFFSET(MercenaryAlternateAdvancementManagerClient__Instance);
#endif
INITIALIZE_EQGAME_OFFSET(msg_new_text);
INITIALIZE_EQGAME_OFFSET(msg_spell_worn_off);
INITIALIZE_EQGAME_OFFSET(msgTokenText);
INITIALIZE_EQGAME_OFFSET(MultipleItemMoveManager__ProcessMove);
INITIALIZE_EQGAME_OFFSET(PcBase__GetAlternateAbilityId);
INITIALIZE_EQGAME_OFFSET(PcBase__GetCombatAbility);
INITIALIZE_EQGAME_OFFSET(PcBase__GetCombatAbilityTimer);
INITIALIZE_EQGAME_OFFSET(PcBase__GetItemContainedRealEstateIds);
INITIALIZE_EQGAME_OFFSET(PcBase__GetNonArchivedOwnedRealEstates);
INITIALIZE_EQGAME_OFFSET(PcClient__AlertInventoryChanged);
INITIALIZE_EQGAME_OFFSET(PcClient__GetConLevel);
INITIALIZE_EQGAME_OFFSET(PcClient__HasLoreItem);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__BandolierSwap);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__CanEquipItem);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__DestroyHeldItemOrMoney);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__doCombatAbility);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__GetItemByID);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__GetItemRecastTimer);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__GetLinkedSpellReuseTimer);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__GetPcSkillLimit);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__HasAlternateAbility);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__RemoveBuffEffect);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__RemoveMyAffect);
INITIALIZE_EQGAME_OFFSET(PcZoneClient__RemovePetEffect);
#if HAS_ADVANCED_LOOT
INITIALIZE_EQGAME_OFFSET(pinstLootFiltersManager);
#endif
INITIALIZE_EQGAME_OFFSET(PlayerBase__CanSee);
INITIALIZE_EQGAME_OFFSET(PlayerBase__CanSee1);
INITIALIZE_EQGAME_OFFSET(PlayerBase__GetVisibilityLineSegment);
INITIALIZE_EQGAME_OFFSET(PlayerBase__HasProperty);
INITIALIZE_EQGAME_OFFSET(PlayerBase__IsTargetable);
INITIALIZE_EQGAME_OFFSET(PlayerClient__ChangeBoneStringSprite);
INITIALIZE_EQGAME_OFFSET(PlayerClient__GetPcClient);
INITIALIZE_EQGAME_OFFSET(PlayerClient__SetNameSpriteState);
INITIALIZE_EQGAME_OFFSET(PlayerClient__SetNameSpriteTint);
INITIALIZE_EQGAME_OFFSET(PlayerManagerBase__DestroyAllPlayers);
INITIALIZE_EQGAME_OFFSET(PlayerManagerBase__PrepForDestroyPlayer);
INITIALIZE_EQGAME_OFFSET(PlayerManagerClient__CreatePlayer);
INITIALIZE_EQGAME_OFFSET(PlayerManagerClient__GetPlayerFromPartialName);
INITIALIZE_EQGAME_OFFSET(PlayerManagerClient__GetSpawnByID);
INITIALIZE_EQGAME_OFFSET(PlayerManagerClient__GetSpawnByName);
INITIALIZE_EQGAME_OFFSET(PlayerPointManager__GetAltCurrency);
INITIALIZE_EQGAME_OFFSET(PlayerZoneClient__ChangeHeight);
INITIALIZE_EQGAME_OFFSET(PlayerZoneClient__DoAttack);
INITIALIZE_EQGAME_OFFSET(PlayerZoneClient__GetLevel);
INITIALIZE_EQGAME_OFFSET(PlayerZoneClient__IsValidTeleport);
INITIALIZE_EQGAME_OFFSET(ProfileManager__GetCurrentProfile);
INITIALIZE_EQGAME_OFFSET(RealEstateManagerClient__Instance);
INITIALIZE_EQGAME_OFFSET(SpellManager__GetSpellByGroupAndRank);
INITIALIZE_EQGAME_OFFSET(Spellmanager__LoadTextSpells);
INITIALIZE_EQGAME_OFFSET(StringTable__getString);
INITIALIZE_EQGAME_OFFSET(Teleport_Table_Size);
INITIALIZE_EQGAME_OFFSET(Teleport_Table);
INITIALIZE_EQGAME_OFFSET(Util__FastTime);
INITIALIZE_EQGAME_OFFSET(ZoneGuideManagerClient__Instance);

//----------------------------------------------------------------------------
// Instance Pointers
//----------------------------------------------------------------------------

CMDLIST*               EQADDR_CMDLIST            = nullptr;
IDirectInputDevice8A** EQADDR_DIKEYBOARD         = nullptr;
uintptr_t              EQADDR_DIMAIN             = 0;
IDirectInputDevice8A** EQADDR_DIMOUSE            = nullptr;
POINT*                 EQADDR_DIMOUSECHECK       = nullptr;
void*                  EQADDR_GWORLD             = nullptr;
uintptr_t              EQADDR_HWND               = 0;
MQMouseInfo*           EQADDR_MOUSE              = nullptr;
char*                  EQADDR_SERVERHOST         = nullptr;
uintptr_t*             EQADDR_SUBSCRIPTIONTYPE   = nullptr;
char**                 EQMappableCommandList     = nullptr;
BYTE*                  EQbCommandStates          = nullptr;
HMODULE*               ghEQMainInstance          = nullptr;
DWORD*                 gpbCommandEvent           = nullptr;
DWORD*                 gpMouseEventTime          = nullptr;
CDynamicZone*          pDynamicZone              = nullptr;
EQLogin*               pEQLogin                  = nullptr;
CTribute*              pTribute                  = nullptr;
CTribute*              pEQMisc                   = nullptr;
CEQSuiteTextureLoader* pEQSuiteTextureLoader     = nullptr;
INT*                   pgCurrentSocial           = nullptr;
CGuild*                pGuild                    = nullptr;
CGuild*                pGuildList                = nullptr;
CRaid*                 pRaid                     = nullptr;
DWORD*                 pScreenMode               = nullptr;
SpellLoadout*          pSpellSets                = nullptr;
CTaskManager*          pTaskManager              = nullptr;
BYTE*                  pTributeActive            = nullptr;
ZONEINFO*              pZoneInfo                 = nullptr;
SoeUtil::String*       pExceptionSubmissionEndpoint = nullptr;
LabelCache*            g_labelCache              = nullptr;

// pEverQuestInfo pointers
EverQuestinfo*         pEverQuestInfo            = nullptr;
int*                   pScreenX                  = nullptr;
int*                   pScreenY                  = nullptr;
int*                   pScreenXMax               = nullptr;
int*                   pScreenYMax               = nullptr;
uint8_t*               pMouseLook                = nullptr;
bool*                  gpbShowNetStatus          = nullptr;
bool*                  gpShiftKeyDown            = nullptr; // addr+1=ctrl, addr+2=alt
EQSOCIAL*              pSocialList               = nullptr;
uint8_t*               EQADDR_NOTINCHATMODE      = nullptr;
uint8_t*               EQADDR_RUNWALKSTATE       = nullptr;
uint8_t*               EQADDR_ZONETYPE           = nullptr;
char*                  EQADDR_SERVERNAME         = nullptr;
int*                   EQADDR_DOABILITYLIST      = nullptr;
BYTE*                  EQADDR_ATTACK             = nullptr;
BYTE*                  gpAutoFire                = nullptr;

ForeignPointer<PcClient>                         pCharData;          // deprecated
ForeignPointer<PcClient>                         pPCData;            // deprecated
ForeignPointer<PcClient>                         pLocalPC;
ForeignPointer<PlayerClient>                     pActiveBanker;
ForeignPointer<PlayerClient>                     pActiveCorpse;
ForeignPointer<PlayerClient>                     pActiveGMaster;
ForeignPointer<PlayerClient>                     pActiveMerchant;
ForeignPointer<PlayerClient>                     pCharSpawn;         // deprecated
ForeignPointer<PlayerClient>                     pControlledPlayer;
ForeignPointer<PlayerClient>                     pLocalPlayer;
ForeignPointer<PlayerClient>                     pTarget;
ForeignPointer<PlayerClient>                     pTradeTarget;
ComputedPointer<PlayerClient>                    pSpawnList([] { return pSpawnManager ? pSpawnManager->FirstSpawn : nullptr; });

ComputedPointer<AggroMeterManagerClient>         pAggroInfo([]{ return &AggroMeterManagerClient::Instance(); });
ForeignPointer<AltAdvManager>                    pAltAdvManager;
ComputedPointer<ClientAuraManager>               pAuraMgr([]{ return ClientAuraManager::GetSingleton(); });
ForeignPointer<CChatWindowManager>               pChatManager;
ComputedPointer<UniversalChatProxy>              pChatService([]{ return pEverQuest->chatService; });
ForeignPointer<connection_t>                     pConnection;
ForeignPointer<CContainerMgr>                    pContainerMgr;
ForeignPointer<CContextMenuManager>              pContextMenuManager;
ForeignPointer<MAPLABEL>                         pCurrentMapLabel;
ForeignPointer<DatabaseStringTable>              pDBStr;
ForeignPointer<CDisplay>                         pDisplay;
ForeignPointer<DynamicZonePlayerInfo>            pDZMember;
ForeignPointer<DynamicZoneClientTimerData>       pDZTimerInfo;
ForeignPointer<EqSoundManager>                   pEqSoundManager;
ForeignPointer<EQSpellStrings>                   pEQSpellStrings;
ForeignPointer<CEverQuest, EVERQUEST>            pEverQuest;
ForeignPointer<SGraphicsEngine>                  pGraphicsEngine;
ForeignPointer<CItemDisplayManager>              pItemDisplayManager;
ForeignPointer<CSpellDisplayManager>             pSpellDisplayManager;
ComputedPointer<EQGroundItemListManager>         pItemList([]{ return &EQGroundItemListManager::Instance(); });
#if defined(KeypressHandler__Get_x)
ComputedPointer<KeypressHandler>                 pKeypressHandler([]{ return &KeypressHandler::Get(); });
#elif defined (pinstKeypressHandler_x)
ForeignPointer<KeypressHandler>                  pKeypressHandler;
#endif
#if HAS_ADVANCED_LOOT
ForeignPointer<LootFiltersManager>               pLootFiltersManager;
#endif
#if HAS_MERCENARY_AA
ComputedPointer<MercenaryAlternateAdvancementManagerClient> pMercAltAbilities([]{ return &MercenaryAlternateAdvancementManagerClient::Instance(); });
#endif
ForeignPointer<CMercenaryManager>                pMercInfo;
ForeignPointer<CMercenaryManager>                pMercManager;
ComputedPointer<CPlayerPointManager>             pPlayerPointManager([]{ return pLocalPC ? (PlayerPointManager*)&pLocalPC->PointManager : nullptr; });
ComputedPointer<RealEstateManagerClient>         pRealEstate([] { return &RealEstateManagerClient::Instance(); });
ForeignPointer<CResolutionHandler>               pResolutionHandler;
ForeignPointer<CSidlManager>                     pSidlMgr;
ForeignPointer<SkillManager>                     pSkillMgr;
ForeignPointer<SkillManager>                     pCSkillMgr;
ForeignPointer<PlayerManagerClient>              pSpawnManager;
ForeignPointer<ClientSpellManager>               pSpellMgr;
ForeignPointer<StringTable>                      pStringTable;
ForeignPointer<EqSwitchManager>                  pSwitchMgr;
ForeignPointer<SharedTaskPlayerInfo>             pTaskMember;
ComputedPointer<CBroadcast>                      pTextOverlay([]{ return CBroadcast::Get(); });
ForeignPointer<CXWndManager>                     pWndMgr;
ForeignPointer<EQWorldData>                      pWorldData;

/* WINDOW INSTANCES */
ForeignPointer<CAAWnd>                           pAAWnd;
ForeignPointer<CAchievementsWnd>                 pAchievementsWnd;
ForeignPointer<CActionsWnd>                      pActionsWnd;
ForeignPointer<CSidlScreenWnd>                   pAdvancedDisplayOptionsWnd;
ForeignPointer<CAdvancedLootWnd>                 pAdvancedLootWnd;
ForeignPointer<CSidlScreenWnd>                   pAdventureLeaderboardWnd;
ForeignPointer<CSidlScreenWnd>                   pAdventureRequestWnd;
ForeignPointer<CSidlScreenWnd>                   pAdventureStatsWnd;
ForeignPointer<CSidlScreenWnd>                   pAggroMeterWnd;
ForeignPointer<CAlarmWnd>                        pAlarmWnd;
ForeignPointer<CSidlScreenWnd>                   pAlertHistoryWnd;
ForeignPointer<CSidlScreenWnd>                   pAlertStackWnd;
ForeignPointer<CSidlScreenWnd>                   pAlertWnd;
ForeignPointer<CSidlScreenWnd>                   pAltStorageWnd;
ForeignPointer<CSidlScreenWnd>                   pAudioTriggersWnd;
ForeignPointer<CAuraWnd>                         pAuraWnd;
ForeignPointer<CBandolierWnd>                    pBandolierWnd;
ForeignPointer<CBankWnd>                         pBankWnd;
ForeignPointer<CSidlScreenWnd>                   pBarterMerchantWnd;
ForeignPointer<CBarterSearchWnd>                 pBarterSearchWnd;
ForeignPointer<CBarterWnd>                       pBarterWnd;
ForeignPointer<CSidlScreenWnd>                   pBazaarConfirmationWnd;
ForeignPointer<CBazaarSearchWnd>                 pBazaarSearchWnd;
ForeignPointer<CBazaarWnd>                       pBazaarWnd;
ForeignPointer<CSidlScreenWnd>                   pBlockedBuffWnd;
ForeignPointer<CSidlScreenWnd>                   pBlockedPetBuffWnd;
ForeignPointer<CBodyTintWnd>                     pBodyTintWnd;
ForeignPointer<CBookWnd>                         pBookWnd;
ForeignPointer<CBreathWnd>                       pBreathWnd;
ForeignPointer<CBuffWindow>                      pBuffWnd;
ForeignPointer<CBuffWindow>                      pSongWnd;
ForeignPointer<CBugReportWnd>                    pBugReportWnd;
ForeignPointer<CCastingWnd>                      pCastingWnd;
ForeignPointer<CCastSpellWnd>                    pCastSpellWnd;
ForeignPointer<CSidlScreenWnd>                   pCharacterCreation;
ForeignPointer<CCharacterListWnd>                pCharacterListWnd;
ForeignPointer<CSidlScreenWnd>                   pClaimWnd;
ForeignPointer<CColorPickerWnd>                  pColorPickerWnd;
ForeignPointer<CCombatAbilityWnd>                pCombatAbilityWnd;
ForeignPointer<CCombatSkillsSelectWnd>           pCombatSkillsSelectWnd;
ForeignPointer<CCompassWnd>                      pCompassWnd;
ForeignPointer<CSidlScreenWnd>                   pContextTipWnd;
ForeignPointer<CCursorAttachment>                pCursorAttachment;
ForeignPointer<CSidlScreenWnd>                   pDragonHoardWnd;
ForeignPointer<CSidlScreenWnd>                   pDynamicZoneWnd;
ForeignPointer<CEditLabelWnd>                    pEditLabelWnd;
ForeignPointer<CEQMainWnd>                       pEQMainWnd;
ForeignPointer<CSidlScreenWnd>                   pEventCalendarWnd;
ForeignPointer<CExtendedTargetWnd>               pExtendedTargetWnd;
ForeignPointer<CFactionWnd>                      pFactionWnd;
ForeignPointer<CFeedbackWnd>                     pFeedbackWnd;
ForeignPointer<CSidlScreenWnd>                   pFellowshipWnd;
ForeignPointer<CFileSelectionWnd>                pFileSelectionWnd;
ForeignPointer<CFindItemWnd>                     pFindItemWnd;
ForeignPointer<CFindLocationWnd>                 pFindLocationWnd;
ForeignPointer<CFriendsWnd>                      pFriendsWnd;
ForeignPointer<CGemsGameWnd>                     pGemsGameWnd;
ForeignPointer<CGiveWnd>                         pGiveWnd;
ForeignPointer<CGroupSearchFiltersWnd>           pGroupSearchFiltersWnd;
ForeignPointer<CGroupSearchWnd>                  pGroupSearchWnd;
ForeignPointer<CGroupWnd>                        pGroupWnd;
ForeignPointer<CSidlScreenWnd>                   pGuildBankWnd;
ForeignPointer<CSidlScreenWnd>                   pGuildCreationWnd;
ForeignPointer<CGuildMgmtWnd>                    pGuildMgmtWnd;
ForeignPointer<CHelpWnd>                         pHelpWnd;
ForeignPointer<CSidlScreenWnd>                   pHeritageSelectionWnd;
ForeignPointer<CHotButtonWnd>                    pHotButtonWnd;
ForeignPointer<CHotButtonWnd>                    pHotButtonWnds[MAX_HOTBUTTON_WNDS];
ForeignPointer<CSidlScreenWnd>                   pIconSelectionWnd;
ForeignPointer<CInspectWnd>                      pInspectWnd;
ForeignPointer<CInventoryWnd>                    pInventoryWnd;
ForeignPointer<CInvSlotMgr>                      pInvSlotMgr;
ForeignPointer<CSidlScreenWnd>                   pItemExpTransferWnd;
ForeignPointer<CSidlScreenWnd>                   pItemFuseWnd;
ForeignPointer<CSidlScreenWnd>                   pItemOverflowWnd;
ForeignPointer<CJournalCatWnd>                   pJournalCatWnd;
ForeignPointer<CJournalTextWnd>                  pJournalTextWnd;
#if HAS_KEYRING_WINDOW
ForeignPointer<CKeyRingWnd>                      pKeyRingWnd;
#endif // HAS_KEYRING_WINDOW
ForeignPointer<CLargeDialogWnd>                  pLargeDialog;
ForeignPointer<CSidlScreenWnd>                   pLayoutCopyWnd;
ForeignPointer<CSidlScreenWnd>                   pLFGuildWnd;
ForeignPointer<CLoadskinWnd>                     pLoadskinWnd;
ForeignPointer<CSidlScreenWnd>                   pLootFiltersCopyWnd;
ForeignPointer<CSidlScreenWnd>                   pLootFiltersWnd;
ForeignPointer<CSidlScreenWnd>                   pLootSettingsWnd;
ForeignPointer<CLootWnd>                         pLootWnd;
ForeignPointer<CSidlScreenWnd>                   pMailAddressBookWnd;
ForeignPointer<CSidlScreenWnd>                   pMailCompositionWnd;
ForeignPointer<CSidlScreenWnd>                   pMailIgnoreListWindow;
ForeignPointer<CSidlScreenWnd>                   pMailWnd;
ForeignPointer<CSidlScreenWnd>                   pManageLootWnd;
ForeignPointer<CMapToolbarWnd>                   pMapToolbarWnd;
ForeignPointer<CMapViewWnd>                      pMapViewWnd;
ForeignPointer<CMarketplaceWnd>                  pMarketplaceWnd;
ForeignPointer<CMerchantWnd>                     pMerchantWnd;
ForeignPointer<CSidlScreenWnd>                   pMIZoneSelectWnd;
ForeignPointer<CMusicPlayerWnd>                  pMusicPlayerWnd;
ForeignPointer<CSidlScreenWnd>                   pNameChangeMercWnd;
ForeignPointer<CSidlScreenWnd>                   pNameChangePetWnd;
ForeignPointer<CSidlScreenWnd>                   pNameChangeWnd;
ForeignPointer<CNoteWnd>                         pNoteWnd;
ForeignPointer<CSidlScreenWnd>                   pObjectPreviewWnd;
ForeignPointer<COptionsWnd>                      pOptionsWnd;
ForeignPointer<COverseerWnd>                     pOverseerWnd;
ForeignPointer<CPetInfoWnd>                      pPetInfoWnd;
ForeignPointer<CPetitionQWnd>                    pPetitionQWnd;
ForeignPointer<CPlayerCustomizationWnd>          pPlayerCustomizationWnd;
ForeignPointer<CPlayerNotesWnd>                  pPlayerNotesWnd;
ForeignPointer<CPlayerWnd>                       pPlayerWnd;
ForeignPointer<CSidlScreenWnd>                   pProgressionSelectionWnd;
ForeignPointer<CPurchaseGroupWnd>                pPurchaseGroupWnd;
ForeignPointer<CSidlScreenWnd>                   pPurchaseWnd;
ForeignPointer<CSidlScreenWnd>                   pPvPLeaderboardWnd;
ForeignPointer<CSidlScreenWnd>                   pPvPStatsWnd;
ForeignPointer<CQuantityWnd>                     pQuantityWnd;
ForeignPointer<CSidlScreenWnd>                   pRaceChangeWnd;
ForeignPointer<CRaidOptionsWnd>                  pRaidOptionsWnd;
ForeignPointer<CRaidWnd>                         pRaidWnd;
ForeignPointer<CRealEstateItemsWnd>              pRealEstateItemsWnd;
ForeignPointer<CSidlScreenWnd>                   pRealEstateLayoutDetailsWnd;
ForeignPointer<CSidlScreenWnd>                   pRealEstateManageWnd;
ForeignPointer<CSidlScreenWnd>                   pRealEstateNeighborhoodWnd;
ForeignPointer<CSidlScreenWnd>                   pRealEstatePlotSearchWnd;
ForeignPointer<CSidlScreenWnd>                   pRealEstatePurchaseWnd;
ForeignPointer<CRespawnWnd>                      pRespawnWnd;
ForeignPointer<CRewardSelectionWnd>              pRewardSelectionWnd;
ForeignPointer<CSelectorWnd>                     pSelectorWnd;
ForeignPointer<CSidlScreenWnd>                   pSendMoneyWnd;
ForeignPointer<CSidlScreenWnd>                   pServerListWnd;
ForeignPointer<CSkillsSelectWnd>                 pSkillsSelectWnd;
ForeignPointer<CSkillsWnd>                       pSkillsWnd;
ForeignPointer<CSocialEditWnd>                   pSocialEditWnd;
ForeignPointer<CSidlScreenWnd>                   pSocialWnd;
ForeignPointer<CSpellBookWnd>                    pSpellBookWnd;
ForeignPointer<CStoryWnd>                        pStoryWnd;
ForeignPointer<CSidlScreenWnd>                   pTargetOfTargetWnd;
ForeignPointer<CTargetWnd>                       pTargetWnd;
ForeignPointer<CSidlScreenWnd>                   pTaskOverlayWnd;
ForeignPointer<CSidlScreenWnd>                   pTaskSelectWnd;
ForeignPointer<CSidlScreenWnd>                   pTaskTemplateSelectWnd;
ForeignPointer<CTaskWnd>                         pTaskWnd;
ForeignPointer<CTextEntryWnd>                    pTextEntryWnd;
ForeignPointer<CTipWnd>                          pTipOfDayWnd;
ForeignPointer<CSidlScreenWnd>                   pTitleWnd;
ForeignPointer<CTrackingWnd>                     pTrackingWnd;
ForeignPointer<CSidlScreenWnd>                   pTradeskillWnd;
ForeignPointer<CTradeWnd>                        pTradeWnd;
ForeignPointer<CTrainWnd>                        pTrainWnd;
ForeignPointer<CSidlScreenWnd>                   pTributeBenefitWnd;
ForeignPointer<CSidlScreenWnd>                   pTributeMasterWnd;
ForeignPointer<CSidlScreenWnd>                   pTributeTrophyWnd;
ForeignPointer<CVideoModesWnd>                   pVideoModesWnd;
ForeignPointer<CSidlScreenWnd>                   pVoiceMacroWnd;
ForeignPointer<CSidlScreenWnd>                   pVoteResultsWnd;
ForeignPointer<CSidlScreenWnd>                   pVoteWnd;
ForeignPointer<CZoneGuideWnd>                    pZoneGuideWnd;
ForeignPointer<CZonePathWnd>                     pZonePathWnd;

ForeignPointer<CRender>                          g_pDrawHandler;

fEQNewUIINI            NewUIINI                  = nullptr;
fEQProcGameEvts        ProcessGameEvents         = nullptr;
fGetLabelFromEQ        GetLabelFromEQ            = nullptr;
uintptr_t              __ModuleList              = 0;
uintptr_t              __ProcessList             = 0;

void InitializeGlobalOffsets()
{
	__ModuleList = (uintptr_t)GetProcAddress((HMODULE)Kernel32BaseAddress, "K32EnumProcessModules");
	__ProcessList = (uintptr_t)GetProcAddress((HMODULE)Kernel32BaseAddress, "K32EnumProcesses");
}

void InitializeEQGameOffsets()
{
	if (!EQGameBaseAddress)
	{
		return;
	}

	// Raw pointers (value types in eq)
	EQADDR_CMDLIST                  = (PCMDLIST)__CommandList;
	EQADDR_DIKEYBOARD               = (IDirectInputDevice8A**)DI8__Keyboard;
	EQADDR_DIMAIN                   = DI8__Main;
	EQADDR_DIMOUSE                  = (IDirectInputDevice8A**)DI8__Mouse;
	EQADDR_DIMOUSECHECK             = (PPOINT)DI8__Mouse_Check;
	EQADDR_GWORLD                   = (void*)__gWorld;
	EQADDR_HWND                     = __HWnd;
	EQADDR_MOUSE                    = (MQMouseInfo*)__Mouse;
	EQADDR_SERVERHOST               = (char*)__ServerHost;
	EQADDR_SUBSCRIPTIONTYPE         = (uintptr_t*)__SubscriptionType;
	EQbCommandStates                = (BYTE*)g_eqCommandStates;
	EQMappableCommandList           = (char**)__BindList;
	ghEQMainInstance                = (HINSTANCE*)__heqmain;
	gpbCommandEvent                 = (DWORD*)__gpbCommandEvent;
	gpMouseEventTime                = (DWORD*)__MouseEventTime;
	pDynamicZone                    = (CDynamicZone*)instDynamicZone;
	pEQLogin                        = (EQLogin*)pinstEqLogin;
	pTribute                        = (CTribute*)instTribute;
#pragma warning(suppress: 4996)
	pEQMisc                         = (CTribute*)instTribute;
	pEQSuiteTextureLoader           = (CEQSuiteTextureLoader*)pinstEQSuiteTextureLoader;
	pgCurrentSocial                 = (INT*)__CurrentSocial;
	pGuild                          = (CGuild*)__Guilds;
#pragma warning(suppress: 4996)
	pGuildList                      = (CGuild*)__Guilds;
	pRaid                           = (CRaid*)instCRaid;
	pScreenMode                     = (DWORD*)__ScreenMode;
	pTaskManager                    = (CTaskManager*)pinstCTaskManager;
	pTributeActive                  = (BYTE*)instTributeActive;
	pZoneInfo                       = (ZONEINFO*)instEQZoneInfo;

	pEverQuestInfo = (EverQuestinfo*)pinstEverQuestInfo;

	// pEverQuestInfo pointers - to be phased out.
	pScreenX                        = &pEverQuestInfo->Render_MinX;
	pScreenY                        = &pEverQuestInfo->Render_MinY;
	pScreenXMax                     = &pEverQuestInfo->Render_MaxX;
	pScreenYMax                     = &pEverQuestInfo->Render_MaxY;
	EQADDR_NOTINCHATMODE            = (uint8_t*)&pEverQuestInfo->KeyboardMode;
	EQADDR_RUNWALKSTATE             = &pEverQuestInfo->RunMode;
	pMouseLook                      = &pEverQuestInfo->MouseLook;
	gpbShowNetStatus                = &pEverQuestInfo->bNetstat;
	gpShiftKeyDown                  = &pEverQuestInfo->bIsPressedShift;
	pSocialList                     = &pEverQuestInfo->socials[0][0];
	pSpellSets                      = &pEverQuestInfo->spellLoadouts[0];
	gpAutoFire                      = (BYTE*)&pEverQuestInfo->bAutoRangeAttack;

	//static_assert(instEQZoneInfo_x - pinstEverQuestInfo_x == offsetof(EverQuestinfo, ZoneInfo),
	//	"Mismatch between instEQZoneInfo and ZoneInfo struct member");
#pragma warning(suppress: 4996)
	EQADDR_ZONETYPE                 = (uint8_t*)&pEverQuestInfo->ZoneInfo.OutDoor;
#pragma warning(suppress: 4996)
	EQADDR_SERVERNAME               = pEverQuestInfo->WorldServerShortname;
#pragma warning(suppress: 4996)
	EQADDR_DOABILITYLIST            = &pEverQuestInfo->combatSkill[0];
#pragma warning(suppress: 4996)
	EQADDR_ATTACK                   = (BYTE*)&pEverQuestInfo->bAutoAttack;

	CDisplay::cameraType            = (int*)CDisplay__cameraType;

	// Spawn/Char pointers
#pragma warning(suppress: 4996)
	pCharData                       = pinstLocalPC;                    // deprecated
#pragma warning(suppress: 4996)
	pPCData                         = pinstLocalPC;                    // deprecated
	pLocalPC                        = pinstLocalPC;
	pActiveBanker                   = pinstActiveBanker;
	pActiveCorpse                   = pinstActiveCorpse;
	pActiveGMaster                  = pinstActiveGMaster;
	pActiveMerchant                 = pinstActiveMerchant;
#pragma warning(suppress: 4996)
	pCharSpawn                      = pinstControlledPlayer;           // deprecated
	pControlledPlayer               = pinstControlledPlayer;
	pLocalPlayer                    = pinstLocalPlayer;
	pTarget                         = pinstTarget;
	pTradeTarget                    = pinstTradeTarget;

	// Non-UI Foreign Pointers (pointer types in eq)
	pAltAdvManager                  = pinstAltAdvManager;
	pChatManager                    = pinstCChatWindowManager;
	pConnection                     = __gWorld;
	pContainerMgr                   = pinstCContainerMgr;
	pContextMenuManager             = pinstCContextMenuManager;
	pCurrentMapLabel                = __CurrentMapLabel;
	pDBStr                          = pinstCDBStr;
	pDisplay                        = pinstCDisplay;
	pDZMember                       = pinstDZMember;
	pDZTimerInfo                    = pinstDZTimerInfo;
	pEqSoundManager                 = pinstEQSoundManager;
#if defined(pinstEQSpellStrings_x)
	pEQSpellStrings                 = pinstEQSpellStrings;
#endif
	pEverQuest                      = pinstCEverQuest;
	pGraphicsEngine                 = pinstSGraphicsEngine;
	pInvSlotMgr                     = pinstCInvSlotMgr;
	pItemDisplayManager             = pinstCItemDisplayManager;
#if defined (pinstKeypressHandler_x)
	pKeypressHandler                = pinstKeypressHandler;
#endif
#if HAS_ADVANCED_LOOT
	pLootFiltersManager             = pinstLootFiltersManager;
#endif
#pragma warning(suppress: 4996)
	pMercInfo                       = pinstCMercenaryClientManager;    // deprecated
	pMercManager                    = pinstCMercenaryClientManager;
	pResolutionHandler              = pinstCResolutionHandler;
	pSidlMgr                        = pinstCSidlManager;
	pSkillMgr                       = pinstSkillMgr;
#pragma warning(suppress: 4996)
	pCSkillMgr                      = pinstSkillMgr;                   // deprecated
	pSpawnManager                   = pinstSpawnManager;
	pSpellMgr                       = pinstSpellManager;
	pSpellDisplayManager            = pinstCSpellDisplayMgr;
	pStringTable                    = pinstStringTable;
	pSwitchMgr                      = pinstSwitchManager;
	pTaskMember                     = pinstTaskMember;
	pWndMgr                         = pinstCXWndManager;
	pWorldData                      = pinstWorldData;

	g_pDrawHandler                  = pinstRenderInterface;
	g_labelCache                    = (LabelCache*)__LabelCache;

	NewUIINI                        = (fEQNewUIINI)__NewUIINI;
	ProcessGameEvents               = (fEQProcGameEvts)__ProcessGameEvents;
	GetLabelFromEQ                  = (fGetLabelFromEQ)__GetLabelFromEQ;

	InitializeInGameUI();
}

#pragma endregion

#pragma region EQGraphicsDX9.dll offsets

//============================================================================
//
// EQGraphicsDX9.dll Offsets
INITIALIZE_EQGRAPHICS_OFFSET(__eqgraphics_fopen);
INITIALIZE_EQGRAPHICS_OFFSET(CParticleSystem__Render);
INITIALIZE_EQGRAPHICS_OFFSET(CParticleSystem__CreateSpellEmitter);
INITIALIZE_EQGRAPHICS_OFFSET(CRender__RenderScene);
INITIALIZE_EQGRAPHICS_OFFSET(CRender__RenderBlind);
INITIALIZE_EQGRAPHICS_OFFSET(CRender__UpdateDisplay);
INITIALIZE_EQGRAPHICS_OFFSET(CRender__ResetDevice);
INITIALIZE_EQGRAPHICS_OFFSET(C2DPrimitiveManager__AddCachedText);

INITIALIZE_EQGRAPHICS_OFFSET(__bRenderSceneCalled);
BOOL* g_bRenderSceneCalled = (BOOL*)__bRenderSceneCalled;

void InitializeEQGraphicsOffsets()
{
	if (!EQGraphicsBaseAddress)
	{
		// no EQGraphicsDx9.dll loaded yet
		HMODULE hLibrary = LoadLibrary("EQGraphicsDX9.dll");
		EQGraphicsBaseAddress = (uintptr_t)hLibrary;

		__eqgraphics_fopen = FixEQGraphicsOffset(__eqgraphics_fopen_x);
		CParticleSystem__Render = FixEQGraphicsOffset(CParticleSystem__Render_x);
		CParticleSystem__CreateSpellEmitter = FixEQGraphicsOffset(CParticleSystem__CreateSpellEmitter_x);
		CRender__RenderScene = FixEQGraphicsOffset(CRender__RenderScene_x);
		CRender__RenderBlind = FixEQGraphicsOffset(CRender__RenderBlind_x);
		CRender__UpdateDisplay = FixEQGraphicsOffset(CRender__UpdateDisplay_x);
		CRender__ResetDevice = FixEQGraphicsOffset(CRender__ResetDevice_x);
		g_bRenderSceneCalled = (BOOL*)FixEQGraphicsOffset(__bRenderSceneCalled_x);
		C2DPrimitiveManager__AddCachedText = FixEQGraphicsOffset(C2DPrimitiveManager__AddCachedText_x);
	}
}

#pragma endregion

#pragma region eqmain.dll offsets

//============================================================================
//
// EQMain.dll

//----------------------------------------------------------------------------
// offsets / patterns

uintptr_t EQMain__CEQSuiteTextureLoader__GetTexture = 0;
uintptr_t EQMain__CLoginViewManager__HandleLButtonUp = 0;
uintptr_t EQMain__CXWndManager__GetCursorToDisplay = 0;
uintptr_t EQMain__LoginController__GiveTime = 0;
uintptr_t EQMain__LoginController__ProcessKeyboardEvents = 0;
uintptr_t EQMain__LoginController__ProcessMouseEvents = 0;
uintptr_t EQMain__LoginController__Shutdown = 0;
uintptr_t EQMain__LoginServerAPI__JoinServer = 0;
uintptr_t EQMain__WndProc = 0;

uintptr_t EQMain__pinstCEQSuiteTextureLoader = 0;
uintptr_t EQMain__pinstCLoginViewManager = 0;
uintptr_t EQMain__pinstCSidlManager = 0;
uintptr_t EQMain__pinstCXWndManager = 0;
uintptr_t EQMain__pinstLoginController = 0;
uintptr_t EQMain__pinstLoginServerAPI = 0;
uintptr_t EQMain__pinstLoginClient = 0;

ForeignPointer<CLoginViewManager> g_pLoginViewManager;
ForeignPointer<LoginClient> g_pLoginClient;
ForeignPointer<LoginController> g_pLoginController;
ForeignPointer<LoginServerAPI> g_pLoginServerAPI;

bool InitializeEQMainOffsets()
{
	if (*ghEQMainInstance)
	{
		EQMainBaseAddress = (uintptr_t)*ghEQMainInstance;

		EQMain__CEQSuiteTextureLoader__GetTexture = FixEQMainOffset(EQMain__CEQSuiteTextureLoader__GetTexture_x);
		EQMain__CLoginViewManager__HandleLButtonUp = FixEQMainOffset(EQMain__CLoginViewManager__HandleLButtonUp_x);
#if defined(EQMain__CXWndManager__GetCursorToDisplay_x)
		EQMain__CXWndManager__GetCursorToDisplay = FixEQMainOffset(EQMain__CXWndManager__GetCursorToDisplay_x);
#endif
		EQMain__LoginController__GiveTime = FixEQMainOffset(EQMain__LoginController__GiveTime_x);
		EQMain__LoginServerAPI__JoinServer = FixEQMainOffset(EQMain__LoginServerAPI__JoinServer_x);
		EQMain__LoginController__Shutdown = FixEQMainOffset(EQMain__LoginController__Shutdown_x);
		EQMain__WndProc = FixEQMainOffset(EQMain__WndProc_x);

		EQMain__pinstCEQSuiteTextureLoader = FixEQMainOffset(EQMain__pinstCEQSuiteTextureLoader_x);
		EQMain__pinstCLoginViewManager = FixEQMainOffset(EQMain__pinstCLoginViewManager_x);
		EQMain__pinstCSidlManager = FixEQMainOffset(EQMain__pinstCSidlManager_x);
		EQMain__pinstCXWndManager = FixEQMainOffset(EQMain__pinstCXWndManager_x);
		EQMain__pinstLoginController = FixEQMainOffset(EQMain__pinstLoginController_x);
		EQMain__pinstLoginServerAPI = FixEQMainOffset(EQMain__pinstLoginServerAPI_x);
		EQMain__pinstLoginClient = EQMain__pinstCLoginViewManager - sizeof(uintptr_t);

		if (EQMain__LoginController__GiveTime)
		{
#if defined(_M_AMD64)
			//.text:18001BAC0                     public: void __thiscall LoginController::GiveTime(void) proc near
			//.text:18001BAC0 40 53                               push    rbx
			//.text:18001BAC2 48 83 EC 20                         sub     rsp, 20h
			//.text:18001BAC6 48 8B D9                            mov     rbx, rcx
			//.text:18001BAC9 E8 02 02 00 00                      call    LoginController::PollAndProcessDXKeyboard(void)
			EQMain__LoginController__ProcessKeyboardEvents = GetFunctionAddressAt(EQMain__LoginController__GiveTime + 9, 1, 4);
			//.text:18001BACE 48 8B CB                            mov     rcx, rbx
			//.text:18001BAD1 48 83 C4 20                         add     rsp, 20h
			//.text:18001BAD5 5B                                  pop     rbx
			//.text:18001BAD6 E9 25 06 00 00                      jmp     LoginController::PollAndProcessDXMouse(void)
			EQMain__LoginController__ProcessMouseEvents = GetFunctionAddressAt(EQMain__LoginController__GiveTime + 22, 1, 4);
#else
			//.text:10014B00                      public: void __thiscall LoginController::GiveTime(void) proc near
			//.text:10014B00 56                                   push    esi
			//.text:10014B01 8B F1                                mov     esi, this
			//.text:10014B03 E8 D8 06 00 00                       call    LoginController::ProcessKeyboardEvents(void)
			EQMain__LoginController__ProcessKeyboardEvents = GetFunctionAddressAt(EQMain__LoginController__GiveTime + 3, 1, 4);
			//.text:10014B08 8B CE                                mov     this, esi       ; this
			//.text:10014B0A 5E                                   pop     esi
			//.text:10014B0B E9 A0 08 00 00                       jmp     LoginController::ProcessMouseEvents(void)
			EQMain__LoginController__ProcessMouseEvents = GetFunctionAddressAt(EQMain__LoginController__GiveTime + 11, 1, 4);
#endif
		}

		g_pLoginViewManager = EQMain__pinstCLoginViewManager;
		g_pLoginController = EQMain__pinstLoginController;
		g_pLoginServerAPI = EQMain__pinstLoginServerAPI;
		g_pLoginClient = EQMain__pinstLoginClient;

		// Update addresses shared with eqgame.exe
		CEQSuiteTextureLoader__GetTexture = EQMain__CEQSuiteTextureLoader__GetTexture;
		pEQSuiteTextureLoader = (CEQSuiteTextureLoader*)EQMain__pinstCEQSuiteTextureLoader;

		return true;
	}

	return false;
}

void CleanupEQMainOffsets()
{
	EQMainBaseAddress = 0;

	EQMain__CEQSuiteTextureLoader__GetTexture = 0;
	EQMain__CLoginViewManager__HandleLButtonUp = 0;
	EQMain__CXWndManager__GetCursorToDisplay = 0;
	EQMain__LoginController__GiveTime = 0;
	EQMain__LoginController__ProcessKeyboardEvents = 0;
	EQMain__LoginController__ProcessMouseEvents = 0;
	EQMain__LoginController__Shutdown = 0;
	EQMain__LoginServerAPI__JoinServer = 0;
	EQMain__WndProc = 0;

	EQMain__pinstCEQSuiteTextureLoader = 0;
	EQMain__pinstCLoginViewManager = 0;
	EQMain__pinstCSidlManager = 0;
	EQMain__pinstCXWndManager = 0;
	EQMain__pinstLoginController = 0;
	EQMain__pinstLoginServerAPI = 0;
	EQMain__pinstLoginClient = 0;

	g_pLoginController.reset();
	g_pLoginViewManager.reset();
	g_pLoginServerAPI.reset();
	g_pLoginClient.reset();

	// re-initialize offsets that were overwritten by eqmain
	pEQSuiteTextureLoader = (CEQSuiteTextureLoader*)pinstEQSuiteTextureLoader;
	CEQSuiteTextureLoader__GetTexture = FixEQGameOffset(CEQSuiteTextureLoader__GetTexture_x);
}

#pragma endregion

//============================================================================
//

static const std::string logger_name = "eqlib";

void InitializeLogging(const std::shared_ptr<spdlog::logger>& in_logger)
{
	auto logger = spdlog::get(logger_name);
	if (!logger)
	{
		auto& sinks = in_logger->sinks();

		logger = std::make_shared<spdlog::logger>(logger_name, std::begin(sinks), std::end(sinks));
		spdlog::set_pattern("%L %Y-%m-%d %T.%f [%n] %v (%@)");
		spdlog::set_default_logger(logger);
	}

	SPDLOG_DEBUG("Logging initialized");
}

void ShutdownLogging()
{
	spdlog::shutdown();
}

void InitializeGlobals()
{
	ZeroMemory(gDiKeyName, sizeof(gDiKeyName));
	for (int i = 0; gDiKeyID[i].Id; i++)
	{
		gDiKeyName[gDiKeyID[i].Id] = gDiKeyID[i].szName;
	}

	InitializeGlobalOffsets();
	InitializeEQGameOffsets();
	InitializeEQGraphicsOffsets();
}

} // namespace eqlib

#if __has_include("../private/EQLib-globals-private.cpp")
#include "../private/EQLib-globals-private.cpp"
#endif
