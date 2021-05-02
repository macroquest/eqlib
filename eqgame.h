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
#define __ExpectedVersionDate                                     "Apr 19 2021"
#define __ExpectedVersionTime                                     "15:35:45"
#define __ActualVersionDate_x                                      0xB47F34
#define __ActualVersionTime_x                                      0xB47F28
#define __ActualVersionBuild_x                                     0xB3810C

// Memory Protection
#define __MemChecker0_x                                            0x6644F0
#define __MemChecker1_x                                            0x946110
#define __MemChecker2_x                                            0x6DE810
#define __MemChecker3_x                                            0x6DE780
#define __MemChecker4_x                                            0x6375E0
#define __EncryptPad0_x                                            0xE48B40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDA3D10
#define __ScreenY_x                                                0xDA3D18
#define __ScreenX_x                                                0xDA3D1C
#define __ScreenXMax_x                                             0xDA3D20
#define __ScreenYMax_x                                             0xDA3D24
#define __InChatMode_x                                             0xDA3D64
#define __RunWalkState_x                                           0xDA3D68
#define DI8__Mouse_Copy_x                                          0xDA3D7C
#define __MouseLook_x                                              0xDA3DFA
#define __NetStatusToggle_x                                        0xDA3DFD
#define __pulAutoRun_x                                             0xDA3E18
#define __Clicks_x                                                 0xDA3E34
#define __RMouseHeldTime_x                                         0xDA3E9C
#define __LMouseHeldTime_x                                         0xDA3EA0
#define __ZoneType_x                                               0xDA41F8
#define __ShiftKeyDown_x                                           0xDA43F8
#define __AutoSkillArray_x                                         0xDA4898
#define __RangeAttackReady_x                                       0xDA4B7C
#define __AttackOnAssist_x                                         0xDA4CF4
#define __ShowNames_x                                              0xDA4D38
#define __PCNames_x                                                0xDA4E94
#define __UseTellWindows_x                                         0xDA502C
#define __pulForward_x                                             0xDA5064
#define __pulBackward_x                                            0xDA5068
#define __pulTurnRight_x                                           0xDA506C
#define __pulTurnLeft_x                                            0xDA5070
#define __pulStrafeLeft_x                                          0xDA5074
#define __pulStrafeRight_x                                         0xDA5078
#define __LastTell_x                                               0xDA58E4
#define __ServerName_x                                             0xDDA1A8
#define __DoAbilityList_x                                          0xDDA1E8
#define __SocialChangedList_x                                      0xDDA230
#define __Socials_x                                                0xDDA2A8
#define __Inviter_x                                                0xE42644
#define __Attack_x                                                 0xE426C7
#define __Autofire_x                                               0xE426C8

