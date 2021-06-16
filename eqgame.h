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
#define __ExpectedVersionDate                                     "Jun 10 2021"
#define __ExpectedVersionTime                                     "10:05:29"
#define __ActualVersionDate_x                                      0xB54124
#define __ActualVersionTime_x                                      0xB54118
#define __ActualVersionBuild_x                                     0xB442D4

// Memory Protection
#define __MemChecker0_x                                            0x665E10
#define __MemChecker1_x                                            0x951180
#define __MemChecker2_x                                            0x6DFD20
#define __MemChecker3_x                                            0x6DFC90
#define __MemChecker4_x                                            0x638F20
#define __EncryptPad0_x                                            0xE56B50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDB1D20
#define __ScreenY_x                                                0xDB1D28
#define __ScreenX_x                                                0xDB1D2C
#define __ScreenXMax_x                                             0xDB1D30
#define __ScreenYMax_x                                             0xDB1D34
#define __InChatMode_x                                             0xDB1D74
#define __RunWalkState_x                                           0xDB1D78
#define DI8__Mouse_Copy_x                                          0xDB1D8C
#define __MouseLook_x                                              0xDB1E0A
#define __NetStatusToggle_x                                        0xDB1E0D
#define __pulAutoRun_x                                             0xDB1E28
#define __Clicks_x                                                 0xDB1E44
#define __RMouseHeldTime_x                                         0xDB1EAC
#define __LMouseHeldTime_x                                         0xDB1EB0
#define __ZoneType_x                                               0xDB2208
#define __ShiftKeyDown_x                                           0xDB2408
#define __AutoSkillArray_x                                         0xDB28A8
#define __RangeAttackReady_x                                       0xDB2B8C
#define __AttackOnAssist_x                                         0xDB2D04
#define __ShowNames_x                                              0xDB2D48
#define __PCNames_x                                                0xDB2EA4
#define __UseTellWindows_x                                         0xDB303C
#define __pulForward_x                                             0xDB3074
#define __pulBackward_x                                            0xDB3078
#define __pulTurnRight_x                                           0xDB307C
#define __pulTurnLeft_x                                            0xDB3080
#define __pulStrafeLeft_x                                          0xDB3084
#define __pulStrafeRight_x                                         0xDB3088
#define __LastTell_x                                               0xDB38F4
#define __ServerName_x                                             0xDE81B8
#define __DoAbilityList_x                                          0xDE81F8
#define __SocialChangedList_x                                      0xDE8240
#define __Socials_x                                                0xDE82B8
#define __Inviter_x                                                0xE50654
#define __Attack_x                                                 0xE506D7
#define __Autofire_x                                               0xE506D8

