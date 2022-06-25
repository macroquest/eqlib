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

#define __ClientDate                                               20220622u
#define __ExpectedVersionDate                                     "Jun 22 2022"
#define __ExpectedVersionTime                                     "12:24:11"
#define __ActualVersionDate_x                                      0x140791380
#define __ActualVersionTime_x                                      0x140791370
#define __ActualVersionBuild_x                                     0x14077F588

// Memory Protection
#define __MemChecker0_x                                            0x14026C8D0
#define __MemChecker1_x                                            0x1404FFCE0
#define __MemChecker4_x                                            0x14023C900
#define __EncryptPad0_x                                            0x140A390B0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B74490
#define instEQZoneInfo_x                                           0x140B74684 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D7950
#define __gfMaxZoomCameraDistance_x                                0x1407876C0
#define __gfMaxCameraDistance_x                                    0x1407C206C
#define __CurrentSocial_x                                          0x1408F3900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2EF70
#define g_eqCommandStates_x                                        0x140A2FFD0
#define __CommandList_x                                            0x140A30210
#define __ScreenMode_x                                             0x140ABBF7C
#define __gWorld_x                                                 0x140B6EC48
#define __gpbCommandEvent_x                                        0x140B6EEC8
#define __ServerHost_x                                             0x140B6F0B8
#define __Guilds_x                                                 0x140B73040
#define __MouseEventTime_x                                         0x140BDF948
#define DI8__Mouse_Check_x                                         0x140BE45A0
#define __heqmain_x                                                0x140BE6A48
#define DI8__Mouse_x                                               0x140BE6A60
#define __HWnd_x                                                   0x140BE6A68
#define __Mouse_x                                                  0x140BE3A98
#define DI8__Main_x                                                0x140BE3B30
#define DI8__Keyboard_x                                            0x140BE3B38
#define __LoginName_x                                              0x140BE421C
#define __CurrentMapLabel_x                                        0x140BF97B0
#define __LabelCache_x                                             0x140BFA3C0
#define __SubscriptionType_x                                       0x140C319C0
#define Teleport_Table_Size_x                                      0x140B6EF54
#define Teleport_Table_x                                           0x140B6CA10

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B6F3D0
#define pinstActiveBanker_x                                        0x140B6C920
#define pinstActiveCorpse_x                                        0x140B6C910
#define pinstActiveGMaster_x                                       0x140B6C918
#define pinstActiveMerchant_x                                      0x140B6C908
#define pinstAltAdvManager_x                                       0x140ABCC28
#define pinstCEverQuest_x                                          0x140BE3A90
#define pinstCamActor_x                                            0x140ABBF68
#define pinstCDBStr_x                                              0x140ABBA30
#define pinstCDisplay_x                                            0x140B6EA10
#define pinstControlledPlayer_x                                    0x140B6C9B0
#define pinstCResolutionHandler_x                                  0x14126A560
#define pinstCSidlManager_x                                        0x140C0B440
#define pinstCXWndManager_x                                        0x140C0B430
#define instDynamicZone_x                                          0x140B72F00 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B72F4E
#define instExpeditionName_x                                       0x140B72F8E
#define pinstDZMember_x                                            0x140B73018
#define pinstDZTimerInfo_x                                         0x140B73020
#define pinstEqLogin_x                                             0x140BE3B60
#define instTribute_x                                              0x140A2A700
#define pinstEQSoundManager_x                                      0x140ABCF68
#define pinstEQSpellStrings_x                                      0x140AA0660
#define pinstSGraphicsEngine_x                                     0x14126A2F8
#define pinstLocalPC_x                                             0x140B6C9F8
#define pinstLocalPlayer_x                                         0x140B6C900
#define pinstCMercenaryClientManager_x                             0x140BE11D8
#define pinstModelPlayer_x                                         0x140B6C930
#define pinstRenderInterface_x                                     0x14126A310
#define pinstSkillMgr_x                                            0x140BE2E70
#define pinstSpawnManager_x                                        0x140BE15A0
#define pinstSpellManager_x                                        0x140BE2FB8
#define pinstStringTable_x                                         0x140B6CA08
#define pinstSwitchManager_x                                       0x140B6C880
#define pinstTarget_x                                              0x140B6C9A8
#define pinstTaskMember_x                                          0x140A2A6F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6C9B8
#define pinstTradeTarget_x                                         0x140B6C928
#define instTributeActive_x                                        0x140A2A729
#define pinstViewActor_x                                           0x140ABBF60
#define pinstWorldData_x                                           0x140B6C9F0
#define pinstPlayerPath_x                                          0x140BE15C8
#define pinstTargetIndicator_x                                     0x140BE3068
#define EQObject_Top_x                                             0x140B6C9D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF6918
#define pinstCContainerMgr_x                                       0x140ABC050
#define pinstCContextMenuManager_x                                 0x140C0B3E0
#define pinstCInvSlotMgr_x                                         0x140ABC028
#define pinstCItemDisplayManager_x                                 0x140BF9380
#define pinstCPopupWndManager_x                                    0x140BF9C10
#define pinstCSpellDisplayMgr_x                                    0x140BFA2A0
#define pinstCTaskManager_x                                        0x1408F3B40
#define pinstEQSuiteTextureLoader_x                                0x140A42720
#define pinstItemIconCache_x                                       0x140BF6C78
#define pinstLootFiltersManager_x                                  0x140ABB448

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6FF0
#define __CastRay2_x                                               0x1401F6D00
#define __ConvertItemTags_x                                        0x1401F73F0
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140151FF0
#define __DoesFileExist_x                                          0x140504480
#define __EQGetTime_x                                              0x140500290
#define __ExecuteCmd_x                                             0x1401CFB70
#define __FixHeading_x                                             0x140602A80
#define __FlushDxKeyboard_x                                        0x1402E8030
#define __get_bearing_x                                            0x1402000F0
#define __get_melee_range_x                                        0x1402001E0
#define __GetAnimationCache_x                                      0x14035C9B0
#define __GetGaugeValueFromEQ_x                                    0x14047ABE0
#define __GetLabelFromEQ_x                                         0x14047C1F0
#define __GetXTargetType_x                                         0x140603EF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140602B00
#define __HelpPath_x                                               0x140BDF810   // Why?
#define __NewUIINI_x                                               0x140486D90   // Why?
#define __ProcessGameEvents_x                                      0x140232170
#define __ProcessKeyboardEvents_x                                  0x1402E97E0
#define __ProcessMouseEvents_x                                     0x140233580
#define __SaveColors_x                                             0x140161CC0
#define __STMLToText_x                                             0x14052DF40
#define __WndProc_x                                                0x1402E67A0
#define CMemoryMappedFile__SetFile_x                               0x14073E770
#define DrawNetStatus_x                                            0x14027A460
#define Util__FastTime_x                                           0x140500F90
#define __eq_delete_x                                              0x140608D80
#define __eq_new_x                                                 0x140608E7C
#define __CopyLayout_x                                             0x140268D70
#define __ThrottleFrameRate_x                                      0x140221FE7
#define __ThrottleFrameRateEnd_x                                   0x140222047

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F8A50
#define CAAWnd__Update_x                                           0x1402F8D50
#define CAAWnd__UpdateSelected_x                                   0x1402F9D10

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B670
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073FD0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076F3F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BEE0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016C9E0
#define AltAdvManager__IsAbilityReady_x                            0x14016CC60
#define AltAdvManager__GetAAById_x                                 0x14016C2B0
#define AltAdvManager__CanTrainAbility_x                           0x14016C0E0
#define AltAdvManager__CanSeeAbility_x                             0x14016BDA0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3D80
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D40
#define CharacterZoneClient__CanUseItem_x                          0x1400B8B30
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5630
#define CharacterZoneClient__CastSpell_x                           0x1400A56D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4CA0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA160
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA320
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A88C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFDB0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE790  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9DB0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B80B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C18D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0800
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F80
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009ABF0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C460
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0F00
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9E10
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1AE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA000
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2570
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA210
#define CharacterZoneClient__GetModCap_x                           0x1400C9EF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA2B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA4C0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F300
#define CharacterZoneClient__HasSkill_x                            0x1400C5720
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE7F0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9980
#define CharacterZoneClient__Max_Endurance_x                       0x140292CE0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9CC0
#define CharacterZoneClient__Max_Mana_x                            0x140292ED0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA130
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1CD0
#define CharacterZoneClient__SpellDuration_x                       0x1400B28B0
#define CharacterZoneClient__TotalEffect_x                         0x1400B3AE0
#define CharacterZoneClient__UseSkill_x                            0x1400CF6F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315DB0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031FB40

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031BB00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031ABB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403221B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CE7A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140342980
#define CChatWindowManager__InitContextMenu_x                      0x140342B10
#define CChatWindowManager__FreeChatWindow_x                       0x140341BD0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403498A0
#define CChatWindowManager__CreateChatWindow_x                     0x140341510

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D74E0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034A810
#define CChatWindow__Clear_x                                       0x14034B620
#define CChatWindow__WndNotification_x                             0x14034C7A0
#define CChatWindow__AddHistory_x                                  0x14034B120

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053EF00
#define CContextMenu__RemoveMenuItem_x                             0x14053F410
#define CContextMenu__RemoveAllMenuItems_x                         0x14053F3E0
#define CContextMenu__CheckMenuItem_x                              0x14053F250
#define CContextMenu__SetMenuItem_x                                0x14053F430
#define CContextMenu__AddSeparator_x                               0x14053F060

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053FA80
#define CContextMenuManager__RemoveMenu_x                          0x14053FFF0
#define CContextMenuManager__PopupMenu_x                           0x14053FD70
#define CContextMenuManager__Flush_x                               0x14053FB00
#define CContextMenuManager__CreateDefaultMenu_x                   0x140356A20

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CC260
#define CChatService__GetFriendName_x                              0x1405CC270

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053B080
#define CComboWnd__Draw_x                                          0x14053B180
#define CComboWnd__GetCurChoice_x                                  0x14053B460  // unused
#define CComboWnd__GetListRect_x                                   0x14053B500
#define CComboWnd__InsertChoice_x                                  0x14053B840
#define CComboWnd__SetColors_x                                     0x14053BBD0
#define CComboWnd__SetChoice_x                                     0x14053BB90
#define CComboWnd__GetItemCount_x                                  0x14053B4F0
#define CComboWnd__GetCurChoiceText_x                              0x14053B4A0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053B430
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053B900

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140354AB0
#define CContainerWnd__SetContainer_x                              0x140355840
#define CContainerWnd__vftable_x                                   0x14079F0B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABBCF4
#define CDisplay__ZoneMainUI_x                                     0x140556650
#define CDisplay__PreZoneMainUI_x                                  0x14015EC10
#define CDisplay__CleanGameUI_x                                    0x1401510F0
#define CDisplay__GetClickedActor_x                                0x140155280
#define CDisplay__GetUserDefinedColor_x                            0x140155D60
#define CDisplay__InitCharSelectUI_x                               0x140156010
#define CDisplay__ReloadUI_x                                       0x140160F70
#define CDisplay__WriteTextHD2_x                                   0x140167EC0
#define CDisplay__TrueDistance_x                                   0x140167BA0
#define CDisplay__SetViewActor_x                                   0x1401644B0
#define CDisplay__GetFloorHeight_x                                 0x1401554E0
#define CDisplay__ToggleScreenshotMode_x                           0x1401676A0
#define CDisplay__RealRender_World_x                               0x140160300

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140561B70
#define CEditWnd__DrawCaret_x                                      0x140542900  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140542DC0
#define CEditWnd__GetCaretPt_x                                     0x140543040  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140543080
#define CEditWnd__GetDisplayString_x                               0x1405432F0
#define CEditWnd__GetHorzOffset_x                                  0x140543530
#define CEditWnd__GetLineForPrintableChar_x                        0x140543680
#define CEditWnd__GetSelStartPt_x                                  0x140543960  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405437B0
#define CEditWnd__PointFromPrintableChar_x                         0x140544510
#define CEditWnd__ReplaceSelection_x                               0x1405448C0
#define CEditWnd__SelectableCharFromPoint_x                        0x140544D60
#define CEditWnd__SetEditable_x                                    0x140544FF0
#define CEditWnd__SetWindowText_x                                  0x140545020

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140223390
#define CEverQuest__ClickedPlayer_x                                0x140219710
#define CEverQuest__CreateTargetIndicator_x                        0x140219E70
#define CEverQuest__DoTellWindow_x                                 0x1400D71F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7AB0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140224890
#define CEverQuest__dsp_chat_x                                     0x1400D6D10 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024DDD0
#define CEverQuest__Emote_x                                        0x1402251F0
#define CEverQuest__GetBodyTypeDesc_x                              0x140225F60
#define CEverQuest__GetClassDesc_x                                 0x140225FC0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140226390
#define CEverQuest__GetDeityDesc_x                                 0x140226740
#define CEverQuest__GetLangDesc_x                                  0x140226B70
#define CEverQuest__GetRaceDesc_x                                  0x140226F10
#define CEverQuest__InterpretCmd_x                                 0x140228600
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023CF80
#define CEverQuest__LMouseUp_x                                     0x14022A040
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A920
#define CEverQuest__RMouseUp_x                                     0x1402340F0
#define CEverQuest__SetGameState_x                                 0x14023F230
#define CEverQuest__UPCNotificationFlush_x                         0x1402448E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229CC0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140235420
#define CEverQuest__ReportSuccessfulHit_x                          0x140236160

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140366CE0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400944E0
#define CGuild__GetGuildName_x                                     0x140094520

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140383480

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025EB00
#define CHotButton__SetCheck_x                                     0x14025ED90

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140392390
#define CInvSlotMgr__MoveItem_x                                    0x1403924E0
#define CInvSlotMgr__SelectSlot_x                                  0x140393EA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140390000
#define CInvSlot__SliderComplete_x                                 0x140391230
#define CInvSlot__GetItemBase_x                                    0x14038C630
#define CInvSlot__UpdateItem_x                                     0x140391690

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140394500
#define CInvSlotWnd__HandleLButtonUp_x                             0x140395060

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B4750
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B7020
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B1660
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B2CE0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B3BA0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404778C0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140479490

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AF6E0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403ADE10

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401174A0