// Misc Globals
#define __do_loot_x                                                0x5E17C0
#define __gfMaxZoomCameraDistance_x                                0xB3FE1C
#define __gfMaxCameraDistance_x                                    0xB6859C
#define __CurrentSocial_x                                          0xC5446C
#define __BindList_x                                               0xD99448
#define g_eqCommandStates_x                                        0xD9A1B0
#define __CommandList_x                                            0xD9AD38
#define __ScreenMode_x                                             0xED6054
#define __GroupCount_x                                             0xF89D32
#define __gWorld_x                                                 0xF89F44
#define __gpbCommandEvent_x                                        0xF8A050
#define __ServerHost_x                                             0xF8A21B
#define __Guilds_x                                                 0xF8E208
#define __MouseEventTime_x                                         0xF8FC34
#define DI8__Mouse_Check_x                                         0xF9476C
#define __heqmain_x                                                0xF96C00
#define DI8__Mouse_x                                               0xF96C24
#define __HWnd_x                                                   0xF96C28
#define __Mouse_x                                                  0xF96CB0
#define DI8__Main_x                                                0xF96CC4
#define DI8__Keyboard_x                                            0xF96CC8
#define __LoginName_x                                              0xF97394
#define __CurrentMapLabel_x                                        0xFA76C4
#define __TargetAggroHolder_x                                      0xFAA078
#define __GroupAggro_x                                             0xFAA0B8
#define __SubscriptionType_x                                       0xFDB7A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF8A5A0
#define instEQZoneInfo_x                                           0xDA3FF0
#define pinstActiveBanker_x                                        0xF8A53C
#define pinstActiveCorpse_x                                        0xF8A534
#define pinstActiveGMaster_x                                       0xF8A538
#define pinstActiveMerchant_x                                      0xF8A530
#define pinstAltAdvManager_x                                       0xED6E98
#define pinstBandageTarget_x                                       0xF8A54C
#define pinstCEverQuest_x                                          0xF96C2C
#define pinstCamActor_x                                            0xED6048
#define pinstCDBStr_x                                              0xED5C20
#define pinstCDisplay_x                                            0xF87CAC
#define pinstControlledMissile_x                                   0xF8A590
#define pinstControlledPlayer_x                                    0xF8A584
#define pinstCResolutionHandler_x                                  0x1616640
#define pinstCSidlManager_x                                        0x16155DC
#define pinstCXWndManager_x                                        0x16155D4
#define instDynamicZone_x                                          0xF8E0E0
#define pinstDZMember_x                                            0xF8E1F0
#define pinstDZTimerInfo_x                                         0xF8E1F4
#define pinstEqLogin_x                                             0xF96CE0
#define instEQMisc_x                                               0xD8D8D8
#define pinstEQSoundManager_x                                      0xED77A8
#define pinstEQSpellStrings_x                                      0xEC68C0
#define instExpeditionLeader_x                                     0xF8E12A
#define instExpeditionName_x                                       0xF8E16A
#define pinstSGraphicsEngine_x                                     0x161640C
#define pinstGroup_x                                               0xF89D2E
#define pinstImeManager_x                                          0x16155D8
#define pinstLocalPC_x                                             0xF87C9C
#define pinstLocalPlayer_x                                         0xF8A52C
#define pinstMercenaryData_x                                       0xF9172C
#define pinstMercenaryStats_x                                      0xFAA144
#define pinstModelPlayer_x                                         0xF8A544
#define pinstRenderInterface_x                                     0x1616418
#define pinstSkillMgr_x                                            0xF93818
#define pinstSpawnManager_x                                        0xF922F0
#define pinstSpellManager_x                                        0xF93A58
#define pinstSpellSets_x                                           0xE3B2F0
#define pinstStringTable_x                                         0xF87CA4
#define pinstSwitchManager_x                                       0xF87B40
#define pinstTarget_x                                              0xF8A580
#define pinstTargetObject_x                                        0xF87C94
#define pinstTargetSwitch_x                                        0xF87C98
#define pinstTaskMember_x                                          0xD8D420
#define pinstTrackTarget_x                                         0xF8A588
#define pinstTradeTarget_x                                         0xF8A540
#define instTributeActive_x                                        0xD8D8F9
#define pinstViewActor_x                                           0xED6044
#define pinstWorldData_x                                           0xF87CA8
#define pinstZoneAddr_x                                            0xDA4290
#define pinstPlayerPath_x                                          0xF92388
#define pinstTargetIndicator_x                                     0xF93CC0
#define EQObject_Top_x                                             0xF87C90

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xED6088
#define pinstCAchievementsWnd_x                                    0xED5D18
#define pinstCActionsWnd_x                                         0xED6018
#define pinstCAdvancedDisplayOptionsWindow_x                       0xED6024
#define pinstCAdvancedLootWnd_x                                    0xED601C
#define pinstCAdventureLeaderboardWnd_x                            0xFA0EE8
#define pinstCAdventureRequestWnd_x                                0xFA0F98
#define pinstCAdventureStatsWnd_x                                  0xFA1048
#define pinstCAggroMeterWnd_x                                      0xED5DA0
#define pinstCAlarmWnd_x                                           0xED6080
#define pinstCAlertHistoryWnd_x                                    0xED5E00
#define pinstCAlertStackWnd_x                                      0xED5DD4
#define pinstCAlertWnd_x                                           0xED5DD8
#define pinstCAltStorageWnd_x                                      0xFA13A8
#define pinstCAudioTriggersWindow_x                                0xEB8BF0
#define pinstCAuraWnd_x                                            0xED6060
#define pinstCAvaZoneWnd_x                                         0xED5D00
#define pinstCBandolierWnd_x                                       0xED6070
#define pinstCBankWnd_x                                            0xED5DE0
#define pinstCBarterMerchantWnd_x                                  0xFA25E8
#define pinstCBarterSearchWnd_x                                    0xFA2698
#define pinstCBarterWnd_x                                          0xFA2748
#define pinstCBazaarConfirmationWnd_x                              0xED60A0
#define pinstCBazaarSearchWnd_x                                    0xED5D28
#define pinstCBazaarWnd_x                                          0xED5CE0
#define pinstCBlockedBuffWnd_x                                     0xED5D64
#define pinstCBlockedPetBuffWnd_x                                  0xED5D6C
#define pinstCBodyTintWnd_x                                        0xED60B4
#define pinstCBookWnd_x                                            0xED5DF8
#define pinstCBreathWnd_x                                          0xED608C
#define pinstCBuffWindowNORMAL_x                                   0xED5D5C
#define pinstCBuffWindowSHORT_x                                    0xED5D60
#define pinstCBugReportWnd_x                                       0xED5D14
#define pinstCButtonWnd_x                                          0x1615840
#define pinstCCastingWnd_x                                         0xED5D9C
#define pinstCCastSpellWnd_x                                       0xED5DAC
#define pinstCCharacterListWnd_x                                   0xED5D40
#define pinstCChatWindowManager_x                                  0xFA31F0
#define pinstCClaimWnd_x                                           0xFA3348
#define pinstCColorPickerWnd_x                                     0xED5D54
#define pinstCCombatAbilityWnd_x                                   0xED6030
#define pinstCCombatSkillsSelectWnd_x                              0xED6034
#define pinstCCompassWnd_x                                         0xED6068
#define pinstCConfirmationDialog_x                                 0xFA8210
#define pinstCContainerMgr_x                                       0xED6094
#define pinstCContextMenuManager_x                                 0x1615590
#define pinstCCursorAttachment_x                                   0xED5D94
#define pinstCDynamicZoneWnd_x                                     0xFA3910
#define pinstCEditLabelWnd_x                                       0xED5CF4
#define pinstCEQMainWnd_x                                          0xFA3B58
#define pinstCEventCalendarWnd_x                                   0xED6084
#define pinstCExtendedTargetWnd_x                                  0xED5D98
#define pinstCPlayerCustomizationWnd_x                             0xED5D44
#define pinstCFactionWnd_x                                         0xED5DA8
#define pinstCFellowshipWnd_x                                      0xFA3D58
#define pinstCFileSelectionWnd_x                                   0xED603C
#define pinstCFindItemWnd_x                                        0xED60C0
#define pinstCFindLocationWnd_x                                    0xFA3EB0
#define pinstCFriendsWnd_x                                         0xED6038
#define pinstCGemsGameWnd_x                                        0xED6078
#define pinstCGiveWnd_x                                            0xED5CE8
#define pinstCGroupSearchFiltersWnd_x                              0xED5D74
#define pinstCGroupSearchWnd_x                                     0xFA42A8
#define pinstCGroupWnd_x                                           0xFA4358
#define pinstCGuildBankWnd_x                                       0xFA4408
#define pinstCGuildCreationWnd_x                                   0xFA44B8
#define pinstCGuildMgmtWnd_x                                       0xFA4568
#define pinstCharacterCreation_x                                   0xED5D90
#define pinstCHelpWnd_x                                            0xED5DD0
#define pinstCHeritageSelectionWnd_x                               0xED5D48
#define pinstCHotButtonWnd_x                                       0xFA66C0
#define pinstCHotButtonWnd1_x                                      0xFA66C0
#define pinstCHotButtonWnd2_x                                      0xFA66C4
#define pinstCHotButtonWnd3_x                                      0xFA66C8
#define pinstCHotButtonWnd4_x                                      0xFA66CC
#define pinstCIconSelectionWnd_x                                   0xED5D10
#define pinstCInspectWnd_x                                         0xED5D08
#define pinstCInventoryWnd_x                                       0xED5DCC
#define pinstCInvSlotMgr_x                                         0xED6090
#define pinstCItemDisplayManager_x                                 0xFA6C18
#define pinstCItemExpTransferWnd_x                                 0xFA6D4C
#define pinstCItemOverflowWnd_x                                    0xED5CC8
#define pinstCJournalCatWnd_x                                      0xED60A4
#define pinstCJournalNPCWnd_x                                      0xED609C
#define pinstCJournalTextWnd_x                                     0xED609C
#define pinstCKeyRingWnd_x                                         0xED5DDC
#define pinstCLargeDialogWnd_x                                     0xFA8E90
#define pinstCLayoutCopyWnd_x                                      0xFA7098
#define pinstCLFGuildWnd_x                                         0xFA7148
#define pinstCLoadskinWnd_x                                        0xED607C
#define pinstCLootFiltersCopyWnd_x                                 0xED5130
#define pinstCLootFiltersWnd_x                                     0xED60A8
#define pinstCLootSettingsWnd_x                                    0xED60AC
#define pinstCLootWnd_x                                            0xED5E08
#define pinstCMailAddressBookWnd_x                                 0xED5D38
#define pinstCMailCompositionWnd_x                                 0xED5D34
#define pinstCMailIgnoreListWnd_x                                  0xED5D3C
#define pinstCMailWnd_x                                            0xED5D30
#define pinstCManageLootWnd_x                                      0xED7318
#define pinstCMapToolbarWnd_x                                      0xED5CEC
#define pinstCMapViewWnd_x                                         0xED5CE4
#define pinstCMarketplaceWnd_x                                     0xED5CCC
#define pinstCMerchantWnd_x                                        0xED5CC4
#define pinstCMIZoneSelectWnd_x                                    0xFA7980
#define pinstCMusicPlayerWnd_x                                     0xED6074
#define pinstCNameChangeMercWnd_x                                  0xED5DC4
#define pinstCNameChangePetWnd_x                                   0xED5DC0
#define pinstCNameChangeWnd_x                                      0xED5D20
#define pinstCNoteWnd_x                                            0xED5DC8
#define pinstCObjectPreviewWnd_x                                   0xED5D2C
#define pinstCOptionsWnd_x                                         0xED5D58
#define pinstCOverseerWnd_x                                        0xED5CC0
#define pinstCPetInfoWnd_x                                         0xED6010
#define pinstCPetitionQWnd_x                                       0xED5D7C
#define pinstCPlayerNotesWnd_x                                     0xED606C
#define pinstCPlayerWnd_x                                          0xED60C4
#define pinstCPopupWndManager_x                                    0xFA8210
#define pinstCProgressionSelectionWnd_x                            0xFA82C0
#define pinstCPurchaseGroupWnd_x                                   0xED5CD8
#define pinstCPurchaseWnd_x                                        0xED5CD4
#define pinstCPvPLeaderboardWnd_x                                  0xFA8370
#define pinstCPvPStatsWnd_x                                        0xFA8420
#define pinstCQuantityWnd_x                                        0xED5DE8
#define pinstCRaceChangeWnd_x                                      0xED5D24
#define pinstCRaidOptionsWnd_x                                     0xED5DA4
#define pinstCRaidWnd_x                                            0xED5DB0
#define pinstCRealEstateItemsWnd_x                                 0xED5D50
#define pinstCRealEstateLayoutDetailsWnd_x                         0xED5D8C
#define pinstCRealEstateManageWnd_x                                0xED5D78
#define pinstCRealEstateNeighborhoodWnd_x                          0xED5D80
#define pinstCRealEstatePlotSearchWnd_x                            0xED5D84
#define pinstCRealEstatePurchaseWnd_x                              0xED5D88
#define pinstCRespawnWnd_x                                         0xED6064
#define pinstCRewardSelectionWnd_x                                 0xFA8B68
#define pinstCSelectorWnd_x                                        0xED5CDC
#define pinstCSendMoneyWnd_x                                       0xED5CF0
#define pinstCServerListWnd_x                                      0xED6040
#define pinstCSkillsSelectWnd_x                                    0xED6028
#define pinstCSkillsWnd_x                                          0xED6020
#define pinstCSocialEditWnd_x                                      0xED5D0C
#define pinstCSocialWnd_x                                          0xED6098
#define pinstCSpellBookWnd_x                                       0xED5DBC
#define pinstCStoryWnd_x                                           0xED60B0
#define pinstCTargetOfTargetWnd_x                                  0xFAA1C8
#define pinstCTargetWnd_x                                          0xED5D04
#define pinstCTaskOverlayWnd_x                                     0xED60B8
#define pinstCTaskSelectWnd_x                                      0xFAA320
#define pinstCTaskManager_x                                        0xC5F268
#define pinstCTaskTemplateSelectWnd_x                              0xFAA3D0
#define pinstCTaskWnd_x                                            0xFAA480
#define pinstCTextEntryWnd_x                                       0xED602C
#define pinstCTimeLeftWnd_x                                        0xED5D70
#define pinstCTipWndCONTEXT_x                                      0xFAA684
#define pinstCTipWndOFDAY_x                                        0xFAA680
#define pinstCTitleWnd_x                                           0xFAA730
#define pinstCTrackingWnd_x                                        0xED5CF8
#define pinstCTradeskillWnd_x                                      0xFAA898
#define pinstCTradeWnd_x                                           0xED5CD0
#define pinstCTrainWnd_x                                           0xED6014
#define pinstCTributeBenefitWnd_x                                  0xFAAA98
#define pinstCTributeMasterWnd_x                                   0xFAAB48
#define pinstCTributeTrophyWnd_x                                   0xFAABF8
#define pinstCVideoModesWnd_x                                      0xED5D1C
#define pinstCVoiceMacroWnd_x                                      0xF940D8
#define pinstCVoteResultsWnd_x                                     0xED5DB8
#define pinstCVoteWnd_x                                            0xED5DB4
#define pinstCZoneGuideWnd_x                                       0xED5DE4
#define pinstCZonePathWnd_x                                        0xED5DFC
#define pinstEQSuiteTextureLoader_x                                0xEA3900
#define pinstItemIconCache_x                                       0xFA3B10
#define pinstLootFiltersManager_x                                  0xED51E0
#define pinstRewardSelectionWnd_x                                  0xFA8B68

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DCA80
#define __CastRay2_x                                               0x5DCD10
#define __ConvertItemTags_x                                        0x5F9E80
#define __CleanItemTags_x                                          0x47DA80
#define __CreateCascadeMenuItems_x                                 0x571820
#define __DoesFileExist_x                                          0x9490A0
#define __EQGetTime_x                                              0x945D80
#define __ExecuteCmd_x                                             0x5D4E90
#define __FixHeading_x                                             0x9E44C0
#define __FlushDxKeyboard_x                                        0x6D9B10
#define __GameLoop_x                                               0x6DD410
#define __get_bearing_x                                            0x5DC620
#define __get_melee_range_x                                        0x5DCF50
#define __GetAnimationCache_x                                      0x74C3F0
#define __GetGaugeValueFromEQ_x                                    0x8521B0
#define __GetLabelFromEQ_x                                         0x853CF0
#define __GetXTargetType_x                                         0x9E6830
#define __HandleMouseWheel_x                                       0x6DE8A0
#define __HeadingDiff_x                                            0x9E4520
#define __HelpPath_x                                               0xF8F8F4
#define __ExecuteFrontEnd_x                                        0x6DA2F0
#define __NewUIINI_x                                               0x851E80
#define __ProcessGameEvents_x                                      0x6435B0
#define __ProcessKeyboardEvents_x                                  0x6DBA60
#define __ProcessMouseEvents_x                                     0x642CB0
#define __SaveColors_x                                             0x571700
#define __STMLToText_x                                             0x982150
#define __WndProc_x                                                0x6DC520
#define CMemoryMappedFile__SetFile_x                               0xAD4CB0
#define CrashDetected_x                                            0x6DC020
#define DrawNetStatus_x                                            0x672BB0
#define Expansion_HoT_x                                            0xDA4CE0
#define Teleport_Table_Size_x                                      0xF8A0D8
#define Teleport_Table_x                                           0xF87CB0
#define Util__FastTime_x                                           0x945940
#define __eq_delete_x                                              0x9ED3B5
#define __eq_new_x                                                 0x9ED924
#define __CopyLayout_x                                             0x65F760
#define __ThrottleFrameRate_x                                      0x62C433
#define __ThrottleFrameRateEnd_x                                   0x62C48F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EAFD0
#define CAAWnd__Update_x                                           0x6EA300
#define CAAWnd__UpdateSelected_x                                   0x6E7670

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B030
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495710
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494950

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57A6F0
#define AltAdvManager__IsAbilityReady_x                            0x5792F0
#define AltAdvManager__GetAAById_x                                 0x579690
#define AltAdvManager__CanTrainAbility_x                           0x579700
#define AltAdvManager__CanSeeAbility_x                             0x579A90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CD880
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC190
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC370
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C0DF0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D11F0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CA870
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF240
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEB90
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE290
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E11B0
#define CharacterZoneClient__GetEffect_x                           0x4C0D30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CBF30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B68B0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B85E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E10B0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E0FB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CBFD0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C4D30
#define CharacterZoneClient__GetModCap_x                           0x4EE190
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CBE80
#define CharacterZoneClient__HasSkill_x                            0x4DC960
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8630
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE0A0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA460
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA010

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x707770
#define CBankWnd__WndNotification_x                                0x707510

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7121B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70CE00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70ADD0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716890

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x97F710
#define CButtonWnd__CButtonWnd_x                                   0x97E060
#define CButtonWnd__dCButtonWnd_x                                  0x97E300
#define CButtonWnd__vftable_x                                      0xB82EB8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x739B70
#define CChatWindowManager__InitContextMenu_x                      0x732AA0
#define CChatWindowManager__FreeChatWindow_x                       0x738730
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x739850
#define CChatWindowManager__CreateChatWindow_x                     0x738D60

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2050

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73A4D0
#define CChatWindow__Clear_x                                       0x73B920
#define CChatWindow__WndNotification_x                             0x73C0B0
#define CChatWindow__AddHistory_x                                  0x73B180

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x995530
#define CContextMenu__dCContextMenu_x                              0x995770
#define CContextMenu__AddMenuItem_x                                0x995780
#define CContextMenu__RemoveMenuItem_x                             0x995A90
#define CContextMenu__RemoveAllMenuItems_x                         0x995AB0
#define CContextMenu__CheckMenuItem_x                              0x995B10
#define CContextMenu__SetMenuItem_x                                0x9959B0
#define CContextMenu__AddSeparator_x                               0x995910

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9960A0
#define CContextMenuManager__RemoveMenu_x                          0x996110
#define CContextMenuManager__PopupMenu_x                           0x9961D0
#define CContextMenuManager__Flush_x                               0x996040
#define CContextMenuManager__GetMenu_x                             0x49D4E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7463C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8E9860
#define CChatService__GetFriendName_x                              0x920450

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x992600
#define CComboWnd__Draw_x                                          0x991A90
#define CComboWnd__GetCurChoice_x                                  0x9923D0
#define CComboWnd__GetListRect_x                                   0x991F40
#define CComboWnd__GetTextRect_x                                   0x992670
#define CComboWnd__InsertChoice_x                                  0x9920D0
#define CComboWnd__SetColors_x                                     0x9920A0
#define CComboWnd__SetChoice_x                                     0x9923B0
#define CComboWnd__GetItemCount_x                                  0x9923E0
#define CComboWnd__GetCurChoiceText_x                              0x992410
#define CComboWnd__GetChoiceText_x                                 0x9923F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x992170

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x743A50
#define CContainerWnd__vftable_x                                   0xB51184
#define CContainerWnd__SetContainer_x                              0x745280

