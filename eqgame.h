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

//
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Oct 22 2021"
#define __ExpectedVersionTime                                     "11:46:02"
#define __ActualVersionDate_x                                      0xB50194
#define __ActualVersionTime_x                                      0xB50188
#define __ActualVersionBuild_x                                     0xB4036C

// Memory Protection
#define __MemChecker0_x                                            0x662920
#define __MemChecker1_x                                            0x94EC90
#define __MemChecker2_x                                            0x6DD450
#define __MemChecker3_x                                            0x6DD3C0
#define __MemChecker4_x                                            0x635C00
#define __EncryptPad0_x                                            0xE4FB88

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDAAD60
#define __ScreenY_x                                                0xDAAD68
#define __ScreenX_x                                                0xDAAD6C
#define __ScreenXMax_x                                             0xDAAD70
#define __ScreenYMax_x                                             0xDAAD74
#define __InChatMode_x                                             0xDAADB4
#define __RunWalkState_x                                           0xDAADB8
#define DI8__Mouse_Copy_x                                          0xDAADCC
#define __MouseLook_x                                              0xDAAE4A
#define __NetStatusToggle_x                                        0xDAAE4D
#define __pulAutoRun_x                                             0xDAAE68
#define __Clicks_x                                                 0xDAAE84
#define __RMouseHeldTime_x                                         0xDAAEEC
#define __LMouseHeldTime_x                                         0xDAAEF0
#define __ZoneType_x                                               0xDAB248
#define __ShiftKeyDown_x                                           0xDAB448
#define __AutoSkillArray_x                                         0xDAB8E8
#define __RangeAttackReady_x                                       0xDABBCC
#define __AttackOnAssist_x                                         0xDABD44
#define __ShowNames_x                                              0xDABD88
#define __PCNames_x                                                0xDABED8
#define __UseTellWindows_x                                         0xDAC070
#define __pulForward_x                                             0xDAC0A8
#define __pulBackward_x                                            0xDAC0AC
#define __pulTurnRight_x                                           0xDAC0B0
#define __pulTurnLeft_x                                            0xDAC0B4
#define __pulStrafeLeft_x                                          0xDAC0B8
#define __pulStrafeRight_x                                         0xDAC0BC
#define __LastTell_x                                               0xDAC928
#define __ServerName_x                                             0xDE11EC
#define __DoAbilityList_x                                          0xDE122C
#define __SocialChangedList_x                                      0xDE1274
#define __Socials_x                                                0xDE12EC
#define __Inviter_x                                                0xE49688
#define __Attack_x                                                 0xE4970B
#define __Autofire_x                                               0xE4970C

