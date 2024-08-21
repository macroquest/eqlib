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

#define __ClientDate                                               20240813u
#define __ExpectedVersionDate                                     "Aug 13 2024"
#define __ExpectedVersionTime                                     "10:38:53"
#define __ActualVersionDate_x                                      0x140941B30
#define __ActualVersionTime_x                                      0x140941B20
#define __ActualVersionBuild_x                                     0x1408D8570

// Memory Protection
#define __MemChecker0_x                                            0x1402B0E10
#define __MemChecker1_x                                            0x14056DB00
#define __MemChecker4_x                                            0x14027F6F0
#define __EncryptPad0_x                                            0x140D0EE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E47A80
#define instEQZoneInfo_x                                           0x140E47C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216310
#define __gfMaxZoomCameraDistance_x                                0x1408D97E8
#define __gfMaxCameraDistance_x                                    0x140A7E334
#define __CurrentSocial_x                                          0x140BCA940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D06710
#define g_eqCommandStates_x                                        0x140D07780
#define __CommandList_x                                            0x140D079C0
#define __ScreenMode_x                                             0x140D8F264
#define __gWorld_x                                                 0x140E3FF00
#define __gpbCommandEvent_x                                        0x140E3FF10
#define __ServerHost_x                                             0x140E400F8
#define __Guilds_x                                                 0x140E46630
#define __MemCheckBitmask_x                                        0x140E47FB7
#define __MemCheckActive_x                                         0x140E496A5
#define __MouseEventTime_x                                         0x140EBCFF0
#define DI8__MouseState_x                                          0x140EC1238
#define __heqmain_x                                                0x140EC36D8
#define DI8__Mouse_x                                               0x140EC1188
#define __HWnd_x                                                   0x140EC1210
#define __Mouse_x                                                  0x140EC1144
#define DI8__Keyboard_x                                            0x140EC1160
#define __LoginName_x                                              0x140EC3DBC
#define __CurrentMapLabel_x                                        0x140ED75C0
#define __LabelCache_x                                             0x140ED8190
#define __ChatFilterDefs_x                                         0x140A19440
#define Teleport_Table_Size_x                                      0x140E3FF18
#define Teleport_Table_x                                           0x140E40510

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E429C0
#define pinstActiveBanker_x                                        0x140E40428
#define pinstActiveCorpse_x                                        0x140E40418
#define pinstActiveGMaster_x                                       0x140E40420
#define pinstActiveMerchant_x                                      0x140E40410
#define pinstAltAdvManager_x                                       0x140D901D8
#define pinstCEverQuest_x                                          0x140EC1180
#define pinstCamActor_x                                            0x140D8F248
#define pinstCDBStr_x                                              0x140D8EF90
#define pinstCDisplay_x                                            0x140E40500
#define pinstControlledPlayer_x                                    0x140E404B8
#define pinstCResolutionHandler_x                                  0x141548958
#define pinstCSidlManager_x                                        0x140EE9490
#define pinstCXWndManager_x                                        0x140EE9488
#define instDynamicZone_x                                          0x140E464F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4653E
#define instExpeditionName_x                                       0x140E4657E
#define pinstDZMember_x                                            0x140E46608
#define pinstDZTimerInfo_x                                         0x140E46610
#define pinstEqLogin_x                                             0x140EC3700
#define instTribute_x                                              0x140D01D50
#define pinstDeviceInputProxy_x                                    0x140E47ADC
#define pinstEQSoundManager_x                                      0x140D90558
#define pinstEQSpellStrings_x                                      0x140D73B60
#define pinstSGraphicsEngine_x                                     0x1415486D8
#define pinstLocalPC_x                                             0x140E404E8
#define pinstLocalPlayer_x                                         0x140E40408
#define pinstCMercenaryClientManager_x                             0x140EBE8E8
#define pinstModelPlayer_x                                         0x140E40438
#define pinstRenderInterface_x                                     0x1415486F0
#define pinstSkillMgr_x                                            0x140EC0580
#define pinstSpawnManager_x                                        0x140EBECA0
#define pinstSpellManager_x                                        0x140EC05E8
#define pinstStringTable_x                                         0x140E40508
#define pinstSwitchManager_x                                       0x140E3FE80
#define pinstTarget_x                                              0x140E404B0
#define pinstTaskMember_x                                          0x140D01D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E404C0
#define pinstTradeTarget_x                                         0x140E40430
#define instTributeActive_x                                        0x140D01D79
#define pinstViewActor_x                                           0x140D8F240
#define pinstWorldData_x                                           0x140E404F8
#define pinstPlayerPath_x                                          0x140EBECC8
#define pinstTargetIndicator_x                                     0x140EC0698
#define EQObject_Top_x                                             0x140E404D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED4718
#define pinstCContainerMgr_x                                       0x140D8F520
#define pinstCContextMenuManager_x                                 0x140EE9170
#define pinstCInvSlotMgr_x                                         0x140D8F518
#define pinstCItemDisplayManager_x                                 0x140ED7190
#define pinstCPopupWndManager_x                                    0x140ED7A20
#define pinstCSpellDisplayMgr_x                                    0x140ED8070
#define pinstCTaskManager_x                                        0x140BCAC80
#define pinstEQSuiteTextureLoader_x                                0x140D18530
#define pinstItemIconCache_x                                       0x140ED4A78
#define pinstLootFiltersManager_x                                  0x140D8E9D8
#define pinstGFViewListener_x                                      0x140EE8948


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F4D0
#define __CastRay_x                                                0x140237920
#define __CastRay2_x                                               0x140237620
#define __compress_block_x                                         0x1405231A0
#define __ConvertItemTags_x                                        0x140237D80
#define __CleanItemTags_x                                          0x140088110
#define __CreateCascadeMenuItems_x                                 0x1401864C0
#define __decompress_block_x                                       0x140569370
#define __DoesFileExist_x                                          0x1405719B0
#define __EQGetTime_x                                              0x14056E0B0
#define __ExecuteCmd_x                                             0x14020DC20
#define __FixHeading_x                                             0x140699E50
#define __FlushDxKeyboard_x                                        0x140332F60
#define __get_bearing_x                                            0x1402416C0
#define __get_melee_range_x                                        0x1402417B0
#define __GetAnimationCache_x                                      0x1403B0560
#define __GetGaugeValueFromEQ_x                                    0x1404E4160
#define __GetLabelFromEQ_x                                         0x1404E5770
#define __GetXTargetType_x                                         0x14069B130   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140699ED0
#define __HelpPath_x                                               0x140EBCEB8   // Why?
#define __NewUIINI_x                                               0x1404F1200   // Why?
#define __ProcessDeviceEvents_x                                    0x14027FD00
#define __ProcessGameEvents_x                                      0x140274A30
#define __ProcessKeyboardEvents_x                                  0x1403346B0
#define __ProcessMouseEvents_x                                     0x140276100
#define __SaveColors_x                                             0x1401964B0
#define __STMLToText_x                                             0x1405762F0
#define __WndProc_x                                                0x140331780
#define CMemoryMappedFile__SetFile_x                               0x1407D2320
#define DrawNetStatus_x                                            0x1402BF250
#define Util__FastTime_x                                           0x14056D640
#define __eq_delete_x                                              0x1406A2004
#define __eq_new_x                                                 0x1406A1FC0
#define __CopyLayout_x                                             0x1402AD220
#define __ThrottleFrameRate_x                                      0x140264283
#define __ThrottleFrameRateEnd_x                                   0x1402642E3

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344030
#define CAAWnd__Update_x                                           0x140344330
#define CAAWnd__UpdateSelected_x                                   0x140345370

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA520
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2E10
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140826B38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAE10

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A15B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1830
#define AltAdvManager__GetAAById_x                                 0x1401A0E80
#define AltAdvManager__CanTrainAbility_x                           0x1401A0CB0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0970

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0B40
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1980
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1BD0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5A70
#define CharacterZoneClient__CanUseItem_x                          0x1400E5EA0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D25A0
#define CharacterZoneClient__CastSpell_x                           0x1400D2640
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E19D0
#define CharacterZoneClient__Cur_HP_x                              0x1400E75B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7770
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D53E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDC30
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC660  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6890
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5370
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF7F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE6C0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6A60
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F50
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8920
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEE00
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7220
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFA80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6AE0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0860
#define CharacterZoneClient__GetModCap_x                           0x1400F7E20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6D70
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6F80
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBA90
#define CharacterZoneClient__HasSkill_x                            0x1400F3850
#define CharacterZoneClient__HitBySpell_x                          0x1400D7A30
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB1D0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7900
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBF00  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7C50
#define CharacterZoneClient__Max_Mana_x                            0x1402DC120  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F80B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE560
#define CharacterZoneClient__SpellDuration_x                       0x1400DF260
#define CharacterZoneClient__TotalEffect_x                         0x1400E05B0
#define CharacterZoneClient__UseSkill_x                            0x1400FD5D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362500

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C830

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403686C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036C2B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036EEE0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9D020

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391E30
#define CChatWindowManager__InitContextMenu_x                      0x140391FC0
#define CChatWindowManager__FreeChatWindow_x                       0x140390EB0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399B70
#define CChatWindowManager__CreateChatWindow_x                     0x1403907F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105B30

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039ABB0
#define CChatWindow__Clear_x                                       0x14039BB60
#define CChatWindow__WndNotification_x                             0x14039CD50
#define CChatWindow__AddHistory_x                                  0x14039B660

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB3D0
#define CContextMenu__RemoveMenuItem_x                             0x1405AB7C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB790
#define CContextMenu__CheckMenuItem_x                              0x1405AB600
#define CContextMenu__SetMenuItem_x                                0x1405AB7E0
#define CContextMenu__AddSeparator_x                               0x1405AB540

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D2A0
#define CContextMenuManager__RemoveMenu_x                          0x14059D870
#define CContextMenuManager__PopupMenu_x                           0x14059D5B0
#define CContextMenuManager__Flush_x                               0x14059D320
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8490

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140662EF0
#define CChatService__GetFriendName_x                              0x140662F00

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E1D0
#define CComboWnd__Draw_x                                          0x14058E2D0
#define CComboWnd__GetCurChoice_x                                  0x14058E5B0  // unused
#define CComboWnd__GetListRect_x                                   0x14058E650
#define CComboWnd__InsertChoice_x                                  0x14058E990
#define CComboWnd__SetColors_x                                     0x14058ED20
#define CComboWnd__SetChoice_x                                     0x14058ECE0
#define CComboWnd__GetItemCount_x                                  0x14058E640
#define CComboWnd__GetCurChoiceText_x                              0x14058E5F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E580
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058EA50

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6210
#define CContainerWnd__SetContainer_x                              0x1403FBA20
#define CContainerWnd__vftable_x                                   0x1409B5598

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8EFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C5540
#define CDisplay__PreZoneMainUI_x                                  0x1401933D0
#define CDisplay__CleanGameUI_x                                    0x140185580
#define CDisplay__GetClickedActor_x                                0x140189720
#define CDisplay__GetUserDefinedColor_x                            0x14018A390
#define CDisplay__InitCharSelectUI_x                               0x14018A640
#define CDisplay__ReloadUI_x                                       0x1401956C0
#define CDisplay__RestartUI_x                                      0x1401F42C0
#define CDisplay__WriteTextHD2_x                                   0x14019C6E0
#define CDisplay__TrueDistance_x                                   0x14019C390
#define CDisplay__SetViewActor_x                                   0x140198BD0
#define CDisplay__GetFloorHeight_x                                 0x140189980
#define CDisplay__ToggleScreenshotMode_x                           0x14019BE80
#define CDisplay__RealRender_World_x                               0x140194AA0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF740
#define CEditWnd__DrawCaret_x                                      0x1405C1220  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C16E0
#define CEditWnd__GetCaretPt_x                                     0x1405C1960  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C19A0
#define CEditWnd__GetDisplayString_x                               0x1405C1C10
#define CEditWnd__GetHorzOffset_x                                  0x1405C1E50
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1FA0
#define CEditWnd__GetSelStartPt_x                                  0x1405C2280  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C20D0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C2E30
#define CEditWnd__ReplaceSelection_x                               0x1405C31E0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3680
#define CEditWnd__SetEditable_x                                    0x1405C3910
#define CEditWnd__SetWindowText_x                                  0x1405C3940

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265390
#define CEverQuest__ClickedPlayer_x                                0x14025AE80
#define CEverQuest__CreateTargetIndicator_x                        0x14025B740
#define CEverQuest__DoTellWindow_x                                 0x140105840 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106100 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266D50
#define CEverQuest__dsp_chat_x                                     0x140105270 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291110
#define CEverQuest__Emote_x                                        0x140267730
#define CEverQuest__GetBodyTypeDesc_x                              0x1402684E0
#define CEverQuest__GetClassDesc_x                                 0x140268540
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268910
#define CEverQuest__GetDeityDesc_x                                 0x140268BC0
#define CEverQuest__GetLangDesc_x                                  0x140268FF0
#define CEverQuest__GetRaceDesc_x                                  0x140269390
#define CEverQuest__InterpretCmd_x                                 0x14026ACD0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FD70
#define CEverQuest__LMouseUp_x                                     0x14026C6C0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D590
#define CEverQuest__RMouseUp_x                                     0x140276C90
#define CEverQuest__SetGameState_x                                 0x1402822B0
#define CEverQuest__UPCNotificationFlush_x                         0x140287BE0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C330
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278040
#define CEverQuest__ReportSuccessfulHit_x                          0x140278E60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA930

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0CD0
#define CGuild__GetGuildName_x                                     0x1400C0D10

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DCE90

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2D10
#define CHotButton__SetCheck_x                                     0x1402A2FE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F47B0
#define CInvSlotMgr__MoveItem_x                                    0x1403F4990
#define CInvSlotMgr__SelectSlot_x                                  0x1403F6310

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F19D0
#define CInvSlot__SliderComplete_x                                 0x1403F2F20
#define CInvSlot__GetItemBase_x                                    0x1403ED5F0
#define CInvSlot__UpdateItem_x                                     0x1403F33D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F76A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418810
#define CItemDisplayWnd__UpdateStrings_x                           0x14041B120
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415360
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416AA0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417C30

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0C90
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2980

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C510

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411AA0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DDD0