// Misc Globals
#define __do_loot_x                                                0x5E3020
#define __gfMaxZoomCameraDistance_x                                0xB4BFAC
#define __gfMaxCameraDistance_x                                    0xB748BC
#define __CurrentSocial_x                                          0xC6246C
#define __BindList_x                                               0xDA7458
#define g_eqCommandStates_x                                        0xDA81C0
#define __CommandList_x                                            0xDA8D48
#define __ScreenMode_x                                             0xEE407C
#define __GroupCount_x                                             0xF97D42
#define __gWorld_x                                                 0xF97F54
#define __gpbCommandEvent_x                                        0xF98060
#define __ServerHost_x                                             0xF9822B
#define __Guilds_x                                                 0xF9C218
#define __MouseEventTime_x                                         0xF9DC44
#define DI8__Mouse_Check_x                                         0xFA277C
#define __heqmain_x                                                0xFA4C10
#define DI8__Mouse_x                                               0xFA4C34
#define __HWnd_x                                                   0xFA4C38
#define __Mouse_x                                                  0xFA4CC0
#define DI8__Main_x                                                0xFA4CD4
#define DI8__Keyboard_x                                            0xFA4CD8
#define __LoginName_x                                              0xFA53A4
#define __CurrentMapLabel_x                                        0xFB56D4
#define __TargetAggroHolder_x                                      0xFB8088
#define __GroupAggro_x                                             0xFB80C8
#define __SubscriptionType_x                                       0xFE97C0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF985B0
#define instEQZoneInfo_x                                           0xDB2000
#define pinstActiveBanker_x                                        0xF9854C
#define pinstActiveCorpse_x                                        0xF98544
#define pinstActiveGMaster_x                                       0xF98548
#define pinstActiveMerchant_x                                      0xF98540
#define pinstAltAdvManager_x                                       0xEE4EC0
#define pinstBandageTarget_x                                       0xF9855C
#define pinstCEverQuest_x                                          0xFA4C3C
#define pinstCamActor_x                                            0xEE406C
#define pinstCDBStr_x                                              0xEE3C40
#define pinstCDisplay_x                                            0xF95CBC
#define pinstControlledMissile_x                                   0xF985A0
#define pinstControlledPlayer_x                                    0xF98594
#define pinstCResolutionHandler_x                                  0x1624670
#define pinstCSidlManager_x                                        0x162360C
#define pinstCXWndManager_x                                        0x1623604
#define instDynamicZone_x                                          0xF9C0F0
#define pinstDZMember_x                                            0xF9C200
#define pinstDZTimerInfo_x                                         0xF9C204
#define pinstEqLogin_x                                             0xFA4CF0
#define instEQMisc_x                                               0xD9B8D8
#define pinstEQSoundManager_x                                      0xEE57D0
#define pinstEQSpellStrings_x                                      0xED48E0
#define instExpeditionLeader_x                                     0xF9C13A
#define instExpeditionName_x                                       0xF9C17A
#define pinstSGraphicsEngine_x                                     0x162443C
#define pinstGroup_x                                               0xF97D3E
#define pinstImeManager_x                                          0x1623608
#define pinstLocalPC_x                                             0xF95CAC
#define pinstLocalPlayer_x                                         0xF9853C
#define pinstMercenaryData_x                                       0xF9F73C
#define pinstMercenaryStats_x                                      0xFB8154
#define pinstModelPlayer_x                                         0xF98554
#define pinstRenderInterface_x                                     0x1624448
#define pinstSkillMgr_x                                            0xFA1828
#define pinstSpawnManager_x                                        0xFA0300
#define pinstSpellManager_x                                        0xFA1A68
#define pinstSpellSets_x                                           0xE49300
#define pinstStringTable_x                                         0xF95CB4
#define pinstSwitchManager_x                                       0xF95B50
#define pinstTarget_x                                              0xF98590
#define pinstTargetObject_x                                        0xF95CA4
#define pinstTargetSwitch_x                                        0xF95CA8
#define pinstTaskMember_x                                          0xD9B420
#define pinstTrackTarget_x                                         0xF98598
#define pinstTradeTarget_x                                         0xF98550
#define instTributeActive_x                                        0xD9B8F9
#define pinstViewActor_x                                           0xEE4068
#define pinstWorldData_x                                           0xF95CB8
#define pinstZoneAddr_x                                            0xDB22A0
#define pinstPlayerPath_x                                          0xFA0398
#define pinstTargetIndicator_x                                     0xFA1CD0
#define EQObject_Top_x                                             0xF95CA0

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEE40D0
#define pinstCAchievementsWnd_x                                    0xEE3D50
#define pinstCActionsWnd_x                                         0xEE4058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE4064
#define pinstCAdvancedLootWnd_x                                    0xEE405C
#define pinstCAdventureLeaderboardWnd_x                            0xFAEEF8
#define pinstCAdventureRequestWnd_x                                0xFAEFA8
#define pinstCAdventureStatsWnd_x                                  0xFAF058
#define pinstCAggroMeterWnd_x                                      0xEE3DE0
#define pinstCAlarmWnd_x                                           0xEE40C8
#define pinstCAlertHistoryWnd_x                                    0xEE403C
#define pinstCAlertStackWnd_x                                      0xEE3E08
#define pinstCAlertWnd_x                                           0xEE3E0C
#define pinstCAltStorageWnd_x                                      0xFAF3B8
#define pinstCAudioTriggersWindow_x                                0xEC6C10
#define pinstCAuraWnd_x                                            0xEE40A0
#define pinstCAvaZoneWnd_x                                         0xEE3D30
#define pinstCBandolierWnd_x                                       0xEE40B0
#define pinstCBankWnd_x                                            0xEE4040
#define pinstCBarterMerchantWnd_x                                  0xFB05F8
#define pinstCBarterSearchWnd_x                                    0xFB06A8
#define pinstCBarterWnd_x                                          0xFB0758
#define pinstCBazaarConfirmationWnd_x                              0xEE40DC
#define pinstCBazaarSearchWnd_x                                    0xEE3D7C
#define pinstCBazaarWnd_x                                          0xEE3D20
#define pinstCBlockedBuffWnd_x                                     0xEE3DA8
#define pinstCBlockedPetBuffWnd_x                                  0xEE3DB0
#define pinstCBodyTintWnd_x                                        0xEE4100
#define pinstCBookWnd_x                                            0xEE4048
#define pinstCBreathWnd_x                                          0xEE40D4
#define pinstCBuffWindowNORMAL_x                                   0xEE3DA0
#define pinstCBuffWindowSHORT_x                                    0xEE3DA4
#define pinstCBugReportWnd_x                                       0xEE3D5C
#define pinstCButtonWnd_x                                          0x1623870
#define pinstCCastingWnd_x                                         0xEE3DDC
#define pinstCCastSpellWnd_x                                       0xEE3DEC
#define pinstCCharacterListWnd_x                                   0xEE3D80
#define pinstCChatWindowManager_x                                  0xFB1200
#define pinstCClaimWnd_x                                           0xFB1358
#define pinstCColorPickerWnd_x                                     0xEE3D94
#define pinstCCombatAbilityWnd_x                                   0xEE408C
#define pinstCCombatSkillsSelectWnd_x                              0xEE4094
#define pinstCCompassWnd_x                                         0xEE40A8
#define pinstCConfirmationDialog_x                                 0xFB6220
#define pinstCContainerMgr_x                                       0xEE40CC
#define pinstCContextMenuManager_x                                 0x16235C0
#define pinstCCursorAttachment_x                                   0xEE3DD4
#define pinstCDynamicZoneWnd_x                                     0xFB1920
#define pinstCEditLabelWnd_x                                       0xEE3D3C
#define pinstCEQMainWnd_x                                          0xFB1B68
#define pinstCEventCalendarWnd_x                                   0xEE40B8
#define pinstCExtendedTargetWnd_x                                  0xEE3DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE3D84
#define pinstCFactionWnd_x                                         0xEE3DE8
#define pinstCFellowshipWnd_x                                      0xFB1D68
#define pinstCFileSelectionWnd_x                                   0xEE409C
#define pinstCFindItemWnd_x                                        0xEE4104
#define pinstCFindLocationWnd_x                                    0xFB1EC0
#define pinstCFriendsWnd_x                                         0xEE4098
#define pinstCGemsGameWnd_x                                        0xEE40C0
#define pinstCGiveWnd_x                                            0xEE3D2C
#define pinstCGroupSearchFiltersWnd_x                              0xEE3DC4
#define pinstCGroupSearchWnd_x                                     0xFB22B8
#define pinstCGroupWnd_x                                           0xFB2368
#define pinstCGuildBankWnd_x                                       0xFB2418
#define pinstCGuildCreationWnd_x                                   0xFB24C8
#define pinstCGuildMgmtWnd_x                                       0xFB2578
#define pinstCharacterCreation_x                                   0xEE3DD0
#define pinstCHelpWnd_x                                            0xEE3E24
#define pinstCHeritageSelectionWnd_x                               0xEE3D88
#define pinstCHotButtonWnd_x                                       0xFB46D0
#define pinstCHotButtonWnd1_x                                      0xFB46D0
#define pinstCHotButtonWnd2_x                                      0xFB46D4
#define pinstCHotButtonWnd3_x                                      0xFB46D8
#define pinstCHotButtonWnd4_x                                      0xFB46DC
#define pinstCIconSelectionWnd_x                                   0xEE3D58
#define pinstCInspectWnd_x                                         0xEE3D4C
#define pinstCInventoryWnd_x                                       0xEE3E20
#define pinstCInvSlotMgr_x                                         0xEE40B4
#define pinstCItemDisplayManager_x                                 0xFB4C28
#define pinstCItemExpTransferWnd_x                                 0xFB4D5C
#define pinstCItemOverflowWnd_x                                    0xEE3D10
#define pinstCJournalCatWnd_x                                      0xEE40EC
#define pinstCJournalNPCWnd_x                                      0xEE40E4
#define pinstCJournalTextWnd_x                                     0xEE40E4
#define pinstCKeyRingWnd_x                                         0xEE4034
#define pinstCLargeDialogWnd_x                                     0xFB6EA0
#define pinstCLayoutCopyWnd_x                                      0xFB50A8
#define pinstCLFGuildWnd_x                                         0xFB5158
#define pinstCLoadskinWnd_x                                        0xEE40C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE3150
#define pinstCLootFiltersWnd_x                                     0xEE40E0
#define pinstCLootSettingsWnd_x                                    0xEE40E8
#define pinstCLootWnd_x                                            0xEE404C
#define pinstCMailAddressBookWnd_x                                 0xEE3D70
#define pinstCMailCompositionWnd_x                                 0xEE3D6C
#define pinstCMailIgnoreListWnd_x                                  0xEE3D74
#define pinstCMailWnd_x                                            0xEE3D64
#define pinstCManageLootWnd_x                                      0xEE5340
#define pinstCMapToolbarWnd_x                                      0xEE3D34
#define pinstCMapViewWnd_x                                         0xEE3D24
#define pinstCMarketplaceWnd_x                                     0xEE3D04
#define pinstCMerchantWnd_x                                        0xEE3D08
#define pinstCMIZoneSelectWnd_x                                    0xFB5990
#define pinstCMusicPlayerWnd_x                                     0xEE40BC
#define pinstCNameChangeMercWnd_x                                  0xEE3E00
#define pinstCNameChangePetWnd_x                                   0xEE3DFC
#define pinstCNameChangeWnd_x                                      0xEE3D60
#define pinstCNoteWnd_x                                            0xEE3E1C
#define pinstCObjectPreviewWnd_x                                   0xEE3D78
#define pinstCOptionsWnd_x                                         0xEE3D98
#define pinstCOverseerWnd_x                                        0xEE3D00
#define pinstCPetInfoWnd_x                                         0xEE4050
#define pinstCPetitionQWnd_x                                       0xEE3DB8
#define pinstCPlayerNotesWnd_x                                     0xEE40AC
#define pinstCPlayerWnd_x                                          0xEE40FC
#define pinstCPopupWndManager_x                                    0xFB6220
#define pinstCProgressionSelectionWnd_x                            0xFB62D0
#define pinstCPurchaseGroupWnd_x                                   0xEE3D14
#define pinstCPurchaseWnd_x                                        0xEE3D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB6380
#define pinstCPvPStatsWnd_x                                        0xFB6430
#define pinstCQuantityWnd_x                                        0xEE4044
#define pinstCRaceChangeWnd_x                                      0xEE3D68
#define pinstCRaidOptionsWnd_x                                     0xEE3DE4
#define pinstCRaidWnd_x                                            0xEE3DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE3D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE3DCC
#define pinstCRealEstateManageWnd_x                                0xEE3DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE3DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE3DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE3DC8
#define pinstCRespawnWnd_x                                         0xEE40A4
#define pinstCRewardSelectionWnd_x                                 0xFB6B78
#define pinstCSelectorWnd_x                                        0xEE3D1C
#define pinstCSendMoneyWnd_x                                       0xEE3D38
#define pinstCServerListWnd_x                                      0xEE4090
#define pinstCSkillsSelectWnd_x                                    0xEE4070
#define pinstCSkillsWnd_x                                          0xEE4060
#define pinstCSocialEditWnd_x                                      0xEE3D54
#define pinstCSocialWnd_x                                          0xEE40D8
#define pinstCSpellBookWnd_x                                       0xEE3E04
#define pinstCStoryWnd_x                                           0xEE40F8
#define pinstCTargetOfTargetWnd_x                                  0xFB81D8
#define pinstCTargetWnd_x                                          0xEE3D48
#define pinstCTaskOverlayWnd_x                                     0xEE40F0
#define pinstCTaskSelectWnd_x                                      0xFB8330
#define pinstCTaskManager_x                                        0xC6D268
#define pinstCTaskTemplateSelectWnd_x                              0xFB83E0
#define pinstCTaskWnd_x                                            0xFB8490
#define pinstCTextEntryWnd_x                                       0xEE4088
#define pinstCTimeLeftWnd_x                                        0xEE3DAC
#define pinstCTipWndCONTEXT_x                                      0xFB8694
#define pinstCTipWndOFDAY_x                                        0xFB8690
#define pinstCTitleWnd_x                                           0xFB8740
#define pinstCTrackingWnd_x                                        0xEE3D40
#define pinstCTradeskillWnd_x                                      0xFB88A8
#define pinstCTradeWnd_x                                           0xEE3D18
#define pinstCTrainWnd_x                                           0xEE4054
#define pinstCTributeBenefitWnd_x                                  0xFB8AA8
#define pinstCTributeMasterWnd_x                                   0xFB8B58
#define pinstCTributeTrophyWnd_x                                   0xFB8C08
#define pinstCVideoModesWnd_x                                      0xEE3D44
#define pinstCVoiceMacroWnd_x                                      0xFA20E8
#define pinstCVoteResultsWnd_x                                     0xEE3DF8
#define pinstCVoteWnd_x                                            0xEE3DF4
#define pinstCZoneGuideWnd_x                                       0xEE4030
#define pinstCZonePathWnd_x                                        0xEE4038
#define pinstEQSuiteTextureLoader_x                                0xEB1920
#define pinstItemIconCache_x                                       0xFB1B20
#define pinstLootFiltersManager_x                                  0xEE3200
#define pinstRewardSelectionWnd_x                                  0xFB6B78

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DE2E0
#define __CastRay2_x                                               0x5DE570
#define __ConvertItemTags_x                                        0x5FB6E0
#define __CleanItemTags_x                                          0x47DA80
#define __CreateCascadeMenuItems_x                                 0x0
#define __DoesFileExist_x                                          0x954110
#define __EQGetTime_x                                              0x950DF0
#define __ExecuteCmd_x                                             0x5D6710
#define __FixHeading_x                                             0x9EF510
#define __FlushDxKeyboard_x                                        0x6DB020
#define __GameLoop_x                                               0x6DE920
#define __get_bearing_x                                            0x5DDE80
#define __get_melee_range_x                                        0x5DE7B0
#define __GetAnimationCache_x                                      0x74D900
#define __GetGaugeValueFromEQ_x                                    0x85D0E0
#define __GetLabelFromEQ_x                                         0x85EC20
#define __GetXTargetType_x                                         0x9F1880
#define __HandleMouseWheel_x                                       0x6DFDB0
#define __HeadingDiff_x                                            0x9EF570
#define __HelpPath_x                                               0xF9D904
#define __ExecuteFrontEnd_x                                        0x6DB800
#define __NewUIINI_x                                               0x85CDB0
#define __ProcessGameEvents_x                                      0x644EF0
#define __ProcessKeyboardEvents_x                                  0x6DCF70
#define __ProcessMouseEvents_x                                     0x6445F0
#define __SaveColors_x                                             0x571F20
#define __STMLToText_x                                             0x98D120
#define __WndProc_x                                                0x6DDA30
#define CMemoryMappedFile__SetFile_x                               0xADFCB0
#define CrashDetected_x                                            0x6DD530
#define DrawNetStatus_x                                            0x674360
#define Expansion_HoT_x                                            0xDB2CF0
#define Teleport_Table_Size_x                                      0xF980E8
#define Teleport_Table_x                                           0xF95CC0
#define Util__FastTime_x                                           0x9509B0
#define __eq_delete_x                                              0x9F83F5
#define __eq_new_x                                                 0x9F8964
#define __CopyLayout_x                                             0x6610A0
#define __ThrottleFrameRate_x                                      0x62DD73
#define __ThrottleFrameRateEnd_x                                   0x62DDCF

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EC4F0
#define CAAWnd__Update_x                                           0x6EB810
#define CAAWnd__UpdateSelected_x                                   0x6E8B80

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B520
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B3A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57AF40
#define AltAdvManager__IsAbilityReady_x                            0x579B20
#define AltAdvManager__GetAAById_x                                 0x579EC0
#define AltAdvManager__CanTrainAbility_x                           0x579F30
#define AltAdvManager__CanSeeAbility_x                             0x57A2E0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDCC0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC5D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC7B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1230
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1620
#define CharacterZoneClient__FindAffectSlot_x                      0x4CACB0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF630
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF80
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE7B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E15A0
#define CharacterZoneClient__GetEffect_x                           0x4C1170
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC370
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6CF0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8A20
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E14A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E13A0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC410
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5170
#define CharacterZoneClient__GetModCap_x                           0x4EE6B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC2C0
#define CharacterZoneClient__HasSkill_x                            0x4DCD50
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A70
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE490
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA860
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA450

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x708C80
#define CBankWnd__WndNotification_x                                0x708A20

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7136B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70E300
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70C2D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717DA0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x98A6C0
#define CButtonWnd__CButtonWnd_x                                   0x989010
#define CButtonWnd__dCButtonWnd_x                                  0x9892B0
#define CButtonWnd__vftable_x                                      0xB8F2F8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x73B070
#define CChatWindowManager__InitContextMenu_x                      0x733FA0
#define CChatWindowManager__FreeChatWindow_x                       0x739C30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x73AD50
#define CChatWindowManager__CreateChatWindow_x                     0x73A260

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2690

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73B9D0
#define CChatWindow__Clear_x                                       0x73CE30
#define CChatWindow__WndNotification_x                             0x73D5C0
#define CChatWindow__AddHistory_x                                  0x73C690

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x9A0500
#define CContextMenu__dCContextMenu_x                              0x9A0740
#define CContextMenu__AddMenuItem_x                                0x9A0750
#define CContextMenu__RemoveMenuItem_x                             0x9A0A60
#define CContextMenu__RemoveAllMenuItems_x                         0x9A0A80
#define CContextMenu__CheckMenuItem_x                              0x9A0AE0
#define CContextMenu__SetMenuItem_x                                0x9A0980
#define CContextMenu__AddSeparator_x                               0x9A08E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A1070
#define CContextMenuManager__RemoveMenu_x                          0x9A10E0
#define CContextMenuManager__PopupMenu_x                           0x9A11A0
#define CContextMenuManager__Flush_x                               0x9A1010
#define CContextMenuManager__GetMenu_x                             0x49D910
#define CContextMenuManager__CreateDefaultMenu_x                   0x7478D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92B510
#define CChatService__GetFriendName_x                              0x92B520

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99D5D0
#define CComboWnd__Draw_x                                          0x99CA60
#define CComboWnd__GetCurChoice_x                                  0x99D3A0
#define CComboWnd__GetListRect_x                                   0x99CF10
#define CComboWnd__GetTextRect_x                                   0x99D640
#define CComboWnd__InsertChoice_x                                  0x99D0A0
#define CComboWnd__SetColors_x                                     0x99D070
#define CComboWnd__SetChoice_x                                     0x99D380
#define CComboWnd__GetItemCount_x                                  0x99D3B0
#define CComboWnd__GetCurChoiceText_x                              0x99D3E0
#define CComboWnd__GetChoiceText_x                                 0x99D3C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99D140

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x744F60
#define CContainerWnd__vftable_x                                   0xB5D374
#define CContainerWnd__SetContainer_x                              0x746790

