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

#define __ClientDate                                               20240611u
#define __ExpectedVersionDate                                     "Jun 11 2024"
#define __ExpectedVersionTime                                     "17:37:10"
#define __ActualVersionDate_x                                      0x14093FA30
#define __ActualVersionTime_x                                      0x14093FA20
#define __ActualVersionBuild_x                                     0x1408D6470

// Memory Protection
#define __MemChecker0_x                                            0x1402AFF70
#define __MemChecker1_x                                            0x14056CC00
#define __MemChecker4_x                                            0x14027E840
#define __EncryptPad0_x                                            0x140D0CE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E45A80
#define instEQZoneInfo_x                                           0x140E45C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140215CC0
#define __gfMaxZoomCameraDistance_x                                0x1408D76E8
#define __gfMaxCameraDistance_x                                    0x140A7C244
#define __CurrentSocial_x                                          0x140BC8940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D04710
#define g_eqCommandStates_x                                        0x140D05780
#define __CommandList_x                                            0x140D059C0
#define __ScreenMode_x                                             0x140D8D27C
#define __gWorld_x                                                 0x140E3E320
#define __gpbCommandEvent_x                                        0x140E408E4
#define __ServerHost_x                                             0x140E3E008
#define __Guilds_x                                                 0x140E44630
#define __MemCheckBitmask_x                                        0x140E45FB7
#define __MemCheckActive_x                                         0x140E476A5
#define __MouseEventTime_x                                         0x140EBAFF0
#define DI8__MouseState_x                                          0x140EBF200
#define __heqmain_x                                                0x140EC1690
#define DI8__Mouse_x                                               0x140EBF1D0
#define __HWnd_x                                                   0x140EBF1D8
#define __Mouse_x                                                  0x140EC16A8
#define DI8__Keyboard_x                                            0x140EC16C8
#define __LoginName_x                                              0x140EC1DAC
#define __CurrentMapLabel_x                                        0x140ED55B0
#define __LabelCache_x                                             0x140ED6180
#define __ChatFilterDefs_x                                         0x140A17330
#define Teleport_Table_Size_x                                      0x140E40970
#define Teleport_Table_x                                           0x140E3E420

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E409C0
#define pinstActiveBanker_x                                        0x140E3E348
#define pinstActiveCorpse_x                                        0x140E3E338
#define pinstActiveGMaster_x                                       0x140E3E340
#define pinstActiveMerchant_x                                      0x140E3E330
#define pinstAltAdvManager_x                                       0x140D8E1D8
#define pinstCEverQuest_x                                          0x140EBF148
#define pinstCamActor_x                                            0x140D8D268
#define pinstCDBStr_x                                              0x140D8CF90
#define pinstCDisplay_x                                            0x140E40430
#define pinstControlledPlayer_x                                    0x140E3E3D8
#define pinstCResolutionHandler_x                                  0x141546948
#define pinstCSidlManager_x                                        0x140EE7480
#define pinstCXWndManager_x                                        0x140EE7478
#define instDynamicZone_x                                          0x140E444F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4453E
#define instExpeditionName_x                                       0x140E4457E
#define pinstDZMember_x                                            0x140E44608
#define pinstDZTimerInfo_x                                         0x140E44610
#define pinstEqLogin_x                                             0x140EC16F0
#define instTribute_x                                              0x140CFFD50
#define pinstDeviceInputProxy_x                                    0x140E45ADC
#define pinstEQSoundManager_x                                      0x140D8E558
#define pinstEQSpellStrings_x                                      0x140D71B60
#define pinstSGraphicsEngine_x                                     0x1415466C8
#define pinstLocalPC_x                                             0x140E3E410
#define pinstLocalPlayer_x                                         0x140E3E328
#define pinstCMercenaryClientManager_x                             0x140EBC8E8
#define pinstModelPlayer_x                                         0x140E3E358
#define pinstRenderInterface_x                                     0x1415466E0
#define pinstSkillMgr_x                                            0x140EBE580
#define pinstSpawnManager_x                                        0x140EBCCA0
#define pinstSpellManager_x                                        0x140EBE5E8
#define pinstStringTable_x                                         0x140E3E418
#define pinstSwitchManager_x                                       0x140E3DE80
#define pinstTarget_x                                              0x140E3E3D0
#define pinstTaskMember_x                                          0x140CFFD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3E3E0
#define pinstTradeTarget_x                                         0x140E3E350
#define instTributeActive_x                                        0x140CFFD79
#define pinstViewActor_x                                           0x140D8D260
#define pinstWorldData_x                                           0x140E40420
#define pinstPlayerPath_x                                          0x140EBCCC8
#define pinstTargetIndicator_x                                     0x140EBE698
#define EQObject_Top_x                                             0x140E3E3F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED2708
#define pinstCContainerMgr_x                                       0x140D8D508
#define pinstCContextMenuManager_x                                 0x140EE7160
#define pinstCInvSlotMgr_x                                         0x140D8D500
#define pinstCItemDisplayManager_x                                 0x140ED5180
#define pinstCPopupWndManager_x                                    0x140ED5A10
#define pinstCSpellDisplayMgr_x                                    0x140ED6060
#define pinstCTaskManager_x                                        0x140BC8C80
#define pinstEQSuiteTextureLoader_x                                0x140D16530
#define pinstItemIconCache_x                                       0x140ED2A68
#define pinstLootFiltersManager_x                                  0x140D8C9D8
#define pinstGFViewListener_x                                      0x140EE6938


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023E8F0
#define __CastRay_x                                                0x140236D30
#define __CastRay2_x                                               0x140236A30
#define __compress_block_x                                         0x1405222A0
#define __ConvertItemTags_x                                        0x140237190
#define __CleanItemTags_x                                          0x140087F20
#define __CreateCascadeMenuItems_x                                 0x1401865B0
#define __decompress_block_x                                       0x140568470
#define __DoesFileExist_x                                          0x140570AB0
#define __EQGetTime_x                                              0x14056D1B0
#define __ExecuteCmd_x                                             0x14020D5D0
#define __FixHeading_x                                             0x140698050
#define __FlushDxKeyboard_x                                        0x1403320F0
#define __get_bearing_x                                            0x140240AE0
#define __get_melee_range_x                                        0x140240BD0
#define __GetAnimationCache_x                                      0x1403AF690
#define __GetGaugeValueFromEQ_x                                    0x1404E3110
#define __GetLabelFromEQ_x                                         0x1404E4710
#define __GetXTargetType_x                                         0x140699330   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406980D0
#define __HelpPath_x                                               0x140EBAEB8   // Why?
#define __NewUIINI_x                                               0x1404F0190   // Why?
#define __ProcessDeviceEvents_x                                    0x14027EE50
#define __ProcessGameEvents_x                                      0x140273D30
#define __ProcessKeyboardEvents_x                                  0x140333840
#define __ProcessMouseEvents_x                                     0x140275260
#define __SaveColors_x                                             0x1401965A0
#define __STMLToText_x                                             0x1405753F0
#define __WndProc_x                                                0x1403308D0
#define CMemoryMappedFile__SetFile_x                               0x1407D0250
#define DrawNetStatus_x                                            0x1402BE430
#define Util__FastTime_x                                           0x14056C740
#define __eq_delete_x                                              0x14069FF54
#define __eq_new_x                                                 0x14069FF10
#define __CopyLayout_x                                             0x1402AC3C0
#define __ThrottleFrameRate_x                                      0x140263594
#define __ThrottleFrameRateEnd_x                                   0x1402635F4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140342EE0
#define CAAWnd__Update_x                                           0x1403431E0
#define CAAWnd__UpdateSelected_x                                   0x140344220

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA310
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2C00
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140824A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAC00

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A16B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1930
#define AltAdvManager__GetAAById_x                                 0x1401A0F80
#define AltAdvManager__CanTrainAbility_x                           0x1401A0DB0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0A70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0CE0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B20
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1D70
#define CharacterZoneClient__CanUseItem_x                          0x1400E6040
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2740
#define CharacterZoneClient__CastSpell_x                           0x1400D27E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1B70
#define CharacterZoneClient__Cur_HP_x                              0x1400E7750
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7910
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5570
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDDE0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC810  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6A20
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5510
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF9A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE870
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6BF0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7100
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AD0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEFB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E73C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFC30
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6C70
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0A10
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6E70
#define CharacterZoneClient__GetModCap_x                           0x1400F7FD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6F00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7110
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC40
#define CharacterZoneClient__HasSkill_x                            0x1400F3A00
#define CharacterZoneClient__HitBySpell_x                          0x1400D7BC0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB360
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7AB0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DB0A0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7E00
#define CharacterZoneClient__Max_Mana_x                            0x1402DB2C0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8260
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE700
#define CharacterZoneClient__SpellDuration_x                       0x1400DF400
#define CharacterZoneClient__TotalEffect_x                         0x1400E0750
#define CharacterZoneClient__UseSkill_x                            0x1400FD780


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361390

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036B6F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367570
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140366600

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036DDA0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9AF30

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391020
#define CChatWindowManager__InitContextMenu_x                      0x1403911B0
#define CChatWindowManager__FreeChatWindow_x                       0x1403900A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140398D60
#define CChatWindowManager__CreateChatWindow_x                     0x14038F9E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105B20

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140399DA0
#define CChatWindow__Clear_x                                       0x14039AD00
#define CChatWindow__WndNotification_x                             0x14039BEF0
#define CChatWindow__AddHistory_x                                  0x14039A800

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AA390
#define CContextMenu__RemoveMenuItem_x                             0x1405AA780
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AA750
#define CContextMenu__CheckMenuItem_x                              0x1405AA5C0
#define CContextMenu__SetMenuItem_x                                0x1405AA7A0
#define CContextMenu__AddSeparator_x                               0x1405AA500

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059C2E0
#define CContextMenuManager__RemoveMenu_x                          0x14059C8A0
#define CContextMenuManager__PopupMenu_x                           0x14059C5F0
#define CContextMenuManager__Flush_x                               0x14059C360
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A75F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406616E0
#define CChatService__GetFriendName_x                              0x1406616F0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058D0B0
#define CComboWnd__Draw_x                                          0x14058D1B0
#define CComboWnd__GetCurChoice_x                                  0x14058D490  // unused
#define CComboWnd__GetListRect_x                                   0x14058D530
#define CComboWnd__InsertChoice_x                                  0x14058D870
#define CComboWnd__SetColors_x                                     0x14058DC00
#define CComboWnd__SetChoice_x                                     0x14058DBC0
#define CComboWnd__GetItemCount_x                                  0x14058D520
#define CComboWnd__GetCurChoiceText_x                              0x14058D4D0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058D460
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058D930

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5380
#define CContainerWnd__SetContainer_x                              0x1403FA920
#define CContainerWnd__vftable_x                                   0x1409B3478

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8CFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C4460
#define CDisplay__PreZoneMainUI_x                                  0x1401934D0
#define CDisplay__CleanGameUI_x                                    0x140185690
#define CDisplay__GetClickedActor_x                                0x140189800
#define CDisplay__GetUserDefinedColor_x                            0x14018A470
#define CDisplay__InitCharSelectUI_x                               0x14018A720
#define CDisplay__ReloadUI_x                                       0x1401957C0
#define CDisplay__WriteTextHD2_x                                   0x14019C7D0
#define CDisplay__TrueDistance_x                                   0x14019C480
#define CDisplay__SetViewActor_x                                   0x140198CC0
#define CDisplay__GetFloorHeight_x                                 0x140189A60
#define CDisplay__ToggleScreenshotMode_x                           0x14019BF70
#define CDisplay__RealRender_World_x                               0x140194BA0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CE620
#define CEditWnd__DrawCaret_x                                      0x1405C0150  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C0610
#define CEditWnd__GetCaretPt_x                                     0x1405C0890  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C08D0
#define CEditWnd__GetDisplayString_x                               0x1405C0B40
#define CEditWnd__GetHorzOffset_x                                  0x1405C0D80
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C0ED0
#define CEditWnd__GetSelStartPt_x                                  0x1405C11B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1000
#define CEditWnd__PointFromPrintableChar_x                         0x1405C1D60
#define CEditWnd__ReplaceSelection_x                               0x1405C2110
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C25B0
#define CEditWnd__SetEditable_x                                    0x1405C2840
#define CEditWnd__SetWindowText_x                                  0x1405C2870

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402646A0
#define CEverQuest__ClickedPlayer_x                                0x14025A1A0
#define CEverQuest__CreateTargetIndicator_x                        0x14025AA60
#define CEverQuest__DoTellWindow_x                                 0x140105830 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401060F0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266060
#define CEverQuest__dsp_chat_x                                     0x140105260 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140290260
#define CEverQuest__Emote_x                                        0x140266A40
#define CEverQuest__GetBodyTypeDesc_x                              0x1402677F0
#define CEverQuest__GetClassDesc_x                                 0x140267850
#define CEverQuest__GetClassThreeLetterCode_x                      0x140267C20
#define CEverQuest__GetDeityDesc_x                                 0x140267ED0
#define CEverQuest__GetLangDesc_x                                  0x140268300
#define CEverQuest__GetRaceDesc_x                                  0x1402686A0
#define CEverQuest__InterpretCmd_x                                 0x140269FD0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027EEC0
#define CEverQuest__LMouseUp_x                                     0x14026B9C0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027C6E0
#define CEverQuest__RMouseUp_x                                     0x140275DE0
#define CEverQuest__SetGameState_x                                 0x140281400
#define CEverQuest__UPCNotificationFlush_x                         0x140286D30 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026B630
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277190
#define CEverQuest__ReportSuccessfulHit_x                          0x140277FB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B9A50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0EB0
#define CGuild__GetGuildName_x                                     0x1400C0EF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DBF10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A1E50
#define CHotButton__SetCheck_x                                     0x1402A2120

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F3660
#define CInvSlotMgr__MoveItem_x                                    0x1403F3840
#define CInvSlotMgr__SelectSlot_x                                  0x1403F51F0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F0850
#define CInvSlot__SliderComplete_x                                 0x1403F1DA0
#define CInvSlot__GetItemBase_x                                    0x1403EC480
#define CInvSlot__UpdateItem_x                                     0x1403F2260

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F6580

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140417900
#define CItemDisplayWnd__UpdateStrings_x                           0x14041A260
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404143E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140415B50
#define CItemDisplayWnd__RequestConvertItem_x                      0x140416D10

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DFC40
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E1930

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051B610

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140410B00

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DE40

