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

#define __ClientDate                                               20240912u
#define __ExpectedVersionDate                                     "Sep 12 2024"
#define __ExpectedVersionTime                                     "12:24:04"
#define __ActualVersionDate_x                                      0x140945C40
#define __ActualVersionTime_x                                      0x140945C30
#define __ActualVersionBuild_x                                     0x1408DC620

// Memory Protection
#define __MemChecker0_x                                            0x1402B09A0
#define __MemChecker1_x                                            0x14056D240
#define __MemChecker4_x                                            0x14027F230
#define __EncryptPad0_x                                            0x140D12E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4BAA0
#define instEQZoneInfo_x                                           0x140E4BC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140215E00
#define __gfMaxZoomCameraDistance_x                                0x1408DD898
#define __gfMaxCameraDistance_x                                    0x140A823D8
#define __CurrentSocial_x                                          0x140BCE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0A720
#define g_eqCommandStates_x                                        0x140D0B790
#define __CommandList_x                                            0x140D0B9D0
#define __ScreenMode_x                                             0x140D93354
#define __gWorld_x                                                 0x140E463D8
#define __gpbCommandEvent_x                                        0x140E463E4
#define __ServerHost_x                                             0x140E465C8
#define __Guilds_x                                                 0x140E4A660
#define __MemCheckBitmask_x                                        0x140E4BFD7
#define __MemCheckActive_x                                         0x140E4D6C5
#define __MouseEventTime_x                                         0x140EC1010
#define DI8__MouseState_x                                          0x140EC5258
#define __heqmain_x                                                0x140EC76F8
#define DI8__Mouse_x                                               0x140EC51A8
#define __HWnd_x                                                   0x140EC5230
#define __Mouse_x                                                  0x140EC5164
#define DI8__Keyboard_x                                            0x140EC5180
#define __LoginName_x                                              0x140EC7DDC
#define __CurrentMapLabel_x                                        0x140EDB5E0
#define __LabelCache_x                                             0x140EDC1B0
#define __ChatFilterDefs_x                                         0x140A1D4F0
#define Teleport_Table_Size_x                                      0x140E46470
#define Teleport_Table_x                                           0x140E43F20

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E469F0
#define pinstActiveBanker_x                                        0x140E46900
#define pinstActiveCorpse_x                                        0x140E468F0
#define pinstActiveGMaster_x                                       0x140E468F8
#define pinstActiveMerchant_x                                      0x140E468E8
#define pinstAltAdvManager_x                                       0x140D941F8
#define pinstCEverQuest_x                                          0x140EC51A0
#define pinstCamActor_x                                            0x140D93338
#define pinstCDBStr_x                                              0x140D92FB0
#define pinstCDisplay_x                                            0x140E469D8
#define pinstControlledPlayer_x                                    0x140E46990
#define pinstCResolutionHandler_x                                  0x14154C978
#define pinstCSidlManager_x                                        0x140EED4B0
#define pinstCXWndManager_x                                        0x140EED4A8
#define instDynamicZone_x                                          0x140E4A520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4A56E
#define instExpeditionName_x                                       0x140E4A5AE
#define pinstDZMember_x                                            0x140E4A638
#define pinstDZTimerInfo_x                                         0x140E4A640
#define pinstEqLogin_x                                             0x140EC7720
#define instTribute_x                                              0x140D05D50
#define pinstDeviceInputProxy_x                                    0x140E4BAFC
#define pinstEQSoundManager_x                                      0x140D94578
#define pinstEQSpellStrings_x                                      0x140D77B80
#define pinstSGraphicsEngine_x                                     0x14154C6F8
#define pinstLocalPC_x                                             0x140E469C0
#define pinstLocalPlayer_x                                         0x140E468E0
#define pinstCMercenaryClientManager_x                             0x140EC28F8
#define pinstModelPlayer_x                                         0x140E46910
#define pinstRenderInterface_x                                     0x14154C710
#define pinstSkillMgr_x                                            0x140EC45A0
#define pinstSpawnManager_x                                        0x140EC2CC0
#define pinstSpellManager_x                                        0x140EC4608
#define pinstStringTable_x                                         0x140E469E0
#define pinstSwitchManager_x                                       0x140E43EA0
#define pinstTarget_x                                              0x140E46988
#define pinstTaskMember_x                                          0x140D05D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E46998
#define pinstTradeTarget_x                                         0x140E46908
#define instTributeActive_x                                        0x140D05D79
#define pinstViewActor_x                                           0x140D93330
#define pinstWorldData_x                                           0x140E469C8
#define pinstPlayerPath_x                                          0x140EC2CE8
#define pinstTargetIndicator_x                                     0x140EC46B8
#define EQObject_Top_x                                             0x140E469B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED8738
#define pinstCContainerMgr_x                                       0x140D92FF8
#define pinstCContextMenuManager_x                                 0x140EED190
#define pinstCInvSlotMgr_x                                         0x140D92FF0
#define pinstCItemDisplayManager_x                                 0x140EDB1B0
#define pinstCPopupWndManager_x                                    0x140EDBA40
#define pinstCSpellDisplayMgr_x                                    0x140EDC090
#define pinstCTaskManager_x                                        0x140BCEC80
#define pinstEQSuiteTextureLoader_x                                0x140D1C550
#define pinstItemIconCache_x                                       0x140ED8A98
#define pinstLootFiltersManager_x                                  0x140D929F8
#define pinstGFViewListener_x                                      0x140EEC968


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023EFC0
#define __CastRay_x                                                0x140237400
#define __CastRay2_x                                               0x140237100
#define __compress_block_x                                         0x1405228E0
#define __ConvertItemTags_x                                        0x140237860
#define __CleanItemTags_x                                          0x1400880D0
#define __CreateCascadeMenuItems_x                                 0x140186880
#define __decompress_block_x                                       0x140568AB0
#define __DoesFileExist_x                                          0x1405710F0
#define __EQGetTime_x                                              0x14056D7F0
#define __ExecuteCmd_x                                             0x14020D710
#define __FixHeading_x                                             0x140699B10
#define __FlushDxKeyboard_x                                        0x1403325E0
#define __get_bearing_x                                            0x1402411B0
#define __get_melee_range_x                                        0x1402412A0
#define __GetAnimationCache_x                                      0x1403AF920
#define __GetGaugeValueFromEQ_x                                    0x1404E3890
#define __GetLabelFromEQ_x                                         0x1404E4EA0
#define __GetXTargetType_x                                         0x14069ADF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140699B90
#define __HelpPath_x                                               0x140EC0ED8   // Why?
#define __NewUIINI_x                                               0x1404F0940   // Why?
#define __ProcessDeviceEvents_x                                    0x14027F840
#define __ProcessGameEvents_x                                      0x140274560
#define __ProcessKeyboardEvents_x                                  0x140333D30
#define __ProcessMouseEvents_x                                     0x140275C40
#define __SaveColors_x                                             0x140196870
#define __STMLToText_x                                             0x140575A30
#define __WndProc_x                                                0x140330E00
#define CMemoryMappedFile__SetFile_x                               0x1407D5AD0
#define DrawNetStatus_x                                            0x1402BEE40
#define Util__FastTime_x                                           0x14056CD80
#define __eq_delete_x                                              0x1406A1B44
#define __eq_new_x                                                 0x1406A1B00
#define __CopyLayout_x                                             0x1402ACDA0
#define __ThrottleFrameRate_x                                      0x140263D84
#define __ThrottleFrameRateEnd_x                                   0x140263DE4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403433E0
#define CAAWnd__Update_x                                           0x1403436E0
#define CAAWnd__UpdateSelected_x                                   0x140344720

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DD0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082AB58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADD0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1980
#define AltAdvManager__IsAbilityReady_x                            0x1401A1C00
#define AltAdvManager__GetAAById_x                                 0x1401A1250
#define AltAdvManager__CanTrainAbility_x                           0x1401A1080
#define AltAdvManager__CanSeeAbility_x                             0x1401A0D40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0B20
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1960
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1BB0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5A60
#define CharacterZoneClient__CanUseItem_x                          0x1400E5E90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2580
#define CharacterZoneClient__CastSpell_x                           0x1400D2620
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E19C0
#define CharacterZoneClient__Cur_HP_x                              0x1400E75A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7760
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D53C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDC30
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC660  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6870
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5360
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF7F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE6C0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6A40
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8900
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEE00
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7210
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFA80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6AC0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0860
#define CharacterZoneClient__GetModCap_x                           0x1400F7E20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6D50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6F60
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBA70
#define CharacterZoneClient__HasSkill_x                            0x1400F3850
#define CharacterZoneClient__HitBySpell_x                          0x1400D7A10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB1B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7900
#define CharacterZoneClient__Max_Endurance_x                       0x1402DB500  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7C50
#define CharacterZoneClient__Max_Mana_x                            0x1402DB720  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F80B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE550
#define CharacterZoneClient__SpellDuration_x                       0x1400DF250
#define CharacterZoneClient__TotalEffect_x                         0x1400E05A0
#define CharacterZoneClient__UseSkill_x                            0x1400FD5D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403618B0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036BC20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367AA0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036B6A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036E2E0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA1160

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403911C0
#define CChatWindowManager__InitContextMenu_x                      0x140391350
#define CChatWindowManager__FreeChatWindow_x                       0x140390240
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140398F30
#define CChatWindowManager__CreateChatWindow_x                     0x14038FB80

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105B40

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140399F70
#define CChatWindow__Clear_x                                       0x14039AF30
#define CChatWindow__WndNotification_x                             0x14039C120
#define CChatWindow__AddHistory_x                                  0x14039AA30

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AAAD0
#define CContextMenu__RemoveMenuItem_x                             0x1405AAEC0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AAE90
#define CContextMenu__CheckMenuItem_x                              0x1405AAD00
#define CContextMenu__SetMenuItem_x                                0x1405AAEE0
#define CContextMenu__AddSeparator_x                               0x1405AAC40

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059C9A0
#define CContextMenuManager__RemoveMenu_x                          0x14059CF80
#define CContextMenuManager__PopupMenu_x                           0x14059CCC0
#define CContextMenuManager__Flush_x                               0x14059CA20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A7870

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140663780
#define CChatService__GetFriendName_x                              0x140663790

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058D8E0
#define CComboWnd__Draw_x                                          0x14058D9E0
#define CComboWnd__GetCurChoice_x                                  0x14058DCC0  // unused
#define CComboWnd__GetListRect_x                                   0x14058DD60
#define CComboWnd__InsertChoice_x                                  0x14058E0A0
#define CComboWnd__SetColors_x                                     0x14058E430
#define CComboWnd__SetChoice_x                                     0x14058E3F0
#define CComboWnd__GetItemCount_x                                  0x14058DD50
#define CComboWnd__GetCurChoiceText_x                              0x14058DD00  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058DC90
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E160

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5600
#define CContainerWnd__SetContainer_x                              0x1403FAE60
#define CContainerWnd__vftable_x                                   0x1409B9658

