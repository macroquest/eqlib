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

//
// eqgame.exe offsets
//

#define __ClientDate                                               20250911u
#define __ExpectedVersionDate                                     "Sep 11 2025"
#define __ExpectedVersionTime                                     "11:54:10"
#define __ActualVersionDate_x                                      0x140964B00
#define __ActualVersionTime_x                                      0x140964AF0
#define __ActualVersionBuild_x                                     0x1408FA5E0

// Memory Protection
#define __MemChecker0_x                                            0x1402C1090
#define __MemChecker1_x                                            0x1405896F0
#define __MemChecker4_x                                            0x14028E770
#define __EncryptPad0_x                                            0x140D34EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6D8E0
#define instEQZoneInfo_x                                           0x140E6DAD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402226F0
#define __gfMaxZoomCameraDistance_x                                0x1408FB858
#define __gfMaxCameraDistance_x                                    0x140AA3064
#define __CurrentSocial_x                                          0x140BF0950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D2C720
#define g_eqCommandStates_x                                        0x140D2D790
#define __CommandList_x                                            0x140D2D9D0
#define __ScreenMode_x                                             0x140DB51F4
#define __gWorld_x                                                 0x140E65DA8
#define __gpbCommandEvent_x                                        0x140E66300
#define __ServerHost_x                                             0x140E664F8
#define __Guilds_x                                                 0x140E6C490
#define __MemCheckBitmask_x                                        0x140E6DE1F
#define __MemCheckActive_x                                         0x140E6F525
#define __MouseEventTime_x                                         0x140EE2E90
#define DI8__MouseState_x                                          0x140EE70C8
#define __heqmain_x                                                0x140EE9568
#define DI8__Mouse_x                                               0x140EE7018
#define __HWnd_x                                                   0x140EE70A0
#define __Mouse_x                                                  0x140EE6FD4
#define DI8__Keyboard_x                                            0x140EE6FF0
#define __LoginName_x                                              0x140EE9C4C
#define __CurrentMapLabel_x                                        0x140EFD760
#define __LabelCache_x                                             0x140EFE330
#define __ChatFilterDefs_x                                         0x140A3D7E0
#define Teleport_Table_Size_x                                      0x140E66390
#define Teleport_Table_x                                           0x140E66820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E68820
#define pinstActiveBanker_x                                        0x140E66248
#define pinstActiveCorpse_x                                        0x140E66238
#define pinstActiveGMaster_x                                       0x140E66240
#define pinstActiveMerchant_x                                      0x140E66230
#define pinstAltAdvManager_x                                       0x140DB6028
#define pinstCEverQuest_x                                          0x140EE7010
#define pinstCamActor_x                                            0x140DB51E0
#define pinstCDBStr_x                                              0x140DB4DE0
#define pinstCDisplay_x                                            0x140E65D60
#define pinstControlledPlayer_x                                    0x140E662D8
#define pinstCResolutionHandler_x                                  0x140F0EB68
#define pinstCSidlManager_x                                        0x140F0F8D0
#define pinstCXWndManager_x                                        0x140F0F8C8
#define instDynamicZone_x                                          0x140E6C350 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6C39E
#define instExpeditionName_x                                       0x140E6C3DE
#define pinstDZMember_x                                            0x140E6C468
#define pinstDZTimerInfo_x                                         0x140E6C470
#define pinstEqLogin_x                                             0x140EE9590
#define instTribute_x                                              0x140D27D60
#define pinstDeviceInputProxy_x                                    0x140E6D93C
#define pinstEQSoundManager_x                                      0x140DB63B0
#define pinstEQSpellStrings_x                                      0x140D99970
#define pinstSGraphicsEngine_x                                     0x140F0E8F8
#define pinstLocalPC_x                                             0x140E65D90
#define pinstLocalPlayer_x                                         0x140E66228
#define pinstCMercenaryClientManager_x                             0x140EE4778
#define pinstModelPlayer_x                                         0x140E66258
#define pinstRenderInterface_x                                     0x140F0E910
#define pinstSkillMgr_x                                            0x140EE6418
#define pinstSpawnManager_x                                        0x140EE4B40
#define pinstSpellManager_x                                        0x140EE6480
#define pinstStringTable_x                                         0x140E65D98
#define pinstSwitchManager_x                                       0x140E65CE0
#define pinstTarget_x                                              0x140E662D0
#define pinstTaskMember_x                                          0x140D27D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E66250
#define instTributeActive_x                                        0x140D27D89
#define pinstViewActor_x                                           0x140DB51D8
#define pinstWorldData_x                                           0x140E663E8
#define pinstPlayerPath_x                                          0x140EE4B68
#define pinstTargetIndicator_x                                     0x140EE6530
#define EQObject_Top_x                                             0x140E66308

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EFA8C0
#define pinstCContainerMgr_x                                       0x140DB5210
#define pinstCContextMenuManager_x                                 0x140F0F5B0
#define pinstCInvSlotMgr_x                                         0x140DB51C8
#define pinstCItemDisplayManager_x                                 0x140EFD330
#define pinstCPopupWndManager_x                                    0x140EFDBC0
#define pinstCSpellDisplayMgr_x                                    0x140EFE210
#define pinstCTaskManager_x                                        0x140BF0C90
#define pinstEQSuiteTextureLoader_x                                0x140D3E5B0
#define pinstItemIconCache_x                                       0x140EFAC20
#define pinstLootFiltersManager_x                                  0x140DB4828
#define pinstGFViewListener_x                                      0x140F0ED88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024C400
#define __CastRay_x                                                0x140244690
#define __CastRay2_x                                               0x140244390
#define __compress_block_x                                         0x14053EAB0
#define __ConvertItemTags_x                                        0x140244AF0
#define __CleanItemTags_x                                          0x14008A7E0
#define __CreateCascadeMenuItems_x                                 0x14018E3E0
#define __decompress_block_x                                       0x140584F00
#define __DoesFileExist_x                                          0x14058D5A0
#define __EQGetTime_x                                              0x140589CA0
#define __ExecuteCmd_x                                             0x140219EF0
#define __FixHeading_x                                             0x1406446E0
#define __FlushDxKeyboard_x                                        0x140345240
#define __get_bearing_x                                            0x14024E630
#define __get_melee_range_x                                        0x14024E720
#define __GetAnimationCache_x                                      0x1403C6460
#define __GetGaugeValueFromEQ_x                                    0x1404FE5A0
#define __GetLabelFromEQ_x                                         0x1404FFBA0
#define __GetXTargetType_x                                         0x1406459C0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140644760
#define __HelpPath_x                                               0x140EE2D58   // Why?
#define __NewUIINI_x                                               0x14050B5F0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028ED80
#define __ProcessGameEvents_x                                      0x1402838C0
#define __ProcessKeyboardEvents_x                                  0x140346990
#define __ProcessMouseEvents_x                                     0x140284FA0
#define __SaveColors_x                                             0x14019E410
#define __STMLToText_x                                             0x14059D040
#define __WndProc_x                                                0x1403439E0
#define CMemoryMappedFile__SetFile_x                               0x1407F14F0
#define DrawNetStatus_x                                            0x1402CF750
#define Util__FastTime_x                                           0x1405891D0
#define __eq_delete_x                                              0x1406BD538
#define __eq_new_x                                                 0x1406BD790
#define __CopyLayout_x                                             0x1402BD490
#define __ThrottleFrameRate_x                                      0x140272F67
#define __ThrottleFrameRateEnd_x                                   0x140272FC7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140356460
#define CAAWnd__Update_x                                           0x140356760
#define CAAWnd__UpdateSelected_x                                   0x140357960

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACDB0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5790
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408476C8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD6E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A9670
#define AltAdvManager__IsAbilityReady_x                            0x1401A9B00
#define AltAdvManager__GetAAById_x                                 0x1401A8F40
#define AltAdvManager__CanTrainAbility_x                           0x1401A8D30
#define AltAdvManager__CanSeeAbility_x                             0x1401A89F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3830
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4690
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D48E0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9120
#define CharacterZoneClient__CanUseItem_x                          0x1400E96E0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D52B0
#define CharacterZoneClient__CastSpell_x                           0x1400D5350
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4F20
#define CharacterZoneClient__Cur_HP_x                              0x1400EAE00
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAFC0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D86C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1640
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFEE0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9B60
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8A20
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F31F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F20D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9CE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA010
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CBA10
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2810
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EAA70
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3480
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9D60
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4200
#define CharacterZoneClient__GetModCap_x                           0x1400FB690
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9FF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA1C0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CEBA0
#define CharacterZoneClient__HasSkill_x                            0x1400F71D0
#define CharacterZoneClient__HitBySpell_x                          0x1400DAC50
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE5C0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB170
#define CharacterZoneClient__Max_Endurance_x                       0x1402EB5A0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB4C0
#define CharacterZoneClient__Max_Mana_x                            0x1402EB7C0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB920
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1A70
#define CharacterZoneClient__SpellDuration_x                       0x1400E27A0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3B00
#define CharacterZoneClient__UseSkill_x                            0x140100E60


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140374F50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037F300

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037B170
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037ED80

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140381A70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AC24A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A4900
#define CChatWindowManager__InitContextMenu_x                      0x1403A4A90
#define CChatWindowManager__FreeChatWindow_x                       0x1403A3960
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AC9F0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A3390

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401093C0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ADA40
#define CChatWindow__Clear_x                                       0x1403AEA00
#define CChatWindow__WndNotification_x                             0x1403AFBF0
#define CChatWindow__AddHistory_x                                  0x1403AE500

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405CA8A0
#define CContextMenu__RemoveMenuItem_x                             0x1405CAC90
#define CContextMenu__RemoveAllMenuItems_x                         0x1405CAC60
#define CContextMenu__CheckMenuItem_x                              0x1405CAAD0
#define CContextMenu__SetMenuItem_x                                0x1405CACB0
#define CContextMenu__AddSeparator_x                               0x1405CAA10

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405BC760
#define CContextMenuManager__RemoveMenu_x                          0x1405BCD40
#define CContextMenuManager__PopupMenu_x                           0x1405BCA80
#define CContextMenuManager__Flush_x                               0x1405BC7E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BDFF0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140697550
#define CChatService__GetFriendName_x                              0x140697560

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AD650
#define CComboWnd__Draw_x                                          0x1405AD750
#define CComboWnd__GetCurChoice_x                                  0x1405ADA20  // unused
#define CComboWnd__GetListRect_x                                   0x1405ADAC0
#define CComboWnd__InsertChoice_x                                  0x1405ADE00
#define CComboWnd__SetColors_x                                     0x1405AE190
#define CComboWnd__SetChoice_x                                     0x1405AE150
#define CComboWnd__GetItemCount_x                                  0x1405ADAB0
#define CComboWnd__GetCurChoiceText_x                              0x1405ADA60  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AD9F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405ADEC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BBD20
#define CContainerWnd__SetContainer_x                              0x1404141A0
#define CContainerWnd__vftable_x                                   0x1409D8FC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB4F9C
#define CDisplay__ZoneMainUI_x                                     0x1405E49F0
#define CDisplay__PreZoneMainUI_x                                  0x14019B330
#define CDisplay__CleanGameUI_x                                    0x14018D4A0
#define CDisplay__GetClickedActor_x                                0x140191660
#define CDisplay__GetUserDefinedColor_x                            0x1401922D0
#define CDisplay__InitCharSelectUI_x                               0x140192580
#define CDisplay__ReloadUI_x                                       0x14019D630
#define CDisplay__RestartUI_x                                      0x1401FEBD0
#define CDisplay__WriteTextHD2_x                                   0x1401A4620
#define CDisplay__TrueDistance_x                                   0x1401A42D0
#define CDisplay__SetViewActor_x                                   0x1401A0B40
#define CDisplay__GetFloorHeight_x                                 0x1401918C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3DC0
#define CDisplay__RealRender_World_x                               0x14019CA00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EEC20
#define CEditWnd__DrawCaret_x                                      0x1405E06D0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E0B90
#define CEditWnd__GetCaretPt_x                                     0x1405E0E10  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E0E50
#define CEditWnd__GetDisplayString_x                               0x1405E10C0
#define CEditWnd__GetHorzOffset_x                                  0x1405E1300
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E1450
#define CEditWnd__GetSelStartPt_x                                  0x1405E1730  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E1580
#define CEditWnd__PointFromPrintableChar_x                         0x1405E22E0
#define CEditWnd__ReplaceSelection_x                               0x1405E2690
#define CEditWnd__SelectableCharFromPoint_x                        0x1405E2B30
#define CEditWnd__SetEditable_x                                    0x1405E2DC0
#define CEditWnd__SetWindowText_x                                  0x1405E2DF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140274080
#define CEverQuest__ClickedPlayer_x                                0x140268100
#define CEverQuest__CreateTargetIndicator_x                        0x1402689C0
#define CEverQuest__DoTellWindow_x                                 0x1401090D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401099A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140275A70
#define CEverQuest__dsp_chat_x                                     0x140108B10 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A0C90
#define CEverQuest__Emote_x                                        0x140276460
#define CEverQuest__GetBodyTypeDesc_x                              0x140277240
#define CEverQuest__GetClassDesc_x                                 0x1402772A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140277670
#define CEverQuest__GetDeityDesc_x                                 0x140277920
#define CEverQuest__GetLangDesc_x                                  0x140277D50
#define CEverQuest__GetRaceDesc_x                                  0x1402780F0
#define CEverQuest__InterpretCmd_x                                 0x140279A80
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028EDF0
#define CEverQuest__LMouseUp_x                                     0x14027B4F0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028C470
#define CEverQuest__RMouseUp_x                                     0x140285B30
#define CEverQuest__SetGameState_x                                 0x140291D60
#define CEverQuest__UPCNotificationFlush_x                         0x1402976D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027B150
#define CEverQuest__ReportSuccessfulHeal_x                         0x140286F00
#define CEverQuest__ReportSuccessfulHit_x                          0x140287D20

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D13D0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C38D0
#define CGuild__GetGuildName_x                                     0x1400C3910

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F4820

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B2E40
#define CHotButton__SetCheck_x                                     0x1402B3110

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14040CEB0
#define CInvSlotMgr__MoveItem_x                                    0x14040D090
#define CInvSlotMgr__SelectSlot_x                                  0x14040EAC0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040A0A0
#define CInvSlot__SliderComplete_x                                 0x14040B5F0
#define CInvSlot__GetItemBase_x                                    0x140405A20
#define CInvSlot__UpdateItem_x                                     0x14040BAB0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040FE50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404314E0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404340D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042DCC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042F620
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404308F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404FB030
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404FCDC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140537E10

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14042A390

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401543F0

