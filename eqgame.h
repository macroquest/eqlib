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

#define __ClientDate                                               20240715u
#define __ExpectedVersionDate                                     "Jul 15 2024"
#define __ExpectedVersionTime                                     "11:50:24"
#define __ActualVersionDate_x                                      0x140942B20
#define __ActualVersionTime_x                                      0x140942B10
#define __ActualVersionBuild_x                                     0x1408D9560

// Memory Protection
#define __MemChecker0_x                                            0x1402B15A0
#define __MemChecker1_x                                            0x14056E540
#define __MemChecker4_x                                            0x14027FEB0
#define __EncryptPad0_x                                            0x140D0FE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E48A80
#define instEQZoneInfo_x                                           0x140E48C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216AF0
#define __gfMaxZoomCameraDistance_x                                0x1408DA7D8
#define __gfMaxCameraDistance_x                                    0x140A7F314
#define __CurrentSocial_x                                          0x140BCB940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D07710
#define g_eqCommandStates_x                                        0x140D08780
#define __CommandList_x                                            0x140D089C0
#define __ScreenMode_x                                             0x140D90264
#define __gWorld_x                                                 0x140E40F00
#define __gpbCommandEvent_x                                        0x140E40F10
#define __ServerHost_x                                             0x140E410F8
#define __Guilds_x                                                 0x140E47630
#define __MemCheckBitmask_x                                        0x140E48FB7
#define __MemCheckActive_x                                         0x140E4A6A5
#define __MouseEventTime_x                                         0x140EBDFF0
#define DI8__MouseState_x                                          0x140EC2238
#define __heqmain_x                                                0x140EC46D8
#define DI8__Mouse_x                                               0x140EC2188
#define __HWnd_x                                                   0x140EC2210
#define __Mouse_x                                                  0x140EC2144
#define DI8__Keyboard_x                                            0x140EC2160
#define __LoginName_x                                              0x140EC4DBC
#define __CurrentMapLabel_x                                        0x140ED85C0
#define __LabelCache_x                                             0x140ED9190
#define __ChatFilterDefs_x                                         0x140A1A420
#define Teleport_Table_Size_x                                      0x140E40F18
#define Teleport_Table_x                                           0x140E41510

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E439C0
#define pinstActiveBanker_x                                        0x140E41428
#define pinstActiveCorpse_x                                        0x140E41418
#define pinstActiveGMaster_x                                       0x140E41420
#define pinstActiveMerchant_x                                      0x140E41410
#define pinstAltAdvManager_x                                       0x140D911D8
#define pinstCEverQuest_x                                          0x140EC2180
#define pinstCamActor_x                                            0x140D90248
#define pinstCDBStr_x                                              0x140D8FF90
#define pinstCDisplay_x                                            0x140E41500
#define pinstControlledPlayer_x                                    0x140E414B8
#define pinstCResolutionHandler_x                                  0x141549958
#define pinstCSidlManager_x                                        0x140EEA490
#define pinstCXWndManager_x                                        0x140EEA488
#define instDynamicZone_x                                          0x140E474F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4753E
#define instExpeditionName_x                                       0x140E4757E
#define pinstDZMember_x                                            0x140E47608
#define pinstDZTimerInfo_x                                         0x140E47610
#define pinstEqLogin_x                                             0x140EC4700
#define instTribute_x                                              0x140D02D50
#define pinstDeviceInputProxy_x                                    0x140E48ADC
#define pinstEQSoundManager_x                                      0x140D91558
#define pinstEQSpellStrings_x                                      0x140D74B60
#define pinstSGraphicsEngine_x                                     0x1415496D8
#define pinstLocalPC_x                                             0x140E414E8
#define pinstLocalPlayer_x                                         0x140E41408
#define pinstCMercenaryClientManager_x                             0x140EBF8E8
#define pinstModelPlayer_x                                         0x140E41438
#define pinstRenderInterface_x                                     0x1415496F0
#define pinstSkillMgr_x                                            0x140EC1580
#define pinstSpawnManager_x                                        0x140EBFCA0
#define pinstSpellManager_x                                        0x140EC15E8
#define pinstStringTable_x                                         0x140E41508
#define pinstSwitchManager_x                                       0x140E40E80
#define pinstTarget_x                                              0x140E414B0
#define pinstTaskMember_x                                          0x140D02D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E414C0
#define pinstTradeTarget_x                                         0x140E41430
#define instTributeActive_x                                        0x140D02D79
#define pinstViewActor_x                                           0x140D90240
#define pinstWorldData_x                                           0x140E414F8
#define pinstPlayerPath_x                                          0x140EBFCC8
#define pinstTargetIndicator_x                                     0x140EC1698
#define EQObject_Top_x                                             0x140E414D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED5718
#define pinstCContainerMgr_x                                       0x140D90520
#define pinstCContextMenuManager_x                                 0x140EEA170
#define pinstCInvSlotMgr_x                                         0x140D90518
#define pinstCItemDisplayManager_x                                 0x140ED8190
#define pinstCPopupWndManager_x                                    0x140ED8A20
#define pinstCSpellDisplayMgr_x                                    0x140ED9070
#define pinstCTaskManager_x                                        0x140BCBC80
#define pinstEQSuiteTextureLoader_x                                0x140D19530
#define pinstItemIconCache_x                                       0x140ED5A78
#define pinstLootFiltersManager_x                                  0x140D8F9D8
#define pinstGFViewListener_x                                      0x140EE9948


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023FCB0
#define __CastRay_x                                                0x140238100
#define __CastRay2_x                                               0x140237E00
#define __compress_block_x                                         0x140523BE0
#define __ConvertItemTags_x                                        0x140238560
#define __CleanItemTags_x                                          0x140088110
#define __CreateCascadeMenuItems_x                                 0x1401869A0
#define __decompress_block_x                                       0x140569DB0
#define __DoesFileExist_x                                          0x1405723F0
#define __EQGetTime_x                                              0x14056EAF0
#define __ExecuteCmd_x                                             0x14020E400
#define __FixHeading_x                                             0x14069A4C0
#define __FlushDxKeyboard_x                                        0x140333620
#define __get_bearing_x                                            0x140241EA0
#define __get_melee_range_x                                        0x140241F90
#define __GetAnimationCache_x                                      0x1403B1010
#define __GetGaugeValueFromEQ_x                                    0x1404E4BB0
#define __GetLabelFromEQ_x                                         0x1404E61C0
#define __GetXTargetType_x                                         0x14069B7A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069A540
#define __HelpPath_x                                               0x140EBDEB8   // Why?
#define __NewUIINI_x                                               0x1404F1C50   // Why?
#define __ProcessDeviceEvents_x                                    0x1402804C0
#define __ProcessGameEvents_x                                      0x1402751E0
#define __ProcessKeyboardEvents_x                                  0x140334D70
#define __ProcessMouseEvents_x                                     0x1402768C0
#define __SaveColors_x                                             0x1401969B0
#define __STMLToText_x                                             0x140576D30
#define __WndProc_x                                                0x140331E40
#define CMemoryMappedFile__SetFile_x                               0x1407D2960
#define DrawNetStatus_x                                            0x1402BFA10
#define Util__FastTime_x                                           0x14056E080
#define __eq_delete_x                                              0x1406A2654
#define __eq_new_x                                                 0x1406A2610
#define __CopyLayout_x                                             0x1402AD9C0
#define __ThrottleFrameRate_x                                      0x140264A44
#define __ThrottleFrameRateEnd_x                                   0x140264AA4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344720
#define CAAWnd__Update_x                                           0x140344A20
#define CAAWnd__UpdateSelected_x                                   0x140345A60

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA510
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2E00
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140827B38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAE00

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1AB0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1D30
#define AltAdvManager__GetAAById_x                                 0x1401A1380
#define AltAdvManager__CanTrainAbility_x                           0x1401A11B0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0E70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0F50
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1D90
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1FE0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5EA0
#define CharacterZoneClient__CanUseItem_x                          0x1400E62D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D29B0
#define CharacterZoneClient__CastSpell_x                           0x1400D2A50
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1E00
#define CharacterZoneClient__Cur_HP_x                              0x1400E79E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7BA0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D57F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE050
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FCA80  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6CA0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E57A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFC10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEAE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6E70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7360
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8D30
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF220
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7650
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFEA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6EF0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0C80
#define CharacterZoneClient__GetModCap_x                           0x1400F8240
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7180
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7390
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBEA0
#define CharacterZoneClient__HasSkill_x                            0x1400F3C70
#define CharacterZoneClient__HitBySpell_x                          0x1400D7E40
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB5E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7D20
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC6F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8070
#define CharacterZoneClient__Max_Mana_x                            0x1402DC910  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F84D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE990
#define CharacterZoneClient__SpellDuration_x                       0x1400DF690
#define CharacterZoneClient__TotalEffect_x                         0x1400E09E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD9F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362BE0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036CF10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140368DA0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036C990

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036F5D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9E000

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403928C0
#define CChatWindowManager__InitContextMenu_x                      0x140392A50
#define CChatWindowManager__FreeChatWindow_x                       0x140391940
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039A600
#define CChatWindowManager__CreateChatWindow_x                     0x140391280

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105F60

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039B640
#define CChatWindow__Clear_x                                       0x14039C5F0
#define CChatWindow__WndNotification_x                             0x14039D7E0
#define CChatWindow__AddHistory_x                                  0x14039C0F0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405ABDA0
#define CContextMenu__RemoveMenuItem_x                             0x1405AC190
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AC160
#define CContextMenu__CheckMenuItem_x                              0x1405ABFD0
#define CContextMenu__SetMenuItem_x                                0x1405AC1B0
#define CContextMenu__AddSeparator_x                               0x1405ABF10

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059DC90
#define CContextMenuManager__RemoveMenu_x                          0x14059E270
#define CContextMenuManager__PopupMenu_x                           0x14059DFB0
#define CContextMenuManager__Flush_x                               0x14059DD10
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8F40

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406639F0
#define CChatService__GetFriendName_x                              0x140663A00

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058EC30
#define CComboWnd__Draw_x                                          0x14058ED30
#define CComboWnd__GetCurChoice_x                                  0x14058F010  // unused
#define CComboWnd__GetListRect_x                                   0x14058F0B0
#define CComboWnd__InsertChoice_x                                  0x14058F3F0
#define CComboWnd__SetColors_x                                     0x14058F780
#define CComboWnd__SetChoice_x                                     0x14058F740
#define CComboWnd__GetItemCount_x                                  0x14058F0A0
#define CComboWnd__GetCurChoiceText_x                              0x14058F050  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058EFE0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058F4B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6CB0
#define CContainerWnd__SetContainer_x                              0x1403FC320
#define CContainerWnd__vftable_x                                   0x1409B6578

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8FFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C5EE0
#define CDisplay__PreZoneMainUI_x                                  0x1401938D0
#define CDisplay__CleanGameUI_x                                    0x140185A80
#define CDisplay__GetClickedActor_x                                0x140189C00
#define CDisplay__GetUserDefinedColor_x                            0x14018A870
#define CDisplay__InitCharSelectUI_x                               0x14018AB20
#define CDisplay__ReloadUI_x                                       0x140195BC0
#define CDisplay__RestartUI_x                                      0x1401F4A80
#define CDisplay__WriteTextHD2_x                                   0x14019CBE0
#define CDisplay__TrueDistance_x                                   0x14019C890
#define CDisplay__SetViewActor_x                                   0x1401990D0
#define CDisplay__GetFloorHeight_x                                 0x140189E60
#define CDisplay__ToggleScreenshotMode_x                           0x14019C380
#define CDisplay__RealRender_World_x                               0x140194FA0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D00E0
#define CEditWnd__DrawCaret_x                                      0x1405C1C30  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C20F0
#define CEditWnd__GetCaretPt_x                                     0x1405C2370  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C23B0
#define CEditWnd__GetDisplayString_x                               0x1405C2620
#define CEditWnd__GetHorzOffset_x                                  0x1405C2860
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C29B0
#define CEditWnd__GetSelStartPt_x                                  0x1405C2C90  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C2AE0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C3840
#define CEditWnd__ReplaceSelection_x                               0x1405C3BF0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C4090
#define CEditWnd__SetEditable_x                                    0x1405C4320
#define CEditWnd__SetWindowText_x                                  0x1405C4350

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265B50
#define CEverQuest__ClickedPlayer_x                                0x14025B670
#define CEverQuest__CreateTargetIndicator_x                        0x14025BF30
#define CEverQuest__DoTellWindow_x                                 0x140105C70 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106530 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267510
#define CEverQuest__dsp_chat_x                                     0x1401056A0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402918D0
#define CEverQuest__Emote_x                                        0x140267EF0
#define CEverQuest__GetBodyTypeDesc_x                              0x140268CA0
#define CEverQuest__GetClassDesc_x                                 0x140268D00
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402690D0
#define CEverQuest__GetDeityDesc_x                                 0x140269380
#define CEverQuest__GetLangDesc_x                                  0x1402697B0
#define CEverQuest__GetRaceDesc_x                                  0x140269B50
#define CEverQuest__InterpretCmd_x                                 0x14026B480
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280530
#define CEverQuest__LMouseUp_x                                     0x14026CE70
#define CEverQuest__RightClickedOnPlayer_x                         0x14027DD50
#define CEverQuest__RMouseUp_x                                     0x140277450
#define CEverQuest__SetGameState_x                                 0x140282A70
#define CEverQuest__UPCNotificationFlush_x                         0x1402883A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026CAE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278800
#define CEverQuest__ReportSuccessfulHit_x                          0x140279620

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BB3A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C10D0
#define CGuild__GetGuildName_x                                     0x1400C1110

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DD940

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A34D0
#define CHotButton__SetCheck_x                                     0x1402A37A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F5070
#define CInvSlotMgr__MoveItem_x                                    0x1403F5250
#define CInvSlotMgr__SelectSlot_x                                  0x1403F6BF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F2270
#define CInvSlot__SliderComplete_x                                 0x1403F37C0
#define CInvSlot__GetItemBase_x                                    0x1403EDE90
#define CInvSlot__UpdateItem_x                                     0x1403F3C70

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7F80

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404191B0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041BB20
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415C90
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404173F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404185C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E16E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E33D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051CF50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404123C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E250

