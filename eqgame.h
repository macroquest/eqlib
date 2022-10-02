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

#define __ClientDate                                               20220927u
#define __ExpectedVersionDate                                     "Sep 27 2022"
#define __ExpectedVersionTime                                     "14:54:35"
#define __ActualVersionDate_x                                      0x140799BC8
#define __ActualVersionTime_x                                      0x140799BB8
#define __ActualVersionBuild_x                                     0x140787DD8

// Memory Protection
#define __MemChecker0_x                                            0x14026F550
#define __MemChecker1_x                                            0x140507810
#define __MemChecker4_x                                            0x14023F3A0
#define __EncryptPad0_x                                            0x140A415E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7C9E0
#define instEQZoneInfo_x                                           0x140B7CBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DA010
#define __gfMaxZoomCameraDistance_x                                0x14078FF10
#define __gfMaxCameraDistance_x                                    0x1407CAB74
#define __CurrentSocial_x                                          0x1408FD900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A38F70
#define g_eqCommandStates_x                                        0x140A39FD0
#define __CommandList_x                                            0x140A3A210
#define __ScreenMode_x                                             0x140AC453C
#define __gWorld_x                                                 0x140B76F70
#define __gpbCommandEvent_x                                        0x140B77420
#define __ServerHost_x                                             0x140B77608
#define __Guilds_x                                                 0x140B7B590
#define __MouseEventTime_x                                         0x140BE7E50
#define DI8__Mouse_Check_x                                         0x140BECAB0
#define __heqmain_x                                                0x140BEEF58
#define DI8__Mouse_x                                               0x140BEEF70
#define __HWnd_x                                                   0x140BEEF78
#define __Mouse_x                                                  0x140BEBFA8
#define DI8__Main_x                                                0x140BEC040
#define DI8__Keyboard_x                                            0x140BEC048
#define __LoginName_x                                              0x140BEC72C
#define __CurrentMapLabel_x                                        0x140C01CC0
#define __LabelCache_x                                             0x140C028D0
#define __SubscriptionType_x                                       0x140C39EC0
#define Teleport_Table_Size_x                                      0x140B77428
#define Teleport_Table_x                                           0x140B74F70

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B77920
#define pinstActiveBanker_x                                        0x140B74E78
#define pinstActiveCorpse_x                                        0x140B74E68
#define pinstActiveGMaster_x                                       0x140B74E70
#define pinstActiveMerchant_x                                      0x140B74E60
#define pinstAltAdvManager_x                                       0x140AC5178
#define pinstCEverQuest_x                                          0x140BEBFA0
#define pinstCamActor_x                                            0x140AC4528
#define pinstCDBStr_x                                              0x140AC3F80
#define pinstCDisplay_x                                            0x140B74F68
#define pinstControlledPlayer_x                                    0x140B74F08
#define pinstCResolutionHandler_x                                  0x141272A60
#define pinstCSidlManager_x                                        0x140C13940
#define pinstCXWndManager_x                                        0x140C13930
#define instDynamicZone_x                                          0x140B7B450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B7B49E
#define instExpeditionName_x                                       0x140B7B4DE
#define pinstDZMember_x                                            0x140B7B568
#define pinstDZTimerInfo_x                                         0x140B7B570
#define pinstEqLogin_x                                             0x140BEC070
#define instTribute_x                                              0x140A34800
#define pinstEQSoundManager_x                                      0x140AC54B8
#define pinstEQSpellStrings_x                                      0x140AA8BB0
#define pinstSGraphicsEngine_x                                     0x1412727F8
#define pinstLocalPC_x                                             0x140B74F58
#define pinstLocalPlayer_x                                         0x140B74E58
#define pinstCMercenaryClientManager_x                             0x140BE96F0
#define pinstModelPlayer_x                                         0x140B74E88
#define pinstRenderInterface_x                                     0x141272810
#define pinstSkillMgr_x                                            0x140BEB380
#define pinstSpawnManager_x                                        0x140BE9AB0
#define pinstSpellManager_x                                        0x140BEB4C8
#define pinstStringTable_x                                         0x140B74F60
#define pinstSwitchManager_x                                       0x140B74DD0
#define pinstTarget_x                                              0x140B74F00
#define pinstTaskMember_x                                          0x140A347F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B74F10
#define pinstTradeTarget_x                                         0x140B74E80
#define instTributeActive_x                                        0x140A34829
#define pinstViewActor_x                                           0x140AC4520
#define pinstWorldData_x                                           0x140B74F30
#define pinstPlayerPath_x                                          0x140BE9AD8
#define pinstTargetIndicator_x                                     0x140BEB578
#define EQObject_Top_x                                             0x140B74F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFEE28
#define pinstCContainerMgr_x                                       0x140AC4018
#define pinstCContextMenuManager_x                                 0x140C138E0
#define pinstCInvSlotMgr_x                                         0x140AC4000
#define pinstCItemDisplayManager_x                                 0x140C01890
#define pinstCPopupWndManager_x                                    0x140C02120
#define pinstCSpellDisplayMgr_x                                    0x140C027B0
#define pinstCTaskManager_x                                        0x1408FDC40
#define pinstEQSuiteTextureLoader_x                                0x140A4AC40
#define pinstItemIconCache_x                                       0x140BFF188
#define pinstLootFiltersManager_x                                  0x140AC3998

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F8EB0
#define __CastRay2_x                                               0x1401F8BC0
#define __ConvertItemTags_x                                        0x1401F92B0
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140153540
#define __DoesFileExist_x                                          0x14050BFF0
#define __EQGetTime_x                                              0x140507DC0
#define __ExecuteCmd_x                                             0x1401D1F50
#define __FixHeading_x                                             0x14060ACD0
#define __FlushDxKeyboard_x                                        0x1402EAA00
#define __get_bearing_x                                            0x1402024E0
#define __get_melee_range_x                                        0x1402025D0
#define __GetAnimationCache_x                                      0x140361770
#define __GetGaugeValueFromEQ_x                                    0x140481250
#define __GetLabelFromEQ_x                                         0x140482800
#define __GetXTargetType_x                                         0x14060C010   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060AD50
#define __HelpPath_x                                               0x140BE7D18   // Why?
#define __NewUIINI_x                                               0x14048D9B0   // Why?
#define __ProcessGameEvents_x                                      0x140234BE0
#define __ProcessKeyboardEvents_x                                  0x1402EC200
#define __ProcessMouseEvents_x                                     0x140236010
#define __SaveColors_x                                             0x1401631E0
#define __STMLToText_x                                             0x140535980
#define __WndProc_x                                                0x1402E9180
#define CMemoryMappedFile__SetFile_x                               0x140746850
#define DrawNetStatus_x                                            0x14027D0B0
#define Util__FastTime_x                                           0x140508AC0
#define __eq_delete_x                                              0x140610E50
#define __eq_new_x                                                 0x140610F4C
#define __CopyLayout_x                                             0x14026BA10
#define __ThrottleFrameRate_x                                      0x140224A01
#define __ThrottleFrameRateEnd_x                                   0x140224A61

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB6B0
#define CAAWnd__Update_x                                           0x1402FB9B0
#define CAAWnd__UpdateSelected_x                                   0x1402FC970

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140777400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C150

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DF00
#define AltAdvManager__IsAbilityReady_x                            0x14016E180
#define AltAdvManager__GetAAById_x                                 0x14016D7D0
#define AltAdvManager__CanTrainAbility_x                           0x14016D600
#define AltAdvManager__CanSeeAbility_x                             0x14016D2C0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A4290
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5040
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5250
#define CharacterZoneClient__CanUseItem_x                          0x1400B9070
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5B40
#define CharacterZoneClient__CastSpell_x                           0x1400A5BE0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B51E0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA6A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA860
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8E00
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C02F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CED50  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA2F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B85F0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1E10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0D40
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA4C0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009ADE0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C650
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1440
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BA350
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C2020
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA540
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2AB0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA750
#define CharacterZoneClient__GetModCap_x                           0x1400CA460
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA7F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AAA00
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F4F0
#define CharacterZoneClient__HasSkill_x                            0x1400C5C90
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AED20
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9EF0
#define CharacterZoneClient__Max_Endurance_x                       0x1402959D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CA230
#define CharacterZoneClient__Max_Mana_x                            0x140295BC0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA6F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2210
#define CharacterZoneClient__SpellDuration_x                       0x1400B2DF0
#define CharacterZoneClient__TotalEffect_x                         0x1400B4020
#define CharacterZoneClient__UseSkill_x                            0x1400CFCB0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140319810

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140323930

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031F8D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031E970

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325FE0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D7260

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403468E0
#define CChatWindowManager__InitContextMenu_x                      0x140346A70
#define CChatWindowManager__FreeChatWindow_x                       0x140345B30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D800
#define CChatWindowManager__CreateChatWindow_x                     0x140345470

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7AB0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E770
#define CChatWindow__Clear_x                                       0x14034F580
#define CChatWindow__WndNotification_x                             0x140350700
#define CChatWindow__AddHistory_x                                  0x14034F080

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140546920
#define CContextMenu__RemoveMenuItem_x                             0x140546E30
#define CContextMenu__RemoveAllMenuItems_x                         0x140546E00
#define CContextMenu__CheckMenuItem_x                              0x140546C70
#define CContextMenu__SetMenuItem_x                                0x140546E50
#define CContextMenu__AddSeparator_x                               0x140546A80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405474A0
#define CContextMenuManager__RemoveMenu_x                          0x140547A10
#define CContextMenuManager__PopupMenu_x                           0x140547790
#define CContextMenuManager__Flush_x                               0x140547520
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B7F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D3E90
#define CChatService__GetFriendName_x                              0x1405D3EA0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542AB0
#define CComboWnd__Draw_x                                          0x140542BB0
#define CComboWnd__GetCurChoice_x                                  0x140542E90  // unused
#define CComboWnd__GetListRect_x                                   0x140542F30
#define CComboWnd__InsertChoice_x                                  0x140543270
#define CComboWnd__SetColors_x                                     0x140543600
#define CComboWnd__SetChoice_x                                     0x1405435C0
#define CComboWnd__GetItemCount_x                                  0x140542F20
#define CComboWnd__GetCurChoiceText_x                              0x140542ED0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140542E60
#define CComboWnd__InsertChoiceAtIndex_x                           0x140543330

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140359870
#define CContainerWnd__SetContainer_x                              0x14035A610
#define CContainerWnd__vftable_x                                   0x1407A7AE8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC42A4
#define CDisplay__ZoneMainUI_x                                     0x14055E0C0
#define CDisplay__PreZoneMainUI_x                                  0x140160140
#define CDisplay__CleanGameUI_x                                    0x140152640
#define CDisplay__GetClickedActor_x                                0x1401567D0
#define CDisplay__GetUserDefinedColor_x                            0x1401572B0
#define CDisplay__InitCharSelectUI_x                               0x140157560
#define CDisplay__ReloadUI_x                                       0x140162490
#define CDisplay__WriteTextHD2_x                                   0x1401693E0
#define CDisplay__TrueDistance_x                                   0x1401690C0
#define CDisplay__SetViewActor_x                                   0x1401659D0
#define CDisplay__GetFloorHeight_x                                 0x140156A30
#define CDisplay__ToggleScreenshotMode_x                           0x140168BC0
#define CDisplay__RealRender_World_x                               0x140161830

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405695D0
#define CEditWnd__DrawCaret_x                                      0x14054A350  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054A810
#define CEditWnd__GetCaretPt_x                                     0x14054AA90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054AAD0
#define CEditWnd__GetDisplayString_x                               0x14054AD40
#define CEditWnd__GetHorzOffset_x                                  0x14054AF80
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B0D0
#define CEditWnd__GetSelStartPt_x                                  0x14054B3B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B200
#define CEditWnd__PointFromPrintableChar_x                         0x14054BF60
#define CEditWnd__ReplaceSelection_x                               0x14054C310
#define CEditWnd__SelectableCharFromPoint_x                        0x14054C7B0
#define CEditWnd__SetEditable_x                                    0x14054CA40
#define CEditWnd__SetWindowText_x                                  0x14054CA70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140225DB0
#define CEverQuest__ClickedPlayer_x                                0x14021BBF0
#define CEverQuest__CreateTargetIndicator_x                        0x14021C350
#define CEverQuest__DoTellWindow_x                                 0x1400D77C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D8080 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402272B0
#define CEverQuest__dsp_chat_x                                     0x1400D72E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140250AB0
#define CEverQuest__Emote_x                                        0x140227C10
#define CEverQuest__GetBodyTypeDesc_x                              0x140228980
#define CEverQuest__GetClassDesc_x                                 0x1402289E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140228DB0
#define CEverQuest__GetDeityDesc_x                                 0x140229160
#define CEverQuest__GetLangDesc_x                                  0x140229590
#define CEverQuest__GetRaceDesc_x                                  0x140229930
#define CEverQuest__InterpretCmd_x                                 0x14022B1A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023FA20
#define CEverQuest__LMouseUp_x                                     0x14022CB40
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D3C0
#define CEverQuest__RMouseUp_x                                     0x140236B90
#define CEverQuest__SetGameState_x                                 0x140241F10
#define CEverQuest__UPCNotificationFlush_x                         0x1402475C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022C7C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140237EC0
#define CEverQuest__ReportSuccessfulHit_x                          0x140238C00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036BAC0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946C0
#define CGuild__GetGuildName_x                                     0x140094700

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140388400

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140261850
#define CHotButton__SetCheck_x                                     0x140261AE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140398050
#define CInvSlotMgr__MoveItem_x                                    0x1403981A0
#define CInvSlotMgr__SelectSlot_x                                  0x140399B80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395CC0
#define CInvSlot__SliderComplete_x                                 0x140396EF0
#define CInvSlot__GetItemBase_x                                    0x140391DA0
#define CInvSlot__UpdateItem_x                                     0x140397340

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14039A1E0
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039AD30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA7A0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BD0D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B7610
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B8CD0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B9BE0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047DF40
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047FB10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B7500

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B3DC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401179C0