// Misc Globals
#define __do_loot_x                                                0x5DFEA0
#define __gfMaxZoomCameraDistance_x                                0xB4800C
#define __gfMaxCameraDistance_x                                    0xB709E8
#define __CurrentSocial_x                                          0xC5B460
#define __BindList_x                                               0xDA0478
#define g_eqCommandStates_x                                        0xDA11E0
#define __CommandList_x                                            0xDA1D68
#define __ScreenMode_x                                             0xEDD0B8
#define __GroupCount_x                                             0xF90DDA
#define __gWorld_x                                                 0xF90FEC
#define __gpbCommandEvent_x                                        0xF910F8
#define __ServerHost_x                                             0xF912C3
#define __Guilds_x                                                 0xF95240
#define __MouseEventTime_x                                         0xF96C6C
#define DI8__Mouse_Check_x                                         0xF9B7A4
#define __heqmain_x                                                0xF9DC38
#define DI8__Mouse_x                                               0xF9DC44
#define __HWnd_x                                                   0xF9DC48
#define __Mouse_x                                                  0xF9DCD0
#define DI8__Main_x                                                0xF9DCE4
#define DI8__Keyboard_x                                            0xF9DCE8
#define __LoginName_x                                              0xF9E3B4
#define __CurrentMapLabel_x                                        0xFAE6E4
#define __TargetAggroHolder_x                                      0xFB1098
#define __GroupAggro_x                                             0xFB10D8
#define __SubscriptionType_x                                       0xFE27D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF915D8
#define instEQZoneInfo_x                                           0xDAB040
#define pinstActiveBanker_x                                        0xF8ECD8
#define pinstActiveCorpse_x                                        0xF8ECD0
#define pinstActiveGMaster_x                                       0xF8ECD4
#define pinstActiveMerchant_x                                      0xF8ECCC
#define pinstAltAdvManager_x                                       0xEDDEE8
#define pinstBandageTarget_x                                       0xF8ECE8
#define pinstCEverQuest_x                                          0xF9DC4C
#define pinstCamActor_x                                            0xEDD0AC
#define pinstCDBStr_x                                              0xEDCC58
#define pinstCDisplay_x                                            0xF8ED54
#define pinstControlledMissile_x                                   0xF8ED2C
#define pinstControlledPlayer_x                                    0xF8ED20
#define pinstCResolutionHandler_x                                  0x161D6A0
#define pinstCSidlManager_x                                        0x161C63C
#define pinstCXWndManager_x                                        0x161C634
#define instDynamicZone_x                                          0xF95118
#define pinstDZMember_x                                            0xF95228
#define pinstDZTimerInfo_x                                         0xF9522C
#define pinstEqLogin_x                                             0xF9DD00
#define instEQMisc_x                                               0xD948D8
#define pinstEQSoundManager_x                                      0xEDE7F8
#define pinstEQSpellStrings_x                                      0xECD8F8
#define instExpeditionLeader_x                                     0xF95162
#define instExpeditionName_x                                       0xF951A2
#define pinstSGraphicsEngine_x                                     0x161D46C
#define pinstGroup_x                                               0xF90DD6
#define pinstImeManager_x                                          0x161C638
#define pinstLocalPC_x                                             0xF8ED44
#define pinstLocalPlayer_x                                         0xF8ECC8
#define pinstMercenaryData_x                                       0xF98764
#define pinstMercenaryStats_x                                      0xFB1164
#define pinstModelPlayer_x                                         0xF8ECE0
#define pinstRenderInterface_x                                     0x161D478
#define pinstSkillMgr_x                                            0xF9A850
#define pinstSpawnManager_x                                        0xF99328
#define pinstSpellManager_x                                        0xF9AA90
#define pinstSpellSets_x                                           0xE42334
#define pinstStringTable_x                                         0xF8ED50
#define pinstSwitchManager_x                                       0xF8EB78
#define pinstTarget_x                                              0xF8ED1C
#define pinstTargetObject_x                                        0xF8ED3C
#define pinstTargetSwitch_x                                        0xF8ED40
#define pinstTaskMember_x                                          0xD94420
#define pinstTrackTarget_x                                         0xF8ED24
#define pinstTradeTarget_x                                         0xF8ECDC
#define instTributeActive_x                                        0xD948F9
#define pinstViewActor_x                                           0xEDD0A8
#define pinstWorldData_x                                           0xF8ED4C
#define pinstZoneAddr_x                                            0xDAB2E0
#define pinstPlayerPath_x                                          0xF993C0
#define pinstTargetIndicator_x                                     0xF9ACF8
#define EQObject_Top_x                                             0xF8ED38

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEDD118
#define pinstCAchievementsWnd_x                                    0xEDCD80
#define pinstCActionsWnd_x                                         0xEDD0A0
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDD0C4
#define pinstCAdvancedLootWnd_x                                    0xEDD0A4
#define pinstCAdventureLeaderboardWnd_x                            0xFA7F08
#define pinstCAdventureRequestWnd_x                                0xFA7FB8
#define pinstCAdventureStatsWnd_x                                  0xFA8068
#define pinstCAggroMeterWnd_x                                      0xEDCE18
#define pinstCAlarmWnd_x                                           0xEDD110
#define pinstCAlertHistoryWnd_x                                    0xEDD084
#define pinstCAlertStackWnd_x                                      0xEDCE50
#define pinstCAlertWnd_x                                           0xEDCE54
#define pinstCAltStorageWnd_x                                      0xFA83C8
#define pinstCAudioTriggersWindow_x                                0xEBFC28
#define pinstCAuraWnd_x                                            0xEDD0EC
#define pinstCAvaZoneWnd_x                                         0xEDCD60
#define pinstCBandolierWnd_x                                       0xEDD0F8
#define pinstCBankWnd_x                                            0xEDD088
#define pinstCBarterMerchantWnd_x                                  0xFA9608
#define pinstCBarterSearchWnd_x                                    0xFA96B8
#define pinstCBarterWnd_x                                          0xFA9768
#define pinstCBazaarConfirmationWnd_x                              0xEDD124
#define pinstCBazaarSearchWnd_x                                    0xEDCDB4
#define pinstCBazaarWnd_x                                          0xEDCD5C
#define pinstCBlockedBuffWnd_x                                     0xEDCDE4
#define pinstCBlockedPetBuffWnd_x                                  0xEDCDEC
#define pinstCBodyTintWnd_x                                        0xEDCD0C
#define pinstCBookWnd_x                                            0xEDD090
#define pinstCBreathWnd_x                                          0xEDD11C
#define pinstCBuffWindowNORMAL_x                                   0xEDCDD8
#define pinstCBuffWindowSHORT_x                                    0xEDCDDC
#define pinstCBugReportWnd_x                                       0xEDCD98
#define pinstCButtonWnd_x                                          0x161C8A0
#define pinstCCastingWnd_x                                         0xEDCE14
#define pinstCCastSpellWnd_x                                       0xEDCE24
#define pinstCCharacterListWnd_x                                   0xEDCDB8
#define pinstCChatWindowManager_x                                  0xFAA210
#define pinstCClaimWnd_x                                           0xFAA368
#define pinstCColorPickerWnd_x                                     0xEDCDCC
#define pinstCCombatAbilityWnd_x                                   0xEDD0D8
#define pinstCCombatSkillsSelectWnd_x                              0xEDD0DC
#define pinstCCompassWnd_x                                         0xEDD0E8
#define pinstCConfirmationDialog_x                                 0xFAF230
#define pinstCContainerMgr_x                                       0xEDD114
#define pinstCContextMenuManager_x                                 0x161C5F0
#define pinstCCursorAttachment_x                                   0xEDCE0C
#define pinstCDynamicZoneWnd_x                                     0xFAA930
#define pinstCEditLabelWnd_x                                       0xEDCD78
#define pinstCEQMainWnd_x                                          0xFAAB78
#define pinstCEventCalendarWnd_x                                   0xEDD0FC
#define pinstCExtendedTargetWnd_x                                  0xEDCE10
#define pinstCPlayerCustomizationWnd_x                             0xEDCDC0
#define pinstCFactionWnd_x                                         0xEDCE20
#define pinstCFellowshipWnd_x                                      0xFAAD78
#define pinstCFileSelectionWnd_x                                   0xEDD0E4
#define pinstCFindItemWnd_x                                        0xEDCD14
#define pinstCFindLocationWnd_x                                    0xFAAED0
#define pinstCFriendsWnd_x                                         0xEDD0E0
#define pinstCGemsGameWnd_x                                        0xEDD104
#define pinstCGiveWnd_x                                            0xEDCD6C
#define pinstCGroupSearchFiltersWnd_x                              0xEDCDFC
#define pinstCGroupSearchWnd_x                                     0xFAB2C8
#define pinstCGroupWnd_x                                           0xFAB378
#define pinstCGuildBankWnd_x                                       0xFAB428
#define pinstCGuildCreationWnd_x                                   0xFAB4D8
#define pinstCGuildMgmtWnd_x                                       0xFAB588
#define pinstCharacterCreation_x                                   0xEDCE08
#define pinstCHelpWnd_x                                            0xEDD070
#define pinstCHeritageSelectionWnd_x                               0xEDCDC4
#define pinstCHotButtonWnd_x                                       0xFAD6E0
#define pinstCHotButtonWnd1_x                                      0xFAD6E0
#define pinstCHotButtonWnd2_x                                      0xFAD6E4
#define pinstCHotButtonWnd3_x                                      0xFAD6E8
#define pinstCHotButtonWnd4_x                                      0xFAD6EC
#define pinstCIconSelectionWnd_x                                   0xEDCD94
#define pinstCInspectWnd_x                                         0xEDCD88
#define pinstCInventoryWnd_x                                       0xEDD074
#define pinstCInvSlotMgr_x                                         0xEDD100
#define pinstCItemDisplayManager_x                                 0xFADC38
#define pinstCItemExpTransferWnd_x                                 0xFADD68
#define pinstCItemOverflowWnd_x                                    0xEDCD4C
#define pinstCJournalCatWnd_x                                      0xEDCCFC
#define pinstCJournalNPCWnd_x                                      0xEDD128
#define pinstCJournalTextWnd_x                                     0xEDD128
#define pinstCKeyRingWnd_x                                         0xEDD080
#define pinstCLargeDialogWnd_x                                     0xFAFEB0
#define pinstCLayoutCopyWnd_x                                      0xFAE0B8
#define pinstCLFGuildWnd_x                                         0xFAE168
#define pinstCLoadskinWnd_x                                        0xEDD10C
#define pinstCLootFiltersCopyWnd_x                                 0xEDC168
#define pinstCLootFiltersWnd_x                                     0xEDD12C
#define pinstCLootSettingsWnd_x                                    0xEDCCF8
#define pinstCLootWnd_x                                            0xEDD094
#define pinstCMailAddressBookWnd_x                                 0xEDCDAC
#define pinstCMailCompositionWnd_x                                 0xEDCDA4
#define pinstCMailIgnoreListWnd_x                                  0xEDCDB0
#define pinstCMailWnd_x                                            0xEDCD9C
#define pinstCManageLootWnd_x                                      0xEDE368
#define pinstCMapToolbarWnd_x                                      0xEDCD70
#define pinstCMapViewWnd_x                                         0xEDCD64
#define pinstCMarketplaceWnd_x                                     0xEDCD3C
#define pinstCMerchantWnd_x                                        0xEDCD44
#define pinstCMIZoneSelectWnd_x                                    0xFAE9A0
#define pinstCMusicPlayerWnd_x                                     0xEDD108
#define pinstCNameChangeMercWnd_x                                  0xEDCE38
#define pinstCNameChangePetWnd_x                                   0xEDCE34
#define pinstCNameChangeWnd_x                                      0xEDCD90
#define pinstCNoteWnd_x                                            0xEDCE5C
#define pinstCObjectPreviewWnd_x                                   0xEDCDA8
#define pinstCOptionsWnd_x                                         0xEDCDD4
#define pinstCOverseerWnd_x                                        0xEDCD38
#define pinstCPetInfoWnd_x                                         0xEDD098
#define pinstCPetitionQWnd_x                                       0xEDCDF0
#define pinstCPlayerNotesWnd_x                                     0xEDD0F0
#define pinstCPlayerWnd_x                                          0xEDCD10
#define pinstCPopupWndManager_x                                    0xFAF230
#define pinstCProgressionSelectionWnd_x                            0xFAF2E0
#define pinstCPurchaseGroupWnd_x                                   0xEDCD48
#define pinstCPurchaseWnd_x                                        0xEDCD40
#define pinstCPvPLeaderboardWnd_x                                  0xFAF390
#define pinstCPvPStatsWnd_x                                        0xFAF440
#define pinstCQuantityWnd_x                                        0xEDD08C
#define pinstCRaceChangeWnd_x                                      0xEDCDA0
#define pinstCRaidOptionsWnd_x                                     0xEDCE1C
#define pinstCRaidWnd_x                                            0xEDCE28
#define pinstCRealEstateItemsWnd_x                                 0xEDCDC8
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDCE04
#define pinstCRealEstateManageWnd_x                                0xEDCDE8
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDCDF4
#define pinstCRealEstatePlotSearchWnd_x                            0xEDCDF8
#define pinstCRealEstatePurchaseWnd_x                              0xEDCE00
#define pinstCRespawnWnd_x                                         0xEDD0F4
#define pinstCRewardSelectionWnd_x                                 0xFAFB88
#define pinstCSelectorWnd_x                                        0xEDCD54
#define pinstCSendMoneyWnd_x                                       0xEDCD74
#define pinstCServerListWnd_x                                      0xEDD0D4
#define pinstCSkillsSelectWnd_x                                    0xEDD0D0
#define pinstCSkillsWnd_x                                          0xEDD0C8
#define pinstCSocialEditWnd_x                                      0xEDCD8C
#define pinstCSocialWnd_x                                          0xEDD120
#define pinstCSpellBookWnd_x                                       0xEDCE48
#define pinstCStoryWnd_x                                           0xEDCD04
#define pinstCTargetOfTargetWnd_x                                  0xFB11E8
#define pinstCTargetWnd_x                                          0xEDCD84
#define pinstCTaskOverlayWnd_x                                     0xEDCD00
#define pinstCTaskSelectWnd_x                                      0xFB1340
#define pinstCTaskManager_x                                        0xC66268
#define pinstCTaskTemplateSelectWnd_x                              0xFB13F0
#define pinstCTaskWnd_x                                            0xFB14A0
#define pinstCTextEntryWnd_x                                       0xEDD0CC
#define pinstCTimeLeftWnd_x                                        0xEDCDE0
#define pinstCTipWndCONTEXT_x                                      0xFB16A4
#define pinstCTipWndOFDAY_x                                        0xFB16A0
#define pinstCTitleWnd_x                                           0xFB1750
#define pinstCTrackingWnd_x                                        0xEDCD7C
#define pinstCTradeskillWnd_x                                      0xFB18B8
#define pinstCTradeWnd_x                                           0xEDCD50
#define pinstCTrainWnd_x                                           0xEDD09C
#define pinstCTributeBenefitWnd_x                                  0xFB1AB8
#define pinstCTributeMasterWnd_x                                   0xFB1B68
#define pinstCTributeTrophyWnd_x                                   0xFB1C18
#define pinstCVideoModesWnd_x                                      0xEDCD68
#define pinstCVoiceMacroWnd_x                                      0xF9B110
#define pinstCVoteResultsWnd_x                                     0xEDCE30
#define pinstCVoteWnd_x                                            0xEDCE2C
#define pinstCZoneGuideWnd_x                                       0xEDD078
#define pinstCZonePathWnd_x                                        0xEDD07C
#define pinstEQSuiteTextureLoader_x                                0xEAA958
#define pinstItemIconCache_x                                       0xFAAB30
#define pinstLootFiltersManager_x                                  0xEDC218
#define pinstRewardSelectionWnd_x                                  0xFAFB88

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DB180
#define __CastRay2_x                                               0x5DB410
#define __ConvertItemTags_x                                        0x5F85F0
#define __CleanItemTags_x                                          0x47DA50
#define __CreateCascadeMenuItems_x                                 0x56F790
#define __DoesFileExist_x                                          0x951C20
#define __EQGetTime_x                                              0x94E900
#define __ExecuteCmd_x                                             0x5D35C0
#define __FixHeading_x                                             0x9EC830
#define __FlushDxKeyboard_x                                        0x6D8740
#define __GameLoop_x                                               0x6DC050
#define __get_bearing_x                                            0x5DAD20
#define __get_melee_range_x                                        0x5DB650
#define __GetAnimationCache_x                                      0x74A650
#define __GetGaugeValueFromEQ_x                                    0x85A7D0
#define __GetLabelFromEQ_x                                         0x85C1E0
#define __GetXTargetType_x                                         0x9EEBA0
#define __HandleMouseWheel_x                                       0x6DD4E0
#define __HeadingDiff_x                                            0x9EC890
#define __HelpPath_x                                               0xF9692C
#define __ExecuteFrontEnd_x                                        0x6D8F20
#define __NewUIINI_x                                               0x85A4A0
#define __ProcessGameEvents_x                                      0x641BA0
#define __ProcessKeyboardEvents_x                                  0x6DA690
#define __ProcessMouseEvents_x                                     0x6412A0
#define __SaveColors_x                                             0x56F670
#define __STMLToText_x                                             0x98A3E0
#define __WndProc_x                                                0x6DB150
#define CMemoryMappedFile__SetFile_x                               0xADC250
#define CrashDetected_x                                            0x6DAC50
#define DrawNetStatus_x                                            0x670EA0
#define Expansion_HoT_x                                            0xDABD30
#define Teleport_Table_Size_x                                      0xF91180
#define Teleport_Table_x                                           0xF8ED58
#define Util__FastTime_x                                           0x94E4C0
#define __eq_delete_x                                              0x9F56F3
#define __eq_new_x                                                 0x9F5C64
#define __CopyLayout_x                                             0x65DBA0
#define __ThrottleFrameRate_x                                      0x62AAB3
#define __ThrottleFrameRateEnd_x                                   0x62AB0F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6E9BF0
#define CAAWnd__Update_x                                           0x6E8F10
#define CAAWnd__UpdateSelected_x                                   0x6E6280

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491990
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B350
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495670
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948B0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x5786D0
#define AltAdvManager__IsAbilityReady_x                            0x5772B0
#define AltAdvManager__GetAAById_x                                 0x577650
#define AltAdvManager__CanTrainAbility_x                           0x5776C0
#define AltAdvManager__CanSeeAbility_x                             0x577A70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDE10
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC6F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC8D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C12E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1750
#define CharacterZoneClient__FindAffectSlot_x                      0x4CADD0
#define CharacterZoneClient__GetCurrentMod_x                       0x4EBDD0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFD70
#define CharacterZoneClient__GetEffect_x                           0x4C1220
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC490
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6DB0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8AD0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFC30
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFB30
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC530
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5250
#define CharacterZoneClient__GetModCap_x                           0x4EBCD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC3E0
#define CharacterZoneClient__HasSkill_x                            0x4DCEC0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B00
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE630
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E7D60
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA4E0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x706330
#define CBankWnd__WndNotification_x                                0x7060D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x710D40

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70B9A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709970

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715470

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x987980
#define CButtonWnd__CButtonWnd_x                                   0x986330
#define CButtonWnd__dCButtonWnd_x                                  0x9865D0
#define CButtonWnd__vftable_x                                      0xB8B4E8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x737D30
#define CChatWindowManager__InitContextMenu_x                      0x730C70
#define CChatWindowManager__FreeChatWindow_x                       0x736900
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x737A10
#define CChatWindowManager__CreateChatWindow_x                     0x736F20

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFCE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x738690
#define CChatWindow__Clear_x                                       0x739AE0
#define CChatWindow__WndNotification_x                             0x73A260
#define CChatWindow__AddHistory_x                                  0x739340

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99D7B0
#define CContextMenu__dCContextMenu_x                              0x99D9E0
#define CContextMenu__AddMenuItem_x                                0x99D9F0
#define CContextMenu__RemoveMenuItem_x                             0x99DD00
#define CContextMenu__RemoveAllMenuItems_x                         0x99DD20
#define CContextMenu__CheckMenuItem_x                              0x99DD80
#define CContextMenu__SetMenuItem_x                                0x99DC20
#define CContextMenu__AddSeparator_x                               0x99DB80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99E300
#define CContextMenuManager__RemoveMenu_x                          0x99E370
#define CContextMenuManager__PopupMenu_x                           0x99E430
#define CContextMenuManager__Flush_x                               0x99E2A0
#define CContextMenuManager__GetMenu_x                             0x49D9C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x744600

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x929070
#define CChatService__GetFriendName_x                              0x929080

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99A7C0
#define CComboWnd__Draw_x                                          0x999C70
#define CComboWnd__GetCurChoice_x                                  0x99A590
#define CComboWnd__GetListRect_x                                   0x99A110
#define CComboWnd__GetTextRect_x                                   0x99A830
#define CComboWnd__InsertChoice_x                                  0x99A2A0
#define CComboWnd__SetColors_x                                     0x99A270
#define CComboWnd__SetChoice_x                                     0x99A570
#define CComboWnd__GetItemCount_x                                  0x99A5A0
#define CComboWnd__GetCurChoiceText_x                              0x99A5D0
#define CComboWnd__GetChoiceText_x                                 0x99A5B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99A330

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x741C50
#define CContainerWnd__vftable_x                                   0xB59424
#define CContainerWnd__SetContainer_x                              0x7434B0

