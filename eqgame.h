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
#define __ExpectedVersionDate                                     "Oct 21 2021"
#define __ExpectedVersionTime                                     "12:04:16"
#define __ActualVersionDate_x                                      0xB51194
#define __ActualVersionTime_x                                      0xB51188
#define __ActualVersionBuild_x                                     0xB4136C

// Memory Protection
#define __MemChecker0_x                                            0x662980
#define __MemChecker1_x                                            0x94EA20
#define __MemChecker2_x                                            0x6DD200
#define __MemChecker3_x                                            0x6DD170
#define __MemChecker4_x                                            0x635C40
#define __EncryptPad0_x                                            0xE50B88

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDABD60
#define __ScreenY_x                                                0xDABD68
#define __ScreenX_x                                                0xDABD6C
#define __ScreenXMax_x                                             0xDABD70
#define __ScreenYMax_x                                             0xDABD74
#define __InChatMode_x                                             0xDABDB4
#define __RunWalkState_x                                           0xDABDB8
#define DI8__Mouse_Copy_x                                          0xDABDCC
#define __MouseLook_x                                              0xDABE4A
#define __NetStatusToggle_x                                        0xDABE4D
#define __pulAutoRun_x                                             0xDABE68
#define __Clicks_x                                                 0xDABE84
#define __RMouseHeldTime_x                                         0xDABEEC
#define __LMouseHeldTime_x                                         0xDABEF0
#define __ZoneType_x                                               0xDAC248
#define __ShiftKeyDown_x                                           0xDAC448
#define __AutoSkillArray_x                                         0xDAC8E8
#define __RangeAttackReady_x                                       0xDACBCC
#define __AttackOnAssist_x                                         0xDACD44
#define __ShowNames_x                                              0xDACD88
#define __PCNames_x                                                0xDACED8
#define __UseTellWindows_x                                         0xDAD070
#define __pulForward_x                                             0xDAD0A8
#define __pulBackward_x                                            0xDAD0AC
#define __pulTurnRight_x                                           0xDAD0B0
#define __pulTurnLeft_x                                            0xDAD0B4
#define __pulStrafeLeft_x                                          0xDAD0B8
#define __pulStrafeRight_x                                         0xDAD0BC
#define __LastTell_x                                               0xDAD928
#define __ServerName_x                                             0xDE21EC
#define __DoAbilityList_x                                          0xDE222C
#define __SocialChangedList_x                                      0xDE2274
#define __Socials_x                                                0xDE22EC
#define __Inviter_x                                                0xE4A688
#define __Attack_x                                                 0xE4A70B
#define __Autofire_x                                               0xE4A70C

