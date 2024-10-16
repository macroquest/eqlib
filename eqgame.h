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

#define __ClientDate                                               20241014u
#define __ExpectedVersionDate                                     "Oct 14 2024"
#define __ExpectedVersionTime                                     "15:44:27"
#define __ActualVersionDate_x                                      0x140947CC0
#define __ActualVersionTime_x                                      0x140947CB0
#define __ActualVersionBuild_x                                     0x1408DE640

// Memory Protection
#define __MemChecker0_x                                            0x1402B1620
#define __MemChecker1_x                                            0x14056DEA0
#define __MemChecker4_x                                            0x14027FF20
#define __EncryptPad0_x                                            0x140D15E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4EAA0
#define instEQZoneInfo_x                                           0x140E4EC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216C60
#define __gfMaxZoomCameraDistance_x                                0x1408DF8B8
#define __gfMaxCameraDistance_x                                    0x140A84458
#define __CurrentSocial_x                                          0x140BD1940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0D720
#define g_eqCommandStates_x                                        0x140D0E790
#define __CommandList_x                                            0x140D0E9D0
#define __ScreenMode_x                                             0x140D9634C
#define __gWorld_x                                                 0x140E493D8
#define __gpbCommandEvent_x                                        0x140E493E4
#define __ServerHost_x                                             0x140E495C8
#define __Guilds_x                                                 0x140E4D660
#define __MemCheckBitmask_x                                        0x140E4EFD7
#define __MemCheckActive_x                                         0x140E506C5
#define __MouseEventTime_x                                         0x140EC4010
#define DI8__MouseState_x                                          0x140EC8258
#define __heqmain_x                                                0x140ECA6F8
#define DI8__Mouse_x                                               0x140EC81A8
#define __HWnd_x                                                   0x140EC8230
#define __Mouse_x                                                  0x140EC8164
#define DI8__Keyboard_x                                            0x140EC8180
#define __LoginName_x                                              0x140ECADDC
#define __CurrentMapLabel_x                                        0x140EDE5E0
#define __LabelCache_x                                             0x140EDF1B0
#define __ChatFilterDefs_x                                         0x140A1F570
#define Teleport_Table_Size_x                                      0x140E49470
#define Teleport_Table_x                                           0x140E46F20

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E499F0
#define pinstActiveBanker_x                                        0x140E49900
#define pinstActiveCorpse_x                                        0x140E498F0
#define pinstActiveGMaster_x                                       0x140E498F8
#define pinstActiveMerchant_x                                      0x140E498E8
#define pinstAltAdvManager_x                                       0x140D971F8
#define pinstCEverQuest_x                                          0x140EC81A0
#define pinstCamActor_x                                            0x140D96338
#define pinstCDBStr_x                                              0x140D95FB0
#define pinstCDisplay_x                                            0x140E499D8
#define pinstControlledPlayer_x                                    0x140E49990
#define pinstCResolutionHandler_x                                  0x14154F978
#define pinstCSidlManager_x                                        0x140EF04B0
#define pinstCXWndManager_x                                        0x140EF04A8
#define instDynamicZone_x                                          0x140E4D520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4D56E
#define instExpeditionName_x                                       0x140E4D5AE
#define pinstDZMember_x                                            0x140E4D638
#define pinstDZTimerInfo_x                                         0x140E4D640
#define pinstEqLogin_x                                             0x140ECA720
#define instTribute_x                                              0x140D08D50
#define pinstDeviceInputProxy_x                                    0x140E4EAFC
#define pinstEQSoundManager_x                                      0x140D97578
#define pinstEQSpellStrings_x                                      0x140D7AB80
#define pinstSGraphicsEngine_x                                     0x14154F6F8
#define pinstLocalPC_x                                             0x140E499C0
#define pinstLocalPlayer_x                                         0x140E498E0
#define pinstCMercenaryClientManager_x                             0x140EC58F8
#define pinstModelPlayer_x                                         0x140E49910
#define pinstRenderInterface_x                                     0x14154F710
#define pinstSkillMgr_x                                            0x140EC75A0
#define pinstSpawnManager_x                                        0x140EC5CC0
#define pinstSpellManager_x                                        0x140EC7608
#define pinstStringTable_x                                         0x140E499E0
#define pinstSwitchManager_x                                       0x140E46EA0
#define pinstTarget_x                                              0x140E49988
#define pinstTaskMember_x                                          0x140D08D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E49998
#define pinstTradeTarget_x                                         0x140E49908
#define instTributeActive_x                                        0x140D08D79
#define pinstViewActor_x                                           0x140D96330
#define pinstWorldData_x                                           0x140E499C8
#define pinstPlayerPath_x                                          0x140EC5CE8
#define pinstTargetIndicator_x                                     0x140EC76B8
#define EQObject_Top_x                                             0x140E499B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDB738
#define pinstCContainerMgr_x                                       0x140D95FF8
#define pinstCContextMenuManager_x                                 0x140EF0190
#define pinstCInvSlotMgr_x                                         0x140D95FF0
#define pinstCItemDisplayManager_x                                 0x140EDE1B0
#define pinstCPopupWndManager_x                                    0x140EDEA40
#define pinstCSpellDisplayMgr_x                                    0x140EDF090
#define pinstCTaskManager_x                                        0x140BD1C80
#define pinstEQSuiteTextureLoader_x                                0x140D1F550
#define pinstItemIconCache_x                                       0x140EDBA98
#define pinstLootFiltersManager_x                                  0x140D959F8
#define pinstGFViewListener_x                                      0x140EEF968


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023FCB0
#define __CastRay_x                                                0x140238100
#define __CastRay2_x                                               0x140237E00
#define __compress_block_x                                         0x140523540
#define __ConvertItemTags_x                                        0x140238560
#define __CleanItemTags_x                                          0x1400880D0
#define __CreateCascadeMenuItems_x                                 0x1401869C0
#define __decompress_block_x                                       0x140569710
#define __DoesFileExist_x                                          0x140571D50
#define __EQGetTime_x                                              0x14056E450
#define __ExecuteCmd_x                                             0x14020E570
#define __FixHeading_x                                             0x14069C230
#define __FlushDxKeyboard_x                                        0x140333250
#define __get_bearing_x                                            0x140241EA0
#define __get_melee_range_x                                        0x140241F90
#define __GetAnimationCache_x                                      0x1403B0870
#define __GetGaugeValueFromEQ_x                                    0x1404E45D0
#define __GetLabelFromEQ_x                                         0x1404E5BE0
#define __GetXTargetType_x                                         0x14069D510   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069C2B0
#define __HelpPath_x                                               0x140EC3ED8   // Why?
#define __NewUIINI_x                                               0x1404F1670   // Why?
#define __ProcessDeviceEvents_x                                    0x140280530
#define __ProcessGameEvents_x                                      0x140275250
#define __ProcessKeyboardEvents_x                                  0x1403349A0
#define __ProcessMouseEvents_x                                     0x140276930
#define __SaveColors_x                                             0x1401969C0
#define __STMLToText_x                                             0x1405766A0
#define __WndProc_x                                                0x140331A80
#define CMemoryMappedFile__SetFile_x                               0x1407D8160
#define DrawNetStatus_x                                            0x1402BFA70
#define Util__FastTime_x                                           0x14056D9E0
#define __eq_delete_x                                              0x1406A41D4
#define __eq_new_x                                                 0x1406A4190
#define __CopyLayout_x                                             0x1402ADA10
#define __ThrottleFrameRate_x                                      0x140264A74
#define __ThrottleFrameRateEnd_x                                   0x140264AD4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344350
#define CAAWnd__Update_x                                           0x140344650
#define CAAWnd__UpdateSelected_x                                   0x140345690

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082CB68
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1AF0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1D70
#define AltAdvManager__GetAAById_x                                 0x1401A13C0
#define AltAdvManager__CanTrainAbility_x                           0x1401A11D0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0E90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0D10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1DA0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5C50
#define CharacterZoneClient__CanUseItem_x                          0x1400E6080
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2770
#define CharacterZoneClient__CastSpell_x                           0x1400D2810
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1BB0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7750
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7910
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D55A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDDD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC800  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6A50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5550
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF990
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE860
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6C20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7120
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AF0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEFA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E73C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFC20
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6CA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0A00
#define CharacterZoneClient__GetModCap_x                           0x1400F7FC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6F30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7140
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC60
#define CharacterZoneClient__HasSkill_x                            0x1400F39F0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7BF0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB390
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7AA0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC120  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7DF0
#define CharacterZoneClient__Max_Mana_x                            0x1402DC340  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8250
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE740
#define CharacterZoneClient__SpellDuration_x                       0x1400DF440
#define CharacterZoneClient__TotalEffect_x                         0x1400E0790
#define CharacterZoneClient__UseSkill_x                            0x1400FD770


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403627F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036CB10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403689C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036C590

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036F1D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA31E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392100
#define CChatWindowManager__InitContextMenu_x                      0x140392290
#define CChatWindowManager__FreeChatWindow_x                       0x140391180
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399E70
#define CChatWindowManager__CreateChatWindow_x                     0x140390AC0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105CE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039AEB0
#define CChatWindow__Clear_x                                       0x14039BE60
#define CChatWindow__WndNotification_x                             0x14039D050
#define CChatWindow__AddHistory_x                                  0x14039B960

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB850
#define CContextMenu__RemoveMenuItem_x                             0x1405ABC40
#define CContextMenu__RemoveAllMenuItems_x                         0x1405ABC10
#define CContextMenu__CheckMenuItem_x                              0x1405ABA80
#define CContextMenu__SetMenuItem_x                                0x1405ABC60
#define CContextMenu__AddSeparator_x                               0x1405AB9C0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D740
#define CContextMenuManager__RemoveMenu_x                          0x14059DD20
#define CContextMenuManager__PopupMenu_x                           0x14059DA60
#define CContextMenuManager__Flush_x                               0x14059D7C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A87A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140664FA0
#define CChatService__GetFriendName_x                              0x140664FB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E690
#define CComboWnd__Draw_x                                          0x14058E790
#define CComboWnd__GetCurChoice_x                                  0x14058EA70  // unused
#define CComboWnd__GetListRect_x                                   0x14058EB10
#define CComboWnd__InsertChoice_x                                  0x14058EE50
#define CComboWnd__SetColors_x                                     0x14058F1E0
#define CComboWnd__SetChoice_x                                     0x14058F1A0
#define CComboWnd__GetItemCount_x                                  0x14058EB00
#define CComboWnd__GetCurChoiceText_x                              0x14058EAB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058EA40
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058EF10

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6520
#define CContainerWnd__SetContainer_x                              0x1403FBDC0
#define CContainerWnd__vftable_x                                   0x1409BB6D8