// CLabel
#define CLabel__UpdateText_x                                       0x140421630

// CListWnd
#define CListWnd__CListWnd_x                                       0x140590A40
#define CListWnd__dCListWnd_x                                      0x140590E90
#define CListWnd__vftable_x                                        0x140A99088
#define CListWnd__AddColumn_x                                      0x140591530
#define CListWnd__AddColumn1_x                                     0x1405915D0
#define CListWnd__AddLine_x                                        0x140591730
#define CListWnd__AddString_x                                      0x140591CC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140592230
#define CListWnd__CalculateVSBRange_x                              0x140592510
#define CListWnd__ClearSel_x                                       0x1405926B0
#define CListWnd__ClearAllSel_x                                    0x140592650
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140592710
#define CListWnd__Compare_x                                        0x1405928D0
#define CListWnd__Draw_x                                           0x140592DA0
#define CListWnd__DrawColumnSeparators_x                           0x140593940
#define CListWnd__DrawHeader_x                                     0x140593A00
#define CListWnd__DrawItem_x                                       0x1405940D0
#define CListWnd__DrawLine_x                                       0x140594A50
#define CListWnd__DrawSeparator_x                                  0x140594F10
#define CListWnd__EnableLine_x                                     0x140595330
#define CListWnd__EnsureVisible_x                                  0x140595390
#define CListWnd__ExtendSel_x                                      0x140595490
#define CListWnd__GetColumnMinWidth_x                              0x1405957C0
#define CListWnd__GetColumnWidth_x                                 0x140595840
#define CListWnd__GetCurSel_x                                      0x140595940
#define CListWnd__GetItemData_x                                    0x140595CB0
#define CListWnd__GetItemHeight_x                                  0x140595CF0
#define CListWnd__GetItemRect_x                                    0x140595F10
#define CListWnd__GetItemText_x                                    0x1405961B0
#define CListWnd__GetSelList_x                                     0x140596400
#define CListWnd__GetSeparatorRect_x                               0x1405965F0
#define CListWnd__InsertLine_x                                     0x140597A50
#define CListWnd__RemoveLine_x                                     0x1405980C0
#define CListWnd__SetColors_x                                      0x140598480
#define CListWnd__SetColumnJustification_x                         0x1405984A0
#define CListWnd__SetColumnLabel_x                                 0x140598520
#define CListWnd__SetColumnWidth_x                                 0x1405986C0
#define CListWnd__SetCurSel_x                                      0x140598790
#define CListWnd__SetItemColor_x                                   0x140598A00
#define CListWnd__SetItemData_x                                    0x140598AA0
#define CListWnd__SetItemText_x                                    0x140598CE0
#define CListWnd__Sort_x                                           0x1405990F0
#define CListWnd__ToggleSel_x                                      0x140599260
#define CListWnd__SetColumnsSizable_x                              0x140598710
#define CListWnd__SetItemWnd_x                                     0x140598E10
#define CListWnd__GetItemWnd_x                                     0x140596390
#define CListWnd__SetItemIcon_x                                    0x140598AE0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592000
#define CListWnd__SetVScrollPos_x                                  0x140599050

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404348C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409FFF48
#define MapViewMap__Clear_x                                        0x140436430
#define MapViewMap__SetZoom_x                                      0x14043CA80
#define MapViewMap__HandleLButtonDown_x                            0x1404395C0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045E110  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404646A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140464E40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140468650
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404679A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046C8E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063E170
#define CPacketScrambler__hton_x                                   0x14063E160

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B9A50
#define CSidlManagerBase__FindAnimation1_x                         0x1405B9990
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BA080
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B9E30
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B8D90
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B8D20
#define CSidlManagerBase__CreateXWnd_x                             0x1405B8380

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D2C70
#define CSidlManager__CreateXWnd_x                                 0x1404D2E30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057E750
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057E860
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C8BD0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057E9C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057DEA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057DF70
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057E180
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057F0A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057F2D0
#define CSidlScreenWnd__GetChildItem_x                             0x14057F460
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057F6B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140589660 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057FA20
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057FD90
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140580640
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140580F30
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE67D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140581550
#define CSidlScreenWnd__StoreIniVis_x                              0x140581D40
#define CSidlScreenWnd__vftable_x                                  0x140A982F8
#define CSidlScreenWnd__WndNotification_x                          0x140581D90

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031B650 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031BAF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031BA20
#define CSkillMgr__IsActivatedSkill_x                              0x14031BEA0
#define CSkillMgr__IsCombatSkill_x                                 0x14031BEE0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031BE10
#define CSkillMgr__GetSkillLastUsed_x                              0x14031BA70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140599BD0
#define CSliderWnd__SetValue_x                                     0x14059A3E0
#define CSliderWnd__SetNumTicks_x                                  0x14059A260

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D92A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059ED20
#define CStmlWnd__CalculateHSBRange_x                              0x140589040
#define CStmlWnd__CalculateVSBRange_x                              0x14059FC30
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A0680
#define CStmlWnd__ForceParseNow_x                                  0x1405A0720
#define CStmlWnd__GetVisibleText_x                                 0x1405A0DF0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A2B30
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A2B70
#define CStmlWnd__SetSTMLText_x                                    0x1405A9B40
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A9CF0
#define CStmlWnd__UpdateHistoryString_x                            0x1405AA080

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059A990
#define CTabWnd__DrawCurrentPage_x                                 0x14059AA30
#define CTabWnd__DrawTab_x                                         0x14059AE00
#define CTabWnd__GetTabRect_x                                      0x14059B470
#define CTabWnd__InsertPage_x                                      0x14059B740
#define CTabWnd__RemovePage_x                                      0x14059B9C0
#define CTabWnd__SetPage_x                                         0x14059BB20
#define CTabWnd__UpdatePage_x                                      0x14059BE20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C2CC0
#define CPageWnd__SetTabText_x                                     0x1405C2D30

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA600  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAA10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B1460
#define CTextureFont__DrawWrappedText1_x                           0x1405B1370
#define CTextureFont__DrawWrappedText2_x                           0x1405B1590
#define CTextureFont__GetTextExtent_x                              0x1405B1940
#define CTextureFont__GetHeight_x                                  0x1405B1900

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C7330

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057DA80