// CLabel
#define CLabel__UpdateText_x                                       0x1403C44A0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519C40
#define CListWnd__dCListWnd_x                                      0x14051A080
#define CListWnd__vftable_x                                        0x1407D6660
#define CListWnd__AddColumn_x                                      0x14051A720
#define CListWnd__AddColumn1_x                                     0x14051A7C0
#define CListWnd__AddLine_x                                        0x14051A920
#define CListWnd__AddString_x                                      0x14051AEA0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B590
#define CListWnd__CalculateVSBRange_x                              0x14051B870
#define CListWnd__ClearSel_x                                       0x14051BA20
#define CListWnd__ClearAllSel_x                                    0x14051B9C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051BA80
#define CListWnd__Compare_x                                        0x14051BC40
#define CListWnd__Draw_x                                           0x14051C110
#define CListWnd__DrawColumnSeparators_x                           0x14051CCB0
#define CListWnd__DrawHeader_x                                     0x14051CD70
#define CListWnd__DrawItem_x                                       0x14051D430
#define CListWnd__DrawLine_x                                       0x14051DDB0
#define CListWnd__DrawSeparator_x                                  0x14051E270
#define CListWnd__EnableLine_x                                     0x14051E690
#define CListWnd__EnsureVisible_x                                  0x14051E6F0
#define CListWnd__ExtendSel_x                                      0x14051E7F0
#define CListWnd__GetColumnMinWidth_x                              0x14051EB20
#define CListWnd__GetColumnWidth_x                                 0x14051EBA0
#define CListWnd__GetCurSel_x                                      0x14051ECA0
#define CListWnd__GetItemData_x                                    0x14051F020
#define CListWnd__GetItemHeight_x                                  0x14051F060
#define CListWnd__GetItemRect_x                                    0x14051F220
#define CListWnd__GetItemText_x                                    0x14051F4C0
#define CListWnd__GetSelList_x                                     0x14051F710
#define CListWnd__GetSeparatorRect_x                               0x14051F900
#define CListWnd__InsertLine_x                                     0x140520D80
#define CListWnd__RemoveLine_x                                     0x1405213A0
#define CListWnd__SetColors_x                                      0x140521770
#define CListWnd__SetColumnJustification_x                         0x140521790
#define CListWnd__SetColumnLabel_x                                 0x140521810
#define CListWnd__SetColumnWidth_x                                 0x1405219B0
#define CListWnd__SetCurSel_x                                      0x140521A80
#define CListWnd__SetItemColor_x                                   0x140521CF0
#define CListWnd__SetItemData_x                                    0x140521D90
#define CListWnd__SetItemText_x                                    0x140521FD0
#define CListWnd__Sort_x                                           0x1405223E0
#define CListWnd__ToggleSel_x                                      0x140522550
#define CListWnd__SetColumnsSizable_x                              0x140521A00
#define CListWnd__SetItemWnd_x                                     0x140522100
#define CListWnd__GetItemWnd_x                                     0x14051F6A0
#define CListWnd__SetItemIcon_x                                    0x140521DD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B360
#define CListWnd__SetVScrollPos_x                                  0x140522340

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6F30

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B3180
#define MapViewMap__Clear_x                                        0x1403D8AB0
#define MapViewMap__SetZoom_x                                      0x1403DF070
#define MapViewMap__HandleLButtonDown_x                            0x1403DBBB0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140400560  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140406110
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140408130
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140409F40
#define CMerchantWnd__SelectBuySellSlot_x                          0x140409360
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040DCC0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0AC0
#define CPacketScrambler__hton_x                                   0x1405B0AB0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140540190
#define CSidlManagerBase__FindAnimation1_x                         0x1405400D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405407C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140540570
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F4D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F460
#define CSidlManagerBase__CreateXWnd_x                             0x14053EAA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140470730
#define CSidlManager__CreateXWnd_x                                 0x1404708F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405373F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140537520
#define CSidlScreenWnd__ConvertToRes_x                             0x140563B80 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140537650
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140536C90
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536BE0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140536EB0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140537C20
#define CSidlScreenWnd__EnableIniStorage_x                         0x140537E50
#define CSidlScreenWnd__GetChildItem_x                             0x140537FF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538210
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140529D90 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140538580
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405388F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140539190
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539A40
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C13788
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A070
#define CSidlScreenWnd__StoreIniVis_x                              0x14053A860
#define CSidlScreenWnd__vftable_x                                  0x1407D76C0
#define CSidlScreenWnd__WndNotification_x                          0x14053A8B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D3940 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D3D40 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D3C80
#define CSkillMgr__IsActivatedSkill_x                              0x1402D40E0
#define CSkillMgr__IsCombatSkill_x                                 0x1402D4120

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14048DA20
#define CSliderWnd__SetValue_x                                     0x140548FD0
#define CSliderWnd__SetNumTicks_x                                  0x140548E50

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140477BF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140551520
#define CStmlWnd__CalculateHSBRange_x                              0x1405297B0
#define CStmlWnd__CalculateVSBRange_x                              0x140552450
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140552ED0
#define CStmlWnd__ForceParseNow_x                                  0x140552F70
#define CStmlWnd__GetVisibleText_x                                 0x140553650
#define CStmlWnd__MakeStmlColorTag_x                               0x1405553E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x140555420
#define CStmlWnd__SetSTMLText_x                                    0x14055C400
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055C5B0
#define CStmlWnd__UpdateHistoryString_x                            0x14055C940

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E010
#define CTabWnd__DrawCurrentPage_x                                 0x14054E0B0
#define CTabWnd__DrawTab_x                                         0x14054E480
#define CTabWnd__GetTabRect_x                                      0x14054EAE0
#define CTabWnd__InsertPage_x                                      0x14054EDB0
#define CTabWnd__RemovePage_x                                      0x14054F040
#define CTabWnd__SetPage_x                                         0x14054F1A0
#define CTabWnd__UpdatePage_x                                      0x14054F4A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054DC10
#define CPageWnd__SetTabText_x                                     0x14054DC80

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E020


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405236A0
#define CTextureFont__DrawWrappedText1_x                           0x1405235B0
#define CTextureFont__DrawWrappedText2_x                           0x1405237D0
#define CTextureFont__GetTextExtent_x                              0x140523B80
#define CTextureFont__GetHeight_x                                  0x140523B40

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405622E0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405168B0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4A5C0
#define CXStr__gCXStrAccess_x                                      0x140C12D48

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405250B0
#define CXWnd__ClrFocus_x                                          0x1405252F0
#define CXWnd__Destroy_x                                           0x140525430
#define CXWnd__DoAllDrawing_x                                      0x140525530
#define CXWnd__DrawColoredRect_x                                   0x140525CE0
#define CXWnd__DrawTooltip_x                                       0x140527340
#define CXWnd__DrawTooltipAtPoint_x                                0x1405273F0
#define CXWnd__GetChildItem_x                                      0x140527CE0
#define CXWnd__GetChildWndAt_x                                     0x140527DA0
#define CXWnd__GetClientClipRect_x                                 0x140527F10
#define CXWnd__GetRelativeRect_x                                   0x1405298C0
#define CXWnd__GetScreenClipRect_x                                 0x1405299C0
#define CXWnd__GetScreenRect_x                                     0x140529B30
#define CXWnd__GetTooltipRect_x                                    0x140529CA0
#define CXWnd__IsActive_x                                          0x14052A210
#define CXWnd__IsDescendantOf_x                                    0x14052A240
#define CXWnd__IsReallyVisible_x                                   0x14052A2B0
#define CXWnd__IsType_x                                            0x14052A2F0
#define CXWnd__Minimize_x                                          0x14052A3F0
#define CXWnd__ProcessTransition_x                                 0x14052B3A0
#define CXWnd__Refade_x                                            0x14052B4A0
#define CXWnd__Resize_x                                            0x14052B4C0
#define CXWnd__Right_x                                             0x14052B560
#define CXWnd__SetFocus_x                                          0x14052B920
#define CXWnd__SetFont_x                                           0x14052B970
#define CXWnd__SetKeyTooltip_x                                     0x14052BA80
#define CXWnd__SetMouseOver_x                                      0x14052BBC0
#define CXWnd__SetParent_x                                         0x14052BC40
#define CXWnd__StartFade_x                                         0x14052C060
#define CXWnd__vftable_x                                           0x1407D6DD8
#define CXWnd__CXWnd_x                                             0x140523CA0
#define CXWnd__dCXWnd_x                                            0x1405245C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140568D50

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052D830
#define CXWndManager__DrawWindows_x                                0x14052D960
#define CXWndManager__GetKeyboardFlags_x                           0x14052E020
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E060
#define CXWndManager__RemoveWnd_x                                  0x1405313F0

