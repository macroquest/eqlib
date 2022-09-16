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

#define __ClientDate                                               20220912u
#define __ExpectedVersionDate                                     "Sep 12 2022"
#define __ExpectedVersionTime                                     "16:35:33"
#define __ActualVersionDate_x                                      0x140797BB8
#define __ActualVersionTime_x                                      0x140797BA8
#define __ActualVersionBuild_x                                     0x140785DC8

// Memory Protection
#define __MemChecker0_x                                            0x14026E690
#define __MemChecker1_x                                            0x140505A80
#define __MemChecker4_x                                            0x14023E4B0
#define __EncryptPad0_x                                            0x140A3F5E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7A9E0
#define instEQZoneInfo_x                                           0x140B7ABD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D9500
#define __gfMaxZoomCameraDistance_x                                0x14078DF00
#define __gfMaxCameraDistance_x                                    0x1407C8B64
#define __CurrentSocial_x                                          0x1408FB900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A36F70
#define g_eqCommandStates_x                                        0x140A37FD0
#define __CommandList_x                                            0x140A38210
#define __ScreenMode_x                                             0x140AC251C
#define __gWorld_x                                                 0x140B74F70
#define __gpbCommandEvent_x                                        0x140B75420
#define __ServerHost_x                                             0x140B75608
#define __Guilds_x                                                 0x140B79590
#define __MouseEventTime_x                                         0x140BE5E50
#define DI8__Mouse_Check_x                                         0x140BEAAB0
#define __heqmain_x                                                0x140BECF58
#define DI8__Mouse_x                                               0x140BECF70
#define __HWnd_x                                                   0x140BECF78
#define __Mouse_x                                                  0x140BE9FA8
#define DI8__Main_x                                                0x140BEA040
#define DI8__Keyboard_x                                            0x140BEA048
#define __LoginName_x                                              0x140BEA72C
#define __CurrentMapLabel_x                                        0x140BFFCC0
#define __LabelCache_x                                             0x140C008D0
#define __SubscriptionType_x                                       0x140C37EC0
#define Teleport_Table_Size_x                                      0x140B75428
#define Teleport_Table_x                                           0x140B72F70

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B75920
#define pinstActiveBanker_x                                        0x140B72E78
#define pinstActiveCorpse_x                                        0x140B72E68
#define pinstActiveGMaster_x                                       0x140B72E70
#define pinstActiveMerchant_x                                      0x140B72E60
#define pinstAltAdvManager_x                                       0x140AC3178
#define pinstCEverQuest_x                                          0x140BE9FA0
#define pinstCamActor_x                                            0x140AC2508
#define pinstCDBStr_x                                              0x140AC1F80
#define pinstCDisplay_x                                            0x140B72F68
#define pinstControlledPlayer_x                                    0x140B72F08
#define pinstCResolutionHandler_x                                  0x141270A60
#define pinstCSidlManager_x                                        0x140C11940
#define pinstCXWndManager_x                                        0x140C11930
#define instDynamicZone_x                                          0x140B79450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B7949E
#define instExpeditionName_x                                       0x140B794DE
#define pinstDZMember_x                                            0x140B79568
#define pinstDZTimerInfo_x                                         0x140B79570
#define pinstEqLogin_x                                             0x140BEA070
#define instTribute_x                                              0x140A32800
#define pinstEQSoundManager_x                                      0x140AC34B8
#define pinstEQSpellStrings_x                                      0x140AA6BB0
#define pinstSGraphicsEngine_x                                     0x1412707F8
#define pinstLocalPC_x                                             0x140B72F58
#define pinstLocalPlayer_x                                         0x140B72E58
#define pinstCMercenaryClientManager_x                             0x140BE76F0
#define pinstModelPlayer_x                                         0x140B72E88
#define pinstRenderInterface_x                                     0x141270810
#define pinstSkillMgr_x                                            0x140BE9380
#define pinstSpawnManager_x                                        0x140BE7AB0
#define pinstSpellManager_x                                        0x140BE94C8
#define pinstStringTable_x                                         0x140B72F60
#define pinstSwitchManager_x                                       0x140B72DD0
#define pinstTarget_x                                              0x140B72F00
#define pinstTaskMember_x                                          0x140A327F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B72F10
#define pinstTradeTarget_x                                         0x140B72E80
#define instTributeActive_x                                        0x140A32829
#define pinstViewActor_x                                           0x140AC2500
#define pinstWorldData_x                                           0x140B72F30
#define pinstPlayerPath_x                                          0x140BE7AD8
#define pinstTargetIndicator_x                                     0x140BE9578
#define EQObject_Top_x                                             0x140B72F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFCE28
#define pinstCContainerMgr_x                                       0x140AC1FF8
#define pinstCContextMenuManager_x                                 0x140C118E0
#define pinstCInvSlotMgr_x                                         0x140AC1FE0
#define pinstCItemDisplayManager_x                                 0x140BFF890
#define pinstCPopupWndManager_x                                    0x140C00120
#define pinstCSpellDisplayMgr_x                                    0x140C007B0
#define pinstCTaskManager_x                                        0x1408FBC40
#define pinstEQSuiteTextureLoader_x                                0x140A48C40
#define pinstItemIconCache_x                                       0x140BFD188
#define pinstLootFiltersManager_x                                  0x140AC1998

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F83A0
#define __CastRay2_x                                               0x1401F80B0
#define __ConvertItemTags_x                                        0x1401F87A0
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140153580
#define __DoesFileExist_x                                          0x14050A260
#define __EQGetTime_x                                              0x140506030
#define __ExecuteCmd_x                                             0x1401D1440
#define __FixHeading_x                                             0x140608EB0
#define __FlushDxKeyboard_x                                        0x1402E9CA0
#define __get_bearing_x                                            0x1402019D0
#define __get_melee_range_x                                        0x140201AC0
#define __GetAnimationCache_x                                      0x14035FB50
#define __GetGaugeValueFromEQ_x                                    0x14047F560
#define __GetLabelFromEQ_x                                         0x140480B10
#define __GetXTargetType_x                                         0x14060A1F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140608F30
#define __HelpPath_x                                               0x140BE5D18   // Why?
#define __NewUIINI_x                                               0x14048BC60   // Why?
#define __ProcessGameEvents_x                                      0x140233CF0
#define __ProcessKeyboardEvents_x                                  0x1402EB4A0
#define __ProcessMouseEvents_x                                     0x140235120
#define __SaveColors_x                                             0x140163220
#define __STMLToText_x                                             0x140533DE0
#define __WndProc_x                                                0x1402E8420
#define CMemoryMappedFile__SetFile_x                               0x140744A30
#define DrawNetStatus_x                                            0x14027C220
#define Util__FastTime_x                                           0x140506D30
#define __eq_delete_x                                              0x14060F030
#define __eq_new_x                                                 0x14060F12C
#define __CopyLayout_x                                             0x14026AB40
#define __ThrottleFrameRate_x                                      0x140223B01
#define __ThrottleFrameRateEnd_x                                   0x140223B61

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FA920
#define CAAWnd__Update_x                                           0x1402FAC20
#define CAAWnd__UpdateSelected_x                                   0x1402FBBE0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B940
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140074130
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140775400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C1B0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DF40
#define AltAdvManager__IsAbilityReady_x                            0x14016E1C0
#define AltAdvManager__GetAAById_x                                 0x14016D810
#define AltAdvManager__CanTrainAbility_x                           0x14016D640
#define AltAdvManager__CanSeeAbility_x                             0x14016D300

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A42F0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A50A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A52B0
#define CharacterZoneClient__CanUseItem_x                          0x1400B90D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5BA0
#define CharacterZoneClient__CastSpell_x                           0x1400A5C40
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B5240
#define CharacterZoneClient__Cur_HP_x                              0x1400BA700
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA8C0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8E60
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C0360
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CEDC0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA350
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8650
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1E80
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0DB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA520
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AE40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C6B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C14B0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BA3B0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C2090
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA5A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2B20
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA7B0
#define CharacterZoneClient__GetModCap_x                           0x1400CA4D0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA850
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AAA60
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F550
#define CharacterZoneClient__HasSkill_x                            0x1400C5D00
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AED80
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9F60
#define CharacterZoneClient__Max_Endurance_x                       0x140294B90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CA2A0
#define CharacterZoneClient__Max_Mana_x                            0x140294D80  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA760
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2270
#define CharacterZoneClient__SpellDuration_x                       0x1400B2E50
#define CharacterZoneClient__TotalEffect_x                         0x1400B4080
#define CharacterZoneClient__UseSkill_x                            0x1400CFD20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140318A50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140322B70

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031EB10
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031DBC0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325220

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D5250

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140345AE0
#define CChatWindowManager__InitContextMenu_x                      0x140345C70
#define CChatWindowManager__FreeChatWindow_x                       0x140344D30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034CA00
#define CChatWindowManager__CreateChatWindow_x                     0x140344670

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7B00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034D960
#define CChatWindow__Clear_x                                       0x14034E770
#define CChatWindow__WndNotification_x                             0x14034F8E0
#define CChatWindow__AddHistory_x                                  0x14034E270

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140544D30
#define CContextMenu__RemoveMenuItem_x                             0x140545230
#define CContextMenu__RemoveAllMenuItems_x                         0x140545200
#define CContextMenu__CheckMenuItem_x                              0x140545070
#define CContextMenu__SetMenuItem_x                                0x140545250
#define CContextMenu__AddSeparator_x                               0x140544E90

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405458A0
#define CContextMenuManager__RemoveMenu_x                          0x140545E20
#define CContextMenuManager__PopupMenu_x                           0x140545BA0
#define CContextMenuManager__Flush_x                               0x140545920
#define CContextMenuManager__CreateDefaultMenu_x                   0x140359BF0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14058D8E0
#define CChatService__GetFriendName_x                              0x1405D20F0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140540F00
#define CComboWnd__Draw_x                                          0x140540FF0
#define CComboWnd__GetCurChoice_x                                  0x1405412C0  // unused
#define CComboWnd__GetListRect_x                                   0x140541360
#define CComboWnd__InsertChoice_x                                  0x140541680
#define CComboWnd__SetColors_x                                     0x140541A10
#define CComboWnd__SetChoice_x                                     0x1405419D0
#define CComboWnd__GetItemCount_x                                  0x140541350
#define CComboWnd__GetCurChoiceText_x                              0x140541300  // unused
#define CComboWnd__GetChoiceText_x                                 0x140541290
#define CComboWnd__InsertChoiceAtIndex_x                           0x140541740

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140357C70
#define CContainerWnd__SetContainer_x                              0x140358A10
#define CContainerWnd__vftable_x                                   0x1407A5AD8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC2284
#define CDisplay__ZoneMainUI_x                                     0x14055C430
#define CDisplay__PreZoneMainUI_x                                  0x140160180
#define CDisplay__CleanGameUI_x                                    0x140152680
#define CDisplay__GetClickedActor_x                                0x140156810
#define CDisplay__GetUserDefinedColor_x                            0x1401572F0
#define CDisplay__InitCharSelectUI_x                               0x1401575A0
#define CDisplay__ReloadUI_x                                       0x1401624D0
#define CDisplay__WriteTextHD2_x                                   0x140169420
#define CDisplay__TrueDistance_x                                   0x140169100
#define CDisplay__SetViewActor_x                                   0x140165A10
#define CDisplay__GetFloorHeight_x                                 0x140156A70
#define CDisplay__ToggleScreenshotMode_x                           0x140168C00
#define CDisplay__RealRender_World_x                               0x140161870

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140567940
#define CEditWnd__DrawCaret_x                                      0x140548750  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140548BD0
#define CEditWnd__GetCaretPt_x                                     0x140548E40  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140548E80
#define CEditWnd__GetDisplayString_x                               0x1405490E0
#define CEditWnd__GetHorzOffset_x                                  0x140549310
#define CEditWnd__GetLineForPrintableChar_x                        0x140549450
#define CEditWnd__GetSelStartPt_x                                  0x140549730  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140549580
#define CEditWnd__PointFromPrintableChar_x                         0x14054A360
#define CEditWnd__ReplaceSelection_x                               0x14054A700
#define CEditWnd__SelectableCharFromPoint_x                        0x14054ABA0
#define CEditWnd__SetEditable_x                                    0x14054AE10
#define CEditWnd__SetWindowText_x                                  0x14054AE40

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140224EB0
#define CEverQuest__ClickedPlayer_x                                0x14021B0D0
#define CEverQuest__CreateTargetIndicator_x                        0x14021B830
#define CEverQuest__DoTellWindow_x                                 0x1400D7810 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D80D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402263B0
#define CEverQuest__dsp_chat_x                                     0x1400D7330 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024FBC0
#define CEverQuest__Emote_x                                        0x140226D10
#define CEverQuest__GetBodyTypeDesc_x                              0x140227A80
#define CEverQuest__GetClassDesc_x                                 0x140227AE0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140227EB0
#define CEverQuest__GetDeityDesc_x                                 0x140228260
#define CEverQuest__GetLangDesc_x                                  0x140228690
#define CEverQuest__GetRaceDesc_x                                  0x140228A30
#define CEverQuest__InterpretCmd_x                                 0x14022A2A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023EB30
#define CEverQuest__LMouseUp_x                                     0x14022BC40
#define CEverQuest__RightClickedOnPlayer_x                         0x14023C4D0
#define CEverQuest__RMouseUp_x                                     0x140235CA0
#define CEverQuest__SetGameState_x                                 0x140241020
#define CEverQuest__UPCNotificationFlush_x                         0x1402466D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022B8C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140236FD0
#define CEverQuest__ReportSuccessfulHit_x                          0x140237D10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140369E90

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094730
#define CGuild__GetGuildName_x                                     0x140094770

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140386730

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140260960
#define CHotButton__SetCheck_x                                     0x140260BF0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403963E0
#define CInvSlotMgr__MoveItem_x                                    0x140396530
#define CInvSlotMgr__SelectSlot_x                                  0x140397F20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140394030
#define CInvSlot__SliderComplete_x                                 0x140395260
#define CInvSlot__GetItemBase_x                                    0x140390110
#define CInvSlot__UpdateItem_x                                     0x1403956C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140398580
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403990D0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B89E0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BB300
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B5850
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B6F10
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B7E20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047C240
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047DE10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B5770

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B2000

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117A30