// CDisplay
#define CDisplay__cameraType_x                                     0xEDCE58
#define CDisplay__ZoneMainUI_x                                     0x569EB0
#define CDisplay__PreZoneMainUI_x                                  0x569EC0
#define CDisplay__CleanGameUI_x                                    0x56F450
#define CDisplay__GetClickedActor_x                                0x561C80
#define CDisplay__GetUserDefinedColor_x                            0x559A10
#define CDisplay__GetWorldFilePath_x                               0x563790
#define CDisplay__ReloadUI_x                                       0x5691D0
#define CDisplay__WriteTextHD2_x                                   0x55E300
#define CDisplay__TrueDistance_x                                   0x565770
#define CDisplay__SetViewActor_x                                   0x5615A0
#define CDisplay__GetFloorHeight_x                                 0x55E5D0
#define CDisplay__SetRenderWindow_x                                0x55CF80
#define CDisplay__ToggleScreenshotMode_x                           0x561070
#define CDisplay__RealRender_World_x                               0x55C290

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C0050

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A12A0
#define CEditWnd__EnsureCaretVisible_x                             0x9A3620
#define CEditWnd__GetCaretPt_x                                     0x9A2480
#define CEditWnd__GetCharIndexPt_x                                 0x9A2230
#define CEditWnd__GetDisplayString_x                               0x9A20D0
#define CEditWnd__GetHorzOffset_x                                  0x9A07F0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A3530
#define CEditWnd__GetSelStartPt_x                                  0x9A24E0
#define CEditWnd__GetSTMLSafeText_x                                0x9A1EE0
#define CEditWnd__PointFromPrintableChar_x                         0x9A3170
#define CEditWnd__ReplaceSelection_x                               0x9A2D30
#define CEditWnd__SelectableCharFromPoint_x                        0x9A32D0
#define CEditWnd__SetEditable_x                                    0x9A25B0
#define CEditWnd__SetWindowText_x                                  0x9A1C30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62D2A0
#define CEverQuest__ClickedPlayer_x                                0x61E7C0
#define CEverQuest__CreateTargetIndicator_x                        0x63EB00
#define CEverQuest__DeleteTargetIndicator_x                        0x63EB90
#define CEverQuest__DoTellWindow_x                                 0x4EFDE0
#define CEverQuest__OutputTextToLog_x                              0x4F00B0
#define CEverQuest__DropHeldItemOnGround_x                         0x613890
#define CEverQuest__dsp_chat_x                                     0x4F0480
#define CEverQuest__trimName_x                                     0x63A0F0
#define CEverQuest__Emote_x                                        0x62D960
#define CEverQuest__EnterZone_x                                    0x627600
#define CEverQuest__GetBodyTypeDesc_x                              0x632EC0
#define CEverQuest__GetClassDesc_x                                 0x633500
#define CEverQuest__GetClassThreeLetterCode_x                      0x633B00
#define CEverQuest__GetDeityDesc_x                                 0x63D2B0
#define CEverQuest__GetLangDesc_x                                  0x633CC0
#define CEverQuest__GetRaceDesc_x                                  0x6334E0
#define CEverQuest__InterpretCmd_x                                 0x63D920
#define CEverQuest__LeftClickedOnPlayer_x                          0x617D80
#define CEverQuest__LMouseUp_x                                     0x615E40
#define CEverQuest__RightClickedOnPlayer_x                         0x618970
#define CEverQuest__RMouseUp_x                                     0x617100
#define CEverQuest__SetGameState_x                                 0x613610
#define CEverQuest__UPCNotificationFlush_x                         0x63A010
#define CEverQuest__IssuePetCommand_x                              0x6352C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x62E760
#define CEverQuest__ReportSuccessfulHit_x                          0x62F240

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x755610
#define CGaugeWnd__CalcLinesFillRect_x                             0x755670
#define CGaugeWnd__Draw_x                                          0x754C20

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4900
#define CGuild__GetGuildName_x                                     0x4B3120
#define CGuild__GetGuildIndex_x                                    0x4B3840

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x772AD0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x652500
#define CHotButton__SetCheck_x                                     0x652140

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x77FC50
#define CInvSlotMgr__MoveItem_x                                    0x77E860
#define CInvSlotMgr__SelectSlot_x                                  0x77FD10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77D0A0
#define CInvSlot__SliderComplete_x                                 0x77A400
#define CInvSlot__GetItemBase_x                                    0x779C90
#define CInvSlot__UpdateItem_x                                     0x779E80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x780B30
#define CInvSlotWnd__HandleLButtonUp_x                             0x781550

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x854C20
#define CItemDisplayWnd__UpdateStrings_x                           0x7993D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78E380
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78E8D0
#define CItemDisplayWnd__SetItem_x                                 0x799AE0
#define CItemDisplayWnd__AboutToShow_x                             0x798FD0
#define CItemDisplayWnd__WndNotification_x                         0x79B270
#define CItemDisplayWnd__RequestConvertItem_x                      0x79A910
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x797EA0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x798DC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88A220

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A09B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x5288D0