// CLabel
#define CLabel__UpdateText_x                                       0x14043B4D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B0FD0
#define CListWnd__dCListWnd_x                                      0x1405B1420
#define CListWnd__vftable_x                                        0x140AC05F0
#define CListWnd__AddColumn_x                                      0x1405B1AC0
#define CListWnd__AddColumn1_x                                     0x1405B1B60
#define CListWnd__AddLine_x                                        0x1405B1CC0
#define CListWnd__AddString_x                                      0x1405B2250
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405B27C0
#define CListWnd__CalculateVSBRange_x                              0x1405B2AA0
#define CListWnd__ClearSel_x                                       0x1405B2C50
#define CListWnd__ClearAllSel_x                                    0x1405B2BF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405B2CB0
#define CListWnd__Compare_x                                        0x1405B2E70
#define CListWnd__Draw_x                                           0x1405B3340
#define CListWnd__DrawColumnSeparators_x                           0x1405B3EF0
#define CListWnd__DrawHeader_x                                     0x1405B3FB0
#define CListWnd__DrawItem_x                                       0x1405B4690
#define CListWnd__DrawLine_x                                       0x1405B5010
#define CListWnd__DrawSeparator_x                                  0x1405B54D0
#define CListWnd__EnableLine_x                                     0x1405B58F0
#define CListWnd__EnsureVisible_x                                  0x1405B5950
#define CListWnd__ExtendSel_x                                      0x1405B5A50
#define CListWnd__GetColumnMinWidth_x                              0x1405B5DE0
#define CListWnd__GetColumnWidth_x                                 0x1405B5E60
#define CListWnd__GetCurSel_x                                      0x1405B5F60
#define CListWnd__GetItemData_x                                    0x1405B62E0
#define CListWnd__GetItemHeight_x                                  0x1405B6320
#define CListWnd__GetItemRect_x                                    0x1405B6540
#define CListWnd__GetItemText_x                                    0x1405B67E0
#define CListWnd__GetSelList_x                                     0x1405B6A30
#define CListWnd__GetSeparatorRect_x                               0x1405B6C20
#define CListWnd__InsertLine_x                                     0x1405B8080
#define CListWnd__RemoveLine_x                                     0x1405B86F0
#define CListWnd__SetColors_x                                      0x1405B8AB0
#define CListWnd__SetColumnJustification_x                         0x1405B8AD0
#define CListWnd__SetColumnLabel_x                                 0x1405B8B50
#define CListWnd__SetColumnWidth_x                                 0x1405B8CF0
#define CListWnd__SetCurSel_x                                      0x1405B8DC0
#define CListWnd__SetItemColor_x                                   0x1405B9030
#define CListWnd__SetItemData_x                                    0x1405B90D0
#define CListWnd__SetItemText_x                                    0x1405B9310
#define CListWnd__Sort_x                                           0x1405B9720
#define CListWnd__ToggleSel_x                                      0x1405B9890
#define CListWnd__SetColumnsSizable_x                              0x1405B8D40
#define CListWnd__SetItemWnd_x                                     0x1405B9440
#define CListWnd__GetItemWnd_x                                     0x1405B69C0
#define CListWnd__SetItemIcon_x                                    0x1405B9110
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405B2590
#define CListWnd__SetVScrollPos_x                                  0x1405B9680

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044E7E0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A26210
#define MapViewMap__Clear_x                                        0x140450360
#define MapViewMap__SetZoom_x                                      0x1404569D0
#define MapViewMap__HandleLButtonDown_x                            0x1404534F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140478120  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047E760
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047EF00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140482750
#define CMerchantWnd__SelectBuySellSlot_x                          0x140481AA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140486A00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140672710
#define CPacketScrambler__hton_x                                   0x140672700

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D9F90
#define CSidlManagerBase__FindAnimation1_x                         0x1405D9ED0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405DA5C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405DA370
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D92C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D9250
#define CSidlManagerBase__CreateXWnd_x                             0x1405D8890

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EE040
#define CSidlManager__CreateXWnd_x                                 0x1404EE200

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059EB30
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059EC60
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E9160 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059EDE0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059E260
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059E330
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059E540
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059F4D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059F700
#define CSidlScreenWnd__GetChildItem_x                             0x14059F8A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059FAF0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A9BC0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059FE60
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A01D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A0AA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A14A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0EC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A1B40
#define CSidlScreenWnd__StoreIniVis_x                              0x1405A2330
#define CSidlScreenWnd__vftable_x                                  0x140ABF878
#define CSidlScreenWnd__WndNotification_x                          0x1405A2380

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032E150 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032E5F0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032E520
#define CSkillMgr__IsActivatedSkill_x                              0x14032E9A0
#define CSkillMgr__IsCombatSkill_x                                 0x14032E9E0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032E910
#define CSkillMgr__GetSkillLastUsed_x                              0x14032E570

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405BA210
#define CSliderWnd__SetValue_x                                     0x1405BAA20
#define CSliderWnd__SetNumTicks_x                                  0x1405BA8A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F4780

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BF1C0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A95A0
#define CStmlWnd__CalculateVSBRange_x                              0x1405C0060
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C0B60
#define CStmlWnd__ForceParseNow_x                                  0x1405C0C00
#define CStmlWnd__GetVisibleText_x                                 0x1405C12D0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C3030
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C3070
#define CStmlWnd__SetSTMLText_x                                    0x1405CA040
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405CA1F0
#define CStmlWnd__UpdateHistoryString_x                            0x1405CA580

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405BADF0
#define CTabWnd__DrawCurrentPage_x                                 0x1405BAE90
#define CTabWnd__DrawTab_x                                         0x1405BB260
#define CTabWnd__GetTabRect_x                                      0x1405BB8D0
#define CTabWnd__InsertPage_x                                      0x1405BBBA0
#define CTabWnd__RemovePage_x                                      0x1405BBE30
#define CTabWnd__SetPage_x                                         0x1405BBF90
#define CTabWnd__UpdatePage_x                                      0x1405BC290

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405E3250
#define CPageWnd__SetTabText_x                                     0x1405E32C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BCEA0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD2B0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D1990
#define CTextureFont__DrawWrappedText1_x                           0x1405D18A0
#define CTextureFont__DrawWrappedText2_x                           0x1405D1AC0
#define CTextureFont__GetTextExtent_x                              0x1405D1E70
#define CTextureFont__GetHeight_x                                  0x1405D1E30

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E78C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14059B730

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3DF20
#define CXStr__gCXStrAccess_x                                      0x140F0E788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A4C10
#define CXWnd__ClrFocus_x                                          0x1405A4F00
#define CXWnd__Destroy_x                                           0x1405A5080
#define CXWnd__DoAllDrawing_x                                      0x1405A5190
#define CXWnd__DrawColoredRect_x                                   0x1405A5960
#define CXWnd__DrawTooltip_x                                       0x1405A6FD0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A7080
#define CXWnd__GetChildItem_x                                      0x1405A7980
#define CXWnd__GetChildWndAt_x                                     0x1405A7A40
#define CXWnd__GetClientRect_x                                     0x1405A7CE0
#define CXWnd__GetClientClipRect_x                                 0x1405A7BB0
#define CXWnd__GetRelativeRect_x                                   0x1405A96B0
#define CXWnd__GetScreenClipRect_x                                 0x1405A97C0
#define CXWnd__GetScreenRect_x                                     0x1405A9940
#define CXWnd__GetTooltipRect_x                                    0x1405A9AC0
#define CXWnd__IsActive_x                                          0x1405AA080
#define CXWnd__IsDescendantOf_x                                    0x1405AA0B0
#define CXWnd__IsReallyVisible_x                                   0x1405AA120
#define CXWnd__IsType_x                                            0x1405AA170
#define CXWnd__Minimize_x                                          0x1405AA270
#define CXWnd__ProcessTransition_x                                 0x1405AB160
#define CXWnd__Resize_x                                            0x1405AB280
#define CXWnd__Right_x                                             0x1405AB320
#define CXWnd__SetFocus_x                                          0x1405AB6E0
#define CXWnd__SetFont_x                                           0x1405AB730
#define CXWnd__SetKeyTooltip_x                                     0x1405AB840
#define CXWnd__SetMouseOver_x                                      0x1405AB980
#define CXWnd__SetParent_x                                         0x1405ABA00
#define CXWnd__StartFade_x                                         0x1405ABE40
#define CXWnd__vftable_x                                           0x140ABFE50
#define CXWnd__CXWnd_x                                             0x1405A37A0
#define CXWnd__dCXWnd_x                                            0x1405A40F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EE3A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405CBE60
#define CXWndManager__DrawCursor_x                                 0x1405CC140
#define CXWndManager__DrawWindows_x                                0x1405CC3A0
#define CXWndManager__GetKeyboardFlags_x                           0x1405CC9F0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405CCA30
#define CXWndManager__RemoveWnd_x                                  0x1405D0060