// CDisplay
#define CDisplay__cameraType_x                                     0x140D930EC
#define CDisplay__ZoneMainUI_x                                     0x1405C4CB0
#define CDisplay__PreZoneMainUI_x                                  0x140193790
#define CDisplay__CleanGameUI_x                                    0x140185940
#define CDisplay__GetClickedActor_x                                0x140189AE0
#define CDisplay__GetUserDefinedColor_x                            0x14018A750
#define CDisplay__InitCharSelectUI_x                               0x14018AA00
#define CDisplay__ReloadUI_x                                       0x140195A80
#define CDisplay__RestartUI_x                                      0x1401F3D60
#define CDisplay__WriteTextHD2_x                                   0x14019CAA0
#define CDisplay__TrueDistance_x                                   0x14019C750
#define CDisplay__SetViewActor_x                                   0x140198F90
#define CDisplay__GetFloorHeight_x                                 0x140189D40
#define CDisplay__ToggleScreenshotMode_x                           0x14019C240
#define CDisplay__RealRender_World_x                               0x140194E60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CEEB0
#define CEditWnd__DrawCaret_x                                      0x1405C0990  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C0E50
#define CEditWnd__GetCaretPt_x                                     0x1405C10D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1110
#define CEditWnd__GetDisplayString_x                               0x1405C1380
#define CEditWnd__GetHorzOffset_x                                  0x1405C15C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1710
#define CEditWnd__GetSelStartPt_x                                  0x1405C19F0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1840
#define CEditWnd__PointFromPrintableChar_x                         0x1405C25A0
#define CEditWnd__ReplaceSelection_x                               0x1405C2950
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C2DF0
#define CEditWnd__SetEditable_x                                    0x1405C3080
#define CEditWnd__SetWindowText_x                                  0x1405C30B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140264E90
#define CEverQuest__ClickedPlayer_x                                0x14025A960
#define CEverQuest__CreateTargetIndicator_x                        0x14025B220
#define CEverQuest__DoTellWindow_x                                 0x140105850 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106110 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266850
#define CEverQuest__dsp_chat_x                                     0x140105280 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140290C50
#define CEverQuest__Emote_x                                        0x140267230
#define CEverQuest__GetBodyTypeDesc_x                              0x140267FE0
#define CEverQuest__GetClassDesc_x                                 0x140268040
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268410
#define CEverQuest__GetDeityDesc_x                                 0x1402686C0
#define CEverQuest__GetLangDesc_x                                  0x140268AF0
#define CEverQuest__GetRaceDesc_x                                  0x140268E90
#define CEverQuest__InterpretCmd_x                                 0x14026A7D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027F8B0
#define CEverQuest__LMouseUp_x                                     0x14026C1F0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D0D0
#define CEverQuest__RMouseUp_x                                     0x1402767D0
#define CEverQuest__SetGameState_x                                 0x140281DF0
#define CEverQuest__UPCNotificationFlush_x                         0x140287720 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026BE60
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277B80
#define CEverQuest__ReportSuccessfulHit_x                          0x1402789A0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B9D00

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0CA0
#define CGuild__GetGuildName_x                                     0x1400C0CE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DC230

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2840
#define CHotButton__SetCheck_x                                     0x1402A2B10

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F3B90
#define CInvSlotMgr__MoveItem_x                                    0x1403F3D70
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5720

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F0D80
#define CInvSlot__SliderComplete_x                                 0x1403F22D0
#define CInvSlot__GetItemBase_x                                    0x1403EC9B0
#define CInvSlot__UpdateItem_x                                     0x1403F2790

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F6AB0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140417DE0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041A720
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404148E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416040
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417200

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E03D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E20C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051BC50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411020

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DE20

