/*
 * MacroQuest: The extension platform for EverQuest
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

//
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Dec  5 2020"
#define __ExpectedVersionTime                                     "00:41:50"
#define __ActualVersionDate_x                                      0xAEB114
#define __ActualVersionTime_x                                      0xAEB108
#define __ActualVersionBuild_x                                     0xAD9454

// Memory Protection
#define __MemChecker0_x                                            0x6420F0
#define __MemChecker1_x                                            0x8EEF40
#define __MemChecker2_x                                            0x6B0BB0
#define __MemChecker3_x                                            0x6B0B00
#define __MemChecker4_x                                            0x847F50
#define __EncryptPad0_x                                            0xC1E4E0
#define __EncryptPad1_x                                            0xC7AEF0
#define __EncryptPad2_x                                            0xC2DA50
#define __EncryptPad3_x                                            0xC2D650
#define __EncryptPad4_x                                            0xC6B488
#define __EncryptPad5_x                                            0xF3D8A8
#define __AC1_x                                                    0x8066A6
#define __AC2_x                                                    0x5FC28F
#define __AC3_x                                                    0x6038E0
#define __AC4_x                                                    0x607890
#define __AC5_x                                                    0x60DB8F
#define __AC6_x                                                    0x612026
#define __AC7_x                                                    0x5FBD00
#define __AC1_Data                                                 0x11100111
#define __EP1_Data_x                                               0x0

// Direct Input
#define DI8__Main_x                                                0xF3D8D0
#define DI8__Keyboard_x                                            0xF3D8D4
#define DI8__Mouse_x                                               0xF3D8B4
#define DI8__Mouse_Copy_x                                          0xE964B4
#define DI8__Mouse_Check_x                                         0xF3B3FC
#define __AutoSkillArray_x                                         0xE973D0
#define __Attack_x                                                 0xF351FF
#define __Autofire_x                                               0xF35200
#define __BindList_x                                               0xC0D3F8
#define g_eqCommandStates_x                                        0xC0E178
#define __Clicks_x                                                 0xE9656C
#define __CommandList_x                                            0xC0ED38
#define __CurrentMapLabel_x                                        0xF4D8C4
#define __CurrentSocial_x                                          0xBF67D4
#define __DoAbilityList_x                                          0xECCD20
#define __do_loot_x                                                0x5C7BE0
#define __DrawHandler_x                                            0x15CC6B8
#define __GroupCount_x                                             0xE8EFBA
#define __Guilds_x                                                 0xE953F0
#define __gWorld_x                                                 0xE8F778
#define __HWnd_x                                                   0xF3D8B8
#define __heqmain_x                                                0xF3D890
#define __InChatMode_x                                             0xE9649C
#define __LastTell_x                                               0xE9841C
#define __LMouseHeldTime_x                                         0xE965D8
#define __Mouse_x                                                  0xF3D8BC
#define __MouseLook_x                                              0xE96532
#define __MouseEventTime_x                                         0xF35C3C
#define __gpbCommandEvent_x                                        0xE8F224
#define __NetStatusToggle_x                                        0xE96535
#define __PCNames_x                                                0xE979CC
#define __RangeAttackReady_x                                       0xE976B4
#define __RMouseHeldTime_x                                         0xE965D4
#define __RunWalkState_x                                           0xE964A0
#define __ScreenMode_x                                             0xDDCF64
#define __ScreenX_x                                                0xE96454
#define __ScreenY_x                                                0xE96450
#define __ScreenXMax_x                                             0xE96458
#define __ScreenYMax_x                                             0xE9645C
#define __ServerHost_x                                             0xE8F3F3
#define __ServerName_x                                             0xECCCE0
#define __ShiftKeyDown_x                                           0xE96B30
#define __ShowNames_x                                              0xE97870
#define __SocialChangedList_x                                      0xECCD68
#define __Socials_x                                                0xECCDE0
#define __SubscriptionType_x                                       0xF91988
#define __TargetAggroHolder_x                                      0xF50278
#define __ZoneType_x                                               0xE96930
#define __GroupAggro_x                                             0xF502B8
#define __LoginName_x                                              0xF3B08C
#define __Inviter_x                                                0xF3517C
#define __AttackOnAssist_x                                         0xE9782C
#define __UseTellWindows_x                                         0xE97B64
#define __gfMaxZoomCameraDistance_x                                0xAE3028
#define __gfMaxCameraDistance_x                                    0xB0B750
#define __pulAutoRun_x                                             0xE96550
#define __pulForward_x                                             0xE97B9C
#define __pulBackward_x                                            0xE97BA0
#define __pulTurnRight_x                                           0xE97BA4
#define __pulTurnLeft_x                                            0xE97BA8
#define __pulStrafeLeft_x                                          0xE97BAC
#define __pulStrafeRight_x                                         0xE97BB0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xE91788
#define instEQZoneInfo_x                                           0xE96728
#define pinstActiveBanker_x                                        0xE8F714
#define pinstActiveCorpse_x                                        0xE8F70C
#define pinstActiveGMaster_x                                       0xE8F710
#define pinstActiveMerchant_x                                      0xE8F708
#define pinstAltAdvManager_x                                       0xDDD9C0
#define pinstBandageTarget_x                                       0xE8F724
#define pinstCamActor_x                                            0xDDCF54
#define pinstCDBStr_x                                              0xDDC6DC
#define pinstCDisplay_x                                            0xE8F780
#define pinstCEverQuest_x                                          0xF3A950
#define pinstEverQuestInfo_x                                       0xE96448
#define pinstCharData_x                                            0xE8F1A8
#define pinstCharSpawn_x                                           0xE8F75C
#define pinstControlledMissile_x                                   0xE8F76C
#define pinstControlledPlayer_x                                    0xE8F75C
#define pinstCResolutionHandler_x                                  0x15CC8E8
#define pinstCSidlManager_x                                        0x15CB880
#define pinstCXWndManager_x                                        0x15CB87C
#define instDynamicZone_x                                          0xE952C8
#define pinstDZMember_x                                            0xE953D8
#define pinstDZTimerInfo_x                                         0xE953DC
#define pinstEqLogin_x                                             0xF3A9D8
#define instEQMisc_x                                               0xDDC620
#define pinstEQSoundManager_x                                      0xDDE990
#define pinstEQSpellStrings_x                                      0xC9EF18
#define instExpeditionLeader_x                                     0xE95312
#define instExpeditionName_x                                       0xE95352
#define pinstSGraphicsEngine_x                                     0x15CC6AC
#define pinstGroup_x                                               0xE8EFB6
#define pinstImeManager_x                                          0x15CB878
#define pinstLocalPlayer_x                                         0xE8F704
#define pinstMercenaryData_x                                       0xF37730
#define pinstMercenaryStats_x                                      0xF50344
#define pinstModelPlayer_x                                         0xE8F71C
#define pinstPCData_x                                              0xE8F1A8
#define pinstSkillMgr_x                                            0xF39878
#define pinstSpawnManager_x                                        0xF38320
#define pinstSpellManager_x                                        0xF39AB8
#define pinstSpellSets_x                                           0xF2DE28
#define pinstStringTable_x                                         0xE8F1B0
#define pinstSwitchManager_x                                       0xE8ED28
#define pinstTarget_x                                              0xE8F758
#define pinstTargetObject_x                                        0xE8F764
#define pinstTargetSwitch_x                                        0xE8F774
#define pinstTaskMember_x                                          0xDDC4B0
#define pinstTrackTarget_x                                         0xE8F760
#define pinstTradeTarget_x                                         0xE8F718
#define instTributeActive_x                                        0xDDC641
#define pinstViewActor_x                                           0xDDCF50
#define pinstWorldData_x                                           0xE8EE7C
#define pinstZoneAddr_x                                            0xE969C8
#define pinstPlayerPath_x                                          0xF383B8
#define pinstTargetIndicator_x                                     0xF39D20
#define EQObject_Top_x                                             0xE8F4FC

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xDDC998
#define pinstCAchievementsWnd_x                                    0xDDCEAC
#define pinstCActionsWnd_x                                         0xDDC9D4
#define pinstCAdvancedDisplayOptionsWindow_x                       0xDDCF58
#define pinstCAdvancedLootWnd_x                                    0xDDCF00
#define pinstCAdventureLeaderboardWnd_x                            0xF470E8
#define pinstCAdventureRequestWnd_x                                0xF47198
#define pinstCAdventureStatsWnd_x                                  0xF47248
#define pinstCAggroMeterWnd_x                                      0xDDCF38
#define pinstCAlarmWnd_x                                           0xDDCED8
#define pinstCAlertHistoryWnd_x                                    0xDDCFCC
#define pinstCAlertStackWnd_x                                      0xDDCF10
#define pinstCAlertWnd_x                                           0xDDCF34
#define pinstCAltStorageWnd_x                                      0xF475A8
#define pinstCAudioTriggersWindow_x                                0xC91248
#define pinstCAuraWnd_x                                            0xDDCF04
#define pinstCAvaZoneWnd_x                                         0xDDCFD0
#define pinstCBandolierWnd_x                                       0xDDCF4C
#define pinstCBankWnd_x                                            0xDDCFA0
#define pinstCBarterMerchantWnd_x                                  0xF487E8
#define pinstCBarterSearchWnd_x                                    0xF48898
#define pinstCBarterWnd_x                                          0xF48948
#define pinstCBazaarConfirmationWnd_x                              0xDDCEE8
#define pinstCBazaarSearchWnd_x                                    0xDDC99C
#define pinstCBazaarWnd_x                                          0xDDCEB8
#define pinstCBlockedBuffWnd_x                                     0xDDCF1C
#define pinstCBlockedPetBuffWnd_x                                  0xDDCF48
#define pinstCBodyTintWnd_x                                        0xDDCE5C
#define pinstCBookWnd_x                                            0xDDCF94
#define pinstCBreathWnd_x                                          0xDDC9C8
#define pinstCBuffWindowNORMAL_x                                   0xDDCEF8
#define pinstCBuffWindowSHORT_x                                    0xDDCEFC
#define pinstCBugReportWnd_x                                       0xDDCF98
#define pinstCButtonWnd_x                                          0x15CBAE8
#define pinstCCastingWnd_x                                         0x0
#define pinstCCastSpellWnd_x                                       0xDDC9A4
#define pinstCCharacterListWnd_x                                   0xDDCE68
#define pinstCChatWindowManager_x                                  0xF493F0
#define pinstCClaimWnd_x                                           0xF49548
#define pinstCColorPickerWnd_x                                     0xDDCFFC
#define pinstCCombatAbilityWnd_x                                   0xDDCEC8
#define pinstCCombatSkillsSelectWnd_x                              0xDDCE84
#define pinstCCompassWnd_x                                         0xDDCA4C
#define pinstCConfirmationDialog_x                                 0xF4E410
#define pinstCContainerMgr_x                                       0xDDCE74
#define pinstCContextMenuManager_x                                 0x15CB838
#define pinstCCursorAttachment_x                                   0xDDCF7C
#define pinstCDynamicZoneWnd_x                                     0xF49B10
#define pinstCEditLabelWnd_x                                       0xDDCEF4
#define pinstCEQMainWnd_x                                          0xF49D58
#define pinstCEventCalendarWnd_x                                   0xDDC994
#define pinstCExtendedTargetWnd_x                                  0xDDCF18
#define pinstCPlayerCustomizationWnd_x                             0xDDCE88
#define pinstCFactionWnd_x                                         0xDDCEA8
#define pinstCFellowshipWnd_x                                      0xF49F58
#define pinstCFileSelectionWnd_x                                   0xDDCFF0
#define pinstCFindItemWnd_x                                        0xDDCE94
#define pinstCFindLocationWnd_x                                    0xF4A0B0
#define pinstCFriendsWnd_x                                         0xDDCE98
#define pinstCGemsGameWnd_x                                        0xDDCEA4
#define pinstCGiveWnd_x                                            0xDDCEDC
#define pinstCGroupSearchFiltersWnd_x                              0xDDCF70
#define pinstCGroupSearchWnd_x                                     0xF4A4A8
#define pinstCGroupWnd_x                                           0xF4A558
#define pinstCGuildBankWnd_x                                       0xF4A608
#define pinstCGuildCreationWnd_x                                   0xF4A6B8
#define pinstCGuildMgmtWnd_x                                       0xF4A768
#define pinstCharacterCreation_x                                   0xDDCE8C
#define pinstCHelpWnd_x                                            0xDDCEE0
#define pinstCHeritageSelectionWnd_x                               0xDDCE9C
#define pinstCHotButtonWnd_x                                       0xF4C8C0
#define pinstCHotButtonWnd1_x                                      0xF4C8C0
#define pinstCHotButtonWnd2_x                                      0xF4C8C4
#define pinstCHotButtonWnd3_x                                      0xF4C8C8
#define pinstCHotButtonWnd4_x                                      0xF4C8CC
#define pinstCIconSelectionWnd_x                                   0xDDCF8C
#define pinstCInspectWnd_x                                         0xDDCF44
#define pinstCInventoryWnd_x                                       0xDDCF08
#define pinstCInvSlotMgr_x                                         0xDDC9AC
#define pinstCItemDisplayManager_x                                 0xF4CE18
#define pinstCItemExpTransferWnd_x                                 0xF4CF48
#define pinstCItemOverflowWnd_x                                    0xDDC9A0
#define pinstCJournalCatWnd_x                                      0xDDC778
#define pinstCJournalNPCWnd_x                                      0xDDCFC8
#define pinstCJournalTextWnd_x                                     0xDDCFC8
#define pinstCKeyRingWnd_x                                         0xDDCF84
#define pinstCLargeDialogWnd_x                                     0xF4F090
#define pinstCLayoutCopyWnd_x                                      0xF4D298
#define pinstCLFGuildWnd_x                                         0xF4D348
#define pinstCLoadskinWnd_x                                        0xDDCEBC
#define pinstCLootFiltersCopyWnd_x                                 0xCAD9B8
#define pinstCLootFiltersWnd_x                                     0xDDCF20
#define pinstCLootSettingsWnd_x                                    0xDDCF3C
#define pinstCLootWnd_x                                            0xDDC77C
#define pinstCMailAddressBookWnd_x                                 0xDDC98C
#define pinstCMailCompositionWnd_x                                 0xDDD010
#define pinstCMailIgnoreListWnd_x                                  0xDDC990
#define pinstCMailWnd_x                                            0xDDCFE8
#define pinstCManageLootWnd_x                                      0xDDDE70
#define pinstCMapToolbarWnd_x                                      0xDDCEE4
#define pinstCMapViewWnd_x                                         0xDDCEB4
#define pinstCMarketplaceWnd_x                                     0xDDCF24
#define pinstCMerchantWnd_x                                        0xDDC988
#define pinstCMIZoneSelectWnd_x                                    0xF4DB80
#define pinstCMusicPlayerWnd_x                                     0xDDCFB0
#define pinstCNameChangeMercWnd_x                                  0xDDCED4
#define pinstCNameChangePetWnd_x                                   0xDDCEB0
#define pinstCNameChangeWnd_x                                      0xDDCEF0
#define pinstCNoteWnd_x                                            0xDDCEC0
#define pinstCObjectPreviewWnd_x                                   0xDDCF40
#define pinstCOptionsWnd_x                                         0xDDCED0
#define pinstCPetInfoWnd_x                                         0xDDCFE0
#define pinstCPetitionQWnd_x                                       0xDDCE7C
#define pinstCPlayerNotesWnd_x                                     0xDDCE60
#define pinstCPlayerWnd_x                                          0xDDCFEC
#define pinstCPopupWndManager_x                                    0xF4E410
#define pinstCProgressionSelectionWnd_x                            0xF4E4C0
#define pinstCPurchaseGroupWnd_x                                   0xDDCFA8
#define pinstCPurchaseWnd_x                                        0xDDCF88
#define pinstCPvPLeaderboardWnd_x                                  0xF4E570
#define pinstCPvPStatsWnd_x                                        0xF4E620
#define pinstCQuantityWnd_x                                        0xDDCFC0
#define pinstCRaceChangeWnd_x                                      0xDDCF0C
#define pinstCRaidOptionsWnd_x                                     0xDDCF74
#define pinstCRaidWnd_x                                            0xDDC984
#define pinstCRealEstateItemsWnd_x                                 0xDDCEA0
#define pinstCRealEstateLayoutDetailsWnd_x                         0xDDCA50
#define pinstCRealEstateManageWnd_x                                0xDDCFAC
#define pinstCRealEstateNeighborhoodWnd_x                          0xDDCFC4
#define pinstCRealEstatePlotSearchWnd_x                            0xDDCFE4
#define pinstCRealEstatePurchaseWnd_x                              0xDDD008
#define pinstCRespawnWnd_x                                         0xDDCF30
#define pinstCRewardSelectionWnd_x                                 0xF4ED68
#define pinstCSelectorWnd_x                                        0xDDCE78
#define pinstCSendMoneyWnd_x                                       0xDDCEEC
#define pinstCServerListWnd_x                                      0xDDC980
#define pinstCSkillsSelectWnd_x                                    0xDDCE70
#define pinstCSkillsWnd_x                                          0xDDCE58
#define pinstCSocialEditWnd_x                                      0xDDCF80
#define pinstCSocialWnd_x                                          0xDDCECC
#define pinstCSpellBookWnd_x                                       0xDDCEC4
#define pinstCStoryWnd_x                                           0xDDC9D0
#define pinstCTargetOfTargetWnd_x                                  0xF503C8
#define pinstCTargetWnd_x                                          0xDDCF2C
#define pinstCTaskOverlayWnd_x                                     0xDDCF9C
#define pinstCTaskSelectWnd_x                                      0xF50520
#define pinstCTaskManager_x                                        0xCAE2F8
#define pinstCTaskTemplateSelectWnd_x                              0xF505D0
#define pinstCTaskWnd_x                                            0xF50680
#define pinstCTextEntryWnd_x                                       0xDDCF90
#define pinstCTimeLeftWnd_x                                        0xDDCE6C
#define pinstCTipWndCONTEXT_x                                      0xF50884
#define pinstCTipWndOFDAY_x                                        0xF50880
#define pinstCTitleWnd_x                                           0xF50930
#define pinstCTrackingWnd_x                                        0xDDCF14
#define pinstCTradeskillWnd_x                                      0xF50A98
#define pinstCTradeWnd_x                                           0xDDCE64
#define pinstCTrainWnd_x                                           0xDDD00C
#define pinstCTributeBenefitWnd_x                                  0xF50C98
#define pinstCTributeMasterWnd_x                                   0xF50D48
#define pinstCTributeTrophyWnd_x                                   0xF50DF8
#define pinstCVideoModesWnd_x                                      0xDDD004
#define pinstCVoiceMacroWnd_x                                      0xF3A2D8
#define pinstCVoteResultsWnd_x                                     0xDDCE90
#define pinstCVoteWnd_x                                            0xDDCE80
#define pinstCWebManager_x                                         0x0
#define pinstCZoneGuideWnd_x                                       0xDDCFA4
#define pinstCZonePathWnd_x                                        0xDDCFB8
#define pinstEQSuiteTextureLoader_x                                0xC7B810
#define pinstItemIconCache_x                                       0xF49D10
#define pinstLootFiltersManager_x                                  0xCADA68
#define pinstRewardSelectionWnd_x                                  0xF4ED68

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5C32D0
#define __CastRay2_x                                               0x5C3320
#define __ConvertItemTags_x                                        0x5DEFE0
#define __CleanItemTags_x                                          0x47B460
#define __CreateCascadeMenuItems_x                                 0x55BF10
#define __DoesFileExist_x                                          0x8F1F70
#define __EQGetTime_x                                              0x8EEB70
#define __ExecuteCmd_x                                             0x5BBC50
#define __FixHeading_x                                             0x982A20
#define __FlushDxKeyboard_x                                        0x6ACA50
#define __GameLoop_x                                               0x6AFD80
#define __get_bearing_x                                            0x5C2E30
#define __get_melee_range_x                                        0x5C3510
#define __GetAnimationCache_x                                      0x715070
#define __GetGaugeValueFromEQ_x                                    0x804C40
#define __GetLabelFromEQ_x                                         0x806630
#define __GetXTargetType_x                                         0x984470
#define __HandleMouseWheel_x                                       0x6B0C60
#define __HeadingDiff_x                                            0x982A90
#define __HelpPath_x                                               0xF358D4
#define __LoadFrontEnd_x                                           0x6AD090
#define __NewUIINI_x                                               0x804910
#define __ProcessGameEvents_x                                      0x624010
#define __ProcessKeyboardEvents_x                                  0x6AE5E0
#define __ProcessMouseEvents_x                                     0x6237A0
#define __SaveColors_x                                             0x55BDF0
#define __STMLToText_x                                             0x926450
#define __WndProc_x                                                0x6AF040
#define CMemoryMappedFile__SetFile_x                               0xA71C20
#define CrashDetected_x                                            0x6AEB40
#define DrawNetStatus_x                                            0x64F4B0
#define Expansion_HoT_x                                            0xE97818
#define Teleport_Table_Size_x                                      0xE8F2B0
#define Teleport_Table_x                                           0xE8F788
#define Util__FastTime_x                                           0x8EE740
#define __eq_delete_x                                              0x98B00E
#define __eq_new_x                                                 0x98B5D4
#define __CopyLayout_x                                             0x63D7D0
#define __ThrottleFrameRate_x                                      0x627740

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6BCF30
#define CAAWnd__Update_x                                           0x6BC250
#define CAAWnd__UpdateSelected_x                                   0x6B97A0

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x48E3D0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x4973D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x4971A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x491970
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x490DC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x563F90
#define AltAdvManager__IsAbilityReady_x                            0x562D30
#define AltAdvManager__GetAAById_x                                 0x5630C0
#define AltAdvManager__CanTrainAbility_x                           0x563130
#define AltAdvManager__CanSeeAbility_x                             0x563490

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C51E0
#define CharacterZoneClient__CalcAffectChange_x                    0x4C3A90
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C3C70
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4B9B60
#define CharacterZoneClient__CharacterZoneClient_x                 0x4C9040
#define CharacterZoneClient__FindAffectSlot_x                      0x4C27B0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D6530
#define CharacterZoneClient__FindItemByRecord_x                    0x4D5FB0
#define CharacterZoneClient__GetCurrentMod_x                       0x4E3E50
#define CharacterZoneClient__GetCursorItemCount_x                  0x4D8100
#define CharacterZoneClient__GetEffect_x                           0x4B9AA0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C38F0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B0050
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B1AE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D8020
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D7F40
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C3940
#define CharacterZoneClient__GetMaxEffects_x                       0x4BD570
#define CharacterZoneClient__GetModCap_x                           0x4E3D50
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C3820
#define CharacterZoneClient__HasSkill_x                            0x4D3EC0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C06C0
#define CharacterZoneClient__MakeMeVisible_x                       0x4D55D0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E06B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x4C1F20

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6D67B0
#define CBankWnd__WndNotification_x                                0x6D6580

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6E4100

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x923C40
#define CButtonWnd__CButtonWnd_x                                   0x922820
#define CButtonWnd__dCButtonWnd_x                                  0x922AF0
#define CButtonWnd__vftable_x                                      0xB26098

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x704190
#define CChatWindowManager__InitContextMenu_x                      0x6FD2C0
#define CChatWindowManager__FreeChatWindow_x                       0x702CD0
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E7870
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x703E10
#define CChatWindowManager__CreateChatWindow_x                     0x703310

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E7980

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x704A00
#define CChatWindow__Clear_x                                       0x705CD0
#define CChatWindow__WndNotification_x                             0x706460
#define CChatWindow__AddHistory_x                                  0x705590

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x936E40
#define CContextMenu__dCContextMenu_x                              0x937080
#define CContextMenu__AddMenuItem_x                                0x937090
#define CContextMenu__RemoveMenuItem_x                             0x9373A0
#define CContextMenu__RemoveAllMenuItems_x                         0x9373C0
#define CContextMenu__CheckMenuItem_x                              0x937440
#define CContextMenu__SetMenuItem_x                                0x9372C0
#define CContextMenu__AddSeparator_x                               0x937220

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9379E0
#define CContextMenuManager__RemoveMenu_x                          0x937A50
#define CContextMenuManager__PopupMenu_x                           0x937B10
#define CContextMenuManager__Flush_x                               0x937980
#define CContextMenuManager__GetMenu_x                             0x4996C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x70F9B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8C9750
#define CChatService__GetFriendName_x                              0x8C9760

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x934290
#define CComboWnd__Draw_x                                          0x933770
#define CComboWnd__GetCurChoice_x                                  0x9340D0
#define CComboWnd__GetListRect_x                                   0x933C30
#define CComboWnd__GetTextRect_x                                   0x934300
#define CComboWnd__InsertChoice_x                                  0x933DC0
#define CComboWnd__SetColors_x                                     0x933D90
#define CComboWnd__SetChoice_x                                     0x9340A0
#define CComboWnd__GetItemCount_x                                  0x9340E0
#define CComboWnd__GetCurChoiceText_x                              0x934120
#define CComboWnd__GetChoiceText_x                                 0x9340F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x933E60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x70D3B0
#define CContainerWnd__vftable_x                                   0xAF431C
#define CContainerWnd__SetContainer_x                              0x70E910

// CDisplay
#define CDisplay__cameraType_x                                     0xDDD014
#define CDisplay__ZoneMainUI_x                                     0x556780
#define CDisplay__PreZoneMainUI_x                                  0x556790
#define CDisplay__CleanGameUI_x                                    0x55BBD0
#define CDisplay__GetClickedActor_x                                0x54EC10
#define CDisplay__GetUserDefinedColor_x                            0x547290
#define CDisplay__GetWorldFilePath_x                               0x550680
#define CDisplay__is3dON_x                                         0x54B870
#define CDisplay__ReloadUI_x                                       0x555CC0
#define CDisplay__WriteTextHD2_x                                   0x54B660
#define CDisplay__TrueDistance_x                                   0x552340
#define CDisplay__SetViewActor_x                                   0x54E530
#define CDisplay__GetFloorHeight_x                                 0x54B930
#define CDisplay__SetRenderWindow_x                                0x54A2B0
#define CDisplay__ToggleScreenshotMode_x                           0x54E000
#define CDisplay__RealRender_World_x                               0x549720

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x956B00

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x93A370
#define CEditWnd__EnsureCaretVisible_x                             0x93C540
#define CEditWnd__GetCaretPt_x                                     0x93B4F0
#define CEditWnd__GetCharIndexPt_x                                 0x93B2A0
#define CEditWnd__GetDisplayString_x                               0x93B140
#define CEditWnd__GetHorzOffset_x                                  0x939A10
#define CEditWnd__GetLineForPrintableChar_x                        0x93C440
#define CEditWnd__GetSelStartPt_x                                  0x93B550
#define CEditWnd__GetSTMLSafeText_x                                0x93AF60
#define CEditWnd__PointFromPrintableChar_x                         0x93C070
#define CEditWnd__ReplaceSelection_x                               0x93BCE0
#define CEditWnd__SelectableCharFromPoint_x                        0x93C1E0
#define CEditWnd__SetEditable_x                                    0x93B620
#define CEditWnd__SetWindowTextA_x                                 0x93ACE0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x611500
#define CEverQuest__ClickedPlayer_x                                0x6036C0
#define CEverQuest__CreateTargetIndicator_x                        0x621180
#define CEverQuest__DeleteTargetIndicator_x                        0x621210
#define CEverQuest__DoTellWindow_x                                 0x4E7A60
#define CEverQuest__OutputTextToLog_x                              0x4E7D30
#define CEverQuest__DropHeldItemOnGround_x                         0x5F8820
#define CEverQuest__dsp_chat_x                                     0x4E80C0
#define CEverQuest__trimName_x                                     0x61D330
#define CEverQuest__Emote_x                                        0x611D60
#define CEverQuest__EnterZone_x                                    0x60BE80
#define CEverQuest__GetBodyTypeDesc_x                              0x6167B0
#define CEverQuest__GetClassDesc_x                                 0x616DF0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6173F0
#define CEverQuest__GetDeityDesc_x                                 0x61F9D0
#define CEverQuest__GetLangDesc_x                                  0x6175B0
#define CEverQuest__GetRaceDesc_x                                  0x616DD0
#define CEverQuest__InterpretCmd_x                                 0x61FFA0
#define CEverQuest__LeftClickedOnPlayer_x                          0x5FC9B0
#define CEverQuest__LMouseUp_x                                     0x5FAD40
#define CEverQuest__RightClickedOnPlayer_x                         0x5FD290
#define CEverQuest__RMouseUp_x                                     0x5FBCC0
#define CEverQuest__SetGameState_x                                 0x5F85B0
#define CEverQuest__UPCNotificationFlush_x                         0x61D230
#define CEverQuest__IssuePetCommand_x                              0x6189C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x612A80
#define CEverQuest__ReportSuccessfulHit_x                          0x6130B0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x71EFA0
#define CGaugeWnd__CalcLinesFillRect_x                             0x71F000
#define CGaugeWnd__Draw_x                                          0x71E630

// CGuild
#define CGuild__FindMemberByName_x                                 0x4ADDF0
#define CGuild__GetGuildName_x                                     0x4AC8A0
#define CGuild__GetGuildIndex_x                                    0x4ACEA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x738C00

//CHotButton
#define CHotButton__SetButtonSize_x                                0x632BE0
#define CHotButton__SetCheck_x                                     0x632820

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x7445A0
#define CInvSlotMgr__MoveItem_x                                    0x743260
#define CInvSlotMgr__SelectSlot_x                                  0x744670

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x741A90
#define CInvSlot__SliderComplete_x                                 0x73F7D0
#define CInvSlot__GetItemBase_x                                    0x73F150
#define CInvSlot__UpdateItem_x                                     0x73F2C0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7460F0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x745290
#define CInvSlotWnd__HandleLButtonUp_x                             0x745C70

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x7FFF70
#define CItemDisplayWnd__UpdateStrings_x                           0x7547D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x74E4E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x74EA00
#define CItemDisplayWnd__SetItem_x                                 0x754DD0
#define CItemDisplayWnd__AboutToShow_x                             0x754430
#define CItemDisplayWnd__WndNotification_x                         0x756050
#define CItemDisplayWnd__RequestConvertItem_x                      0x755980
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x753490
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x754250

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x8309F0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x75A540

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x51A300

// CLabel
#define CLabel__Draw_x                                             0x760000

// CListWnd
#define CListWnd__CListWnd_x                                       0x90CB40
#define CListWnd__dCListWnd_x                                      0x90CE60
#define CListWnd__vftable_x                                        0xB25970
#define CListWnd__AddColumn_x                                      0x9112D0
#define CListWnd__AddColumn1_x                                     0x911320
#define CListWnd__AddLine_x                                        0x9116B0
#define CListWnd__AddString_x                                      0x9114B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x911090
#define CListWnd__CalculateVSBRange_x                              0x910E80
#define CListWnd__ClearSel_x                                       0x911E90
#define CListWnd__ClearAllSel_x                                    0x911EF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x912900
#define CListWnd__Compare_x                                        0x9107B0
#define CListWnd__Draw_x                                           0x90CF90
#define CListWnd__DrawColumnSeparators_x                           0x90F780
#define CListWnd__DrawHeader_x                                     0x90FBF0
#define CListWnd__DrawItem_x                                       0x9100F0
#define CListWnd__DrawLine_x                                       0x90F8F0
#define CListWnd__DrawSeparator_x                                  0x90F820
#define CListWnd__EnableLine_x                                     0x90F060
#define CListWnd__EnsureVisible_x                                  0x912820
#define CListWnd__ExtendSel_x                                      0x911DC0
#define CListWnd__GetColumnTooltip_x                               0x90EBA0
#define CListWnd__GetColumnMinWidth_x                              0x90EC10
#define CListWnd__GetColumnWidth_x                                 0x90EB10
#define CListWnd__GetCurSel_x                                      0x90E4A0
#define CListWnd__GetItemAtPoint_x                                 0x90F2E0
#define CListWnd__GetItemAtPoint1_x                                0x90F350
#define CListWnd__GetItemData_x                                    0x90E520
#define CListWnd__GetItemHeight_x                                  0x90E8E0
#define CListWnd__GetItemIcon_x                                    0x90E6B0
#define CListWnd__GetItemRect_x                                    0x90F150
#define CListWnd__GetItemText_x                                    0x90E560
#define CListWnd__GetSelList_x                                     0x911F40
#define CListWnd__GetSeparatorRect_x                               0x90F590
#define CListWnd__InsertLine_x                                     0x911AA0
#define CListWnd__RemoveLine_x                                     0x911BF0
#define CListWnd__SetColors_x                                      0x910E50
#define CListWnd__SetColumnJustification_x                         0x910B80
#define CListWnd__SetColumnLabel_x                                 0x911450
#define CListWnd__SetColumnWidth_x                                 0x910AA0
#define CListWnd__SetCurSel_x                                      0x911D00
#define CListWnd__SetItemColor_x                                   0x9124D0
#define CListWnd__SetItemData_x                                    0x912490
#define CListWnd__SetItemText_x                                    0x9120B0
#define CListWnd__ShiftColumnSeparator_x                           0x910C40
#define CListWnd__Sort_x                                           0x910930
#define CListWnd__ToggleSel_x                                      0x911D30
#define CListWnd__SetColumnsSizable_x                              0x910CF0
#define CListWnd__SetItemWnd_x                                     0x912360
#define CListWnd__GetItemWnd_x                                     0x90E700
#define CListWnd__SetItemIcon_x                                    0x912130
#define CListWnd__CalculateCustomWindowPositions_x                 0x911190
#define CListWnd__SetVScrollPos_x                                  0x910A80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x775650

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x770B40
#define MapViewMap__dMapViewMap_x                                  0x770C90
#define MapViewMap__vftable_x                                      0xAFB6A8
#define MapViewMap__Clear_x                                        0x7714C0
#define MapViewMap__SaveEx_x                                       0x774880
#define MapViewMap__SetZoom_x                                      0x778F40
#define MapViewMap__HandleLButtonDown_x                            0x770DA0
#define MapViewMap__GetWorldCoordinates_x                          0x773D60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x795820
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x796100
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x796630
#define CMerchantWnd__SelectRecoverySlot_x                         0x7995F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x794380
#define CMerchantWnd__SelectBuySellSlot_x                          0x79F1C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x795430

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8973E0
#define CPacketScrambler__hton_x                                   0x8973D0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x92FDC0
#define CSidlManagerBase__CreatePageWnd_x                          0x92F5B0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x92B830
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x92B7C0
#define CSidlManagerBase__FindAnimation1_x                         0x92BA10
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x92BE20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x92BC10
#define CSidlManagerBase__CreateLabel_x                            0x7F7310
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x92ED80
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x92EF60
#define CSidlManagerBase__CreateXWnd_x                             0x7F7250

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x7F7750

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x928510
#define CSidlScreenWnd__CalculateVSBRange_x                        0x928410
#define CSidlScreenWnd__ConvertToRes_x                             0x951780
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x927F00
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x927BF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x927CC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x927D90
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9289B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x928E80
#define CSidlScreenWnd__GetChildItem_x                             0x928E00
#define CSidlScreenWnd__GetSidlPiece_x                             0x928BA0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x918680
#define CSidlScreenWnd__Init1_x                                    0x9277F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x928ED0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9299F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x926C00
#define CSidlScreenWnd__m_layoutCopy_x                             0x15CB708
#define CSidlScreenWnd__StoreIniInfo_x                             0x929570
#define CSidlScreenWnd__StoreIniVis_x                              0x9298D0
#define CSidlScreenWnd__vftable_x                                  0xB26344
#define CSidlScreenWnd__WndNotification_x                          0x9288C0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6974A0
#define CSkillMgr__GetSkillCap_x                                   0x697680
#define CSkillMgr__GetNameToken_x                                  0x696C20
#define CSkillMgr__IsActivatedSkill_x                              0x696D60
#define CSkillMgr__IsCombatSkill_x                                 0x696CA0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9387D0
#define CSliderWnd__SetValue_x                                     0x938640
#define CSliderWnd__SetNumTicks_x                                  0x9386A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x7FD340

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x941150
#define CStmlWnd__CalculateHSBRange_x                              0x942280
#define CStmlWnd__CalculateVSBRange_x                              0x9421F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9465B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x947240
#define CStmlWnd__ForceParseNow_x                                  0x941740
#define CStmlWnd__GetNextTagPiece_x                                0x946510
#define CStmlWnd__GetSTMLText_x                                    0x50B750
#define CStmlWnd__GetVisibleText_x                                 0x941760
#define CStmlWnd__InitializeWindowVariables_x                      0x947090
#define CStmlWnd__MakeStmlColorTag_x                               0x9407C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x940830
#define CStmlWnd__SetSTMLText_x                                    0x93F870
#define CStmlWnd__StripFirstSTMLLines_x                            0x948340
#define CStmlWnd__UpdateHistoryString_x                            0x947450

// CTabWnd
#define CTabWnd__Draw_x                                            0x93E9A0
#define CTabWnd__DrawCurrentPage_x                                 0x93F0D0
#define CTabWnd__DrawTab_x                                         0x93EDF0
#define CTabWnd__GetCurrentPage_x                                  0x93E1A0
#define CTabWnd__GetCurrentTabIndex_x                              0x93E190
#define CTabWnd__GetPageFromTabIndex_x                             0x93ED30
#define CTabWnd__GetPageInnerRect_x                                0x93E3E0
#define CTabWnd__GetTabInnerRect_x                                 0x93E320
#define CTabWnd__GetTabRect_x                                      0x93E1D0
#define CTabWnd__InsertPage_x                                      0x93E5F0
#define CTabWnd__RemovePage_x                                      0x93E760
#define CTabWnd__SetPage_x                                         0x93E460
#define CTabWnd__SetPageRect_x                                     0x93E8E0
#define CTabWnd__UpdatePage_x                                      0x93ECB0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x93DD50
#define CPageWnd__GetTabText_x                                     0x75A950
#define CPageWnd__SetTabText_x                                     0x93DCF0


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A7150

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x915550
#define CTextureFont__DrawWrappedText1_x                           0x915480
#define CTextureFont__DrawWrappedText2_x                           0x9155A0
#define CTextureFont__GetTextExtent_x                              0x915710

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x0
#define CHtmlComponentWnd__ValidateUri_x                           0x0
#define CHtmlWnd__SetClientCallbacks_x                             0x0
#define CHtmlWnd__AddObserver_x                                    0x0
#define CHtmlWnd__RemoveObserver_x                                 0x0
#define Window__getProgress_x                                      0x0
#define Window__getStatus_x                                        0x0
#define Window__getURI_x                                           0x0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x94E590

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x902620

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E7760
#define CXStr__CXStr1_x                                            0x47F610
#define CXStr__CXStr3_x                                            0x8EAAF0
#define CXStr__dCXStr_x                                            0x4765B0
#define CXStr__operator_equal_x                                    0x8EAD20
#define CXStr__operator_equal1_x                                   0x8EAD60
#define CXStr__operator_plus_equal1_x                              0x8EB7F0
#define CXStr__SetString_x                                         0x8ED6E0
#define CXStr__operator_char_p_x                                   0x8EB260
#define CXStr__GetChar_x                                           0x8ED010
#define CXStr__Delete_x                                            0x8EC8E0
#define CXStr__GetUnicode_x                                        0x8ED080
#define CXStr__GetLength_x                                         0x47B810
#define CXStr__Mid_x                                               0x47B820
#define CXStr__Insert_x                                            0x8ED0E0
#define CXStr__FindNext_x                                          0x8ECD50
#define CXStr__gFreeLists_x                                        0xC7AE20
#define CXStr__gCXStrAccess_x                                      0x15CAF6C

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x936A50

// CXWnd
#define CXWnd__BringToTop_x                                        0x91BDD0
#define CXWnd__Center_x                                            0x91B950
#define CXWnd__ClrFocus_x                                          0x91B770
#define CXWnd__Destroy_x                                           0x91B810
#define CXWnd__DoAllDrawing_x                                      0x917E10
#define CXWnd__DrawChildren_x                                      0x917DE0
#define CXWnd__DrawColoredRect_x                                   0x918270
#define CXWnd__DrawTooltip_x                                       0x916920
#define CXWnd__DrawTooltipAtPoint_x                                0x9169E0
#define CXWnd__GetBorderFrame_x                                    0x9180B0
#define CXWnd__GetChildItem_x                                      0x91BFE0
#define CXWnd__GetChildWndAt_x                                     0x91BE70
#define CXWnd__GetClientClipRect_x                                 0x91A080
#define CXWnd__GetRelativeRect_x                                   0x91A3D0
#define CXWnd__GetScreenClipRect_x                                 0x91A150
#define CXWnd__GetScreenRect_x                                     0x91A310
#define CXWnd__GetTooltipRect_x                                    0x9182C0
#define CXWnd__GetWindowTextA_x                                    0x49ADA0
#define CXWnd__IsActive_x                                          0x918A00
#define CXWnd__IsDescendantOf_x                                    0x91ACF0
#define CXWnd__IsReallyVisible_x                                   0x91AD20
#define CXWnd__IsType_x                                            0x91C4F0
#define CXWnd__Minimize_x                                          0x91B430
#define CXWnd__Move_x                                              0x91AD80
#define CXWnd__Move1_x                                             0x91AE30
#define CXWnd__ProcessTransition_x                                 0x91B900
#define CXWnd__Refade_x                                            0x91B0F0
#define CXWnd__Resize_x                                            0x91B3C0
#define CXWnd__Right_x                                             0x91BB90
#define CXWnd__SetFocus_x                                          0x91B730
#define CXWnd__SetFont_x                                           0x91B7A0
#define CXWnd__SetKeyTooltip_x                                     0x91C300
#define CXWnd__SetMouseOver_x                                      0x919220
#define CXWnd__SetParent_x                                         0x91AA80
#define CXWnd__StartFade_x                                         0x91ABD0
#define CXWnd__vftable_x                                           0xB25DB4
#define CXWnd__CXWnd_x                                             0x915A30
#define CXWnd__dCXWnd_x                                            0x915F40

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x952800

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x91ECE0
#define CXWndManager__DrawWindows_x                                0x91ED00
#define CXWndManager__GetKeyboardFlags_x                           0x9214E0
#define CXWndManager__HandleKeyboardMsg_x                          0x921090
#define CXWndManager__RemoveWnd_x                                  0x921700
#define CXWndManager__RemovePendingDeletionWnd_x                   0x921C60

// CDBStr
#define CDBStr__GetString_x                                        0x546260

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4D8920
#define CharacterZoneClient__CastSpell_x                           0x4BDCC0
#define CharacterZoneClient__Cur_HP_x                              0x4D0F00
#define CharacterZoneClient__Cur_Mana_x                            0x4D8610
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D3C80
#define CharacterZoneClient__GetBaseSkill_x                        0x4D4C20
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C0D30
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4DEAE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B1720
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B1870
#define CharacterZoneClient__GetHPRegen_x                          0x4DE4E0
#define CharacterZoneClient__GetManaRegen_x                        0x4DEF20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C1A80
#define CharacterZoneClient__Max_Endurance_x                       0x65DBE0
#define CharacterZoneClient__Max_HP_x                              0x4D0D30
#define CharacterZoneClient__Max_Mana_x                            0x65D9E0
#define CharacterZoneClient__SpellDuration_x                       0x4C15B0
#define CharacterZoneClient__TotalEffect_x                         0x4C4AD0
#define CharacterZoneClient__UseSkill_x                            0x4E0D30

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8B6960

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x673F40

// PcClient
#define PcClient__PcClient_x                                       0x653B70
#define PcClient__GetConLevel_x                                    0x6563F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4B8710
#define CCharacterListWnd__EnterWorld_x                            0x4B80E0
#define CCharacterListWnd__Quit_x                                  0x4B7E30
#define CCharacterListWnd__UpdateList_x                            0x4B82D0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6382F0
#define EQ_Item__CreateItemTagString_x                             0x890850
#define EQ_Item__IsStackable_x                                     0x8955C0
#define EQ_Item__GetImageNum_x                                     0x892400
#define EQ_Item__CreateItemClient_x                                0x637530
#define EQ_Item__GetItemValue_x                                    0x893750
#define EQ_Item__ValueSellMerchant_x                               0x896FC0
#define EQ_Item__IsKeyRingItem_x                                   0x894E70
#define EQ_Item__CanGoInBag_x                                      0x638410
#define EQ_Item__IsEmpty_x                                         0x8949C0
#define EQ_Item__GetMaxItemCount_x                                 0x893B60
#define EQ_Item__GetHeldItem_x                                     0x8922D0
#define EQ_Item__GetAugmentFitBySlot_x                             0x8900B0
#define ItemClient__ItemClient_x                                   0x5B87A0
#define ItemClient__dItemClient_x                                  0x637480

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x564CE0
#define EQ_LoadingS__Array_x                                       0xC06128

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8A02D0
#define EQ_PC__GetCombatAbility_x                                  0x8A0940
#define EQ_PC__GetCombatAbilityTimer_x                             0x8A09B0
#define EQ_PC__GetItemRecastTimer_x                                0x660620
#define EQ_PC__HasLoreItem_x                                       0x656C10
#define EQ_PC__AlertInventoryChanged_x                             0x655D20
#define EQ_PC__GetPcZoneClient_x                                   0x682F90
#define EQ_PC__RemoveMyAffect_x                                    0x663850
#define EQ_PC__GetKeyRingItems_x                                   0x8A1280
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8A1000
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8A1580

// EQItemList
#define EQItemList__EQItemList_x                                   0x5C0820
#define EQItemList__add_object_x                                   0x5EDFA0
#define EQItemList__add_item_x                                     0x5C0D80
#define EQItemList__delete_item_x                                  0x5C0DD0
#define EQItemList__FreeItemList_x                                 0x5C0CD0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x542D90

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x675840
#define EQPlayer__dEQPlayer_x                                      0x668C00
#define EQPlayer__DoAttack_x                                       0x67D720
#define EQPlayer__EQPlayer_x                                       0x6692C0
#define EQPlayer__SetNameSpriteState_x                             0x66D550
#define EQPlayer__SetNameSpriteTint_x                              0x66E430
#define PlayerBase__HasProperty_j_x                                0x980E20
#define EQPlayer__IsTargetable_x                                   0x9812C0
#define EQPlayer__CanSee_x                                         0x981120
#define EQPlayer__CanSee1_x                                        0x9811F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x980EE0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x680A20
#define PlayerZoneClient__GetLevel_x                               0x682FD0
#define PlayerZoneClient__IsValidTeleport_x                        0x5EF110
#define PlayerZoneClient__LegalPlayerRace_x                        0x55DA40

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6785F0
#define EQPlayerManager__GetSpawnByName_x                          0x6786A0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x678730

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x63BA30
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x63BAB0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x63BAF0
#define KeypressHandler__ClearCommandStateArray_x                  0x63CEE0
#define KeypressHandler__HandleKeyDown_x                           0x63CF00
#define KeypressHandler__HandleKeyUp_x                             0x63CFA0
#define KeypressHandler__SaveKeymapping_x                          0x63D3F0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8B49D0

// StringTable
#define StringTable__getString_x                                   0x8AF730

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x6600A0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65E4E0
#define PcZoneClient__GetPcSkillLimit_x                            0x6634C0
#define PcZoneClient__RemovePetEffect_x                            0x663AF0
#define PcZoneClient__HasAlternateAbility_x                        0x65D810
#define PcZoneClient__CanEquipItem_x                               0x65DEC0
#define PcZoneClient__GetItemByID_x                                0x660AA0
#define PcZoneClient__GetItemByItemClass_x                         0x660BF0
#define PcZoneClient__RemoveBuffEffect_x                           0x663B10
#define PcZoneClient__BandolierSwap_x                              0x65EAA0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6605C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F3CF0

// IconCache
#define IconCache__GetIcon_x                                       0x714A70

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x70C550
#define CContainerMgr__CloseContainer_x                            0x70C820
#define CContainerMgr__OpenExperimentContainer_x                   0x70D2A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7C9900

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x631010

// CLootWnd
#define CLootWnd__LootAll_x                                        0x767950
#define CLootWnd__RequestLootSlot_x                                0x766C20

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58CA70
#define EQ_Spell__SpellAffects_x                                   0x58CEE0
#define EQ_Spell__SpellAffectBase_x                                0x58CCA0
#define EQ_Spell__IsStackable_x                                    0x4C8910
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4C8700
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B59E0
#define EQ_Spell__IsSPAStacking_x                                  0x58DD30
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58D240
#define EQ_Spell__IsNoRemove_x                                     0x4C88F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58DD40
#define __IsResEffectSpell_x                                       0x4C7B20

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AB310

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8BEFA0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8105E0
#define CTargetWnd__WndNotification_x                              0x80FE20
#define CTargetWnd__RefreshTargetBuffs_x                           0x8100F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x80EF80

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x814C50
#define CTaskWnd__ConfirmAbandonTask_x                             0x817890

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x540770
#define CTaskManager__HandleMessage_x                              0x53EBC0
#define CTaskManager__GetTaskStatus_x                              0x540820
#define CTaskManager__GetElementDescription_x                      0x5408A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x587C30
#define EqSoundManager__PlayScriptMp3_x                            0x587EF0
#define EqSoundManager__SoundAssistPlay_x                          0x69B3D0
#define EqSoundManager__WaveInstancePlay_x                         0x69A940

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x531B20

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x93D400
#define CTextureAnimation__SetCurCell_x                            0x93D200

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56C920
#define CAltAbilityData__GetMercMaxRank_x                          0x56C8B0
#define CAltAbilityData__GetMaxRank_x                              0x561BB0

// CTargetRing
#define CTargetRing__Cast_x                                        0x62F130

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x518470
#define CharacterBase__CreateItemIndex_x                           0x637220
#define CharacterBase__GetItemByGlobalIndex_x                      0x8C7420
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8C7480
#define CharacterBase__GetItemPossession_x                         0x504110
#define CharacterBase__GetMemorizedSpell_x                         0x4C86E0
#define CharacterBase__IsExpansionFlag_x                           0x5BA410

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x6F3500
#define CCastSpellWnd__IsBardSongPlaying_x                         0x6F3D30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x6F3DE0

// messages
#define msg_spell_worn_off_x                                       0x5B2330
#define msg_new_text_x                                             0x5A6CA0
#define __msgTokenTextParam_x                                      0x5B45D0
#define msgTokenText_x                                             0x5B4820

// SpellManager
#define SpellManager__vftable_x                                    0xAD03FC
#define SpellManager__SpellManager_x                               0x69E700
#define Spellmanager__LoadTextSpells_x                             0x69EFF0
#define SpellManager__GetSpellByGroupAndRank_x                     0x69E8D0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x984D60

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8BF960
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8BFAF0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x760340

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x710C50
#define CCursorAttachment__AttachToCursor1_x                       0x710C90
#define CCursorAttachment__Deactivate_x                            0x711C80

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x94C6B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x94CE30
#define CEQSuiteTextureLoader__GetTexture_x                        0x94CAF0

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x515790
#define CFindItemWnd__WndNotification_x                            0x5163D0
#define CFindItemWnd__Update_x                                     0x516F40
#define CFindItemWnd__PickupSelectedItem_x                         0x514FC0

// IString
#define IString__Append_x                                          0x505980

// Camera
#define EverQuest__Cameras_x                                       0xE97B70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51E460
#define LootFiltersManager__GetItemFilterData_x                    0x51DD60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51DD90
#define LootFiltersManager__SetItemLootFilter_x                    0x51DFB0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7B7770

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x98AA80
#define CResolutionHandler__GetWindowedStyle_x                     0x695FE0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x709180

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8CB210
#define CDistillerInfo__Instance_x                                 0x8CB1B0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x727F70
#define CGroupWnd__UpdateDisplay_x                                 0x7272C0

// ItemBase
#define ItemBase__IsLore_x                                         0x894F20
#define ItemBase__IsLoreEquipped_x                                 0x894F90

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EDF00
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EE040
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EE0A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68B710
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68F080

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50BEF0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F8180
#define FactionManagerClient__HandleFactionMessage_x               0x4F87F0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F8DB0
#define FactionManagerClient__GetMaxFaction_x                      0x4F8DCF
#define FactionManagerClient__GetMinFaction_x                      0x4F8D80

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x5040E0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x9145A0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49A0B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x504390

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56BDB0

// CTargetManager
#define CTargetManager__Get_x                                      0x6A1F30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68B710

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A6F10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5C0C70

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF35204

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x8FEC70

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x481110
