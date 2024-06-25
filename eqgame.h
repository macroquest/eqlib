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

#define __ClientDate                                               20240624u
#define __ExpectedVersionDate                                     "Jun 24 2024"
#define __ExpectedVersionTime                                     "11:24:51"
#define __ActualVersionDate_x                                      0x140940B00
#define __ActualVersionTime_x                                      0x140940AF0
#define __ActualVersionBuild_x                                     0x1408D7540

// Memory Protection
#define __MemChecker0_x                                            0x1402AFB20
#define __MemChecker1_x                                            0x14056CC00
#define __MemChecker4_x                                            0x14027E3F0
#define __EncryptPad0_x                                            0x140D0DE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E46A80
#define instEQZoneInfo_x                                           0x140E46C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402158A0
#define __gfMaxZoomCameraDistance_x                                0x1408D87B8
#define __gfMaxCameraDistance_x                                    0x140A7D314
#define __CurrentSocial_x                                          0x140BC9940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D05710
#define g_eqCommandStates_x                                        0x140D06780
#define __CommandList_x                                            0x140D069C0
#define __ScreenMode_x                                             0x140D8E27C
#define __gWorld_x                                                 0x140E3F320
#define __gpbCommandEvent_x                                        0x140E418E4
#define __ServerHost_x                                             0x140E3F008
#define __Guilds_x                                                 0x140E45630
#define __MemCheckBitmask_x                                        0x140E46FB7
#define __MemCheckActive_x                                         0x140E486A5
#define __MouseEventTime_x                                         0x140EBBFF0
#define DI8__MouseState_x                                          0x140EC0200
#define __heqmain_x                                                0x140EC2690
#define DI8__Mouse_x                                               0x140EC01D0
#define __HWnd_x                                                   0x140EC01D8
#define __Mouse_x                                                  0x140EC26A8
#define DI8__Keyboard_x                                            0x140EC26C8
#define __LoginName_x                                              0x140EC2DAC
#define __CurrentMapLabel_x                                        0x140ED65B0
#define __LabelCache_x                                             0x140ED7180
#define __ChatFilterDefs_x                                         0x140A18400
#define Teleport_Table_Size_x                                      0x140E41970
#define Teleport_Table_x                                           0x140E3F420

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E419C0
#define pinstActiveBanker_x                                        0x140E3F348
#define pinstActiveCorpse_x                                        0x140E3F338
#define pinstActiveGMaster_x                                       0x140E3F340
#define pinstActiveMerchant_x                                      0x140E3F330
#define pinstAltAdvManager_x                                       0x140D8F1D8
#define pinstCEverQuest_x                                          0x140EC0148
#define pinstCamActor_x                                            0x140D8E268
#define pinstCDBStr_x                                              0x140D8DF90
#define pinstCDisplay_x                                            0x140E41430
#define pinstControlledPlayer_x                                    0x140E3F3D8
#define pinstCResolutionHandler_x                                  0x141547948
#define pinstCSidlManager_x                                        0x140EE8480
#define pinstCXWndManager_x                                        0x140EE8478
#define instDynamicZone_x                                          0x140E454F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4553E
#define instExpeditionName_x                                       0x140E4557E
#define pinstDZMember_x                                            0x140E45608
#define pinstDZTimerInfo_x                                         0x140E45610
#define pinstEqLogin_x                                             0x140EC26F0
#define instTribute_x                                              0x140D00D50
#define pinstDeviceInputProxy_x                                    0x140E46ADC
#define pinstEQSoundManager_x                                      0x140D8F558
#define pinstEQSpellStrings_x                                      0x140D72B60
#define pinstSGraphicsEngine_x                                     0x1415476C8
#define pinstLocalPC_x                                             0x140E3F410
#define pinstLocalPlayer_x                                         0x140E3F328
#define pinstCMercenaryClientManager_x                             0x140EBD8E8
#define pinstModelPlayer_x                                         0x140E3F358
#define pinstRenderInterface_x                                     0x1415476E0
#define pinstSkillMgr_x                                            0x140EBF580
#define pinstSpawnManager_x                                        0x140EBDCA0
#define pinstSpellManager_x                                        0x140EBF5E8
#define pinstStringTable_x                                         0x140E3F418
#define pinstSwitchManager_x                                       0x140E3EE80
#define pinstTarget_x                                              0x140E3F3D0
#define pinstTaskMember_x                                          0x140D00D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3F3E0
#define pinstTradeTarget_x                                         0x140E3F350
#define instTributeActive_x                                        0x140D00D79
#define pinstViewActor_x                                           0x140D8E260
#define pinstWorldData_x                                           0x140E41420
#define pinstPlayerPath_x                                          0x140EBDCC8
#define pinstTargetIndicator_x                                     0x140EBF698
#define EQObject_Top_x                                             0x140E3F3F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED3708
#define pinstCContainerMgr_x                                       0x140D8E508
#define pinstCContextMenuManager_x                                 0x140EE8160
#define pinstCInvSlotMgr_x                                         0x140D8E500
#define pinstCItemDisplayManager_x                                 0x140ED6180
#define pinstCPopupWndManager_x                                    0x140ED6A10
#define pinstCSpellDisplayMgr_x                                    0x140ED7060
#define pinstCTaskManager_x                                        0x140BC9C80
#define pinstEQSuiteTextureLoader_x                                0x140D17530
#define pinstItemIconCache_x                                       0x140ED3A68
#define pinstLootFiltersManager_x                                  0x140D8D9D8
#define pinstGFViewListener_x                                      0x140EE7938


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023E4E0
#define __CastRay_x                                                0x140236920
#define __CastRay2_x                                               0x140236620
#define __compress_block_x                                         0x1405222A0
#define __ConvertItemTags_x                                        0x140236D80
#define __CleanItemTags_x                                          0x140088100
#define __CreateCascadeMenuItems_x                                 0x140186750
#define __decompress_block_x                                       0x140568470
#define __DoesFileExist_x                                          0x140570AB0
#define __EQGetTime_x                                              0x14056D1B0
#define __ExecuteCmd_x                                             0x14020D1B0
#define __FixHeading_x                                             0x140698930
#define __FlushDxKeyboard_x                                        0x140331C80
#define __get_bearing_x                                            0x1402406D0
#define __get_melee_range_x                                        0x1402407C0
#define __GetAnimationCache_x                                      0x1403AF660
#define __GetGaugeValueFromEQ_x                                    0x1404E3270
#define __GetLabelFromEQ_x                                         0x1404E4870
#define __GetXTargetType_x                                         0x140699C10   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406989B0
#define __HelpPath_x                                               0x140EBBEB8   // Why?
#define __NewUIINI_x                                               0x1404F0310   // Why?
#define __ProcessDeviceEvents_x                                    0x14027EA00
#define __ProcessGameEvents_x                                      0x1402738E0
#define __ProcessKeyboardEvents_x                                  0x1403333D0
#define __ProcessMouseEvents_x                                     0x140274E10
#define __SaveColors_x                                             0x140196740
#define __STMLToText_x                                             0x1405753F0
#define __WndProc_x                                                0x140330460
#define CMemoryMappedFile__SetFile_x                               0x1407D0B50
#define DrawNetStatus_x                                            0x1402BDFC0
#define Util__FastTime_x                                           0x14056C740
#define __eq_delete_x                                              0x1406A0844
#define __eq_new_x                                                 0x1406A0800
#define __CopyLayout_x                                             0x1402ABF40
#define __ThrottleFrameRate_x                                      0x140263144
#define __ThrottleFrameRateEnd_x                                   0x1402631A4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140342D80
#define CAAWnd__Update_x                                           0x140343080
#define CAAWnd__UpdateSelected_x                                   0x1403440C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA510
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2E00
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140825B30
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAE00

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1840
#define AltAdvManager__IsAbilityReady_x                            0x1401A1AC0
#define AltAdvManager__GetAAById_x                                 0x1401A1110
#define AltAdvManager__CanTrainAbility_x                           0x1401A0F40
#define AltAdvManager__CanSeeAbility_x                             0x1401A0C00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0EA0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1CE0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1F30
#define CharacterZoneClient__CanUseItem_x                          0x1400E6210
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2900
#define CharacterZoneClient__CastSpell_x                           0x1400D29A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1D40
#define CharacterZoneClient__Cur_HP_x                              0x1400E7920
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7AE0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5730
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDFB0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC9E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6BE0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E56E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFB70
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEA40
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6DB0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C72B0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8C80
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF180
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7590
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFE00
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6E30
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0BE0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D7030
#define CharacterZoneClient__GetModCap_x                           0x1400F81A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D70C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D72D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBDF0
#define CharacterZoneClient__HasSkill_x                            0x1400F3BD0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7D80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB520
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7C80
#define CharacterZoneClient__Max_Endurance_x                       0x1402DAC40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7FD0
#define CharacterZoneClient__Max_Mana_x                            0x1402DAE60  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8430
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE8D0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF5D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0920
#define CharacterZoneClient__UseSkill_x                            0x1400FD950


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361260

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036B5B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367440
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403664D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036DC60

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9C000

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140390F70
#define CChatWindowManager__InitContextMenu_x                      0x140391100
#define CChatWindowManager__FreeChatWindow_x                       0x14038FFF0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140398CB0
#define CChatWindowManager__CreateChatWindow_x                     0x14038F930

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105D00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140399CF0
#define CChatWindow__Clear_x                                       0x14039AC50
#define CChatWindow__WndNotification_x                             0x14039BE40
#define CChatWindow__AddHistory_x                                  0x14039A750

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AA440
#define CContextMenu__RemoveMenuItem_x                             0x1405AA830
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AA800
#define CContextMenu__CheckMenuItem_x                              0x1405AA670
#define CContextMenu__SetMenuItem_x                                0x1405AA850
#define CContextMenu__AddSeparator_x                               0x1405AA5B0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059C300
#define CContextMenuManager__RemoveMenu_x                          0x14059C8E0
#define CContextMenuManager__PopupMenu_x                           0x14059C620
#define CContextMenuManager__Flush_x                               0x14059C380
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A7590

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140661A00
#define CChatService__GetFriendName_x                              0x140661A10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058D240
#define CComboWnd__Draw_x                                          0x14058D340
#define CComboWnd__GetCurChoice_x                                  0x14058D620  // unused
#define CComboWnd__GetListRect_x                                   0x14058D6C0
#define CComboWnd__InsertChoice_x                                  0x14058DA00
#define CComboWnd__SetColors_x                                     0x14058DD90
#define CComboWnd__SetChoice_x                                     0x14058DD50
#define CComboWnd__GetItemCount_x                                  0x14058D6B0
#define CComboWnd__GetCurChoiceText_x                              0x14058D660  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058D5F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058DAC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5300
#define CContainerWnd__SetContainer_x                              0x1403FA940
#define CContainerWnd__vftable_x                                   0x1409B4548

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8DFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C4660
#define CDisplay__PreZoneMainUI_x                                  0x140193670
#define CDisplay__CleanGameUI_x                                    0x140185830
#define CDisplay__GetClickedActor_x                                0x1401899A0
#define CDisplay__GetUserDefinedColor_x                            0x14018A610
#define CDisplay__InitCharSelectUI_x                               0x14018A8C0
#define CDisplay__ReloadUI_x                                       0x140195960
#define CDisplay__WriteTextHD2_x                                   0x14019C970
#define CDisplay__TrueDistance_x                                   0x14019C620
#define CDisplay__SetViewActor_x                                   0x140198E60
#define CDisplay__GetFloorHeight_x                                 0x140189C00
#define CDisplay__ToggleScreenshotMode_x                           0x14019C110
#define CDisplay__RealRender_World_x                               0x140194D40

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CE820
#define CEditWnd__DrawCaret_x                                      0x1405C0340  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C0800
#define CEditWnd__GetCaretPt_x                                     0x1405C0A80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C0AC0
#define CEditWnd__GetDisplayString_x                               0x1405C0D30
#define CEditWnd__GetHorzOffset_x                                  0x1405C0F70
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C10C0
#define CEditWnd__GetSelStartPt_x                                  0x1405C13A0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C11F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C1F50
#define CEditWnd__ReplaceSelection_x                               0x1405C2300
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C27A0
#define CEditWnd__SetEditable_x                                    0x1405C2A30
#define CEditWnd__SetWindowText_x                                  0x1405C2A60

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140264250
#define CEverQuest__ClickedPlayer_x                                0x140259D90
#define CEverQuest__CreateTargetIndicator_x                        0x14025A650
#define CEverQuest__DoTellWindow_x                                 0x140105A10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401062D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140265C10
#define CEverQuest__dsp_chat_x                                     0x140105440 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14028FE10
#define CEverQuest__Emote_x                                        0x1402665F0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402673A0
#define CEverQuest__GetClassDesc_x                                 0x140267400
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402677D0
#define CEverQuest__GetDeityDesc_x                                 0x140267A80
#define CEverQuest__GetLangDesc_x                                  0x140267EB0
#define CEverQuest__GetRaceDesc_x                                  0x140268250
#define CEverQuest__InterpretCmd_x                                 0x140269B80
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027EA70
#define CEverQuest__LMouseUp_x                                     0x14026B570
#define CEverQuest__RightClickedOnPlayer_x                         0x14027C290
#define CEverQuest__RMouseUp_x                                     0x140275990
#define CEverQuest__SetGameState_x                                 0x140280FB0
#define CEverQuest__UPCNotificationFlush_x                         0x1402868E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026B1E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140276D40
#define CEverQuest__ReportSuccessfulHit_x                          0x140277B60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B9A30

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1060
#define CGuild__GetGuildName_x                                     0x1400C10A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DBF30

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A1A10
#define CHotButton__SetCheck_x                                     0x1402A1CE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F3680
#define CInvSlotMgr__MoveItem_x                                    0x1403F3860
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5210

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F0870
#define CInvSlot__SliderComplete_x                                 0x1403F1DC0
#define CInvSlot__GetItemBase_x                                    0x1403EC490
#define CInvSlot__UpdateItem_x                                     0x1403F2280

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F65A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140417930
#define CItemDisplayWnd__UpdateStrings_x                           0x14041A2A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414410
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140415B80
#define CItemDisplayWnd__RequestConvertItem_x                      0x140416D40

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DFDA0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E1A90

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051B610

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140410B30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E040