// CLabel
#define CLabel__UpdateText_x                                       0x1403C26D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140517EB0
#define CListWnd__dCListWnd_x                                      0x1405182F0
#define CListWnd__vftable_x                                        0x1407D4650
#define CListWnd__AddColumn_x                                      0x140518990
#define CListWnd__AddColumn1_x                                     0x140518A30
#define CListWnd__AddLine_x                                        0x140518B90
#define CListWnd__AddString_x                                      0x140519110
#define CListWnd__CalculateFirstVisibleLine_x                      0x140519800
#define CListWnd__CalculateVSBRange_x                              0x140519AE0
#define CListWnd__ClearSel_x                                       0x140519C80
#define CListWnd__ClearAllSel_x                                    0x140519C20
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140519CE0
#define CListWnd__Compare_x                                        0x140519E90
#define CListWnd__Draw_x                                           0x14051A360
#define CListWnd__DrawColumnSeparators_x                           0x14051AF00
#define CListWnd__DrawHeader_x                                     0x14051AFC0
#define CListWnd__DrawItem_x                                       0x14051B680
#define CListWnd__DrawLine_x                                       0x14051BFF0
#define CListWnd__DrawSeparator_x                                  0x14051C4B0
#define CListWnd__EnableLine_x                                     0x14051C8D0
#define CListWnd__EnsureVisible_x                                  0x14051C930
#define CListWnd__ExtendSel_x                                      0x14051CA20
#define CListWnd__GetColumnMinWidth_x                              0x14051CD50
#define CListWnd__GetColumnWidth_x                                 0x14051CDD0
#define CListWnd__GetCurSel_x                                      0x14051CED0
#define CListWnd__GetItemData_x                                    0x14051D250
#define CListWnd__GetItemHeight_x                                  0x14051D290
#define CListWnd__GetItemRect_x                                    0x14051D450
#define CListWnd__GetItemText_x                                    0x14051D6F0
#define CListWnd__GetSelList_x                                     0x14051D940
#define CListWnd__GetSeparatorRect_x                               0x14051DB30
#define CListWnd__InsertLine_x                                     0x14051EF80
#define CListWnd__RemoveLine_x                                     0x14051F5A0
#define CListWnd__SetColors_x                                      0x14051F970
#define CListWnd__SetColumnJustification_x                         0x14051F990
#define CListWnd__SetColumnLabel_x                                 0x14051FA10
#define CListWnd__SetColumnWidth_x                                 0x14051FBB0
#define CListWnd__SetCurSel_x                                      0x14051FC80
#define CListWnd__SetItemColor_x                                   0x14051FEF0
#define CListWnd__SetItemData_x                                    0x14051FF90
#define CListWnd__SetItemText_x                                    0x1405201D0
#define CListWnd__Sort_x                                           0x1405205E0
#define CListWnd__ToggleSel_x                                      0x140520750
#define CListWnd__SetColumnsSizable_x                              0x14051FC00
#define CListWnd__SetItemWnd_x                                     0x140520300
#define CListWnd__GetItemWnd_x                                     0x14051D8D0
#define CListWnd__SetItemIcon_x                                    0x14051FFD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405195D0
#define CListWnd__SetVScrollPos_x                                  0x140520540

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D5150

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B1170
#define MapViewMap__Clear_x                                        0x1403D6CD0
#define MapViewMap__SetZoom_x                                      0x1403DD290
#define MapViewMap__HandleLButtonDown_x                            0x1403D9DD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FE780  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140404330
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140406350
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140408170
#define CMerchantWnd__SelectBuySellSlot_x                          0x140407590
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040BF20

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405AED80
#define CPacketScrambler__hton_x                                   0x1405AED70

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14053E5E0
#define CSidlManagerBase__FindAnimation1_x                         0x14053E520
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14053EC10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14053E9C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053D920
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053D8B0
#define CSidlManagerBase__CreateXWnd_x                             0x14053CEF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046EA40
#define CSidlManager__CreateXWnd_x                                 0x14046EC00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140535850
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140535980
#define CSidlScreenWnd__ConvertToRes_x                             0x140561EF0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140535AA0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405350F0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140535040
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140535310
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140536070
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405362A0
#define CSidlScreenWnd__GetChildItem_x                             0x140536440
#define CSidlScreenWnd__GetSidlPiece_x                             0x140536660
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140528070 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405369D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140536D40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405375F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140537EA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C11788
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405384C0
#define CSidlScreenWnd__StoreIniVis_x                              0x140538CB0
#define CSidlScreenWnd__vftable_x                                  0x1407D56B0
#define CSidlScreenWnd__WndNotification_x                          0x140538D00

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D2BE0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D2FE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D2F20
#define CSkillMgr__IsActivatedSkill_x                              0x1402D3380
#define CSkillMgr__IsCombatSkill_x                                 0x1402D33C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14048BCA0
#define CSliderWnd__SetValue_x                                     0x1405473E0
#define CSliderWnd__SetNumTicks_x                                  0x140547260

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140475EF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14054F8F0
#define CStmlWnd__CalculateHSBRange_x                              0x140527A40
#define CStmlWnd__CalculateVSBRange_x                              0x140550810
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140551270
#define CStmlWnd__ForceParseNow_x                                  0x140551310
#define CStmlWnd__GetVisibleText_x                                 0x1405519E0
#define CStmlWnd__MakeStmlColorTag_x                               0x140553750
#define CStmlWnd__MakeWndNotificationTag_x                         0x140553790
#define CStmlWnd__SetSTMLText_x                                    0x14055A760
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055A910
#define CStmlWnd__UpdateHistoryString_x                            0x14055ACA0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054C3E0
#define CTabWnd__DrawCurrentPage_x                                 0x14054C480
#define CTabWnd__DrawTab_x                                         0x14054C850
#define CTabWnd__GetTabRect_x                                      0x14054CEB0
#define CTabWnd__InsertPage_x                                      0x14054D180
#define CTabWnd__RemovePage_x                                      0x14054D410
#define CTabWnd__SetPage_x                                         0x14054D570
#define CTabWnd__UpdatePage_x                                      0x14054D870

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054BFE0
#define CPageWnd__SetTabText_x                                     0x14054C050

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC80  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E090


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140521890
#define CTextureFont__DrawWrappedText1_x                           0x1405217A0
#define CTextureFont__DrawWrappedText2_x                           0x1405219C0
#define CTextureFont__GetTextExtent_x                              0x140521D70
#define CTextureFont__GetHeight_x                                  0x140521D30

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140560650

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140514B20