// CDisplay
#define CDisplay__cameraType_x                                     0xED5E0C
#define CDisplay__ZoneMainUI_x                                     0x56BF00
#define CDisplay__PreZoneMainUI_x                                  0x56BF10
#define CDisplay__CleanGameUI_x                                    0x5714E0
#define CDisplay__GetClickedActor_x                                0x563DE0
#define CDisplay__GetUserDefinedColor_x                            0x55BB50
#define CDisplay__GetWorldFilePath_x                               0x5658F0
#define CDisplay__is3dON_x                                         0x560670
#define CDisplay__ReloadUI_x                                       0x56B220
#define CDisplay__WriteTextHD2_x                                   0x560460
#define CDisplay__TrueDistance_x                                   0x5677C0
#define CDisplay__SetViewActor_x                                   0x563700
#define CDisplay__GetFloorHeight_x                                 0x560730
#define CDisplay__SetRenderWindow_x                                0x55F0B0
#define CDisplay__ToggleScreenshotMode_x                           0x5631D0
#define CDisplay__RealRender_World_x                               0x55E3A0

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9B7CD0

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x999060
#define CEditWnd__EnsureCaretVisible_x                             0x99B3D0
#define CEditWnd__GetCaretPt_x                                     0x99A240
#define CEditWnd__GetCharIndexPt_x                                 0x999FF0
#define CEditWnd__GetDisplayString_x                               0x999E90
#define CEditWnd__GetHorzOffset_x                                  0x9985B0
#define CEditWnd__GetLineForPrintableChar_x                        0x99B2E0
#define CEditWnd__GetSelStartPt_x                                  0x99A2A0
#define CEditWnd__GetSTMLSafeText_x                                0x999CA0
#define CEditWnd__PointFromPrintableChar_x                         0x99AF30
#define CEditWnd__ReplaceSelection_x                               0x99AAF0
#define CEditWnd__SelectableCharFromPoint_x                        0x99B090
#define CEditWnd__SetEditable_x                                    0x99A370
#define CEditWnd__SetWindowText_x                                  0x0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62EC10
#define CEverQuest__ClickedPlayer_x                                0x620140
#define CEverQuest__CreateTargetIndicator_x                        0x640530
#define CEverQuest__DeleteTargetIndicator_x                        0x6405C0
#define CEverQuest__DoTellWindow_x                                 0x4F2150
#define CEverQuest__OutputTextToLog_x                              0x4F2420
#define CEverQuest__DropHeldItemOnGround_x                         0x615150
#define CEverQuest__dsp_chat_x                                     0x4F27F0
#define CEverQuest__trimName_x                                     0x63BB20
#define CEverQuest__Emote_x                                        0x62F2D0
#define CEverQuest__EnterZone_x                                    0x628F50
#define CEverQuest__GetBodyTypeDesc_x                              0x634860
#define CEverQuest__GetClassDesc_x                                 0x634EA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6354A0
#define CEverQuest__GetDeityDesc_x                                 0x63ECE0
#define CEverQuest__GetLangDesc_x                                  0x635660
#define CEverQuest__GetRaceDesc_x                                  0x634E80
#define CEverQuest__InterpretCmd_x                                 0x63F350
#define CEverQuest__LeftClickedOnPlayer_x                          0x6196D0
#define CEverQuest__LMouseUp_x                                     0x617700
#define CEverQuest__RightClickedOnPlayer_x                         0x61A2C0
#define CEverQuest__RMouseUp_x                                     0x6189C0
#define CEverQuest__SetGameState_x                                 0x614ED0
#define CEverQuest__UPCNotificationFlush_x                         0x63BA40
#define CEverQuest__IssuePetCommand_x                              0x636C60
#define CEverQuest__ReportSuccessfulHeal_x                         0x630100
#define CEverQuest__ReportSuccessfulHit_x                          0x630BE0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757330
#define CGaugeWnd__CalcLinesFillRect_x                             0x757390
#define CGaugeWnd__Draw_x                                          0x756950

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4420
#define CGuild__GetGuildName_x                                     0x4B2C40
#define CGuild__GetGuildIndex_x                                    0x4B3360

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x774780