// CDisplay
#define CDisplay__cameraType_x                                     0xEE3E2C
#define CDisplay__ZoneMainUI_x                                     0x56C720
#define CDisplay__PreZoneMainUI_x                                  0x56C730
#define CDisplay__CleanGameUI_x                                    0x571D00
#define CDisplay__GetClickedActor_x                                0x5644F0
#define CDisplay__GetUserDefinedColor_x                            0x55C260
#define CDisplay__GetWorldFilePath_x                               0x566000
#define CDisplay__is3dON_x                                         0x560D80
#define CDisplay__ReloadUI_x                                       0x56BA40
#define CDisplay__WriteTextHD2_x                                   0x560B70
#define CDisplay__TrueDistance_x                                   0x567FE0
#define CDisplay__SetViewActor_x                                   0x563E10
#define CDisplay__GetFloorHeight_x                                 0x560E40
#define CDisplay__SetRenderWindow_x                                0x55F7C0
#define CDisplay__ToggleScreenshotMode_x                           0x5638E0
#define CDisplay__RealRender_World_x                               0x55EAB0

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C2D20

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A4010
#define CEditWnd__EnsureCaretVisible_x                             0x9A6390
#define CEditWnd__GetCaretPt_x                                     0x9A51F0
#define CEditWnd__GetCharIndexPt_x                                 0x9A4FA0
#define CEditWnd__GetDisplayString_x                               0x9A4E40
#define CEditWnd__GetHorzOffset_x                                  0x9A3560
#define CEditWnd__GetLineForPrintableChar_x                        0x9A62A0
#define CEditWnd__GetSelStartPt_x                                  0x9A5250
#define CEditWnd__GetSTMLSafeText_x                                0x9A4C50
#define CEditWnd__PointFromPrintableChar_x                         0x9A5EE0
#define CEditWnd__ReplaceSelection_x                               0x9A5AA0
#define CEditWnd__SelectableCharFromPoint_x                        0x9A6040
#define CEditWnd__SetEditable_x                                    0x9A5320
#define CEditWnd__SetWindowText_x                                  0x9A49A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x630550
#define CEverQuest__ClickedPlayer_x                                0x621A80
#define CEverQuest__CreateTargetIndicator_x                        0x641E70
#define CEverQuest__DeleteTargetIndicator_x                        0x641F00
#define CEverQuest__DoTellWindow_x                                 0x4F2790
#define CEverQuest__OutputTextToLog_x                              0x4F2A60
#define CEverQuest__DropHeldItemOnGround_x                         0x616A90
#define CEverQuest__dsp_chat_x                                     0x4F2E30
#define CEverQuest__trimName_x                                     0x63D460
#define CEverQuest__Emote_x                                        0x630C10
#define CEverQuest__EnterZone_x                                    0x62A890
#define CEverQuest__GetBodyTypeDesc_x                              0x6361A0
#define CEverQuest__GetClassDesc_x                                 0x6367E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x636DE0
#define CEverQuest__GetDeityDesc_x                                 0x640620
#define CEverQuest__GetLangDesc_x                                  0x636FA0
#define CEverQuest__GetRaceDesc_x                                  0x6367C0
#define CEverQuest__InterpretCmd_x                                 0x640C90
#define CEverQuest__LeftClickedOnPlayer_x                          0x61B010
#define CEverQuest__LMouseUp_x                                     0x619040
#define CEverQuest__RightClickedOnPlayer_x                         0x61BC00
#define CEverQuest__RMouseUp_x                                     0x61A300
#define CEverQuest__SetGameState_x                                 0x616810
#define CEverQuest__UPCNotificationFlush_x                         0x63D380
#define CEverQuest__IssuePetCommand_x                              0x6385A0
#define CEverQuest__ReportSuccessfulHeal_x                         0x631A40
#define CEverQuest__ReportSuccessfulHit_x                          0x632520

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x758840
#define CGaugeWnd__CalcLinesFillRect_x                             0x7588A0
#define CGaugeWnd__Draw_x                                          0x757E60

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4860
#define CGuild__GetGuildName_x                                     0x4B3080
#define CGuild__GetGuildIndex_x                                    0x4B37A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x775D00