// Misc Globals
#define __do_loot_x                                                0x5DFEF0
#define __gfMaxZoomCameraDistance_x                                0xB4900C
#define __gfMaxCameraDistance_x                                    0xB719E8
#define __CurrentSocial_x                                          0xC5C460
#define __BindList_x                                               0xDA1478
#define g_eqCommandStates_x                                        0xDA21E0
#define __CommandList_x                                            0xDA2D68
#define __ScreenMode_x                                             0xEDE0B8
#define __GroupCount_x                                             0xF91DDA
#define __gWorld_x                                                 0xF91FEC
#define __gpbCommandEvent_x                                        0xF920F8
#define __ServerHost_x                                             0xF922C3
#define __Guilds_x                                                 0xF96240
#define __MouseEventTime_x                                         0xF97C6C
#define DI8__Mouse_Check_x                                         0xF9C7A4
#define __heqmain_x                                                0xF9EC38
#define DI8__Mouse_x                                               0xF9EC44
#define __HWnd_x                                                   0xF9EC48
#define __Mouse_x                                                  0xF9ECD0
#define DI8__Main_x                                                0xF9ECE4
#define DI8__Keyboard_x                                            0xF9ECE8
#define __LoginName_x                                              0xF9F3B4
#define __CurrentMapLabel_x                                        0xFAF6E4
#define __TargetAggroHolder_x                                      0xFB2098
#define __GroupAggro_x                                             0xFB20D8
#define __SubscriptionType_x                                       0xFE37D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF925D8
#define instEQZoneInfo_x                                           0xDAC040
#define pinstActiveBanker_x                                        0xF8FCD8
#define pinstActiveCorpse_x                                        0xF8FCD0
#define pinstActiveGMaster_x                                       0xF8FCD4
#define pinstActiveMerchant_x                                      0xF8FCCC
#define pinstAltAdvManager_x                                       0xEDEEE8
#define pinstBandageTarget_x                                       0xF8FCE8
#define pinstCEverQuest_x                                          0xF9EC4C
#define pinstCamActor_x                                            0xEDE0AC
#define pinstCDBStr_x                                              0xEDDC58
#define pinstCDisplay_x                                            0xF8FD54
#define pinstControlledMissile_x                                   0xF8FD2C
#define pinstControlledPlayer_x                                    0xF8FD20
#define pinstCResolutionHandler_x                                  0x161E6A0
#define pinstCSidlManager_x                                        0x161D63C
#define pinstCXWndManager_x                                        0x161D634
#define instDynamicZone_x                                          0xF96118
#define pinstDZMember_x                                            0xF96228
#define pinstDZTimerInfo_x                                         0xF9622C
#define pinstEqLogin_x                                             0xF9ED00
#define instEQMisc_x                                               0xD958D8
#define pinstEQSoundManager_x                                      0xEDF7F8
#define pinstEQSpellStrings_x                                      0xECE8F8
#define instExpeditionLeader_x                                     0xF96162
#define instExpeditionName_x                                       0xF961A2
#define pinstSGraphicsEngine_x                                     0x161E46C
#define pinstGroup_x                                               0xF91DD6
#define pinstImeManager_x                                          0x161D638
#define pinstLocalPC_x                                             0xF8FD44
#define pinstLocalPlayer_x                                         0xF8FCC8
#define pinstMercenaryData_x                                       0xF99764
#define pinstMercenaryStats_x                                      0xFB2164
#define pinstModelPlayer_x                                         0xF8FCE0
#define pinstRenderInterface_x                                     0x161E478
#define pinstSkillMgr_x                                            0xF9B850
#define pinstSpawnManager_x                                        0xF9A328
#define pinstSpellManager_x                                        0xF9BA90
#define pinstSpellSets_x                                           0xE43334
#define pinstStringTable_x                                         0xF8FD50
#define pinstSwitchManager_x                                       0xF8FB78
#define pinstTarget_x                                              0xF8FD1C
#define pinstTargetObject_x                                        0xF8FD3C
#define pinstTargetSwitch_x                                        0xF8FD40
#define pinstTaskMember_x                                          0xD95420
#define pinstTrackTarget_x                                         0xF8FD24
#define pinstTradeTarget_x                                         0xF8FCDC
#define instTributeActive_x                                        0xD958F9
#define pinstViewActor_x                                           0xEDE0A8
#define pinstWorldData_x                                           0xF8FD4C
#define pinstZoneAddr_x                                            0xDAC2E0
#define pinstPlayerPath_x                                          0xF9A3C0
#define pinstTargetIndicator_x                                     0xF9BCF8
#define EQObject_Top_x                                             0xF8FD38

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEDE118
#define pinstCAchievementsWnd_x                                    0xEDDD80
#define pinstCActionsWnd_x                                         0xEDE0A0
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDE0C4
#define pinstCAdvancedLootWnd_x                                    0xEDE0A4
#define pinstCAdventureLeaderboardWnd_x                            0xFA8F08
#define pinstCAdventureRequestWnd_x                                0xFA8FB8
#define pinstCAdventureStatsWnd_x                                  0xFA9068
#define pinstCAggroMeterWnd_x                                      0xEDDE18
#define pinstCAlarmWnd_x                                           0xEDE110
#define pinstCAlertHistoryWnd_x                                    0xEDE084
#define pinstCAlertStackWnd_x                                      0xEDDE50
#define pinstCAlertWnd_x                                           0xEDDE54
#define pinstCAltStorageWnd_x                                      0xFA93C8
#define pinstCAudioTriggersWindow_x                                0xEC0C28
#define pinstCAuraWnd_x                                            0xEDE0EC
#define pinstCAvaZoneWnd_x                                         0xEDDD60
#define pinstCBandolierWnd_x                                       0xEDE0F8
#define pinstCBankWnd_x                                            0xEDE088
#define pinstCBarterMerchantWnd_x                                  0xFAA608
#define pinstCBarterSearchWnd_x                                    0xFAA6B8
#define pinstCBarterWnd_x                                          0xFAA768
#define pinstCBazaarConfirmationWnd_x                              0xEDE124
#define pinstCBazaarSearchWnd_x                                    0xEDDDB4
#define pinstCBazaarWnd_x                                          0xEDDD5C
#define pinstCBlockedBuffWnd_x                                     0xEDDDE4
#define pinstCBlockedPetBuffWnd_x                                  0xEDDDEC
#define pinstCBodyTintWnd_x                                        0xEDDD0C
#define pinstCBookWnd_x                                            0xEDE090
#define pinstCBreathWnd_x                                          0xEDE11C
#define pinstCBuffWindowNORMAL_x                                   0xEDDDD8
#define pinstCBuffWindowSHORT_x                                    0xEDDDDC
#define pinstCBugReportWnd_x                                       0xEDDD98
#define pinstCButtonWnd_x                                          0x161D8A0
#define pinstCCastingWnd_x                                         0xEDDE14
#define pinstCCastSpellWnd_x                                       0xEDDE24
#define pinstCCharacterListWnd_x                                   0xEDDDB8
#define pinstCChatWindowManager_x                                  0xFAB210
#define pinstCClaimWnd_x                                           0xFAB368
#define pinstCColorPickerWnd_x                                     0xEDDDCC
#define pinstCCombatAbilityWnd_x                                   0xEDE0D8
#define pinstCCombatSkillsSelectWnd_x                              0xEDE0DC
#define pinstCCompassWnd_x                                         0xEDE0E8
#define pinstCConfirmationDialog_x                                 0xFB0230
#define pinstCContainerMgr_x                                       0xEDE114
#define pinstCContextMenuManager_x                                 0x161D5F0
#define pinstCCursorAttachment_x                                   0xEDDE0C
#define pinstCDynamicZoneWnd_x                                     0xFAB930
#define pinstCEditLabelWnd_x                                       0xEDDD78
#define pinstCEQMainWnd_x                                          0xFABB78
#define pinstCEventCalendarWnd_x                                   0xEDE0FC
#define pinstCExtendedTargetWnd_x                                  0xEDDE10
#define pinstCPlayerCustomizationWnd_x                             0xEDDDC0
#define pinstCFactionWnd_x                                         0xEDDE20
#define pinstCFellowshipWnd_x                                      0xFABD78
#define pinstCFileSelectionWnd_x                                   0xEDE0E4
#define pinstCFindItemWnd_x                                        0xEDDD14
#define pinstCFindLocationWnd_x                                    0xFABED0
#define pinstCFriendsWnd_x                                         0xEDE0E0
#define pinstCGemsGameWnd_x                                        0xEDE104
#define pinstCGiveWnd_x                                            0xEDDD6C
#define pinstCGroupSearchFiltersWnd_x                              0xEDDDFC
#define pinstCGroupSearchWnd_x                                     0xFAC2C8
#define pinstCGroupWnd_x                                           0xFAC378
#define pinstCGuildBankWnd_x                                       0xFAC428
#define pinstCGuildCreationWnd_x                                   0xFAC4D8
#define pinstCGuildMgmtWnd_x                                       0xFAC588
#define pinstCharacterCreation_x                                   0xEDDE08
#define pinstCHelpWnd_x                                            0xEDE070
#define pinstCHeritageSelectionWnd_x                               0xEDDDC4
#define pinstCHotButtonWnd_x                                       0xFAE6E0
#define pinstCHotButtonWnd1_x                                      0xFAE6E0
#define pinstCHotButtonWnd2_x                                      0xFAE6E4
#define pinstCHotButtonWnd3_x                                      0xFAE6E8
#define pinstCHotButtonWnd4_x                                      0xFAE6EC
#define pinstCIconSelectionWnd_x                                   0xEDDD94
#define pinstCInspectWnd_x                                         0xEDDD88
#define pinstCInventoryWnd_x                                       0xEDE074
#define pinstCInvSlotMgr_x                                         0xEDE100
#define pinstCItemDisplayManager_x                                 0xFAEC38
#define pinstCItemExpTransferWnd_x                                 0xFAED68
#define pinstCItemOverflowWnd_x                                    0xEDDD4C
#define pinstCJournalCatWnd_x                                      0xEDDCFC
#define pinstCJournalNPCWnd_x                                      0xEDE128
#define pinstCJournalTextWnd_x                                     0xEDE128
#define pinstCKeyRingWnd_x                                         0xEDE080
#define pinstCLargeDialogWnd_x                                     0xFB0EB0
#define pinstCLayoutCopyWnd_x                                      0xFAF0B8
#define pinstCLFGuildWnd_x                                         0xFAF168
#define pinstCLoadskinWnd_x                                        0xEDE10C
#define pinstCLootFiltersCopyWnd_x                                 0xEDD168
#define pinstCLootFiltersWnd_x                                     0xEDE12C
#define pinstCLootSettingsWnd_x                                    0xEDDCF8
#define pinstCLootWnd_x                                            0xEDE094
#define pinstCMailAddressBookWnd_x                                 0xEDDDAC
#define pinstCMailCompositionWnd_x                                 0xEDDDA4
#define pinstCMailIgnoreListWnd_x                                  0xEDDDB0
#define pinstCMailWnd_x                                            0xEDDD9C
#define pinstCManageLootWnd_x                                      0xEDF368
#define pinstCMapToolbarWnd_x                                      0xEDDD70
#define pinstCMapViewWnd_x                                         0xEDDD64
#define pinstCMarketplaceWnd_x                                     0xEDDD3C
#define pinstCMerchantWnd_x                                        0xEDDD44
#define pinstCMIZoneSelectWnd_x                                    0xFAF9A0
#define pinstCMusicPlayerWnd_x                                     0xEDE108
#define pinstCNameChangeMercWnd_x                                  0xEDDE38
#define pinstCNameChangePetWnd_x                                   0xEDDE34
#define pinstCNameChangeWnd_x                                      0xEDDD90
#define pinstCNoteWnd_x                                            0xEDDE5C
#define pinstCObjectPreviewWnd_x                                   0xEDDDA8
#define pinstCOptionsWnd_x                                         0xEDDDD4
#define pinstCOverseerWnd_x                                        0xEDDD38
#define pinstCPetInfoWnd_x                                         0xEDE098
#define pinstCPetitionQWnd_x                                       0xEDDDF0
#define pinstCPlayerNotesWnd_x                                     0xEDE0F0
#define pinstCPlayerWnd_x                                          0xEDDD10
#define pinstCPopupWndManager_x                                    0xFB0230
#define pinstCProgressionSelectionWnd_x                            0xFB02E0
#define pinstCPurchaseGroupWnd_x                                   0xEDDD48
#define pinstCPurchaseWnd_x                                        0xEDDD40
#define pinstCPvPLeaderboardWnd_x                                  0xFB0390
#define pinstCPvPStatsWnd_x                                        0xFB0440
#define pinstCQuantityWnd_x                                        0xEDE08C
#define pinstCRaceChangeWnd_x                                      0xEDDDA0
#define pinstCRaidOptionsWnd_x                                     0xEDDE1C
#define pinstCRaidWnd_x                                            0xEDDE28
#define pinstCRealEstateItemsWnd_x                                 0xEDDDC8
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDDE04
#define pinstCRealEstateManageWnd_x                                0xEDDDE8
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDDDF4
#define pinstCRealEstatePlotSearchWnd_x                            0xEDDDF8
#define pinstCRealEstatePurchaseWnd_x                              0xEDDE00
#define pinstCRespawnWnd_x                                         0xEDE0F4
#define pinstCRewardSelectionWnd_x                                 0xFB0B88
#define pinstCSelectorWnd_x                                        0xEDDD54
#define pinstCSendMoneyWnd_x                                       0xEDDD74
#define pinstCServerListWnd_x                                      0xEDE0D4
#define pinstCSkillsSelectWnd_x                                    0xEDE0D0
#define pinstCSkillsWnd_x                                          0xEDE0C8
#define pinstCSocialEditWnd_x                                      0xEDDD8C
#define pinstCSocialWnd_x                                          0xEDE120
#define pinstCSpellBookWnd_x                                       0xEDDE48
#define pinstCStoryWnd_x                                           0xEDDD04
#define pinstCTargetOfTargetWnd_x                                  0xFB21E8
#define pinstCTargetWnd_x                                          0xEDDD84
#define pinstCTaskOverlayWnd_x                                     0xEDDD00
#define pinstCTaskSelectWnd_x                                      0xFB2340
#define pinstCTaskManager_x                                        0xC67268
#define pinstCTaskTemplateSelectWnd_x                              0xFB23F0
#define pinstCTaskWnd_x                                            0xFB24A0
#define pinstCTextEntryWnd_x                                       0xEDE0CC
#define pinstCTimeLeftWnd_x                                        0xEDDDE0
#define pinstCTipWndCONTEXT_x                                      0xFB26A4
#define pinstCTipWndOFDAY_x                                        0xFB26A0
#define pinstCTitleWnd_x                                           0xFB2750
#define pinstCTrackingWnd_x                                        0xEDDD7C
#define pinstCTradeskillWnd_x                                      0xFB28B8
#define pinstCTradeWnd_x                                           0xEDDD50
#define pinstCTrainWnd_x                                           0xEDE09C
#define pinstCTributeBenefitWnd_x                                  0xFB2AB8
#define pinstCTributeMasterWnd_x                                   0xFB2B68
#define pinstCTributeTrophyWnd_x                                   0xFB2C18
#define pinstCVideoModesWnd_x                                      0xEDDD68
#define pinstCVoiceMacroWnd_x                                      0xF9C110
#define pinstCVoteResultsWnd_x                                     0xEDDE30
#define pinstCVoteWnd_x                                            0xEDDE2C
#define pinstCZoneGuideWnd_x                                       0xEDE078
#define pinstCZonePathWnd_x                                        0xEDE07C
#define pinstEQSuiteTextureLoader_x                                0xEAB958
#define pinstItemIconCache_x                                       0xFABB30
#define pinstLootFiltersManager_x                                  0xEDD218
#define pinstRewardSelectionWnd_x                                  0xFB0B88

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DB1D0
#define __CastRay2_x                                               0x5DB460
#define __ConvertItemTags_x                                        0x5F8640
#define __CleanItemTags_x                                          0x47DA50
#define __CreateCascadeMenuItems_x                                 0x56F790
#define __DoesFileExist_x                                          0x9519B0
#define __EQGetTime_x                                              0x94E690
#define __ExecuteCmd_x                                             0x5D3600
#define __FixHeading_x                                             0x9ED530
#define __FlushDxKeyboard_x                                        0x6D84F0
#define __GameLoop_x                                               0x6DBE00
#define __get_bearing_x                                            0x5DAD70
#define __get_melee_range_x                                        0x5DB6A0
#define __GetAnimationCache_x                                      0x74A400
#define __GetGaugeValueFromEQ_x                                    0x85A590
#define __GetLabelFromEQ_x                                         0x85BFA0
#define __GetXTargetType_x                                         0x9EF8A0
#define __HandleMouseWheel_x                                       0x6DD290
#define __HeadingDiff_x                                            0x9ED590
#define __HelpPath_x                                               0xF9792C
#define __ExecuteFrontEnd_x                                        0x6D8CD0
#define __NewUIINI_x                                               0x85A260
#define __ProcessGameEvents_x                                      0x641C10
#define __ProcessKeyboardEvents_x                                  0x6DA440
#define __ProcessMouseEvents_x                                     0x641310
#define __SaveColors_x                                             0x56F670
#define __STMLToText_x                                             0x98B0F0
#define __WndProc_x                                                0x6DAF00
#define CMemoryMappedFile__SetFile_x                               0xADCF70
#define CrashDetected_x                                            0x6DAA00
#define DrawNetStatus_x                                            0x670F00
#define Expansion_HoT_x                                            0xDACD30
#define Teleport_Table_Size_x                                      0xF92180
#define Teleport_Table_x                                           0xF8FD58
#define Util__FastTime_x                                           0x94E250
#define __eq_delete_x                                              0x9F63F3
#define __eq_new_x                                                 0x9F6964
#define __CopyLayout_x                                             0x65DC00
#define __ThrottleFrameRate_x                                      0x62AAF3
#define __ThrottleFrameRateEnd_x                                   0x62AB4F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6E9990
#define CAAWnd__Update_x                                           0x6E8CB0
#define CAAWnd__UpdateSelected_x                                   0x6E6020

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
#define CBankWnd__GetNumBankSlots_x                                0x7060D0
#define CBankWnd__WndNotification_x                                0x705E70

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x710AE0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70B740
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709710

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715210

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x988690
#define CButtonWnd__CButtonWnd_x                                   0x987040
#define CButtonWnd__dCButtonWnd_x                                  0x9872E0
#define CButtonWnd__vftable_x                                      0xB8C4E8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x737AE0
#define CChatWindowManager__InitContextMenu_x                      0x730A20
#define CChatWindowManager__FreeChatWindow_x                       0x7366B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x7377C0
#define CChatWindowManager__CreateChatWindow_x                     0x736CD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFCE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x738440
#define CChatWindow__Clear_x                                       0x739890
#define CChatWindow__WndNotification_x                             0x73A010
#define CChatWindow__AddHistory_x                                  0x7390F0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99E4B0
#define CContextMenu__dCContextMenu_x                              0x99E6E0
#define CContextMenu__AddMenuItem_x                                0x99E6F0
#define CContextMenu__RemoveMenuItem_x                             0x99EA00
#define CContextMenu__RemoveAllMenuItems_x                         0x99EA20
#define CContextMenu__CheckMenuItem_x                              0x99EA80
#define CContextMenu__SetMenuItem_x                                0x99E920
#define CContextMenu__AddSeparator_x                               0x99E880

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99F000
#define CContextMenuManager__RemoveMenu_x                          0x99F070
#define CContextMenuManager__PopupMenu_x                           0x99F130
#define CContextMenuManager__Flush_x                               0x99EFA0
#define CContextMenuManager__GetMenu_x                             0x49D9C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7443B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x928E30
#define CChatService__GetFriendName_x                              0x928E40

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99B4C0
#define CComboWnd__Draw_x                                          0x99A970
#define CComboWnd__GetCurChoice_x                                  0x99B290
#define CComboWnd__GetListRect_x                                   0x99AE10
#define CComboWnd__GetTextRect_x                                   0x99B530
#define CComboWnd__InsertChoice_x                                  0x99AFA0
#define CComboWnd__SetColors_x                                     0x99AF70
#define CComboWnd__SetChoice_x                                     0x99B270
#define CComboWnd__GetItemCount_x                                  0x99B2A0
#define CComboWnd__GetCurChoiceText_x                              0x99B2D0
#define CComboWnd__GetChoiceText_x                                 0x99B2B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99B030

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x741A00
#define CContainerWnd__vftable_x                                   0xB5A424
#define CContainerWnd__SetContainer_x                              0x743260