// CLabel
#define CLabel__UpdateText_x                                       0x1404224E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591B60
#define CListWnd__dCListWnd_x                                      0x140591FB0
#define CListWnd__vftable_x                                        0x140A9B178
#define CListWnd__AddColumn_x                                      0x140592650
#define CListWnd__AddColumn1_x                                     0x1405926F0
#define CListWnd__AddLine_x                                        0x140592850
#define CListWnd__AddString_x                                      0x140592DE0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593350
#define CListWnd__CalculateVSBRange_x                              0x140593630
#define CListWnd__ClearSel_x                                       0x1405937E0
#define CListWnd__ClearAllSel_x                                    0x140593780
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593840
#define CListWnd__Compare_x                                        0x140593A00
#define CListWnd__Draw_x                                           0x140593ED0
#define CListWnd__DrawColumnSeparators_x                           0x140594A80
#define CListWnd__DrawHeader_x                                     0x140594B40
#define CListWnd__DrawItem_x                                       0x140595220
#define CListWnd__DrawLine_x                                       0x140595BA0
#define CListWnd__DrawSeparator_x                                  0x140596060
#define CListWnd__EnableLine_x                                     0x140596480
#define CListWnd__EnsureVisible_x                                  0x1405964E0
#define CListWnd__ExtendSel_x                                      0x1405965E0
#define CListWnd__GetColumnMinWidth_x                              0x140596910
#define CListWnd__GetColumnWidth_x                                 0x140596990
#define CListWnd__GetCurSel_x                                      0x140596A90
#define CListWnd__GetItemData_x                                    0x140596E10
#define CListWnd__GetItemHeight_x                                  0x140596E50
#define CListWnd__GetItemRect_x                                    0x140597070
#define CListWnd__GetItemText_x                                    0x140597310
#define CListWnd__GetSelList_x                                     0x140597560
#define CListWnd__GetSeparatorRect_x                               0x140597750
#define CListWnd__InsertLine_x                                     0x140598BC0
#define CListWnd__RemoveLine_x                                     0x140599230
#define CListWnd__SetColors_x                                      0x1405995F0
#define CListWnd__SetColumnJustification_x                         0x140599610
#define CListWnd__SetColumnLabel_x                                 0x140599690
#define CListWnd__SetColumnWidth_x                                 0x140599830
#define CListWnd__SetCurSel_x                                      0x140599900
#define CListWnd__SetItemColor_x                                   0x140599B70
#define CListWnd__SetItemData_x                                    0x140599C10
#define CListWnd__SetItemText_x                                    0x140599E50
#define CListWnd__Sort_x                                           0x14059A260
#define CListWnd__ToggleSel_x                                      0x14059A3D0
#define CListWnd__SetColumnsSizable_x                              0x140599880
#define CListWnd__SetItemWnd_x                                     0x140599F80
#define CListWnd__GetItemWnd_x                                     0x1405974F0
#define CListWnd__SetItemIcon_x                                    0x140599C50
#define CListWnd__CalculateCustomWindowPositions_x                 0x140593120
#define CListWnd__SetVScrollPos_x                                  0x14059A1C0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140435790

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A02058
#define MapViewMap__Clear_x                                        0x140437310
#define MapViewMap__SetZoom_x                                      0x14043D960
#define MapViewMap__HandleLButtonDown_x                            0x14043A4A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045F020  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404655B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465D50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469560
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404688A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D7F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063F970
#define CPacketScrambler__hton_x                                   0x14063F960

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BAAE0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BAA20
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BB110
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BAEC0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B9E20
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9DB0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9410

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3C90
#define CSidlManager__CreateXWnd_x                                 0x1404D3E50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F660
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F790
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9CB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F910
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057EDA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057EE70
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F080
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FFF0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140580220
#define CSidlScreenWnd__GetChildItem_x                             0x1405803C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580610
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A7F0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580980
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580CF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581590
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581F90
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE87E8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582610
#define CSidlScreenWnd__StoreIniVis_x                              0x140582DF0
#define CSidlScreenWnd__vftable_x                                  0x140A9A3E8
#define CSidlScreenWnd__WndNotification_x                          0x140582E40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C4F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C990 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C8C0
#define CSkillMgr__IsActivatedSkill_x                              0x14031CD40
#define CSkillMgr__IsCombatSkill_x                                 0x14031CD80
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CCB0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C910

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059AD50
#define CSliderWnd__SetValue_x                                     0x14059B560
#define CSliderWnd__SetNumTicks_x                                  0x14059B3E0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DA2E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059FCF0
#define CStmlWnd__CalculateHSBRange_x                              0x14058A1E0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A0C10
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1690
#define CStmlWnd__ForceParseNow_x                                  0x1405A1730
#define CStmlWnd__GetVisibleText_x                                 0x1405A1E00
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3B60
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A3BA0
#define CStmlWnd__SetSTMLText_x                                    0x1405AAB70
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AAD20
#define CStmlWnd__UpdateHistoryString_x                            0x1405AB0B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B930
#define CTabWnd__DrawCurrentPage_x                                 0x14059B9D0
#define CTabWnd__DrawTab_x                                         0x14059BDA0
#define CTabWnd__GetTabRect_x                                      0x14059C410
#define CTabWnd__InsertPage_x                                      0x14059C6E0
#define CTabWnd__RemovePage_x                                      0x14059C970
#define CTabWnd__SetPage_x                                         0x14059CAD0
#define CTabWnd__UpdatePage_x                                      0x14059CDD0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3DA0
#define CPageWnd__SetTabText_x                                     0x1405C3E10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA420  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA830


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B24D0
#define CTextureFont__DrawWrappedText1_x                           0x1405B23E0
#define CTextureFont__DrawWrappedText2_x                           0x1405B2600
#define CTextureFont__GetTextExtent_x                              0x1405B29B0
#define CTextureFont__GetHeight_x                                  0x1405B2970

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8410

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E980