//CHotButton
#define CHotButton__SetButtonSize_x                                0x653F60
#define CHotButton__SetCheck_x                                     0x653BA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x781790
#define CInvSlotMgr__MoveItem_x                                    0x780360
#define CInvSlotMgr__SelectSlot_x                                  0x781850

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77EBB0
#define CInvSlot__SliderComplete_x                                 0x77C090
#define CInvSlot__GetItemBase_x                                    0x77B950
#define CInvSlot__UpdateItem_x                                     0x77BB40

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7834B0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782680
#define CInvSlotWnd__HandleLButtonUp_x                             0x783030

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x84C610
#define CItemDisplayWnd__UpdateStrings_x                           0x792640
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78C0E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78C630
#define CItemDisplayWnd__SetItem_x                                 0x792C40
#define CItemDisplayWnd__AboutToShow_x                             0x792230
#define CItemDisplayWnd__WndNotification_x                         0x794180
#define CItemDisplayWnd__RequestConvertItem_x                      0x793A60
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x791310
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x792070

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x881750

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x798AD0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52AAC0

// CLabel
#define CLabel__UpdateText_x                                       0x79F1F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x964AB0
#define CListWnd__dCListWnd_x                                      0x964DB0
#define CListWnd__vftable_x                                        0xB82790
#define CListWnd__AddColumn_x                                      0x9699B0
#define CListWnd__AddColumn1_x                                     0x969AD0
#define CListWnd__AddLine_x                                        0x969E40
#define CListWnd__AddString_x                                      0x969C40
#define CListWnd__CalculateFirstVisibleLine_x                      0x969760
#define CListWnd__CalculateVSBRange_x                              0x969540
#define CListWnd__ClearSel_x                                       0x96A730
#define CListWnd__ClearAllSel_x                                    0x96A780
#define CListWnd__CloseAndUpdateEditWindow_x                       0x96B220
#define CListWnd__Compare_x                                        0x968CC0
#define CListWnd__Draw_x                                           0x964F70
#define CListWnd__DrawColumnSeparators_x                           0x967AB0
#define CListWnd__DrawHeader_x                                     0x967F10
#define CListWnd__DrawItem_x                                       0x968560
#define CListWnd__DrawLine_x                                       0x967C20
#define CListWnd__DrawSeparator_x                                  0x967B50
#define CListWnd__EnableLine_x                                     0x967370
#define CListWnd__EnsureVisible_x                                  0x96B150
#define CListWnd__ExtendSel_x                                      0x96A670
#define CListWnd__GetColumnTooltip_x                               0x966EF0
#define CListWnd__GetColumnMinWidth_x                              0x966F60
#define CListWnd__GetColumnWidth_x                                 0x966E70
#define CListWnd__GetCurSel_x                                      0x966810
#define CListWnd__GetItemAtPoint_x                                 0x9675E0
#define CListWnd__GetItemAtPoint1_x                                0x967650
#define CListWnd__GetItemData_x                                    0x966890
#define CListWnd__GetItemHeight_x                                  0x966C40
#define CListWnd__GetItemIcon_x                                    0x966A10
#define CListWnd__GetItemRect_x                                    0x967460
#define CListWnd__GetItemText_x                                    0x9668D0
#define CListWnd__GetSelList_x                                     0x96A7D0
#define CListWnd__GetSeparatorRect_x                               0x9678C0
#define CListWnd__InsertLine_x                                     0x96A2A0
#define CListWnd__RemoveLine_x                                     0x96A4C0
#define CListWnd__SetColors_x                                      0x969510
#define CListWnd__SetColumnJustification_x                         0x969240
#define CListWnd__SetColumnLabel_x                                 0x969BE0
#define CListWnd__SetColumnWidth_x                                 0x969150
#define CListWnd__SetCurSel_x                                      0x96A5C0
#define CListWnd__SetItemColor_x                                   0x96AE10
#define CListWnd__SetItemData_x                                    0x96ADD0
#define CListWnd__SetItemText_x                                    0x96A9F0
#define CListWnd__ShiftColumnSeparator_x                           0x969300
#define CListWnd__Sort_x                                           0x968FB0
#define CListWnd__ToggleSel_x                                      0x96A5F0
#define CListWnd__SetColumnsSizable_x                              0x9693A0
#define CListWnd__SetItemWnd_x                                     0x96AC90
#define CListWnd__GetItemWnd_x                                     0x966A60
#define CListWnd__SetItemIcon_x                                    0x96AA70
#define CListWnd__CalculateCustomWindowPositions_x                 0x969860
#define CListWnd__SetVScrollPos_x                                  0x969130

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7B6640

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B1890
#define MapViewMap__dMapViewMap_x                                  0x7B19E0
#define MapViewMap__vftable_x                                      0xB58508
#define MapViewMap__Clear_x                                        0x7B22F0
#define MapViewMap__SaveEx_x                                       0x7B582F
#define MapViewMap__SetZoom_x                                      0x7BB470
#define MapViewMap__HandleLButtonDown_x                            0x7B1AF0
#define MapViewMap__GetWorldCoordinates_x                          0x7B4C60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7D9860
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7DA1C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7DA800
#define CMerchantWnd__SelectRecoverySlot_x                         0x7DDA10
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7D8300
#define CMerchantWnd__SelectBuySellSlot_x                          0x7E3B90
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7D94C0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8ED400
#define CPacketScrambler__hton_x                                   0x8ED3F0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x98D880
#define CSidlManagerBase__CreatePageWnd_x                          0x98D060
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x988520
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9884B0
#define CSidlManagerBase__FindAnimation1_x                         0x9887A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x988B70
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x9889A0
#define CSidlManagerBase__CreateLabel_x                            0x842330
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x98C020
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x98C2C0
#define CSidlManagerBase__CreateXWnd_x                             0x98C300

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x842770
#define CSidlManager__CreateXWnd_x                                 0x841DA0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x984500
#define CSidlScreenWnd__CalculateVSBRange_x                        0x984400
#define CSidlScreenWnd__ConvertToRes_x                             0x9B1F10
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x983D80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x983A70
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x983B40
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x983C10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x984DA0
#define CSidlScreenWnd__EnableIniStorage_x                         0x985280
#define CSidlScreenWnd__GetChildItem_x                             0x985200
#define CSidlScreenWnd__GetSidlPiece_x                             0x984F90
#define CSidlScreenWnd__HandleLButtonUp_x                          0x973750
#define CSidlScreenWnd__Init1_x                                    0x983520
#define CSidlScreenWnd__LoadIniInfo_x                              0x9852D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x985E90
#define CSidlScreenWnd__LoadSidlScreen_x                           0x982920
#define CSidlScreenWnd__m_layoutCopy_x                             0x1615460
#define CSidlScreenWnd__StoreIniInfo_x                             0x985A10
#define CSidlScreenWnd__StoreIniVis_x                              0x985D80
#define CSidlScreenWnd__vftable_x                                  0xB83164
#define CSidlScreenWnd__WndNotification_x                          0x984C70

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1580
#define CSkillMgr__GetSkillCap_x                                   0x6C1750
#define CSkillMgr__GetNameToken_x                                  0x6C0DC0
#define CSkillMgr__IsActivatedSkill_x                              0x6C0EB0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0E20

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x997190
#define CSliderWnd__SetValue_x                                     0x996FC0
#define CSliderWnd__SetNumTicks_x                                  0x997020

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x848FF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A0600
#define CStmlWnd__CalculateHSBRange_x                              0x9A1560
#define CStmlWnd__CalculateVSBRange_x                              0x9A14E0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9A63D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9A7070
#define CStmlWnd__ForceParseNow_x                                  0x9A0B70
#define CStmlWnd__GetNextTagPiece_x                                0x9A6330
#define CStmlWnd__GetVisibleText_x                                 0x9A0B90
#define CStmlWnd__InitializeWindowVariables_x                      0x9A6EC0
#define CStmlWnd__MakeStmlColorTag_x                               0x99FCA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x99FD10
#define CStmlWnd__SetSTMLText_x                                    0x99EA80
#define CStmlWnd__StripFirstSTMLLines_x                            0x9A8290
#define CStmlWnd__UpdateHistoryString_x                            0x9A7270

