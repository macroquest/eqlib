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
#define __ExpectedVersionDate                                     "Sep 13 2021"
#define __ExpectedVersionTime                                     "14:39:24"
#define __ActualVersionDate_x                                      0xB50164
#define __ActualVersionTime_x                                      0xB50158
#define __ActualVersionBuild_x                                     0xB4035C

// Memory Protection
#define __MemChecker0_x                                            0x662110
#define __MemChecker1_x                                            0x94D830
#define __MemChecker2_x                                            0x6DC900
#define __MemChecker3_x                                            0x6DC870
#define __MemChecker4_x                                            0x6354D0
#define __EncryptPad0_x                                            0xE51B68

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDACD40
#define __ScreenY_x                                                0xDACD48
#define __ScreenX_x                                                0xDACD4C
#define __ScreenXMax_x                                             0xDACD50
#define __ScreenYMax_x                                             0xDACD54
#define __InChatMode_x                                             0xDACD94
#define __RunWalkState_x                                           0xDACD98
#define DI8__Mouse_Copy_x                                          0xDACDAC
#define __MouseLook_x                                              0xDACE2A
#define __NetStatusToggle_x                                        0xDACE2D
#define __pulAutoRun_x                                             0xDACE48
#define __Clicks_x                                                 0xDACE64
#define __RMouseHeldTime_x                                         0xDACECC
#define __LMouseHeldTime_x                                         0xDACED0
#define __ZoneType_x                                               0xDAD228
#define __ShiftKeyDown_x                                           0xDAD428
#define __AutoSkillArray_x                                         0xDAD8C8
#define __RangeAttackReady_x                                       0xDADBAC
#define __AttackOnAssist_x                                         0xDADD24
#define __ShowNames_x                                              0xDADD68
#define __PCNames_x                                                0xDADEB8
#define __UseTellWindows_x                                         0xDAE050
#define __pulForward_x                                             0xDAE088
#define __pulBackward_x                                            0xDAE08C
#define __pulTurnRight_x                                           0xDAE090
#define __pulTurnLeft_x                                            0xDAE094
#define __pulStrafeLeft_x                                          0xDAE098
#define __pulStrafeRight_x                                         0xDAE09C
#define __LastTell_x                                               0xDAE908
#define __ServerName_x                                             0xDE31CC
#define __DoAbilityList_x                                          0xDE320C
#define __SocialChangedList_x                                      0xDE3254
#define __Socials_x                                                0xDE32CC
#define __Inviter_x                                                0xE4B668
#define __Attack_x                                                 0xE4B6EB
#define __Autofire_x                                               0xE4B6EC

