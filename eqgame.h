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

#define __ClientDate                                               20220524u
#define __ExpectedVersionDate                                     "May 24 2022"
#define __ExpectedVersionTime                                     "12:11:37"
#define __ActualVersionDate_x                                      0x140791340
#define __ActualVersionTime_x                                      0x140791330
#define __ActualVersionBuild_x                                     0x14077F548

// Memory Protection
#define __MemChecker0_x                                            0x14026C380
#define __MemChecker1_x                                            0x1404FF0B0
#define __MemChecker4_x                                            0x14023C3A0
#define __EncryptPad0_x                                            0x140A390B0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B74490
#define instEQZoneInfo_x                                           0x140B74684 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D73F0
#define __gfMaxZoomCameraDistance_x                                0x140787680
#define __gfMaxCameraDistance_x                                    0x1407C1ECC
#define __CurrentSocial_x                                          0x1408F3900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2EF70
#define g_eqCommandStates_x                                        0x140A2FFD0
#define __CommandList_x                                            0x140A30210
#define __ScreenMode_x                                             0x140ABBF84
#define __gWorld_x                                                 0x140B6EC48
#define __gpbCommandEvent_x                                        0x140B6EEC8
#define __ServerHost_x                                             0x140B6F0B8
#define __Guilds_x                                                 0x140B73040
#define __MouseEventTime_x                                         0x140BDF940
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
#define pinstCContainerMgr_x                                       0x140ABC048
#define pinstCContextMenuManager_x                                 0x140C0B3E0
#define pinstCInvSlotMgr_x                                         0x140ABC020
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
#define __CastRay_x                                                0x1401F6A90
#define __CastRay2_x                                               0x1401F67A0
#define __ConvertItemTags_x                                        0x1401F6E90
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140151FB0
#define __DoesFileExist_x                                          0x140503850
#define __EQGetTime_x                                              0x1404FF660
#define __ExecuteCmd_x                                             0x1401CF610
#define __FixHeading_x                                             0x140602690
#define __FlushDxKeyboard_x                                        0x1402E7B70
#define __get_bearing_x                                            0x1401FFB90
#define __get_melee_range_x                                        0x1401FFC80
#define __GetAnimationCache_x                                      0x14035BA60
#define __GetGaugeValueFromEQ_x                                    0x140479E80
#define __GetLabelFromEQ_x                                         0x14047B490
#define __GetXTargetType_x                                         0x140603B10   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140602710
#define __HelpPath_x                                               0x140BDF808   // Why?
#define __NewUIINI_x                                               0x140486060   // Why?
#define __ProcessGameEvents_x                                      0x140231C10
#define __ProcessKeyboardEvents_x                                  0x1402E9320
#define __ProcessMouseEvents_x                                     0x140233020
#define __SaveColors_x                                             0x140161C80
#define __STMLToText_x                                             0x14052D3A0
#define __WndProc_x                                                0x1402E62E0
#define CMemoryMappedFile__SetFile_x                               0x14073E390
#define DrawNetStatus_x                                            0x140279F20
#define Util__FastTime_x                                           0x140500360
#define __eq_delete_x                                              0x1406089A0
#define __eq_new_x                                                 0x140608A9C
#define __CopyLayout_x                                             0x140268810
#define __ThrottleFrameRate_x                                      0x140221A81
#define __ThrottleFrameRateEnd_x                                   0x140221AE1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F82C0
#define CAAWnd__Update_x                                           0x1402F85C0
#define CAAWnd__UpdateSelected_x                                   0x1402F9580

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B4F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073F90
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076F3F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BD60

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016C9A0
#define AltAdvManager__IsAbilityReady_x                            0x14016CC20
#define AltAdvManager__GetAAById_x                                 0x14016C270
#define AltAdvManager__CanTrainAbility_x                           0x14016C0A0
#define AltAdvManager__CanSeeAbility_x                             0x14016BD60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3BC0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4970
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4B80
#define CharacterZoneClient__CanUseItem_x                          0x1400B8980
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5470
#define CharacterZoneClient__CastSpell_x                           0x1400A5510
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4AF0
#define CharacterZoneClient__Cur_HP_x                              0x1400B9FB0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA170
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8700
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFC20
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE600  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9BF0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7F00
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1740
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0670
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9DC0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C2A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0D70
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9C60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1950
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E40
#define CharacterZoneClient__GetManaRegen_x                        0x1400C23E0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA050
#define CharacterZoneClient__GetModCap_x                           0x1400C9D60
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA0F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA300
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F140
#define CharacterZoneClient__HasSkill_x                            0x1400C5590
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE630
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C97F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402927F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B30
#define CharacterZoneClient__Max_Mana_x                            0x1402929E0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400C9FA0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B20
#define CharacterZoneClient__SpellDuration_x                       0x1400B2700
#define CharacterZoneClient__TotalEffect_x                         0x1400B3930
#define CharacterZoneClient__UseSkill_x                            0x1400CF560


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315600

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031F3A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031B360
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031A400

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140321A30

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CE610

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140341A80
#define CChatWindowManager__InitContextMenu_x                      0x140341C10
#define CChatWindowManager__FreeChatWindow_x                       0x140340CD0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403489A0
#define CChatWindowManager__CreateChatWindow_x                     0x140340610

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7340

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140349900
#define CChatWindow__Clear_x                                       0x14034A710
#define CChatWindow__WndNotification_x                             0x14034B880
#define CChatWindow__AddHistory_x                                  0x14034A210

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E390
#define CContextMenu__RemoveMenuItem_x                             0x14053E8A0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053E870
#define CContextMenu__CheckMenuItem_x                              0x14053E6E0
#define CContextMenu__SetMenuItem_x                                0x14053E8C0
#define CContextMenu__AddSeparator_x                               0x14053E4F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053EF10
#define CContextMenuManager__RemoveMenu_x                          0x14053F480
#define CContextMenuManager__PopupMenu_x                           0x14053F200
#define CContextMenuManager__Flush_x                               0x14053EF90
#define CContextMenuManager__CreateDefaultMenu_x                   0x140355B00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CBAF0
#define CChatService__GetFriendName_x                              0x1405CBB00

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053A510
#define CComboWnd__Draw_x                                          0x14053A610
#define CComboWnd__GetCurChoice_x                                  0x14053A8F0  // unused
#define CComboWnd__GetListRect_x                                   0x14053A990
#define CComboWnd__InsertChoice_x                                  0x14053ACD0
#define CComboWnd__SetColors_x                                     0x14053B060
#define CComboWnd__SetChoice_x                                     0x14053B020
#define CComboWnd__GetItemCount_x                                  0x14053A980
#define CComboWnd__GetCurChoiceText_x                              0x14053A930  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053A8C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053AD90

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140353B80
#define CContainerWnd__SetContainer_x                              0x140354930
#define CContainerWnd__vftable_x                                   0x14079EF18

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABBCF4
#define CDisplay__ZoneMainUI_x                                     0x140555B90
#define CDisplay__PreZoneMainUI_x                                  0x14015EBD0
#define CDisplay__CleanGameUI_x                                    0x1401510B0
#define CDisplay__GetClickedActor_x                                0x140155240
#define CDisplay__GetUserDefinedColor_x                            0x140155D20
#define CDisplay__InitCharSelectUI_x                               0x140155FD0
#define CDisplay__ReloadUI_x                                       0x140160F30
#define CDisplay__WriteTextHD2_x                                   0x140167E80
#define CDisplay__TrueDistance_x                                   0x140167B60
#define CDisplay__SetViewActor_x                                   0x140164470
#define CDisplay__GetFloorHeight_x                                 0x1401554A0
#define CDisplay__ToggleScreenshotMode_x                           0x140167660
#define CDisplay__RealRender_World_x                               0x1401602C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405610B0
#define CEditWnd__DrawCaret_x                                      0x140541DD0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140542270
#define CEditWnd__GetCaretPt_x                                     0x1405424F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140542530
#define CEditWnd__GetDisplayString_x                               0x1405427A0
#define CEditWnd__GetHorzOffset_x                                  0x1405429D0
#define CEditWnd__GetLineForPrintableChar_x                        0x140542B20
#define CEditWnd__GetSelStartPt_x                                  0x140542E00  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140542C50
#define CEditWnd__PointFromPrintableChar_x                         0x140543A50
#define CEditWnd__ReplaceSelection_x                               0x140543E00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405442A0
#define CEditWnd__SetEditable_x                                    0x140544520
#define CEditWnd__SetWindowText_x                                  0x140544550

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222E30
#define CEverQuest__ClickedPlayer_x                                0x1402191C0
#define CEverQuest__CreateTargetIndicator_x                        0x140219920
#define CEverQuest__DoTellWindow_x                                 0x1400D7050 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7910 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140224330
#define CEverQuest__dsp_chat_x                                     0x1400D6B70 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D8A0
#define CEverQuest__Emote_x                                        0x140224C90
#define CEverQuest__GetBodyTypeDesc_x                              0x140225A00
#define CEverQuest__GetClassDesc_x                                 0x140225A60
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225E30
#define CEverQuest__GetDeityDesc_x                                 0x1402261E0
#define CEverQuest__GetLangDesc_x                                  0x140226610
#define CEverQuest__GetRaceDesc_x                                  0x1402269B0
#define CEverQuest__InterpretCmd_x                                 0x1402280A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023CA20
#define CEverQuest__LMouseUp_x                                     0x140229AE0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A3C0
#define CEverQuest__RMouseUp_x                                     0x140233B90
#define CEverQuest__SetGameState_x                                 0x14023ECD0
#define CEverQuest__UPCNotificationFlush_x                         0x1402443B0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229760
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234EC0
#define CEverQuest__ReportSuccessfulHit_x                          0x140235C00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140365DA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094320
#define CGuild__GetGuildName_x                                     0x140094360

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140382560

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E5B0
#define CHotButton__SetCheck_x                                     0x14025E840

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140391490
#define CInvSlotMgr__MoveItem_x                                    0x1403915E0
#define CInvSlotMgr__SelectSlot_x                                  0x140392FD0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F0E0
#define CInvSlot__SliderComplete_x                                 0x140390310
#define CInvSlot__GetItemBase_x                                    0x14038B710
#define CInvSlot__UpdateItem_x                                     0x140390770

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140393630
#define CInvSlotWnd__HandleLButtonUp_x                             0x140394190

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B39A0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B62D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0820
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B1EE0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B2DE0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140476B60
#define CSpellDisplayWnd__UpdateStrings_x                          0x140478730

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AE9C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403ACFC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117360