// CLabel
#define CLabel__UpdateText_x                                       0x1403BE3E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405120D0
#define CListWnd__dCListWnd_x                                      0x140512510
#define CListWnd__vftable_x                                        0x1407CDBA0
#define CListWnd__AddColumn_x                                      0x140512BB0
#define CListWnd__AddColumn1_x                                     0x140512C50
#define CListWnd__AddLine_x                                        0x140512DB0
#define CListWnd__AddString_x                                      0x140513330
#define CListWnd__CalculateFirstVisibleLine_x                      0x140513A20
#define CListWnd__CalculateVSBRange_x                              0x140513D00
#define CListWnd__ClearSel_x                                       0x140513EB0
#define CListWnd__ClearAllSel_x                                    0x140513E50
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140513F10
#define CListWnd__Compare_x                                        0x1405140C0
#define CListWnd__Draw_x                                           0x140514590
#define CListWnd__DrawColumnSeparators_x                           0x140515130
#define CListWnd__DrawHeader_x                                     0x1405151F0
#define CListWnd__DrawItem_x                                       0x1405158B0
#define CListWnd__DrawLine_x                                       0x140516230
#define CListWnd__DrawSeparator_x                                  0x1405166F0
#define CListWnd__EnableLine_x                                     0x140516B10
#define CListWnd__EnsureVisible_x                                  0x140516B70
#define CListWnd__ExtendSel_x                                      0x140516C70
#define CListWnd__GetColumnMinWidth_x                              0x140516FA0
#define CListWnd__GetColumnWidth_x                                 0x140517020
#define CListWnd__GetCurSel_x                                      0x140517120
#define CListWnd__GetItemData_x                                    0x1405174A0
#define CListWnd__GetItemHeight_x                                  0x1405174E0
#define CListWnd__GetItemRect_x                                    0x1405176A0
#define CListWnd__GetItemText_x                                    0x140517940
#define CListWnd__GetSelList_x                                     0x140517B90
#define CListWnd__GetSeparatorRect_x                               0x140517D80
#define CListWnd__InsertLine_x                                     0x1405191F0
#define CListWnd__RemoveLine_x                                     0x140519810
#define CListWnd__SetColors_x                                      0x140519BE0
#define CListWnd__SetColumnJustification_x                         0x140519C00
#define CListWnd__SetColumnLabel_x                                 0x140519C80
#define CListWnd__SetColumnWidth_x                                 0x140519E20
#define CListWnd__SetCurSel_x                                      0x140519EF0
#define CListWnd__SetItemColor_x                                   0x14051A160
#define CListWnd__SetItemData_x                                    0x14051A200
#define CListWnd__SetItemText_x                                    0x14051A440
#define CListWnd__Sort_x                                           0x14051A840
#define CListWnd__ToggleSel_x                                      0x14051A9B0
#define CListWnd__SetColumnsSizable_x                              0x140519E70
#define CListWnd__SetItemWnd_x                                     0x14051A570
#define CListWnd__GetItemWnd_x                                     0x140517B20
#define CListWnd__SetItemIcon_x                                    0x14051A240
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405137F0
#define CListWnd__SetVScrollPos_x                                  0x14051A7A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D0E80

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AA730
#define MapViewMap__Clear_x                                        0x1403D2A00
#define MapViewMap__SetZoom_x                                      0x1403D8FC0
#define MapViewMap__HandleLButtonDown_x                            0x1403D5B00

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FA580  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140400190
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404021B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140403FC0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404033E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140407680

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A8AA0
#define CPacketScrambler__hton_x                                   0x1405A8A90

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140538760
#define CSidlManagerBase__FindAnimation1_x                         0x1405386A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140538D90
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140538B40
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140537AB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140537A40
#define CSidlManagerBase__CreateXWnd_x                             0x1405370A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046A050
#define CSidlManager__CreateXWnd_x                                 0x14046A210

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052FA10
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052FB40
#define CSidlScreenWnd__ConvertToRes_x                             0x14055C110 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052FC70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052F2B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052F200
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052F4D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140530240
#define CSidlScreenWnd__EnableIniStorage_x                         0x140530470
#define CSidlScreenWnd__GetChildItem_x                             0x140530610
#define CSidlScreenWnd__GetSidlPiece_x                             0x140530830
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140522280 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140530BA0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140530EF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140531790
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140532040
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0B288
#define CSidlScreenWnd__StoreIniInfo_x                             0x140532670
#define CSidlScreenWnd__StoreIniVis_x                              0x140532E60
#define CSidlScreenWnd__vftable_x                                  0x1407CEC00
#define CSidlScreenWnd__WndNotification_x                          0x140532EB0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D0F70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D1370 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D12B0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1710
#define CSkillMgr__IsCombatSkill_x                                 0x1402D1750

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140486E20
#define CSliderWnd__SetValue_x                                     0x140541590
#define CSliderWnd__SetNumTicks_x                                  0x140541410

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140471560

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140549AA0
#define CStmlWnd__CalculateHSBRange_x                              0x140521C70
#define CStmlWnd__CalculateVSBRange_x                              0x14054A950
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054B450
#define CStmlWnd__ForceParseNow_x                                  0x14054B4F0
#define CStmlWnd__GetVisibleText_x                                 0x14054BBD0
#define CStmlWnd__MakeStmlColorTag_x                               0x14054D960
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054D9A0
#define CStmlWnd__SetSTMLText_x                                    0x140554980
#define CStmlWnd__StripFirstSTMLLines_x                            0x140554B30
#define CStmlWnd__UpdateHistoryString_x                            0x140554EC0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140546590
#define CTabWnd__DrawCurrentPage_x                                 0x140546630
#define CTabWnd__DrawTab_x                                         0x140546A00
#define CTabWnd__GetTabRect_x                                      0x140547060
#define CTabWnd__InsertPage_x                                      0x140547330
#define CTabWnd__RemovePage_x                                      0x1405475C0
#define CTabWnd__SetPage_x                                         0x140547720
#define CTabWnd__UpdatePage_x                                      0x140547A20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405461A0
#define CPageWnd__SetTabText_x                                     0x140546210

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DA40  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DE50


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051BB00
#define CTextureFont__DrawWrappedText1_x                           0x14051BA10
#define CTextureFont__DrawWrappedText2_x                           0x14051BC30
#define CTextureFont__GetTextExtent_x                              0x14051BFE0
#define CTextureFont__GetHeight_x                                  0x14051BFA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055A870

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050ED40