// CXStr
#define CXStr__gFreeLists_x                                        0x140D17EA0
#define CXStr__gCXStrAccess_x                                      0x140EE85E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585860
#define CXWnd__ClrFocus_x                                          0x140585B50
#define CXWnd__Destroy_x                                           0x140585CD0
#define CXWnd__DoAllDrawing_x                                      0x140585DD0
#define CXWnd__DrawColoredRect_x                                   0x1405865A0
#define CXWnd__DrawTooltip_x                                       0x140587C20
#define CXWnd__DrawTooltipAtPoint_x                                0x140587CD0
#define CXWnd__GetChildItem_x                                      0x1405885E0
#define CXWnd__GetChildWndAt_x                                     0x1405886A0
#define CXWnd__GetClientRect_x                                     0x140588950
#define CXWnd__GetClientClipRect_x                                 0x140588810
#define CXWnd__GetRelativeRect_x                                   0x14058A300
#define CXWnd__GetScreenClipRect_x                                 0x14058A410
#define CXWnd__GetScreenRect_x                                     0x14058A580
#define CXWnd__GetTooltipRect_x                                    0x14058A700
#define CXWnd__IsActive_x                                          0x14058ACB0
#define CXWnd__IsDescendantOf_x                                    0x14058ACE0
#define CXWnd__IsReallyVisible_x                                   0x14058AD50
#define CXWnd__IsType_x                                            0x14058AD90
#define CXWnd__Minimize_x                                          0x14058AE90
#define CXWnd__ProcessTransition_x                                 0x14058BD40
#define CXWnd__Resize_x                                            0x14058BE60
#define CXWnd__Right_x                                             0x14058BF00
#define CXWnd__SetFocus_x                                          0x14058C2D0
#define CXWnd__SetFont_x                                           0x14058C320
#define CXWnd__SetKeyTooltip_x                                     0x14058C420
#define CXWnd__SetMouseOver_x                                      0x14058C540
#define CXWnd__SetParent_x                                         0x14058C5C0
#define CXWnd__StartFade_x                                         0x14058C9E0
#define CXWnd__vftable_x                                           0x140A9A9D8
#define CXWnd__CXWnd_x                                             0x140584400
#define CXWnd__dCXWnd_x                                            0x140584D50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEEC0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC980
#define CXWndManager__DrawCursor_x                                 0x1405ACC60
#define CXWndManager__DrawWindows_x                                0x1405ACEC0
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD590
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD5D0
#define CXWndManager__RemoveWnd_x                                  0x1405B0B90