// CLabel
#define CLabel__UpdateText_x                                       0x1403BD6A0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405114A0
#define CListWnd__dCListWnd_x                                      0x1405118E0
#define CListWnd__vftable_x                                        0x1407CDA10
#define CListWnd__AddColumn_x                                      0x140511F80
#define CListWnd__AddColumn1_x                                     0x140512020
#define CListWnd__AddLine_x                                        0x140512180
#define CListWnd__AddString_x                                      0x140512700
#define CListWnd__CalculateFirstVisibleLine_x                      0x140512DF0
#define CListWnd__CalculateVSBRange_x                              0x1405130D0
#define CListWnd__ClearSel_x                                       0x140513270
#define CListWnd__ClearAllSel_x                                    0x140513210
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405132D0
#define CListWnd__Compare_x                                        0x140513490
#define CListWnd__Draw_x                                           0x140513960
#define CListWnd__DrawColumnSeparators_x                           0x140514500
#define CListWnd__DrawHeader_x                                     0x1405145C0
#define CListWnd__DrawItem_x                                       0x140514C80
#define CListWnd__DrawLine_x                                       0x140515600
#define CListWnd__DrawSeparator_x                                  0x140515AC0
#define CListWnd__EnableLine_x                                     0x140515EE0
#define CListWnd__EnsureVisible_x                                  0x140515F40
#define CListWnd__ExtendSel_x                                      0x140516040
#define CListWnd__GetColumnMinWidth_x                              0x140516370
#define CListWnd__GetColumnWidth_x                                 0x1405163F0
#define CListWnd__GetCurSel_x                                      0x1405164F0
#define CListWnd__GetItemData_x                                    0x140516870
#define CListWnd__GetItemHeight_x                                  0x1405168B0
#define CListWnd__GetItemRect_x                                    0x140516A70
#define CListWnd__GetItemText_x                                    0x140516D10
#define CListWnd__GetSelList_x                                     0x140516F60
#define CListWnd__GetSeparatorRect_x                               0x140517150
#define CListWnd__InsertLine_x                                     0x1405185D0
#define CListWnd__RemoveLine_x                                     0x140518BF0
#define CListWnd__SetColors_x                                      0x140518FC0
#define CListWnd__SetColumnJustification_x                         0x140518FE0
#define CListWnd__SetColumnLabel_x                                 0x140519060
#define CListWnd__SetColumnWidth_x                                 0x140519200
#define CListWnd__SetCurSel_x                                      0x1405192D0
#define CListWnd__SetItemColor_x                                   0x140519540
#define CListWnd__SetItemData_x                                    0x1405195E0
#define CListWnd__SetItemText_x                                    0x140519820
#define CListWnd__Sort_x                                           0x140519C30
#define CListWnd__ToggleSel_x                                      0x140519DA0
#define CListWnd__SetColumnsSizable_x                              0x140519250
#define CListWnd__SetItemWnd_x                                     0x140519950
#define CListWnd__GetItemWnd_x                                     0x140516EF0
#define CListWnd__SetItemIcon_x                                    0x140519620
#define CListWnd__CalculateCustomWindowPositions_x                 0x140512BC0
#define CListWnd__SetVScrollPos_x                                  0x140519B90

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D0140

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AA590
#define MapViewMap__Clear_x                                        0x1403D1CC0
#define MapViewMap__SetZoom_x                                      0x1403D8280
#define MapViewMap__HandleLButtonDown_x                            0x1403D4DC0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F9850  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FF460
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140401480
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404032A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404026C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140406960

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A8330
#define CPacketScrambler__hton_x                                   0x1405A8320

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140537BE0
#define CSidlManagerBase__FindAnimation1_x                         0x140537B20
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140538210
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140537FC0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140536F20
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140536EB0
#define CSidlManagerBase__CreateXWnd_x                             0x1405364F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140469300
#define CSidlManager__CreateXWnd_x                                 0x1404694C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052EE70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052EF80
#define CSidlScreenWnd__ConvertToRes_x                             0x14055B650 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052F0A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052E710
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052E660
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052E930
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052F670
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052F8A0
#define CSidlScreenWnd__GetChildItem_x                             0x14052FA40
#define CSidlScreenWnd__GetSidlPiece_x                             0x14052FC60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521700 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14052FFD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140530340
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140530BF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405314A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0B288
#define CSidlScreenWnd__StoreIniInfo_x                             0x140531AC0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405322B0
#define CSidlScreenWnd__vftable_x                                  0x1407CEA70
#define CSidlScreenWnd__WndNotification_x                          0x140532300

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D0A90 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D0E90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D0DD0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1230
#define CSkillMgr__IsCombatSkill_x                                 0x1402D1270

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140540240
#define CSliderWnd__SetValue_x                                     0x140540A50
#define CSliderWnd__SetNumTicks_x                                  0x1405408D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140470810

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140549000
#define CStmlWnd__CalculateHSBRange_x                              0x1405210B0
#define CStmlWnd__CalculateVSBRange_x                              0x140549EA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054A990
#define CStmlWnd__ForceParseNow_x                                  0x14054AA30
#define CStmlWnd__GetVisibleText_x                                 0x14054B110
#define CStmlWnd__MakeStmlColorTag_x                               0x14054CEA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054CEE0
#define CStmlWnd__SetSTMLText_x                                    0x140553EC0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140554070
#define CStmlWnd__UpdateHistoryString_x                            0x140554400