// CLabel
#define CLabel__UpdateText_x                                       0x140421AF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591270
#define CListWnd__dCListWnd_x                                      0x1405916C0
#define CListWnd__vftable_x                                        0x140A9F2B8
#define CListWnd__AddColumn_x                                      0x140591D60
#define CListWnd__AddColumn1_x                                     0x140591E00
#define CListWnd__AddLine_x                                        0x140591F60
#define CListWnd__AddString_x                                      0x1405924F0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140592A60
#define CListWnd__CalculateVSBRange_x                              0x140592D40
#define CListWnd__ClearSel_x                                       0x140592EF0
#define CListWnd__ClearAllSel_x                                    0x140592E90
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140592F50
#define CListWnd__Compare_x                                        0x140593110
#define CListWnd__Draw_x                                           0x1405935E0
#define CListWnd__DrawColumnSeparators_x                           0x140594190
#define CListWnd__DrawHeader_x                                     0x140594250
#define CListWnd__DrawItem_x                                       0x140594930
#define CListWnd__DrawLine_x                                       0x1405952B0
#define CListWnd__DrawSeparator_x                                  0x140595770
#define CListWnd__EnableLine_x                                     0x140595B90
#define CListWnd__EnsureVisible_x                                  0x140595BF0
#define CListWnd__ExtendSel_x                                      0x140595CF0
#define CListWnd__GetColumnMinWidth_x                              0x140596020
#define CListWnd__GetColumnWidth_x                                 0x1405960A0
#define CListWnd__GetCurSel_x                                      0x1405961A0
#define CListWnd__GetItemData_x                                    0x140596520
#define CListWnd__GetItemHeight_x                                  0x140596560
#define CListWnd__GetItemRect_x                                    0x140596780
#define CListWnd__GetItemText_x                                    0x140596A20
#define CListWnd__GetSelList_x                                     0x140596C70
#define CListWnd__GetSeparatorRect_x                               0x140596E60
#define CListWnd__InsertLine_x                                     0x1405982D0
#define CListWnd__RemoveLine_x                                     0x140598940
#define CListWnd__SetColors_x                                      0x140598D00
#define CListWnd__SetColumnJustification_x                         0x140598D20
#define CListWnd__SetColumnLabel_x                                 0x140598DA0
#define CListWnd__SetColumnWidth_x                                 0x140598F40
#define CListWnd__SetCurSel_x                                      0x140599010
#define CListWnd__SetItemColor_x                                   0x140599280
#define CListWnd__SetItemData_x                                    0x140599320
#define CListWnd__SetItemText_x                                    0x140599560
#define CListWnd__Sort_x                                           0x140599970
#define CListWnd__ToggleSel_x                                      0x140599AE0
#define CListWnd__SetColumnsSizable_x                              0x140598F90
#define CListWnd__SetItemWnd_x                                     0x140599690
#define CListWnd__GetItemWnd_x                                     0x140596C00
#define CListWnd__SetItemIcon_x                                    0x140599360
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592830
#define CListWnd__SetVScrollPos_x                                  0x1405998D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140434DD0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A060E8
#define MapViewMap__Clear_x                                        0x140436950
#define MapViewMap__SetZoom_x                                      0x14043CFA0
#define MapViewMap__HandleLButtonDown_x                            0x140439AE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045E660  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140464C00
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404653A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140468BC0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140467F00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046CE50

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063F680
#define CPacketScrambler__hton_x                                   0x14063F670

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BA270
#define CSidlManagerBase__FindAnimation1_x                         0x1405BA1B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BA8A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BA650
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B95B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9540
#define CSidlManagerBase__CreateXWnd_x                             0x1405B8B80

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D33B0
#define CSidlManager__CreateXWnd_x                                 0x1404D3570

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057EDB0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057EEE0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9420 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F060
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057E4E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057E5B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057E7C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057F750
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057F980
#define CSidlScreenWnd__GetChildItem_x                             0x14057FB20
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057FD70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140589F10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405800E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580450
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140580D00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581700
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EEC808
#define CSidlScreenWnd__StoreIniInfo_x                             0x140581D90
#define CSidlScreenWnd__StoreIniVis_x                              0x140582580
#define CSidlScreenWnd__vftable_x                                  0x140A9E528
#define CSidlScreenWnd__WndNotification_x                          0x1405825D0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031BB70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C010 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031BF40
#define CSkillMgr__IsActivatedSkill_x                              0x14031C3C0
#define CSkillMgr__IsCombatSkill_x                                 0x14031C400
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031C330
#define CSkillMgr__GetSkillLastUsed_x                              0x14031BF90

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059A450
#define CSliderWnd__SetValue_x                                     0x14059AC60
#define CSliderWnd__SetNumTicks_x                                  0x14059AAE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9A20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059F400
#define CStmlWnd__CalculateHSBRange_x                              0x1405898E0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A02A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A0DA0
#define CStmlWnd__ForceParseNow_x                                  0x1405A0E40
#define CStmlWnd__GetVisibleText_x                                 0x1405A1510
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3270
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A32B0
#define CStmlWnd__SetSTMLText_x                                    0x1405AA280
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AA430
#define CStmlWnd__UpdateHistoryString_x                            0x1405AA7C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B030
#define CTabWnd__DrawCurrentPage_x                                 0x14059B0D0
#define CTabWnd__DrawTab_x                                         0x14059B4A0
#define CTabWnd__GetTabRect_x                                      0x14059BB10
#define CTabWnd__InsertPage_x                                      0x14059BDE0
#define CTabWnd__RemovePage_x                                      0x14059C070
#define CTabWnd__SetPage_x                                         0x14059C1D0
#define CTabWnd__UpdatePage_x                                      0x14059C4D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3510
#define CPageWnd__SetTabText_x                                     0x1405C3580

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3E0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA7F0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B1C50
#define CTextureFont__DrawWrappedText1_x                           0x1405B1B60
#define CTextureFont__DrawWrappedText2_x                           0x1405B1D80
#define CTextureFont__GetTextExtent_x                              0x1405B2130
#define CTextureFont__GetHeight_x                                  0x1405B20F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C7B80

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E0C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1BEC0
#define CXStr__gCXStrAccess_x                                      0x140EEC608