// CLabel
#define CLabel__UpdateText_x                                       0x7A74F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96CFD0
#define CListWnd__dCListWnd_x                                      0x96D2D0
#define CListWnd__vftable_x                                        0xB8ADC8
#define CListWnd__AddColumn_x                                      0x971EA0
#define CListWnd__AddColumn1_x                                     0x971FC0
#define CListWnd__AddLine_x                                        0x972330
#define CListWnd__AddString_x                                      0x972130
#define CListWnd__CalculateFirstVisibleLine_x                      0x971C50
#define CListWnd__CalculateVSBRange_x                              0x971A40
#define CListWnd__ClearSel_x                                       0x972C20
#define CListWnd__ClearAllSel_x                                    0x972C70
#define CListWnd__CloseAndUpdateEditWindow_x                       0x973720
#define CListWnd__Compare_x                                        0x9711C0
#define CListWnd__Draw_x                                           0x96D490
#define CListWnd__DrawColumnSeparators_x                           0x96FFB0
#define CListWnd__DrawHeader_x                                     0x970410
#define CListWnd__DrawItem_x                                       0x970A60
#define CListWnd__DrawLine_x                                       0x970120
#define CListWnd__DrawSeparator_x                                  0x970050
#define CListWnd__EnableLine_x                                     0x96F870
#define CListWnd__EnsureVisible_x                                  0x973640
#define CListWnd__ExtendSel_x                                      0x972B60
#define CListWnd__GetColumnTooltip_x                               0x96F3F0
#define CListWnd__GetColumnMinWidth_x                              0x96F460
#define CListWnd__GetColumnWidth_x                                 0x96F370
#define CListWnd__GetCurSel_x                                      0x96ED20
#define CListWnd__GetItemAtPoint_x                                 0x96FAF0
#define CListWnd__GetItemAtPoint1_x                                0x96FB60
#define CListWnd__GetItemData_x                                    0x96EDA0
#define CListWnd__GetItemHeight_x                                  0x96F140
#define CListWnd__GetItemIcon_x                                    0x96EF20
#define CListWnd__GetItemRect_x                                    0x96F960
#define CListWnd__GetItemText_x                                    0x96EDE0
#define CListWnd__GetSelList_x                                     0x972CC0
#define CListWnd__GetSeparatorRect_x                               0x96FDD0
#define CListWnd__InsertLine_x                                     0x972790
#define CListWnd__RemoveLine_x                                     0x9729B0
#define CListWnd__SetColors_x                                      0x971A10
#define CListWnd__SetColumnJustification_x                         0x971740
#define CListWnd__SetColumnLabel_x                                 0x9720D0
#define CListWnd__SetColumnWidth_x                                 0x971650
#define CListWnd__SetCurSel_x                                      0x972AB0
#define CListWnd__SetItemColor_x                                   0x973300
#define CListWnd__SetItemData_x                                    0x9732C0
#define CListWnd__SetItemText_x                                    0x972EE0
#define CListWnd__ShiftColumnSeparator_x                           0x971800
#define CListWnd__Sort_x                                           0x9714B0
#define CListWnd__ToggleSel_x                                      0x972AE0
#define CListWnd__SetColumnsSizable_x                              0x9718A0
#define CListWnd__SetItemWnd_x                                     0x973180
#define CListWnd__GetItemWnd_x                                     0x96EF70
#define CListWnd__SetItemIcon_x                                    0x972F60
#define CListWnd__CalculateCustomWindowPositions_x                 0x971D50
#define CListWnd__SetVScrollPos_x                                  0x971630

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7BE910

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B9B90
#define MapViewMap__dMapViewMap_x                                  0x7B9CD0
#define MapViewMap__vftable_x                                      0xB60858
#define MapViewMap__Clear_x                                        0x7BA5E0
#define MapViewMap__SetZoom_x                                      0x7C3800
#define MapViewMap__HandleLButtonDown_x                            0x7B9DE0
#define MapViewMap__GetWorldCoordinates_x                          0x7BCF50

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E1E60
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E27C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E2E40
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E6100
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E08E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EC2D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E1AB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F5F10
#define CPacketScrambler__hton_x                                   0x8F5F00

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x995A60
#define CSidlManagerBase__CreatePageWnd_x                          0x995270
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x990770
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x990700
#define CSidlManagerBase__FindAnimation1_x                         0x9909F0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x990DC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x990BF0
#define CSidlManagerBase__CreateLabel_x                            0x84A970
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x994270
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x994500
#define CSidlManagerBase__CreateXWnd_x                             0x994540

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84AD90
#define CSidlManager__CreateXWnd_x                                 0x84A400

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98C750
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98C650
#define CSidlScreenWnd__ConvertToRes_x                             0x9BA2A0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98BFD0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98BCC0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98BD90
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98BE60
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98CFF0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98D4D0
#define CSidlScreenWnd__GetChildItem_x                             0x98D450
#define CSidlScreenWnd__GetSidlPiece_x                             0x98D1E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97BB50
#define CSidlScreenWnd__Init1_x                                    0x98B790
#define CSidlScreenWnd__LoadIniInfo_x                              0x98D520
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98E0E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98ABB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x161C4C0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98DC60
#define CSidlScreenWnd__StoreIniVis_x                              0x98DFD0
#define CSidlScreenWnd__vftable_x                                  0xB8B794
#define CSidlScreenWnd__WndNotification_x                          0x98CEC0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0200
#define CSkillMgr__GetSkillCap_x                                   0x6C03D0
#define CSkillMgr__GetNameToken_x                                  0x6BFA10
#define CSkillMgr__IsActivatedSkill_x                              0x6BFB00
#define CSkillMgr__IsCombatSkill_x                                 0x6BFA70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x99F3F0
#define CSliderWnd__SetValue_x                                     0x99F220
#define CSliderWnd__SetNumTicks_x                                  0x99F280

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x851600

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A8900
#define CStmlWnd__CalculateHSBRange_x                              0x9A9880
#define CStmlWnd__CalculateVSBRange_x                              0x9A97F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AE6E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AF380
#define CStmlWnd__ForceParseNow_x                                  0x9A8E70
#define CStmlWnd__GetNextTagPiece_x                                0x9AE640
#define CStmlWnd__GetVisibleText_x                                 0x9A8E90
#define CStmlWnd__InitializeWindowVariables_x                      0x9AF1D0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A7FA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A8010
#define CStmlWnd__SetSTMLText_x                                    0x9A6D80
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B05A0
#define CStmlWnd__UpdateHistoryString_x                            0x9AF580

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A5C30
#define CTabWnd__DrawCurrentPage_x                                 0x9A65C0
#define CTabWnd__DrawTab_x                                         0x9A61B0
#define CTabWnd__GetCurrentPage_x                                  0x9A53A0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A5390
#define CTabWnd__GetPageFromTabIndex_x                             0x9A60F0
#define CTabWnd__GetPageInnerRect_x                                0x9A55D0
#define CTabWnd__GetTabInnerRect_x                                 0x9A5510
#define CTabWnd__GetTabRect_x                                      0x9A53D0
#define CTabWnd__InsertPage_x                                      0x9A57C0
#define CTabWnd__RemovePage_x                                      0x9A5900
#define CTabWnd__SetPage_x                                         0x9A5650
#define CTabWnd__SetPageRect_x                                     0x9A5B30
#define CTabWnd__UpdatePage_x                                      0x9A5FA0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A4D90
#define CPageWnd__SetTabText_x                                     0x9A4D30


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC9B0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9780C0
#define CTextureFont__DrawWrappedText1_x                           0x977FF0
#define CTextureFont__DrawWrappedText2_x                           0x9781B0
#define CTextureFont__GetTextExtent_x                              0x9783C0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B6D40

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x962A80

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x5415E0
#define CXStr__CXStr1_x                                            0x482720
#define CXStr__CXStr3_x                                            0x94A850
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94AA90
#define CXStr__operator_equal1_x                                   0x94AAD0
#define CXStr__operator_plus_equal1_x                              0x94B530
#define CXStr__SetString_x                                         0x94D3D0
#define CXStr__operator_char_p_x                                   0x94AF80
#define CXStr__GetChar_x                                           0x94CD30
#define CXStr__Delete_x                                            0x94C600
#define CXStr__GetUnicode_x                                        0x94CDA0
#define CXStr__Insert_x                                            0x94CE00
#define CXStr__FindNext_x                                          0x94CA50
#define CXStr__gFreeLists_x                                        0xEAA330
#define CXStr__gCXStrAccess_x                                      0x161BD48

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99D410