// CTabWnd
#define CTabWnd__Draw_x                                            0x140545AF0
#define CTabWnd__DrawCurrentPage_x                                 0x140545B90
#define CTabWnd__DrawTab_x                                         0x140545F60
#define CTabWnd__GetTabRect_x                                      0x1405465C0
#define CTabWnd__InsertPage_x                                      0x140546890
#define CTabWnd__RemovePage_x                                      0x140546B20
#define CTabWnd__SetPage_x                                         0x140546C80
#define CTabWnd__UpdatePage_x                                      0x140546F80

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405456F0
#define CPageWnd__SetTabText_x                                     0x140545760

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D850  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DC60


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051AEF0
#define CTextureFont__DrawWrappedText1_x                           0x14051AE00
#define CTextureFont__DrawWrappedText2_x                           0x14051B020
#define CTextureFont__GetTextExtent_x                              0x14051B3D0
#define CTextureFont__GetHeight_x                                  0x14051B390

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140559DB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E110

// CXStr
#define CXStr__gFreeLists_x                                        0x140A42090
#define CXStr__gCXStrAccess_x                                      0x140C0A848

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051C930
#define CXWnd__ClrFocus_x                                          0x14051CB70
#define CXWnd__Destroy_x                                           0x14051CCB0
#define CXWnd__DoAllDrawing_x                                      0x14051CDC0
#define CXWnd__DrawColoredRect_x                                   0x14051D580
#define CXWnd__DrawTooltip_x                                       0x14051EBE0
#define CXWnd__DrawTooltipAtPoint_x                                0x14051EC90
#define CXWnd__GetChildItem_x                                      0x14051F590
#define CXWnd__GetChildWndAt_x                                     0x14051F650
#define CXWnd__GetClientClipRect_x                                 0x14051F7C0
#define CXWnd__GetRelativeRect_x                                   0x1405211F0
#define CXWnd__GetScreenClipRect_x                                 0x140521300
#define CXWnd__GetScreenRect_x                                     0x140521480
#define CXWnd__GetTooltipRect_x                                    0x140521600
#define CXWnd__IsActive_x                                          0x140521B80
#define CXWnd__IsDescendantOf_x                                    0x140521BB0
#define CXWnd__IsReallyVisible_x                                   0x140521C20
#define CXWnd__IsType_x                                            0x140521C60
#define CXWnd__Minimize_x                                          0x140521D60
#define CXWnd__ProcessTransition_x                                 0x140522D80
#define CXWnd__Refade_x                                            0x140522E80
#define CXWnd__Resize_x                                            0x140522EA0
#define CXWnd__Right_x                                             0x140522F40
#define CXWnd__SetFocus_x                                          0x1405232F0
#define CXWnd__SetFont_x                                           0x140523340
#define CXWnd__SetKeyTooltip_x                                     0x140523450
#define CXWnd__SetMouseOver_x                                      0x140523580
#define CXWnd__SetParent_x                                         0x140523600
#define CXWnd__StartFade_x                                         0x140523A50
#define CXWnd__vftable_x                                           0x1407CE188
#define CXWnd__CXWnd_x                                             0x14051B4F0
#define CXWnd__dCXWnd_x                                            0x14051BE30

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140560830

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140525250
#define CXWndManager__DrawWindows_x                                0x140525380
#define CXWndManager__GetKeyboardFlags_x                           0x140525A40
#define CXWndManager__HandleKeyboardMsg_x                          0x140525A80
#define CXWndManager__RemoveWnd_x                                  0x140528EC0