// CXStr
#define CXStr__gFreeLists_x                                        0x140D15EA0
#define CXStr__gCXStrAccess_x                                      0x140EE65D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140584790
#define CXWnd__ClrFocus_x                                          0x140584A80
#define CXWnd__Destroy_x                                           0x140584C00
#define CXWnd__DoAllDrawing_x                                      0x140584D10
#define CXWnd__DrawColoredRect_x                                   0x1405854B0
#define CXWnd__DrawTooltip_x                                       0x140586AF0
#define CXWnd__DrawTooltipAtPoint_x                                0x140586BA0
#define CXWnd__GetChildItem_x                                      0x1405874A0
#define CXWnd__GetChildWndAt_x                                     0x140587560
#define CXWnd__GetClientRect_x                                     0x140587810
#define CXWnd__GetClientClipRect_x                                 0x1405876C0
#define CXWnd__GetRelativeRect_x                                   0x140589180
#define CXWnd__GetScreenClipRect_x                                 0x140589280
#define CXWnd__GetScreenRect_x                                     0x1405893F0
#define CXWnd__GetTooltipRect_x                                    0x140589560
#define CXWnd__IsActive_x                                          0x140589B20
#define CXWnd__IsDescendantOf_x                                    0x140589B50
#define CXWnd__IsReallyVisible_x                                   0x140589BC0
#define CXWnd__IsType_x                                            0x140589C00
#define CXWnd__Minimize_x                                          0x140589D00
#define CXWnd__ProcessTransition_x                                 0x14058ABC0
#define CXWnd__Resize_x                                            0x14058ACE0
#define CXWnd__Right_x                                             0x14058AD80
#define CXWnd__SetFocus_x                                          0x14058B140
#define CXWnd__SetFont_x                                           0x14058B190
#define CXWnd__SetKeyTooltip_x                                     0x14058B290
#define CXWnd__SetMouseOver_x                                      0x14058B3D0
#define CXWnd__SetParent_x                                         0x14058B450
#define CXWnd__StartFade_x                                         0x14058B890
#define CXWnd__vftable_x                                           0x140A988E8
#define CXWnd__CXWnd_x                                             0x140583350
#define CXWnd__dCXWnd_x                                            0x140583CA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CDDA0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AB920
#define CXWndManager__DrawCursor_x                                 0x1405ABC00
#define CXWndManager__DrawWindows_x                                0x1405ABE60
#define CXWndManager__GetKeyboardFlags_x                           0x1405AC520
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AC560
#define CXWndManager__RemoveWnd_x                                  0x1405AFB40