// CXWnd
#define CXWnd__BringToTop_x                                        0x140584F90
#define CXWnd__ClrFocus_x                                          0x140585280
#define CXWnd__Destroy_x                                           0x140585400
#define CXWnd__DoAllDrawing_x                                      0x140585510
#define CXWnd__DrawColoredRect_x                                   0x140585CD0
#define CXWnd__DrawTooltip_x                                       0x140587330
#define CXWnd__DrawTooltipAtPoint_x                                0x1405873E0
#define CXWnd__GetChildItem_x                                      0x140587CE0
#define CXWnd__GetChildWndAt_x                                     0x140587DA0
#define CXWnd__GetClientRect_x                                     0x140588060
#define CXWnd__GetClientClipRect_x                                 0x140587F10
#define CXWnd__GetRelativeRect_x                                   0x140589A20
#define CXWnd__GetScreenClipRect_x                                 0x140589B20
#define CXWnd__GetScreenRect_x                                     0x140589CA0
#define CXWnd__GetTooltipRect_x                                    0x140589E10
#define CXWnd__IsActive_x                                          0x14058A3D0
#define CXWnd__IsDescendantOf_x                                    0x14058A400
#define CXWnd__IsReallyVisible_x                                   0x14058A470
#define CXWnd__IsType_x                                            0x14058A4B0
#define CXWnd__Minimize_x                                          0x14058A5B0
#define CXWnd__ProcessTransition_x                                 0x14058B430
#define CXWnd__Resize_x                                            0x14058B540
#define CXWnd__Right_x                                             0x14058B5E0
#define CXWnd__SetFocus_x                                          0x14058B990
#define CXWnd__SetFont_x                                           0x14058B9E0
#define CXWnd__SetKeyTooltip_x                                     0x14058BAF0
#define CXWnd__SetMouseOver_x                                      0x14058BC30
#define CXWnd__SetParent_x                                         0x14058BCB0
#define CXWnd__StartFade_x                                         0x14058C0F0
#define CXWnd__vftable_x                                           0x140A9EB18
#define CXWnd__CXWnd_x                                             0x140583B70
#define CXWnd__dCXWnd_x                                            0x1405844B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CE630

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC090
#define CXWndManager__DrawCursor_x                                 0x1405AC370
#define CXWndManager__DrawWindows_x                                0x1405AC5D0
#define CXWndManager__GetKeyboardFlags_x                           0x1405ACCA0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ACCE0
#define CXWndManager__RemoveWnd_x                                  0x1405B0310