// Misc Globals
#define __do_loot_x                                                0x5DF960
#define __gfMaxZoomCameraDistance_x                                0xB47FEC
#define __gfMaxCameraDistance_x                                    0xB708FC
#define __CurrentSocial_x                                          0xC5D46C
#define __BindList_x                                               0xDA2478
#define g_eqCommandStates_x                                        0xDA31E0
#define __CommandList_x                                            0xDA3D68
#define __ScreenMode_x                                             0xEDF0B4
#define __GroupCount_x                                             0xF92DEA
#define __gWorld_x                                                 0xF92FFC
#define __gpbCommandEvent_x                                        0xF93108
#define __ServerHost_x                                             0xF932D3
#define __Guilds_x                                                 0xF97250
#define __MouseEventTime_x                                         0xF98C7C
#define DI8__Mouse_Check_x                                         0xF9D7B4
#define __heqmain_x                                                0xF9FC48
#define DI8__Mouse_x                                               0xF9FC54
#define __HWnd_x                                                   0xF9FC58
#define __Mouse_x                                                  0xF9FCE0
#define DI8__Main_x                                                0xF9FCF4
#define DI8__Keyboard_x                                            0xF9FCF8
#define __LoginName_x                                              0xFA03C4
#define __CurrentMapLabel_x                                        0xFB06F4
#define __TargetAggroHolder_x                                      0xFB30A8
#define __GroupAggro_x                                             0xFB30E8
#define __SubscriptionType_x                                       0xFE47E0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF935E8
#define instEQZoneInfo_x                                           0xDAD020
#define pinstActiveBanker_x                                        0xF90CE8
#define pinstActiveCorpse_x                                        0xF90CE0
#define pinstActiveGMaster_x                                       0xF90CE4
#define pinstActiveMerchant_x                                      0xF90CDC
#define pinstAltAdvManager_x                                       0xEDFEF8
#define pinstBandageTarget_x                                       0xF90CF8
#define pinstCEverQuest_x                                          0xF9FC5C
#define pinstCamActor_x                                            0xEDF0A8
#define pinstCDBStr_x                                              0xEDEC68
#define pinstCDisplay_x                                            0xF90D64
#define pinstControlledMissile_x                                   0xF90D3C
#define pinstControlledPlayer_x                                    0xF90D30
#define pinstCResolutionHandler_x                                  0x161F6B0
#define pinstCSidlManager_x                                        0x161E64C
#define pinstCXWndManager_x                                        0x161E644
#define instDynamicZone_x                                          0xF97128
#define pinstDZMember_x                                            0xF97238
#define pinstDZTimerInfo_x                                         0xF9723C
#define pinstEqLogin_x                                             0xF9FD10
#define instEQMisc_x                                               0xD968D8
#define pinstEQSoundManager_x                                      0xEE0808
#define pinstEQSpellStrings_x                                      0xECF908
#define instExpeditionLeader_x                                     0xF97172
#define instExpeditionName_x                                       0xF971B2
#define pinstSGraphicsEngine_x                                     0x161F47C
#define pinstGroup_x                                               0xF92DE6
#define pinstImeManager_x                                          0x161E648
#define pinstLocalPC_x                                             0xF90D54
#define pinstLocalPlayer_x                                         0xF90CD8
#define pinstMercenaryData_x                                       0xF9A774
#define pinstMercenaryStats_x                                      0xFB3174
#define pinstModelPlayer_x                                         0xF90CF0
#define pinstRenderInterface_x                                     0x161F488
#define pinstSkillMgr_x                                            0xF9C860
#define pinstSpawnManager_x                                        0xF9B338
#define pinstSpellManager_x                                        0xF9CAA0
#define pinstSpellSets_x                                           0xE44314
#define pinstStringTable_x                                         0xF90D60
#define pinstSwitchManager_x                                       0xF90B88
#define pinstTarget_x                                              0xF90D2C
#define pinstTargetObject_x                                        0xF90D4C
#define pinstTargetSwitch_x                                        0xF90D50
#define pinstTaskMember_x                                          0xD96420
#define pinstTrackTarget_x                                         0xF90D34
#define pinstTradeTarget_x                                         0xF90CEC
#define instTributeActive_x                                        0xD968F9
#define pinstViewActor_x                                           0xEDF0A4
#define pinstWorldData_x                                           0xF90D5C
#define pinstZoneAddr_x                                            0xDAD2C0
#define pinstPlayerPath_x                                          0xF9B3D0
#define pinstTargetIndicator_x                                     0xF9CD08
#define EQObject_Top_x                                             0xF90D48

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEDF114
#define pinstCAchievementsWnd_x                                    0xEDED84
#define pinstCActionsWnd_x                                         0xEDF09C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDF0C4
#define pinstCAdvancedLootWnd_x                                    0xEDF0A0
#define pinstCAdventureLeaderboardWnd_x                            0xFA9F18
#define pinstCAdventureRequestWnd_x                                0xFA9FC8
#define pinstCAdventureStatsWnd_x                                  0xFAA078
#define pinstCAggroMeterWnd_x                                      0xEDEE14
#define pinstCAlarmWnd_x                                           0xEDF10C
#define pinstCAlertHistoryWnd_x                                    0xEDF084
#define pinstCAlertStackWnd_x                                      0xEDEE4C
#define pinstCAlertWnd_x                                           0xEDEE54
#define pinstCAltStorageWnd_x                                      0xFAA3D8
#define pinstCAudioTriggersWindow_x                                0xEC1C38
#define pinstCAuraWnd_x                                            0xEDF0E4
#define pinstCAvaZoneWnd_x                                         0xEDED6C
#define pinstCBandolierWnd_x                                       0xEDF0F4
#define pinstCBankWnd_x                                            0xEDF080
#define pinstCBarterMerchantWnd_x                                  0xFAB618
#define pinstCBarterSearchWnd_x                                    0xFAB6C8
#define pinstCBarterWnd_x                                          0xFAB778
#define pinstCBazaarConfirmationWnd_x                              0xEDF120
#define pinstCBazaarSearchWnd_x                                    0xEDEDB0
#define pinstCBazaarWnd_x                                          0xEDED54
#define pinstCBlockedBuffWnd_x                                     0xEDEDDC
#define pinstCBlockedPetBuffWnd_x                                  0xEDEDE4
#define pinstCBodyTintWnd_x                                        0xEDED0C
#define pinstCBookWnd_x                                            0xEDF08C
#define pinstCBreathWnd_x                                          0xEDF118
#define pinstCBuffWindowNORMAL_x                                   0xEDEDD4
#define pinstCBuffWindowSHORT_x                                    0xEDEDD8
#define pinstCBugReportWnd_x                                       0xEDED90
#define pinstCButtonWnd_x                                          0x161E8B0
#define pinstCCastingWnd_x                                         0xEDEE10
#define pinstCCastSpellWnd_x                                       0xEDEE20
#define pinstCCharacterListWnd_x                                   0xEDEDB4
#define pinstCChatWindowManager_x                                  0xFAC220
#define pinstCClaimWnd_x                                           0xFAC378
#define pinstCColorPickerWnd_x                                     0xEDEDC8
#define pinstCCombatAbilityWnd_x                                   0xEDF0D0
#define pinstCCombatSkillsSelectWnd_x                              0xEDF0D4
#define pinstCCompassWnd_x                                         0xEDF0EC
#define pinstCConfirmationDialog_x                                 0xFB1240
#define pinstCContainerMgr_x                                       0xEDF110
#define pinstCContextMenuManager_x                                 0x161E600
#define pinstCCursorAttachment_x                                   0xEDEE08
#define pinstCDynamicZoneWnd_x                                     0xFAC940
#define pinstCEditLabelWnd_x                                       0xEDED74
#define pinstCEQMainWnd_x                                          0xFACB88
#define pinstCEventCalendarWnd_x                                   0xEDF100
#define pinstCExtendedTargetWnd_x                                  0xEDEE0C
#define pinstCPlayerCustomizationWnd_x                             0xEDEDBC
#define pinstCFactionWnd_x                                         0xEDEE1C
#define pinstCFellowshipWnd_x                                      0xFACD88
#define pinstCFileSelectionWnd_x                                   0xEDF0E0
#define pinstCFindItemWnd_x                                        0xEDED10
#define pinstCFindLocationWnd_x                                    0xFACEE0
#define pinstCFriendsWnd_x                                         0xEDF0DC
#define pinstCGemsGameWnd_x                                        0xEDF104
#define pinstCGiveWnd_x                                            0xEDED5C
#define pinstCGroupSearchFiltersWnd_x                              0xEDEDF4
#define pinstCGroupSearchWnd_x                                     0xFAD2D8
#define pinstCGroupWnd_x                                           0xFAD388
#define pinstCGuildBankWnd_x                                       0xFAD438
#define pinstCGuildCreationWnd_x                                   0xFAD4E8
#define pinstCGuildMgmtWnd_x                                       0xFAD598
#define pinstCharacterCreation_x                                   0xEDEE04
#define pinstCHelpWnd_x                                            0xEDF070
#define pinstCHeritageSelectionWnd_x                               0xEDEDC0
#define pinstCHotButtonWnd_x                                       0xFAF6F0
#define pinstCHotButtonWnd1_x                                      0xFAF6F0
#define pinstCHotButtonWnd2_x                                      0xFAF6F4
#define pinstCHotButtonWnd3_x                                      0xFAF6F8
#define pinstCHotButtonWnd4_x                                      0xFAF6FC
#define pinstCIconSelectionWnd_x                                   0xEDED8C
#define pinstCInspectWnd_x                                         0xEDED80
#define pinstCInventoryWnd_x                                       0xEDF06C
#define pinstCInvSlotMgr_x                                         0xEDF0F8
#define pinstCItemDisplayManager_x                                 0xFAFC48
#define pinstCItemExpTransferWnd_x                                 0xFAFD7C
#define pinstCItemOverflowWnd_x                                    0xEDED44
#define pinstCJournalCatWnd_x                                      0xEDF130
#define pinstCJournalNPCWnd_x                                      0xEDF124
#define pinstCJournalTextWnd_x                                     0xEDF124
#define pinstCKeyRingWnd_x                                         0xEDF078
#define pinstCLargeDialogWnd_x                                     0xFB1EC0
#define pinstCLayoutCopyWnd_x                                      0xFB00C8
#define pinstCLFGuildWnd_x                                         0xFB0178
#define pinstCLoadskinWnd_x                                        0xEDF108
#define pinstCLootFiltersCopyWnd_x                                 0xEDE178
#define pinstCLootFiltersWnd_x                                     0xEDF128
#define pinstCLootSettingsWnd_x                                    0xEDF12C
#define pinstCLootWnd_x                                            0xEDF090
#define pinstCMailAddressBookWnd_x                                 0xEDEDA4
#define pinstCMailCompositionWnd_x                                 0xEDED9C
#define pinstCMailIgnoreListWnd_x                                  0xEDEDA8
#define pinstCMailWnd_x                                            0xEDED98
#define pinstCManageLootWnd_x                                      0xEE0378
#define pinstCMapToolbarWnd_x                                      0xEDED68
#define pinstCMapViewWnd_x                                         0xEDED58
#define pinstCMarketplaceWnd_x                                     0xEDED38
#define pinstCMerchantWnd_x                                        0xEDED3C
#define pinstCMIZoneSelectWnd_x                                    0xFB09B0
#define pinstCMusicPlayerWnd_x                                     0xEDF0FC
#define pinstCNameChangeMercWnd_x                                  0xEDEE34
#define pinstCNameChangePetWnd_x                                   0xEDEE30
#define pinstCNameChangeWnd_x                                      0xEDED94
#define pinstCNoteWnd_x                                            0xEDF068
#define pinstCObjectPreviewWnd_x                                   0xEDEDAC
#define pinstCOptionsWnd_x                                         0xEDEDCC
#define pinstCOverseerWnd_x                                        0xEDED34
#define pinstCPetInfoWnd_x                                         0xEDF094
#define pinstCPetitionQWnd_x                                       0xEDEDEC
#define pinstCPlayerNotesWnd_x                                     0xEDF0F0
#define pinstCPlayerWnd_x                                          0xEDED08
#define pinstCPopupWndManager_x                                    0xFB1240
#define pinstCProgressionSelectionWnd_x                            0xFB12F0
#define pinstCPurchaseGroupWnd_x                                   0xEDED48
#define pinstCPurchaseWnd_x                                        0xEDED40
#define pinstCPvPLeaderboardWnd_x                                  0xFB13A0
#define pinstCPvPStatsWnd_x                                        0xFB1450
#define pinstCQuantityWnd_x                                        0xEDF088
#define pinstCRaceChangeWnd_x                                      0xEDEDA0
#define pinstCRaidOptionsWnd_x                                     0xEDEE18
#define pinstCRaidWnd_x                                            0xEDEE24
#define pinstCRealEstateItemsWnd_x                                 0xEDEDC4
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDEE00
#define pinstCRealEstateManageWnd_x                                0xEDEDE8
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDEDF0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDEDF8
#define pinstCRealEstatePurchaseWnd_x                              0xEDEDFC
#define pinstCRespawnWnd_x                                         0xEDF0E8
#define pinstCRewardSelectionWnd_x                                 0xFB1B98
#define pinstCSelectorWnd_x                                        0xEDED50
#define pinstCSendMoneyWnd_x                                       0xEDED70
#define pinstCServerListWnd_x                                      0xEDF0D8
#define pinstCSkillsSelectWnd_x                                    0xEDF0C8
#define pinstCSkillsWnd_x                                          0xEDF0C0
#define pinstCSocialEditWnd_x                                      0xEDED88
#define pinstCSocialWnd_x                                          0xEDF11C
#define pinstCSpellBookWnd_x                                       0xEDEE38
#define pinstCStoryWnd_x                                           0xEDF13C
#define pinstCTargetOfTargetWnd_x                                  0xFB31F8
#define pinstCTargetWnd_x                                          0xEDED7C
#define pinstCTaskOverlayWnd_x                                     0xEDF134
#define pinstCTaskSelectWnd_x                                      0xFB3350
#define pinstCTaskManager_x                                        0xC68268
#define pinstCTaskTemplateSelectWnd_x                              0xFB3400
#define pinstCTaskWnd_x                                            0xFB34B0
#define pinstCTextEntryWnd_x                                       0xEDF0CC
#define pinstCTimeLeftWnd_x                                        0xEDEDE0
#define pinstCTipWndCONTEXT_x                                      0xFB36B4
#define pinstCTipWndOFDAY_x                                        0xFB36B0
#define pinstCTitleWnd_x                                           0xFB3760
#define pinstCTrackingWnd_x                                        0xEDED78
#define pinstCTradeskillWnd_x                                      0xFB38C8
#define pinstCTradeWnd_x                                           0xEDED4C
#define pinstCTrainWnd_x                                           0xEDF098
#define pinstCTributeBenefitWnd_x                                  0xFB3AC8
#define pinstCTributeMasterWnd_x                                   0xFB3B78
#define pinstCTributeTrophyWnd_x                                   0xFB3C28
#define pinstCVideoModesWnd_x                                      0xEDED64
#define pinstCVoiceMacroWnd_x                                      0xF9D120
#define pinstCVoteResultsWnd_x                                     0xEDEE2C
#define pinstCVoteWnd_x                                            0xEDEE28
#define pinstCZoneGuideWnd_x                                       0xEDF074
#define pinstCZonePathWnd_x                                        0xEDF07C
#define pinstEQSuiteTextureLoader_x                                0xEAC938
#define pinstItemIconCache_x                                       0xFACB40
#define pinstLootFiltersManager_x                                  0xEDE228
#define pinstRewardSelectionWnd_x                                  0xFB1B98

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DAC40
#define __CastRay2_x                                               0x5DAED0
#define __ConvertItemTags_x                                        0x5F8090
#define __CleanItemTags_x                                          0x47DA40
#define __CreateCascadeMenuItems_x                                 0x56F700
#define __DoesFileExist_x                                          0x9507C0
#define __EQGetTime_x                                              0x94D4A0
#define __ExecuteCmd_x                                             0x5D3080
#define __FixHeading_x                                             0x9EC2E0
#define __FlushDxKeyboard_x                                        0x6D7C00
#define __GameLoop_x                                               0x6DB500
#define __get_bearing_x                                            0x5DA7E0
#define __get_melee_range_x                                        0x5DB110
#define __GetAnimationCache_x                                      0x749B60
#define __GetGaugeValueFromEQ_x                                    0x859890
#define __GetLabelFromEQ_x                                         0x85B2A0
#define __GetXTargetType_x                                         0x9EE650
#define __HandleMouseWheel_x                                       0x6DC990
#define __HeadingDiff_x                                            0x9EC340
#define __HelpPath_x                                               0xF9893C
#define __ExecuteFrontEnd_x                                        0x6D83E0
#define __NewUIINI_x                                               0x859560
#define __ProcessGameEvents_x                                      0x641450
#define __ProcessKeyboardEvents_x                                  0x6D9B50
#define __ProcessMouseEvents_x                                     0x640B50
#define __SaveColors_x                                             0x56F5E0
#define __STMLToText_x                                             0x989F90
#define __WndProc_x                                                0x6DA610
#define CMemoryMappedFile__SetFile_x                               0xADCA40
#define CrashDetected_x                                            0x6DA110
#define DrawNetStatus_x                                            0x670810
#define Expansion_HoT_x                                            0xDADD10
#define Teleport_Table_Size_x                                      0xF93190
#define Teleport_Table_x                                           0xF90D68
#define Util__FastTime_x                                           0x94D060
#define __eq_delete_x                                              0x9F51B5
#define __eq_new_x                                                 0x9F5724
#define __CopyLayout_x                                             0x65D3F0
#define __ThrottleFrameRate_x                                      0x62A423
#define __ThrottleFrameRateEnd_x                                   0x62A47F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6E9080
#define CAAWnd__Update_x                                           0x6E83B0
#define CAAWnd__UpdateSelected_x                                   0x6E5720

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B350
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495650
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494890

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x578630
#define AltAdvManager__IsAbilityReady_x                            0x577210
#define AltAdvManager__GetAAById_x                                 0x5775B0
#define AltAdvManager__CanTrainAbility_x                           0x577620
#define AltAdvManager__CanSeeAbility_x                             0x5779D0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDD10
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC620
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC800
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1280
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1670
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAD00
#define CharacterZoneClient__GetCurrentMod_x                       0x4EBC60
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFC50
#define CharacterZoneClient__GetEffect_x                           0x4C11C0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC3C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6D60
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8A80
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFB10
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFA10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC460
#define CharacterZoneClient__GetMaxEffects_x                       0x4C51C0
#define CharacterZoneClient__GetModCap_x                           0x4EBB60
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC310
#define CharacterZoneClient__HasSkill_x                            0x4DCDC0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8AC0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE510
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E7C30
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA4A0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x705830
#define CBankWnd__WndNotification_x                                0x7055D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x710280

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70AEB0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x708E90

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7149B0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x987530
#define CButtonWnd__CButtonWnd_x                                   0x985E90
#define CButtonWnd__dCButtonWnd_x                                  0x986130
#define CButtonWnd__vftable_x                                      0xB8B3D8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x737280
#define CChatWindowManager__InitContextMenu_x                      0x7301B0
#define CChatWindowManager__FreeChatWindow_x                       0x735E40
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x736F60
#define CChatWindowManager__CreateChatWindow_x                     0x736470

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFB90

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x737BE0
#define CChatWindow__Clear_x                                       0x739030
#define CChatWindow__WndNotification_x                             0x7397C0
#define CChatWindow__AddHistory_x                                  0x738890

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99D300
#define CContextMenu__dCContextMenu_x                              0x99D530
#define CContextMenu__AddMenuItem_x                                0x99D540
#define CContextMenu__RemoveMenuItem_x                             0x99D850
#define CContextMenu__RemoveAllMenuItems_x                         0x99D870
#define CContextMenu__CheckMenuItem_x                              0x99D8D0
#define CContextMenu__SetMenuItem_x                                0x99D770
#define CContextMenu__AddSeparator_x                               0x99D6D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99DE60
#define CContextMenuManager__RemoveMenu_x                          0x99DED0
#define CContextMenuManager__PopupMenu_x                           0x99DF90
#define CContextMenuManager__Flush_x                               0x99DE00
#define CContextMenuManager__GetMenu_x                             0x49D9B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x743B20

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8EF950
#define CChatService__GetFriendName_x                              0x927DB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99A3F0
#define CComboWnd__Draw_x                                          0x999890
#define CComboWnd__GetCurChoice_x                                  0x99A1C0
#define CComboWnd__GetListRect_x                                   0x999D40
#define CComboWnd__GetTextRect_x                                   0x99A460
#define CComboWnd__InsertChoice_x                                  0x999ED0
#define CComboWnd__SetColors_x                                     0x999EA0
#define CComboWnd__SetChoice_x                                     0x99A1A0
#define CComboWnd__GetItemCount_x                                  0x99A1D0
#define CComboWnd__GetCurChoiceText_x                              0x99A200
#define CComboWnd__GetChoiceText_x                                 0x99A1E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x999F60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x741160
#define CContainerWnd__vftable_x                                   0xB593BC
#define CContainerWnd__SetContainer_x                              0x7429C0