// CDBStr
#define CDBStr__GetString_x                                        0x140183840

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406473F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE860
#define CCharacterListWnd__EnterWorld_x                            0x1400CD560
#define CCharacterListWnd__Quit_x                                  0x1400CE840
#define CCharacterListWnd__UpdateList_x                            0x1400CF6D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140616180
#define ItemBase__CreateItemTagString_x                            0x140616BE0
#define ItemBase__GetImageNum_x                                    0x140619190
#define ItemBase__GetItemValue_x                                   0x14061ACA0
#define ItemBase__IsEmpty_x                                        0x14061C830
#define ItemBase__IsKeyRingItem_x                                  0x14061CF40
#define ItemBase__ValueSellMerchant_x                              0x1406210D0
#define ItemClient__CanDrop_x                                      0x1402A4450
#define ItemClient__CanGoInBag_x                                   0x1402A4580
#define ItemClient__CreateItemClient_x                             0x1402A4860
#define ItemClient__dItemClient_x                                  0x1402A42C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2E50
#define EQ_LoadingS__Array_x                                       0x140D02220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062D7C0
#define PcBase__GetCombatAbility_x                                 0x14062DE60
#define PcBase__GetCombatAbilityTimer_x                            0x14062DF00
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062E650
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062F140
#define PcClient__AlertInventoryChanged_x                          0x1402C6A00
#define PcClient__GetConLevel_x                                    0x1402C7020  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C97C0
#define PcClient__HasLoreItem_x                                    0x1402CA790
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8040
#define PcZoneClient__RemoveMyAffect_x                             0x1402DC150

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140211CE0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140211E90  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140211FF0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140211F30  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024B870  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E040

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068ACD0
#define PlayerBase__CanSee1_x                                      0x14068ADA0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068B260
#define PlayerBase__HasProperty_x                                  0x14068B430
#define PlayerBase__IsTargetable_x                                 0x14068B4F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E8C30
#define PlayerClient__GetPcClient_x                                0x1402EB460
#define PlayerClient__PlayerClient_x                               0x1402E1EF0
#define PlayerClient__SetNameSpriteState_x                         0x1402EE8B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402EF870
#define PlayerZoneClient__ChangeHeight_x                           0x1402FDE20
#define PlayerZoneClient__DoAttack_x                               0x1402FEB30
#define PlayerZoneClient__GetLevel_x                               0x140302260
#define PlayerZoneClient__IsValidTeleport_x                        0x14024E600
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191D50

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F7740  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F77F0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F78F0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7210
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068A890

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A98C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A94C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A9530
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A9850  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A99E0
#define KeypressHandler__HandleKeyUp_x                             0x1402A9B00
#define KeypressHandler__SaveKeymapping_x                          0x1402A9760  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140644F30  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063F8A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D0D50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6060
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D8740
#define PcZoneClient__RemovePetEffect_x                            0x1402DC250
#define PcZoneClient__HasAlternateAbility_x                        0x1402D9330
#define PcZoneClient__CanEquipItem_x                               0x1402D43A0
#define PcZoneClient__GetItemByID_x                                0x1402D7100
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DBFD0
#define PcZoneClient__BandolierSwap_x                              0x1402D3380

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253130