// CXStr
#define CXStr__gFreeLists_x                                        0x140A42090
#define CXStr__gCXStrAccess_x                                      0x140C0A848

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051D510
#define CXWnd__ClrFocus_x                                          0x14051D750
#define CXWnd__Destroy_x                                           0x14051D890
#define CXWnd__DoAllDrawing_x                                      0x14051D9A0
#define CXWnd__DrawColoredRect_x                                   0x14051E160
#define CXWnd__DrawTooltip_x                                       0x14051F7E0
#define CXWnd__DrawTooltipAtPoint_x                                0x14051F890
#define CXWnd__GetChildItem_x                                      0x140520190
#define CXWnd__GetChildWndAt_x                                     0x140520240
#define CXWnd__GetClientClipRect_x                                 0x1405203B0
#define CXWnd__GetRelativeRect_x                                   0x140521DA0
#define CXWnd__GetScreenClipRect_x                                 0x140521EB0
#define CXWnd__GetScreenRect_x                                     0x140522000
#define CXWnd__GetTooltipRect_x                                    0x140522180
#define CXWnd__IsActive_x                                          0x140522700
#define CXWnd__IsDescendantOf_x                                    0x140522730
#define CXWnd__IsReallyVisible_x                                   0x1405227A0
#define CXWnd__IsType_x                                            0x1405227E0
#define CXWnd__Minimize_x                                          0x1405228D0
#define CXWnd__ProcessTransition_x                                 0x140523920
#define CXWnd__Refade_x                                            0x140523A20
#define CXWnd__Resize_x                                            0x140523A30
#define CXWnd__Right_x                                             0x140523AD0
#define CXWnd__SetFocus_x                                          0x140523EA0
#define CXWnd__SetFont_x                                           0x140523EF0
#define CXWnd__SetKeyTooltip_x                                     0x140524000
#define CXWnd__SetMouseOver_x                                      0x140524130
#define CXWnd__SetParent_x                                         0x1405241B0
#define CXWnd__StartFade_x                                         0x1405245E0
#define CXWnd__vftable_x                                           0x1407CE318
#define CXWnd__CXWnd_x                                             0x14051C100
#define CXWnd__dCXWnd_x                                            0x14051CA00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405612F0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140525E10
#define CXWndManager__DrawWindows_x                                0x140525F40
#define CXWndManager__GetKeyboardFlags_x                           0x140526600
#define CXWndManager__HandleKeyboardMsg_x                          0x140526640
#define CXWndManager__RemoveWnd_x                                  0x140529A50