//CHotButton
#define CHotButton__SetButtonSize_x                                0x655890
#define CHotButton__SetCheck_x                                     0x6554D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x782CF0
#define CInvSlotMgr__MoveItem_x                                    0x7818D0
#define CInvSlotMgr__SelectSlot_x                                  0x782DB0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x780120
#define CInvSlot__SliderComplete_x                                 0x77D600
#define CInvSlot__GetItemBase_x                                    0x77CEC0
#define CInvSlot__UpdateItem_x                                     0x77D0B0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x784A40
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783C10
#define CInvSlotWnd__HandleLButtonUp_x                             0x7845C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x857550
#define CItemDisplayWnd__UpdateStrings_x                           0x79BFF0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x791340
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x791890
#define CItemDisplayWnd__SetItem_x                                 0x79C690
#define CItemDisplayWnd__AboutToShow_x                             0x79BBE0
#define CItemDisplayWnd__WndNotification_x                         0x79DDB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79D4B0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79AAB0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B9D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C6D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A34C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52B0C0

// CLabel
#define CLabel__UpdateText_x                                       0x7AA000

// CListWnd
#define CListWnd__CListWnd_x                                       0x96FA70
#define CListWnd__dCListWnd_x                                      0x96FD70
#define CListWnd__vftable_x                                        0xB8EBD8
#define CListWnd__AddColumn_x                                      0x974950
#define CListWnd__AddColumn1_x                                     0x974A70
#define CListWnd__AddLine_x                                        0x974DE0
#define CListWnd__AddString_x                                      0x974BE0
#define CListWnd__CalculateFirstVisibleLine_x                      0x974700
#define CListWnd__CalculateVSBRange_x                              0x9744E0
#define CListWnd__ClearSel_x                                       0x9756D0
#define CListWnd__ClearAllSel_x                                    0x975720
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9761D0
#define CListWnd__Compare_x                                        0x973C60
#define CListWnd__Draw_x                                           0x96FF30
#define CListWnd__DrawColumnSeparators_x                           0x972A60
#define CListWnd__DrawHeader_x                                     0x972EB0
#define CListWnd__DrawItem_x                                       0x973500
#define CListWnd__DrawLine_x                                       0x972BC0
#define CListWnd__DrawSeparator_x                                  0x972B00
#define CListWnd__EnableLine_x                                     0x972320
#define CListWnd__EnsureVisible_x                                  0x9760F0
#define CListWnd__ExtendSel_x                                      0x975610
#define CListWnd__GetColumnTooltip_x                               0x971EA0
#define CListWnd__GetColumnMinWidth_x                              0x971F10
#define CListWnd__GetColumnWidth_x                                 0x971E20
#define CListWnd__GetCurSel_x                                      0x9717C0
#define CListWnd__GetItemAtPoint_x                                 0x972590
#define CListWnd__GetItemAtPoint1_x                                0x972600
#define CListWnd__GetItemData_x                                    0x971840
#define CListWnd__GetItemHeight_x                                  0x971BF0
#define CListWnd__GetItemIcon_x                                    0x9719C0
#define CListWnd__GetItemRect_x                                    0x972410
#define CListWnd__GetItemText_x                                    0x971880
#define CListWnd__GetSelList_x                                     0x975770
#define CListWnd__GetSeparatorRect_x                               0x972870
#define CListWnd__InsertLine_x                                     0x975240
#define CListWnd__RemoveLine_x                                     0x975460
#define CListWnd__SetColors_x                                      0x9744B0
#define CListWnd__SetColumnJustification_x                         0x9741E0
#define CListWnd__SetColumnLabel_x                                 0x974B80
#define CListWnd__SetColumnWidth_x                                 0x9740F0
#define CListWnd__SetCurSel_x                                      0x975560
#define CListWnd__SetItemColor_x                                   0x975DB0
#define CListWnd__SetItemData_x                                    0x975D70
#define CListWnd__SetItemText_x                                    0x975990
#define CListWnd__ShiftColumnSeparator_x                           0x9742A0
#define CListWnd__Sort_x                                           0x973F50
#define CListWnd__ToggleSel_x                                      0x975590
#define CListWnd__SetColumnsSizable_x                              0x974340
#define CListWnd__SetItemWnd_x                                     0x975C30
#define CListWnd__GetItemWnd_x                                     0x971A10
#define CListWnd__SetItemIcon_x                                    0x975A10
#define CListWnd__CalculateCustomWindowPositions_x                 0x974800
#define CListWnd__SetVScrollPos_x                                  0x9740D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7C1450

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BC6A0
#define MapViewMap__dMapViewMap_x                                  0x7BC7F0
#define MapViewMap__vftable_x                                      0xB64798
#define MapViewMap__Clear_x                                        0x7BD100
#define MapViewMap__SaveEx_x                                       0x7C063F
#define MapViewMap__SetZoom_x                                      0x7C6280
#define MapViewMap__HandleLButtonDown_x                            0x7BC900
#define MapViewMap__GetWorldCoordinates_x                          0x7BFA70

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E46A0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E5000
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E5640
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8840
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E3130
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE9C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E42F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F8420
#define CPacketScrambler__hton_x                                   0x8F8410

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x998860
#define CSidlManagerBase__CreatePageWnd_x                          0x998050
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x993510
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9934A0
#define CSidlManagerBase__FindAnimation1_x                         0x993790
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x993B60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x993990
#define CSidlManagerBase__CreateLabel_x                            0x84D280
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x997010
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x9972B0
#define CSidlManagerBase__CreateXWnd_x                             0x9972F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84D6B0
#define CSidlManager__CreateXWnd_x                                 0x84CD00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98F4D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98F3D0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BCF70
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98ED50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98EA40
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98EB10
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98EBE0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98FD70
#define CSidlScreenWnd__EnableIniStorage_x                         0x990250
#define CSidlScreenWnd__GetChildItem_x                             0x9901D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98FF60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97E7A0
#define CSidlScreenWnd__Init1_x                                    0x98E510
#define CSidlScreenWnd__LoadIniInfo_x                              0x9902A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x990E80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98D900
#define CSidlScreenWnd__m_layoutCopy_x                             0x1623490
#define CSidlScreenWnd__StoreIniInfo_x                             0x9909F0
#define CSidlScreenWnd__StoreIniVis_x                              0x990D70
#define CSidlScreenWnd__vftable_x                                  0xB8F5A4
#define CSidlScreenWnd__WndNotification_x                          0x98FC40

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2CF0
#define CSkillMgr__GetSkillCap_x                                   0x6C2EC0
#define CSkillMgr__GetNameToken_x                                  0x6C2530
#define CSkillMgr__IsActivatedSkill_x                              0x6C2620
#define CSkillMgr__IsCombatSkill_x                                 0x6C2590

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A2140
#define CSliderWnd__SetValue_x                                     0x9A1F70
#define CSliderWnd__SetNumTicks_x                                  0x9A1FD0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x853F30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AB670
#define CStmlWnd__CalculateHSBRange_x                              0x9AC5E0
#define CStmlWnd__CalculateVSBRange_x                              0x9AC550
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B1440
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B20E0
#define CStmlWnd__ForceParseNow_x                                  0x9ABBE0
#define CStmlWnd__GetNextTagPiece_x                                0x9B13A0
#define CStmlWnd__GetVisibleText_x                                 0x9ABC00
#define CStmlWnd__InitializeWindowVariables_x                      0x9B1F30
#define CStmlWnd__MakeStmlColorTag_x                               0x9AAD10
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AAD80
#define CStmlWnd__SetSTMLText_x                                    0x9A9AF0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B32F0
#define CStmlWnd__UpdateHistoryString_x                            0x9B22E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A8990
#define CTabWnd__DrawCurrentPage_x                                 0x9A9320
#define CTabWnd__DrawTab_x                                         0x9A8F10
#define CTabWnd__GetCurrentPage_x                                  0x9A80F0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A80E0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8E50
#define CTabWnd__GetPageInnerRect_x                                0x9A8320
#define CTabWnd__GetTabInnerRect_x                                 0x9A8260
#define CTabWnd__GetTabRect_x                                      0x9A8120
#define CTabWnd__InsertPage_x                                      0x9A8510
#define CTabWnd__RemovePage_x                                      0x9A8660
#define CTabWnd__SetPage_x                                         0x9A83A0
#define CTabWnd__SetPageRect_x                                     0x9A8890
#define CTabWnd__UpdatePage_x                                      0x9A8D00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A7AE0
#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A7A80


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC8D0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97AB70
#define CTextureFont__DrawWrappedText1_x                           0x97AAA0
#define CTextureFont__DrawWrappedText2_x                           0x97AC60
#define CTextureFont__GetTextExtent_x                              0x97AE70

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B9A20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x965510

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x544B10
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94CD40
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94CF80
#define CXStr__operator_equal1_x                                   0x94CFC0
#define CXStr__operator_plus_equal1_x                              0x94DA20
#define CXStr__SetString_x                                         0x94F8C0
#define CXStr__operator_char_p_x                                   0x94D470
#define CXStr__GetChar_x                                           0x94F220
#define CXStr__Delete_x                                            0x94EAF0
#define CXStr__GetUnicode_x                                        0x94F290
#define CXStr__Insert_x                                            0x94F2F0
#define CXStr__FindNext_x                                          0x94EF40
#define CXStr__gFreeLists_x                                        0xEB12F8
#define CXStr__gCXStrAccess_x                                      0x1622D18

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9A0160