// CXStr
#define CXStr__gFreeLists_x                                        0x140A485C0
#define CXStr__gCXStrAccess_x                                      0x140C10D48

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405232C0
#define CXWnd__ClrFocus_x                                          0x140523500
#define CXWnd__Destroy_x                                           0x140523640
#define CXWnd__DoAllDrawing_x                                      0x140523750
#define CXWnd__DrawColoredRect_x                                   0x140523F10
#define CXWnd__DrawTooltip_x                                       0x140525590
#define CXWnd__DrawTooltipAtPoint_x                                0x140525640
#define CXWnd__GetChildItem_x                                      0x140525F30
#define CXWnd__GetChildWndAt_x                                     0x140525FE0
#define CXWnd__GetClientClipRect_x                                 0x140526140
#define CXWnd__GetRelativeRect_x                                   0x140527B80
#define CXWnd__GetScreenClipRect_x                                 0x140527C80
#define CXWnd__GetScreenRect_x                                     0x140527DF0
#define CXWnd__GetTooltipRect_x                                    0x140527F70
#define CXWnd__IsActive_x                                          0x1405284F0
#define CXWnd__IsDescendantOf_x                                    0x140528520
#define CXWnd__IsReallyVisible_x                                   0x140528590
#define CXWnd__IsType_x                                            0x1405285D0
#define CXWnd__Minimize_x                                          0x1405286D0
#define CXWnd__ProcessTransition_x                                 0x140529710
#define CXWnd__Refade_x                                            0x140529810
#define CXWnd__Resize_x                                            0x140529820
#define CXWnd__Right_x                                             0x1405298C0
#define CXWnd__SetFocus_x                                          0x140529C70
#define CXWnd__SetFont_x                                           0x140529CC0
#define CXWnd__SetKeyTooltip_x                                     0x140529DC0
#define CXWnd__SetMouseOver_x                                      0x140529F00
#define CXWnd__SetParent_x                                         0x140529F80
#define CXWnd__StartFade_x                                         0x14052A3C0
#define CXWnd__vftable_x                                           0x1407D4DC8
#define CXWnd__CXWnd_x                                             0x140521E90
#define CXWnd__dCXWnd_x                                            0x1405227B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405670C0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052BBE0
#define CXWndManager__DrawWindows_x                                0x14052BD10
#define CXWndManager__GetKeyboardFlags_x                           0x14052C3D0
#define CXWndManager__HandleKeyboardMsg_x                          0x14052C410
#define CXWndManager__RemoveWnd_x                                  0x14052F870