// CDBStr
#define CDBStr__GetString_x                                        0x14014F2F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B22A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1C00
#define CCharacterListWnd__EnterWorld_x                            0x1400A08B0
#define CCharacterListWnd__Quit_x                                  0x1400A1BE0
#define CCharacterListWnd__UpdateList_x                            0x1400A28F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140582650
#define ItemBase__CreateItemTagString_x                            0x140582FE0
#define ItemBase__GetImageNum_x                                    0x140585180
#define ItemBase__GetItemValue_x                                   0x140586CF0
#define ItemBase__IsEmpty_x                                        0x140588820
#define ItemBase__IsKeyRingItem_x                                  0x140588EF0
#define ItemBase__ValueSellMerchant_x                              0x14058D1F0
#define ItemClient__CanDrop_x                                      0x140260F00
#define ItemClient__CanGoInBag_x                                   0x140261030
#define ItemClient__CreateItemClient_x                             0x1402612F0
#define ItemClient__dItemClient_x                                  0x140260D60

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016E180
#define EQ_LoadingS__Array_x                                       0x140A2CA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405987F0
#define PcBase__GetCombatAbility_x                                 0x140598E40
#define PcBase__GetCombatAbilityTimer_x                            0x140598EE0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405995F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140599E50
#define PcClient__AlertInventoryChanged_x                          0x140281A30
#define PcClient__GetConLevel_x                                    0x140281F00  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140284700
#define PcClient__HasLoreItem_x                                    0x140285770
#define PcZoneClient__GetItemRecastTimer_x                         0x140291680
#define PcZoneClient__RemoveMyAffect_x                             0x140293D30

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D41F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D4260  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D4370  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D42D0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020B230  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149C10

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F5A30
#define PlayerBase__CanSee1_x                                      0x1405F5B00
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F6030
#define PlayerBase__HasProperty_x                                  0x1405F6250
#define PlayerBase__IsTargetable_x                                 0x1405F6310
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F940
#define PlayerClient__GetPcClient_x                                0x1402A1ED0
#define PlayerClient__PlayerClient_x                               0x140298B20
#define PlayerClient__SetNameSpriteState_x                         0x1402A5300
#define PlayerClient__SetNameSpriteTint_x                          0x1402A62A0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B4200
#define PlayerZoneClient__DoAttack_x                               0x1402B4EF0
#define PlayerZoneClient__GetLevel_x                               0x1402B8460
#define PlayerZoneClient__IsValidTeleport_x                        0x14020DFF0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D4B0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402ADC80  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402ADCB0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402ADD60
#define PlayerManagerClient__CreatePlayer_x                        0x1402AD670
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F56B0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402662B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265EB0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265F20
#define KeypressHandler__ClearCommandStateArray_x                  0x140266240  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402663D0
#define KeypressHandler__HandleKeyUp_x                             0x1402664B0
#define KeypressHandler__SaveKeymapping_x                          0x140266150  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AFB90  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405AA140

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028AD50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028FD00
#define PcZoneClient__GetPcSkillLimit_x                            0x140291BE0
#define PcZoneClient__RemovePetEffect_x                            0x140293E30
#define PcZoneClient__HasAlternateAbility_x                        0x140292650
#define PcZoneClient__CanEquipItem_x                               0x14028E0D0
#define PcZoneClient__GetItemByID_x                                0x140290C40
#define PcZoneClient__RemoveBuffEffect_x                           0x140293BE0
#define PcZoneClient__BandolierSwap_x                              0x14028D290
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291B30