// CXWnd
#define CXWnd__BringToTop_x                                        0x9821B0
#define CXWnd__ClrFocus_x                                          0x981B40
#define CXWnd__Destroy_x                                           0x981BE0
#define CXWnd__DoAllDrawing_x                                      0x97DDE0
#define CXWnd__DrawChildren_x                                      0x97DDB0
#define CXWnd__DrawColoredRect_x                                   0x97E380
#define CXWnd__DrawTooltip_x                                       0x97C300
#define CXWnd__DrawTooltipAtPoint_x                                0x97C3C0
#define CXWnd__GetBorderFrame_x                                    0x97E020
#define CXWnd__GetChildItem_x                                      0x9823D0
#define CXWnd__GetChildWndAt_x                                     0x982250
#define CXWnd__GetClientClipRect_x                                 0x9803F0
#define CXWnd__GetRelativeRect_x                                   0x980730
#define CXWnd__GetScreenClipRect_x                                 0x9804C0
#define CXWnd__GetScreenRect_x                                     0x980680
#define CXWnd__GetTooltipRect_x                                    0x97E3D0
#define CXWnd__GetWindowTextA_x                                    0x4F2630
#define CXWnd__IsActive_x                                          0x97EB20
#define CXWnd__IsDescendantOf_x                                    0x9810B0
#define CXWnd__IsReallyVisible_x                                   0x9810E0
#define CXWnd__IsType_x                                            0x9829D0
#define CXWnd__Minimize_x                                          0x9817F0
#define CXWnd__Move_x                                              0x981150
#define CXWnd__Move1_x                                             0x981240
#define CXWnd__ProcessTransition_x                                 0x981CC0
#define CXWnd__Refade_x                                            0x9814F0
#define CXWnd__Resize_x                                            0x981780
#define CXWnd__Right_x                                             0x981FA0
#define CXWnd__SetFocus_x                                          0x981B00
#define CXWnd__SetFont_x                                           0x981B70
#define CXWnd__SetKeyTooltip_x                                     0x982790
#define CXWnd__SetMouseOver_x                                      0x97F4A0
#define CXWnd__SetParent_x                                         0x980DD0
#define CXWnd__StartFade_x                                         0x980F90
#define CXWnd__vftable_x                                           0xB8F018
#define CXWnd__CXWnd_x                                             0x97B190
#define CXWnd__dCXWnd_x                                            0x97B890

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BDFC0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x985220
#define CXWndManager__DrawWindows_x                                0x985370
#define CXWndManager__GetKeyboardFlags_x                           0x987C20
#define CXWndManager__HandleKeyboardMsg_x                          0x987800
#define CXWndManager__RemoveWnd_x                                  0x987EF0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9883B0

