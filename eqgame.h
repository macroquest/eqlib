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
#define __ExpectedVersionDate                                     "Jul 19 2021"
#define __ExpectedVersionTime                                     "15:42:44"
#define __ActualVersionDate_x                                      0xB5414C
#define __ActualVersionTime_x                                      0xB54140
#define __ActualVersionBuild_x                                     0xB442F4

// Memory Protection
#define __MemChecker0_x                                            0x665EE0
#define __MemChecker1_x                                            0x9510F0
#define __MemChecker2_x                                            0x6DFE10
#define __MemChecker3_x                                            0x6DFD80
#define __MemChecker4_x                                            0x6390C0
#define __EncryptPad0_x                                            0xE56B48

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
#define __PCNames_x                                                0xDB2E98
#define __UseTellWindows_x                                         0xDB3030
#define __pulForward_x                                             0xDB3068
#define __pulBackward_x                                            0xDB306C
#define __pulTurnRight_x                                           0xDB3070
#define __pulTurnLeft_x                                            0xDB3074
#define __pulStrafeLeft_x                                          0xDB3078
#define __pulStrafeRight_x                                         0xDB307C
#define __LastTell_x                                               0xDB38E8
#define __ServerName_x                                             0xDE81AC
#define __DoAbilityList_x                                          0xDE81EC
#define __SocialChangedList_x                                      0xDE8234
#define __Socials_x                                                0xDE82AC
#define __Inviter_x                                                0xE50648
#define __Attack_x                                                 0xE506CB
#define __Autofire_x                                               0xE506CC