// CDBStr
#define CDBStr__GetString_x                                        0x140183AF0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140649480

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE6A0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD3A0
#define CCharacterListWnd__Quit_x                                  0x1400CE680
#define CCharacterListWnd__UpdateList_x                            0x1400CF510

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617060
#define ItemBase__CreateItemTagString_x                            0x140617AC0
#define ItemBase__GetImageNum_x                                    0x14061A060
#define ItemBase__GetItemValue_x                                   0x14061BBC0
#define ItemBase__IsEmpty_x                                        0x14061D7C0
#define ItemBase__IsKeyRingItem_x                                  0x14061DEE0
#define ItemBase__ValueSellMerchant_x                              0x140622130
#define ItemClient__CanDrop_x                                      0x1402A4E40
#define ItemClient__CanGoInBag_x                                   0x1402A4F70
#define ItemClient__CreateItemClient_x                             0x1402A5250
#define ItemClient__dItemClient_x                                  0x1402A4CB0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3120
#define EQ_LoadingS__Array_x                                       0x140D08230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062E8E0
#define PcBase__GetCombatAbility_x                                 0x14062EFD0
#define PcBase__GetCombatAbilityTimer_x                            0x14062F070
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062F7C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406302B0
#define PcClient__AlertInventoryChanged_x                          0x1402C7420
#define PcClient__GetConLevel_x                                    0x1402C7A40  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA1E0
#define PcClient__HasLoreItem_x                                    0x1402CB1B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8A40
#define PcZoneClient__RemoveMyAffect_x                             0x1402DC640

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140211E20  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140211FD0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212130  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212070  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024BF30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E2D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068CD70
#define PlayerBase__CanSee1_x                                      0x14068CE40
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068D300
#define PlayerBase__HasProperty_x                                  0x14068D4D0
#define PlayerBase__IsTargetable_x                                 0x14068D590
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9130
#define PlayerClient__GetPcClient_x                                0x1402EB960
#define PlayerClient__PlayerClient_x                               0x1402E23F0
#define PlayerClient__SetNameSpriteState_x                         0x1402EEDB0
#define PlayerClient__SetNameSpriteTint_x                          0x1402EFD70
#define PlayerZoneClient__ChangeHeight_x                           0x1402FE320
#define PlayerZoneClient__DoAttack_x                               0x1402FF030
#define PlayerZoneClient__GetLevel_x                               0x140302760
#define PlayerZoneClient__IsValidTeleport_x                        0x14024ECC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192010

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F7C40  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F7CF0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F7DF0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7710
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068C930

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA2A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A9EA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A9F10
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA230  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA3C0
#define KeypressHandler__HandleKeyUp_x                             0x1402AA4E0
#define KeypressHandler__SaveKeymapping_x                          0x1402AA140  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140646FC0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140640DB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1750  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6A80
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9140
#define PcZoneClient__RemovePetEffect_x                            0x1402DC740
#define PcZoneClient__HasAlternateAbility_x                        0x1402D9D20
#define PcZoneClient__CanEquipItem_x                               0x1402D4DC0
#define PcZoneClient__GetItemByID_x                                0x1402D7B10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DC4C0
#define PcZoneClient__BandolierSwap_x                              0x1402D3E10

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402537F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403AF950

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A43B0
#define CContainerMgr__CloseContainer_x                            0x1403A3CF0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4730

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498060

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D010

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140428DD0
#define CLootWnd__RequestLootSlot_x                                0x140429DE0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2440
#define EQ_Spell__SpellAffects_x                                   0x1401D3700
#define EQ_Spell__SpellAffectBase_x                                0x1401D3660
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7130
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D70E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3320
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2EE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D27B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4110
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3820
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F3020

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FB780  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AC90
#define CTaskManager__GetTaskStatus_x                              0x14017ADA0
#define CTaskManager__GetElementDescription_x                      0x14017A920

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D07B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF5F0
#define EqSoundManager__SoundAssistPlay_x                          0x1403211C0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321500  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058CE70
#define CTextureAnimation__SetCurCell_x                            0x14058D180

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B270

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140660EC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140660F40
#define CharacterBase__IsExpansionFlag_x                           0x1401F35B0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403820E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140382A50
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140383FA0