// CDBStr
#define CDBStr__GetString_x                                        0x55AD80

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1E00
#define CharacterZoneClient__CastSpell_x                           0x4C5AF0
#define CharacterZoneClient__Cur_HP_x                              0x4D99C0
#define CharacterZoneClient__Cur_Mana_x                            0x4E1AD0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCB10
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDAB0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C9160
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E8AA0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B8630
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8780
#define CharacterZoneClient__GetHPRegen_x                          0x4E84E0
#define CharacterZoneClient__GetManaRegen_x                        0x4E8EE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9F90
#define CharacterZoneClient__Max_Endurance_x                       0x683ED0
#define CharacterZoneClient__Max_HP_x                              0x4D97F0
#define CharacterZoneClient__Max_Mana_x                            0x683CB0
#define CharacterZoneClient__SpellDuration_x                       0x4C99D0
#define CharacterZoneClient__TotalEffect_x                         0x4CD5D0
#define CharacterZoneClient__UseSkill_x                            0x4EAF00

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x918990

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69B8F0

// PcClient
#define PcClient__PcClient_x                                       0x679230
#define PcClient__GetConLevel_x                                    0x67BFC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00F0
#define CCharacterListWnd__EnterWorld_x                            0x4BFAC0
#define CCharacterListWnd__Quit_x                                  0x4BF7E0
#define CCharacterListWnd__UpdateList_x                            0x4BFCB0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65B710
#define EQ_Item__CreateItemTagString_x                             0x8F1120
#define EQ_Item__IsStackable_x                                     0x8F63D0
#define EQ_Item__GetImageNum_x                                     0x8F2DE0
#define EQ_Item__CreateItemClient_x                                0x65A680
#define EQ_Item__GetItemValue_x                                    0x8F40E0
#define EQ_Item__ValueSellMerchant_x                               0x8F8150
#define EQ_Item__IsKeyRingItem_x                                   0x8F5BA0
#define EQ_Item__CanGemFitInSlot_x                                 0x8F0920
#define EQ_Item__CanGoInBag_x                                      0x65B830
#define EQ_Item__IsEmpty_x                                         0x8F5570
#define EQ_Item__GetMaxItemCount_x                                 0x8F44E0
#define EQ_Item__GetHeldItem_x                                     0x8F2CA0
#define ItemClient__dItemClient_x                                  0x65A5D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57BD40
#define EQ_LoadingS__Array_x                                       0xD9FD10

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x9021B0
#define EQ_PC__GetCombatAbility_x                                  0x902730
#define EQ_PC__GetCombatAbilityTimer_x                             0x9027A0
#define EQ_PC__GetItemRecastTimer_x                                0x686E00
#define EQ_PC__HasLoreItem_x                                       0x67C970
#define EQ_PC__AlertInventoryChanged_x                             0x67B880
#define EQ_PC__GetPcZoneClient_x                                   0x6ABFE0
#define EQ_PC__RemoveMyAffect_x                                    0x68A320
#define EQ_PC__GetKeyRingItems_x                                   0x903230
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x902D90
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x903380