// CXWnd
#define CXWnd__BringToTop_x                                        0x97F4D0
#define CXWnd__ClrFocus_x                                          0x97EE50
#define CXWnd__Destroy_x                                           0x97EF00
#define CXWnd__DoAllDrawing_x                                      0x97B1E0
#define CXWnd__DrawChildren_x                                      0x97B1B0
#define CXWnd__DrawColoredRect_x                                   0x97B730
#define CXWnd__DrawTooltip_x                                       0x9797C0
#define CXWnd__DrawTooltipAtPoint_x                                0x979880
#define CXWnd__GetBorderFrame_x                                    0x97B3F0
#define CXWnd__GetChildItem_x                                      0x97F6E0
#define CXWnd__GetChildWndAt_x                                     0x97F570
#define CXWnd__GetClientClipRect_x                                 0x97D6E0
#define CXWnd__GetRelativeRect_x                                   0x97DA40
#define CXWnd__GetScreenClipRect_x                                 0x97D7B0
#define CXWnd__GetScreenRect_x                                     0x97D980
#define CXWnd__GetTooltipRect_x                                    0x97B780
#define CXWnd__GetWindowTextA_x                                    0x4EFC80
#define CXWnd__IsActive_x                                          0x97BEC0
#define CXWnd__IsDescendantOf_x                                    0x97E3C0
#define CXWnd__IsReallyVisible_x                                   0x97E3F0
#define CXWnd__IsType_x                                            0x97FCD0
#define CXWnd__Minimize_x                                          0x97EAF0
#define CXWnd__Move_x                                              0x97E450
#define CXWnd__Move1_x                                             0x97E540
#define CXWnd__ProcessTransition_x                                 0x97EFE0
#define CXWnd__Refade_x                                            0x97E7F0
#define CXWnd__Resize_x                                            0x97EA80
#define CXWnd__Right_x                                             0x97F2C0
#define CXWnd__SetFocus_x                                          0x97EE10
#define CXWnd__SetFont_x                                           0x97EE80
#define CXWnd__SetKeyTooltip_x                                     0x97FAA0
#define CXWnd__SetMouseOver_x                                      0x97C850
#define CXWnd__SetParent_x                                         0x97E0F0
#define CXWnd__StartFade_x                                         0x97E2B0
#define CXWnd__vftable_x                                           0xB8B208
#define CXWnd__CXWnd_x                                             0x9786B0
#define CXWnd__dCXWnd_x                                            0x978DB0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BB2F0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x9824D0
#define CXWndManager__DrawWindows_x                                0x982620
#define CXWndManager__GetKeyboardFlags_x                           0x984F70
#define CXWndManager__HandleKeyboardMsg_x                          0x984B60
#define CXWndManager__RemoveWnd_x                                  0x985240
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9856F0