// CDisplay
#define CDisplay__cameraType_x                                     0xEDDE58
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
#define CEditBaseWnd__SetSel_x                                     0x9C0D30

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A1FA0
#define CEditWnd__EnsureCaretVisible_x                             0x9A4320
#define CEditWnd__GetCaretPt_x                                     0x9A3180
#define CEditWnd__GetCharIndexPt_x                                 0x9A2F30
#define CEditWnd__GetDisplayString_x                               0x9A2DD0
#define CEditWnd__GetHorzOffset_x                                  0x9A14F0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4230
#define CEditWnd__GetSelStartPt_x                                  0x9A31E0
#define CEditWnd__GetSTMLSafeText_x                                0x9A2BE0
#define CEditWnd__PointFromPrintableChar_x                         0x9A3E70
#define CEditWnd__ReplaceSelection_x                               0x9A3A30
#define CEditWnd__SelectableCharFromPoint_x                        0x9A3FD0
#define CEditWnd__SetEditable_x                                    0x9A32B0
#define CEditWnd__SetWindowText_x                                  0x9A2930

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62D2E0
#define CEverQuest__ClickedPlayer_x                                0x61E800
#define CEverQuest__CreateTargetIndicator_x                        0x63EB70
#define CEverQuest__DeleteTargetIndicator_x                        0x63EC00
#define CEverQuest__DoTellWindow_x                                 0x4EFDE0
#define CEverQuest__OutputTextToLog_x                              0x4F00B0
#define CEverQuest__DropHeldItemOnGround_x                         0x6138D0
#define CEverQuest__dsp_chat_x                                     0x4F0480
#define CEverQuest__trimName_x                                     0x63A160
#define CEverQuest__Emote_x                                        0x62D9A0
#define CEverQuest__EnterZone_x                                    0x627640
#define CEverQuest__GetBodyTypeDesc_x                              0x632F00
#define CEverQuest__GetClassDesc_x                                 0x633540
#define CEverQuest__GetClassThreeLetterCode_x                      0x633B40
#define CEverQuest__GetDeityDesc_x                                 0x63D320
#define CEverQuest__GetLangDesc_x                                  0x633D00
#define CEverQuest__GetRaceDesc_x                                  0x633520
#define CEverQuest__InterpretCmd_x                                 0x63D990
#define CEverQuest__LeftClickedOnPlayer_x                          0x617DC0
#define CEverQuest__LMouseUp_x                                     0x615E80
#define CEverQuest__RightClickedOnPlayer_x                         0x6189B0
#define CEverQuest__RMouseUp_x                                     0x617140
#define CEverQuest__SetGameState_x                                 0x613650
#define CEverQuest__UPCNotificationFlush_x                         0x63A080
#define CEverQuest__IssuePetCommand_x                              0x635300
#define CEverQuest__ReportSuccessfulHeal_x                         0x62E7A0
#define CEverQuest__ReportSuccessfulHit_x                          0x62F280

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7553A0
#define CGaugeWnd__CalcLinesFillRect_x                             0x755400
#define CGaugeWnd__Draw_x                                          0x7549B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4900
#define CGuild__GetGuildName_x                                     0x4B3120
#define CGuild__GetGuildIndex_x                                    0x4B3840

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x772840