// Misc Globals
#define __do_loot_x                                                0x5E31F0
#define __gfMaxZoomCameraDistance_x                                0xB4BFDC
#define __gfMaxCameraDistance_x                                    0xB748E4
#define __CurrentSocial_x                                          0xC6246C
#define __BindList_x                                               0xDA7458
#define g_eqCommandStates_x                                        0xDA81C0
#define __CommandList_x                                            0xDA8D48
#define __ScreenMode_x                                             0xEE4070
#define __GroupCount_x                                             0xF97D4A
#define __gWorld_x                                                 0xF97F5C
#define __gpbCommandEvent_x                                        0xF98068
#define __ServerHost_x                                             0xF98233
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
#define pinstActiveBanker_x                                        0xF98554
#define pinstActiveCorpse_x                                        0xF9854C
#define pinstActiveGMaster_x                                       0xF98550
#define pinstActiveMerchant_x                                      0xF98548
#define pinstAltAdvManager_x                                       0xEE4EC0
#define pinstBandageTarget_x                                       0xF98564
#define pinstCEverQuest_x                                          0xFA4C3C
#define pinstCamActor_x                                            0xEE4064
#define pinstCDBStr_x                                              0xEE3C40
#define pinstCDisplay_x                                            0xF95CC4
#define pinstControlledMissile_x                                   0xF985A8
#define pinstControlledPlayer_x                                    0xF9859C
#define pinstCResolutionHandler_x                                  0x1624690
#define pinstCSidlManager_x                                        0x162362C
#define pinstCXWndManager_x                                        0x1623624
#define instDynamicZone_x                                          0xF9C0F0
#define pinstDZMember_x                                            0xF9C200
#define pinstDZTimerInfo_x                                         0xF9C204
#define pinstEqLogin_x                                             0xFA4CF0
#define instEQMisc_x                                               0xD9B8D8
#define pinstEQSoundManager_x                                      0xEE57D0
#define pinstEQSpellStrings_x                                      0xED48E0
#define instExpeditionLeader_x                                     0xF9C13A
#define instExpeditionName_x                                       0xF9C17A
#define pinstSGraphicsEngine_x                                     0x162445C
#define pinstGroup_x                                               0xF97D46
#define pinstImeManager_x                                          0x1623628
#define pinstLocalPC_x                                             0xF95CB4
#define pinstLocalPlayer_x                                         0xF98544
#define pinstMercenaryData_x                                       0xF9F73C
#define pinstMercenaryStats_x                                      0xFB8154
#define pinstModelPlayer_x                                         0xF9855C
#define pinstRenderInterface_x                                     0x1624468
#define pinstSkillMgr_x                                            0xFA1828
#define pinstSpawnManager_x                                        0xFA0300
#define pinstSpellManager_x                                        0xFA1A68
#define pinstSpellSets_x                                           0xE492F4
#define pinstStringTable_x                                         0xF95CBC
#define pinstSwitchManager_x                                       0xF95B50
#define pinstTarget_x                                              0xF98598
#define pinstTargetObject_x                                        0xF95CAC
#define pinstTargetSwitch_x                                        0xF95CB0
#define pinstTaskMember_x                                          0xD9B420
#define pinstTrackTarget_x                                         0xF985A0
#define pinstTradeTarget_x                                         0xF98558
#define instTributeActive_x                                        0xD9B8F9
#define pinstViewActor_x                                           0xEE4060
#define pinstWorldData_x                                           0xF95CC0
#define pinstZoneAddr_x                                            0xDB22A0
#define pinstPlayerPath_x                                          0xFA0398
#define pinstTargetIndicator_x                                     0xFA1CD0
#define EQObject_Top_x                                             0xF95CA8

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEE40D0
#define pinstCAchievementsWnd_x                                    0xEE3D50
#define pinstCActionsWnd_x                                         0xEE4058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE4080
#define pinstCAdvancedLootWnd_x                                    0xEE405C
#define pinstCAdventureLeaderboardWnd_x                            0xFAEEF8
#define pinstCAdventureRequestWnd_x                                0xFAEFA8
#define pinstCAdventureStatsWnd_x                                  0xFAF058
#define pinstCAggroMeterWnd_x                                      0xEE3DE0
#define pinstCAlarmWnd_x                                           0xEE40C8
#define pinstCAlertHistoryWnd_x                                    0xEE403C
#define pinstCAlertStackWnd_x                                      0xEE3E14
#define pinstCAlertWnd_x                                           0xEE3E1C
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
#define pinstCButtonWnd_x                                          0x1623890
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
#define pinstCContextMenuManager_x                                 0x16235E0
#define pinstCCursorAttachment_x                                   0xEE3DD4
#define pinstCDynamicZoneWnd_x                                     0xFB1920
#define pinstCEditLabelWnd_x                                       0xEE3D40
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
#define pinstCHelpWnd_x                                            0xEE402C
#define pinstCHeritageSelectionWnd_x                               0xEE3D8C
#define pinstCHotButtonWnd_x                                       0xFB46D0
#define pinstCHotButtonWnd1_x                                      0xFB46D0
#define pinstCHotButtonWnd2_x                                      0xFB46D4
#define pinstCHotButtonWnd3_x                                      0xFB46D8
#define pinstCHotButtonWnd4_x                                      0xFB46DC
#define pinstCIconSelectionWnd_x                                   0xEE3D58
#define pinstCInspectWnd_x                                         0xEE3D4C
#define pinstCInventoryWnd_x                                       0xEE4028
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
#define pinstCNoteWnd_x                                            0xEE3E24
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
#define pinstCSkillsSelectWnd_x                                    0xEE4084
#define pinstCSkillsWnd_x                                          0xEE407C
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
#define pinstCTrackingWnd_x                                        0xEE3D44
#define pinstCTradeskillWnd_x                                      0xFB88A8
#define pinstCTradeWnd_x                                           0xEE3D18
#define pinstCTrainWnd_x                                           0xEE4054
#define pinstCTributeBenefitWnd_x                                  0xFB8AA8
#define pinstCTributeMasterWnd_x                                   0xFB8B58
#define pinstCTributeTrophyWnd_x                                   0xFB8C08
#define pinstCVideoModesWnd_x                                      0xEE3D3C
#define pinstCVoiceMacroWnd_x                                      0xFA20E8
#define pinstCVoteResultsWnd_x                                     0xEE3DF8
#define pinstCVoteWnd_x                                            0xEE3DF4
#define pinstCZoneGuideWnd_x                                       0xEE4030
#define pinstCZonePathWnd_x                                        0xEE4038
#define pinstEQSuiteTextureLoader_x                                0xEB1918
#define pinstItemIconCache_x                                       0xFB1B20
#define pinstLootFiltersManager_x                                  0xEE3200
#define pinstRewardSelectionWnd_x                                  0xFB6B78

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DE4A0
#define __CastRay2_x                                               0x5DE730
#define __ConvertItemTags_x                                        0x5FB8D0
#define __CleanItemTags_x                                          0x47DA40
#define __CreateCascadeMenuItems_x                                 0x572100
#define __DoesFileExist_x                                          0x954080
#define __EQGetTime_x                                              0x950D60
#define __ExecuteCmd_x                                             0x5D68C0
#define __FixHeading_x                                             0x9EFB40
#define __FlushDxKeyboard_x                                        0x6DB110
#define __GameLoop_x                                               0x6DEA10
#define __get_bearing_x                                            0x5DE040
#define __get_melee_range_x                                        0x5DE970
#define __GetAnimationCache_x                                      0x74D8B0
#define __GetGaugeValueFromEQ_x                                    0x85D000
#define __GetLabelFromEQ_x                                         0x85EB40
#define __GetXTargetType_x                                         0x9F1EB0
#define __HandleMouseWheel_x                                       0x6DFEA0
#define __HeadingDiff_x                                            0x9EFBA0
#define __HelpPath_x                                               0xF9D904
#define __ExecuteFrontEnd_x                                        0x6DB8F0
#define __NewUIINI_x                                               0x85CCD0
#define __ProcessGameEvents_x                                      0x6450A0
#define __ProcessKeyboardEvents_x                                  0x6DD060
#define __ProcessMouseEvents_x                                     0x6447A0
#define __SaveColors_x                                             0x571FE0
#define __STMLToText_x                                             0x98D890
#define __WndProc_x                                                0x6DDB20
#define CMemoryMappedFile__SetFile_x                               0xAE02E0
#define CrashDetected_x                                            0x6DD620
#define DrawNetStatus_x                                            0x674430
#define Expansion_HoT_x                                            0xDB2CF0
#define Teleport_Table_Size_x                                      0xF980F0
#define Teleport_Table_x                                           0xF95CC8
#define Util__FastTime_x                                           0x950920
#define __eq_delete_x                                              0x9F8A00
#define __eq_new_x                                                 0x9F8F74
#define __CopyLayout_x                                             0x661170
#define __ThrottleFrameRate_x                                      0x62DF13
#define __ThrottleFrameRateEnd_x                                   0x62DF6F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EC550
#define CAAWnd__Update_x                                           0x6EB880
#define CAAWnd__UpdateSelected_x                                   0x6E8BF0

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B340
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495640
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494880

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57AFD0
#define AltAdvManager__IsAbilityReady_x                            0x579BB0
#define AltAdvManager__GetAAById_x                                 0x579F50
#define AltAdvManager__CanTrainAbility_x                           0x579FC0
#define AltAdvManager__CanSeeAbility_x                             0x57A370

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDC40
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC540
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC720
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C11A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D15C0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC20
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF610
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF60
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE770
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1570
#define CharacterZoneClient__GetEffect_x                           0x4C10E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC2E0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6C70
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B89A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1470
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E1370
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC380
#define CharacterZoneClient__GetMaxEffects_x                       0x4C50E0
#define CharacterZoneClient__GetModCap_x                           0x4EE670
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC230
#define CharacterZoneClient__HasSkill_x                            0x4DCD30
#define CharacterZoneClient__IsStackBlocked_x                      0x4C89E0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE470
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA830
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA3C0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x708CF0
#define CBankWnd__WndNotification_x                                0x708A90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7136F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70E350
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70C330

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717DF0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x98AE30
#define CButtonWnd__CButtonWnd_x                                   0x9897D0
#define CButtonWnd__dCButtonWnd_x                                  0x989A70
#define CButtonWnd__vftable_x                                      0xB8F3B8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x73B050
#define CChatWindowManager__InitContextMenu_x                      0x733F80
#define CChatWindowManager__FreeChatWindow_x                       0x739C10
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x73AD30
#define CChatWindowManager__CreateChatWindow_x                     0x73A240

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2690

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73B9B0
#define CChatWindow__Clear_x                                       0x73CE10
#define CChatWindow__WndNotification_x                             0x73D5A0
#define CChatWindow__AddHistory_x                                  0x73C670

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x9A0C00
#define CContextMenu__dCContextMenu_x                              0x9A0E30
#define CContextMenu__AddMenuItem_x                                0x9A0E40
#define CContextMenu__RemoveMenuItem_x                             0x9A1140
#define CContextMenu__RemoveAllMenuItems_x                         0x9A1160
#define CContextMenu__CheckMenuItem_x                              0x9A11C0
#define CContextMenu__SetMenuItem_x                                0x9A1070
#define CContextMenu__AddSeparator_x                               0x9A0FD0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A1750
#define CContextMenuManager__RemoveMenu_x                          0x9A17C0
#define CContextMenuManager__PopupMenu_x                           0x9A1880
#define CContextMenuManager__Flush_x                               0x9A16F0
#define CContextMenuManager__GetMenu_x                             0x49D8B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x747880

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92B430
#define CChatService__GetFriendName_x                              0x92B440

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99DD00
#define CComboWnd__Draw_x                                          0x99D1B0
#define CComboWnd__GetCurChoice_x                                  0x99DAD0
#define CComboWnd__GetListRect_x                                   0x99D650
#define CComboWnd__GetTextRect_x                                   0x99DD60
#define CComboWnd__InsertChoice_x                                  0x99D7E0
#define CComboWnd__SetColors_x                                     0x99D7B0
#define CComboWnd__SetChoice_x                                     0x99DAB0
#define CComboWnd__GetItemCount_x                                  0x99DAE0
#define CComboWnd__GetCurChoiceText_x                              0x99DB10
#define CComboWnd__GetChoiceText_x                                 0x99DAF0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99D870

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x744F10
#define CContainerWnd__vftable_x                                   0xB5D39C
#define CContainerWnd__SetContainer_x                              0x746740