// CDBStr
#define CDBStr__GetString_x                                        0x558500

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1090
#define CharacterZoneClient__CastSpell_x                           0x4C5BD0
#define CharacterZoneClient__Cur_HP_x                              0x4D9B10
#define CharacterZoneClient__Cur_Mana_x                            0x4E0D60
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCC80
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDC20
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C91F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E6DF0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B86E0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8830
#define CharacterZoneClient__GetHPRegen_x                          0x4E6830
#define CharacterZoneClient__GetManaRegen_x                        0x4E7230
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4CA020
#define CharacterZoneClient__Max_Endurance_x                       0x680990
#define CharacterZoneClient__Max_HP_x                              0x4D9940
#define CharacterZoneClient__Max_Mana_x                            0x680770
#define CharacterZoneClient__SpellDuration_x                       0x4C9A60
#define CharacterZoneClient__TotalEffect_x                         0x4CD700
#define CharacterZoneClient__UseSkill_x                            0x4E8400

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9168A0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x698D50

// PcClient
#define PcClient__PcClient_x                                       0x675D60
#define PcClient__GetConLevel_x                                    0x678AE0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C01A0
#define CCharacterListWnd__EnterWorld_x                            0x4BFB70
#define CCharacterListWnd__Quit_x                                  0x4BF890
#define CCharacterListWnd__UpdateList_x                            0x4BFD60

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658230
#define EQ_Item__CreateItemTagString_x                             0x8EEC10
#define EQ_Item__IsStackable_x                                     0x8F3EA0
#define EQ_Item__GetImageNum_x                                     0x8F0960
#define EQ_Item__CreateItemClient_x                                0x6571B0
#define EQ_Item__GetItemValue_x                                    0x8F1BB0
#define EQ_Item__ValueSellMerchant_x                               0x8F5C20
#define EQ_Item__IsKeyRingItem_x                                   0x8F3650
#define EQ_Item__CanGemFitInSlot_x                                 0x8EE3E0
#define EQ_Item__CanGoInBag_x                                      0x658350
#define EQ_Item__IsEmpty_x                                         0x8F3020
#define EQ_Item__GetMaxItemCount_x                                 0x8F1FC0
#define EQ_Item__GetHeldItem_x                                     0x8F0810
#define ItemClient__dItemClient_x                                  0x657100

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5794E0
#define EQ_LoadingS__Array_x                                       0xD98D30

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8FFCB0
#define EQ_PC__GetCombatAbility_x                                  0x900230
#define EQ_PC__GetCombatAbilityTimer_x                             0x9002A0
#define EQ_PC__GetItemRecastTimer_x                                0x683B00
#define EQ_PC__HasLoreItem_x                                       0x679430
#define EQ_PC__AlertInventoryChanged_x                             0x6783A0
#define EQ_PC__GetPcZoneClient_x                                   0x6A9450
#define EQ_PC__RemoveMyAffect_x                                    0x687360
#define EQ_PC__GetKeyRingItems_x                                   0x900D90
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9008F0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x900F70

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D81A0
#define EQItemList__add_object_x                                   0x608760
#define EQItemList__add_item_x                                     0x5D8780
#define EQItemList__delete_item_x                                  0x5D87D0
#define EQItemList__FreeItemList_x                                 0x5D86E0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554570

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69A780
#define EQPlayer__dEQPlayer_x                                      0x68CEC0
#define EQPlayer__DoAttack_x                                       0x6A3180
#define EQPlayer__EQPlayer_x                                       0x68D710
#define EQPlayer__SetNameSpriteState_x                             0x691CC0
#define EQPlayer__SetNameSpriteTint_x                              0x692B90
#define PlayerBase__HasProperty_j_x                                0x9EAC00
#define EQPlayer__IsTargetable_x                                   0x9EB160
#define EQPlayer__CanSee_x                                         0x9EAF50
#define EQPlayer__CanSee1_x                                        0x9EB020
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EACC0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A6F40
#define PlayerZoneClient__GetLevel_x                               0x6A9490
#define PlayerZoneClient__IsValidTeleport_x                        0x609C30
#define PlayerZoneClient__LegalPlayerRace_x                        0x571470

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69D930
#define EQPlayerManager__GetSpawnByName_x                          0x69D9E0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DA70

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65BB60
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BC30
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65BC70
#define KeypressHandler__ClearCommandStateArray_x                  0x65D130
#define KeypressHandler__HandleKeyDown_x                           0x65D150
#define KeypressHandler__HandleKeyUp_x                             0x65D1F0
#define KeypressHandler__SaveKeymapping_x                          0x65D7A0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x914730