// CDBStr
#define CDBStr__GetString_x                                        0x14014F2B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B1B20

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1A40
#define CCharacterListWnd__EnterWorld_x                            0x1400A06F0
#define CCharacterListWnd__Quit_x                                  0x1400A1A20
#define CCharacterListWnd__UpdateList_x                            0x1400A2730

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140581BA0
#define ItemBase__CreateItemTagString_x                            0x1405825A0
#define ItemBase__GetImageNum_x                                    0x140584770
#define ItemBase__GetItemValue_x                                   0x140586350
#define ItemBase__IsEmpty_x                                        0x140587ED0
#define ItemBase__IsKeyRingItem_x                                  0x1405885F0
#define ItemBase__ValueSellMerchant_x                              0x14058CA00
#define ItemClient__CanDrop_x                                      0x1402609F0
#define ItemClient__CanGoInBag_x                                   0x140260B20
#define ItemClient__CreateItemClient_x                             0x140260DE0
#define ItemClient__dItemClient_x                                  0x140260850

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016E140
#define EQ_LoadingS__Array_x                                       0x140A2CA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140598060
#define PcBase__GetCombatAbility_x                                 0x1405986B0
#define PcBase__GetCombatAbilityTimer_x                            0x140598750
#define PcBase__GetItemContainedRealEstateIds_x                    0x140598E60
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405996C0
#define PcClient__AlertInventoryChanged_x                          0x140281500
#define PcClient__GetConLevel_x                                    0x1402819D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402841E0
#define PcClient__HasLoreItem_x                                    0x140285250
#define PcZoneClient__GetItemRecastTimer_x                         0x140291180
#define PcZoneClient__RemoveMyAffect_x                             0x140293840

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D3C90  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D3D00  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D3E10  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D3D70  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020ACE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149B80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F52D0
#define PlayerBase__CanSee1_x                                      0x1405F53A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F58D0
#define PlayerBase__HasProperty_x                                  0x1405F5AF0
#define PlayerBase__IsTargetable_x                                 0x1405F5BB0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F450
#define PlayerClient__GetPcClient_x                                0x1402A19E0
#define PlayerClient__PlayerClient_x                               0x140298640
#define PlayerClient__SetNameSpriteState_x                         0x1402A4E10
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5DB0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3D10
#define PlayerZoneClient__DoAttack_x                               0x1402B4A00
#define PlayerZoneClient__GetLevel_x                               0x1402B7F70
#define PlayerZoneClient__IsValidTeleport_x                        0x14020DAA0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D470

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD790  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD7C0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD870
#define PlayerManagerClient__CreatePlayer_x                        0x1402AD180
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F4F50

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265D50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265950
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402659C0
#define KeypressHandler__ClearCommandStateArray_x                  0x140265CE0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265E70
#define KeypressHandler__HandleKeyUp_x                             0x140265F50
#define KeypressHandler__SaveKeymapping_x                          0x140265BF0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AF420  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A99D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A840  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F7F0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402916E0
#define PcZoneClient__RemovePetEffect_x                            0x140293940
#define PcZoneClient__HasAlternateAbility_x                        0x140292160
#define PcZoneClient__CanEquipItem_x                               0x14028DBC0
#define PcZoneClient__GetItemByID_x                                0x140290730
#define PcZoneClient__RemoveBuffEffect_x                           0x1402936F0
#define PcZoneClient__BandolierSwap_x                              0x14028CD80
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291630