// CDisplay
#define CDisplay__cameraType_x                                     0xEE3E20
#define CDisplay__ZoneMainUI_x                                     0x56C7E0
#define CDisplay__PreZoneMainUI_x                                  0x56C7F0
#define CDisplay__CleanGameUI_x                                    0x571DC0
#define CDisplay__GetClickedActor_x                                0x5645B0
#define CDisplay__GetUserDefinedColor_x                            0x55C320
#define CDisplay__GetWorldFilePath_x                               0x5660C0
#define CDisplay__is3dON_x                                         0x560E40
#define CDisplay__ReloadUI_x                                       0x56BB00
#define CDisplay__WriteTextHD2_x                                   0x560C30
#define CDisplay__TrueDistance_x                                   0x5680A0
#define CDisplay__SetViewActor_x                                   0x563ED0
#define CDisplay__GetFloorHeight_x                                 0x560F00
#define CDisplay__SetRenderWindow_x                                0x55F880
#define CDisplay__ToggleScreenshotMode_x                           0x5639A0
#define CDisplay__RealRender_World_x                               0x55EB70

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C33A0

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A46E0
#define CEditWnd__EnsureCaretVisible_x                             0x9A6A30
#define CEditWnd__GetCaretPt_x                                     0x9A58A0
#define CEditWnd__GetCharIndexPt_x                                 0x9A5660
#define CEditWnd__GetDisplayString_x                               0x9A5500
#define CEditWnd__GetHorzOffset_x                                  0x9A3C40
#define CEditWnd__GetLineForPrintableChar_x                        0x9A6940
#define CEditWnd__GetSelStartPt_x                                  0x9A5900
#define CEditWnd__GetSTMLSafeText_x                                0x9A5310
#define CEditWnd__PointFromPrintableChar_x                         0x9A6590
#define CEditWnd__ReplaceSelection_x                               0x9A6150
#define CEditWnd__SelectableCharFromPoint_x                        0x9A66F0
#define CEditWnd__SetEditable_x                                    0x9A59D0
#define CEditWnd__SetWindowText_x                                  0x9A5060

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x6306F0
#define CEverQuest__ClickedPlayer_x                                0x621C20
#define CEverQuest__CreateTargetIndicator_x                        0x642010
#define CEverQuest__DeleteTargetIndicator_x                        0x6420A0
#define CEverQuest__DoTellWindow_x                                 0x4F2790
#define CEverQuest__OutputTextToLog_x                              0x4F2A60
#define CEverQuest__DropHeldItemOnGround_x                         0x616C60
#define CEverQuest__dsp_chat_x                                     0x4F2E30
#define CEverQuest__trimName_x                                     0x63D600
#define CEverQuest__Emote_x                                        0x630DB0
#define CEverQuest__EnterZone_x                                    0x62AA30
#define CEverQuest__GetBodyTypeDesc_x                              0x636340
#define CEverQuest__GetClassDesc_x                                 0x636980
#define CEverQuest__GetClassThreeLetterCode_x                      0x636F80
#define CEverQuest__GetDeityDesc_x                                 0x6407C0
#define CEverQuest__GetLangDesc_x                                  0x637140
#define CEverQuest__GetRaceDesc_x                                  0x636960
#define CEverQuest__InterpretCmd_x                                 0x640E30
#define CEverQuest__LeftClickedOnPlayer_x                          0x61B1E0
#define CEverQuest__LMouseUp_x                                     0x619210
#define CEverQuest__RightClickedOnPlayer_x                         0x61BDD0
#define CEverQuest__RMouseUp_x                                     0x61A4D0
#define CEverQuest__SetGameState_x                                 0x6169E0
#define CEverQuest__UPCNotificationFlush_x                         0x63D520
#define CEverQuest__IssuePetCommand_x                              0x638740
#define CEverQuest__ReportSuccessfulHeal_x                         0x631BE0
#define CEverQuest__ReportSuccessfulHit_x                          0x6326C0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x758800
#define CGaugeWnd__CalcLinesFillRect_x                             0x758860
#define CGaugeWnd__Draw_x                                          0x757E10

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B47E0
#define CGuild__GetGuildName_x                                     0x4B3000
#define CGuild__GetGuildIndex_x                                    0x4B3720

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x775CB0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x655A40
#define CHotButton__SetCheck_x                                     0x655680

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x782CC0
#define CInvSlotMgr__MoveItem_x                                    0x781860
#define CInvSlotMgr__SelectSlot_x                                  0x782D80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x7800B0
#define CInvSlot__SliderComplete_x                                 0x77D5A0
#define CInvSlot__GetItemBase_x                                    0x77CE60
#define CInvSlot__UpdateItem_x                                     0x77D050

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7849F0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783BD0
#define CInvSlotWnd__HandleLButtonUp_x                             0x784570

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x857450
#define CItemDisplayWnd__UpdateStrings_x                           0x79BFC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7912C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x791820
#define CItemDisplayWnd__SetItem_x                                 0x79C6C0
#define CItemDisplayWnd__AboutToShow_x                             0x79BBC0
#define CItemDisplayWnd__WndNotification_x                         0x79DDF0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79D4F0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79AA90
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B9B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C550

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A3510

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52B0F0