// IconCache
#define IconCache__GetIcon_x                                       0x1403AF6C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4140
#define CContainerMgr__CloseContainer_x                            0x1403A3A80
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A44C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140497910

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029C620

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140428900
#define CLootWnd__RequestLootSlot_x                                0x140429910

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2040
#define EQ_Spell__SpellAffects_x                                   0x1401D3300
#define EQ_Spell__SpellAffectBase_x                                0x1401D3260
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D72E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7290
#define EQ_Spell__IsSPAStacking_x                                  0x1401D2F20
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2AE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D23B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFAF0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F3920
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3030
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F2840

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FAFD0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AA00
#define CTaskManager__GetTaskStatus_x                              0x14017AB10
#define CTaskManager__GetElementDescription_x                      0x14017A690

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D03B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF1F0
#define EqSoundManager__SoundAssistPlay_x                          0x140320CA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140320FE0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058C640
#define CTextureAnimation__SetCurCell_x                            0x14058C950

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029A880

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065EE20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065EEA0
#define CharacterBase__IsExpansionFlag_x                           0x1401F3770

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140381F60
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403828D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140383E20

// messages
#define msg_spell_worn_off_x                                       0x140208610
#define msg_new_text_x                                             0x140203EA0
#define __msgTokenTextParam_x                                      0x1401FBBD0
#define msgTokenText_x                                             0x1401FBAF0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322660
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322580

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140699710

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140421D80

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A8E00
#define CCursorAttachment__IsOkToActivate_x                        0x1403ABD40
#define CCursorAttachment__RemoveAttachment_x                      0x1403ABFF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C57D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C59C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C59D0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401490C0
#define CFindItemWnd__Update_x                                     0x140149A60
#define CFindItemWnd__PickupSelectedItem_x                         0x140143580

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152930
#define LootFiltersManager__GetItemFilterData_x                    0x140153440
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153CE0
#define LootFiltersManager__SetItemLootFilter_x                    0x140153F90

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047A760

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14069DFE0
#define CResolutionHandler__HandleSysCommand_x                     0x14069F8B0
#define CResolutionHandler__GetWindowedStyle_x                     0x14031B210

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0470

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406631A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140663090  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C50B0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C4C90

// ItemBase
#define ItemBase__IsLore_x                                         0x14061D010
#define ItemBase__IsLoreEquipped_x                                 0x14061D0A0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BC640

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024B9D0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024B960
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024B9A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315810

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401234B0
#define FactionManagerClient__HandleFactionMessage_x               0x140123860
#define FactionManagerClient__GetFactionStanding_x                 0x140122C80
#define FactionManagerClient__GetMaxFaction_x                      0x140122C80
#define FactionManagerClient__GetMinFaction_x                      0x140122B30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC7B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EC40

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB7A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAB20
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB5C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB540  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403276C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315810

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212080

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582380

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084DD0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140338E50

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C7A0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140647F70
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAC910

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405286C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