// CDBStr
#define CDBStr__GetString_x                                        0x140150840

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B9E10

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A2070
#define CCharacterListWnd__EnterWorld_x                            0x1400A0DA0
#define CCharacterListWnd__Quit_x                                  0x1400A2050
#define CCharacterListWnd__UpdateList_x                            0x1400A2D70

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A0F0
#define ItemBase__CreateItemTagString_x                            0x14058AAE0
#define ItemBase__GetImageNum_x                                    0x14058CCC0
#define ItemBase__GetItemValue_x                                   0x14058E8A0
#define ItemBase__IsEmpty_x                                        0x1405903E0
#define ItemBase__IsKeyRingItem_x                                  0x140590AF0
#define ItemBase__ValueSellMerchant_x                              0x140594EE0
#define ItemClient__CanDrop_x                                      0x140263C10
#define ItemClient__CanGoInBag_x                                   0x140263D40
#define ItemClient__CreateItemClient_x                             0x140264000
#define ItemClient__dItemClient_x                                  0x140263A70

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F6A0
#define EQ_LoadingS__Array_x                                       0x140A36A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A07C0
#define PcBase__GetCombatAbility_x                                 0x1405A0E10
#define PcBase__GetCombatAbilityTimer_x                            0x1405A0EB0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A15C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A1E20
#define PcClient__AlertInventoryChanged_x                          0x140284690
#define PcClient__GetConLevel_x                                    0x140284B60  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140287410
#define PcClient__HasLoreItem_x                                    0x140288490
#define PcZoneClient__GetItemRecastTimer_x                         0x140294380
#define PcZoneClient__RemoveMyAffect_x                             0x140296A20

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D65D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D6640  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D6750  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D66B0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D700  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B140

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FDC40
#define PlayerBase__CanSee1_x                                      0x1405FDD10
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FE240
#define PlayerBase__HasProperty_x                                  0x1405FE460
#define PlayerBase__IsTargetable_x                                 0x1405FE520
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A2620
#define PlayerClient__GetPcClient_x                                0x1402A4BB0
#define PlayerClient__PlayerClient_x                               0x14029B820
#define PlayerClient__SetNameSpriteState_x                         0x1402A7FE0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A8F80
#define PlayerZoneClient__ChangeHeight_x                           0x1402B6BE0
#define PlayerZoneClient__DoAttack_x                               0x1402B78C0
#define PlayerZoneClient__GetLevel_x                               0x1402BAE40
#define PlayerZoneClient__IsValidTeleport_x                        0x1402104B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E9E0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B0850  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B0880  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B0930
#define PlayerManagerClient__CreatePlayer_x                        0x1402B0240
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FD8C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140268F50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140268B50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268BC0
#define KeypressHandler__ClearCommandStateArray_x                  0x140268EE0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140269070
#define KeypressHandler__HandleKeyUp_x                             0x140269150
#define KeypressHandler__SaveKeymapping_x                          0x140268DF0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B7700  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B2160

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028DA20  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402929C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402948E0
#define PcZoneClient__RemovePetEffect_x                            0x140296B20
#define PcZoneClient__HasAlternateAbility_x                        0x140295350
#define PcZoneClient__CanEquipItem_x                               0x140290D90
#define PcZoneClient__GetItemByID_x                                0x140293930
#define PcZoneClient__RemoveBuffEffect_x                           0x1402968D0
#define PcZoneClient__BandolierSwap_x                              0x14028FF50
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294830