// Doors
#define EQSwitch__UseSwitch_x                                      0x140212560

// IconCache
#define IconCache__GetIcon_x                                       0x14035BA90

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140352960
#define CContainerMgr__CloseContainer_x                            0x140352320
#define CContainerMgr__OpenExperimentContainer_x                   0x140352CC0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140430510

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259310

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C4310
#define CLootWnd__RequestLootSlot_x                                0x1403C52F0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199310
#define EQ_Spell__SpellAffects_x                                   0x14019A5B0
#define EQ_Spell__SpellAffectBase_x                                0x14019A510
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA4E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA490
#define EQ_Spell__IsSPAStacking_x                                  0x14019A1D0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199D90
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199670

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092D50

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140489E90  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140489ED0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404893E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140488990

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140490F70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140146510
#define CTaskManager__GetTaskStatus_x                              0x140146620
#define CTaskManager__GetElementDescription_x                      0x1401461A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197670
#define EqSoundManager__PlayScriptMp3_x                            0x140196470
#define EqSoundManager__SoundAssistPlay_x                          0x1402D7290  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D75C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140544D50
#define CTextureAnimation__SetCurCell_x                            0x140545060

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402575F0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9610
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C9690
#define CharacterBase__IsExpansionFlag_x                           0x1401B8460

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140333CB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403345F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140335A30

