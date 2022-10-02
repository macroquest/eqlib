/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

#define __ClientDate                                               20220916u
#define __ExpectedVersionDate                                     "Sep 16 2022"
#define __ExpectedVersionTime                                     "07:38:04"
#define __ActualVersionDate_x                                      0x14079ABC8
#define __ActualVersionTime_x                                      0x14079ABB8
#define __ActualVersionBuild_x                                     0x140788DD8

// Memory Protection
#define __MemChecker0_x                                            0x14026F880
#define __MemChecker1_x                                            0x140507A00
#define __MemChecker4_x                                            0x14023F650
#define __EncryptPad0_x                                            0x140A425E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7D9E0
#define instEQZoneInfo_x                                           0x140B7DBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DA260
#define __gfMaxZoomCameraDistance_x                                0x140790F10
#define __gfMaxCameraDistance_x                                    0x1407CBB74
#define __CurrentSocial_x                                          0x1408FE900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A39F70
#define g_eqCommandStates_x                                        0x140A3AFD0
#define __CommandList_x                                            0x140A3B210
#define __ScreenMode_x                                             0x140AC553C
#define __gWorld_x                                                 0x140B77F70
#define __gpbCommandEvent_x                                        0x140B78420
#define __ServerHost_x                                             0x140B78608
#define __Guilds_x                                                 0x140B7C590
#define __MouseEventTime_x                                         0x140BE8E50
#define DI8__Mouse_Check_x                                         0x140BEDAB0
#define __heqmain_x                                                0x140BEFF58
#define DI8__Mouse_x                                               0x140BEFF70
#define __HWnd_x                                                   0x140BEFF78
#define __Mouse_x                                                  0x140BECFA8
#define DI8__Main_x                                                0x140BED040
#define DI8__Keyboard_x                                            0x140BED048
#define __LoginName_x                                              0x140BED72C
#define __CurrentMapLabel_x                                        0x140C02CC0
#define __LabelCache_x                                             0x140C038D0
#define __SubscriptionType_x                                       0x140C3AEC0
#define Teleport_Table_Size_x                                      0x140B78428
#define Teleport_Table_x                                           0x140B75F70

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B78920
#define pinstActiveBanker_x                                        0x140B75E78
#define pinstActiveCorpse_x                                        0x140B75E68
#define pinstActiveGMaster_x                                       0x140B75E70
#define pinstActiveMerchant_x                                      0x140B75E60
#define pinstAltAdvManager_x                                       0x140AC6178
#define pinstCEverQuest_x                                          0x140BECFA0
#define pinstCamActor_x                                            0x140AC5528
#define pinstCDBStr_x                                              0x140AC4F80
#define pinstCDisplay_x                                            0x140B75F68
#define pinstControlledPlayer_x                                    0x140B75F08
#define pinstCResolutionHandler_x                                  0x141273A60
#define pinstCSidlManager_x                                        0x140C14940
#define pinstCXWndManager_x                                        0x140C14930
#define instDynamicZone_x                                          0x140B7C450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B7C49E
#define instExpeditionName_x                                       0x140B7C4DE
#define pinstDZMember_x                                            0x140B7C568
#define pinstDZTimerInfo_x                                         0x140B7C570
#define pinstEqLogin_x                                             0x140BED070
#define instTribute_x                                              0x140A35800
#define pinstEQSoundManager_x                                      0x140AC64B8
#define pinstEQSpellStrings_x                                      0x140AA9BB0
#define pinstSGraphicsEngine_x                                     0x1412737F8
#define pinstLocalPC_x                                             0x140B75F58
#define pinstLocalPlayer_x                                         0x140B75E58
#define pinstCMercenaryClientManager_x                             0x140BEA6F0
#define pinstModelPlayer_x                                         0x140B75E88
#define pinstRenderInterface_x                                     0x141273810
#define pinstSkillMgr_x                                            0x140BEC380
#define pinstSpawnManager_x                                        0x140BEAAB0
#define pinstSpellManager_x                                        0x140BEC4C8
#define pinstStringTable_x                                         0x140B75F60
#define pinstSwitchManager_x                                       0x140B75DD0
#define pinstTarget_x                                              0x140B75F00
#define pinstTaskMember_x                                          0x140A357F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B75F10
#define pinstTradeTarget_x                                         0x140B75E80
#define instTributeActive_x                                        0x140A35829
#define pinstViewActor_x                                           0x140AC5520
#define pinstWorldData_x                                           0x140B75F30
#define pinstPlayerPath_x                                          0x140BEAAD8
#define pinstTargetIndicator_x                                     0x140BEC578
#define EQObject_Top_x                                             0x140B75F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFFE28
#define pinstCContainerMgr_x                                       0x140AC5018
#define pinstCContextMenuManager_x                                 0x140C148E0
#define pinstCInvSlotMgr_x                                         0x140AC5000
#define pinstCItemDisplayManager_x                                 0x140C02890
#define pinstCPopupWndManager_x                                    0x140C03120
#define pinstCSpellDisplayMgr_x                                    0x140C037B0
#define pinstCTaskManager_x                                        0x1408FEC40
#define pinstEQSuiteTextureLoader_x                                0x140A4BC40
#define pinstItemIconCache_x                                       0x140C00188
#define pinstLootFiltersManager_x                                  0x140AC4998

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F9100
#define __CastRay2_x                                               0x1401F8E10
#define __ConvertItemTags_x                                        0x1401F9500
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x1401535B0
#define __DoesFileExist_x                                          0x14050C1E0
#define __EQGetTime_x                                              0x140507FB0
#define __ExecuteCmd_x                                             0x1401D21A0
#define __FixHeading_x                                             0x14060B8B0
#define __FlushDxKeyboard_x                                        0x1402EAE70
#define __get_bearing_x                                            0x140202730
#define __get_melee_range_x                                        0x140202820
#define __GetAnimationCache_x                                      0x140361980
#define __GetGaugeValueFromEQ_x                                    0x140481440
#define __GetLabelFromEQ_x                                         0x1404829F0
#define __GetXTargetType_x                                         0x14060CBF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060B930
#define __HelpPath_x                                               0x140BE8D18   // Why?
#define __NewUIINI_x                                               0x14048DBA0   // Why?
#define __ProcessGameEvents_x                                      0x140234E90
#define __ProcessKeyboardEvents_x                                  0x1402EC670
#define __ProcessMouseEvents_x                                     0x1402362C0
#define __SaveColors_x                                             0x140163250
#define __STMLToText_x                                             0x140535D80
#define __WndProc_x                                                0x1402E95F0
#define CMemoryMappedFile__SetFile_x                               0x140747430
#define DrawNetStatus_x                                            0x14027D400
#define Util__FastTime_x                                           0x140508CB0
#define __eq_delete_x                                              0x140611A30
#define __eq_new_x                                                 0x140611B2C
#define __CopyLayout_x                                             0x14026BD10
#define __ThrottleFrameRate_x                                      0x140224CA1
#define __ThrottleFrameRateEnd_x                                   0x140224D01

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB840
#define CAAWnd__Update_x                                           0x1402FBB40
#define CAAWnd__UpdateSelected_x                                   0x1402FCB00

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140778400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C170

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DF80
#define AltAdvManager__IsAbilityReady_x                            0x14016E200
#define AltAdvManager__GetAAById_x                                 0x14016D850
#define AltAdvManager__CanTrainAbility_x                           0x14016D680
#define AltAdvManager__CanSeeAbility_x                             0x14016D340

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A42C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5070
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5280
#define CharacterZoneClient__CanUseItem_x                          0x1400B90A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5B70
#define CharacterZoneClient__CastSpell_x                           0x1400A5C10
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B5210
#define CharacterZoneClient__Cur_HP_x                              0x1400BA6D0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA890
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8E30
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C0330
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CED90  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA320
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8620
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1E50
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0D80
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA4F0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AE10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C680
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1480
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BA380
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C2060
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA570
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2AF0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA780
#define CharacterZoneClient__GetModCap_x                           0x1400CA4A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA820
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AAA30
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F520
#define CharacterZoneClient__HasSkill_x                            0x1400C5CD0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AED50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9F30
#define CharacterZoneClient__Max_Endurance_x                       0x140295D40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CA270
#define CharacterZoneClient__Max_Mana_x                            0x140295F30  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA730
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2240
#define CharacterZoneClient__SpellDuration_x                       0x1400B2E20
#define CharacterZoneClient__TotalEffect_x                         0x1400B4050
#define CharacterZoneClient__UseSkill_x                            0x1400CFCF0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403199E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140323B10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031FAB0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031EB50

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403261C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D8260

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140346AD0
#define CChatWindowManager__InitContextMenu_x                      0x140346C60
#define CChatWindowManager__FreeChatWindow_x                       0x140345D20
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D9F0
#define CChatWindowManager__CreateChatWindow_x                     0x140345660

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7AF0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E960
#define CChatWindow__Clear_x                                       0x14034F770
#define CChatWindow__WndNotification_x                             0x1403508F0
#define CChatWindow__AddHistory_x                                  0x14034F270

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140546D50
#define CContextMenu__RemoveMenuItem_x                             0x140547260
#define CContextMenu__RemoveAllMenuItems_x                         0x140547230
#define CContextMenu__CheckMenuItem_x                              0x1405470A0
#define CContextMenu__SetMenuItem_x                                0x140547280
#define CContextMenu__AddSeparator_x                               0x140546EB0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405478D0
#define CContextMenuManager__RemoveMenu_x                          0x140547E50
#define CContextMenuManager__PopupMenu_x                           0x140547BD0
#define CContextMenuManager__Flush_x                               0x140547950
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B9F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D4330
#define CChatService__GetFriendName_x                              0x1405D4340

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542ED0
#define CComboWnd__Draw_x                                          0x140542FD0
#define CComboWnd__GetCurChoice_x                                  0x1405432B0  // unused
#define CComboWnd__GetListRect_x                                   0x140543350
#define CComboWnd__InsertChoice_x                                  0x140543690
#define CComboWnd__SetColors_x                                     0x140543A20
#define CComboWnd__SetChoice_x                                     0x1405439E0
#define CComboWnd__GetItemCount_x                                  0x140543340
#define CComboWnd__GetCurChoiceText_x                              0x1405432F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140543280
#define CComboWnd__InsertChoiceAtIndex_x                           0x140543750

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140359A60
#define CContainerWnd__SetContainer_x                              0x14035A810
#define CContainerWnd__vftable_x                                   0x1407A8AE8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC52A4
#define CDisplay__ZoneMainUI_x                                     0x14055E510
#define CDisplay__PreZoneMainUI_x                                  0x1401601B0
#define CDisplay__CleanGameUI_x                                    0x1401526B0
#define CDisplay__GetClickedActor_x                                0x140156840
#define CDisplay__GetUserDefinedColor_x                            0x140157320
#define CDisplay__InitCharSelectUI_x                               0x1401575D0
#define CDisplay__ReloadUI_x                                       0x140162500
#define CDisplay__WriteTextHD2_x                                   0x140169450
#define CDisplay__TrueDistance_x                                   0x140169130
#define CDisplay__SetViewActor_x                                   0x140165A40
#define CDisplay__GetFloorHeight_x                                 0x140156AA0
#define CDisplay__ToggleScreenshotMode_x                           0x140168C30
#define CDisplay__RealRender_World_x                               0x1401618A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140569A20
#define CEditWnd__DrawCaret_x                                      0x14054A7A0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054AC60
#define CEditWnd__GetCaretPt_x                                     0x14054AEE0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054AF20
#define CEditWnd__GetDisplayString_x                               0x14054B190
#define CEditWnd__GetHorzOffset_x                                  0x14054B3D0
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B520
#define CEditWnd__GetSelStartPt_x                                  0x14054B800  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B650
#define CEditWnd__PointFromPrintableChar_x                         0x14054C3B0
#define CEditWnd__ReplaceSelection_x                               0x14054C760
#define CEditWnd__SelectableCharFromPoint_x                        0x14054CC00
#define CEditWnd__SetEditable_x                                    0x14054CE90
#define CEditWnd__SetWindowText_x                                  0x14054CEC0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140226050
#define CEverQuest__ClickedPlayer_x                                0x14021BE50
#define CEverQuest__CreateTargetIndicator_x                        0x14021C5B0
#define CEverQuest__DoTellWindow_x                                 0x1400D7800 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D80C0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140227550
#define CEverQuest__dsp_chat_x                                     0x1400D7320 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140250D60
#define CEverQuest__Emote_x                                        0x140227EB0
#define CEverQuest__GetBodyTypeDesc_x                              0x140228C20
#define CEverQuest__GetClassDesc_x                                 0x140228C80
#define CEverQuest__GetClassThreeLetterCode_x                      0x140229050
#define CEverQuest__GetDeityDesc_x                                 0x140229400
#define CEverQuest__GetLangDesc_x                                  0x140229830
#define CEverQuest__GetRaceDesc_x                                  0x140229BD0
#define CEverQuest__InterpretCmd_x                                 0x14022B440
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023FCD0
#define CEverQuest__LMouseUp_x                                     0x14022CDE0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D670
#define CEverQuest__RMouseUp_x                                     0x140236E40
#define CEverQuest__SetGameState_x                                 0x1402421C0
#define CEverQuest__UPCNotificationFlush_x                         0x140247870 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022CA60
#define CEverQuest__ReportSuccessfulHeal_x                         0x140238170
#define CEverQuest__ReportSuccessfulHit_x                          0x140238EB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036BCD0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946F0
#define CGuild__GetGuildName_x                                     0x140094730

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140388580

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140261B20
#define CHotButton__SetCheck_x                                     0x140261DB0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140398210
#define CInvSlotMgr__MoveItem_x                                    0x140398360
#define CInvSlotMgr__SelectSlot_x                                  0x140399D50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395E60
#define CInvSlot__SliderComplete_x                                 0x140397090
#define CInvSlot__GetItemBase_x                                    0x140391F40
#define CInvSlot__UpdateItem_x                                     0x1403974F0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14039A3B0
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039AF00

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA850
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BD160
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B76C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B8D80
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B9C90

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047E120
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047FCF0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B76F0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B3E60

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117A50