// CDisplay
#define CDisplay__cameraType_x                                     0xEDEE50
#define CDisplay__ZoneMainUI_x                                     0x569E20
#define CDisplay__PreZoneMainUI_x                                  0x569E30
#define CDisplay__CleanGameUI_x                                    0x56F3C0
#define CDisplay__GetClickedActor_x                                0x561BF0
#define CDisplay__GetUserDefinedColor_x                            0x559950
#define CDisplay__GetWorldFilePath_x                               0x563700
#define CDisplay__is3dON_x                                         0x55E480
#define CDisplay__ReloadUI_x                                       0x569140
#define CDisplay__WriteTextHD2_x                                   0x55E270
#define CDisplay__TrueDistance_x                                   0x5656E0
#define CDisplay__SetViewActor_x                                   0x561510
#define CDisplay__GetFloorHeight_x                                 0x55E540
#define CDisplay__SetRenderWindow_x                                0x55CEC0
#define CDisplay__ToggleScreenshotMode_x                           0x560FE0
#define CDisplay__RealRender_World_x                               0x55C1D0

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9BFB40

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A0E20
#define CEditWnd__EnsureCaretVisible_x                             0x9A31A0
#define CEditWnd__GetCaretPt_x                                     0x9A2000
#define CEditWnd__GetCharIndexPt_x                                 0x9A1DB0
#define CEditWnd__GetDisplayString_x                               0x9A1C50
#define CEditWnd__GetHorzOffset_x                                  0x9A0380
#define CEditWnd__GetLineForPrintableChar_x                        0x9A30B0
#define CEditWnd__GetSelStartPt_x                                  0x9A2060
#define CEditWnd__GetSTMLSafeText_x                                0x9A1A60
#define CEditWnd__PointFromPrintableChar_x                         0x9A2CF0
#define CEditWnd__ReplaceSelection_x                               0x9A28B0
#define CEditWnd__SelectableCharFromPoint_x                        0x9A2E50
#define CEditWnd__SetEditable_x                                    0x9A2130
#define CEditWnd__SetWindowText_x                                  0x9A17B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62CB70
#define CEverQuest__ClickedPlayer_x                                0x61E1D0
#define CEverQuest__CreateTargetIndicator_x                        0x63E3D0
#define CEverQuest__DeleteTargetIndicator_x                        0x63E460
#define CEverQuest__DoTellWindow_x                                 0x4EFC90
#define CEverQuest__OutputTextToLog_x                              0x4EFF60
#define CEverQuest__DropHeldItemOnGround_x                         0x6132A0
#define CEverQuest__dsp_chat_x                                     0x4F0330
#define CEverQuest__trimName_x                                     0x6399C0
#define CEverQuest__Emote_x                                        0x62D230
#define CEverQuest__EnterZone_x                                    0x626F80
#define CEverQuest__GetBodyTypeDesc_x                              0x632790
#define CEverQuest__GetClassDesc_x                                 0x632DD0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6333D0
#define CEverQuest__GetDeityDesc_x                                 0x63CB80
#define CEverQuest__GetLangDesc_x                                  0x633590
#define CEverQuest__GetRaceDesc_x                                  0x632DB0
#define CEverQuest__InterpretCmd_x                                 0x63D1F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x617790
#define CEverQuest__LMouseUp_x                                     0x615850
#define CEverQuest__RightClickedOnPlayer_x                         0x618380
#define CEverQuest__RMouseUp_x                                     0x616B10
#define CEverQuest__SetGameState_x                                 0x613020
#define CEverQuest__UPCNotificationFlush_x                         0x6398E0
#define CEverQuest__IssuePetCommand_x                              0x634B90
#define CEverQuest__ReportSuccessfulHeal_x                         0x62E030
#define CEverQuest__ReportSuccessfulHit_x                          0x62EB10

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x754AF0
#define CGaugeWnd__CalcLinesFillRect_x                             0x754B50
#define CGaugeWnd__Draw_x                                          0x754100

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B48D0
#define CGuild__GetGuildName_x                                     0x4B30F0
#define CGuild__GetGuildIndex_x                                    0x4B3810

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x771FA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x651D80
#define CHotButton__SetCheck_x                                     0x6519C0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x77F0F0
#define CInvSlotMgr__MoveItem_x                                    0x77DD30
#define CInvSlotMgr__SelectSlot_x                                  0x77F1B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77C570
#define CInvSlot__SliderComplete_x                                 0x7798C0
#define CInvSlot__GetItemBase_x                                    0x779170
#define CInvSlot__UpdateItem_x                                     0x779360

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x77FFB0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7809B0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x853CD0
#define CItemDisplayWnd__UpdateStrings_x                           0x798750
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78D740
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78DC90
#define CItemDisplayWnd__SetItem_x                                 0x798E50
#define CItemDisplayWnd__AboutToShow_x                             0x798350
#define CItemDisplayWnd__WndNotification_x                         0x79A5A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x799C70
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x797230
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x798140

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x888EF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x79FCE0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x5287C0

