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

#include "Common.h"
#include "eqgame.h"
#include "eqgraphics.h"
#include "eqmain.h"
#include "ForwardDecls.h"

#if !defined(DIRECTINPUT_VERSION)
#define DIRECTINPUT_VERSION    0x800
#endif

#include <dinput.h>

namespace eqlib {

// the preferred base of eqgame.exe
#if defined(_M_AMD64)
constexpr uintptr_t EQGamePreferredAddress = 0x140000000;
#else
constexpr uintptr_t EQGamePreferredAddress = 0x400000;
#endif // defined(_M_AMD64)

#if defined(_M_AMD64)
constexpr uintptr_t EQLibraryPreferredAddress = 0x180000000;
#else
constexpr uintptr_t EQLibraryPreferredAddress = 0x10000000;
#endif

// the base address of eqgame.exe
EQLIB_VAR uintptr_t EQGameBaseAddress;

// the base address of eqgraphics.dll
EQLIB_VAR uintptr_t EQGraphicsBaseAddress;

// the base address of eqmain.dll
EQLIB_VAR uintptr_t EQMainBaseAddress;

// the base address of kernel32.dll
EQLIB_VAR uintptr_t Kernel32BaseAddress;

// These macros are used for statically building offsets. If using dynamic offset generation
// with the pattern matching, don't use the macro.

// These functions are used for dynamically building offsets.

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
inline uintptr_t FixEQGameOffset(T nOffset)
{
	return static_cast<uintptr_t>(nOffset) - static_cast<uintptr_t>(EQGamePreferredAddress) + EQGameBaseAddress;
}

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
inline uintptr_t FixEQGraphicsOffset(T nOffset)
{
	return static_cast<uintptr_t>(nOffset) - static_cast<uintptr_t>(EQLibraryPreferredAddress) + EQGraphicsBaseAddress;
}

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>, void>>
inline uintptr_t FixEQMainOffset(T nOffset)
{
	return static_cast<uintptr_t>(nOffset) - static_cast<uintptr_t>(EQLibraryPreferredAddress) + EQMainBaseAddress;
}

#define INITIALIZE_EQGAME_OFFSET(var) uintptr_t var = FixEQGameOffset(var##_x)
#define INITIALIZE_EQGRAPHICS_OFFSET(var) uintptr_t var = FixEQGraphicsOffset(var##_x)
#define INITIALIZE_EQMAIN_OFFSET(var) uintptr_t var = FixEQMainOffset(var##_x)


//============================================================================
// Data
//============================================================================

EQLIB_VAR const char* szCombineTypes[];
EQLIB_VAR size_t MAX_COMBINES;
EQLIB_VAR const char* szItemClasses[];
EQLIB_VAR size_t MAX_ITEMCLASSES;
EQLIB_VAR const char* szSPATypes[];
EQLIB_VAR size_t MAX_SPELLEFFECTS;
EQLIB_VAR const char* szFactionNames[];
EQLIB_VAR size_t MAX_FACTIONNAMES;

inline namespace deprecated {
	EQLIB_VAR size_t MAX_ITEMTYPES DEPRECATE("Use MAX_ITEMCLASSES instead of MAX_ITEMTYPES");
	EQLIB_VAR const char** szItemTypes DEPRECATE("Use szItemClasses instead of szItemTypes");
}

EQLIB_VAR ServerID ServerIDArray[(uint32_t)ServerID::NumServers];
EQLIB_API const char* GetServerNameFromServerID(ServerID id);
EQLIB_API ServerID GetServerIDFromServerName(const char* serverName);

struct ACTORDEFENTRY
{
	uint32_t Def;
	int      ZoneID;
	char     Name[256];
};
EQLIB_VAR ACTORDEFENTRY ActorDefList[];

struct DIKEYID
{
	char szName[32];
	WORD Id;
};
EQLIB_VAR DIKEYID gDiKeyID[];
EQLIB_VAR const char* gDiKeyName[256];

constexpr int MAX_HOTBUTTON_WNDS = 12;

//============================================================================
// EQGame.exe Offsets
//============================================================================

EQLIB_VAR uintptr_t __ActualVersionBuild;
EQLIB_VAR uintptr_t __ActualVersionDate;
EQLIB_VAR uintptr_t __ActualVersionTime;
EQLIB_VAR uintptr_t __BindList;
EQLIB_VAR uintptr_t __ChatFilterDefs;
EQLIB_VAR uintptr_t __CommandList;
EQLIB_VAR uintptr_t __CurrentMapLabel;
EQLIB_VAR uintptr_t __CurrentSocial;
EQLIB_VAR uintptr_t __do_loot;
EQLIB_VAR uintptr_t __DrawHandler;
EQLIB_VAR uintptr_t __gpbCommandEvent;
EQLIB_VAR uintptr_t __Guilds;
EQLIB_VAR uintptr_t __gWorld;
EQLIB_VAR uintptr_t __heqmain;
EQLIB_VAR uintptr_t __HotkeyPage;
EQLIB_VAR uintptr_t __HWnd;
EQLIB_VAR uintptr_t __LabelCache;
EQLIB_VAR uintptr_t __LoginName;
EQLIB_VAR uintptr_t __MemCheckBitmask;
EQLIB_VAR uintptr_t __MemCheckActive;
EQLIB_VAR uintptr_t __Mouse;
EQLIB_VAR uintptr_t __MouseEventTime;
EQLIB_VAR uintptr_t __ScreenMode;
EQLIB_VAR uintptr_t __ServerHost;
EQLIB_VAR uintptr_t __ThrottleFrameRate;
EQLIB_VAR uintptr_t __ThrottleFrameRateEnd;
EQLIB_VAR uintptr_t EQObject_Top;
EQLIB_VAR uintptr_t g_eqCommandStates;
EQLIB_VAR uintptr_t instCRaid;
EQLIB_VAR uintptr_t instDynamicZone;
EQLIB_VAR uintptr_t instEQMisc;
EQLIB_VAR uintptr_t instEQZoneInfo;
EQLIB_VAR uintptr_t instExpeditionLeader;
EQLIB_VAR uintptr_t instExpeditionName;
EQLIB_VAR uintptr_t instTributeActive;
EQLIB_VAR uintptr_t pinstActiveBanker;
EQLIB_VAR uintptr_t pinstActiveCorpse;
EQLIB_VAR uintptr_t pinstActiveGMaster;
EQLIB_VAR uintptr_t pinstActiveMerchant;
EQLIB_VAR uintptr_t pinstAltAdvManager;
EQLIB_VAR uintptr_t pinstCamActor;
EQLIB_VAR uintptr_t pinstCChatWindowManager;
EQLIB_VAR uintptr_t pinstCContainerMgr;
EQLIB_VAR uintptr_t pinstCContextMenuManager;
EQLIB_VAR uintptr_t pinstCDBStr;
EQLIB_VAR uintptr_t pinstCDisplay;
EQLIB_VAR uintptr_t pinstCEverQuest;
EQLIB_VAR uintptr_t pinstCInvSlotMgr;
EQLIB_VAR uintptr_t pinstCItemDisplayManager;
EQLIB_VAR uintptr_t pinstCMercenaryClientManager;
EQLIB_VAR uintptr_t pinstCPopupWndManager;
EQLIB_VAR uintptr_t pinstCResolutionHandler;
EQLIB_VAR uintptr_t pinstCSidlManager;
EQLIB_VAR uintptr_t pinstCSpellDisplayMgr;
EQLIB_VAR uintptr_t pinstCTaskManager;
EQLIB_VAR uintptr_t pinstCXWndManager;
EQLIB_VAR uintptr_t pinstDZMember;
EQLIB_VAR uintptr_t pinstDZTimerInfo;
EQLIB_VAR uintptr_t pinstEqLogin;
EQLIB_VAR uintptr_t pinstEQSoundManager;
EQLIB_VAR uintptr_t pinstEQSpellStrings;
EQLIB_VAR uintptr_t pinstEQSuiteTextureLoader;
EQLIB_VAR uintptr_t pinstGFViewListener;
EQLIB_VAR uintptr_t pinstEverQuestInfo;
EQLIB_VAR uintptr_t pinstItemIconCache;
EQLIB_VAR uintptr_t pinstLocalPC;
EQLIB_VAR uintptr_t pinstLocalPlayer;
EQLIB_VAR uintptr_t pinstModelPlayer;
EQLIB_VAR uintptr_t pinstRenderInterface;
EQLIB_VAR uintptr_t pinstPlayerPath;
EQLIB_VAR uintptr_t pinstSGraphicsEngine;
EQLIB_VAR uintptr_t pinstSkillMgr;
EQLIB_VAR uintptr_t pinstSpawnManager;
EQLIB_VAR uintptr_t pinstSpellManager;
EQLIB_VAR uintptr_t pinstStringTable;
EQLIB_VAR uintptr_t pinstSwitchManager;
EQLIB_VAR uintptr_t pinstTarget;
EQLIB_VAR uintptr_t pinstTargetIndicator;
EQLIB_VAR uintptr_t pinstTaskMember;
EQLIB_VAR uintptr_t pinstTrackTarget;
EQLIB_VAR uintptr_t pinstTradeTarget;
EQLIB_VAR uintptr_t pinstViewActor;
EQLIB_VAR uintptr_t pinstWorldData;

EQLIB_VAR uintptr_t __MemChecker0;
EQLIB_VAR uintptr_t __MemChecker1;
EQLIB_VAR uintptr_t __MemChecker4;
EQLIB_VAR uintptr_t __EncryptPad0;
EQLIB_VAR uintptr_t DI8__Keyboard;
EQLIB_VAR uintptr_t DI8__Main;
EQLIB_VAR uintptr_t DI8__MouseState;
EQLIB_VAR uintptr_t DI8__Mouse;

EQLIB_VAR uintptr_t __allowslashcommand;
EQLIB_VAR uintptr_t __CastRay;
EQLIB_VAR uintptr_t __CastRay2;
EQLIB_VAR uintptr_t __CleanItemTags;
EQLIB_VAR uintptr_t __compress_block;
EQLIB_VAR uintptr_t __ConvertItemTags;
EQLIB_VAR uintptr_t __CopyLayout;
EQLIB_VAR uintptr_t __CreateCascadeMenuItems;
EQLIB_VAR uintptr_t __decompress_block;
EQLIB_VAR uintptr_t __DoesFileExist;
EQLIB_VAR uintptr_t __eq_delete;
EQLIB_VAR uintptr_t __eq_new;
EQLIB_VAR uintptr_t __EQGetTime;
EQLIB_VAR uintptr_t __ExecuteCmd;
EQLIB_VAR uintptr_t __FixHeading;
EQLIB_VAR uintptr_t __FlushDxKeyboard;
EQLIB_VAR uintptr_t __get_bearing;
EQLIB_VAR uintptr_t __get_melee_range;
EQLIB_VAR uintptr_t __GetAnimationCache;
EQLIB_VAR uintptr_t __GetGaugeValueFromEQ;
EQLIB_VAR uintptr_t __GetLabelFromEQ;
EQLIB_VAR uintptr_t __GetXTargetType;
EQLIB_VAR uintptr_t __HeadingDiff;
EQLIB_VAR uintptr_t __HelpPath;
EQLIB_VAR uintptr_t __msgTokenTextParam;
EQLIB_VAR uintptr_t __NewUIINI;
EQLIB_VAR uintptr_t __ProcessGameEvents;
EQLIB_VAR uintptr_t __ProcessKeyboardEvents;
EQLIB_VAR uintptr_t __ProcessMouseEvents;
EQLIB_VAR uintptr_t __ProcessDeviceEvents;
EQLIB_VAR uintptr_t __SaveColors;
EQLIB_VAR uintptr_t __STMLToText;
EQLIB_VAR uintptr_t __WndProc;

EQLIB_VAR uintptr_t AchievementManager__Instance;
EQLIB_VAR uintptr_t AggroMeterManagerClient__Instance;
EQLIB_VAR uintptr_t AltAdvManager__CanSeeAbility;
EQLIB_VAR uintptr_t AltAdvManager__CanTrainAbility;
EQLIB_VAR uintptr_t AltAdvManager__GetAAById;
EQLIB_VAR uintptr_t AltAdvManager__GetCalculatedTimer;
EQLIB_VAR uintptr_t AltAdvManager__IsAbilityReady;
EQLIB_VAR uintptr_t ArrayClass__DeleteElement;
EQLIB_VAR uintptr_t CAAWnd__ShowAbility;
EQLIB_VAR uintptr_t CAAWnd__Update;
EQLIB_VAR uintptr_t CAAWnd__UpdateSelected;
EQLIB_VAR uintptr_t CAdvancedLootWnd__AddPlayerToList;
EQLIB_VAR uintptr_t CAdvancedLootWnd__DoAdvLootAction;
EQLIB_VAR uintptr_t CAdvancedLootWnd__DoSharedAdvLootAction;
EQLIB_VAR uintptr_t CAdvancedLootWnd__UpdateMasterLooter;
EQLIB_VAR uintptr_t CAltAbilityData__GetMercCurrentRank;
EQLIB_VAR uintptr_t CAltAbilityData__GetMercMaxRank;
EQLIB_VAR uintptr_t CBankWnd__GetNumBankSlots;
EQLIB_VAR uintptr_t CBankWnd__WndNotification;
EQLIB_VAR uintptr_t CBarterSearchWnd__UpdateInventoryList;
EQLIB_VAR uintptr_t CBarterSearchWnd__WndNotification;
EQLIB_VAR uintptr_t CBarterWnd__WndNotification;
EQLIB_VAR uintptr_t CBazaarSearchWnd__HandleSearchResults;
EQLIB_VAR uintptr_t CBroadcast__Get;
EQLIB_VAR uintptr_t CButtonWnd__vftable;
EQLIB_VAR uintptr_t CCastSpellWnd__ForgetMemorizedSpell;
EQLIB_VAR uintptr_t CCastSpellWnd__IsBardSongPlaying;
EQLIB_VAR uintptr_t CCastSpellWnd__RefreshSpellGemButtons;
EQLIB_VAR uintptr_t CCharacterListWnd__EnterWorld;
EQLIB_VAR uintptr_t CCharacterListWnd__Quit;
EQLIB_VAR uintptr_t CCharacterListWnd__SelectCharacter;
EQLIB_VAR uintptr_t CCharacterListWnd__UpdateList;
EQLIB_VAR uintptr_t CChatService__GetFriendName;
EQLIB_VAR uintptr_t CChatService__GetNumberOfFriends;
EQLIB_VAR uintptr_t CChatWindow__AddHistory;
EQLIB_VAR uintptr_t CChatWindow__CChatWindow;
EQLIB_VAR uintptr_t CChatWindow__Clear;
EQLIB_VAR uintptr_t CChatWindow__WndNotification;
EQLIB_VAR uintptr_t CChatWindowManager__CreateChatWindow;
EQLIB_VAR uintptr_t CChatWindowManager__FreeChatWindow;
EQLIB_VAR uintptr_t CChatWindowManager__GetRGBAFromIndex;
EQLIB_VAR uintptr_t CChatWindowManager__InitContextMenu;
EQLIB_VAR uintptr_t CChatWindowManager__SetLockedActiveChatWindow;
EQLIB_VAR uintptr_t CColorPickerWnd__Open;
EQLIB_VAR uintptr_t CComboWnd__DeleteAll;
EQLIB_VAR uintptr_t CComboWnd__Draw;
EQLIB_VAR uintptr_t CComboWnd__GetChoiceText;
EQLIB_VAR uintptr_t CComboWnd__GetCurChoice;
EQLIB_VAR uintptr_t CComboWnd__GetCurChoiceText;
EQLIB_VAR uintptr_t CComboWnd__GetItemCount;
EQLIB_VAR uintptr_t CComboWnd__GetListRect;
EQLIB_VAR uintptr_t CComboWnd__InsertChoice;
EQLIB_VAR uintptr_t CComboWnd__InsertChoiceAtIndex;
EQLIB_VAR uintptr_t CComboWnd__SetChoice;
EQLIB_VAR uintptr_t CComboWnd__SetColors;
EQLIB_VAR uintptr_t CContainerMgr__CloseContainer;
EQLIB_VAR uintptr_t CContainerMgr__OpenContainer;
EQLIB_VAR uintptr_t CContainerMgr__OpenExperimentContainer;
EQLIB_VAR uintptr_t CContainerWnd__HandleCombine;
EQLIB_VAR uintptr_t CContainerWnd__SetContainer;
EQLIB_VAR uintptr_t CContainerWnd__vftable;
EQLIB_VAR uintptr_t CContextMenu__AddMenuItem;
EQLIB_VAR uintptr_t CContextMenu__AddSeparator;
EQLIB_VAR uintptr_t CContextMenu__CContextMenu;
EQLIB_VAR uintptr_t CContextMenu__CheckMenuItem;
EQLIB_VAR uintptr_t CContextMenu__dCContextMenu;
EQLIB_VAR uintptr_t CContextMenu__RemoveAllMenuItems;
EQLIB_VAR uintptr_t CContextMenu__RemoveMenuItem;
EQLIB_VAR uintptr_t CContextMenu__SetMenuItem;
EQLIB_VAR uintptr_t CContextMenuManager__AddMenu;
EQLIB_VAR uintptr_t CContextMenuManager__CreateDefaultMenu;
EQLIB_VAR uintptr_t CContextMenuManager__Flush;
EQLIB_VAR uintptr_t CContextMenuManager__PopupMenu;
EQLIB_VAR uintptr_t CContextMenuManager__RemoveMenu;
EQLIB_VAR uintptr_t CCursorAttachment__AttachToCursor;
EQLIB_VAR uintptr_t CCursorAttachment__IsOkToActivate;
EQLIB_VAR uintptr_t CCursorAttachment__RemoveAttachment;
EQLIB_VAR uintptr_t CDBStr__GetString;
EQLIB_VAR uintptr_t CDisplay__cameraType;
EQLIB_VAR uintptr_t CDisplay__CleanGameUI;
EQLIB_VAR uintptr_t CDisplay__GetClickedActor;
EQLIB_VAR uintptr_t CDisplay__GetFloorHeight;
EQLIB_VAR uintptr_t CDisplay__GetUserDefinedColor;
EQLIB_VAR uintptr_t CDisplay__InitCharSelectUI;
EQLIB_VAR uintptr_t CDisplay__PreZoneMainUI;
EQLIB_VAR uintptr_t CDisplay__RealRender_World;
EQLIB_VAR uintptr_t CDisplay__ReloadUI;
EQLIB_VAR uintptr_t CDisplay__RestartUI;
EQLIB_VAR uintptr_t CDisplay__SetViewActor;
EQLIB_VAR uintptr_t CDisplay__ToggleScreenshotMode;
EQLIB_VAR uintptr_t CDisplay__TrueDistance;
EQLIB_VAR uintptr_t CDisplay__WriteTextHD2;
EQLIB_VAR uintptr_t CDisplay__ZoneMainUI;
EQLIB_VAR uintptr_t CDistillerInfo__GetIDFromRecordNum;
EQLIB_VAR uintptr_t CDistillerInfo__Instance;
EQLIB_VAR uintptr_t CEditBaseWnd__SetSel;
EQLIB_VAR uintptr_t CEditWnd__DrawCaret;
EQLIB_VAR uintptr_t CEditWnd__EnsureCaretVisible;
EQLIB_VAR uintptr_t CEditWnd__GetCaretPt;
EQLIB_VAR uintptr_t CEditWnd__GetCharIndexPt;
EQLIB_VAR uintptr_t CEditWnd__GetDisplayString;
EQLIB_VAR uintptr_t CEditWnd__GetHorzOffset;
EQLIB_VAR uintptr_t CEditWnd__GetLineForPrintableChar;
EQLIB_VAR uintptr_t CEditWnd__GetSelStartPt;
EQLIB_VAR uintptr_t CEditWnd__GetSTMLSafeText;
EQLIB_VAR uintptr_t CEditWnd__PointFromPrintableChar;
EQLIB_VAR uintptr_t CEditWnd__ReplaceSelection;
EQLIB_VAR uintptr_t CEditWnd__SelectableCharFromPoint;
EQLIB_VAR uintptr_t CEditWnd__SetEditable;
EQLIB_VAR uintptr_t CEditWnd__SetWindowText;
EQLIB_VAR uintptr_t CEQSuiteTextureLoader__CreateTexture;
EQLIB_VAR uintptr_t CEQSuiteTextureLoader__GetDefaultUIPath;
EQLIB_VAR uintptr_t CEQSuiteTextureLoader__GetTexture;
EQLIB_VAR uintptr_t CEverQuest__ClickedPlayer;
EQLIB_VAR uintptr_t CEverQuest__CreateTargetIndicator;
EQLIB_VAR uintptr_t CEverQuest__DoPercentConvert;
EQLIB_VAR uintptr_t CEverQuest__DoTellWindow;
EQLIB_VAR uintptr_t CEverQuest__DropHeldItemOnGround;
EQLIB_VAR uintptr_t CEverQuest__dsp_chat;
EQLIB_VAR uintptr_t CEverQuest__Emote;
EQLIB_VAR uintptr_t CEverQuest__GetBodyTypeDesc;
EQLIB_VAR uintptr_t CEverQuest__GetClassDesc;
EQLIB_VAR uintptr_t CEverQuest__GetClassThreeLetterCode;
EQLIB_VAR uintptr_t CEverQuest__GetDeityDesc;
EQLIB_VAR uintptr_t CEverQuest__GetLangDesc;
EQLIB_VAR uintptr_t CEverQuest__GetRaceDesc;
EQLIB_VAR uintptr_t CEverQuest__InterpretCmd;
EQLIB_VAR uintptr_t CEverQuest__IssuePetCommand;
EQLIB_VAR uintptr_t CEverQuest__LeftClickedOnPlayer;
EQLIB_VAR uintptr_t CEverQuest__LMouseUp;
EQLIB_VAR uintptr_t CEverQuest__OutputTextToLog;
EQLIB_VAR uintptr_t CEverQuest__ReportSuccessfulHeal;
EQLIB_VAR uintptr_t CEverQuest__ReportSuccessfulHit;
EQLIB_VAR uintptr_t CEverQuest__RightClickedOnPlayer;
EQLIB_VAR uintptr_t CEverQuest__RMouseUp;
EQLIB_VAR uintptr_t CEverQuest__SetGameState;
EQLIB_VAR uintptr_t CEverQuest__trimName;
EQLIB_VAR uintptr_t CEverQuest__UPCNotificationFlush;
EQLIB_VAR uintptr_t CFindItemWnd__CFindItemWnd;
EQLIB_VAR uintptr_t CFindItemWnd__PickupSelectedItem;
EQLIB_VAR uintptr_t CFindItemWnd__Update;
EQLIB_VAR uintptr_t CFindItemWnd__WndNotification;
EQLIB_VAR uintptr_t CGaugeWnd__Draw;
EQLIB_VAR uintptr_t CGroupWnd__UpdateDisplay;
EQLIB_VAR uintptr_t CGroupWnd__WndNotification;
EQLIB_VAR uintptr_t CGuild__FindMemberByName;
EQLIB_VAR uintptr_t CGuild__GetGuildName;
EQLIB_VAR uintptr_t CharacterBase__GetItemByGlobalIndex;
EQLIB_VAR uintptr_t CharacterBase__GetItemByGlobalIndex1;
EQLIB_VAR uintptr_t CharacterBase__IsExpansionFlag;
EQLIB_VAR uintptr_t CharacterZoneClient__ApplyDamage;
EQLIB_VAR uintptr_t CharacterZoneClient__BardCastBard;
EQLIB_VAR uintptr_t CharacterZoneClient__CalcAffectChange;
EQLIB_VAR uintptr_t CharacterZoneClient__CalcAffectChangeGeneric;
EQLIB_VAR uintptr_t CharacterZoneClient__CanMedOnHorse;
EQLIB_VAR uintptr_t CharacterZoneClient__CanUseItem;
EQLIB_VAR uintptr_t CharacterZoneClient__CanUseMemorizedSpellSlot;
EQLIB_VAR uintptr_t CharacterZoneClient__CastSpell;
EQLIB_VAR uintptr_t CharacterZoneClient__CharacterZoneClient;
EQLIB_VAR uintptr_t CharacterZoneClient__Cur_HP;
EQLIB_VAR uintptr_t CharacterZoneClient__Cur_Mana;
EQLIB_VAR uintptr_t CharacterZoneClient__FindAffectSlot;
EQLIB_VAR uintptr_t CharacterZoneClient__GetAdjustedSkill;
EQLIB_VAR uintptr_t CharacterZoneClient__GetBaseSkill;
EQLIB_VAR uintptr_t CharacterZoneClient__GetCastingTimeModifier;
EQLIB_VAR uintptr_t CharacterZoneClient__GetCurrentMod;
EQLIB_VAR uintptr_t CharacterZoneClient__GetCursorItemCount;
EQLIB_VAR uintptr_t CharacterZoneClient__GetEnduranceRegen;
EQLIB_VAR uintptr_t CharacterZoneClient__GetFirstEffectSlot;
EQLIB_VAR uintptr_t CharacterZoneClient__GetFocusCastingTimeModifier;
EQLIB_VAR uintptr_t CharacterZoneClient__GetFocusDurationMod;
EQLIB_VAR uintptr_t CharacterZoneClient__GetHPRegen;
EQLIB_VAR uintptr_t CharacterZoneClient__GetItemCountInInventory;
EQLIB_VAR uintptr_t CharacterZoneClient__GetItemCountWorn;
EQLIB_VAR uintptr_t CharacterZoneClient__GetLastEffectSlot;
EQLIB_VAR uintptr_t CharacterZoneClient__GetManaRegen;
EQLIB_VAR uintptr_t CharacterZoneClient__GetModCap;
EQLIB_VAR uintptr_t CharacterZoneClient__GetOpenEffectSlot;
EQLIB_VAR uintptr_t CharacterZoneClient__GetPctModAndMin;
EQLIB_VAR uintptr_t CharacterZoneClient__GetPCSpellAffect;
EQLIB_VAR uintptr_t CharacterZoneClient__HasSkill;
EQLIB_VAR uintptr_t CharacterZoneClient__HitBySpell;
EQLIB_VAR uintptr_t CharacterZoneClient__IsStackBlocked;
EQLIB_VAR uintptr_t CharacterZoneClient__MakeMeVisible;
EQLIB_VAR uintptr_t CharacterZoneClient__Max_Endurance;
EQLIB_VAR uintptr_t CharacterZoneClient__Max_HP;
EQLIB_VAR uintptr_t CharacterZoneClient__Max_Mana;
EQLIB_VAR uintptr_t CharacterZoneClient__NotifyPCAffectChange;
EQLIB_VAR uintptr_t CharacterZoneClient__RemovePCAffectex;
EQLIB_VAR uintptr_t CharacterZoneClient__SpellDuration;
EQLIB_VAR uintptr_t CharacterZoneClient__TotalEffect;
EQLIB_VAR uintptr_t CharacterZoneClient__UseSkill;
EQLIB_VAR uintptr_t ChatManagerClient__Instance;
EQLIB_VAR uintptr_t CHelpWnd__SetFile;
EQLIB_VAR uintptr_t CHotButton__SetButtonSize;
EQLIB_VAR uintptr_t CHotButton__SetCheck;
EQLIB_VAR uintptr_t CHotButtonWnd__DoHotButton;
EQLIB_VAR uintptr_t CInvSlot__GetItemBase;
EQLIB_VAR uintptr_t CInvSlot__HandleRButtonUp;
EQLIB_VAR uintptr_t CInvSlot__SliderComplete;
EQLIB_VAR uintptr_t CInvSlot__UpdateItem;
EQLIB_VAR uintptr_t CInvSlotMgr__FindInvSlot;
EQLIB_VAR uintptr_t CInvSlotMgr__MoveItem;
EQLIB_VAR uintptr_t CInvSlotMgr__SelectSlot;
EQLIB_VAR uintptr_t CInvSlotWnd__CInvSlotWnd;
EQLIB_VAR uintptr_t CItemDisplayManager__CreateWindowInstance;
EQLIB_VAR uintptr_t CItemDisplayWnd__InsertAugmentRequest;
EQLIB_VAR uintptr_t CItemDisplayWnd__RemoveAugmentRequest;
EQLIB_VAR uintptr_t CItemDisplayWnd__RequestConvertItem;
EQLIB_VAR uintptr_t CItemDisplayWnd__SetItem;
EQLIB_VAR uintptr_t CItemDisplayWnd__UpdateStrings;
EQLIB_VAR uintptr_t CKeyRingWnd__ExecuteRightClick;
EQLIB_VAR uintptr_t CLabel__UpdateText;
EQLIB_VAR uintptr_t CLargeDialogWnd__Open;
EQLIB_VAR uintptr_t ClientSOIManager__GetSingleton;
EQLIB_VAR uintptr_t CListWnd__AddColumn;
EQLIB_VAR uintptr_t CListWnd__AddColumn1;
EQLIB_VAR uintptr_t CListWnd__AddLine;
EQLIB_VAR uintptr_t CListWnd__AddString;
EQLIB_VAR uintptr_t CListWnd__CalculateCustomWindowPositions;
EQLIB_VAR uintptr_t CListWnd__CalculateFirstVisibleLine;
EQLIB_VAR uintptr_t CListWnd__CalculateVSBRange;
EQLIB_VAR uintptr_t CListWnd__ClearAllSel;
EQLIB_VAR uintptr_t CListWnd__ClearSel;
EQLIB_VAR uintptr_t CListWnd__CListWnd;
EQLIB_VAR uintptr_t CListWnd__CloseAndUpdateEditWindow;
EQLIB_VAR uintptr_t CListWnd__Compare;
EQLIB_VAR uintptr_t CListWnd__dCListWnd;
EQLIB_VAR uintptr_t CListWnd__Draw;
EQLIB_VAR uintptr_t CListWnd__DrawColumnSeparators;
EQLIB_VAR uintptr_t CListWnd__DrawHeader;
EQLIB_VAR uintptr_t CListWnd__DrawItem;
EQLIB_VAR uintptr_t CListWnd__DrawLine;
EQLIB_VAR uintptr_t CListWnd__DrawSeparator;
EQLIB_VAR uintptr_t CListWnd__EnableLine;
EQLIB_VAR uintptr_t CListWnd__EnsureVisible;
EQLIB_VAR uintptr_t CListWnd__ExtendSel;
EQLIB_VAR uintptr_t CListWnd__GetColumnMinWidth;
EQLIB_VAR uintptr_t CListWnd__GetColumnWidth;
EQLIB_VAR uintptr_t CListWnd__GetCurSel;
EQLIB_VAR uintptr_t CListWnd__GetItemData;
EQLIB_VAR uintptr_t CListWnd__GetItemHeight;
EQLIB_VAR uintptr_t CListWnd__GetItemRect;
EQLIB_VAR uintptr_t CListWnd__GetItemText;
EQLIB_VAR uintptr_t CListWnd__GetItemWnd;
EQLIB_VAR uintptr_t CListWnd__GetSelList;
EQLIB_VAR uintptr_t CListWnd__GetSeparatorRect;
EQLIB_VAR uintptr_t CListWnd__InsertLine;
EQLIB_VAR uintptr_t CListWnd__RemoveLine;
EQLIB_VAR uintptr_t CListWnd__SetColors;
EQLIB_VAR uintptr_t CListWnd__SetColumnJustification;
EQLIB_VAR uintptr_t CListWnd__SetColumnLabel;
EQLIB_VAR uintptr_t CListWnd__SetColumnsSizable;
EQLIB_VAR uintptr_t CListWnd__SetColumnWidth;
EQLIB_VAR uintptr_t CListWnd__SetCurSel;
EQLIB_VAR uintptr_t CListWnd__SetItemColor;
EQLIB_VAR uintptr_t CListWnd__SetItemData;
EQLIB_VAR uintptr_t CListWnd__SetItemIcon;
EQLIB_VAR uintptr_t CListWnd__SetItemText;
EQLIB_VAR uintptr_t CListWnd__SetItemWnd;
EQLIB_VAR uintptr_t CListWnd__SetVScrollPos;
EQLIB_VAR uintptr_t CListWnd__Sort;
EQLIB_VAR uintptr_t CListWnd__ToggleSel;
EQLIB_VAR uintptr_t CListWnd__vftable;
EQLIB_VAR uintptr_t CLootWnd__LootAll;
EQLIB_VAR uintptr_t CLootWnd__RequestLootSlot;
EQLIB_VAR uintptr_t CMapViewWnd__CMapViewWnd;
EQLIB_VAR uintptr_t CMemoryMappedFile__SetFile;
EQLIB_VAR uintptr_t CMerchantWnd__DisplayBuyOrSellPrice;
EQLIB_VAR uintptr_t CMerchantWnd__PurchasePageHandler__RequestGetItem;
EQLIB_VAR uintptr_t CMerchantWnd__PurchasePageHandler__RequestPutItem;
EQLIB_VAR uintptr_t CMerchantWnd__PurchasePageHandler__UpdateList;
EQLIB_VAR uintptr_t CMerchantWnd__SelectBuySellSlot;
EQLIB_VAR uintptr_t COptionsWnd__FillChatFilterList;
EQLIB_VAR uintptr_t CPacketScrambler__hton;
EQLIB_VAR uintptr_t CPacketScrambler__ntoh;
EQLIB_VAR uintptr_t CPageWnd__FlashTab;
EQLIB_VAR uintptr_t CPageWnd__SetTabText;
EQLIB_VAR uintptr_t CQuantityWnd__Open;
EQLIB_VAR uintptr_t CResolutionHandler__GetWindowedStyle;
EQLIB_VAR uintptr_t CResolutionHandler__UpdateResolution;
EQLIB_VAR uintptr_t CScreenPieceTemplate__IsType;
EQLIB_VAR uintptr_t CSidlManager__CreateHotButtonWnd;
EQLIB_VAR uintptr_t CSidlManager__CreateXWnd;
EQLIB_VAR uintptr_t CSidlManagerBase__CreateXWnd;
EQLIB_VAR uintptr_t CSidlManagerBase__CreateXWndFromTemplate;
EQLIB_VAR uintptr_t CSidlManagerBase__CreateXWndFromTemplate1;
EQLIB_VAR uintptr_t CSidlManagerBase__FindAnimation1;
EQLIB_VAR uintptr_t CSidlManagerBase__FindButtonDrawTemplate;
EQLIB_VAR uintptr_t CSidlManagerBase__FindScreenPieceTemplate;
EQLIB_VAR uintptr_t CSidlManagerBase__FindScreenPieceTemplate1;
EQLIB_VAR uintptr_t CSidlScreenWnd__CalculateHSBRange;
EQLIB_VAR uintptr_t CSidlScreenWnd__CalculateVSBRange;
EQLIB_VAR uintptr_t CSidlScreenWnd__ConvertToRes;
EQLIB_VAR uintptr_t CSidlScreenWnd__CreateChildrenFromSidl;
EQLIB_VAR uintptr_t CSidlScreenWnd__CSidlScreenWnd1;
EQLIB_VAR uintptr_t CSidlScreenWnd__CSidlScreenWnd2;
EQLIB_VAR uintptr_t CSidlScreenWnd__dCSidlScreenWnd;
EQLIB_VAR uintptr_t CSidlScreenWnd__DrawSidlPiece;
EQLIB_VAR uintptr_t CSidlScreenWnd__EnableIniStorage;
EQLIB_VAR uintptr_t CSidlScreenWnd__GetChildItem;
EQLIB_VAR uintptr_t CSidlScreenWnd__GetSidlPiece;
EQLIB_VAR uintptr_t CSidlScreenWnd__HandleLButtonUp;
EQLIB_VAR uintptr_t CSidlScreenWnd__Init1;
EQLIB_VAR uintptr_t CSidlScreenWnd__LoadIniListWnd;
EQLIB_VAR uintptr_t CSidlScreenWnd__LoadSidlScreen;
EQLIB_VAR uintptr_t CSidlScreenWnd__m_layoutCopy;
EQLIB_VAR uintptr_t CSidlScreenWnd__StoreIniVis;
EQLIB_VAR uintptr_t CSidlScreenWnd__vftable;
EQLIB_VAR uintptr_t CSkillMgr__GetNameToken;
EQLIB_VAR uintptr_t CSkillMgr__GetSkillCap;
EQLIB_VAR uintptr_t CSkillMgr__IsActivatedSkill;
EQLIB_VAR uintptr_t CSkillMgr__IsAvailable;
EQLIB_VAR uintptr_t CSkillMgr__IsCombatSkill;
EQLIB_VAR uintptr_t CSkillMgr__GetSkillTimerDuration;
EQLIB_VAR uintptr_t CSkillMgr__GetSkillLastUsed;
EQLIB_VAR uintptr_t CSliderWnd__GetValue;
EQLIB_VAR uintptr_t CSliderWnd__SetNumTicks;
EQLIB_VAR uintptr_t CSliderWnd__SetValue;
EQLIB_VAR uintptr_t CSpellBookWnd__MemorizeSet;
EQLIB_VAR uintptr_t CSpellDisplayWnd__SetSpell;
EQLIB_VAR uintptr_t CSpellDisplayWnd__UpdateStrings;
EQLIB_VAR uintptr_t CStmlWnd__AppendSTML;
EQLIB_VAR uintptr_t CStmlWnd__CalculateHSBRange;
EQLIB_VAR uintptr_t CStmlWnd__CalculateVSBRange;
EQLIB_VAR uintptr_t CStmlWnd__FastForwardToEndOfTag;
EQLIB_VAR uintptr_t CStmlWnd__ForceParseNow;
EQLIB_VAR uintptr_t CStmlWnd__GetNextTagPiece;
EQLIB_VAR uintptr_t CStmlWnd__GetVisibleText;
EQLIB_VAR uintptr_t CStmlWnd__MakeStmlColorTag;
EQLIB_VAR uintptr_t CStmlWnd__MakeWndNotificationTag;
EQLIB_VAR uintptr_t CStmlWnd__SetSTMLText;
EQLIB_VAR uintptr_t CStmlWnd__StripFirstSTMLLines;
EQLIB_VAR uintptr_t CStmlWnd__UpdateHistoryString;
EQLIB_VAR uintptr_t CTabWnd__Draw;
EQLIB_VAR uintptr_t CTabWnd__DrawCurrentPage;
EQLIB_VAR uintptr_t CTabWnd__DrawTab;
EQLIB_VAR uintptr_t CTabWnd__GetTabRect;
EQLIB_VAR uintptr_t CTabWnd__InsertPage;
EQLIB_VAR uintptr_t CTabWnd__RemovePage;
EQLIB_VAR uintptr_t CTabWnd__SetPage;
EQLIB_VAR uintptr_t CTabWnd__UpdatePage;
EQLIB_VAR uintptr_t CTargetManager__Get;
EQLIB_VAR uintptr_t CTargetWnd__HandleBuffRemoveRequest;
EQLIB_VAR uintptr_t CTargetWnd__RefreshTargetBuffs;
EQLIB_VAR uintptr_t CTargetWnd__WndNotification;
EQLIB_VAR uintptr_t CTaskManager__GetElementDescription;
EQLIB_VAR uintptr_t CTaskManager__GetEntry;
EQLIB_VAR uintptr_t CTaskManager__GetTaskStatus;
EQLIB_VAR uintptr_t CTaskWnd__ConfirmAbandonTask;
EQLIB_VAR uintptr_t CTaskWnd__UpdateTaskTimers;
EQLIB_VAR uintptr_t CTextOverlay__DisplayText;
EQLIB_VAR uintptr_t CTextureAnimation__Draw;
EQLIB_VAR uintptr_t CTextureAnimation__SetCurCell;
EQLIB_VAR uintptr_t CTextureFont__DrawWrappedText;
EQLIB_VAR uintptr_t CTextureFont__DrawWrappedText1;
EQLIB_VAR uintptr_t CTextureFont__DrawWrappedText2;
EQLIB_VAR uintptr_t CTextureFont__GetHeight;
EQLIB_VAR uintptr_t CTextureFont__GetTextExtent;
EQLIB_VAR uintptr_t CTribute__GetActiveFavorCost;
EQLIB_VAR uintptr_t CUnSerializeBuffer__GetString;
EQLIB_VAR uintptr_t CWndDisplayManager__FindWindow;
EQLIB_VAR uintptr_t CXMLDataManager__GetXMLData;
EQLIB_VAR uintptr_t CXMLSOMDocumentBase__XMLRead;
EQLIB_VAR uintptr_t CXStr__gCXStrAccess;
EQLIB_VAR uintptr_t CXStr__gFreeLists;
EQLIB_VAR uintptr_t CXWnd__BringToTop;
EQLIB_VAR uintptr_t CXWnd__ClrFocus;
EQLIB_VAR uintptr_t CXWnd__CXWnd;
EQLIB_VAR uintptr_t CXWnd__dCXWnd;
EQLIB_VAR uintptr_t CXWnd__Destroy;
EQLIB_VAR uintptr_t CXWnd__DoAllDrawing;
EQLIB_VAR uintptr_t CXWnd__DrawColoredRect;
EQLIB_VAR uintptr_t CXWnd__DrawTooltip;
EQLIB_VAR uintptr_t CXWnd__DrawTooltipAtPoint;
EQLIB_VAR uintptr_t CXWnd__GetChildItem;
EQLIB_VAR uintptr_t CXWnd__GetChildWndAt;
EQLIB_VAR uintptr_t CXWnd__GetClientClipRect;
EQLIB_VAR uintptr_t CXWnd__GetClientRect;
EQLIB_VAR uintptr_t CXWnd__GetRelativeRect;
EQLIB_VAR uintptr_t CXWnd__GetScreenClipRect;
EQLIB_VAR uintptr_t CXWnd__GetScreenRect;
EQLIB_VAR uintptr_t CXWnd__GetTooltipRect;
EQLIB_VAR uintptr_t CXWnd__IsActive;
EQLIB_VAR uintptr_t CXWnd__IsDescendantOf;
EQLIB_VAR uintptr_t CXWnd__IsReallyVisible;
EQLIB_VAR uintptr_t CXWnd__IsType;
EQLIB_VAR uintptr_t CXWnd__Minimize;
EQLIB_VAR uintptr_t CXWnd__ProcessTransition;
EQLIB_VAR uintptr_t CXWnd__Resize;
EQLIB_VAR uintptr_t CXWnd__Right;
EQLIB_VAR uintptr_t CXWnd__SetFocus;
EQLIB_VAR uintptr_t CXWnd__SetFont;
EQLIB_VAR uintptr_t CXWnd__SetKeyTooltip;
EQLIB_VAR uintptr_t CXWnd__SetMouseOver;
EQLIB_VAR uintptr_t CXWnd__SetParent;
EQLIB_VAR uintptr_t CXWnd__StartFade;
EQLIB_VAR uintptr_t CXWnd__vftable;
EQLIB_VAR uintptr_t CXWndManager__DestroyAllWindows;
EQLIB_VAR uintptr_t CXWndManager__DrawCursor;
EQLIB_VAR uintptr_t CXWndManager__DrawWindows;
EQLIB_VAR uintptr_t CXWndManager__GetKeyboardFlags;
EQLIB_VAR uintptr_t CXWndManager__HandleKeyboardMsg;
EQLIB_VAR uintptr_t CXWndManager__RemoveWnd;
EQLIB_VAR uintptr_t DrawNetStatus;
EQLIB_VAR uintptr_t EQ_LoadingS__Array;
EQLIB_VAR uintptr_t EQ_LoadingS__SetProgressBar;
EQLIB_VAR uintptr_t EQ_Spell__GetSpellAffectByIndex;
EQLIB_VAR uintptr_t EQ_Spell__GetSpellAffectBySlot;
EQLIB_VAR uintptr_t EQ_Spell__GetSpellLevelNeeded;
EQLIB_VAR uintptr_t EQ_Spell__IsDegeneratingLevelMod;
EQLIB_VAR uintptr_t EQ_Spell__IsSPAIgnoredByStacking;
EQLIB_VAR uintptr_t EQ_Spell__IsSPAStacking;
EQLIB_VAR uintptr_t EQ_Spell__SpellAffectBase;
EQLIB_VAR uintptr_t EQ_Spell__SpellAffects;
EQLIB_VAR uintptr_t EQGroundItemListManager__Instance;
EQLIB_VAR uintptr_t EQItemList__add_item;
EQLIB_VAR uintptr_t EQItemList__delete_item;
EQLIB_VAR uintptr_t EQItemList__EQItemList;
EQLIB_VAR uintptr_t EQItemList__FreeItemList;
EQLIB_VAR uintptr_t EQPlacedItemManager__GetItemByGuid;
EQLIB_VAR uintptr_t EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds;
EQLIB_VAR uintptr_t EQPlacedItemManager__Instance;
EQLIB_VAR uintptr_t EqSoundManager__PlayScriptMp3;
EQLIB_VAR uintptr_t EqSoundManager__SoundAssistPlay;
EQLIB_VAR uintptr_t EqSoundManager__WaveInstancePlay;
EQLIB_VAR uintptr_t EqSoundManager__WavePlay;
EQLIB_VAR uintptr_t EQSpellStrings__GetString;
EQLIB_VAR uintptr_t EQSwitch__UseSwitch;
EQLIB_VAR uintptr_t FactionManagerClient__HandleFactionMessage;
EQLIB_VAR uintptr_t FactionManagerClient__Instance;
EQLIB_VAR uintptr_t FreeTargetTracker__CastSpell;
EQLIB_VAR uintptr_t FreeToPlayClient__Instance;
EQLIB_VAR uintptr_t FreeToPlayClient__RestrictionInfo;
EQLIB_VAR uintptr_t IconCache__GetIcon;
EQLIB_VAR uintptr_t ItemBase__CanGemFitInSlot;
EQLIB_VAR uintptr_t ItemBase__CreateItemTagString;
EQLIB_VAR uintptr_t ItemBase__GetImageNum;
EQLIB_VAR uintptr_t ItemBase__GetItemValue;
EQLIB_VAR uintptr_t ItemBase__IsEmpty;
EQLIB_VAR uintptr_t ItemBase__IsKeyRingItem;
EQLIB_VAR uintptr_t ItemBase__IsLore;
EQLIB_VAR uintptr_t ItemBase__IsLoreEquipped;
EQLIB_VAR uintptr_t ItemBase__ValueSellMerchant;
EQLIB_VAR uintptr_t ItemClient__CanDrop;
EQLIB_VAR uintptr_t ItemClient__CanGoInBag;
EQLIB_VAR uintptr_t ItemClient__CreateItemClient;
EQLIB_VAR uintptr_t ItemClient__dItemClient;
EQLIB_VAR uintptr_t KeyCombo__GetTextDescription;
EQLIB_VAR uintptr_t KeypressHandler__AttachAltKeyToEqCommand;
EQLIB_VAR uintptr_t KeypressHandler__AttachKeyToEqCommand;
EQLIB_VAR uintptr_t KeypressHandler__ClearCommandStateArray;
EQLIB_VAR uintptr_t KeypressHandler__Get;
EQLIB_VAR uintptr_t KeypressHandler__HandleKeyDown;
EQLIB_VAR uintptr_t KeypressHandler__HandleKeyUp;
EQLIB_VAR uintptr_t KeypressHandler__SaveKeymapping;
EQLIB_VAR uintptr_t LootFiltersManager__AddItemLootFilter;
EQLIB_VAR uintptr_t LootFiltersManager__GetItemFilterData;
EQLIB_VAR uintptr_t LootFiltersManager__RemoveItemLootFilter;
EQLIB_VAR uintptr_t LootFiltersManager__SetItemLootFilter;
EQLIB_VAR uintptr_t MapViewMap__Clear;
EQLIB_VAR uintptr_t MapViewMap__SetZoom;
EQLIB_VAR uintptr_t MapViewMap__vftable;
EQLIB_VAR uintptr_t MercenaryAlternateAdvancementManagerClient__BuyAbility;
EQLIB_VAR uintptr_t MercenaryAlternateAdvancementManagerClient__Instance;
EQLIB_VAR uintptr_t msg_new_text;
EQLIB_VAR uintptr_t msg_spell_worn_off;
EQLIB_VAR uintptr_t msgTokenText;
EQLIB_VAR uintptr_t MultipleItemMoveManager__ProcessMove;
EQLIB_VAR uintptr_t PcBase__GetAlternateAbilityId;
EQLIB_VAR uintptr_t PcBase__GetCombatAbility;
EQLIB_VAR uintptr_t PcBase__GetCombatAbilityTimer;
EQLIB_VAR uintptr_t PcBase__GetItemContainedRealEstateIds;
EQLIB_VAR uintptr_t PcBase__GetNonArchivedOwnedRealEstates;
EQLIB_VAR uintptr_t PcClient__AlertInventoryChanged;
EQLIB_VAR uintptr_t PcClient__GetConLevel;
EQLIB_VAR uintptr_t PcClient__GetMeleeSpellFromSkillIndex;
EQLIB_VAR uintptr_t PcClient__HasLoreItem;
EQLIB_VAR uintptr_t PcZoneClient__BandolierSwap;
EQLIB_VAR uintptr_t PcZoneClient__CanEquipItem;
EQLIB_VAR uintptr_t PcZoneClient__DestroyHeldItemOrMoney;
EQLIB_VAR uintptr_t PcZoneClient__doCombatAbility;
EQLIB_VAR uintptr_t PcZoneClient__GetItemByID;
EQLIB_VAR uintptr_t PcZoneClient__GetItemRecastTimer;
EQLIB_VAR uintptr_t PcZoneClient__GetPcSkillLimit;
EQLIB_VAR uintptr_t PcZoneClient__HasAlternateAbility;
EQLIB_VAR uintptr_t PcZoneClient__HasCombatAbility;
EQLIB_VAR uintptr_t PcZoneClient__RemoveBuffEffect;
EQLIB_VAR uintptr_t PcZoneClient__RemoveMyAffect;
EQLIB_VAR uintptr_t PcZoneClient__RemovePetEffect;
EQLIB_VAR uintptr_t pinstLootFiltersManager;
EQLIB_VAR uintptr_t PlayerBase__CanSee;
EQLIB_VAR uintptr_t PlayerBase__CanSee1;
EQLIB_VAR uintptr_t PlayerBase__GetVisibilityLineSegment;
EQLIB_VAR uintptr_t PlayerBase__HasProperty;
EQLIB_VAR uintptr_t PlayerBase__IsTargetable;
EQLIB_VAR uintptr_t PlayerClient__ChangeBoneStringSprite;
EQLIB_VAR uintptr_t PlayerClient__GetPcClient;
EQLIB_VAR uintptr_t PlayerClient__PlayerClient;
EQLIB_VAR uintptr_t PlayerClient__SetNameSpriteState;
EQLIB_VAR uintptr_t PlayerClient__SetNameSpriteTint;
EQLIB_VAR uintptr_t PlayerManagerBase__PrepForDestroyPlayer;
EQLIB_VAR uintptr_t PlayerManagerClient__CreatePlayer;
EQLIB_VAR uintptr_t PlayerManagerClient__GetPlayerFromPartialName;
EQLIB_VAR uintptr_t PlayerManagerClient__GetSpawnByID;
EQLIB_VAR uintptr_t PlayerManagerClient__GetSpawnByName;
EQLIB_VAR uintptr_t PlayerPointManager__GetAltCurrency;
EQLIB_VAR uintptr_t PlayerZoneClient__ChangeHeight;
EQLIB_VAR uintptr_t PlayerZoneClient__DoAttack;
EQLIB_VAR uintptr_t PlayerZoneClient__GetLevel;
EQLIB_VAR uintptr_t PlayerZoneClient__IsValidTeleport;
EQLIB_VAR uintptr_t PlayerZoneClient__LegalPlayerRace;
EQLIB_VAR uintptr_t ProfileManager__GetCurrentProfile;
EQLIB_VAR uintptr_t RealEstateManagerClient__Instance;
EQLIB_VAR uintptr_t SpellManager__GetSpellByGroupAndRank;
EQLIB_VAR uintptr_t Spellmanager__LoadTextSpells;
EQLIB_VAR uintptr_t StringTable__getString;
EQLIB_VAR uintptr_t Teleport_Table_Size;
EQLIB_VAR uintptr_t Teleport_Table;
EQLIB_VAR uintptr_t UdpConnection__GetStats;
EQLIB_VAR uintptr_t Util__FastTime;
EQLIB_VAR uintptr_t Window__getProgress;
EQLIB_VAR uintptr_t Window__getStatus;
EQLIB_VAR uintptr_t Window__getURI;
EQLIB_VAR uintptr_t ZoneGuideManagerClient__Instance;

//----------------------------------------------------------------------------
// Instance Pointers
//----------------------------------------------------------------------------

// Raw pointers (value types in eq)
EQLIB_VAR CMDLIST*                                   EQADDR_CMDLIST;
EQLIB_VAR IDirectInputDevice8A**                     EQADDR_DIKEYBOARD DEPRECATE("Use g_pKeyboard instead of EQADDR_DIKEYBOARD");
EQLIB_VAR IDirectInputDevice8A**                     EQADDR_DIMOUSE DEPRECATE("Use g_pMouse instead of EQADDR_DIMOUSE");
EQLIB_VAR PPOINT                                     EQADDR_DIMOUSECHECK DEPRECATE("Use g_pDIMouseState instead of EQADDR_DIMOUSECHECK");
EQLIB_VAR MQMouseInfo*                               EQADDR_MOUSE;
EQLIB_VAR uintptr_t                                  EQADDR_HWND;
EQLIB_VAR char*                                      EQADDR_SERVERHOST;
EQLIB_VAR char**                                     EQMappableCommandList;
EQLIB_VAR BYTE*                                      EQbCommandStates;
EQLIB_VAR ChatColorFilterData*                       gpChatFilterDefs;
EQLIB_VAR HMODULE*                                   ghEQMainInstance;
EQLIB_VAR DWORD*                                     gpbCommandEvent;
EQLIB_VAR uint8_t*                                   gpMemCheckBitmask;
EQLIB_VAR uint8_t*                                   gpMemCheckActive;
EQLIB_VAR DWORD*                                     gpMouseEventTime;
EQLIB_VAR CDynamicZone*                              pDynamicZone;
EQLIB_VAR CTribute*                                  pTribute;
EQLIB_VAR CTribute*                                  pEQMisc DEPRECATE("Use pTribute instead of pEQMisc");
EQLIB_VAR CEQSuiteTextureLoader*                     pEQSuiteTextureLoader;
EQLIB_VAR INT*                                       pgCurrentSocial;
EQLIB_VAR CGuild*                                    pGuild;
EQLIB_VAR CGuild*                                    pGuildList DEPRECATE("Use pGuild instead of pGuildList");
EQLIB_VAR CRaid*                                     pRaid;
EQLIB_VAR DWORD*                                     pScreenMode;

EQLIB_VAR SpellLoadout*                              pSpellSets;
EQLIB_VAR CTaskManager*                              pTaskManager;
EQLIB_VAR BYTE*                                      pTributeActive;
EQLIB_VAR ZONEINFO*                                  pZoneInfo;
EQLIB_VAR SoeUtil::String*                           pExceptionSubmissionEndpoint;
EQLIB_VAR EQLogin*                                   pEQLogin;
EQLIB_VAR LabelCache*                                g_labelCache;

// pEverQuestInfo pointers
EQLIB_VAR EverQuestinfo*                             pEverQuestInfo;
EQLIB_VAR int*                                       pScreenX;
EQLIB_VAR int*                                       pScreenY;
EQLIB_VAR int*                                       pScreenXMax;
EQLIB_VAR int*                                       pScreenYMax;
EQLIB_VAR uint8_t*                                   pMouseLook;
EQLIB_VAR bool*                                      gpbShowNetStatus;
EQLIB_VAR bool*                                      gpShiftKeyDown;
EQLIB_VAR EQSOCIAL*                                  pSocialList;
EQLIB_VAR BYTE*                                      gpAutoFire;

EQLIB_VAR uint8_t*                                   EQADDR_NOTINCHATMODE;
EQLIB_VAR uint8_t*                                   EQADDR_RUNWALKSTATE;
EQLIB_VAR uint8_t*                                   EQADDR_ZONETYPE DEPRECATE("Use pZoneInfo->ZoneType instead dof EQADDR_ZONETYPE");
EQLIB_VAR char*                                      EQADDR_SERVERNAME DEPRECATE("Use GetServerShortName() instead of EQADDR_SERVERNAME");
EQLIB_VAR int*                                       EQADDR_DOABILITYLIST DEPRECATE("Use pEverQuestInfo->combatSkill instead of EQADDR_DOABILITYLIST");
EQLIB_VAR BYTE*                                      EQADDR_ATTACK DEPRECATE("Use pEverQuestInfo->bAutoAttack instead of EQADDR_ATTACK");


// Spawn/Char related
EQLIB_VAR ForeignPointer<PcClient>                   pCharData /*DEPRECATE("Use pLocalPC instead of pCharData")*/;
EQLIB_VAR ForeignPointer<PcClient>                   pPCData /*DEPRECATE("Use pLocalPC instead of pPCData")*/;
EQLIB_VAR ForeignPointer<PcClient>                   pLocalPC;
EQLIB_VAR ForeignPointer<PlayerClient>               pActiveBanker;
EQLIB_VAR ForeignPointer<PlayerClient>               pActiveCorpse;
EQLIB_VAR ForeignPointer<PlayerClient>               pActiveGMaster;
EQLIB_VAR ForeignPointer<PlayerClient>               pActiveMerchant;
EQLIB_VAR ForeignPointer<PlayerClient>               pCharSpawn /*DEPRECATE("pCharSpawn is deprecated. Use either pLocalPlayer (for your own player) or pControlledPlayer (for the player that your movement controls)")*/;
EQLIB_VAR ForeignPointer<PlayerClient>               pControlledPlayer; // the controlled player (mount, eye of zomm, etc)
EQLIB_VAR ForeignPointer<PlayerClient>               pLocalPlayer;      // the local player
EQLIB_VAR ForeignPointer<PlayerClient>               pTarget;
EQLIB_VAR ForeignPointer<PlayerClient>               pTradeTarget;

// Non-UI Foreign Pointers (pointer types in eq)
EQLIB_VAR ComputedPointer<AggroMeterManagerClient>   pAggroInfo;
EQLIB_VAR ForeignPointer<AltAdvManager>              pAltAdvManager;
EQLIB_VAR ComputedPointer<ClientAuraManager>         pAuraMgr;
EQLIB_VAR ForeignPointer<CChatWindowManager>         pChatManager;
EQLIB_VAR ComputedPointer<UniversalChatProxy>        pChatService;
EQLIB_VAR ForeignPointer<UdpLibrary::UdpConnection>  pConnection;
EQLIB_VAR ForeignPointer<CContainerMgr>              pContainerMgr;
EQLIB_VAR ForeignPointer<CContextMenuManager>        pContextMenuManager;
EQLIB_VAR ForeignPointer<DatabaseStringTable>        pDBStr;
EQLIB_VAR ForeignPointer<MAPLABEL>                   pCurrentMapLabel;
EQLIB_VAR ForeignPointer<CDisplay>                   pDisplay;
EQLIB_VAR ForeignPointer<DynamicZonePlayerInfo>      pDZMember;
EQLIB_VAR ForeignPointer<DynamicZoneClientTimerData> pDZTimerInfo;
EQLIB_VAR ForeignPointer<EqSoundManager>             pEqSoundManager;
EQLIB_VAR ForeignPointer<EQSpellStrings>             pEQSpellStrings;
EQLIB_VAR ForeignPointer<CEverQuest, EVERQUEST>      pEverQuest;
EQLIB_VAR ForeignPointer<SGraphicsEngine>            pGraphicsEngine;
EQLIB_VAR ForeignPointer<GF::ViewListener>           pGFViewListener;
EQLIB_VAR ForeignPointer<CInvSlotMgr>                pInvSlotMgr;
EQLIB_VAR ForeignPointer<CItemDisplayManager>        pItemDisplayManager;
EQLIB_VAR ForeignPointer<CSpellDisplayManager>       pSpellDisplayManager;
EQLIB_VAR ComputedPointer<EQGroundItemListManager>   pItemList;
EQLIB_VAR ComputedPointer<KeypressHandler>           pKeypressHandler;
EQLIB_VAR ForeignPointer<LootFiltersManager>         pLootFiltersManager;
EQLIB_VAR ComputedPointer<MercenaryAlternateAdvancementManagerClient> pMercAltAbilities;
EQLIB_VAR ForeignPointer<CMercenaryManager>          pMercInfo DEPRECATE("Use pMercManager instead of pMercInfo");
EQLIB_VAR ForeignPointer<CMercenaryManager>          pMercManager;
EQLIB_VAR ComputedPointer<CPlayerPointManager>       pPlayerPointManager;
EQLIB_VAR ComputedPointer<RealEstateManagerClient>   pRealEstate;
EQLIB_VAR ForeignPointer<CResolutionHandler>         pResolutionHandler;
EQLIB_VAR ForeignPointer<CSidlManager>               pSidlMgr;
EQLIB_VAR ForeignPointer<SkillManager>               pSkillMgr;
EQLIB_VAR ForeignPointer<SkillManager>               pCSkillMgr DEPRECATE("Use pSkillMgr instead of pCSkillMgr");
EQLIB_VAR ComputedPointer<PlayerClient>              pSpawnList;
EQLIB_VAR ForeignPointer<PlayerManagerClient>        pSpawnManager;
EQLIB_VAR ForeignPointer<ClientSpellManager>         pSpellMgr;
EQLIB_VAR ForeignPointer<StringTable>                pStringTable;
EQLIB_VAR ForeignPointer<EqSwitchManager>            pSwitchMgr;
EQLIB_VAR ForeignPointer<SharedTaskPlayerInfo>       pTaskMember;
EQLIB_VAR ComputedPointer<CBroadcast>                pTextOverlay;
EQLIB_VAR ForeignPointer<CXWndManager>               pWndMgr;
EQLIB_VAR ForeignPointer<EQWorldData>                pWorldData;

#define pCResolutionHandler pResolutionHandler
#define pCDBStr pDBStr

// UI Window Instance Pointers
EQLIB_VAR ForeignPointer<CAAWnd>                     pAAWnd;
EQLIB_VAR ForeignPointer<CAchievementsWnd>           pAchievementsWnd;
EQLIB_VAR ForeignPointer<CActionsWnd>                pActionsWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAdvancedDisplayOptionsWnd;
EQLIB_VAR ForeignPointer<CAdvancedLootWnd>           pAdvancedLootWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAdventureLeaderboardWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAdventureRequestWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAdventureStatsWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAggroMeterWnd;
EQLIB_VAR ForeignPointer<CAlarmWnd>                  pAlarmWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAlertHistoryWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAlertStackWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAlertWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAltStorageWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pAudioTriggersWnd;
EQLIB_VAR ForeignPointer<CAuraWnd>                   pAuraWnd;
EQLIB_VAR ForeignPointer<CBandolierWnd>              pBandolierWnd;
EQLIB_VAR ForeignPointer<CBankWnd>                   pBankWnd;
EQLIB_VAR ForeignPointer<CBarterWnd>                 pBarterWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pBarterMerchantWnd;
EQLIB_VAR ForeignPointer<CBarterSearchWnd>           pBarterSearchWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pBazaarConfirmationWnd;
EQLIB_VAR ForeignPointer<CBazaarSearchWnd>           pBazaarSearchWnd;
EQLIB_VAR ForeignPointer<CBazaarWnd>                 pBazaarWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pBlockedBuffWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pBlockedPetBuffWnd;
EQLIB_VAR ForeignPointer<CBodyTintWnd>               pBodyTintWnd;
EQLIB_VAR ForeignPointer<CBookWnd>                   pBookWnd;
EQLIB_VAR ForeignPointer<CBreathWnd>                 pBreathWnd;
EQLIB_VAR ForeignPointer<CBuffWindow>                pBuffWnd;
EQLIB_VAR ForeignPointer<CBuffWindow>                pSongWnd;
EQLIB_VAR ForeignPointer<CBugReportWnd>              pBugReportWnd;
EQLIB_VAR ForeignPointer<CCastingWnd>                pCastingWnd;
EQLIB_VAR ForeignPointer<CCastSpellWnd>              pCastSpellWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pCharacterCreation;
EQLIB_VAR ForeignPointer<CCharacterListWnd>          pCharacterListWnd;
EQLIB_VAR ForeignPointer<ClaimWindow>                pClaimWnd;
EQLIB_VAR ForeignPointer<CColorPickerWnd>            pColorPickerWnd;
EQLIB_VAR ForeignPointer<CCombatAbilityWnd>          pCombatAbilityWnd;
EQLIB_VAR ForeignPointer<CCombatSkillsSelectWnd>     pCombatSkillsSelectWnd;
EQLIB_VAR ForeignPointer<CCompassWnd>                pCompassWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pContextTipWnd;
EQLIB_VAR ForeignPointer<CCursorAttachment>          pCursorAttachment;
EQLIB_VAR ForeignPointer<CDragonHoardWnd>            pDragonHoardWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pDynamicZoneWnd;
EQLIB_VAR ForeignPointer<CEditLabelWnd>              pEditLabelWnd;
EQLIB_VAR ForeignPointer<CEQMainWnd>                 pEQMainWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pEventCalendarWnd;
EQLIB_VAR ForeignPointer<CExtendedTargetWnd>         pExtendedTargetWnd;
EQLIB_VAR ForeignPointer<CFactionWnd>                pFactionWnd;
EQLIB_VAR ForeignPointer<CFeedbackWnd>               pFeedbackWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pFellowshipWnd;
EQLIB_VAR ForeignPointer<CFileSelectionWnd>          pFileSelectionWnd;
EQLIB_VAR ForeignPointer<CFindItemWnd>               pFindItemWnd;
EQLIB_VAR ForeignPointer<CFindLocationWnd>           pFindLocationWnd;
EQLIB_VAR ForeignPointer<CFriendsWnd>                pFriendsWnd;
EQLIB_VAR ForeignPointer<CGemsGameWnd>               pGemsGameWnd;
EQLIB_VAR ForeignPointer<CGiveWnd>                   pGiveWnd;
EQLIB_VAR ForeignPointer<CGroupSearchFiltersWnd>     pGroupSearchFiltersWnd;
EQLIB_VAR ForeignPointer<CGroupSearchWnd>            pGroupSearchWnd;
EQLIB_VAR ForeignPointer<CGroupWnd>                  pGroupWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pGuildBankWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pGuildCreationWnd;
EQLIB_VAR ForeignPointer<CGuildMgmtWnd>              pGuildMgmtWnd;
EQLIB_VAR ForeignPointer<CHelpWnd>                   pHelpWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pHeritageSelectionWnd;
EQLIB_VAR ForeignPointer<CHotButtonWnd>              pHotButtonWnd;  // Simply points to the first
EQLIB_VAR ForeignPointer<CHotButtonWnd>              pHotButtonWnds[MAX_HOTBUTTON_WNDS];
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pIconSelectionWnd;
EQLIB_VAR ForeignPointer<CInspectWnd>                pInspectWnd;
EQLIB_VAR ForeignPointer<CInventoryWnd>              pInventoryWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pItemExpTransferWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pItemFuseWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pItemOverflowWnd;
EQLIB_VAR ForeignPointer<CJournalCatWnd>             pJournalCatWnd;
EQLIB_VAR ForeignPointer<CJournalTextWnd>            pJournalTextWnd;
EQLIB_VAR ForeignPointer<CKeyRingWnd>                pKeyRingWnd;
EQLIB_VAR ForeignPointer<CLargeDialogWnd>            pLargeDialog;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pLayoutCopyWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pLFGuildWnd;
EQLIB_VAR ForeignPointer<CLoadskinWnd>               pLoadskinWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pLootFiltersCopyWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pLootFiltersWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pLootSettingsWnd;
EQLIB_VAR ForeignPointer<CLootWnd>                   pLootWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pMailAddressBookWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pMailCompositionWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pMailIgnoreListWindow;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pMailWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pManageLootWnd;
EQLIB_VAR ForeignPointer<CMapToolbarWnd>             pMapToolbarWnd;
EQLIB_VAR ForeignPointer<CMapViewWnd>                pMapViewWnd;
EQLIB_VAR ForeignPointer<CMarketplaceWnd>            pMarketplaceWnd;
EQLIB_VAR ForeignPointer<CMerchantWnd>               pMerchantWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pMIZoneSelectWnd;
EQLIB_VAR ForeignPointer<CMusicPlayerWnd>            pMusicPlayerWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pNameChangeMercWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pNameChangePetWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pNameChangeWnd;
EQLIB_VAR ForeignPointer<CNoteWnd>                   pNoteWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pObjectPreviewWnd;
EQLIB_VAR ForeignPointer<COptionsWnd>                pOptionsWnd;
EQLIB_VAR ForeignPointer<COverseerWnd>               pOverseerWnd;
EQLIB_VAR ForeignPointer<CPetInfoWnd>                pPetInfoWnd;
EQLIB_VAR ForeignPointer<CPetitionQWnd>              pPetitionQWnd;
EQLIB_VAR ForeignPointer<CPlayerCustomizationWnd>    pPlayerCustomizationWnd;
EQLIB_VAR ForeignPointer<CPlayerNotesWnd>            pPlayerNotesWnd;
EQLIB_VAR ForeignPointer<CPlayerWnd>                 pPlayerWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pProgressionSelectionWnd;
EQLIB_VAR ForeignPointer<CPurchaseGroupWnd>          pPurchaseGroupWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pPurchaseWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pPvPLeaderboardWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pPvPStatsWnd;
EQLIB_VAR ForeignPointer<CQuantityWnd>               pQuantityWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pRaceChangeWnd;
EQLIB_VAR ForeignPointer<CRaidOptionsWnd>            pRaidOptionsWnd;
EQLIB_VAR ForeignPointer<CRaidWnd>                   pRaidWnd;
EQLIB_VAR ForeignPointer<CRealEstateItemsWnd>        pRealEstateItemsWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pRealEstateLayoutDetailsWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pRealEstateManageWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pRealEstateNeighborhoodWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pRealEstatePlotSearchWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pRealEstatePurchaseWnd;
EQLIB_VAR ForeignPointer<CRespawnWnd>                pRespawnWnd;
EQLIB_VAR ForeignPointer<CRewardSelectionWnd>        pRewardSelectionWnd;
EQLIB_VAR ForeignPointer<CSelectorWnd>               pSelectorWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pSendMoneyWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pServerListWnd;
EQLIB_VAR ForeignPointer<CSkillsSelectWnd>           pSkillsSelectWnd;
EQLIB_VAR ForeignPointer<CSkillsWnd>                 pSkillsWnd;
EQLIB_VAR ForeignPointer<CSocialEditWnd>             pSocialEditWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pSocialWnd;
EQLIB_VAR ForeignPointer<CSpellBookWnd>              pSpellBookWnd;
EQLIB_VAR ForeignPointer<CStoryWnd>                  pStoryWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTargetOfTargetWnd;
EQLIB_VAR ForeignPointer<CTargetWnd>                 pTargetWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTaskOverlayWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTaskSelectWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTaskTemplateSelectWnd;
EQLIB_VAR ForeignPointer<CTaskWnd>                   pTaskWnd;
EQLIB_VAR ForeignPointer<CTextEntryWnd>              pTextEntryWnd;
EQLIB_VAR ForeignPointer<CTipWnd>                    pTipOfDayWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTitleWnd;
EQLIB_VAR ForeignPointer<CTrackingWnd>               pTrackingWnd;
EQLIB_VAR ForeignPointer<CTradeskillDepotWnd>        pTradeskillDepotWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTradeskillWnd;
EQLIB_VAR ForeignPointer<CTradeWnd>                  pTradeWnd;
EQLIB_VAR ForeignPointer<CTrainWnd>                  pTrainWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTributeBenefitWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTributeMasterWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pTributeTrophyWnd;
EQLIB_VAR ForeignPointer<CVideoModesWnd>             pVideoModesWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pVoiceMacroWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pVoteResultsWnd;
EQLIB_VAR ForeignPointer<CSidlScreenWnd>             pVoteWnd;
EQLIB_VAR ForeignPointer<CZoneGuideWnd>              pZoneGuideWnd;
EQLIB_VAR ForeignPointer<CZonePathWnd>               pZonePathWnd;

EQLIB_VAR ForeignPointer<CRender>                    g_pDrawHandler;
EQLIB_VAR ForeignPointer<IDirectInputDevice8A>       g_pDIKeyboard;
EQLIB_VAR ForeignPointer<IDirectInputDevice8A>       g_pDIMouse;
EQLIB_VAR DIMOUSESTATE2*                             g_pDIMouseState;
EQLIB_VAR SDeviceInputProxy*                         g_pDeviceInputProxy;

//----------------------------------------------------------------------------

#define ScreenMode (*pScreenMode)
#define ScreenX (*pScreenX)
#define ScreenXMax (*pScreenXMax)
#define ScreenY (*pScreenY)
#define ScreenYMax (*pScreenYMax)
#define bMouseLook (*pMouseLook)
#define gbCommandEvent (*gpbCommandEvent)
#define gbShowNetStatus (*gpbShowNetStatus)
#define gCurrentSocial (*pgCurrentSocial)
#define gMouseEventTime (*gpMouseEventTime)
#define gShiftKeyDown (*gpShiftKeyDown)

// TODO: These should just be turned into regular functions like the rest
using fEQNewUIINI            = char* (*)();
using fEQProcGameEvts        = int    (*)();
using fGetLabelFromEQ        = bool   (*)(int, CXStr*, bool*, COLORREF*);

EQLIB_VAR fEQNewUIINI          NewUIINI;
EQLIB_VAR fEQProcGameEvts      ProcessGameEvents;
EQLIB_VAR fGetLabelFromEQ      GetLabelFromEQ;

EQLIB_VAR uintptr_t __ModuleList;
EQLIB_VAR uintptr_t __ProcessList;

EQLIB_VAR const char* szExpansions[NUM_EXPANSIONS + 1];

//============================================================================
// EQGraphics.dll Offsets
//============================================================================

EQLIB_VAR uintptr_t __eqgraphics_fopen;
EQLIB_VAR uintptr_t CEQGBitmap__GetFirstBitmap;
EQLIB_VAR uintptr_t CParticleSystem__Render;
EQLIB_VAR uintptr_t CParticleSystem__CreateSpellEmitter;
EQLIB_VAR uintptr_t CRender__RenderScene;
EQLIB_VAR uintptr_t CRender__RenderBlind;
EQLIB_VAR uintptr_t CRender__UpdateDisplay;
EQLIB_VAR uintptr_t CRender__ResetDevice;
EQLIB_VAR BOOL* g_bRenderSceneCalled;
EQLIB_VAR uintptr_t C2DPrimitiveManager__AddCachedText;

//============================================================================
// eqmain.dll Offsets
//============================================================================

EQLIB_VAR uintptr_t EQMain__CEQSuiteTextureLoader__GetTexture;
EQLIB_VAR uintptr_t EQMain__CLoginViewManager__HandleLButtonUp;
EQLIB_VAR uintptr_t EQMain__CXWndManager__GetCursorToDisplay;
EQLIB_VAR uintptr_t EQMain__LoginController__GiveTime;
EQLIB_VAR uintptr_t EQMain__LoginController__ProcessKeyboardEvents;
EQLIB_VAR uintptr_t EQMain__LoginController__ProcessMouseEvents;
EQLIB_VAR uintptr_t EQMain__LoginController__Shutdown;
EQLIB_VAR uintptr_t EQMain__LoginServerAPI__JoinServer;
EQLIB_VAR uintptr_t EQMain__WndProc;

EQLIB_VAR uintptr_t EQMain__pinstCEQSuiteTextureLoader;
EQLIB_VAR uintptr_t EQMain__pinstCLoginViewManager;
EQLIB_VAR uintptr_t EQMain__pinstCSidlManager;
EQLIB_VAR uintptr_t EQMain__pinstCXWndManager;
EQLIB_VAR uintptr_t EQMain__pinstLoginController;
EQLIB_VAR uintptr_t EQMain__pinstLoginServerAPI;
EQLIB_VAR uintptr_t EQMain__pinstLoginClient;

EQLIB_VAR ForeignPointer<CLoginViewManager> g_pLoginViewManager;
EQLIB_VAR ForeignPointer<LoginClient> g_pLoginClient;
EQLIB_VAR ForeignPointer<LoginController> g_pLoginController;
EQLIB_VAR ForeignPointer<LoginServerAPI> g_pLoginServerAPI;

//----------------------------------------------------------------------------
// Global Functions

/* OTHER IMPORTED FROM EQ */
EQLIB_API int CastRay(PlayerClient*, float y, float x, float z);
EQLIB_API int CastRayLoc(const CVector3& SourcePos, EQRace Race, float DestX, float DestY, float DestZ);
EQLIB_API float HeadingDiff(float h1, float h2, float* DiffOut);
EQLIB_API float FixHeading(float Heading);
EQLIB_API float get_bearing(float x1, float y1, float x2, float y2);
EQLIB_API unsigned long GetFastTime();
EQLIB_API void FlushDxKeyboard();
EQLIB_API DWORD EQGetTime();
EQLIB_OBJECT CXStr STMLToText(const CXStr& In, bool bReplaceBrWithNewline = true);
EQLIB_API class IconCache* __cdecl GetAnimationCache(int index);
EQLIB_API void SaveColors(int, int, int, int);
EQLIB_API bool EQExecuteCmd(unsigned int command, bool keyDown, void* data, const KeyCombo* combo);
EQLIB_API bool CopyLayout(const CXStr& currlayout, const CXStr& newlayout, bool bHotbuttons, bool bLoadouts,
	bool bSocials, CXStr& ErrorOut, bool bForceReload = false);
EQLIB_API uint32_t GetBufferCRC(const char* szBuffer, size_t bufferLength, int baseValue = 0);
EQLIB_API uint32_t GetStringCRC(std::string_view);

//----------------------------------------------------------------------------
// FIXME: Remove these macros
//#define indoor (((*EQADDR_ZONETYPE) == 0) || ((*EQADDR_ZONETYPE) == 3) || ((*EQADDR_ZONETYPE) == 4))
//#define outdoor (((*EQADDR_ZONETYPE) == 1) || ((*EQADDR_ZONETYPE) == 2) || ((*EQADDR_ZONETYPE) == 5))
//#define bindable (((*EQADDR_ZONETYPE) == 2) || ((*EQADDR_ZONETYPE) == 3) || ((*EQADDR_ZONETYPE) == 4))

//----------------------------------------------------------------------------

void InitializeGlobals();

EQLIB_API bool InitializeEQMainOffsets();
EQLIB_API void CleanupEQMainOffsets();

EQLIB_API void InitializeEQLib();
EQLIB_API void ShutdownEQLib();

//----------------------------------------------------------------------------

} // namespace eqlib

#if __has_include("../private/EQLib-globals-private.h")
#include "../private/EQLib-globals-private.h"
#endif