// CLabel
#define CLabel__UpdateText_x                                       0x140422F30

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405925C0
#define CListWnd__dCListWnd_x                                      0x140592A10
#define CListWnd__vftable_x                                        0x140A9C158
#define CListWnd__AddColumn_x                                      0x1405930B0
#define CListWnd__AddColumn1_x                                     0x140593150
#define CListWnd__AddLine_x                                        0x1405932B0
#define CListWnd__AddString_x                                      0x140593840
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593DB0
#define CListWnd__CalculateVSBRange_x                              0x140594090
#define CListWnd__ClearSel_x                                       0x140594240
#define CListWnd__ClearAllSel_x                                    0x1405941E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405942A0
#define CListWnd__Compare_x                                        0x140594460
#define CListWnd__Draw_x                                           0x140594930
#define CListWnd__DrawColumnSeparators_x                           0x1405954E0
#define CListWnd__DrawHeader_x                                     0x1405955A0
#define CListWnd__DrawItem_x                                       0x140595C70
#define CListWnd__DrawLine_x                                       0x1405965F0
#define CListWnd__DrawSeparator_x                                  0x140596AB0
#define CListWnd__EnableLine_x                                     0x140596ED0
#define CListWnd__EnsureVisible_x                                  0x140596F30
#define CListWnd__ExtendSel_x                                      0x140597030
#define CListWnd__GetColumnMinWidth_x                              0x140597360
#define CListWnd__GetColumnWidth_x                                 0x1405973E0
#define CListWnd__GetCurSel_x                                      0x1405974E0
#define CListWnd__GetItemData_x                                    0x140597860
#define CListWnd__GetItemHeight_x                                  0x1405978A0
#define CListWnd__GetItemRect_x                                    0x140597AC0
#define CListWnd__GetItemText_x                                    0x140597D60
#define CListWnd__GetSelList_x                                     0x140597FB0
#define CListWnd__GetSeparatorRect_x                               0x1405981A0
#define CListWnd__InsertLine_x                                     0x140599600
#define CListWnd__RemoveLine_x                                     0x140599C70
#define CListWnd__SetColors_x                                      0x14059A030
#define CListWnd__SetColumnJustification_x                         0x14059A050
#define CListWnd__SetColumnLabel_x                                 0x14059A0D0
#define CListWnd__SetColumnWidth_x                                 0x14059A270
#define CListWnd__SetCurSel_x                                      0x14059A340
#define CListWnd__SetItemColor_x                                   0x14059A5B0
#define CListWnd__SetItemData_x                                    0x14059A650
#define CListWnd__SetItemText_x                                    0x14059A890
#define CListWnd__Sort_x                                           0x14059ACA0
#define CListWnd__ToggleSel_x                                      0x14059AE10
#define CListWnd__SetColumnsSizable_x                              0x14059A2C0
#define CListWnd__SetItemWnd_x                                     0x14059A9C0
#define CListWnd__GetItemWnd_x                                     0x140597F40
#define CListWnd__SetItemIcon_x                                    0x14059A690
#define CListWnd__CalculateCustomWindowPositions_x                 0x140593B80
#define CListWnd__SetVScrollPos_x                                  0x14059AC00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404361E0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A03038
#define MapViewMap__Clear_x                                        0x140437D60
#define MapViewMap__SetZoom_x                                      0x14043E3B0
#define MapViewMap__HandleLButtonDown_x                            0x14043AEF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045FA70  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140466000
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404667A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469FB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140469300
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046E240

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140640460
#define CPacketScrambler__hton_x                                   0x140640450

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BB500
#define CSidlManagerBase__FindAnimation1_x                         0x1405BB440
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BBB30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BB8E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BA830
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BA7C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9E00

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D46E0
#define CSidlManager__CreateXWnd_x                                 0x1404D48A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405800A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405801C0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CA650 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140580340
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057F7E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057F8B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057FAC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140580A20
#define CSidlScreenWnd__EnableIniStorage_x                         0x140580C50
#define CSidlScreenWnd__GetChildItem_x                             0x140580DF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140581040
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058B1D0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405813B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405816F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581FA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140582900
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE97E8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582F90
#define CSidlScreenWnd__StoreIniVis_x                              0x140583780
#define CSidlScreenWnd__vftable_x                                  0x140A9B3C8
#define CSidlScreenWnd__WndNotification_x                          0x1405837D0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031CBB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031D050 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031CF80
#define CSkillMgr__IsActivatedSkill_x                              0x14031D400
#define CSkillMgr__IsCombatSkill_x                                 0x14031D440
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031D370
#define CSkillMgr__GetSkillLastUsed_x                              0x14031CFD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F0340
#define CSliderWnd__SetValue_x                                     0x14059BF60
#define CSliderWnd__SetNumTicks_x                                  0x14059BDE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DAD30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A06F0
#define CStmlWnd__CalculateHSBRange_x                              0x14058AB80
#define CStmlWnd__CalculateVSBRange_x                              0x1405A1610
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A2080
#define CStmlWnd__ForceParseNow_x                                  0x1405A2120
#define CStmlWnd__GetVisibleText_x                                 0x1405A27F0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A4530
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A4570
#define CStmlWnd__SetSTMLText_x                                    0x1405AB540
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AB6F0
#define CStmlWnd__UpdateHistoryString_x                            0x1405ABA80

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059C320
#define CTabWnd__DrawCurrentPage_x                                 0x14059C3C0
#define CTabWnd__DrawTab_x                                         0x14059C790
#define CTabWnd__GetTabRect_x                                      0x14059CE00
#define CTabWnd__InsertPage_x                                      0x14059D0D0
#define CTabWnd__RemovePage_x                                      0x14059D360
#define CTabWnd__SetPage_x                                         0x14059D4C0
#define CTabWnd__UpdatePage_x                                      0x14059D7C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C4790
#define CPageWnd__SetTabText_x                                     0x1405C4800

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA800  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAC10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2EC0
#define CTextureFont__DrawWrappedText1_x                           0x1405B2DD0
#define CTextureFont__DrawWrappedText2_x                           0x1405B2FF0
#define CTextureFont__GetTextExtent_x                              0x1405B33A0
#define CTextureFont__GetHeight_x                                  0x1405B3360

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8DB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057F3C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D18EA0
#define CXStr__gCXStrAccess_x                                      0x140EE95E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405861D0
#define CXWnd__ClrFocus_x                                          0x1405864C0
#define CXWnd__Destroy_x                                           0x140586640
#define CXWnd__DoAllDrawing_x                                      0x140586740
#define CXWnd__DrawColoredRect_x                                   0x140586F10
#define CXWnd__DrawTooltip_x                                       0x1405885A0
#define CXWnd__DrawTooltipAtPoint_x                                0x140588650
#define CXWnd__GetChildItem_x                                      0x140588F60
#define CXWnd__GetChildWndAt_x                                     0x140589020
#define CXWnd__GetClientRect_x                                     0x1405892E0
#define CXWnd__GetClientClipRect_x                                 0x140589190
#define CXWnd__GetRelativeRect_x                                   0x14058ACC0
#define CXWnd__GetScreenClipRect_x                                 0x14058ADD0
#define CXWnd__GetScreenRect_x                                     0x14058AF50
#define CXWnd__GetTooltipRect_x                                    0x14058B0D0
#define CXWnd__IsActive_x                                          0x14058B690
#define CXWnd__IsDescendantOf_x                                    0x14058B6C0
#define CXWnd__IsReallyVisible_x                                   0x14058B730
#define CXWnd__IsType_x                                            0x14058B770
#define CXWnd__Minimize_x                                          0x14058B860
#define CXWnd__ProcessTransition_x                                 0x14058C730
#define CXWnd__Resize_x                                            0x14058C850
#define CXWnd__Right_x                                             0x14058C8F0
#define CXWnd__SetFocus_x                                          0x14058CCB0
#define CXWnd__SetFont_x                                           0x14058CD00
#define CXWnd__SetKeyTooltip_x                                     0x14058CE00
#define CXWnd__SetMouseOver_x                                      0x14058CF40
#define CXWnd__SetParent_x                                         0x14058CFC0
#define CXWnd__StartFade_x                                         0x14058D410
#define CXWnd__vftable_x                                           0x140A9B9B8
#define CXWnd__CXWnd_x                                             0x140584D90
#define CXWnd__dCXWnd_x                                            0x1405856C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CF860

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AD330
#define CXWndManager__DrawCursor_x                                 0x1405AD610
#define CXWndManager__DrawWindows_x                                0x1405AD870
#define CXWndManager__GetKeyboardFlags_x                           0x1405ADF40
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ADF80
#define CXWndManager__RemoveWnd_x                                  0x1405B1590