// CLabel
#define CLabel__UpdateText_x                                       0x7A6820

// CListWnd
#define CListWnd__CListWnd_x                                       0x96C7B0
#define CListWnd__dCListWnd_x                                      0x96CAB0
#define CListWnd__vftable_x                                        0xB8ACB8
#define CListWnd__AddColumn_x                                      0x971680
#define CListWnd__AddColumn1_x                                     0x9717A0
#define CListWnd__AddLine_x                                        0x971B10
#define CListWnd__AddString_x                                      0x971910
#define CListWnd__CalculateFirstVisibleLine_x                      0x971430
#define CListWnd__CalculateVSBRange_x                              0x971210
#define CListWnd__ClearSel_x                                       0x972400
#define CListWnd__ClearAllSel_x                                    0x972450
#define CListWnd__CloseAndUpdateEditWindow_x                       0x972F00
#define CListWnd__Compare_x                                        0x9709A0
#define CListWnd__Draw_x                                           0x96CC70
#define CListWnd__DrawColumnSeparators_x                           0x96F7A0
#define CListWnd__DrawHeader_x                                     0x96FBF0
#define CListWnd__DrawItem_x                                       0x970240
#define CListWnd__DrawLine_x                                       0x96F900
#define CListWnd__DrawSeparator_x                                  0x96F840
#define CListWnd__EnableLine_x                                     0x96F060
#define CListWnd__EnsureVisible_x                                  0x972E20
#define CListWnd__ExtendSel_x                                      0x972340
#define CListWnd__GetColumnTooltip_x                               0x96EBE0
#define CListWnd__GetColumnMinWidth_x                              0x96EC50
#define CListWnd__GetColumnWidth_x                                 0x96EB60
#define CListWnd__GetCurSel_x                                      0x96E500
#define CListWnd__GetItemAtPoint_x                                 0x96F2D0
#define CListWnd__GetItemAtPoint1_x                                0x96F340
#define CListWnd__GetItemData_x                                    0x96E580
#define CListWnd__GetItemHeight_x                                  0x96E930
#define CListWnd__GetItemIcon_x                                    0x96E700
#define CListWnd__GetItemRect_x                                    0x96F150
#define CListWnd__GetItemText_x                                    0x96E5C0
#define CListWnd__GetSelList_x                                     0x9724A0
#define CListWnd__GetSeparatorRect_x                               0x96F5B0
#define CListWnd__InsertLine_x                                     0x971F70
#define CListWnd__RemoveLine_x                                     0x972190
#define CListWnd__SetColors_x                                      0x9711F0
#define CListWnd__SetColumnJustification_x                         0x970F20
#define CListWnd__SetColumnLabel_x                                 0x9718B0
#define CListWnd__SetColumnWidth_x                                 0x970E30
#define CListWnd__SetCurSel_x                                      0x972290
#define CListWnd__SetItemColor_x                                   0x972AE0
#define CListWnd__SetItemData_x                                    0x972AA0
#define CListWnd__SetItemText_x                                    0x9726C0
#define CListWnd__ShiftColumnSeparator_x                           0x970FE0
#define CListWnd__Sort_x                                           0x970C90
#define CListWnd__ToggleSel_x                                      0x9722C0
#define CListWnd__SetColumnsSizable_x                              0x971080
#define CListWnd__SetItemWnd_x                                     0x972960
#define CListWnd__GetItemWnd_x                                     0x96E750
#define CListWnd__SetItemIcon_x                                    0x972740
#define CListWnd__CalculateCustomWindowPositions_x                 0x971530
#define CListWnd__SetVScrollPos_x                                  0x970E10

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7BDC30

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B8E80
#define MapViewMap__dMapViewMap_x                                  0x7B8FD0
#define MapViewMap__vftable_x                                      0xB607E0
#define MapViewMap__Clear_x                                        0x7B98E0
#define MapViewMap__SaveEx_x                                       0x7BCE1F
#define MapViewMap__SetZoom_x                                      0x7C2A50
#define MapViewMap__HandleLButtonDown_x                            0x7B90E0
#define MapViewMap__GetWorldCoordinates_x                          0x7BC250

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E0E50
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E17B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E1E40
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E5130
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7DF8C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EB330
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E0AA0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F4B90
#define CPacketScrambler__hton_x                                   0x8F4B80

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x995690
#define CSidlManagerBase__CreatePageWnd_x                          0x994E80
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x990350
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9902E0
#define CSidlManagerBase__FindAnimation1_x                         0x9905D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x9909A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x9907D0
#define CSidlManagerBase__CreateLabel_x                            0x849A30
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x993E50
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x9940E0
#define CSidlManagerBase__CreateXWnd_x                             0x994120

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x849E60
#define CSidlManager__CreateXWnd_x                                 0x8494B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98C330
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98C230
#define CSidlScreenWnd__ConvertToRes_x                             0x9B9D90
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98BBB0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98B8A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98B970
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98BA40
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98CBC0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98D0A0
#define CSidlScreenWnd__GetChildItem_x                             0x98D020
#define CSidlScreenWnd__GetSidlPiece_x                             0x98CDB0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97B490
#define CSidlScreenWnd__Init1_x                                    0x98B350
#define CSidlScreenWnd__LoadIniInfo_x                              0x98D0F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98DCC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98A760
#define CSidlScreenWnd__m_layoutCopy_x                             0x161E4D0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98D840
#define CSidlScreenWnd__StoreIniVis_x                              0x98DBB0
#define CSidlScreenWnd__vftable_x                                  0xB8B684
#define CSidlScreenWnd__WndNotification_x                          0x98CA90

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6BF990
#define CSkillMgr__GetSkillCap_x                                   0x6BFB60
#define CSkillMgr__GetNameToken_x                                  0x6BF1D0
#define CSkillMgr__IsActivatedSkill_x                              0x6BF2C0
#define CSkillMgr__IsCombatSkill_x                                 0x6BF230

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x99EF50
#define CSliderWnd__SetValue_x                                     0x99ED80
#define CSliderWnd__SetNumTicks_x                                  0x99EDE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x8506B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A8490
#define CStmlWnd__CalculateHSBRange_x                              0x9A9400
#define CStmlWnd__CalculateVSBRange_x                              0x9A9370
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AE260
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AEF00
#define CStmlWnd__ForceParseNow_x                                  0x9A8A00
#define CStmlWnd__GetNextTagPiece_x                                0x9AE1C0
#define CStmlWnd__GetVisibleText_x                                 0x9A8A20
#define CStmlWnd__InitializeWindowVariables_x                      0x9AED50
#define CStmlWnd__MakeStmlColorTag_x                               0x9A7B30
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A7BA0
#define CStmlWnd__SetSTMLText_x                                    0x9A6910
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B0110
#define CStmlWnd__UpdateHistoryString_x                            0x9AF100

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A57C0
#define CTabWnd__DrawCurrentPage_x                                 0x9A6150
#define CTabWnd__DrawTab_x                                         0x9A5D40
#define CTabWnd__GetCurrentPage_x                                  0x9A4F20
#define CTabWnd__GetCurrentTabIndex_x                              0x9A4F10
#define CTabWnd__GetPageFromTabIndex_x                             0x9A5C80
#define CTabWnd__GetPageInnerRect_x                                0x9A5150
#define CTabWnd__GetTabInnerRect_x                                 0x9A5090
#define CTabWnd__GetTabRect_x                                      0x9A4F50
#define CTabWnd__InsertPage_x                                      0x9A5340
#define CTabWnd__RemovePage_x                                      0x9A5490
#define CTabWnd__SetPage_x                                         0x9A51D0
#define CTabWnd__SetPageRect_x                                     0x9A56C0
#define CTabWnd__UpdatePage_x                                      0x9A5B30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A4910
#define CPageWnd__SetTabText_x                                     0x9A48B0


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC970

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9778A0
#define CTextureFont__DrawWrappedText1_x                           0x9777D0
#define CTextureFont__DrawWrappedText2_x                           0x977990
#define CTextureFont__GetTextExtent_x                              0x977BA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B6840

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x962260

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x542220
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x9493F0
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x949630
#define CXStr__operator_equal1_x                                   0x949670
#define CXStr__operator_plus_equal1_x                              0x94A0D0
#define CXStr__SetString_x                                         0x94BF70
#define CXStr__operator_char_p_x                                   0x949B20
#define CXStr__GetChar_x                                           0x94B8D0
#define CXStr__Delete_x                                            0x94B1A0
#define CXStr__GetUnicode_x                                        0x94B940
#define CXStr__Insert_x                                            0x94B9A0
#define CXStr__FindNext_x                                          0x94B5F0
#define CXStr__gFreeLists_x                                        0xEAC310
#define CXStr__gCXStrAccess_x                                      0x161DD58

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99CF60