// EQItemList
#define EQItemList__EQItemList_x                                   0x5DB2F0
#define EQItemList__add_object_x                                   0x60B7F0
#define EQItemList__add_item_x                                     0x5DB8D0
#define EQItemList__delete_item_x                                  0x5DB920
#define EQItemList__FreeItemList_x                                 0x5DB830

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556E00

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69D320
#define EQPlayer__dEQPlayer_x                                      0x68FBC0
#define EQPlayer__DoAttack_x                                       0x6A5D20
#define EQPlayer__EQPlayer_x                                       0x690410
#define EQPlayer__SetNameSpriteState_x                             0x6949D0
#define EQPlayer__SetNameSpriteTint_x                              0x6958A0
#define PlayerBase__HasProperty_j_x                                0x9ED8E0
#define EQPlayer__IsTargetable_x                                   0x9EDE40
#define EQPlayer__CanSee_x                                         0x9EDC30
#define EQPlayer__CanSee1_x                                        0x9EDD00
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED9A0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A9AE0
#define PlayerZoneClient__GetLevel_x                               0x6AC020
#define PlayerZoneClient__IsValidTeleport_x                        0x60CC90
#define PlayerZoneClient__LegalPlayerRace_x                        0x573CE0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6A04C0
#define EQPlayerManager__GetSpawnByName_x                          0x6A0570
#define EQPlayerManager__GetPlayerFromPartialName_x                0x6A0600

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65F060
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65F130
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65F170
#define KeypressHandler__ClearCommandStateArray_x                  0x660630
#define KeypressHandler__HandleKeyDown_x                           0x660650
#define KeypressHandler__HandleKeyUp_x                             0x6606F0
#define KeypressHandler__SaveKeymapping_x                          0x660CA0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x916820