// messages
#define msg_spell_worn_off_x                                       0x1401CB420
#define msg_new_text_x                                             0x1401C7250
#define __msgTokenTextParam_x                                      0x1401BF1E0
#define msgTokenText_x                                             0x1401BF100

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D8C50
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D8B70

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140603EF0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BDDE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140357C70
#define CCursorAttachment__AttachToCursor1_x                       0x1403568D0
#define CCursorAttachment__Deactivate_x                            0x140358170

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140558000
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405581F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140558200

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112F00
#define CFindItemWnd__Update_x                                     0x140113100
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E130

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BB20
#define LootFiltersManager__GetItemFilterData_x                    0x14011C630
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CED0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D180

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140413BE0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140608310
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D05F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034EF40

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CD470  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CD580  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371090
#define CGroupWnd__UpdateDisplay_x                                 0x140370E30

// ItemBase
#define ItemBase__IsLore_x                                         0x1405886C0
#define ItemBase__IsLoreEquipped_x                                 0x140588820

#define MultipleItemMoveManager__ProcessMove_x                     0x140278370

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020AE40
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020ADD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020AE10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB000

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF230
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF5E0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEA00
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEA00
#define FactionManagerClient__GetMinFaction_x                      0x1400EE8B0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D780

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA8E0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176A40
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175D40
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176860  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401767E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD350

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB000

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D3F00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140557180

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE610

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
