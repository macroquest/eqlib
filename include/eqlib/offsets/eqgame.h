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

#define __ClientDate                                               20251115u
#define __ExpectedVersionDate                                     "Nov 15 2025"
#define __ExpectedVersionTime                                     "04:22:11"
#define __ActualVersionDate_x                                      0x140970898
#define __ActualVersionTime_x                                      0x140970888
#define __ActualVersionBuild_x                                     0x140905A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C4870
#define __MemChecker1_x                                            0x140592300
#define __MemChecker4_x                                            0x140292060
#define __EncryptPad0_x                                            0x140D43F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C840
#define instEQZoneInfo_x                                           0x140E7CA34 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225C80
#define __gfMaxZoomCameraDistance_x                                0x140906CF8
#define __gfMaxCameraDistance_x                                    0x140AB0C44
#define __CurrentSocial_x                                          0x140BFF950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3B730
#define g_eqCommandStates_x                                        0x140D3C7D0
#define __CommandList_x                                            0x140D3CA00
#define __ScreenMode_x                                             0x140DC4194
#define __gWorld_x                                                 0x140E76D20
#define __gpbCommandEvent_x                                        0x140E77278
#define __ServerHost_x                                             0x140E77478
#define __Guilds_x                                                 0x140E7B400
#define __MemCheckBitmask_x                                        0x140E7CD7F
#define __MemCheckActive_x                                         0x140E7E495
#define __MouseEventTime_x                                         0x140EF1E10
#define DI8__MouseState_x                                          0x140EF6050
#define __heqmain_x                                                0x140EF84E0
#define DI8__Mouse_x                                               0x140EF84F8
#define __HWnd_x                                                   0x140EF8500
#define __Mouse_x                                                  0x140EF8508
#define DI8__Keyboard_x                                            0x140EF8528
#define __LoginName_x                                              0x140EF8C0C
#define __CurrentMapLabel_x                                        0x140F0C720
#define __LabelCache_x                                             0x140F0D2F0
#define __ChatFilterDefs_x                                         0x140A4AB00
#define Teleport_Table_Size_x                                      0x140E7730C
#define Teleport_Table_x                                           0x140E74CE0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E77790
#define pinstActiveBanker_x                                        0x140E771C0
#define pinstActiveCorpse_x                                        0x140E771B0
#define pinstActiveGMaster_x                                       0x140E771B8
#define pinstActiveMerchant_x                                      0x140E771A8
#define pinstAltAdvManager_x                                       0x140DC4F88
#define pinstCEverQuest_x                                          0x140EF5FA8
#define pinstCamActor_x                                            0x140DC4180
#define pinstCDBStr_x                                              0x140DC3D40
#define pinstCDisplay_x                                            0x140E74CD8
#define pinstControlledPlayer_x                                    0x140E77250
#define pinstCResolutionHandler_x                                  0x140F1DB28
#define pinstCSidlManager_x                                        0x140F1E8A0
#define pinstCXWndManager_x                                        0x140F1E898
#define instDynamicZone_x                                          0x140E7B2C0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B30E
#define instExpeditionName_x                                       0x140E7B34E
#define pinstDZMember_x                                            0x140E7B3D8
#define pinstDZTimerInfo_x                                         0x140E7B3E0
#define pinstEqLogin_x                                             0x140EF8550
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C89C
#define pinstEQSoundManager_x                                      0x140DC5310
#define pinstEQSpellStrings_x                                      0x140DA88D0
#define pinstSGraphicsEngine_x                                     0x140F1D8B8
#define pinstLocalPC_x                                             0x140E76D08
#define pinstLocalPlayer_x                                         0x140E771A0
#define pinstCMercenaryClientManager_x                             0x140EF3738
#define pinstModelPlayer_x                                         0x140E771D0
#define pinstRenderInterface_x                                     0x140F1D8D0
#define pinstSkillMgr_x                                            0x140EF53E8
#define pinstSpawnManager_x                                        0x140EF3AF0
#define pinstSpellManager_x                                        0x140EF5450
#define pinstStringTable_x                                         0x140E76D10
#define pinstSwitchManager_x                                       0x140E74C40
#define pinstTarget_x                                              0x140E77248
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E771C8
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC4178
#define pinstWorldData_x                                           0x140E74CD0
#define pinstPlayerPath_x                                          0x140EF3B18
#define pinstTargetIndicator_x                                     0x140EF5500
#define EQObject_Top_x                                             0x140E77300

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F09880
#define pinstCContainerMgr_x                                       0x140DC41E8
#define pinstCContextMenuManager_x                                 0x140F1E580
#define pinstCInvSlotMgr_x                                         0x140DC41C8
#define pinstCItemDisplayManager_x                                 0x140F0C2F0
#define pinstCPopupWndManager_x                                    0x140F0CB80
#define pinstCSpellDisplayMgr_x                                    0x140F0D1D0
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D640
#define pinstItemIconCache_x                                       0x140F09BE0
#define pinstLootFiltersManager_x                                  0x140DC3788
#define pinstGFViewListener_x                                      0x140F1DD58


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024F9E0
#define __CastRay_x                                                0x140247C50
#define __CastRay2_x                                               0x140247950
#define __compress_block_x                                         0x1405476C0
#define __ConvertItemTags_x                                        0x1402480B0
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x140190A50
#define __decompress_block_x                                       0x14058DB10
#define __DoesFileExist_x                                          0x1405961B0
#define __EQGetTime_x                                              0x1405928B0
#define __ExecuteCmd_x                                             0x14021D210
#define __FixHeading_x                                             0x14064D1A0
#define __FlushDxKeyboard_x                                        0x140348720
#define __get_bearing_x                                            0x140251C10
#define __get_melee_range_x                                        0x140251D00
#define __GetAnimationCache_x                                      0x1403CA090
#define __GetGaugeValueFromEQ_x                                    0x140506FA0
#define __GetLabelFromEQ_x                                         0x140508590
#define __GetXTargetType_x                                         0x14064E480   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064D220
#define __HelpPath_x                                               0x140EF1CD8   // Why?
#define __NewUIINI_x                                               0x140513FD0   // Why?
#define __ProcessDeviceEvents_x                                    0x140292670
#define __ProcessGameEvents_x                                      0x140287080
#define __ProcessKeyboardEvents_x                                  0x140349E70
#define __ProcessMouseEvents_x                                     0x1402887A0
#define __SaveColors_x                                             0x1401A0950
#define __STMLToText_x                                             0x1405A5DE0
#define __WndProc_x                                                0x140346EC0
#define CMemoryMappedFile__SetFile_x                               0x1407FB390
#define DrawNetStatus_x                                            0x1402D3BB0
#define Util__FastTime_x                                           0x140591DE0
#define __eq_delete_x                                              0x1406C7338
#define __eq_new_x                                                 0x1406C7590
#define __CopyLayout_x                                             0x1402C0C90
#define __ThrottleFrameRate_x                                      0x14027664C
#define __ThrottleFrameRateEnd_x                                   0x140276652

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140359970
#define CAAWnd__Update_x                                           0x140359C70
#define CAAWnd__UpdateSelected_x                                   0x14035AE70

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACFF0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A59D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD920

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABBB0
#define AltAdvManager__IsAbilityReady_x                            0x1401AC040
#define AltAdvManager__GetAAById_x                                 0x1401AB480
#define AltAdvManager__CanTrainAbility_x                           0x1401AB270
#define AltAdvManager__CanSeeAbility_x                             0x1401AAF30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D4430
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D52A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D54F0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9890
#define CharacterZoneClient__CanUseItem_x                          0x1400E9E50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5EC0
#define CharacterZoneClient__CastSpell_x                           0x1400D5F60
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5D60
#define CharacterZoneClient__Cur_HP_x                              0x1400EB570
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB730
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D91D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1DF0
#define CharacterZoneClient__GetBaseSkill_x                        0x1401004C0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA670
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E9190
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3690
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2570
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA7F0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA240
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC110
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2CB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB1E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3920
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA870
#define CharacterZoneClient__GetManaRegen_x                        0x1400F46A0
#define CharacterZoneClient__GetModCap_x                           0x1400FBC70
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DAB00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DACD0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF7A0
#define CharacterZoneClient__HasSkill_x                            0x1400F77B0
#define CharacterZoneClient__HitBySpell_x                          0x1400DB760
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF130
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB750
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE910  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBAA0
#define CharacterZoneClient__Max_Mana_x                            0x1402EEB30  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FBF00
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E27A0
#define CharacterZoneClient__SpellDuration_x                       0x1400E34D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E48B0
#define CharacterZoneClient__UseSkill_x                            0x140101430


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403787C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382DC0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037EC30
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140382840

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140385530

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD02E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A8250
#define CChatWindowManager__InitContextMenu_x                      0x1403A83E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A72A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B03A0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6CD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401099D0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B13F0
#define CChatWindow__Clear_x                                       0x1403B23B0
#define CChatWindow__WndNotification_x                             0x1403B35A0
#define CChatWindow__AddHistory_x                                  0x1403B1EB0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D34F0
#define CContextMenu__RemoveMenuItem_x                             0x1405D38D0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D38A0
#define CContextMenu__CheckMenuItem_x                              0x1405D3710
#define CContextMenu__SetMenuItem_x                                0x1405D38F0
#define CContextMenu__AddSeparator_x                               0x1405D3650

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C53D0
#define CContextMenuManager__RemoveMenu_x                          0x1405C59B0
#define CContextMenuManager__PopupMenu_x                           0x1405C56F0
#define CContextMenuManager__Flush_x                               0x1405C5450
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C1A30

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1401E6880
#define CChatService__GetFriendName_x                              0x1406A1160

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B6390
#define CComboWnd__Draw_x                                          0x1405B6480
#define CComboWnd__GetCurChoice_x                                  0x1405B6750  // unused
#define CComboWnd__GetListRect_x                                   0x1405B67F0
#define CComboWnd__InsertChoice_x                                  0x1405B6B10
#define CComboWnd__SetColors_x                                     0x1405B6EA0
#define CComboWnd__SetChoice_x                                     0x1405B6E60
#define CComboWnd__GetItemCount_x                                  0x1405B67E0
#define CComboWnd__GetCurChoiceText_x                              0x1405B6790  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B6720
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B6BD0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF740
#define CContainerWnd__SetContainer_x                              0x14041B550
#define CContainerWnd__vftable_x                                   0x1409E5918

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC3F04
#define CDisplay__ZoneMainUI_x                                     0x1405ED740
#define CDisplay__PreZoneMainUI_x                                  0x14019D850
#define CDisplay__CleanGameUI_x                                    0x14018FB10
#define CDisplay__GetClickedActor_x                                0x140193CE0
#define CDisplay__GetUserDefinedColor_x                            0x140194950
#define CDisplay__InitCharSelectUI_x                               0x140194C00
#define CDisplay__ReloadUI_x                                       0x14019FB50
#define CDisplay__RestartUI_x                                      0x140201A60
#define CDisplay__WriteTextHD2_x                                   0x1401A6B60
#define CDisplay__TrueDistance_x                                   0x1401A6810
#define CDisplay__SetViewActor_x                                   0x1401A3080
#define CDisplay__GetFloorHeight_x                                 0x140193F40
#define CDisplay__ToggleScreenshotMode_x                           0x1401A6300
#define CDisplay__RealRender_World_x                               0x14019EF20

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7970
#define CEditWnd__DrawCaret_x                                      0x1405E9510  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E99A0
#define CEditWnd__GetCaretPt_x                                     0x1405E9C20  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E9C60
#define CEditWnd__GetDisplayString_x                               0x1405E9EC0
#define CEditWnd__GetHorzOffset_x                                  0x1405EA100
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EA240
#define CEditWnd__GetSelStartPt_x                                  0x1405EA520  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EA370
#define CEditWnd__PointFromPrintableChar_x                         0x1405EB0D0
#define CEditWnd__ReplaceSelection_x                               0x1405EB470
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB910
#define CEditWnd__SetEditable_x                                    0x1405EBBA0
#define CEditWnd__SetWindowText_x                                  0x1405EBBD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140277720
#define CEverQuest__ClickedPlayer_x                                0x14026B710
#define CEverQuest__CreateTargetIndicator_x                        0x14026BFD0
#define CEverQuest__DoTellWindow_x                                 0x1401096E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109FC0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140279110
#define CEverQuest__dsp_chat_x                                     0x140109120 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A40A0
#define CEverQuest__Emote_x                                        0x140279B00
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A8E0
#define CEverQuest__GetClassDesc_x                                 0x14027A940
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027AD10
#define CEverQuest__GetDeityDesc_x                                 0x14027AFC0
#define CEverQuest__GetLangDesc_x                                  0x14027B3F0
#define CEverQuest__GetRaceDesc_x                                  0x14027B790
#define CEverQuest__InterpretCmd_x                                 0x14027D120
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402926E0
#define CEverQuest__LMouseUp_x                                     0x14027EBA0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028FC70
#define CEverQuest__RMouseUp_x                                     0x140289330
#define CEverQuest__SetGameState_x                                 0x140295160
#define CEverQuest__UPCNotificationFlush_x                         0x14029AAD0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E800
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028A700
#define CEverQuest__ReportSuccessfulHit_x                          0x14028B520

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4F40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3AB0
#define CGuild__GetGuildName_x                                     0x1400C3AF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F84D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B6380
#define CHotButton__SetCheck_x                                     0x1402B6650

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140412130
#define CInvSlotMgr__MoveItem_x                                    0x140412CC0
#define CInvSlotMgr__SelectSlot_x                                  0x140414FF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040F170
#define CInvSlot__SliderComplete_x                                 0x140410770
#define CInvSlot__GetItemBase_x                                    0x14040A970
#define CInvSlot__UpdateItem_x                                     0x140410C30

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404171E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438BB0
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B7B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140435350
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436CC0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437FC0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140503A10
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405057A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140540A20

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140431A20

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140156110