// CDBStr
#define CDBStr__GetString_x                                        0x140183730

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140648C00

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE6C0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD3C0
#define CCharacterListWnd__Quit_x                                  0x1400CE6A0
#define CCharacterListWnd__UpdateList_x                            0x1400CF530

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406172A0
#define ItemBase__CreateItemTagString_x                            0x140617CF0
#define ItemBase__GetImageNum_x                                    0x14061A250
#define ItemBase__GetItemValue_x                                   0x14061BD50
#define ItemBase__IsEmpty_x                                        0x14061D920
#define ItemBase__IsKeyRingItem_x                                  0x14061E050
#define ItemBase__ValueSellMerchant_x                              0x140622210
#define ItemClient__CanDrop_x                                      0x1402A52F0
#define ItemClient__CanGoInBag_x                                   0x1402A5420
#define ItemClient__CreateItemClient_x                             0x1402A5700
#define ItemClient__dItemClient_x                                  0x1402A5160

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2D50
#define EQ_LoadingS__Array_x                                       0x140D04220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062EA10
#define PcBase__GetCombatAbility_x                                 0x14062F100
#define PcBase__GetCombatAbilityTimer_x                            0x14062F1A0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062F8F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406303E0
#define PcClient__AlertInventoryChanged_x                          0x1402C7830
#define PcClient__GetConLevel_x                                    0x1402C7E50  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA5F0
#define PcClient__HasLoreItem_x                                    0x1402CB5C0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8EB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD040

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212330  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402124E0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212640  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212580  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C450  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017DFA0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068C4E0
#define PlayerBase__CanSee1_x                                      0x14068C5B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068CA70
#define PlayerBase__HasProperty_x                                  0x14068CC40
#define PlayerBase__IsTargetable_x                                 0x14068CD00
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9B10
#define PlayerClient__GetPcClient_x                                0x1402EC340
#define PlayerClient__PlayerClient_x                               0x1402E2DE0
#define PlayerClient__SetNameSpriteState_x                         0x1402EF790
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0750
#define PlayerZoneClient__ChangeHeight_x                           0x1402FECC0
#define PlayerZoneClient__DoAttack_x                               0x1402FF9D0
#define PlayerZoneClient__GetLevel_x                               0x140303100
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F1E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191C50

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F85E0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8690  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8790
#define PlayerManagerClient__CreatePlayer_x                        0x1402F80B0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068C0A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA720
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA320
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA390
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA6B0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA840
#define KeypressHandler__HandleKeyUp_x                             0x1402AA960
#define KeypressHandler__SaveKeymapping_x                          0x1402AA5C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140646740  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406410A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1B70  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6EF0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D95B0
#define PcZoneClient__RemovePetEffect_x                            0x1402DD140
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA190
#define PcZoneClient__CanEquipItem_x                               0x1402D5240
#define PcZoneClient__GetItemByID_x                                0x1402D7F80
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCEC0
#define PcZoneClient__BandolierSwap_x                              0x1402D4220

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253D10

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0590

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4FC0
#define CContainerMgr__CloseContainer_x                            0x1403A4900
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5340

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404989C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D4D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404297C0
#define CLootWnd__RequestLootSlot_x                                0x14042A7E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2060
#define EQ_Spell__SpellAffects_x                                   0x1401D3320
#define EQ_Spell__SpellAffectBase_x                                0x1401D3280
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7150
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7100
#define EQ_Spell__IsSPAStacking_x                                  0x1401D2F40
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2B00
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D23D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF910

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F49C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F40D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F38D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FC080  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017A960
#define CTaskManager__GetTaskStatus_x                              0x14017AA70
#define CTaskManager__GetElementDescription_x                      0x14017A5F0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D03D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF210
#define EqSoundManager__SoundAssistPlay_x                          0x140321B40  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321E80  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D760
#define CTextureAnimation__SetCurCell_x                            0x14058DA70

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B730

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140660630
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406606B0
#define CharacterBase__IsExpansionFlag_x                           0x1401F3B10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382D50
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403836C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384C10