// CLabel
#define CLabel__UpdateText_x                                       0x140421690

// CListWnd
#define CListWnd__CListWnd_x                                       0x140590BD0
#define CListWnd__dCListWnd_x                                      0x140591020
#define CListWnd__vftable_x                                        0x140A9A158
#define CListWnd__AddColumn_x                                      0x1405916C0
#define CListWnd__AddColumn1_x                                     0x140591760
#define CListWnd__AddLine_x                                        0x1405918C0
#define CListWnd__AddString_x                                      0x140591E50
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405923C0
#define CListWnd__CalculateVSBRange_x                              0x1405926A0
#define CListWnd__ClearSel_x                                       0x140592850
#define CListWnd__ClearAllSel_x                                    0x1405927F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405928B0
#define CListWnd__Compare_x                                        0x140592A70
#define CListWnd__Draw_x                                           0x140592F40
#define CListWnd__DrawColumnSeparators_x                           0x140593AF0
#define CListWnd__DrawHeader_x                                     0x140593BB0
#define CListWnd__DrawItem_x                                       0x140594290
#define CListWnd__DrawLine_x                                       0x140594C10
#define CListWnd__DrawSeparator_x                                  0x1405950D0
#define CListWnd__EnableLine_x                                     0x1405954F0
#define CListWnd__EnsureVisible_x                                  0x140595550
#define CListWnd__ExtendSel_x                                      0x140595650
#define CListWnd__GetColumnMinWidth_x                              0x140595980
#define CListWnd__GetColumnWidth_x                                 0x140595A00
#define CListWnd__GetCurSel_x                                      0x140595B00
#define CListWnd__GetItemData_x                                    0x140595E80
#define CListWnd__GetItemHeight_x                                  0x140595EC0
#define CListWnd__GetItemRect_x                                    0x1405960E0
#define CListWnd__GetItemText_x                                    0x140596380
#define CListWnd__GetSelList_x                                     0x1405965D0
#define CListWnd__GetSeparatorRect_x                               0x1405967C0
#define CListWnd__InsertLine_x                                     0x140597C30
#define CListWnd__RemoveLine_x                                     0x1405982A0
#define CListWnd__SetColors_x                                      0x140598660
#define CListWnd__SetColumnJustification_x                         0x140598680
#define CListWnd__SetColumnLabel_x                                 0x140598700
#define CListWnd__SetColumnWidth_x                                 0x1405988A0
#define CListWnd__SetCurSel_x                                      0x140598970
#define CListWnd__SetItemColor_x                                   0x140598BE0
#define CListWnd__SetItemData_x                                    0x140598C80
#define CListWnd__SetItemText_x                                    0x140598EC0
#define CListWnd__Sort_x                                           0x1405992D0
#define CListWnd__ToggleSel_x                                      0x140599440
#define CListWnd__SetColumnsSizable_x                              0x1405988F0
#define CListWnd__SetItemWnd_x                                     0x140598FF0
#define CListWnd__GetItemWnd_x                                     0x140596560
#define CListWnd__SetItemIcon_x                                    0x140598CC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592190
#define CListWnd__SetVScrollPos_x                                  0x140599230

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140434930

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A01018
#define MapViewMap__Clear_x                                        0x1404364B0
#define MapViewMap__SetZoom_x                                      0x14043CB00
#define MapViewMap__HandleLButtonDown_x                            0x140439640

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045E1C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140464760
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140464F00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140468720
#define CMerchantWnd__SelectBuySellSlot_x                          0x140467A70
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046C9B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063E480
#define CPacketScrambler__hton_x                                   0x14063E470

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B9C00
#define CSidlManagerBase__FindAnimation1_x                         0x1405B9B40
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BA230
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B9FE0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B8F40
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B8ED0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B8510

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D2DB0
#define CSidlManager__CreateXWnd_x                                 0x1404D2F70

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057E750
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057E880
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C8DD0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057EA00
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057DEA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057DF70
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057E180
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057F0E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057F310
#define CSidlScreenWnd__GetChildItem_x                             0x14057F4B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057F700
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405897F0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057FA70
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057FDE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405806B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140580FA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE77D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405815F0
#define CSidlScreenWnd__StoreIniVis_x                              0x140581DF0
#define CSidlScreenWnd__vftable_x                                  0x140A993C8
#define CSidlScreenWnd__WndNotification_x                          0x140581E40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031B1D0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031B670 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031B5A0
#define CSkillMgr__IsActivatedSkill_x                              0x14031BA20
#define CSkillMgr__IsCombatSkill_x                                 0x14031BA60
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031B990
#define CSkillMgr__GetSkillLastUsed_x                              0x14031B5F0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140599DB0
#define CSliderWnd__SetValue_x                                     0x14059A5C0
#define CSliderWnd__SetNumTicks_x                                  0x14059A440

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9400

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059ED60
#define CStmlWnd__CalculateHSBRange_x                              0x1405891F0
#define CStmlWnd__CalculateVSBRange_x                              0x14059FC80
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A0700
#define CStmlWnd__ForceParseNow_x                                  0x1405A07A0
#define CStmlWnd__GetVisibleText_x                                 0x1405A0E70
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A2BD0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A2C10
#define CStmlWnd__SetSTMLText_x                                    0x1405A9BE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A9D90
#define CStmlWnd__UpdateHistoryString_x                            0x1405AA120

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059A990
#define CTabWnd__DrawCurrentPage_x                                 0x14059AA30
#define CTabWnd__DrawTab_x                                         0x14059AE00
#define CTabWnd__GetTabRect_x                                      0x14059B470
#define CTabWnd__InsertPage_x                                      0x14059B740
#define CTabWnd__RemovePage_x                                      0x14059B9D0
#define CTabWnd__SetPage_x                                         0x14059BB30
#define CTabWnd__UpdatePage_x                                      0x14059BE30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C2EC0
#define CPageWnd__SetTabText_x                                     0x1405C2F30

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA7B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BABC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B15C0
#define CTextureFont__DrawWrappedText1_x                           0x1405B14D0
#define CTextureFont__DrawWrappedText2_x                           0x1405B16F0
#define CTextureFont__GetTextExtent_x                              0x1405B1AA0
#define CTextureFont__GetHeight_x                                  0x1405B1A60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C7530

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057DA80