// CDBStr
#define CDBStr__GetString_x                                        0x140183C30

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406496F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEAD0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD7D0
#define CCharacterListWnd__Quit_x                                  0x1400CEAB0
#define CCharacterListWnd__UpdateList_x                            0x1400CF940

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617CA0
#define ItemBase__CreateItemTagString_x                            0x140618720
#define ItemBase__GetImageNum_x                                    0x14061AD10
#define ItemBase__GetItemValue_x                                   0x14061C7A0
#define ItemBase__IsEmpty_x                                        0x14061E3A0
#define ItemBase__IsKeyRingItem_x                                  0x14061EAE0
#define ItemBase__ValueSellMerchant_x                              0x140622CA0
#define ItemClient__CanDrop_x                                      0x1402A5AA0
#define ItemClient__CanGoInBag_x                                   0x1402A5BD0
#define ItemClient__CreateItemClient_x                             0x1402A5EB0
#define ItemClient__dItemClient_x                                  0x1402A5910

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3250
#define EQ_LoadingS__Array_x                                       0x140D05220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062F4D0
#define PcBase__GetCombatAbility_x                                 0x14062FBC0
#define PcBase__GetCombatAbilityTimer_x                            0x14062FC60
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406303B0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630EA0
#define PcClient__AlertInventoryChanged_x                          0x1402C7FF0
#define PcClient__GetConLevel_x                                    0x1402C8610  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CADB0
#define PcClient__HasLoreItem_x                                    0x1402CBD70
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9690
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD830

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212B10  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212CC0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212E20  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212D60  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024CC40  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E430

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068CFD0
#define PlayerBase__CanSee1_x                                      0x14068D0A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068D560
#define PlayerBase__HasProperty_x                                  0x14068D730
#define PlayerBase__IsTargetable_x                                 0x14068D7F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EA310
#define PlayerClient__GetPcClient_x                                0x1402ECB40
#define PlayerClient__PlayerClient_x                               0x1402E35E0
#define PlayerClient__SetNameSpriteState_x                         0x1402EFF90
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0F50
#define PlayerZoneClient__ChangeHeight_x                           0x1402FF400
#define PlayerZoneClient__DoAttack_x                               0x140300110
#define PlayerZoneClient__GetLevel_x                               0x140303840
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F9D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192150

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8D20  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8DD0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8ED0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F87F0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068CB90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AAEC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AAAC0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AAB30
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AAE50  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AAFE0
#define KeypressHandler__HandleKeyUp_x                             0x1402AB100
#define KeypressHandler__SaveKeymapping_x                          0x1402AAD60  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140647230  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641B90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2330  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D76B0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9D90
#define PcZoneClient__RemovePetEffect_x                            0x1402DD930
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA980
#define PcZoneClient__CanEquipItem_x                               0x1402D5A00
#define PcZoneClient__GetItemByID_x                                0x1402D8750
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD6B0
#define PcZoneClient__BandolierSwap_x                              0x1402D49E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140254500