// CDBStr
#define CDBStr__GetString_x                                        0x14018B660

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14067C550

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1330
#define CCharacterListWnd__EnterWorld_x                            0x1400D0340
#define CCharacterListWnd__Quit_x                                  0x1400D1310
#define CCharacterListWnd__UpdateList_x                            0x1400D2190

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14064A7A0
#define ItemBase__CreateItemTagString_x                            0x14064B220
#define ItemBase__GetImageNum_x                                    0x14064D7E0
#define ItemBase__GetItemValue_x                                   0x14064F280
#define ItemBase__IsEmpty_x                                        0x140650F20
#define ItemBase__IsKeyRingItem_x                                  0x140651660
#define ItemBase__ValueSellMerchant_x                              0x1406558C0
#define ItemClient__CanDrop_x                                      0x1402B5730
#define ItemClient__CanGoInBag_x                                   0x1402B5860
#define ItemClient__CreateItemClient_x                             0x1402B5AE0
#define ItemClient__dItemClient_x                                  0x1402B55A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AB020
#define EQ_LoadingS__Array_x                                       0x140D2A230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140661660
#define PcBase__GetCombatAbility_x                                 0x140661D50
#define PcBase__GetCombatAbilityTimer_x                            0x140661DF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140662590
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406630D0
#define PcClient__AlertInventoryChanged_x                          0x1402D7990
#define PcClient__GetConLevel_x                                    0x1402D7FA0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DA720
#define PcClient__HasLoreItem_x                                    0x1402DB7D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E88E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EC6E0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021E630  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021E7E0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021E940  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021E880  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402594E0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185E90

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406372D0
#define PlayerBase__CanSee1_x                                      0x1406373A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140637880
#define PlayerBase__HasProperty_x                                  0x140637A50
#define PlayerBase__IsTargetable_x                                 0x140637B10
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FA280
#define PlayerClient__GetPcClient_x                                0x1402FCDB0
#define PlayerClient__PlayerClient_x                               0x1402F25D0
#define PlayerClient__SetNameSpriteState_x                         0x1403004E0
#define PlayerClient__SetNameSpriteTint_x                          0x1403014A0
#define PlayerZoneClient__ChangeHeight_x                           0x14030FFC0
#define PlayerZoneClient__DoAttack_x                               0x140310CD0
#define PlayerZoneClient__GetLevel_x                               0x140314410
#define PlayerZoneClient__IsValidTeleport_x                        0x14025C270
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199BB0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403094C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140309570  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140309670
#define PlayerManagerClient__CreatePlayer_x                        0x140308F90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140636E90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BA990
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BA590
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BA600
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BA920  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BAAB0
#define KeypressHandler__HandleKeyUp_x                             0x1402BABD0
#define KeypressHandler__SaveKeymapping_x                          0x1402BA830  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14067A070  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140673E50

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E1690  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E6A10
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E9070
#define PcZoneClient__RemovePetEffect_x                            0x1402EC9C0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E9C60
#define PcZoneClient__CanEquipItem_x                               0x1402E4D10
#define PcZoneClient__GetItemByID_x                                0x1402E7940
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EC560
#define PcZoneClient__BandolierSwap_x                              0x1402E3D60