// CLabel
#define CLabel__UpdateText_x                                       0x7AA030

// CListWnd
#define CListWnd__CListWnd_x                                       0x9701F0
#define CListWnd__dCListWnd_x                                      0x9704E0
#define CListWnd__vftable_x                                        0xB8EC90
#define CListWnd__AddColumn_x                                      0x975090
#define CListWnd__AddColumn1_x                                     0x9751B0
#define CListWnd__AddLine_x                                        0x975520
#define CListWnd__AddString_x                                      0x975320
#define CListWnd__CalculateFirstVisibleLine_x                      0x974E40
#define CListWnd__CalculateVSBRange_x                              0x974C30
#define CListWnd__ClearSel_x                                       0x975E10
#define CListWnd__ClearAllSel_x                                    0x975E60
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9768F0
#define CListWnd__Compare_x                                        0x9743C0
#define CListWnd__Draw_x                                           0x9706A0
#define CListWnd__DrawColumnSeparators_x                           0x9731B0
#define CListWnd__DrawHeader_x                                     0x973610
#define CListWnd__DrawItem_x                                       0x973C60
#define CListWnd__DrawLine_x                                       0x973320
#define CListWnd__DrawSeparator_x                                  0x973250
#define CListWnd__EnableLine_x                                     0x972A70
#define CListWnd__EnsureVisible_x                                  0x976820
#define CListWnd__ExtendSel_x                                      0x975D50
#define CListWnd__GetColumnTooltip_x                               0x9725F0
#define CListWnd__GetColumnMinWidth_x                              0x972660
#define CListWnd__GetColumnWidth_x                                 0x972570
#define CListWnd__GetCurSel_x                                      0x971F20
#define CListWnd__GetItemAtPoint_x                                 0x972CE0
#define CListWnd__GetItemAtPoint1_x                                0x972D50
#define CListWnd__GetItemData_x                                    0x971FA0
#define CListWnd__GetItemHeight_x                                  0x972340
#define CListWnd__GetItemIcon_x                                    0x972120
#define CListWnd__GetItemRect_x                                    0x972B60
#define CListWnd__GetItemText_x                                    0x971FE0
#define CListWnd__GetSelList_x                                     0x975EB0
#define CListWnd__GetSeparatorRect_x                               0x972FC0
#define CListWnd__InsertLine_x                                     0x975980
#define CListWnd__RemoveLine_x                                     0x975BA0
#define CListWnd__SetColors_x                                      0x974C10
#define CListWnd__SetColumnJustification_x                         0x974940
#define CListWnd__SetColumnLabel_x                                 0x9752C0
#define CListWnd__SetColumnWidth_x                                 0x974850
#define CListWnd__SetCurSel_x                                      0x975CA0
#define CListWnd__SetItemColor_x                                   0x9764F0
#define CListWnd__SetItemData_x                                    0x9764B0
#define CListWnd__SetItemText_x                                    0x9760D0
#define CListWnd__ShiftColumnSeparator_x                           0x974A00
#define CListWnd__Sort_x                                           0x9746B0
#define CListWnd__ToggleSel_x                                      0x975CD0
#define CListWnd__SetColumnsSizable_x                              0x974AA0
#define CListWnd__SetItemWnd_x                                     0x976370
#define CListWnd__GetItemWnd_x                                     0x972170
#define CListWnd__SetItemIcon_x                                    0x976150
#define CListWnd__CalculateCustomWindowPositions_x                 0x974F40
#define CListWnd__SetVScrollPos_x                                  0x974830

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7C1420

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BC670
#define MapViewMap__dMapViewMap_x                                  0x7BC7C0
#define MapViewMap__vftable_x                                      0xB647C0
#define MapViewMap__Clear_x                                        0x7BD0D0
#define MapViewMap__SaveEx_x                                       0x7C060F
#define MapViewMap__SetZoom_x                                      0x7C6240
#define MapViewMap__HandleLButtonDown_x                            0x7BC8D0
#define MapViewMap__GetWorldCoordinates_x                          0x7BFA40

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E46A0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E5000
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E5690
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8960
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E3130
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EEB70
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E42F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F8320
#define CPacketScrambler__hton_x                                   0x8F8310

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x998FB0
#define CSidlManagerBase__CreatePageWnd_x                          0x998790
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x993C60
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x993BF0
#define CSidlManagerBase__FindAnimation1_x                         0x993EE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x9942B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x9940E0
#define CSidlManagerBase__CreateLabel_x                            0x84D190
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x997760
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x9979F0
#define CSidlManagerBase__CreateXWnd_x                             0x997A30

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84D5D0
#define CSidlManager__CreateXWnd_x                                 0x84CC00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98FC40
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98FB40
#define CSidlScreenWnd__ConvertToRes_x                             0x9BD5F0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98F4C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98F1B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98F280
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98F350
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9904E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x9909C0
#define CSidlScreenWnd__GetChildItem_x                             0x990940
#define CSidlScreenWnd__GetSidlPiece_x                             0x9906D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97EE30
#define CSidlScreenWnd__Init1_x                                    0x98EC60
#define CSidlScreenWnd__LoadIniInfo_x                              0x990A10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9915D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98E060
#define CSidlScreenWnd__m_layoutCopy_x                             0x16234B0
#define CSidlScreenWnd__StoreIniInfo_x                             0x991150
#define CSidlScreenWnd__StoreIniVis_x                              0x9914C0
#define CSidlScreenWnd__vftable_x                                  0xB8F664
#define CSidlScreenWnd__WndNotification_x                          0x9903B0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2DE0
#define CSkillMgr__GetSkillCap_x                                   0x6C2FB0
#define CSkillMgr__GetNameToken_x                                  0x6C2620
#define CSkillMgr__IsActivatedSkill_x                              0x6C2710
#define CSkillMgr__IsCombatSkill_x                                 0x6C2680

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A2840
#define CSliderWnd__SetValue_x                                     0x9A2670
#define CSliderWnd__SetNumTicks_x                                  0x9A26D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x853E30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9ABD20
#define CStmlWnd__CalculateHSBRange_x                              0x9ACCA0
#define CStmlWnd__CalculateVSBRange_x                              0x9ACC10
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B1AD0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B2770
#define CStmlWnd__ForceParseNow_x                                  0x9AC290
#define CStmlWnd__GetNextTagPiece_x                                0x9B1A30
#define CStmlWnd__GetVisibleText_x                                 0x9AC2B0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B25C0
#define CStmlWnd__MakeStmlColorTag_x                               0x9AB3C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AB430
#define CStmlWnd__SetSTMLText_x                                    0x9AA1A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B3990
#define CStmlWnd__UpdateHistoryString_x                            0x9B2970

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A9050
#define CTabWnd__DrawCurrentPage_x                                 0x9A99E0
#define CTabWnd__DrawTab_x                                         0x9A95D0
#define CTabWnd__GetCurrentPage_x                                  0x9A87B0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A87A0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A9510
#define CTabWnd__GetPageInnerRect_x                                0x9A89E0
#define CTabWnd__GetTabInnerRect_x                                 0x9A8920
#define CTabWnd__GetTabRect_x                                      0x9A87E0
#define CTabWnd__InsertPage_x                                      0x9A8BD0
#define CTabWnd__RemovePage_x                                      0x9A8D20
#define CTabWnd__SetPage_x                                         0x9A8A60
#define CTabWnd__SetPageRect_x                                     0x9A8F50
#define CTabWnd__UpdatePage_x                                      0x9A93C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A81A0
#define CPageWnd__SetTabText_x                                     0x9A8140


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC890

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97B290
#define CTextureFont__DrawWrappedText1_x                           0x97B1C0
#define CTextureFont__DrawWrappedText2_x                           0x97B380
#define CTextureFont__GetTextExtent_x                              0x97B590

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9BA0A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x965CA0

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x544BE0
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x94CCB0
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94CEF0
#define CXStr__operator_equal1_x                                   0x94CF30
#define CXStr__operator_plus_equal1_x                              0x94D990
#define CXStr__SetString_x                                         0x94F830
#define CXStr__operator_char_p_x                                   0x94D3E0
#define CXStr__GetChar_x                                           0x94F190
#define CXStr__Delete_x                                            0x94EA60
#define CXStr__GetUnicode_x                                        0x94F200
#define CXStr__Insert_x                                            0x94F260
#define CXStr__FindNext_x                                          0x94EEB0
#define CXStr__gFreeLists_x                                        0xEB12F0
#define CXStr__gCXStrAccess_x                                      0x1622D38

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9A0860