//CHotButton
#define CHotButton__SetButtonSize_x                                0x652560
#define CHotButton__SetCheck_x                                     0x6521A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x77F9E0
#define CInvSlotMgr__MoveItem_x                                    0x77E5F0
#define CInvSlotMgr__SelectSlot_x                                  0x77FAA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77CE30
#define CInvSlot__SliderComplete_x                                 0x77A190
#define CInvSlot__GetItemBase_x                                    0x779A20
#define CInvSlot__UpdateItem_x                                     0x779C10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7808C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7812E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x854A00
#define CItemDisplayWnd__UpdateStrings_x                           0x799160
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78E110
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78E660
#define CItemDisplayWnd__SetItem_x                                 0x799870
#define CItemDisplayWnd__AboutToShow_x                             0x798D60
#define CItemDisplayWnd__WndNotification_x                         0x79B000
#define CItemDisplayWnd__RequestConvertItem_x                      0x79A6A0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x797C30
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x798B50

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x889FD0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A0740

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x5288D0

// CLabel
#define CLabel__UpdateText_x                                       0x7A7280

// CListWnd
#define CListWnd__CListWnd_x                                       0x96DD10
#define CListWnd__dCListWnd_x                                      0x96E010
#define CListWnd__vftable_x                                        0xB8BDC8
#define CListWnd__AddColumn_x                                      0x972BE0
#define CListWnd__AddColumn1_x                                     0x972D00
#define CListWnd__AddLine_x                                        0x973070
#define CListWnd__AddString_x                                      0x972E70
#define CListWnd__CalculateFirstVisibleLine_x                      0x972990
#define CListWnd__CalculateVSBRange_x                              0x972780
#define CListWnd__ClearSel_x                                       0x973960
#define CListWnd__ClearAllSel_x                                    0x9739B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x974460
#define CListWnd__Compare_x                                        0x971F00
#define CListWnd__Draw_x                                           0x96E1D0
#define CListWnd__DrawColumnSeparators_x                           0x970CF0
#define CListWnd__DrawHeader_x                                     0x971150
#define CListWnd__DrawItem_x                                       0x9717A0
#define CListWnd__DrawLine_x                                       0x970E60
#define CListWnd__DrawSeparator_x                                  0x970D90
#define CListWnd__EnableLine_x                                     0x9705B0
#define CListWnd__EnsureVisible_x                                  0x974380
#define CListWnd__ExtendSel_x                                      0x9738A0
#define CListWnd__GetColumnTooltip_x                               0x970130
#define CListWnd__GetColumnMinWidth_x                              0x9701A0
#define CListWnd__GetColumnWidth_x                                 0x9700B0
#define CListWnd__GetCurSel_x                                      0x96FA60
#define CListWnd__GetItemAtPoint_x                                 0x970830
#define CListWnd__GetItemAtPoint1_x                                0x9708A0
#define CListWnd__GetItemData_x                                    0x96FAE0
#define CListWnd__GetItemHeight_x                                  0x96FE80
#define CListWnd__GetItemIcon_x                                    0x96FC60
#define CListWnd__GetItemRect_x                                    0x9706A0
#define CListWnd__GetItemText_x                                    0x96FB20
#define CListWnd__GetSelList_x                                     0x973A00
#define CListWnd__GetSeparatorRect_x                               0x970B10
#define CListWnd__InsertLine_x                                     0x9734D0
#define CListWnd__RemoveLine_x                                     0x9736F0
#define CListWnd__SetColors_x                                      0x972750
#define CListWnd__SetColumnJustification_x                         0x972480
#define CListWnd__SetColumnLabel_x                                 0x972E10
#define CListWnd__SetColumnWidth_x                                 0x972390
#define CListWnd__SetCurSel_x                                      0x9737F0
#define CListWnd__SetItemColor_x                                   0x974040
#define CListWnd__SetItemData_x                                    0x974000
#define CListWnd__SetItemText_x                                    0x973C20
#define CListWnd__ShiftColumnSeparator_x                           0x972540
#define CListWnd__Sort_x                                           0x9721F0
#define CListWnd__ToggleSel_x                                      0x973820
#define CListWnd__SetColumnsSizable_x                              0x9725E0
#define CListWnd__SetItemWnd_x                                     0x973EC0
#define CListWnd__GetItemWnd_x                                     0x96FCB0
#define CListWnd__SetItemIcon_x                                    0x973CA0
#define CListWnd__CalculateCustomWindowPositions_x                 0x972A90
#define CListWnd__SetVScrollPos_x                                  0x972370

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7BE6A0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B9920
#define MapViewMap__dMapViewMap_x                                  0x7B9A60
#define MapViewMap__vftable_x                                      0xB61858
#define MapViewMap__Clear_x                                        0x7BA370
#define MapViewMap__SetZoom_x                                      0x7C3590
#define MapViewMap__HandleLButtonDown_x                            0x7B9B70
#define MapViewMap__GetWorldCoordinates_x                          0x7BCCE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E1C30
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E2590
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E2C10
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E5ED0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E06B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EC0A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E1880

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F5CE0
#define CPacketScrambler__hton_x                                   0x8F5CD0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x996770
#define CSidlManagerBase__CreatePageWnd_x                          0x995F80
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991480
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x991410
#define CSidlManagerBase__FindAnimation1_x                         0x991700
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x991AD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x991900
#define CSidlManagerBase__CreateLabel_x                            0x84A740
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x994F80
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x995210
#define CSidlManagerBase__CreateXWnd_x                             0x995250

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84AB60
#define CSidlManager__CreateXWnd_x                                 0x84A1D0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98D460
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98D360
#define CSidlScreenWnd__ConvertToRes_x                             0x9BAF80
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98CCE0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98C9D0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98CAA0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98CB70
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98DD00
#define CSidlScreenWnd__EnableIniStorage_x                         0x98E1E0
#define CSidlScreenWnd__GetChildItem_x                             0x98E160
#define CSidlScreenWnd__GetSidlPiece_x                             0x98DEF0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97C860
#define CSidlScreenWnd__Init1_x                                    0x98C4A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98E230
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98EDF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98B8C0
#define CSidlScreenWnd__m_layoutCopy_x                             0x161D4C0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98E970
#define CSidlScreenWnd__StoreIniVis_x                              0x98ECE0
#define CSidlScreenWnd__vftable_x                                  0xB8C794
#define CSidlScreenWnd__WndNotification_x                          0x98DBD0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0260
#define CSkillMgr__GetSkillCap_x                                   0x6C0430
#define CSkillMgr__GetNameToken_x                                  0x6BFA70
#define CSkillMgr__IsActivatedSkill_x                              0x6BFB60
#define CSkillMgr__IsCombatSkill_x                                 0x6BFAD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A00F0
#define CSliderWnd__SetValue_x                                     0x99FF20
#define CSliderWnd__SetNumTicks_x                                  0x99FF80

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x8513E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A9600
#define CStmlWnd__CalculateHSBRange_x                              0x9AA580
#define CStmlWnd__CalculateVSBRange_x                              0x9AA4F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AF3E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0080
#define CStmlWnd__ForceParseNow_x                                  0x9A9B70
#define CStmlWnd__GetNextTagPiece_x                                0x9AF340
#define CStmlWnd__GetVisibleText_x                                 0x9A9B90
#define CStmlWnd__InitializeWindowVariables_x                      0x9AFED0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8CA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A8D10
#define CStmlWnd__SetSTMLText_x                                    0x9A7A80
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B12A0
#define CStmlWnd__UpdateHistoryString_x                            0x9B0280

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A6930
#define CTabWnd__DrawCurrentPage_x                                 0x9A72C0
#define CTabWnd__DrawTab_x                                         0x9A6EB0
#define CTabWnd__GetCurrentPage_x                                  0x9A60A0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6090
#define CTabWnd__GetPageFromTabIndex_x                             0x9A6DF0
#define CTabWnd__GetPageInnerRect_x                                0x9A62D0
#define CTabWnd__GetTabInnerRect_x                                 0x9A6210
#define CTabWnd__GetTabRect_x                                      0x9A60D0
#define CTabWnd__InsertPage_x                                      0x9A64C0
#define CTabWnd__RemovePage_x                                      0x9A6600
#define CTabWnd__SetPage_x                                         0x9A6350
#define CTabWnd__SetPageRect_x                                     0x9A6830
#define CTabWnd__UpdatePage_x                                      0x9A6CA0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A5A90
#define CPageWnd__SetTabText_x                                     0x9A5A30


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC9B0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978E00
#define CTextureFont__DrawWrappedText1_x                           0x978D30
#define CTextureFont__DrawWrappedText2_x                           0x978EF0
#define CTextureFont__GetTextExtent_x                              0x979100

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B7A30

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x9637C0

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x5415E0
#define CXStr__CXStr1_x                                            0x482720
#define CXStr__CXStr3_x                                            0x94A5E0
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94A820
#define CXStr__operator_equal1_x                                   0x94A860
#define CXStr__operator_plus_equal1_x                              0x94B2C0
#define CXStr__SetString_x                                         0x94D160
#define CXStr__operator_char_p_x                                   0x94AD10
#define CXStr__GetChar_x                                           0x94CAC0
#define CXStr__Delete_x                                            0x94C390
#define CXStr__GetUnicode_x                                        0x94CB30
#define CXStr__Insert_x                                            0x94CB90
#define CXStr__FindNext_x                                          0x94C7E0
#define CXStr__gFreeLists_x                                        0xEAB330
#define CXStr__gCXStrAccess_x                                      0x161CD48

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99E110