// CXWnd
#define CXWnd__BringToTop_x                                        0x97EF50
#define CXWnd__ClrFocus_x                                          0x97E8D0
#define CXWnd__Destroy_x                                           0x97E980
#define CXWnd__DoAllDrawing_x                                      0x97AAE0
#define CXWnd__DrawChildren_x                                      0x97AAB0
#define CXWnd__DrawColoredRect_x                                   0x97B070
#define CXWnd__DrawTooltip_x                                       0x979000
#define CXWnd__DrawTooltipAtPoint_x                                0x9790C0
#define CXWnd__GetBorderFrame_x                                    0x97AD10
#define CXWnd__GetChildItem_x                                      0x97F170
#define CXWnd__GetChildWndAt_x                                     0x97EFF0
#define CXWnd__GetClientClipRect_x                                 0x97D0F0
#define CXWnd__GetRelativeRect_x                                   0x97D420
#define CXWnd__GetScreenClipRect_x                                 0x97D1C0
#define CXWnd__GetScreenRect_x                                     0x97D360
#define CXWnd__GetTooltipRect_x                                    0x97B0C0
#define CXWnd__GetWindowTextA_x                                    0x4EFB30
#define CXWnd__IsActive_x                                          0x97B810
#define CXWnd__IsDescendantOf_x                                    0x97DDF0
#define CXWnd__IsReallyVisible_x                                   0x97DE20
#define CXWnd__IsType_x                                            0x97F770
#define CXWnd__Minimize_x                                          0x97E560
#define CXWnd__Move_x                                              0x97DE80
#define CXWnd__Move1_x                                             0x97DF80
#define CXWnd__ProcessTransition_x                                 0x97EA60
#define CXWnd__Refade_x                                            0x97E260
#define CXWnd__Resize_x                                            0x97E4F0
#define CXWnd__Right_x                                             0x97ED40
#define CXWnd__SetFocus_x                                          0x97E890
#define CXWnd__SetFont_x                                           0x97E900
#define CXWnd__SetKeyTooltip_x                                     0x97F540
#define CXWnd__SetMouseOver_x                                      0x97C1A0
#define CXWnd__SetParent_x                                         0x97DB00
#define CXWnd__StartFade_x                                         0x97DCD0
#define CXWnd__vftable_x                                           0xB8B0F8
#define CXWnd__CXWnd_x                                             0x977EB0
#define CXWnd__dCXWnd_x                                            0x9785C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BADE0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x981FE0
#define CXWndManager__DrawWindows_x                                0x982130
#define CXWndManager__GetKeyboardFlags_x                           0x984AC0
#define CXWndManager__HandleKeyboardMsg_x                          0x9846A0
#define CXWndManager__RemoveWnd_x                                  0x984D90
#define CXWndManager__RemovePendingDeletionWnd_x                   0x985240