// CXWnd
#define CXWnd__BringToTop_x                                        0x9828C0
#define CXWnd__ClrFocus_x                                          0x982250
#define CXWnd__Destroy_x                                           0x9822F0
#define CXWnd__DoAllDrawing_x                                      0x97E490
#define CXWnd__DrawChildren_x                                      0x97E460
#define CXWnd__DrawColoredRect_x                                   0x97EA10
#define CXWnd__DrawTooltip_x                                       0x97C9D0
#define CXWnd__DrawTooltipAtPoint_x                                0x97CA90
#define CXWnd__GetBorderFrame_x                                    0x97E6B0
#define CXWnd__GetChildItem_x                                      0x982AE0
#define CXWnd__GetChildWndAt_x                                     0x982960
#define CXWnd__GetClientClipRect_x                                 0x980A80
#define CXWnd__GetRelativeRect_x                                   0x980DB0
#define CXWnd__GetScreenClipRect_x                                 0x980B50
#define CXWnd__GetScreenRect_x                                     0x980CE0
#define CXWnd__GetTooltipRect_x                                    0x97EA60
#define CXWnd__GetWindowTextA_x                                    0x4F2630
#define CXWnd__IsActive_x                                          0x97F1B0
#define CXWnd__IsDescendantOf_x                                    0x981770
#define CXWnd__IsReallyVisible_x                                   0x9817A0
#define CXWnd__IsType_x                                            0x9830D0
#define CXWnd__Minimize_x                                          0x981F00
#define CXWnd__Move_x                                              0x981800
#define CXWnd__Move1_x                                             0x981900
#define CXWnd__ProcessTransition_x                                 0x9823D0
#define CXWnd__Refade_x                                            0x981BE0
#define CXWnd__Resize_x                                            0x981EA0
#define CXWnd__Right_x                                             0x9826B0
#define CXWnd__SetFocus_x                                          0x982210
#define CXWnd__SetFont_x                                           0x982280
#define CXWnd__SetKeyTooltip_x                                     0x982EA0
#define CXWnd__SetMouseOver_x                                      0x97FB30
#define CXWnd__SetParent_x                                         0x981490
#define CXWnd__StartFade_x                                         0x981660
#define CXWnd__vftable_x                                           0xB8F0D8
#define CXWnd__CXWnd_x                                             0x97B8A0
#define CXWnd__dCXWnd_x                                            0x97BF90

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BE640

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x985900
#define CXWndManager__DrawWindows_x                                0x985A50
#define CXWndManager__GetKeyboardFlags_x                           0x9883F0
#define CXWndManager__HandleKeyboardMsg_x                          0x987FD0
#define CXWndManager__RemoveWnd_x                                  0x9886C0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x988B70