// Doors
#define EQSwitch__UseSwitch_x                                      0x140260DA0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C6490

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BAAD0
#define CContainerMgr__CloseContainer_x                            0x1403BA410
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BAE50

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B2160

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AD130

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404427D0
#define CLootWnd__RequestLootSlot_x                                0x140443800

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DA5F0
#define EQ_Spell__SpellAffects_x                                   0x1401DB8D0
#define EQ_Spell__SpellAffectBase_x                                0x1401DB830
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA350
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA300
#define EQ_Spell__IsSPAStacking_x                                  0x1401DB500
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DB0B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DA980

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2410

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050EE00
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050E510
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050DD10

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405164A0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140182850
#define CTaskManager__GetTaskStatus_x                              0x140182960
#define CTaskManager__GetElementDescription_x                      0x1401824E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D8910
#define EqSoundManager__PlayScriptMp3_x                            0x1401D7750
#define EqSoundManager__SoundAssistPlay_x                          0x140333790  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140333AD0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405ACBE0
#define CTextureAnimation__SetCurCell_x                            0x1405ACEF0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AB330

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140694C20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140694CA0
#define CharacterBase__IsExpansionFlag_x                           0x1401FE240

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140395540
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140395F60
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403974B0

// messages
#define msg_spell_worn_off_x                                       0x140214E50
#define msg_new_text_x                                             0x140210600
#define __msgTokenTextParam_x                                      0x140207CE0
#define msgTokenText_x                                             0x140207BF0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403353C0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403352E0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140645DA0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14043BC20

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BF820
#define CCursorAttachment__IsOkToActivate_x                        0x1403C2AE0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C2D90
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E5D60
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E5F50
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E5F60

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014F140
#define CFindItemWnd__Update_x                                     0x14014FAE0
#define CFindItemWnd__PickupSelectedItem_x                         0x140149580

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140159110
#define LootFiltersManager__GetItemFilterData_x                    0x140159C20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015A4C0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015A770

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140494BC0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032DD10
#define CResolutionHandler__UpdateResolution_x                     0x1405922B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B6DB0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140699010  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140698F00  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DD750
#define CGroupWnd__UpdateDisplay_x                                 0x1403DD330

// ItemBase
#define ItemBase__IsLore_x                                         0x140651790
#define ItemBase__IsLoreEquipped_x                                 0x140651820

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CD830

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140259640
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402595D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140259610

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140328120

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126D70
#define FactionManagerClient__HandleFactionMessage_x               0x140127120
#define FactionManagerClient__GetFactionStanding_x                 0x140126540
#define FactionManagerClient__GetMaxFaction_x                      0x140126540
#define FactionManagerClient__GetMinFaction_x                      0x1401263F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF3C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132520

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B39E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2D60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B3800  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B3780  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033A6E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140328120

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021E9D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405A2970

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086EA0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034BFD0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F060

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14067D0D0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD46B0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140544ED0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082EE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071530
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716C0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071870

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