// CDisplay
#define CDisplay__cameraType_x                                     0x140D960EC
#define CDisplay__ZoneMainUI_x                                     0x1405C59F0
#define CDisplay__PreZoneMainUI_x                                  0x1401938F0
#define CDisplay__CleanGameUI_x                                    0x140185A80
#define CDisplay__GetClickedActor_x                                0x140189C30
#define CDisplay__GetUserDefinedColor_x                            0x14018A8A0
#define CDisplay__InitCharSelectUI_x                               0x14018AB50
#define CDisplay__ReloadUI_x                                       0x140195BE0
#define CDisplay__RestartUI_x                                      0x1401F4BA0
#define CDisplay__WriteTextHD2_x                                   0x14019CBF0
#define CDisplay__TrueDistance_x                                   0x14019C8A0
#define CDisplay__SetViewActor_x                                   0x1401990E0
#define CDisplay__GetFloorHeight_x                                 0x140189E90
#define CDisplay__ToggleScreenshotMode_x                           0x14019C390
#define CDisplay__RealRender_World_x                               0x140194FC0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CFC20
#define CEditWnd__DrawCaret_x                                      0x1405C16E0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1B90
#define CEditWnd__GetCaretPt_x                                     0x1405C1E10  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1E50
#define CEditWnd__GetDisplayString_x                               0x1405C20C0
#define CEditWnd__GetHorzOffset_x                                  0x1405C2300
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C2450
#define CEditWnd__GetSelStartPt_x                                  0x1405C2730  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C2580
#define CEditWnd__PointFromPrintableChar_x                         0x1405C32E0
#define CEditWnd__ReplaceSelection_x                               0x1405C3690
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3B30
#define CEditWnd__SetEditable_x                                    0x1405C3DC0
#define CEditWnd__SetWindowText_x                                  0x1405C3DF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265B80
#define CEverQuest__ClickedPlayer_x                                0x14025B650
#define CEverQuest__CreateTargetIndicator_x                        0x14025BF10
#define CEverQuest__DoTellWindow_x                                 0x1401059F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401062B0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267540
#define CEverQuest__dsp_chat_x                                     0x140105420 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291940
#define CEverQuest__Emote_x                                        0x140267F20
#define CEverQuest__GetBodyTypeDesc_x                              0x140268CD0
#define CEverQuest__GetClassDesc_x                                 0x140268D30
#define CEverQuest__GetClassThreeLetterCode_x                      0x140269100
#define CEverQuest__GetDeityDesc_x                                 0x1402693B0
#define CEverQuest__GetLangDesc_x                                  0x1402697E0
#define CEverQuest__GetRaceDesc_x                                  0x140269B80
#define CEverQuest__InterpretCmd_x                                 0x14026B4C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402805A0
#define CEverQuest__LMouseUp_x                                     0x14026CEE0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027DDC0
#define CEverQuest__RMouseUp_x                                     0x1402774C0
#define CEverQuest__SetGameState_x                                 0x140282AE0
#define CEverQuest__UPCNotificationFlush_x                         0x140288410 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026CB50
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278870
#define CEverQuest__ReportSuccessfulHit_x                          0x140279690

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BAC60

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0CA0
#define CGuild__GetGuildName_x                                     0x1400C0CE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DD1D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A3530
#define CHotButton__SetCheck_x                                     0x1402A3800

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4B00
#define CInvSlotMgr__MoveItem_x                                    0x1403F4CE0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F6680

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1D10
#define CInvSlot__SliderComplete_x                                 0x1403F3260
#define CInvSlot__GetItemBase_x                                    0x1403ED930
#define CInvSlot__UpdateItem_x                                     0x1403F3710

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7A10

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418C60
#define CItemDisplayWnd__UpdateStrings_x                           0x14041B5A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404156F0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416EB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140418070

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E10F0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2DE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C8B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411E20

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DFA0