// CLabel
#define CLabel__UpdateText_x                                       0x140442BA0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B9CE0
#define CListWnd__dCListWnd_x                                      0x1405BA120
#define CListWnd__vftable_x                                        0x140ACE430
#define CListWnd__AddColumn_x                                      0x1405BA7C0
#define CListWnd__AddColumn1_x                                     0x1405BA860
#define CListWnd__AddLine_x                                        0x1405BA9C0
#define CListWnd__AddString_x                                      0x1405BAF50
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BB4C0
#define CListWnd__CalculateVSBRange_x                              0x1405BB7A0
#define CListWnd__ClearSel_x                                       0x1405BB950
#define CListWnd__ClearAllSel_x                                    0x1405BB8F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB9B0
#define CListWnd__Compare_x                                        0x1405BBB70
#define CListWnd__Draw_x                                           0x1405BC040
#define CListWnd__DrawColumnSeparators_x                           0x1405BCBE0
#define CListWnd__DrawHeader_x                                     0x1405BCCA0
#define CListWnd__DrawItem_x                                       0x1405BD370
#define CListWnd__DrawLine_x                                       0x1405BDCE0
#define CListWnd__DrawSeparator_x                                  0x1405BE1A0
#define CListWnd__EnableLine_x                                     0x1405BE5C0
#define CListWnd__EnsureVisible_x                                  0x1405BE620
#define CListWnd__ExtendSel_x                                      0x1405BE720
#define CListWnd__GetColumnMinWidth_x                              0x1405BEAB0
#define CListWnd__GetColumnWidth_x                                 0x1405BEB30
#define CListWnd__GetCurSel_x                                      0x1405BEC30
#define CListWnd__GetItemData_x                                    0x1405BEFB0
#define CListWnd__GetItemHeight_x                                  0x1405BEFF0
#define CListWnd__GetItemRect_x                                    0x1405BF210
#define CListWnd__GetItemText_x                                    0x1405BF4B0
#define CListWnd__GetSelList_x                                     0x1405BF700
#define CListWnd__GetSeparatorRect_x                               0x1405BF8F0
#define CListWnd__InsertLine_x                                     0x1405C0D50
#define CListWnd__RemoveLine_x                                     0x1405C13C0
#define CListWnd__SetColors_x                                      0x1405C1780
#define CListWnd__SetColumnJustification_x                         0x1405C17A0
#define CListWnd__SetColumnLabel_x                                 0x1405C1820
#define CListWnd__SetColumnWidth_x                                 0x1405C19C0
#define CListWnd__SetCurSel_x                                      0x1405C1A90
#define CListWnd__SetItemColor_x                                   0x1405C1D00
#define CListWnd__SetItemData_x                                    0x1405C1DA0
#define CListWnd__SetItemText_x                                    0x1405C1FE0
#define CListWnd__Sort_x                                           0x1405C23F0
#define CListWnd__ToggleSel_x                                      0x1405C2560
#define CListWnd__SetColumnsSizable_x                              0x1405C1A10
#define CListWnd__SetItemWnd_x                                     0x1405C2110
#define CListWnd__GetItemWnd_x                                     0x1405BF690
#define CListWnd__SetItemIcon_x                                    0x1405C1DE0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BB290
#define CListWnd__SetVScrollPos_x                                  0x1405C2350

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404560C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33328
#define MapViewMap__Clear_x                                        0x140457C40
#define MapViewMap__SetZoom_x                                      0x14045E290
#define MapViewMap__HandleLButtonDown_x                            0x14045ADD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047FAB0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140486350
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140486B30
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A420
#define CMerchantWnd__SelectBuySellSlot_x                          0x140489770
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E820

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067C130
#define CPacketScrambler__hton_x                                   0x14067C120

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2E00
#define CSidlManagerBase__FindAnimation1_x                         0x1405E2D40
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E3430
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E31E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E2130
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E20C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1700

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F69A0
#define CSidlManager__CreateXWnd_x                                 0x1404F6B60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A78D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A7A00
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F1EB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7B80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A7000
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A70D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A72E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A8270
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A84A0
#define CSidlScreenWnd__GetChildItem_x                             0x1405A8640
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8890
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B2930 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8C00
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8F40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A9810
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AA210
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DBF0
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA8B0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AB0B0
#define CSidlScreenWnd__vftable_x                                  0x140ACD6B8
#define CSidlScreenWnd__WndNotification_x                          0x1405AB100

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403318A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331BC0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331AF0
#define CSkillMgr__IsActivatedSkill_x                              0x140331F80
#define CSkillMgr__IsCombatSkill_x                                 0x140331FC0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140331EF0
#define CSkillMgr__GetSkillLastUsed_x                              0x140331B40

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C2EB0
#define CSliderWnd__SetValue_x                                     0x1405C36C0
#define CSliderWnd__SetNumTicks_x                                  0x1405C3540

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FD140

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C7E30
#define CStmlWnd__CalculateHSBRange_x                              0x1405B22F0
#define CStmlWnd__CalculateVSBRange_x                              0x1405C8CD0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C97D0
#define CStmlWnd__ForceParseNow_x                                  0x1405C9870
#define CStmlWnd__GetVisibleText_x                                 0x1405C9F40
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CBCA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CBCE0
#define CStmlWnd__SetSTMLText_x                                    0x1405D2CA0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D2E50
#define CStmlWnd__UpdateHistoryString_x                            0x1405D31E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C3A70
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3B10
#define CTabWnd__DrawTab_x                                         0x1405C3EE0
#define CTabWnd__GetTabRect_x                                      0x1405C4540
#define CTabWnd__InsertPage_x                                      0x1405C4810
#define CTabWnd__RemovePage_x                                      0x1405C4AA0
#define CTabWnd__SetPage_x                                         0x1405C4C00
#define CTabWnd__UpdatePage_x                                      0x1405C4F00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EC000
#define CPageWnd__SetTabText_x                                     0x1405EC070

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD050  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD460


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA7C0
#define CTextureFont__DrawWrappedText1_x                           0x1405DA6D0
#define CTextureFont__DrawWrappedText2_x                           0x1405DA8F0
#define CTextureFont__GetTextExtent_x                              0x1405DACA0
#define CTextureFont__GetHeight_x                                  0x1405DAC60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F0610

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A44D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CFB0
#define CXStr__gCXStrAccess_x                                      0x140F1D748

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD960
#define CXWnd__ClrFocus_x                                          0x1405ADC50
#define CXWnd__Destroy_x                                           0x1405ADDD0
#define CXWnd__DoAllDrawing_x                                      0x1405ADEE0
#define CXWnd__DrawColoredRect_x                                   0x1405AE6B0
#define CXWnd__DrawTooltip_x                                       0x1405AFD30
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AFDE0
#define CXWnd__GetChildItem_x                                      0x1405B06E0
#define CXWnd__GetChildWndAt_x                                     0x1405B07A0
#define CXWnd__GetClientRect_x                                     0x1405B0A50
#define CXWnd__GetClientClipRect_x                                 0x1405B0900
#define CXWnd__GetRelativeRect_x                                   0x1405B2430
#define CXWnd__GetScreenClipRect_x                                 0x1405B2540
#define CXWnd__GetScreenRect_x                                     0x1405B26B0
#define CXWnd__GetTooltipRect_x                                    0x1405B2830
#define CXWnd__IsActive_x                                          0x1405B2DF0
#define CXWnd__IsDescendantOf_x                                    0x1405B2E20
#define CXWnd__IsReallyVisible_x                                   0x1405B2E90
#define CXWnd__IsType_x                                            0x1405B2EE0
#define CXWnd__Minimize_x                                          0x1405B2FD0
#define CXWnd__ProcessTransition_x                                 0x1405B3EB0
#define CXWnd__Resize_x                                            0x1405B3FD0
#define CXWnd__Right_x                                             0x1405B4070
#define CXWnd__SetFocus_x                                          0x1405B4430
#define CXWnd__SetFont_x                                           0x1405B4480
#define CXWnd__SetKeyTooltip_x                                     0x1405B4580
#define CXWnd__SetMouseOver_x                                      0x1405B46B0
#define CXWnd__SetParent_x                                         0x1405B4730
#define CXWnd__StartFade_x                                         0x1405B4B80
#define CXWnd__vftable_x                                           0x140ACDC90
#define CXWnd__CXWnd_x                                             0x1405AC520
#define CXWnd__dCXWnd_x                                            0x1405ACE50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F70F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4A90
#define CXWndManager__DrawCursor_x                                 0x1405D4D70
#define CXWndManager__DrawWindows_x                                0x1405D4FD0
#define CXWndManager__GetKeyboardFlags_x                           0x1405D5620
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D5660
#define CXWndManager__RemoveWnd_x                                  0x1405D8E80