// CDBStr
#define CDBStr__GetString_x                                        0x558460

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E0F60
#define CharacterZoneClient__CastSpell_x                           0x4C5B40
#define CharacterZoneClient__Cur_HP_x                              0x4D9A30
#define CharacterZoneClient__Cur_Mana_x                            0x4E0C30
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCB80
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDB20
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C91B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E6CC0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B8690
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B87E0
#define CharacterZoneClient__GetHPRegen_x                          0x4E6700
#define CharacterZoneClient__GetManaRegen_x                        0x4E7100
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9FE0
#define CharacterZoneClient__Max_Endurance_x                       0x680320
#define CharacterZoneClient__Max_HP_x                              0x4D9860
#define CharacterZoneClient__Max_Mana_x                            0x680100
#define CharacterZoneClient__SpellDuration_x                       0x4C9A20
#define CharacterZoneClient__TotalEffect_x                         0x4CD620
#define CharacterZoneClient__UseSkill_x                            0x4E82D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9155D0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x698550

// PcClient
#define PcClient__PcClient_x                                       0x6756D0
#define PcClient__GetConLevel_x                                    0x678450

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0140
#define CCharacterListWnd__EnterWorld_x                            0x4BFB10
#define CCharacterListWnd__Quit_x                                  0x4BF830
#define CCharacterListWnd__UpdateList_x                            0x4BFD00

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x657AA0
#define EQ_Item__CreateItemTagString_x                             0x8ED910
#define EQ_Item__IsStackable_x                                     0x8F2AE0
#define EQ_Item__GetImageNum_x                                     0x8EF5E0
#define EQ_Item__CreateItemClient_x                                0x656A40
#define EQ_Item__GetItemValue_x                                    0x8F0850
#define EQ_Item__ValueSellMerchant_x                               0x8F4850
#define EQ_Item__IsKeyRingItem_x                                   0x8F22B0
#define EQ_Item__CanGemFitInSlot_x                                 0x8ED120
#define EQ_Item__CanGoInBag_x                                      0x657BC0
#define EQ_Item__IsEmpty_x                                         0x8F1C90
#define EQ_Item__GetMaxItemCount_x                                 0x8F0C50
#define EQ_Item__GetHeldItem_x                                     0x8EF490
#define ItemClient__dItemClient_x                                  0x656990

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x579440
#define EQ_LoadingS__Array_x                                       0xD9AD30

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8FE8F0
#define EQ_PC__GetCombatAbility_x                                  0x8FEE70
#define EQ_PC__GetCombatAbilityTimer_x                             0x8FEEE0
#define EQ_PC__GetItemRecastTimer_x                                0x6834B0
#define EQ_PC__HasLoreItem_x                                       0x678DB0
#define EQ_PC__AlertInventoryChanged_x                             0x677D10
#define EQ_PC__GetPcZoneClient_x                                   0x6A8C50
#define EQ_PC__RemoveMyAffect_x                                    0x686D20
#define EQ_PC__GetKeyRingItems_x                                   0x8FF9D0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8FF530
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8FFBB0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D7C50
#define EQItemList__add_object_x                                   0x6081C0
#define EQItemList__add_item_x                                     0x5D8230
#define EQItemList__delete_item_x                                  0x5D8280
#define EQItemList__FreeItemList_x                                 0x5D8190

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5544F0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x699F80
#define EQPlayer__dEQPlayer_x                                      0x68C830
#define EQPlayer__DoAttack_x                                       0x6A2970
#define EQPlayer__EQPlayer_x                                       0x68D080
#define EQPlayer__SetNameSpriteState_x                             0x691640
#define EQPlayer__SetNameSpriteTint_x                              0x692500
#define PlayerBase__HasProperty_j_x                                0x9EA6A0
#define EQPlayer__IsTargetable_x                                   0x9EAC00
#define EQPlayer__CanSee_x                                         0x9EA9F0
#define EQPlayer__CanSee1_x                                        0x9EAAC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EA760

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A6730
#define PlayerZoneClient__GetLevel_x                               0x6A8C90
#define PlayerZoneClient__IsValidTeleport_x                        0x609670
#define PlayerZoneClient__LegalPlayerRace_x                        0x5713E0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69D120
#define EQPlayerManager__GetSpawnByName_x                          0x69D1D0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69D260

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65B3B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65B480
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65B4C0
#define KeypressHandler__ClearCommandStateArray_x                  0x65C980
#define KeypressHandler__HandleKeyDown_x                           0x65C9A0
#define KeypressHandler__HandleKeyUp_x                             0x65CA40
#define KeypressHandler__SaveKeymapping_x                          0x65CFF0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x913460