// CDBStr
#define CDBStr__GetString_x                                        0x55AE40

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1DD0
#define CharacterZoneClient__CastSpell_x                           0x4C5A60
#define CharacterZoneClient__Cur_HP_x                              0x4D99A0
#define CharacterZoneClient__Cur_Mana_x                            0x4E1AA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCAF0
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDA90
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C90D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E8A70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B85B0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8700
#define CharacterZoneClient__GetHPRegen_x                          0x4E84B0
#define CharacterZoneClient__GetManaRegen_x                        0x4E8EB0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9F00
#define CharacterZoneClient__Max_Endurance_x                       0x683F80
#define CharacterZoneClient__Max_HP_x                              0x4D97D0
#define CharacterZoneClient__Max_Mana_x                            0x683D60
#define CharacterZoneClient__SpellDuration_x                       0x4C9940
#define CharacterZoneClient__TotalEffect_x                         0x4CD550
#define CharacterZoneClient__UseSkill_x                            0x4EAED0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9188A0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69B9F0

// PcClient
#define PcClient__PcClient_x                                       0x6792F0
#define PcClient__GetConLevel_x                                    0x67C080

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0060
#define CCharacterListWnd__EnterWorld_x                            0x4BFA30
#define CCharacterListWnd__Quit_x                                  0x4BF750
#define CCharacterListWnd__UpdateList_x                            0x4BFC20

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65B850
#define EQ_Item__CreateItemTagString_x                             0x8F0F40
#define EQ_Item__IsStackable_x                                     0x8F62E0
#define EQ_Item__GetImageNum_x                                     0x8F2CB0
#define EQ_Item__CreateItemClient_x                                0x65A820
#define EQ_Item__GetItemValue_x                                    0x8F3F80
#define EQ_Item__ValueSellMerchant_x                               0x8F8030
#define EQ_Item__IsKeyRingItem_x                                   0x8F5A90
#define EQ_Item__CanGemFitInSlot_x                                 0x8F0710
#define EQ_Item__CanGoInBag_x                                      0x65B970
#define EQ_Item__IsEmpty_x                                         0x8F5440
#define EQ_Item__GetMaxItemCount_x                                 0x8F43A0
#define EQ_Item__GetHeldItem_x                                     0x8F2B60
#define ItemClient__dItemClient_x                                  0x65A770

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57BDD0
#define EQ_LoadingS__Array_x                                       0xD9FD10

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x9020B0
#define EQ_PC__GetCombatAbility_x                                  0x902630
#define EQ_PC__GetCombatAbilityTimer_x                             0x9026A0
#define EQ_PC__GetItemRecastTimer_x                                0x686EB0
#define EQ_PC__HasLoreItem_x                                       0x67CA30
#define EQ_PC__AlertInventoryChanged_x                             0x67B940
#define EQ_PC__GetPcZoneClient_x                                   0x6AC0E0
#define EQ_PC__RemoveMyAffect_x                                    0x68A420
#define EQ_PC__GetKeyRingItems_x                                   0x903130
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x902C90
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x903280