// CDBStr
#define CDBStr__GetString_x                                        0x14018DCD0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140685F90

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1F30
#define CCharacterListWnd__EnterWorld_x                            0x1400D0F40
#define CCharacterListWnd__Quit_x                                  0x1400D1F10
#define CCharacterListWnd__UpdateList_x                            0x1400D2D90

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140653230
#define ItemBase__CreateItemTagString_x                            0x140653CC0
#define ItemBase__GetImageNum_x                                    0x1406563F0
#define ItemBase__GetItemValue_x                                   0x1406582F0
#define ItemBase__IsEmpty_x                                        0x14065A070
#define ItemBase__IsKeyRingItem_x                                  0x14065A790
#define ItemBase__ValueSellMerchant_x                              0x14065EA40
#define ItemClient__CanDrop_x                                      0x1402B8C60
#define ItemClient__CanGoInBag_x                                   0x1402B8D90
#define ItemClient__CreateItemClient_x                             0x1402B9020
#define ItemClient__dItemClient_x                                  0x1402B8AD0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD560
#define EQ_LoadingS__Array_x                                       0x140D39240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066AAB0
#define PcBase__GetCombatAbility_x                                 0x14066B1A0
#define PcBase__GetCombatAbilityTimer_x                            0x14066B240
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066B9E0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066C460
#define PcClient__AlertInventoryChanged_x                          0x1402DBE00
#define PcClient__GetConLevel_x                                    0x1402DC550  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DECE0
#define PcClient__HasLoreItem_x                                    0x1402DFD20
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC580
#define PcZoneClient__RemoveMyAffect_x                             0x1402EFA50

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221C10
#define EQGroundItemListManager__Add_x                             0x140221DC0
#define EQGroundItemListManager__Clear_x                           0x140221E60
#define EQGroundItemListManager__Delete_x                          0x140221F20
#define EQGroundItemListManager__Instance_x                        0x140221FB0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025CAE0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188500

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F910
#define PlayerBase__CanSee1_x                                      0x14063F9E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063FEC0
#define PlayerBase__HasProperty_x                                  0x140640090
#define PlayerBase__IsTargetable_x                                 0x140640150
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD6F0
#define PlayerClient__GetPcClient_x                                0x140300220
#define PlayerClient__PlayerClient_x                               0x1402F5A40
#define PlayerClient__SetNameSpriteState_x                         0x140303950
#define PlayerClient__SetNameSpriteTint_x                          0x140304910
#define PlayerZoneClient__ChangeHeight_x                           0x140313440
#define PlayerZoneClient__DoAttack_x                               0x140314150
#define PlayerZoneClient__GetLevel_x                               0x140317880
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F880
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C0D0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C940  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030C9F0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030CAF0
#define PlayerManagerClient__CreatePlayer_x                        0x14030C410
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063F4D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BE1B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BDAE0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BDB50
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BE140  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BE2D0
#define KeypressHandler__HandleKeyUp_x                             0x1402BE3F0
#define KeypressHandler__SaveKeymapping_x                          0x1402BDFD0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140683AB0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067D870

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E5DD0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA6B0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED660
#define PcZoneClient__RemovePetEffect_x                            0x1402EFD30
#define PcZoneClient__HasAlternateAbility_x                        0x1402EE240
#define PcZoneClient__CanEquipItem_x                               0x1402E89A0
#define PcZoneClient__GetItemByID_x                                0x1402EB5D0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF8D0
#define PcZoneClient__BandolierSwap_x                              0x1402DBEB0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402643B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CA0C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE4F0
#define CContainerMgr__CloseContainer_x                            0x1403BDE10
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE870

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA5B0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B0590

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449ED0
#define CLootWnd__RequestLootSlot_x                                0x14044AF20

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DCF00
#define EQ_Spell__SpellAffects_x                                   0x1401DE1E0
#define EQ_Spell__SpellAffectBase_x                                0x1401DE140
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DAE60
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DAE10
#define EQ_Spell__IsSPAStacking_x                                  0x1401DDE10
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DD9C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD280

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C25F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405177E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516EF0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405166F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051EE70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140184EB0
#define CTaskManager__GetTaskStatus_x                              0x140184FC0
#define CTaskManager__GetElementDescription_x                      0x140184B40

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB220
#define EqSoundManager__PlayScriptMp3_x                            0x1401DA060
#define EqSoundManager__SoundAssistPlay_x                          0x140336CE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140337020  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B5940
#define CTextureAnimation__SetCurCell_x                            0x1405B5C50

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AE790

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069E820
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069E8A0
#define CharacterBase__IsExpansionFlag_x                           0x1402010C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140399320
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399D90
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039B2E0