// StringTable
#define StringTable__getString_x                                   0x90E1B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x682EB0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x681060
#define PcZoneClient__GetPcSkillLimit_x                            0x686970
#define PcZoneClient__RemovePetEffect_x                            0x686FD0
#define PcZoneClient__HasAlternateAbility_x                        0x67FF60
#define PcZoneClient__CanEquipItem_x                               0x680620
#define PcZoneClient__GetItemByID_x                                0x6839E0
#define PcZoneClient__RemoveBuffEffect_x                           0x687080
#define PcZoneClient__BandolierSwap_x                              0x681620
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683450

// Doors
#define EQSwitch__UseSwitch_x                                      0x60E270

// IconCache
#define IconCache__GetIcon_x                                       0x749500

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x740030
#define CContainerMgr__CloseContainer_x                            0x740350
#define CContainerMgr__OpenExperimentContainer_x                   0x740EB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x818D40

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650180

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7AEB50
#define CLootWnd__RequestLootSlot_x                                0x7ADD70

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A39C0
#define EQ_Spell__SpellAffects_x                                   0x5A3EC0
#define EQ_Spell__SpellAffectBase_x                                0x5A3BE0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1010
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0FC0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4C70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A40C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4C80
#define __IsResEffectSpell_x                                       0x4D07C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1660

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x865890
#define CTargetWnd__WndNotification_x                              0x865030
#define CTargetWnd__RefreshTargetBuffs_x                           0x865390
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x863E10

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86A400
#define CTaskWnd__ConfirmAbandonTask_x                             0x86D4B0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x5520B0
#define CTaskManager__HandleMessage_x                              0x54FF80
#define CTaskManager__GetTaskStatus_x                              0x552160
#define CTaskManager__GetElementDescription_x                      0x5521E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E5F0
#define EqSoundManager__PlayScriptMp3_x                            0x59E7F0
#define EqSoundManager__SoundAssistPlay_x                          0x6C3E20
#define EqSoundManager__WaveInstancePlay_x                         0x6C3310

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541ED0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A3F70
#define CTextureAnimation__SetCurCell_x                            0x9A3D30

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581A50
#define CAltAbilityData__GetMercMaxRank_x                          0x5819E0