// CLabel
#define CLabel__UpdateText_x                                       0x1403C4520

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519E30
#define CListWnd__dCListWnd_x                                      0x14051A270
#define CListWnd__vftable_x                                        0x1407D7660
#define CListWnd__AddColumn_x                                      0x14051A910
#define CListWnd__AddColumn1_x                                     0x14051A9B0
#define CListWnd__AddLine_x                                        0x14051AB10
#define CListWnd__AddString_x                                      0x14051B090
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B780
#define CListWnd__CalculateVSBRange_x                              0x14051BA60
#define CListWnd__ClearSel_x                                       0x14051BC10
#define CListWnd__ClearAllSel_x                                    0x14051BBB0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051BC70
#define CListWnd__Compare_x                                        0x14051BE30
#define CListWnd__Draw_x                                           0x14051C300
#define CListWnd__DrawColumnSeparators_x                           0x14051CEA0
#define CListWnd__DrawHeader_x                                     0x14051CF60
#define CListWnd__DrawItem_x                                       0x14051D620
#define CListWnd__DrawLine_x                                       0x14051DFA0
#define CListWnd__DrawSeparator_x                                  0x14051E460
#define CListWnd__EnableLine_x                                     0x14051E880
#define CListWnd__EnsureVisible_x                                  0x14051E8E0
#define CListWnd__ExtendSel_x                                      0x14051E9E0
#define CListWnd__GetColumnMinWidth_x                              0x14051ED10
#define CListWnd__GetColumnWidth_x                                 0x14051ED90
#define CListWnd__GetCurSel_x                                      0x14051EE90
#define CListWnd__GetItemData_x                                    0x14051F210
#define CListWnd__GetItemHeight_x                                  0x14051F250
#define CListWnd__GetItemRect_x                                    0x14051F410
#define CListWnd__GetItemText_x                                    0x14051F6B0
#define CListWnd__GetSelList_x                                     0x14051F900
#define CListWnd__GetSeparatorRect_x                               0x14051FAF0
#define CListWnd__InsertLine_x                                     0x140520F70
#define CListWnd__RemoveLine_x                                     0x140521590
#define CListWnd__SetColors_x                                      0x140521960
#define CListWnd__SetColumnJustification_x                         0x140521980
#define CListWnd__SetColumnLabel_x                                 0x140521A00
#define CListWnd__SetColumnWidth_x                                 0x140521BA0
#define CListWnd__SetCurSel_x                                      0x140521C70
#define CListWnd__SetItemColor_x                                   0x140521EE0
#define CListWnd__SetItemData_x                                    0x140521F80
#define CListWnd__SetItemText_x                                    0x1405221C0
#define CListWnd__Sort_x                                           0x1405225D0
#define CListWnd__ToggleSel_x                                      0x140522740
#define CListWnd__SetColumnsSizable_x                              0x140521BF0
#define CListWnd__SetItemWnd_x                                     0x1405222F0
#define CListWnd__GetItemWnd_x                                     0x14051F890
#define CListWnd__SetItemIcon_x                                    0x140521FC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B550
#define CListWnd__SetVScrollPos_x                                  0x140522530

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6FA0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B4180
#define MapViewMap__Clear_x                                        0x1403D8B20
#define MapViewMap__SetZoom_x                                      0x1403DF0E0
#define MapViewMap__HandleLButtonDown_x                            0x1403DBC20

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404005E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140406190
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404081B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140409FD0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404093F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040DD70

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0FC0
#define CPacketScrambler__hton_x                                   0x1405B0FB0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405405A0
#define CSidlManagerBase__FindAnimation1_x                         0x1405404E0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140540BD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140540980
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F8E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F870
#define CSidlManagerBase__CreateXWnd_x                             0x14053EEB0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140470900
#define CSidlManager__CreateXWnd_x                                 0x140470AC0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405377F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140537920
#define CSidlScreenWnd__ConvertToRes_x                             0x140563FD0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140537A50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140537090
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536FE0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405372B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140538020
#define CSidlScreenWnd__EnableIniStorage_x                         0x140538250
#define CSidlScreenWnd__GetChildItem_x                             0x1405383F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538610
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14052A080 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140538980
#define CSidlScreenWnd__LoadIniInfo_x                              0x140538CF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405395A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539E50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C14788
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A480
#define CSidlScreenWnd__StoreIniVis_x                              0x14053AC70
#define CSidlScreenWnd__vftable_x                                  0x1407D86C0
#define CSidlScreenWnd__WndNotification_x                          0x14053ACC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D3DD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D41D0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D4110
#define CSkillMgr__IsActivatedSkill_x                              0x1402D4570
#define CSkillMgr__IsCombatSkill_x                                 0x1402D45B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140548C10
#define CSliderWnd__SetValue_x                                     0x140549420
#define CSliderWnd__SetNumTicks_x                                  0x1405492A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140477DC0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140551970
#define CStmlWnd__CalculateHSBRange_x                              0x140529A60
#define CStmlWnd__CalculateVSBRange_x                              0x1405528A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140553320
#define CStmlWnd__ForceParseNow_x                                  0x1405533C0
#define CStmlWnd__GetVisibleText_x                                 0x140553AA0
#define CStmlWnd__MakeStmlColorTag_x                               0x140555830
#define CStmlWnd__MakeWndNotificationTag_x                         0x140555870
#define CStmlWnd__SetSTMLText_x                                    0x14055C850
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055CA00
#define CStmlWnd__UpdateHistoryString_x                            0x14055CD90

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E460
#define CTabWnd__DrawCurrentPage_x                                 0x14054E500
#define CTabWnd__DrawTab_x                                         0x14054E8D0
#define CTabWnd__GetTabRect_x                                      0x14054EF30
#define CTabWnd__InsertPage_x                                      0x14054F200
#define CTabWnd__RemovePage_x                                      0x14054F490
#define CTabWnd__SetPage_x                                         0x14054F5F0
#define CTabWnd__UpdatePage_x                                      0x14054F8F0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054E060
#define CPageWnd__SetTabText_x                                     0x14054E0D0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E040


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140523890
#define CTextureFont__DrawWrappedText1_x                           0x1405237A0
#define CTextureFont__DrawWrappedText2_x                           0x1405239C0
#define CTextureFont__GetTextExtent_x                              0x140523D70
#define CTextureFont__GetHeight_x                                  0x140523D30

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140562730

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140516AA0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4B5C0
#define CXStr__gCXStrAccess_x                                      0x140C13D48

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405252D0
#define CXWnd__ClrFocus_x                                          0x140525510
#define CXWnd__Destroy_x                                           0x140525650
#define CXWnd__DoAllDrawing_x                                      0x140525760
#define CXWnd__DrawColoredRect_x                                   0x140525F20
#define CXWnd__DrawTooltip_x                                       0x1405275A0
#define CXWnd__DrawTooltipAtPoint_x                                0x140527650
#define CXWnd__GetChildItem_x                                      0x140527F50
#define CXWnd__GetChildWndAt_x                                     0x140528010
#define CXWnd__GetClientClipRect_x                                 0x140528180
#define CXWnd__GetRelativeRect_x                                   0x140529B80
#define CXWnd__GetScreenClipRect_x                                 0x140529C90
#define CXWnd__GetScreenRect_x                                     0x140529E00
#define CXWnd__GetTooltipRect_x                                    0x140529F80
#define CXWnd__IsActive_x                                          0x14052A500
#define CXWnd__IsDescendantOf_x                                    0x14052A530
#define CXWnd__IsReallyVisible_x                                   0x14052A5A0
#define CXWnd__IsType_x                                            0x14052A5E0
#define CXWnd__Minimize_x                                          0x14052A6E0
#define CXWnd__ProcessTransition_x                                 0x14052B710
#define CXWnd__Refade_x                                            0x14052B810
#define CXWnd__Resize_x                                            0x14052B830
#define CXWnd__Right_x                                             0x14052B8D0
#define CXWnd__SetFocus_x                                          0x14052BCA0
#define CXWnd__SetFont_x                                           0x14052BCF0
#define CXWnd__SetKeyTooltip_x                                     0x14052BE00
#define CXWnd__SetMouseOver_x                                      0x14052BF40
#define CXWnd__SetParent_x                                         0x14052BFC0
#define CXWnd__StartFade_x                                         0x14052C410
#define CXWnd__vftable_x                                           0x1407D7DD8
#define CXWnd__CXWnd_x                                             0x140523E90
#define CXWnd__dCXWnd_x                                            0x1405247B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405691A0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052DC40
#define CXWndManager__DrawWindows_x                                0x14052DD70
#define CXWndManager__GetKeyboardFlags_x                           0x14052E430
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E470
#define CXWndManager__RemoveWnd_x                                  0x1405317E0