// CLabel
#define CLabel__UpdateText_x                                       0x140422990

// CListWnd
#define CListWnd__CListWnd_x                                       0x140592020
#define CListWnd__dCListWnd_x                                      0x140592470
#define CListWnd__vftable_x                                        0x140AA1338
#define CListWnd__AddColumn_x                                      0x140592B10
#define CListWnd__AddColumn1_x                                     0x140592BB0
#define CListWnd__AddLine_x                                        0x140592D10
#define CListWnd__AddString_x                                      0x1405932A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593810
#define CListWnd__CalculateVSBRange_x                              0x140593AF0
#define CListWnd__ClearSel_x                                       0x140593CA0
#define CListWnd__ClearAllSel_x                                    0x140593C40
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593D00
#define CListWnd__Compare_x                                        0x140593EC0
#define CListWnd__Draw_x                                           0x140594390
#define CListWnd__DrawColumnSeparators_x                           0x140594F40
#define CListWnd__DrawHeader_x                                     0x140595000
#define CListWnd__DrawItem_x                                       0x1405956D0
#define CListWnd__DrawLine_x                                       0x140596050
#define CListWnd__DrawSeparator_x                                  0x140596510
#define CListWnd__EnableLine_x                                     0x140596930
#define CListWnd__EnsureVisible_x                                  0x140596990
#define CListWnd__ExtendSel_x                                      0x140596A90
#define CListWnd__GetColumnMinWidth_x                              0x140596DC0
#define CListWnd__GetColumnWidth_x                                 0x140596E40
#define CListWnd__GetCurSel_x                                      0x140596F40
#define CListWnd__GetItemData_x                                    0x1405972C0
#define CListWnd__GetItemHeight_x                                  0x140597300
#define CListWnd__GetItemRect_x                                    0x140597520
#define CListWnd__GetItemText_x                                    0x1405977C0
#define CListWnd__GetSelList_x                                     0x140597A10
#define CListWnd__GetSeparatorRect_x                               0x140597C00
#define CListWnd__InsertLine_x                                     0x140599060
#define CListWnd__RemoveLine_x                                     0x1405996D0
#define CListWnd__SetColors_x                                      0x140599A90
#define CListWnd__SetColumnJustification_x                         0x140599AB0
#define CListWnd__SetColumnLabel_x                                 0x140599B30
#define CListWnd__SetColumnWidth_x                                 0x140599CD0
#define CListWnd__SetCurSel_x                                      0x140599DA0
#define CListWnd__SetItemColor_x                                   0x14059A010
#define CListWnd__SetItemData_x                                    0x14059A0B0
#define CListWnd__SetItemText_x                                    0x14059A2F0
#define CListWnd__Sort_x                                           0x14059A700
#define CListWnd__ToggleSel_x                                      0x14059A870
#define CListWnd__SetColumnsSizable_x                              0x140599D20
#define CListWnd__SetItemWnd_x                                     0x14059A420
#define CListWnd__GetItemWnd_x                                     0x1405979A0
#define CListWnd__SetItemIcon_x                                    0x14059A0F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405935E0
#define CListWnd__SetVScrollPos_x                                  0x14059A660

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140435C60

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A08168
#define MapViewMap__Clear_x                                        0x1404377E0
#define MapViewMap__SetZoom_x                                      0x14043DE30
#define MapViewMap__HandleLButtonDown_x                            0x14043A970

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045F4F0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140465A80
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140466220
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469A30
#define CMerchantWnd__SelectBuySellSlot_x                          0x140468D80
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046DCC0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140640540
#define CPacketScrambler__hton_x                                   0x140640530

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BAFA0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BAEE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BB5D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BB380
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BA2E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BA270
#define CSidlManagerBase__CreateXWnd_x                             0x1405B98D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D40F0
#define CSidlManager__CreateXWnd_x                                 0x1404D42B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057FA20
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057FB40
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CA160 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057FCC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057F150
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057F220
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F430
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405803B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405805E0
#define CSidlScreenWnd__GetChildItem_x                             0x140580780
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405809D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058AC60 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580D40
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405810B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581970
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140582370
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EEF808
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582A10
#define CSidlScreenWnd__StoreIniVis_x                              0x140583200
#define CSidlScreenWnd__vftable_x                                  0x140AA05A8
#define CSidlScreenWnd__WndNotification_x                          0x140583250

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C750 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031CBF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031CB20
#define CSkillMgr__IsActivatedSkill_x                              0x14031CFA0
#define CSkillMgr__IsCombatSkill_x                                 0x14031CFE0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CF10
#define CSkillMgr__GetSkillLastUsed_x                              0x14031CB70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059B1F0
#define CSliderWnd__SetValue_x                                     0x14059BA00
#define CSliderWnd__SetNumTicks_x                                  0x14059B880

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DA740

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A01A0
#define CStmlWnd__CalculateHSBRange_x                              0x14058A610
#define CStmlWnd__CalculateVSBRange_x                              0x1405A1040
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1B30
#define CStmlWnd__ForceParseNow_x                                  0x1405A1BD0
#define CStmlWnd__GetVisibleText_x                                 0x1405A22A0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3FE0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A4020
#define CStmlWnd__SetSTMLText_x                                    0x1405AAFF0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AB1A0
#define CStmlWnd__UpdateHistoryString_x                            0x1405AB530

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059BDD0
#define CTabWnd__DrawCurrentPage_x                                 0x14059BE70
#define CTabWnd__DrawTab_x                                         0x14059C240
#define CTabWnd__GetTabRect_x                                      0x14059C8B0
#define CTabWnd__InsertPage_x                                      0x14059CB80
#define CTabWnd__RemovePage_x                                      0x14059CE10
#define CTabWnd__SetPage_x                                         0x14059CF70
#define CTabWnd__UpdatePage_x                                      0x14059D270

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C4250
#define CPageWnd__SetTabText_x                                     0x1405C42C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3E0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA7F0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B29A0
#define CTextureFont__DrawWrappedText1_x                           0x1405B28B0
#define CTextureFont__DrawWrappedText2_x                           0x1405B2AD0
#define CTextureFont__GetTextExtent_x                              0x1405B2E80
#define CTextureFont__GetHeight_x                                  0x1405B2E40

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C88C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057ED30

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1EEC0
#define CXStr__gCXStrAccess_x                                      0x140EEF608

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585C50
#define CXWnd__ClrFocus_x                                          0x140585F40
#define CXWnd__Destroy_x                                           0x1405860C0
#define CXWnd__DoAllDrawing_x                                      0x1405861D0
#define CXWnd__DrawColoredRect_x                                   0x1405869A0
#define CXWnd__DrawTooltip_x                                       0x140588010
#define CXWnd__DrawTooltipAtPoint_x                                0x1405880C0
#define CXWnd__GetChildItem_x                                      0x1405889D0
#define CXWnd__GetChildWndAt_x                                     0x140588A90
#define CXWnd__GetClientRect_x                                     0x140588D50
#define CXWnd__GetClientClipRect_x                                 0x140588C00
#define CXWnd__GetRelativeRect_x                                   0x14058A750
#define CXWnd__GetScreenClipRect_x                                 0x14058A860
#define CXWnd__GetScreenRect_x                                     0x14058A9E0
#define CXWnd__GetTooltipRect_x                                    0x14058AB60
#define CXWnd__IsActive_x                                          0x14058B120
#define CXWnd__IsDescendantOf_x                                    0x14058B150
#define CXWnd__IsReallyVisible_x                                   0x14058B1C0
#define CXWnd__IsType_x                                            0x14058B200
#define CXWnd__Minimize_x                                          0x14058B300
#define CXWnd__ProcessTransition_x                                 0x14058C1A0
#define CXWnd__Resize_x                                            0x14058C2B0
#define CXWnd__Right_x                                             0x14058C350
#define CXWnd__SetFocus_x                                          0x14058C720
#define CXWnd__SetFont_x                                           0x14058C770
#define CXWnd__SetKeyTooltip_x                                     0x14058C870
#define CXWnd__SetMouseOver_x                                      0x14058C9A0
#define CXWnd__SetParent_x                                         0x14058CA20
#define CXWnd__StartFade_x                                         0x14058CE60
#define CXWnd__vftable_x                                           0x140AA0B98
#define CXWnd__CXWnd_x                                             0x1405847F0
#define CXWnd__dCXWnd_x                                            0x140585130

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CF3A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ACE00
#define CXWndManager__DrawCursor_x                                 0x1405AD0E0
#define CXWndManager__DrawWindows_x                                0x1405AD340
#define CXWndManager__GetKeyboardFlags_x                           0x1405ADA10
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ADA50
#define CXWndManager__RemoveWnd_x                                  0x1405B1070