// Doors
#define EQSwitch__UseSwitch_x                                      0x140212AB0

// IconCache
#define IconCache__GetIcon_x                                       0x14035C9E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140353890
#define CContainerMgr__CloseContainer_x                            0x140353250
#define CContainerMgr__OpenExperimentContainer_x                   0x140353BF0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140431280

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259840

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C5050
#define CLootWnd__RequestLootSlot_x                                0x1403C6030

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199330
#define EQ_Spell__SpellAffects_x                                   0x14019A5D0
#define EQ_Spell__SpellAffectBase_x                                0x14019A530
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA6A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA650
#define EQ_Spell__IsSPAStacking_x                                  0x14019A1F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199DB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199690

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092F10

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048ABC0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048AC00
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048A110
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404896C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140491CA0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401465B0
#define CTaskManager__GetTaskStatus_x                              0x1401466C0
#define CTaskManager__GetElementDescription_x                      0x140146240

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197690
#define EqSoundManager__PlayScriptMp3_x                            0x140196490
#define EqSoundManager__SoundAssistPlay_x                          0x1402D7750  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7A80  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140545820
#define CTextureAnimation__SetCurCell_x                            0x140545B30

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257B20

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9D80
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C9E00
#define CharacterBase__IsExpansionFlag_x                           0x1401B8A10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140334BA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403354E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140336920