// StringTable
#define StringTable__getString_x                                   0x911640

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x686800
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x6849C0
#define PcZoneClient__GetPcSkillLimit_x                            0x689F70
#define PcZoneClient__RemovePetEffect_x                            0x68A5D0
#define PcZoneClient__HasAlternateAbility_x                        0x683B10
#define PcZoneClient__CanEquipItem_x                               0x6841D0
#define PcZoneClient__GetItemByID_x                                0x6872D0
#define PcZoneClient__GetItemByItemClass_x                         0x687410
#define PcZoneClient__RemoveBuffEffect_x                           0x68A680
#define PcZoneClient__BandolierSwap_x                              0x684F70
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686DA0

// Doors
#define EQSwitch__UseSwitch_x                                      0x6118A0

// IconCache
#define IconCache__GetIcon_x                                       0x74D2A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743E70
#define CContainerMgr__CloseContainer_x                            0x744150
#define CContainerMgr__OpenExperimentContainer_x                   0x744CB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81C660

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x653C10

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B2350
#define CLootWnd__RequestLootSlot_x                                0x7B1580

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A62A0
#define EQ_Spell__SpellAffects_x                                   0x5A67A0
#define EQ_Spell__SpellAffectBase_x                                0x5A64C0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0FC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F70
#define EQ_Spell__IsSPAStacking_x                                  0x5A7550
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A69A0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7560
#define __IsResEffectSpell_x                                       0x4D0770

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1610

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8690E0
#define CTargetWnd__WndNotification_x                              0x868870
#define CTargetWnd__RefreshTargetBuffs_x                           0x868BD0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867650

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86DC60
#define CTaskWnd__ConfirmAbandonTask_x                             0x870D30

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x554980
#define CTaskManager__HandleMessage_x                              0x552850
#define CTaskManager__GetTaskStatus_x                              0x554A30
#define CTaskManager__GetElementDescription_x                      0x554AB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0E80
#define EqSoundManager__PlayScriptMp3_x                            0x5A1080
#define EqSoundManager__SoundAssistPlay_x                          0x6C71B0
#define EqSoundManager__WaveInstancePlay_x                         0x6C66A0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5447C0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A7160
#define CTextureAnimation__SetCurCell_x                            0x9A6F20

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x584300
#define CAltAbilityData__GetMercMaxRank_x                          0x584290
#define CAltAbilityData__GetMaxRank_x                              0x5786A0

// CTargetRing
#define CTargetRing__Cast_x                                        0x651420

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x647B40
#define CharacterBase__GetItemByGlobalIndex_x                      0x928E30
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928E80
#define CharacterBase__GetItemPossession_x                         0x65A4B0
#define CharacterBase__GetMemorizedSpell_x                         0x65A4D0
#define CharacterBase__IsExpansionFlag_x                           0x5D4F70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728D20
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7295E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x729690

// messages
#define msg_spell_worn_off_x                                       0x5CC920
#define msg_new_text_x                                             0x5C0720
#define __msgTokenTextParam_x                                      0x5CED80
#define msgTokenText_x                                             0x5CF190

// SpellManager
#define SpellManager__vftable_x                                    0xB3B4BC
#define SpellManager__SpellManager_x                               0x6CADE0
#define Spellmanager__LoadTextSpells_x                             0x6CB6E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CAFB0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F2130

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921CD0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x922020

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7AA480

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x748B50
#define CCursorAttachment__AttachToCursor1_x                       0x748B90
#define CCursorAttachment__Deactivate_x                            0x74A120

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B7E90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B85F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B8270

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524940
#define CFindItemWnd__WndNotification_x                            0x525800
#define CFindItemWnd__Update_x                                     0x5263E0
#define CFindItemWnd__PickupSelectedItem_x                         0x524040

// IString
#define IString__Append_x                                          0x55A800

// Camera
#define EverQuest__Cameras_x                                       0xDB3048

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F600
#define LootFiltersManager__GetItemFilterData_x                    0x52EF30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52EF60
#define LootFiltersManager__SetItemLootFilter_x                    0x52F170

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x809180

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7E10
#define CResolutionHandler__GetWindowedStyle_x                     0x6C1630

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x7407F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92D1C0
#define CDistillerInfo__Instance_x                                 0x92D100

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7634B0
#define CGroupWnd__UpdateDisplay_x                                 0x762700

// ItemBase
#define ItemBase__IsLore_x                                         0x8F5C40
#define ItemBase__IsLoreEquipped_x                                 0x8F5CB0

#define MultipleItemMoveManager__ProcessMove_x                     0x670240

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60B750
#define EQPlacedItemManager__GetItemByGuid_x                       0x60B890
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60B8F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5D90
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6BA660

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A3B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x505140
#define FactionManagerClient__HandleFactionMessage_x               0x505960
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x506180
#define FactionManagerClient__GetMaxFaction_x                      0x50619F
#define FactionManagerClient__GetMinFaction_x                      0x506150

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511D30

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x9797E0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E320

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511FD0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5834D0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CED60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5D90

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC690

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DB7D0

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE506DC

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DFFD0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240