// CDBStr
#define CDBStr__GetString_x                                        0x140183C40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064A340

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE890
#define CCharacterListWnd__EnterWorld_x                            0x1400CD590
#define CCharacterListWnd__Quit_x                                  0x1400CE870
#define CCharacterListWnd__UpdateList_x                            0x1400CF700

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617DD0
#define ItemBase__CreateItemTagString_x                            0x140618850
#define ItemBase__GetImageNum_x                                    0x14061ADE0
#define ItemBase__GetItemValue_x                                   0x14061C8A0
#define ItemBase__IsEmpty_x                                        0x14061E4C0
#define ItemBase__IsKeyRingItem_x                                  0x14061EC00
#define ItemBase__ValueSellMerchant_x                              0x140622DD0
#define ItemClient__CanDrop_x                                      0x1402A5B00
#define ItemClient__CanGoInBag_x                                   0x1402A5C30
#define ItemClient__CreateItemClient_x                             0x1402A5F10
#define ItemClient__dItemClient_x                                  0x1402A5970

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3290
#define EQ_LoadingS__Array_x                                       0x140D0B230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062F760
#define PcBase__GetCombatAbility_x                                 0x14062FE50
#define PcBase__GetCombatAbilityTimer_x                            0x14062FEF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140630640
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140631130
#define PcClient__AlertInventoryChanged_x                          0x1402C8050
#define PcClient__GetConLevel_x                                    0x1402C8670  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CAE10
#define PcClient__HasLoreItem_x                                    0x1402CBDD0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9660
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD260

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212C80  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212E30  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212F90  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212ED0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024CC30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E480

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068E550
#define PlayerBase__CanSee1_x                                      0x14068E620
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068EAE0
#define PlayerBase__HasProperty_x                                  0x14068ECB0
#define PlayerBase__IsTargetable_x                                 0x14068ED70
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9D60
#define PlayerClient__GetPcClient_x                                0x1402EC590
#define PlayerClient__PlayerClient_x                               0x1402E3020
#define PlayerClient__SetNameSpriteState_x                         0x1402EF9E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F09A0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FEF50
#define PlayerZoneClient__DoAttack_x                               0x1402FFC60
#define PlayerZoneClient__GetLevel_x                               0x140303390
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F9C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192170

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8870  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8920  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8A20
#define PlayerManagerClient__CreatePlayer_x                        0x1402F8340
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068E110

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AAF10
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AAB10
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AAB80
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AAEA0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AB030
#define KeypressHandler__HandleKeyUp_x                             0x1402AB150
#define KeypressHandler__SaveKeymapping_x                          0x1402AADB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140647E80  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641C70

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2380  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7690
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9D60
#define PcZoneClient__RemovePetEffect_x                            0x1402DD360
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA950
#define PcZoneClient__CanEquipItem_x                               0x1402D59E0
#define PcZoneClient__GetItemByID_x                                0x1402D8730
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD0E0
#define PcZoneClient__BandolierSwap_x                              0x1402D4A30

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402544F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B08A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A52D0
#define CContainerMgr__CloseContainer_x                            0x1403A4C10
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5650

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498EB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029DD00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429C70
#define CLootWnd__RequestLootSlot_x                                0x14042AC80

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2650
#define EQ_Spell__SpellAffects_x                                   0x1401D3910
#define EQ_Spell__SpellAffectBase_x                                0x1401D3870
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7310
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D72C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3530
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D30F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D29C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4E20
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F4530
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F3D40

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FC490  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AE20
#define CTaskManager__GetTaskStatus_x                              0x14017AF30
#define CTaskManager__GetElementDescription_x                      0x14017AAB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D09C0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF800
#define EqSoundManager__SoundAssistPlay_x                          0x140321DA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403220E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058DC20
#define CTextureAnimation__SetCurCell_x                            0x14058DF30

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029BF60

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406626E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140662760
#define CharacterBase__IsExpansionFlag_x                           0x1401F43F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140383020
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383990
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384EE0