// CDBStr
#define CDBStr__GetString_x                                        0x140150880

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B80D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A20D0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0E00
#define CCharacterListWnd__Quit_x                                  0x1400A20B0
#define CCharacterListWnd__UpdateList_x                            0x1400A2DD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405883F0
#define ItemBase__CreateItemTagString_x                            0x140588DD0
#define ItemBase__GetImageNum_x                                    0x14058AF90
#define ItemBase__GetItemValue_x                                   0x14058CB50
#define ItemBase__IsEmpty_x                                        0x14058E630
#define ItemBase__IsKeyRingItem_x                                  0x14058ED30
#define ItemBase__ValueSellMerchant_x                              0x140593110
#define ItemClient__CanDrop_x                                      0x140262D30
#define ItemClient__CanGoInBag_x                                   0x140262E60
#define ItemClient__CreateItemClient_x                             0x140263120
#define ItemClient__dItemClient_x                                  0x140262B90

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F6E0
#define EQ_LoadingS__Array_x                                       0x140A34A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14059EA50
#define PcBase__GetCombatAbility_x                                 0x14059F0A0
#define PcBase__GetCombatAbilityTimer_x                            0x14059F140
#define PcBase__GetItemContainedRealEstateIds_x                    0x14059F850
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A00B0
#define PcClient__AlertInventoryChanged_x                          0x140283800
#define PcClient__GetConLevel_x                                    0x140283CD0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140286590
#define PcClient__HasLoreItem_x                                    0x140287620
#define PcZoneClient__GetItemRecastTimer_x                         0x140293530
#define PcZoneClient__RemoveMyAffect_x                             0x140295BE0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D5AC0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D5B30  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D5C40  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D5BA0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020CBE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B1A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FBE90
#define PlayerBase__CanSee1_x                                      0x1405FBF60
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FC490
#define PlayerBase__HasProperty_x                                  0x1405FC6B0
#define PlayerBase__IsTargetable_x                                 0x1405FC770
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A17E0
#define PlayerClient__GetPcClient_x                                0x1402A3D70
#define PlayerClient__PlayerClient_x                               0x14029A9E0
#define PlayerClient__SetNameSpriteState_x                         0x1402A71A0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A8140
#define PlayerZoneClient__ChangeHeight_x                           0x1402B5E60
#define PlayerZoneClient__DoAttack_x                               0x1402B6B40
#define PlayerZoneClient__GetLevel_x                               0x1402BA0C0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020F990
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015EA20

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AFAD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AFB00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AFBB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402AF4C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FBB10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140268080
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140267C80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140267CF0
#define KeypressHandler__ClearCommandStateArray_x                  0x140268010  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402681A0
#define KeypressHandler__HandleKeyUp_x                             0x140268280
#define KeypressHandler__SaveKeymapping_x                          0x140267F20  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B59C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B0420

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028CBC0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140291B70
#define PcZoneClient__GetPcSkillLimit_x                            0x140293A90
#define PcZoneClient__RemovePetEffect_x                            0x140295CE0
#define PcZoneClient__HasAlternateAbility_x                        0x140294510
#define PcZoneClient__CanEquipItem_x                               0x14028FF40
#define PcZoneClient__GetItemByID_x                                0x140292AE0
#define PcZoneClient__RemoveBuffEffect_x                           0x140295A90
#define PcZoneClient__BandolierSwap_x                              0x14028F100
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402939E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140214450