// CTabWnd
#define CTabWnd__Draw_x                                            0x99D9D0
#define CTabWnd__DrawCurrentPage_x                                 0x99E360
#define CTabWnd__DrawTab_x                                         0x99DF50
#define CTabWnd__GetCurrentPage_x                                  0x99D130
#define CTabWnd__GetCurrentTabIndex_x                              0x99D120
#define CTabWnd__GetPageFromTabIndex_x                             0x99DE90
#define CTabWnd__GetPageInnerRect_x                                0x99D360
#define CTabWnd__GetTabInnerRect_x                                 0x99D2A0
#define CTabWnd__GetTabRect_x                                      0x99D160
#define CTabWnd__InsertPage_x                                      0x99D550
#define CTabWnd__RemovePage_x                                      0x99D6A0
#define CTabWnd__SetPage_x                                         0x99D3E0
#define CTabWnd__SetPageRect_x                                     0x99D8D0
#define CTabWnd__UpdatePage_x                                      0x99DD40

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x99CB20
#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x99CAC0


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC4B0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x96FBA0
#define CTextureFont__DrawWrappedText1_x                           0x96FAD0
#define CTextureFont__DrawWrappedText2_x                           0x96FC90
#define CTextureFont__GetTextExtent_x                              0x96FEA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9AE9C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x95A560

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x5444F0
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x941CD0
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x941F10
#define CXStr__operator_equal1_x                                   0x941F50
#define CXStr__operator_plus_equal1_x                              0x9429B0
#define CXStr__SetString_x                                         0x944850
#define CXStr__operator_char_p_x                                   0x942400
#define CXStr__GetChar_x                                           0x9441B0
#define CXStr__Delete_x                                            0x943A80
#define CXStr__GetUnicode_x                                        0x944220
#define CXStr__Insert_x                                            0x944280
#define CXStr__FindNext_x                                          0x943ED0
#define CXStr__gFreeLists_x                                        0xEA32D8
#define CXStr__gCXStrAccess_x                                      0x1614CE8

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x995190