// messages
#define msg_spell_worn_off_x                                       0x140218150
#define msg_new_text_x                                             0x140213910
#define __msgTokenTextParam_x                                      0x14020AE10
#define msgTokenText_x                                             0x14020AD20

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338910
#define SpellManager__GetSpellByGroupAndRank_x                     0x140338830

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064E860

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404432F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C3260
#define CCursorAttachment__IsOkToActivate_x                        0x1403C6700
#define CCursorAttachment__RemoveAttachment_x                      0x1403C69B0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EEAB0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EECA0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EECB0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150A20
#define CFindItemWnd__Update_x                                     0x1401513C0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A360

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B1D0
#define LootFiltersManager__GetItemFilterData_x                    0x14015BCF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C590
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C840

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049CE60

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140331460
#define CResolutionHandler__UpdateResolution_x                     0x14059AE50

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA7A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A2CD0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A2BC0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E1350
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0F30

// ItemBase
#define ItemBase__IsLore_x                                         0x14065A8D0
#define ItemBase__IsLoreEquipped_x                                 0x14065A960

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1990

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025CC40
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025CBD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025CC10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B8A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140127400
#define FactionManagerClient__HandleFactionMessage_x               0x1401277E0
#define FactionManagerClient__GetFactionStanding_x                 0x140126BD0
#define FactionManagerClient__GetMaxFaction_x                      0x140126BD0
#define FactionManagerClient__GetMinFaction_x                      0x140126A80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF600

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132BE0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B6120
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B52E0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B5F40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B5EC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DBC0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B8A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB6F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F4C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EFB0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140686B10
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2590

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054DAE0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