// CXWnd
#define CXWnd__BringToTop_x                                        0x9801E0
#define CXWnd__ClrFocus_x                                          0x97FB60
#define CXWnd__Destroy_x                                           0x97FC10
#define CXWnd__DoAllDrawing_x                                      0x97BEF0
#define CXWnd__DrawChildren_x                                      0x97BEC0
#define CXWnd__DrawColoredRect_x                                   0x97C440
#define CXWnd__DrawTooltip_x                                       0x97A4D0
#define CXWnd__DrawTooltipAtPoint_x                                0x97A590
#define CXWnd__GetBorderFrame_x                                    0x97C100
#define CXWnd__GetChildItem_x                                      0x9803F0
#define CXWnd__GetChildWndAt_x                                     0x980280
#define CXWnd__GetClientClipRect_x                                 0x97E3F0
#define CXWnd__GetRelativeRect_x                                   0x97E750
#define CXWnd__GetScreenClipRect_x                                 0x97E4C0
#define CXWnd__GetScreenRect_x                                     0x97E690
#define CXWnd__GetTooltipRect_x                                    0x97C490
#define CXWnd__GetWindowTextA_x                                    0x4EFC80
#define CXWnd__IsActive_x                                          0x97CBD0
#define CXWnd__IsDescendantOf_x                                    0x97F0D0
#define CXWnd__IsReallyVisible_x                                   0x97F100
#define CXWnd__IsType_x                                            0x9809E0
#define CXWnd__Minimize_x                                          0x97F800
#define CXWnd__Move_x                                              0x97F160
#define CXWnd__Move1_x                                             0x97F250
#define CXWnd__ProcessTransition_x                                 0x97FCF0
#define CXWnd__Refade_x                                            0x97F500
#define CXWnd__Resize_x                                            0x97F790
#define CXWnd__Right_x                                             0x97FFD0
#define CXWnd__SetFocus_x                                          0x97FB20
#define CXWnd__SetFont_x                                           0x97FB90
#define CXWnd__SetKeyTooltip_x                                     0x9807B0
#define CXWnd__SetMouseOver_x                                      0x97D560
#define CXWnd__SetParent_x                                         0x97EE00
#define CXWnd__StartFade_x                                         0x97EFC0
#define CXWnd__vftable_x                                           0xB8C208
#define CXWnd__CXWnd_x                                             0x9793C0
#define CXWnd__dCXWnd_x                                            0x979AC0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BBFD0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x9831E0
#define CXWndManager__DrawWindows_x                                0x983330
#define CXWndManager__GetKeyboardFlags_x                           0x985C80
#define CXWndManager__HandleKeyboardMsg_x                          0x985870
#define CXWndManager__RemoveWnd_x                                  0x985F50
#define CXWndManager__RemovePendingDeletionWnd_x                   0x986400

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
#define CharacterZoneClient__Max_Endurance_x                       0x6809F0
#define CharacterZoneClient__Max_HP_x                              0x4D9940
#define CharacterZoneClient__Max_Mana_x                            0x6807D0
#define CharacterZoneClient__SpellDuration_x                       0x4C9A60
#define CharacterZoneClient__TotalEffect_x                         0x4CD700
#define CharacterZoneClient__UseSkill_x                            0x4E8400

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x916660

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x698DB0