// CDBStr
#define CDBStr__GetString_x                                        0x1401508B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405BA310

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A20A0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0DD0
#define CCharacterListWnd__Quit_x                                  0x1400A2080
#define CCharacterListWnd__UpdateList_x                            0x1400A2DA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A500
#define ItemBase__CreateItemTagString_x                            0x14058AF00
#define ItemBase__GetImageNum_x                                    0x14058D0E0
#define ItemBase__GetItemValue_x                                   0x14058ECD0
#define ItemBase__IsEmpty_x                                        0x140590840
#define ItemBase__IsKeyRingItem_x                                  0x140590F50
#define ItemBase__ValueSellMerchant_x                              0x140595320
#define ItemClient__CanDrop_x                                      0x140263EE0
#define ItemClient__CanGoInBag_x                                   0x140264010
#define ItemClient__CreateItemClient_x                             0x1402642D0
#define ItemClient__dItemClient_x                                  0x140263D40

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F720
#define EQ_LoadingS__Array_x                                       0x140A37A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A0C90
#define PcBase__GetCombatAbility_x                                 0x1405A12E0
#define PcBase__GetCombatAbilityTimer_x                            0x1405A1380
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A1A90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A22F0
#define PcClient__AlertInventoryChanged_x                          0x1402849E0
#define PcClient__GetConLevel_x                                    0x140284EB0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140287760
#define PcClient__HasLoreItem_x                                    0x1402887F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402946E0
#define PcZoneClient__RemoveMyAffect_x                             0x140296D90

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D6820  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D6890  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D69A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D6900  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D950  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B1D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FE0E0
#define PlayerBase__CanSee1_x                                      0x1405FE1B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FE6E0
#define PlayerBase__HasProperty_x                                  0x1405FE900
#define PlayerBase__IsTargetable_x                                 0x1405FE9C0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A29A0
#define PlayerClient__GetPcClient_x                                0x1402A4F30
#define PlayerClient__PlayerClient_x                               0x14029BB90
#define PlayerClient__SetNameSpriteState_x                         0x1402A8360
#define PlayerClient__SetNameSpriteTint_x                          0x1402A9300
#define PlayerZoneClient__ChangeHeight_x                           0x1402B7030
#define PlayerZoneClient__DoAttack_x                               0x1402B7D10
#define PlayerZoneClient__GetLevel_x                               0x1402BB290
#define PlayerZoneClient__IsValidTeleport_x                        0x140210710
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015EA50

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B0CA0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B0CD0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B0D80
#define PlayerManagerClient__CreatePlayer_x                        0x1402B0690
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FDD60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140269250
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140268E50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268EC0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402691E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140269370
#define KeypressHandler__HandleKeyUp_x                             0x140269450
#define KeypressHandler__SaveKeymapping_x                          0x1402690F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B7C00  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B2660

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028DD80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140292D20
#define PcZoneClient__GetPcSkillLimit_x                            0x140294C40
#define PcZoneClient__RemovePetEffect_x                            0x140296E90
#define PcZoneClient__HasAlternateAbility_x                        0x1402956C0
#define PcZoneClient__CanEquipItem_x                               0x1402910F0
#define PcZoneClient__GetItemByID_x                                0x140293C90
#define PcZoneClient__RemoveBuffEffect_x                           0x140296C40
#define PcZoneClient__BandolierSwap_x                              0x1402902B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294B90

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402151D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403619B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140358840
#define CContainerMgr__CloseContainer_x                            0x140358200
#define CContainerMgr__OpenExperimentContainer_x                   0x140358BA0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140437AF0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C840

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CB190
#define CLootWnd__RequestLootSlot_x                                0x1403CC170

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A850
#define EQ_Spell__SpellAffects_x                                   0x14019BAF0
#define EQ_Spell__SpellAffectBase_x                                0x14019BA50
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAC10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AABC0
#define EQ_Spell__IsSPAStacking_x                                  0x14019B710
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B2D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019ABB0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093120

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140491980  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404919C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140490ED0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140490480

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140498A90  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147B70
#define CTaskManager__GetTaskStatus_x                              0x140147C80
#define CTaskManager__GetElementDescription_x                      0x140147800

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198BB0
#define EqSoundManager__PlayScriptMp3_x                            0x1401979B0
#define EqSoundManager__SoundAssistPlay_x                          0x1402DA5B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA8E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D6C0
#define CTextureAnimation__SetCurCell_x                            0x14054D9D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025AB00

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D1E50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D1ED0
#define CharacterBase__IsExpansionFlag_x                           0x1401BA1D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140338BB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403394F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A930