// StringTable
#define StringTable__getString_x                                   0x90F460

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x683500
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x6816C0
#define PcZoneClient__GetPcSkillLimit_x                            0x686FB0
#define PcZoneClient__RemovePetEffect_x                            0x687610
#define PcZoneClient__HasAlternateAbility_x                        0x6805D0
#define PcZoneClient__CanEquipItem_x                               0x680C90
#define PcZoneClient__GetItemByID_x                                0x684030
#define PcZoneClient__RemoveBuffEffect_x                           0x6876C0
#define PcZoneClient__BandolierSwap_x                              0x681C70
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683AA0

// Doors
#define EQSwitch__UseSwitch_x                                      0x60E850

// IconCache
#define IconCache__GetIcon_x                                       0x749FF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x740B10
#define CContainerMgr__CloseContainer_x                            0x740E30
#define CContainerMgr__OpenExperimentContainer_x                   0x741990

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x819CC0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650910

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7AF810
#define CLootWnd__RequestLootSlot_x                                0x7AEA40

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3610
#define EQ_Spell__SpellAffects_x                                   0x5A3B20
#define EQ_Spell__SpellAffectBase_x                                0x5A3840
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1120
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D10D0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4AA0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A3B90
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4AD0
#define __IsResEffectSpell_x                                       0x4D08D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B16C0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8669A0
#define CTargetWnd__WndNotification_x                              0x866140
#define CTargetWnd__RefreshTargetBuffs_x                           0x8664A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x864F20

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86B520
#define CTaskWnd__ConfirmAbandonTask_x                             0x86E5F0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552130
#define CTaskManager__HandleMessage_x                              0x550000
#define CTaskManager__GetTaskStatus_x                              0x5521E0
#define CTaskManager__GetElementDescription_x                      0x552260

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E210
#define EqSoundManager__PlayScriptMp3_x                            0x59E410
#define EqSoundManager__SoundAssistPlay_x                          0x6C46A0
#define EqSoundManager__WaveInstancePlay_x                         0x6C3B90

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541290

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A43F0
#define CTextureAnimation__SetCurCell_x                            0x9A41B0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581AB0
#define CAltAbilityData__GetMercMaxRank_x                          0x581A40