// messages
#define msg_spell_worn_off_x                                       0x1402095B0
#define msg_new_text_x                                             0x140204E40
#define __msgTokenTextParam_x                                      0x1401FC970
#define msgTokenText_x                                             0x1401FC890

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323760
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323680

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069D8F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404230E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9FB0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ACF20
#define CCursorAttachment__RemoveAttachment_x                      0x1403AD1D0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6D60
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6F50
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6F60

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149220
#define CFindItemWnd__Update_x                                     0x140149BC0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401436E0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152AA0
#define LootFiltersManager__GetItemFilterData_x                    0x1401535B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153E50
#define LootFiltersManager__SetItemLootFilter_x                    0x140154100

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047BC90

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C310
#define CResolutionHandler__UpdateResolution_x                     0x1406A2150

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A15E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140666A60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140666950  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6340
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5F20

// ItemBase
#define ItemBase__IsLore_x                                         0x14061ECD0
#define ItemBase__IsLoreEquipped_x                                 0x14061ED60

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BDC90

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024CD90
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024CD20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024CD60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403168C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401235F0
#define FactionManagerClient__HandleFactionMessage_x               0x1401239A0
#define FactionManagerClient__GetFactionStanding_x                 0x140122DC0
#define FactionManagerClient__GetMaxFaction_x                      0x140122DC0
#define FactionManagerClient__GetMinFaction_x                      0x140122C70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC970

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ED90

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABBF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAF70
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ABA10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB990  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403287D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403168C0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140213020

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583840

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033A2A0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C950

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064AEC0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB4BF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529960

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