// messages
#define msg_spell_worn_off_x                                       0x1401CD8D0
#define msg_new_text_x                                             0x1401C9360
#define __msgTokenTextParam_x                                      0x1401C11A0
#define msgTokenText_x                                             0x1401C10C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DBF70
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DBE90

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060CFD0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C4C60

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035DB70
#define CCursorAttachment__AttachToCursor1_x                       0x14035C7C0
#define CCursorAttachment__Deactivate_x                            0x14035E070

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140560980
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140560B70
#define CEQSuiteTextureLoader__GetTexture_x                        0x140560B80

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401135F0
#define CFindItemWnd__Update_x                                     0x1401137F0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E820

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C200
#define LootFiltersManager__GetItemFilterData_x                    0x14011CD20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D5C0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D870

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041AFE0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406113A0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D3930

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140354E10

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D5CB0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D5DC0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403770B0
#define CGroupWnd__UpdateDisplay_x                                 0x140376E50

// ItemBase
#define ItemBase__IsLore_x                                         0x140591020
#define ItemBase__IsLoreEquipped_x                                 0x140591180

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B850

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020DAB0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020DA40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020DA80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE300

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF8E0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EFC90
#define FactionManagerClient__GetFactionStanding_x                 0x1400EF0B0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EF0B0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEF60

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAFA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177F90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177310
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177DB0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177D30  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E0660

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE300

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D6A90

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055FB00

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F18C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