// CXWnd
#define CXWnd__BringToTop_x                                        0x977170
#define CXWnd__ClrFocus_x                                          0x976AF0
#define CXWnd__Destroy_x                                           0x976BA0
#define CXWnd__DoAllDrawing_x                                      0x972DC0
#define CXWnd__DrawChildren_x                                      0x972D90
#define CXWnd__DrawColoredRect_x                                   0x973350
#define CXWnd__DrawTooltip_x                                       0x9712F0
#define CXWnd__DrawTooltipAtPoint_x                                0x9713B0
#define CXWnd__GetBorderFrame_x                                    0x972FF0
#define CXWnd__GetChildItem_x                                      0x977390
#define CXWnd__GetChildWndAt_x                                     0x977210
#define CXWnd__GetClientClipRect_x                                 0x9753B0
#define CXWnd__GetRelativeRect_x                                   0x9756D0
#define CXWnd__GetScreenClipRect_x                                 0x975480
#define CXWnd__GetScreenRect_x                                     0x975620
#define CXWnd__GetTooltipRect_x                                    0x9733A0
#define CXWnd__GetWindowTextA_x                                    0x4F1FF0
#define CXWnd__IsActive_x                                          0x973AD0
#define CXWnd__IsDescendantOf_x                                    0x976060
#define CXWnd__IsReallyVisible_x                                   0x976090
#define CXWnd__IsType_x                                            0x977990
#define CXWnd__Minimize_x                                          0x9767A0
#define CXWnd__Move_x                                              0x976100
#define CXWnd__Move1_x                                             0x9761F0
#define CXWnd__ProcessTransition_x                                 0x976C80
#define CXWnd__Refade_x                                            0x9764A0
#define CXWnd__Resize_x                                            0x976730
#define CXWnd__Right_x                                             0x976F60
#define CXWnd__SetFocus_x                                          0x976AB0
#define CXWnd__SetFont_x                                           0x976B20
#define CXWnd__SetKeyTooltip_x                                     0x977750
#define CXWnd__SetMouseOver_x                                      0x974480
#define CXWnd__SetParent_x                                         0x975D70
#define CXWnd__StartFade_x                                         0x975F40
#define CXWnd__vftable_x                                           0xB82BD8
#define CXWnd__CXWnd_x                                             0x9701B0
#define CXWnd__dCXWnd_x                                            0x9708A0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9B2F70

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x97A1D0
#define CXWndManager__DrawWindows_x                                0x97A320
#define CXWndManager__GetKeyboardFlags_x                           0x97CC70
#define CXWndManager__HandleKeyboardMsg_x                          0x97C850
#define CXWndManager__RemoveWnd_x                                  0x97CF40
#define CXWndManager__RemovePendingDeletionWnd_x                   0x97D400