// CTargetRing
#define CTargetRing__Cast_x                                        0x64E120

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x644870
#define CharacterBase__GetItemByGlobalIndex_x                      0x926D80
#define CharacterBase__GetItemByGlobalIndex1_x                     0x926DD0
#define CharacterBase__GetMemorizedSpell_x                         0x657000
#define CharacterBase__IsExpansionFlag_x                           0x5D1E00

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725A20
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7262E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726390

// messages
#define msg_spell_worn_off_x                                       0x5C9670
#define msg_new_text_x                                             0x5BD0D0
#define __msgTokenTextParam_x                                      0x5CBAD0
#define msgTokenText_x                                             0x5CBEE0

// SpellManager
#define SpellManager__vftable_x                                    0xB37520
#define SpellManager__SpellManager_x                               0x6C82C0
#define Spellmanager__LoadTextSpells_x                             0x6C8BD0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8490

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9EF450

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91FC90
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x91FFE0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A7960

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7458A0
#define CCursorAttachment__AttachToCursor1_x                       0x7458E0
#define CCursorAttachment__Deactivate_x                            0x746E70

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B51B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B5910
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B5590

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5220F0
#define CFindItemWnd__WndNotification_x                            0x522FB0
#define CFindItemWnd__Update_x                                     0x523BD0
#define CFindItemWnd__PickupSelectedItem_x                         0x521790

// IString
#define IString__Append_x                                          0x557F80

// Camera
#define EverQuest__Cameras_x                                       0xDAC07C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CD70
#define LootFiltersManager__GetItemFilterData_x                    0x52C6B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C6E0
#define LootFiltersManager__SetItemLootFilter_x                    0x52C8F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8066C0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F5110
#define CResolutionHandler__GetWindowedStyle_x                     0x6BEB10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73D490

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92AA40
#define CDistillerInfo__Instance_x                                 0x92A980

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x760220
#define CGroupWnd__UpdateDisplay_x                                 0x75F480

// ItemBase
#define ItemBase__IsLore_x                                         0x8F36F0
#define ItemBase__IsLoreEquipped_x                                 0x8F3770

#define MultipleItemMoveManager__ProcessMove_x                     0x66CD60

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x6086C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x608800
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608860

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B32A0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517B10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5027A0
#define FactionManagerClient__HandleFactionMessage_x               0x502FC0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5037B0
#define FactionManagerClient__GetMaxFaction_x                      0x5037CF
#define FactionManagerClient__GetMinFaction_x                      0x503780

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F430

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x976D30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F6A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580C90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x5816B0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CC250

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B32A0

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC770

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8680

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE49710

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DCE30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D210

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DE050

// AchievementManager
#define AchievementManager__Instance_x                             0x47E360

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