// IconCache
#define IconCache__GetIcon_x                                       0x14035FB80

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140356A50
#define CContainerMgr__CloseContainer_x                            0x140356410
#define CContainerMgr__OpenExperimentContainer_x                   0x140356DB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140435C70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025B6A0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C9340
#define CLootWnd__RequestLootSlot_x                                0x1403CA320

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A840
#define EQ_Spell__SpellAffects_x                                   0x14019BAE0
#define EQ_Spell__SpellAffectBase_x                                0x14019BA40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAC40
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AABF0
#define EQ_Spell__IsSPAStacking_x                                  0x14019B700
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B2C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019ABA0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093160

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048FA30  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048FA70
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048EF80
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048E530

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140496B40  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147B40
#define CTaskManager__GetTaskStatus_x                              0x140147C50
#define CTaskManager__GetElementDescription_x                      0x1401477D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198BA0
#define EqSoundManager__PlayScriptMp3_x                            0x1401979A0
#define EqSoundManager__SoundAssistPlay_x                          0x1402D93E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D9710  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054B640
#define CTextureAnimation__SetCurCell_x                            0x14054B950

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140259960

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405CFC10
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405CFC90
#define CharacterBase__IsExpansionFlag_x                           0x1401B95F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140337BD0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140338510
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140339950