// PcClient
#define PcClient__PcClient_x                                       0x675DC0
#define PcClient__GetConLevel_x                                    0x678B40

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C01A0
#define CCharacterListWnd__EnterWorld_x                            0x4BFB70
#define CCharacterListWnd__Quit_x                                  0x4BF890
#define CCharacterListWnd__UpdateList_x                            0x4BFD60

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658290
#define EQ_Item__CreateItemTagString_x                             0x8EE9E0
#define EQ_Item__IsStackable_x                                     0x8F3C70
#define EQ_Item__GetImageNum_x                                     0x8F0730
#define EQ_Item__CreateItemClient_x                                0x657210
#define EQ_Item__GetItemValue_x                                    0x8F1980
#define EQ_Item__ValueSellMerchant_x                               0x8F59F0
#define EQ_Item__IsKeyRingItem_x                                   0x8F3420
#define EQ_Item__CanGemFitInSlot_x                                 0x8EE1B0
#define EQ_Item__CanGoInBag_x                                      0x6583B0
#define EQ_Item__IsEmpty_x                                         0x8F2DF0
#define EQ_Item__GetMaxItemCount_x                                 0x8F1D90
#define EQ_Item__GetHeldItem_x                                     0x8F05E0
#define ItemClient__dItemClient_x                                  0x657160

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5794E0
#define EQ_LoadingS__Array_x                                       0xD99D30

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8FFA80
#define EQ_PC__GetCombatAbility_x                                  0x900000
#define EQ_PC__GetCombatAbilityTimer_x                             0x900070
#define EQ_PC__GetItemRecastTimer_x                                0x683B60
#define EQ_PC__HasLoreItem_x                                       0x679490
#define EQ_PC__AlertInventoryChanged_x                             0x678400
#define EQ_PC__GetPcZoneClient_x                                   0x6A94B0
#define EQ_PC__RemoveMyAffect_x                                    0x6873C0
#define EQ_PC__GetKeyRingItems_x                                   0x900B60
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9006C0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x900D40

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D81E0
#define EQItemList__add_object_x                                   0x6087B0
#define EQItemList__add_item_x                                     0x5D87C0
#define EQItemList__delete_item_x                                  0x5D8810
#define EQItemList__FreeItemList_x                                 0x5D8720

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554570

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69A7E0
#define EQPlayer__dEQPlayer_x                                      0x68CF20
#define EQPlayer__DoAttack_x                                       0x6A31E0
#define EQPlayer__EQPlayer_x                                       0x68D770
#define EQPlayer__SetNameSpriteState_x                             0x691D20
#define EQPlayer__SetNameSpriteTint_x                              0x692BF0
#define PlayerBase__HasProperty_j_x                                0x9EB8F0
#define EQPlayer__IsTargetable_x                                   0x9EBE50
#define EQPlayer__CanSee_x                                         0x9EBC40
#define EQPlayer__CanSee1_x                                        0x9EBD10
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EB9B0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A6FA0
#define PlayerZoneClient__GetLevel_x                               0x6A94F0
#define PlayerZoneClient__IsValidTeleport_x                        0x609C80
#define PlayerZoneClient__LegalPlayerRace_x                        0x571470

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69D990
#define EQPlayerManager__GetSpawnByName_x                          0x69DA40
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DAD0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65BBC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BC90
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65BCD0
#define KeypressHandler__ClearCommandStateArray_x                  0x65D190
#define KeypressHandler__HandleKeyDown_x                           0x65D1B0
#define KeypressHandler__HandleKeyUp_x                             0x65D250
#define KeypressHandler__SaveKeymapping_x                          0x65D800

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9144F0