// CXStr
#define CXStr__gFreeLists_x                                        0x140D16EA0
#define CXStr__gCXStrAccess_x                                      0x140EE75D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140584870
#define CXWnd__ClrFocus_x                                          0x140584B60
#define CXWnd__Destroy_x                                           0x140584CE0
#define CXWnd__DoAllDrawing_x                                      0x140584DE0
#define CXWnd__DrawColoredRect_x                                   0x1405855B0
#define CXWnd__DrawTooltip_x                                       0x140586C20
#define CXWnd__DrawTooltipAtPoint_x                                0x140586CD0
#define CXWnd__GetChildItem_x                                      0x1405875E0
#define CXWnd__GetChildWndAt_x                                     0x1405876A0
#define CXWnd__GetClientRect_x                                     0x140587940
#define CXWnd__GetClientClipRect_x                                 0x140587810
#define CXWnd__GetRelativeRect_x                                   0x140589300
#define CXWnd__GetScreenClipRect_x                                 0x140589410
#define CXWnd__GetScreenRect_x                                     0x140589580
#define CXWnd__GetTooltipRect_x                                    0x140589700
#define CXWnd__IsActive_x                                          0x140589CB0
#define CXWnd__IsDescendantOf_x                                    0x140589CE0
#define CXWnd__IsReallyVisible_x                                   0x140589D50
#define CXWnd__IsType_x                                            0x140589D90
#define CXWnd__Minimize_x                                          0x140589E90
#define CXWnd__ProcessTransition_x                                 0x14058AD60
#define CXWnd__Resize_x                                            0x14058AE70
#define CXWnd__Right_x                                             0x14058AF10
#define CXWnd__SetFocus_x                                          0x14058B2D0
#define CXWnd__SetFont_x                                           0x14058B320
#define CXWnd__SetKeyTooltip_x                                     0x14058B430
#define CXWnd__SetMouseOver_x                                      0x14058B570
#define CXWnd__SetParent_x                                         0x14058B5F0
#define CXWnd__StartFade_x                                         0x14058BA20
#define CXWnd__vftable_x                                           0x140A999B8
#define CXWnd__CXWnd_x                                             0x140583400
#define CXWnd__dCXWnd_x                                            0x140583D50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CDFA0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ABA00
#define CXWndManager__DrawCursor_x                                 0x1405ABCE0
#define CXWndManager__DrawWindows_x                                0x1405ABF40
#define CXWndManager__GetKeyboardFlags_x                           0x1405AC610
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AC650
#define CXWndManager__RemoveWnd_x                                  0x1405AFC80