// messages
#define msg_spell_worn_off_x                                       0x1401CB980
#define msg_new_text_x                                             0x1401C77C0
#define __msgTokenTextParam_x                                      0x1401BF770
#define msgTokenText_x                                             0x1401BF690

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9110
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D9030

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406042D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BEB20

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140358BA0
#define CCursorAttachment__AttachToCursor1_x                       0x1403577F0
#define CCursorAttachment__Deactivate_x                            0x1403590A0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140558AC0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140558CB0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140558CC0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113040
#define CFindItemWnd__Update_x                                     0x140113240
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E280

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BC60
#define LootFiltersManager__GetItemFilterData_x                    0x14011C770
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D010
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D2C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404148F0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406086F0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0AD0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034FE60

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CDBD0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CDCE0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371FB0
#define CGroupWnd__UpdateDisplay_x                                 0x140371D50

// ItemBase
#define ItemBase__IsLore_x                                         0x140588FC0
#define ItemBase__IsLoreEquipped_x                                 0x140589110

#define MultipleItemMoveManager__ProcessMove_x                     0x1402788B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020B390
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020B320
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020B360

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB4F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF3D0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF780
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEBA0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEBA0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEA50

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D960

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA80

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176A60
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175D60
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176880  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140176800  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD810

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB4F0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D4460

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140557C40

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EEDC0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