// CDBStr
#define CDBStr__GetString_x                                        0x55A660

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1A10
#define CharacterZoneClient__CastSpell_x                           0x4C56B0
#define CharacterZoneClient__Cur_HP_x                              0x4D95D0
#define CharacterZoneClient__Cur_Mana_x                            0x4E16E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DC720
#define CharacterZoneClient__GetBaseSkill_x                        0x4DD6C0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C8D20
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E86A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B81F0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8340
#define CharacterZoneClient__GetHPRegen_x                          0x4E80E0
#define CharacterZoneClient__GetManaRegen_x                        0x4E8AE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9B50
#define CharacterZoneClient__Max_Endurance_x                       0x6826E0
#define CharacterZoneClient__Max_HP_x                              0x4D9400
#define CharacterZoneClient__Max_Mana_x                            0x6824D0
#define CharacterZoneClient__SpellDuration_x                       0x4C9590
#define CharacterZoneClient__TotalEffect_x                         0x4CD190
#define CharacterZoneClient__UseSkill_x                            0x4EAB00

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x90D8C0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69A110

// PcClient
#define PcClient__PcClient_x                                       0x677A70
#define PcClient__GetConLevel_x                                    0x67A800

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BFCC0
#define CCharacterListWnd__EnterWorld_x                            0x4BF690
#define CCharacterListWnd__Quit_x                                  0x4BF3B0
#define CCharacterListWnd__UpdateList_x                            0x4BF880

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x659DE0
#define EQ_Item__CreateItemTagString_x                             0x8E6120
#define EQ_Item__IsStackable_x                                     0x8EB3E0
#define EQ_Item__GetImageNum_x                                     0x8E7E00
#define EQ_Item__CreateItemClient_x                                0x658D60
#define EQ_Item__GetItemValue_x                                    0x8E90F0
#define EQ_Item__ValueSellMerchant_x                               0x8ED130
#define EQ_Item__IsKeyRingItem_x                                   0x8EABD0
#define EQ_Item__CanGemFitInSlot_x                                 0x8E5930
#define EQ_Item__CanGoInBag_x                                      0x659F00
#define EQ_Item__IsEmpty_x                                         0x8EA5D0
#define EQ_Item__GetMaxItemCount_x                                 0x8E94F0
#define EQ_Item__GetHeldItem_x                                     0x8E7CC0
#define ItemClient__dItemClient_x                                  0x658CB0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57B4F0
#define EQ_LoadingS__Array_x                                       0xD91D00

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8F7190
#define EQ_PC__GetCombatAbility_x                                  0x8F7710
#define EQ_PC__GetCombatAbilityTimer_x                             0x8F7780
#define EQ_PC__GetItemRecastTimer_x                                0x685620
#define EQ_PC__HasLoreItem_x                                       0x67B1B0
#define EQ_PC__AlertInventoryChanged_x                             0x67A0C0
#define EQ_PC__GetPcZoneClient_x                                   0x6AA810
#define EQ_PC__RemoveMyAffect_x                                    0x688B40
#define EQ_PC__GetKeyRingItems_x                                   0x8F8210
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8F7D70
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8F8360

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D9A80
#define EQItemList__add_object_x                                   0x609FC0
#define EQItemList__add_item_x                                     0x5DA060
#define EQItemList__delete_item_x                                  0x5DA0B0
#define EQItemList__FreeItemList_x                                 0x5D9FC0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5567A0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69BB40
#define EQPlayer__dEQPlayer_x                                      0x68E400
#define EQPlayer__DoAttack_x                                       0x6A4540
#define EQPlayer__EQPlayer_x                                       0x68EC50
#define EQPlayer__SetNameSpriteState_x                             0x6931F0
#define EQPlayer__SetNameSpriteTint_x                              0x6940C0
#define PlayerBase__HasProperty_j_x                                0x9E2880
#define EQPlayer__IsTargetable_x                                   0x9E2DE0
#define EQPlayer__CanSee_x                                         0x9E2BD0
#define EQPlayer__CanSee1_x                                        0x9E2CA0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9E2940

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8300
#define PlayerZoneClient__GetLevel_x                               0x6AA850
#define PlayerZoneClient__IsValidTeleport_x                        0x60B460
#define PlayerZoneClient__LegalPlayerRace_x                        0x5734C0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69ECF0
#define EQPlayerManager__GetSpawnByName_x                          0x69EDA0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69EE30

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65D720
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65D7F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65D830
#define KeypressHandler__ClearCommandStateArray_x                  0x65ECF0
#define KeypressHandler__HandleKeyDown_x                           0x65ED10
#define KeypressHandler__HandleKeyUp_x                             0x65EDB0
#define KeypressHandler__SaveKeymapping_x                          0x65F360

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x90B750