// Doors
#define EQSwitch__UseSwitch_x                                      0x140214F70

// IconCache
#define IconCache__GetIcon_x                                       0x1403617A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140358650
#define CContainerMgr__CloseContainer_x                            0x140358010
#define CContainerMgr__OpenExperimentContainer_x                   0x1403589B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140437A30

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C580

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CB110
#define CLootWnd__RequestLootSlot_x                                0x1403CC0F0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A7D0
#define EQ_Spell__SpellAffects_x                                   0x14019BA70
#define EQ_Spell__SpellAffectBase_x                                0x14019B9D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AABE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AAB90
#define EQ_Spell__IsSPAStacking_x                                  0x14019B690
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B250
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019AB30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930F0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140491760  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404917A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140490CB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140490270

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140498880  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147AE0
#define CTaskManager__GetTaskStatus_x                              0x140147BF0
#define CTaskManager__GetElementDescription_x                      0x140147770

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198B30
#define EqSoundManager__PlayScriptMp3_x                            0x140197930
#define EqSoundManager__SoundAssistPlay_x                          0x1402DA140  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA470  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D270
#define CTextureAnimation__SetCurCell_x                            0x14054D580

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025A840

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D19B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D1A30
#define CharacterBase__IsExpansionFlag_x                           0x1401B9F70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403389C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140339300
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A740