// messages
#define msg_spell_worn_off_x                                       0x1401CCB70
#define msg_new_text_x                                             0x1401C8600
#define __msgTokenTextParam_x                                      0x1401C0430
#define msgTokenText_x                                             0x1401C0350

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DADA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DACC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060A5D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C2E10

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035BD60
#define CCursorAttachment__AttachToCursor1_x                       0x14035A9C0
#define CCursorAttachment__Deactivate_x                            0x14035C260

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14055E8A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14055EA90
#define CEQSuiteTextureLoader__GetTexture_x                        0x14055EAA0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401135D0
#define CFindItemWnd__Update_x                                     0x1401137D0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E800

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C1D0
#define LootFiltersManager__GetItemFilterData_x                    0x14011CCF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D590
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D840

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140419190

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14060E9A0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D2740

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140353030

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D3A60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D3B70  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403752A0
#define CGroupWnd__UpdateDisplay_x                                 0x140375040

// ItemBase
#define ItemBase__IsLore_x                                         0x14058EE00
#define ItemBase__IsLoreEquipped_x                                 0x14058EF60

#define MultipleItemMoveManager__ProcessMove_x                     0x14027A670

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020CD40
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020CCD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020CD10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CD150

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF8F0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EFCA0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EF0C0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EF0C0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEF70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DCA0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAFA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177F40
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401772C0
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177D60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177CE0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DF490

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CD150

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D5D30

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055DA20

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F09D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