// StringTable
#define StringTable__getString_x                                   0x90F240

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x683560
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x681720
#define PcZoneClient__GetPcSkillLimit_x                            0x687010
#define PcZoneClient__RemovePetEffect_x                            0x687670
#define PcZoneClient__HasAlternateAbility_x                        0x680630
#define PcZoneClient__CanEquipItem_x                               0x680CF0
#define PcZoneClient__GetItemByID_x                                0x684090
#define PcZoneClient__RemoveBuffEffect_x                           0x687720
#define PcZoneClient__BandolierSwap_x                              0x681CD0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683B00

// Doors
#define EQSwitch__UseSwitch_x                                      0x60E8A0

// IconCache
#define IconCache__GetIcon_x                                       0x749DA0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7408D0
#define CContainerMgr__CloseContainer_x                            0x740BF0
#define CContainerMgr__OpenExperimentContainer_x                   0x741750

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x819AA0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650970

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7AF5A0
#define CLootWnd__RequestLootSlot_x                                0x7AE7D0

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
#define CTargetWnd__GetBuffCaster_x                                0x866760
#define CTargetWnd__WndNotification_x                              0x865F00
#define CTargetWnd__RefreshTargetBuffs_x                           0x866260
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x864CE0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86B2E0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86E3B0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552130
#define CTaskManager__HandleMessage_x                              0x550000
#define CTaskManager__GetTaskStatus_x                              0x5521E0
#define CTaskManager__GetElementDescription_x                      0x552260

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E210
#define EqSoundManager__PlayScriptMp3_x                            0x59E410
#define EqSoundManager__SoundAssistPlay_x                          0x6C4720
#define EqSoundManager__WaveInstancePlay_x                         0x6C3C10

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541290

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A50F0
#define CTextureAnimation__SetCurCell_x                            0x9A4EB0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581AB0
#define CAltAbilityData__GetMercMaxRank_x                          0x581A40