// messages
#define msg_spell_worn_off_x                                       0x1401CD680
#define msg_new_text_x                                             0x1401C9110
#define __msgTokenTextParam_x                                      0x1401C0F50
#define msgTokenText_x                                             0x1401C0E70

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DBB00
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DBA20

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060C3F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C4BE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035D960
#define CCursorAttachment__AttachToCursor1_x                       0x14035C5C0
#define CCursorAttachment__Deactivate_x                            0x14035DE60

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140560530
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140560720
#define CEQSuiteTextureLoader__GetTexture_x                        0x140560730

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113560
#define CFindItemWnd__Update_x                                     0x140113760
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E7B0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C170
#define LootFiltersManager__GetItemFilterData_x                    0x14011CC90
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D530
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D7E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041AF20

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406107C0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D34A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140354C20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D5810  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D5920  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140376F30
#define CGroupWnd__UpdateDisplay_x                                 0x140376CD0

// ItemBase
#define ItemBase__IsLore_x                                         0x140590BC0
#define ItemBase__IsLoreEquipped_x                                 0x140590D20

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B500

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020D860
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020D7F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020D830

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CDEA0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF890
#define FactionManagerClient__HandleFactionMessage_x               0x1400EFC40
#define FactionManagerClient__GetFactionStanding_x                 0x1400EF060
#define FactionManagerClient__GetMaxFaction_x                      0x1400EF060
#define FactionManagerClient__GetMinFaction_x                      0x1400EEF10

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAF40

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177F10
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177290
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177D30  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177CB0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E01F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CDEA0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D6840

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055F6B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F1730

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