// EQItemList
#define EQItemList__EQItemList_x                                   0x5DB490
#define EQItemList__add_object_x                                   0x60B9D0
#define EQItemList__add_item_x                                     0x5DBA70
#define EQItemList__delete_item_x                                  0x5DBAC0
#define EQItemList__FreeItemList_x                                 0x5DB9D0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556EC0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69D420
#define EQPlayer__dEQPlayer_x                                      0x68FCD0
#define EQPlayer__DoAttack_x                                       0x6A5E20
#define EQPlayer__EQPlayer_x                                       0x690520
#define EQPlayer__SetNameSpriteState_x                             0x694AE0
#define EQPlayer__SetNameSpriteTint_x                              0x6959A0
#define PlayerBase__HasProperty_j_x                                0x9EDF10
#define EQPlayer__IsTargetable_x                                   0x9EE470
#define EQPlayer__CanSee_x                                         0x9EE260
#define EQPlayer__CanSee1_x                                        0x9EE330
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EDFD0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A9BE0
#define PlayerZoneClient__GetLevel_x                               0x6AC120
#define PlayerZoneClient__IsValidTeleport_x                        0x60CE90
#define PlayerZoneClient__LegalPlayerRace_x                        0x573DA0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6A05C0
#define EQPlayerManager__GetSpawnByName_x                          0x6A0670
#define EQPlayerManager__GetPlayerFromPartialName_x                0x6A0700

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65F130
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65F200
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65F240
#define KeypressHandler__ClearCommandStateArray_x                  0x660700
#define KeypressHandler__HandleKeyDown_x                           0x660720
#define KeypressHandler__HandleKeyUp_x                             0x6607C0
#define KeypressHandler__SaveKeymapping_x                          0x660D70

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x916730