// CTargetRing
#define CTargetRing__Cast_x                                        0x64E180

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x6448D0
#define CharacterBase__GetItemByGlobalIndex_x                      0x926B40
#define CharacterBase__GetItemByGlobalIndex1_x                     0x926B90
#define CharacterBase__GetMemorizedSpell_x                         0x657060
#define CharacterBase__IsExpansionFlag_x                           0x5D1E50

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x7257C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726080
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726130

// messages
#define msg_spell_worn_off_x                                       0x5C96C0
#define msg_new_text_x                                             0x5BD110
#define __msgTokenTextParam_x                                      0x5CBB20
#define msgTokenText_x                                             0x5CBF30

// SpellManager
#define SpellManager__vftable_x                                    0xB38520
#define SpellManager__SpellManager_x                               0x6C8340
#define Spellmanager__LoadTextSpells_x                             0x6C8C50
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8510

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F0150

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91FA50
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x91FDA0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A76F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x745650
#define CCursorAttachment__AttachToCursor1_x                       0x745690
#define CCursorAttachment__Deactivate_x                            0x746C20

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B5EA0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B6600
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B6280

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5220F0
#define CFindItemWnd__WndNotification_x                            0x522FB0
#define CFindItemWnd__Update_x                                     0x523BD0
#define CFindItemWnd__PickupSelectedItem_x                         0x521790

// IString
#define IString__Append_x                                          0x557F80

// Camera
#define EverQuest__Cameras_x                                       0xDAD07C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CD70
#define LootFiltersManager__GetItemFilterData_x                    0x52C6B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C6E0
#define LootFiltersManager__SetItemLootFilter_x                    0x52C8F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8064B0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F5E10
#define CResolutionHandler__GetWindowedStyle_x                     0x6BEB70

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73D250

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92A800
#define CDistillerInfo__Instance_x                                 0x92A740

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x75FFA0
#define CGroupWnd__UpdateDisplay_x                                 0x75F200

// ItemBase
#define ItemBase__IsLore_x                                         0x8F34C0
#define ItemBase__IsLoreEquipped_x                                 0x8F3540

#define MultipleItemMoveManager__ProcessMove_x                     0x66CDC0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608710
#define EQPlacedItemManager__GetItemByGuid_x                       0x608850
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6088B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3300

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
#define ArrayClass__DeleteElement_x                                0x977A70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F6A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580C90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x5816B0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CC2D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3300

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC770

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D86C0

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4A710

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DCE80

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D210

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DDE00

// AchievementManager
#define AchievementManager__Instance_x                             0x47E360

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