// StringTable
#define StringTable__getString_x                                   0x906620

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x685020
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x6831D0
#define PcZoneClient__GetPcSkillLimit_x                            0x688790
#define PcZoneClient__RemovePetEffect_x                            0x688DF0
#define PcZoneClient__HasAlternateAbility_x                        0x682330
#define PcZoneClient__CanEquipItem_x                               0x6829E0
#define PcZoneClient__GetItemByID_x                                0x685AF0
#define PcZoneClient__GetItemByItemClass_x                         0x685C30
#define PcZoneClient__RemoveBuffEffect_x                           0x688EA0
#define PcZoneClient__BandolierSwap_x                              0x683790
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6855C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x60FFB0

// IconCache
#define IconCache__GetIcon_x                                       0x74BD90

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742960
#define CContainerMgr__CloseContainer_x                            0x742C40
#define CContainerMgr__OpenExperimentContainer_x                   0x7437A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x811830

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x6522E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7A7530
#define CLootWnd__RequestLootSlot_x                                0x7A6760

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5B70
#define EQ_Spell__SpellAffects_x                                   0x5A6070
#define EQ_Spell__SpellAffectBase_x                                0x5A5D90
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0B80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0B30
#define EQ_Spell__IsSPAStacking_x                                  0x5A6F80
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A63D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A6F90
#define __IsResEffectSpell_x                                       0x4D0330

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B11F0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x85E0F0
#define CTargetWnd__WndNotification_x                              0x85D880
#define CTargetWnd__RefreshTargetBuffs_x                           0x85DBE0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x85C660

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x862C70
#define CTaskWnd__ConfirmAbandonTask_x                             0x865D40

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x554360
#define CTaskManager__HandleMessage_x                              0x552220
#define CTaskManager__GetTaskStatus_x                              0x554410
#define CTaskManager__GetElementDescription_x                      0x554490

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0750
#define EqSoundManager__PlayScriptMp3_x                            0x5A0950
#define EqSoundManager__SoundAssistPlay_x                          0x6C5A10
#define EqSoundManager__WaveInstancePlay_x                         0x6C4F00

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5441A0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x99C180
#define CTextureAnimation__SetCurCell_x                            0x99BF40

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583AE0
#define CAltAbilityData__GetMercMaxRank_x                          0x583A70
#define CAltAbilityData__GetMaxRank_x                              0x577E70

// CTargetRing
#define CTargetRing__Cast_x                                        0x64FAF0

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x646200
#define CharacterBase__GetItemByGlobalIndex_x                      0x91DD50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x91DDA0
#define CharacterBase__GetItemPossession_x                         0x658B90
#define CharacterBase__GetMemorizedSpell_x                         0x658BB0
#define CharacterBase__IsExpansionFlag_x                           0x5D36E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x727800
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7280C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728170

// messages
#define msg_spell_worn_off_x                                       0x5CB080
#define msg_new_text_x                                             0x5BEE90
#define __msgTokenTextParam_x                                      0x5CD4F0
#define msgTokenText_x                                             0x5CD900

// SpellManager
#define SpellManager__vftable_x                                    0xB2F2F4
#define SpellManager__SpellManager_x                               0x6C9640
#define Spellmanager__LoadTextSpells_x                             0x6C9F40
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9810

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9E70E0

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x916BD0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x916F20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x79F670

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747640
#define CCursorAttachment__AttachToCursor1_x                       0x747680
#define CCursorAttachment__Deactivate_x                            0x748C10

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9ACE30
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9AD590
#define CEQSuiteTextureLoader__GetTexture_x                        0x9AD210

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524340
#define CFindItemWnd__WndNotification_x                            0x525200
#define CFindItemWnd__Update_x                                     0x525DE0
#define CFindItemWnd__PickupSelectedItem_x                         0x523A40

// IString
#define IString__Append_x                                          0x513580

// Camera
#define EverQuest__Cameras_x                                       0xDA5038

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F000
#define LootFiltersManager__GetItemFilterData_x                    0x52E930
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52E960
#define LootFiltersManager__SetItemLootFilter_x                    0x52EB70

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7FE340

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9ECDD0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BFEC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F2E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9220E0
#define CDistillerInfo__Instance_x                                 0x922020

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761F00
#define CGroupWnd__UpdateDisplay_x                                 0x761150

// ItemBase
#define ItemBase__IsLore_x                                         0x8EAC70
#define ItemBase__IsLoreEquipped_x                                 0x8EACE0

#define MultipleItemMoveManager__ProcessMove_x                     0x66EA50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609F20
#define EQPlacedItemManager__GetItemByGuid_x                       0x60A060
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60A0C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4600
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8EE0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x519D60

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504B20
#define FactionManagerClient__HandleFactionMessage_x               0x505340
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505B30
#define FactionManagerClient__GetMaxFaction_x                      0x505B4F
#define FactionManagerClient__GetMinFaction_x                      0x505B00

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511710

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x96E830

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49DEF0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511980

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x582CB0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CD5C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4600

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC270

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D9F60

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE426CC

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DE770

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240