// CDBStr
#define CDBStr__GetString_x                                        0x1401839E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140647710

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEA20
#define CCharacterListWnd__EnterWorld_x                            0x1400CD720
#define CCharacterListWnd__Quit_x                                  0x1400CEA00
#define CCharacterListWnd__UpdateList_x                            0x1400CF890

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406163E0
#define ItemBase__CreateItemTagString_x                            0x140616E60
#define ItemBase__GetImageNum_x                                    0x140619420
#define ItemBase__GetItemValue_x                                   0x14061AEE0
#define ItemBase__IsEmpty_x                                        0x14061CAF0
#define ItemBase__IsKeyRingItem_x                                  0x14061D220
#define ItemBase__ValueSellMerchant_x                              0x1406213B0
#define ItemClient__CanDrop_x                                      0x1402A3FF0
#define ItemClient__CanGoInBag_x                                   0x1402A4120
#define ItemClient__CreateItemClient_x                             0x1402A4400
#define ItemClient__dItemClient_x                                  0x1402A3E60

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2FE0
#define EQ_LoadingS__Array_x                                       0x140D03220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062DAC0
#define PcBase__GetCombatAbility_x                                 0x14062E160
#define PcBase__GetCombatAbilityTimer_x                            0x14062E200
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062E950
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062F440
#define PcClient__AlertInventoryChanged_x                          0x1402C65A0
#define PcClient__GetConLevel_x                                    0x1402C6BC0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C9360
#define PcClient__HasLoreItem_x                                    0x1402CA330
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D7BE0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DBCF0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402118C0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140211A70  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140211BD0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140211B10  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024B470  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E240

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068AFD0
#define PlayerBase__CanSee1_x                                      0x14068B0A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068B560
#define PlayerBase__HasProperty_x                                  0x14068B730
#define PlayerBase__IsTargetable_x                                 0x14068B7F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E87B0
#define PlayerClient__GetPcClient_x                                0x1402EAFE0
#define PlayerClient__PlayerClient_x                               0x1402E1A90
#define PlayerClient__SetNameSpriteState_x                         0x1402EE430
#define PlayerClient__SetNameSpriteTint_x                          0x1402EF3F0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FD9A0
#define PlayerZoneClient__DoAttack_x                               0x1402FE6B0
#define PlayerZoneClient__GetLevel_x                               0x140301DE0
#define PlayerZoneClient__IsValidTeleport_x                        0x14024E1F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191EF0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F72C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F7370  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F7470
#define PlayerManagerClient__CreatePlayer_x                        0x1402F6D90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068AB90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A9440
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A9040
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A90B0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A93D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A9560
#define KeypressHandler__HandleKeyUp_x                             0x1402A9680
#define KeypressHandler__SaveKeymapping_x                          0x1402A92E0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140645250  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063FBB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D08F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D5C00
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D82E0
#define PcZoneClient__RemovePetEffect_x                            0x1402DBDF0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D8ED0
#define PcZoneClient__CanEquipItem_x                               0x1402D3F40
#define PcZoneClient__GetItemByID_x                                0x1402D6CA0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DBB70
#define PcZoneClient__BandolierSwap_x                              0x1402D2F20