// messages
#define msg_spell_worn_off_x                                       0x140208750
#define msg_new_text_x                                             0x140203FE0
#define __msgTokenTextParam_x                                      0x1401FBB40
#define msgTokenText_x                                             0x1401FBA60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322B80
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322AA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069B1D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422240

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9080
#define CCursorAttachment__IsOkToActivate_x                        0x1403ABFD0
#define CCursorAttachment__RemoveAttachment_x                      0x1403AC280
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6020
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6210
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6220

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401490A0
#define CFindItemWnd__Update_x                                     0x140149A40
#define CFindItemWnd__PickupSelectedItem_x                         0x140143560

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152910
#define LootFiltersManager__GetItemFilterData_x                    0x140153420
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153CC0
#define LootFiltersManager__SetItemLootFilter_x                    0x140153F70

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047AE10

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031B730
#define CResolutionHandler__UpdateResolution_x                     0x14069F940

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A06C0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140665240  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140665130  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C53A0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C4F80

// ItemBase
#define ItemBase__IsLore_x                                         0x14061DFB0
#define ItemBase__IsLoreEquipped_x                                 0x14061E040

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD050

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C090
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C020
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C060

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315D10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123440
#define FactionManagerClient__HandleFactionMessage_x               0x1401237F0
#define FactionManagerClient__GetFactionStanding_x                 0x140122C10
#define FactionManagerClient__GetMaxFaction_x                      0x140122C10
#define FactionManagerClient__GetMinFaction_x                      0x140122AC0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC980

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EBF0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABA80
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAE00
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB8A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB820  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140327BF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315D10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402121C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582BC0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339320

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C950

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064A000
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB2B70

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140528D00

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