// IconCache
#define IconCache__GetIcon_x                                       0x1403B1040

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A5A60
#define CContainerMgr__CloseContainer_x                            0x1403A53A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5DE0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404993E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029DC90

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042A210
#define CLootWnd__RequestLootSlot_x                                0x14042B230

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2570
#define EQ_Spell__SpellAffects_x                                   0x1401D3830
#define EQ_Spell__SpellAffectBase_x                                0x1401D3790
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7560
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7510
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3450
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D3010
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D28E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFD10

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F5410
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F4B20
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F4330

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FCAD0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AE00
#define CTaskManager__GetTaskStatus_x                              0x14017AF10
#define CTaskManager__GetElementDescription_x                      0x14017AA90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D08E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF720
#define EqSoundManager__SoundAssistPlay_x                          0x140322200  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140322540  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058E1E0
#define CTextureAnimation__SetCurCell_x                            0x14058E4F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029BEF0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140661130
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406611B0
#define CharacterBase__IsExpansionFlag_x                           0x1401F42D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403837F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140384160
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403856B0

// messages
#define msg_spell_worn_off_x                                       0x140209440
#define msg_new_text_x                                             0x140204CD0
#define __msgTokenTextParam_x                                      0x1401FC860
#define msgTokenText_x                                             0x1401FC780

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323BC0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323AE0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069BB80

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140423680

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AA750
#define CCursorAttachment__IsOkToActivate_x                        0x1403AD6C0
#define CCursorAttachment__RemoveAttachment_x                      0x1403AD970
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C7250
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C7440
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C7450

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401494D0
#define CFindItemWnd__Update_x                                     0x140149E70
#define CFindItemWnd__PickupSelectedItem_x                         0x140143980

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152D50
#define LootFiltersManager__GetItemFilterData_x                    0x140153860
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154100
#define LootFiltersManager__SetItemLootFilter_x                    0x1401543B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047C200

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C770
#define CResolutionHandler__UpdateResolution_x                     0x1406A04B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1D80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406654B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406653A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6AC0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C66A0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061EBB0
#define ItemBase__IsLoreEquipped_x                                 0x14061EC40

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BDC30

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024CDA0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024CD30
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024CD70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316D70

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123860
#define FactionManagerClient__HandleFactionMessage_x               0x140123C10
#define FactionManagerClient__GetFactionStanding_x                 0x140123030
#define FactionManagerClient__GetMaxFaction_x                      0x140123030
#define FactionManagerClient__GetMinFaction_x                      0x140122EE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC9B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F000

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABBB0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAF30
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB9D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB950  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328C30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316D70

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212EB0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583DC0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033A670

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C990

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064A270
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAF9E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052A000

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