// Doors
#define EQSwitch__UseSwitch_x                                      0x140252D20

// IconCache
#define IconCache__GetIcon_x                                       0x1403AF690

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A40B0
#define CContainerMgr__CloseContainer_x                            0x1403A39F0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4430

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140497A40

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029C1D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140428970
#define CLootWnd__RequestLootSlot_x                                0x140429990

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2330
#define EQ_Spell__SpellAffects_x                                   0x1401D35F0
#define EQ_Spell__SpellAffectBase_x                                0x1401D3550
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D74A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7450
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3210
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2DD0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D26A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFCA0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F3AD0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F31E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F29E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FB190  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AC00
#define CTaskManager__GetTaskStatus_x                              0x14017AD10
#define CTaskManager__GetElementDescription_x                      0x14017A890

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D06A0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF4E0
#define EqSoundManager__SoundAssistPlay_x                          0x140320820  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140320B60  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058C7D0
#define CTextureAnimation__SetCurCell_x                            0x14058CAE0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029A430

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065F140
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065F1C0
#define CharacterBase__IsExpansionFlag_x                           0x1401F3340

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140381E90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140382800
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140383D50

// messages
#define msg_spell_worn_off_x                                       0x1402081F0
#define msg_new_text_x                                             0x140203A80
#define __msgTokenTextParam_x                                      0x1401FB7A0
#define msgTokenText_x                                             0x1401FB6C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403221E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322100

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140699FF0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140421DE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A8DA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ABD10
#define CCursorAttachment__RemoveAttachment_x                      0x1403ABFC0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C59D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C5BC0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C5BD0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401492C0
#define CFindItemWnd__Update_x                                     0x140149C60
#define CFindItemWnd__PickupSelectedItem_x                         0x140143780

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152B30
#define LootFiltersManager__GetItemFilterData_x                    0x140153640
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153EE0
#define LootFiltersManager__SetItemLootFilter_x                    0x140154190

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047A840

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031AD90
#define CResolutionHandler__UpdateResolution_x                     0x14069E8C0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A03D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406634B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406633A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C50C0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C4CA0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061D2F0
#define ItemBase__IsLoreEquipped_x                                 0x14061D380

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BC1D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024B5D0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024B560
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024B5A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315380

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123670
#define FactionManagerClient__HandleFactionMessage_x               0x140123A20
#define FactionManagerClient__GetFactionStanding_x                 0x140122E40
#define FactionManagerClient__GetMaxFaction_x                      0x140122E40
#define FactionManagerClient__GetMinFaction_x                      0x140122CF0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC9B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EE00

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB940
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AACC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB760  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB6E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140327250

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315380

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140211C60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582430

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140338CD0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C980

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140648290
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAD9E0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