// messages
#define msg_spell_worn_off_x                                       0x140208C60
#define msg_new_text_x                                             0x1402044F0
#define __msgTokenTextParam_x                                      0x1401FC080
#define msgTokenText_x                                             0x1401FBFA0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323500
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323420

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069B510

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422C30

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9CA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ACC10
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACEC0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C68B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6AA0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6AB0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149070
#define CFindItemWnd__Update_x                                     0x140149A10
#define CFindItemWnd__PickupSelectedItem_x                         0x140143540

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401528D0
#define LootFiltersManager__GetItemFilterData_x                    0x1401533E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153C80
#define LootFiltersManager__SetItemLootFilter_x                    0x140153F30

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B7B0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C0B0
#define CResolutionHandler__UpdateResolution_x                     0x14069FDF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A12F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406649B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406648A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6010
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5BF0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E120
#define ItemBase__IsLoreEquipped_x                                 0x14061E1B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD470

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C5B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C540
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C580

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403166B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123420
#define FactionManagerClient__HandleFactionMessage_x               0x1401237D0
#define FactionManagerClient__GetFactionStanding_x                 0x140122BF0
#define FactionManagerClient__GetMaxFaction_x                      0x140122BF0
#define FactionManagerClient__GetMinFaction_x                      0x140122AA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC9C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EBC0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB6B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAA30
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB4D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB450  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328570

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403166B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402126D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583430

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339F90

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C990

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140649780
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAEA00

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405295C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