// StringTable
#define StringTable__getString_x                                   0x911550

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x6868B0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x684A70
#define PcZoneClient__GetPcSkillLimit_x                            0x68A070
#define PcZoneClient__RemovePetEffect_x                            0x68A6D0
#define PcZoneClient__HasAlternateAbility_x                        0x683BC0
#define PcZoneClient__CanEquipItem_x                               0x684280
#define PcZoneClient__GetItemByID_x                                0x687380
#define PcZoneClient__GetItemByItemClass_x                         0x6874C0
#define PcZoneClient__RemoveBuffEffect_x                           0x68A780
#define PcZoneClient__BandolierSwap_x                              0x685020
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686E50

// Doors
#define EQSwitch__UseSwitch_x                                      0x611AA0

// IconCache
#define IconCache__GetIcon_x                                       0x74D250

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743E20
#define CContainerMgr__CloseContainer_x                            0x744100
#define CContainerMgr__OpenExperimentContainer_x                   0x744C60

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81C500

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x653DC0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B2330
#define CLootWnd__RequestLootSlot_x                                0x7B1570

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A6210
#define EQ_Spell__SpellAffects_x                                   0x5A6710
#define EQ_Spell__SpellAffectBase_x                                0x5A6430
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0F50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F00
#define EQ_Spell__IsSPAStacking_x                                  0x5A74C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6910
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A74D0
#define __IsResEffectSpell_x                                       0x4D0700

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B15A0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868FF0
#define CTargetWnd__WndNotification_x                              0x868790
#define CTargetWnd__RefreshTargetBuffs_x                           0x868AF0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867570

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86DB60
#define CTaskWnd__ConfirmAbandonTask_x                             0x870C10

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x554A60
#define CTaskManager__HandleMessage_x                              0x552930
#define CTaskManager__GetTaskStatus_x                              0x554B10
#define CTaskManager__GetElementDescription_x                      0x554B90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0E40
#define EqSoundManager__PlayScriptMp3_x                            0x5A1040
#define EqSoundManager__SoundAssistPlay_x                          0x6C72A0
#define EqSoundManager__WaveInstancePlay_x                         0x6C6790

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544890

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A7800
#define CTextureAnimation__SetCurCell_x                            0x9A75C0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x5843B0
#define CAltAbilityData__GetMercMaxRank_x                          0x584340
#define CAltAbilityData__GetMaxRank_x                              0x578730

// CTargetRing
#define CTargetRing__Cast_x                                        0x6515D0

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x647CF0
#define CharacterBase__GetItemByGlobalIndex_x                      0x928D50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928DA0
#define CharacterBase__GetItemPossession_x                         0x65A650
#define CharacterBase__GetMemorizedSpell_x                         0x65A670
#define CharacterBase__IsExpansionFlag_x                           0x5D5100

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728D10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7295D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x729680

// messages
#define msg_spell_worn_off_x                                       0x5CCA00
#define msg_new_text_x                                             0x5C0710
#define __msgTokenTextParam_x                                      0x5CEE60
#define msgTokenText_x                                             0x5CF270

// SpellManager
#define SpellManager__vftable_x                                    0xB3B4E4
#define SpellManager__SpellManager_x                               0x6CAED0
#define Spellmanager__LoadTextSpells_x                             0x6CB7D0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CB0A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F2760

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921BF0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921F40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7AA4A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x748AF0
#define CCursorAttachment__AttachToCursor1_x                       0x748B30
#define CCursorAttachment__Deactivate_x                            0x74A0E0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B8510
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B8C70
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B88F0

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524960
#define CFindItemWnd__WndNotification_x                            0x525810
#define CFindItemWnd__Update_x                                     0x5263F0
#define CFindItemWnd__PickupSelectedItem_x                         0x524060

// IString
#define IString__Append_x                                          0x55A8C0

// Camera
#define EverQuest__Cameras_x                                       0xDB303C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F620
#define LootFiltersManager__GetItemFilterData_x                    0x52EF60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52EF90
#define LootFiltersManager__SetItemLootFilter_x                    0x52F1A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808F70

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F8420
#define CResolutionHandler__GetWindowedStyle_x                     0x6C1730

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x7407D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92D0D0
#define CDistillerInfo__Instance_x                                 0x92D010

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x763410
#define CGroupWnd__UpdateDisplay_x                                 0x762660

// ItemBase
#define ItemBase__IsLore_x                                         0x8F5B30
#define ItemBase__IsLoreEquipped_x                                 0x8F5BB0

#define MultipleItemMoveManager__ProcessMove_x                     0x670320

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60B930
#define EQPlacedItemManager__GetItemByGuid_x                       0x60BA70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60BAD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5E90
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6BA760

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A400

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x505120
#define FactionManagerClient__HandleFactionMessage_x               0x505940
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x506160
#define FactionManagerClient__GetMaxFaction_x                      0x50617F
#define FactionManagerClient__GetMinFaction_x                      0x506130

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511D30

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x979F00

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E2D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511FD0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x583570

// CTargetManager
#define CTargetManager__Get_x                                      0x6CEE50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5E90

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC650

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DB970

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE506D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5E0190

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