// CTargetRing
#define CTargetRing__Cast_x                                        0x64D990

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x644110
#define CharacterBase__GetItemByGlobalIndex_x                      0x925AC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x925B10
#define CharacterBase__GetMemorizedSpell_x                         0x656890
#define CharacterBase__IsExpansionFlag_x                           0x5D1930

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x724F60
#define CCastSpellWnd__IsBardSongPlaying_x                         0x725820
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7258D0

// messages
#define msg_spell_worn_off_x                                       0x5C91B0
#define msg_new_text_x                                             0x5BCD10
#define __msgTokenTextParam_x                                      0x5CB610
#define msgTokenText_x                                             0x5CBA20

// SpellManager
#define SpellManager__vftable_x                                    0xB37538
#define SpellManager__SpellManager_x                               0x6C7A60
#define Spellmanager__LoadTextSpells_x                             0x6C8360
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C7C30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9EEF00

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91E9B0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x91ED00

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A6C90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x744D90
#define CCursorAttachment__AttachToCursor1_x                       0x744DD0
#define CCursorAttachment__Deactivate_x                            0x746380

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B4CB0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B5410
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B5090

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x521FF0
#define CFindItemWnd__WndNotification_x                            0x522EB0
#define CFindItemWnd__Update_x                                     0x523AD0
#define CFindItemWnd__PickupSelectedItem_x                         0x5216C0

// IString
#define IString__Append_x                                          0x557EE0

// Camera
#define EverQuest__Cameras_x                                       0xDAE05C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CC60
#define LootFiltersManager__GetItemFilterData_x                    0x52C5A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C5D0
#define LootFiltersManager__SetItemLootFilter_x                    0x52C7E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x805780

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F4BC0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BE2E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73C9E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x929770
#define CDistillerInfo__Instance_x                                 0x9296B0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x75F700
#define CGroupWnd__UpdateDisplay_x                                 0x75E950

// ItemBase
#define ItemBase__IsLore_x                                         0x8F2350
#define ItemBase__IsLoreEquipped_x                                 0x8F23C0

#define MultipleItemMoveManager__ProcessMove_x                     0x66C680

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608120
#define EQPlacedItemManager__GetItemByGuid_x                       0x608260
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6082C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B2A70

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517A00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5026B0
#define FactionManagerClient__HandleFactionMessage_x               0x502ED0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5036C0
#define FactionManagerClient__GetMaxFaction_x                      0x5036DF
#define FactionManagerClient__GetMinFaction_x                      0x503690

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F340

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x976510

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F5B0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580C00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x581650

// CTargetManager
#define CTargetManager__Get_x                                      0x6CB9E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B2A70

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC730

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8130

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4B6F0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DC8F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DD500

// AchievementManager
#define AchievementManager__Instance_x                             0x47E350

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
