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

#define __ClientDate                                               20220606u
#define __ExpectedVersionDate                                     "Jun  6 2022"
#define __ExpectedVersionTime                                     "13:13:49"
#define __ActualVersionDate_x                                      0x140792380
#define __ActualVersionTime_x                                      0x140792370
#define __ActualVersionBuild_x                                     0x140780588

// Memory Protection
#define __MemChecker0_x                                            0x14026C0D0
#define __MemChecker1_x                                            0x1404FF510
#define __MemChecker4_x                                            0x14023C160
#define __EncryptPad0_x                                            0x140A3A0B0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B75490
#define instEQZoneInfo_x                                           0x140B75684 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D71A0
#define __gfMaxZoomCameraDistance_x                                0x1407886C0
#define __gfMaxCameraDistance_x                                    0x1407C306C
#define __CurrentSocial_x                                          0x1408F4900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2FF70
#define g_eqCommandStates_x                                        0x140A30FD0
#define __CommandList_x                                            0x140A31210
#define __ScreenMode_x                                             0x140ABCF7C
#define __gWorld_x                                                 0x140B6FC48
#define __gpbCommandEvent_x                                        0x140B6FEC8
#define __ServerHost_x                                             0x140B700B8
#define __Guilds_x                                                 0x140B74040
#define __MouseEventTime_x                                         0x140BE0948
#define DI8__Mouse_Check_x                                         0x140BE55A0
#define __heqmain_x                                                0x140BE7A48
#define DI8__Mouse_x                                               0x140BE7A60
#define __HWnd_x                                                   0x140BE7A68
#define __Mouse_x                                                  0x140BE4A98
#define DI8__Main_x                                                0x140BE4B30
#define DI8__Keyboard_x                                            0x140BE4B38
#define __LoginName_x                                              0x140BE521C
#define __CurrentMapLabel_x                                        0x140BFA7B0
#define __LabelCache_x                                             0x140BFB3C0
#define __SubscriptionType_x                                       0x140C329C0
#define Teleport_Table_Size_x                                      0x140B6FF54
#define Teleport_Table_x                                           0x140B6DA10

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B703D0
#define pinstActiveBanker_x                                        0x140B6D920
#define pinstActiveCorpse_x                                        0x140B6D910
#define pinstActiveGMaster_x                                       0x140B6D918
#define pinstActiveMerchant_x                                      0x140B6D908
#define pinstAltAdvManager_x                                       0x140ABDC28
#define pinstCEverQuest_x                                          0x140BE4A90
#define pinstCamActor_x                                            0x140ABCF68
#define pinstCDBStr_x                                              0x140ABCA30
#define pinstCDisplay_x                                            0x140B6FA10
#define pinstControlledPlayer_x                                    0x140B6D9B0
#define pinstCResolutionHandler_x                                  0x14126B560
#define pinstCSidlManager_x                                        0x140C0C440
#define pinstCXWndManager_x                                        0x140C0C430
#define instDynamicZone_x                                          0x140B73F00 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B73F4E
#define instExpeditionName_x                                       0x140B73F8E
#define pinstDZMember_x                                            0x140B74018
#define pinstDZTimerInfo_x                                         0x140B74020
#define pinstEqLogin_x                                             0x140BE4B60
#define instTribute_x                                              0x140A2B700
#define pinstEQSoundManager_x                                      0x140ABDF68
#define pinstEQSpellStrings_x                                      0x140AA1660
#define pinstSGraphicsEngine_x                                     0x14126B2F8
#define pinstLocalPC_x                                             0x140B6D9F8
#define pinstLocalPlayer_x                                         0x140B6D900
#define pinstCMercenaryClientManager_x                             0x140BE21D8
#define pinstModelPlayer_x                                         0x140B6D930
#define pinstRenderInterface_x                                     0x14126B310
#define pinstSkillMgr_x                                            0x140BE3E70
#define pinstSpawnManager_x                                        0x140BE25A0
#define pinstSpellManager_x                                        0x140BE3FB8
#define pinstStringTable_x                                         0x140B6DA08
#define pinstSwitchManager_x                                       0x140B6D880
#define pinstTarget_x                                              0x140B6D9A8
#define pinstTaskMember_x                                          0x140A2B6F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6D9B8
#define pinstTradeTarget_x                                         0x140B6D928
#define instTributeActive_x                                        0x140A2B729
#define pinstViewActor_x                                           0x140ABCF60
#define pinstWorldData_x                                           0x140B6D9F0
#define pinstPlayerPath_x                                          0x140BE25C8
#define pinstTargetIndicator_x                                     0x140BE4068
#define EQObject_Top_x                                             0x140B6D9D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF7918
#define pinstCContainerMgr_x                                       0x140ABD050
#define pinstCContextMenuManager_x                                 0x140C0C3E0
#define pinstCInvSlotMgr_x                                         0x140ABD028
#define pinstCItemDisplayManager_x                                 0x140BFA380
#define pinstCPopupWndManager_x                                    0x140BFAC10
#define pinstCSpellDisplayMgr_x                                    0x140BFB2A0
#define pinstCTaskManager_x                                        0x1408F4B40
#define pinstEQSuiteTextureLoader_x                                0x140A43720
#define pinstItemIconCache_x                                       0x140BF7C78
#define pinstLootFiltersManager_x                                  0x140ABC448

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6840
#define __CastRay2_x                                               0x1401F6550
#define __ConvertItemTags_x                                        0x1401F6C40
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140151FE0
#define __DoesFileExist_x                                          0x140503CB0
#define __EQGetTime_x                                              0x1404FFAC0
#define __ExecuteCmd_x                                             0x1401CF3C0
#define __FixHeading_x                                             0x140603310
#define __FlushDxKeyboard_x                                        0x1402E78C0
#define __get_bearing_x                                            0x1401FF940
#define __get_melee_range_x                                        0x1401FFA30
#define __GetAnimationCache_x                                      0x14035C1C0
#define __GetGaugeValueFromEQ_x                                    0x14047A230
#define __GetLabelFromEQ_x                                         0x14047B840
#define __GetXTargetType_x                                         0x140604780   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140603390
#define __HelpPath_x                                               0x140BE0810   // Why?
#define __NewUIINI_x                                               0x140486410   // Why?
#define __ProcessGameEvents_x                                      0x1402319D0
#define __ProcessKeyboardEvents_x                                  0x1402E9070
#define __ProcessMouseEvents_x                                     0x140232DE0
#define __SaveColors_x                                             0x140161CB0
#define __STMLToText_x                                             0x14052D6F0
#define __WndProc_x                                                0x1402E6030
#define CMemoryMappedFile__SetFile_x                               0x14073EFE0
#define DrawNetStatus_x                                            0x140279C70
#define Util__FastTime_x                                           0x1405007C0
#define __eq_delete_x                                              0x140609600
#define __eq_new_x                                                 0x1406096FC
#define __CopyLayout_x                                             0x140268590
#define __ThrottleFrameRate_x                                      0x140221847
#define __ThrottleFrameRateEnd_x                                   0x1402218A7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F82D0
#define CAAWnd__Update_x                                           0x1402F85D0
#define CAAWnd__UpdateSelected_x                                   0x1402F9590

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B680
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073FF0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407703F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BEF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016C9D0
#define AltAdvManager__IsAbilityReady_x                            0x14016CC50
#define AltAdvManager__GetAAById_x                                 0x14016C2A0
#define AltAdvManager__CanTrainAbility_x                           0x14016C0D0
#define AltAdvManager__CanSeeAbility_x                             0x14016BD90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3D60
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B10
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D20
#define CharacterZoneClient__CanUseItem_x                          0x1400B8B10
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5610
#define CharacterZoneClient__CastSpell_x                           0x1400A56B0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4C80
#define CharacterZoneClient__Cur_HP_x                              0x1400BA140
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA300
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A88A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFD90
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE770  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8090
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C18B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C07E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F60
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009ABE0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C450
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0EE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9DF0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1AC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FE0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2550
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1F0
#define CharacterZoneClient__GetModCap_x                           0x1400C9ED0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA290
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA4A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F2F0
#define CharacterZoneClient__HasSkill_x                            0x1400C5700
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE7D0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9960
#define CharacterZoneClient__Max_Endurance_x                       0x140292530  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9CA0
#define CharacterZoneClient__Max_Mana_x                            0x140292720  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA110
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1CB0
#define CharacterZoneClient__SpellDuration_x                       0x1400B2890
#define CharacterZoneClient__TotalEffect_x                         0x1400B3AC0
#define CharacterZoneClient__UseSkill_x                            0x1400CF6D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315620

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031F3B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031B380
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031A420

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140321A20

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CF7A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403421C0
#define CChatWindowManager__InitContextMenu_x                      0x140342350
#define CChatWindowManager__FreeChatWindow_x                       0x140341410
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403490E0
#define CChatWindowManager__CreateChatWindow_x                     0x140340D50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D74C0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034A050
#define CChatWindow__Clear_x                                       0x14034AE60
#define CChatWindow__WndNotification_x                             0x14034BFE0
#define CChatWindow__AddHistory_x                                  0x14034A960

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E6B0
#define CContextMenu__RemoveMenuItem_x                             0x14053EBC0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053EB90
#define CContextMenu__CheckMenuItem_x                              0x14053EA00
#define CContextMenu__SetMenuItem_x                                0x14053EBE0
#define CContextMenu__AddSeparator_x                               0x14053E810

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053F230
#define CContextMenuManager__RemoveMenu_x                          0x14053F7A0
#define CContextMenuManager__PopupMenu_x                           0x14053F520
#define CContextMenuManager__Flush_x                               0x14053F2B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140356230

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CC0A0
#define CChatService__GetFriendName_x                              0x1405CC0B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053A830
#define CComboWnd__Draw_x                                          0x14053A930
#define CComboWnd__GetCurChoice_x                                  0x14053AC10  // unused
#define CComboWnd__GetListRect_x                                   0x14053ACB0
#define CComboWnd__InsertChoice_x                                  0x14053AFF0
#define CComboWnd__SetColors_x                                     0x14053B380
#define CComboWnd__SetChoice_x                                     0x14053B340
#define CComboWnd__GetItemCount_x                                  0x14053ACA0
#define CComboWnd__GetCurChoiceText_x                              0x14053AC50  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053ABE0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053B0B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403542B0
#define CContainerWnd__SetContainer_x                              0x140355050
#define CContainerWnd__vftable_x                                   0x1407A00B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABCCF4
#define CDisplay__ZoneMainUI_x                                     0x140555E50
#define CDisplay__PreZoneMainUI_x                                  0x14015EC00
#define CDisplay__CleanGameUI_x                                    0x1401510E0
#define CDisplay__GetClickedActor_x                                0x140155270
#define CDisplay__GetUserDefinedColor_x                            0x140155D50
#define CDisplay__InitCharSelectUI_x                               0x140156000
#define CDisplay__ReloadUI_x                                       0x140160F60
#define CDisplay__WriteTextHD2_x                                   0x140167EB0
#define CDisplay__TrueDistance_x                                   0x140167B90
#define CDisplay__SetViewActor_x                                   0x1401644A0
#define CDisplay__GetFloorHeight_x                                 0x1401554D0
#define CDisplay__ToggleScreenshotMode_x                           0x140167690
#define CDisplay__RealRender_World_x                               0x1401602F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140561370
#define CEditWnd__DrawCaret_x                                      0x1405420E0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140542590
#define CEditWnd__GetCaretPt_x                                     0x140542810  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140542850
#define CEditWnd__GetDisplayString_x                               0x140542AC0
#define CEditWnd__GetHorzOffset_x                                  0x140542D00
#define CEditWnd__GetLineForPrintableChar_x                        0x140542E50
#define CEditWnd__GetSelStartPt_x                                  0x140543130  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140542F80
#define CEditWnd__PointFromPrintableChar_x                         0x140543CE0
#define CEditWnd__ReplaceSelection_x                               0x140544090
#define CEditWnd__SelectableCharFromPoint_x                        0x140544530
#define CEditWnd__SetEditable_x                                    0x1405447C0
#define CEditWnd__SetWindowText_x                                  0x1405447F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222BF0
#define CEverQuest__ClickedPlayer_x                                0x140218F70
#define CEverQuest__CreateTargetIndicator_x                        0x1402196D0
#define CEverQuest__DoTellWindow_x                                 0x1400D71D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7A90 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402240F0
#define CEverQuest__dsp_chat_x                                     0x1400D6CF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D630
#define CEverQuest__Emote_x                                        0x140224A50
#define CEverQuest__GetBodyTypeDesc_x                              0x1402257C0
#define CEverQuest__GetClassDesc_x                                 0x140225820
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225BF0
#define CEverQuest__GetDeityDesc_x                                 0x140225FA0
#define CEverQuest__GetLangDesc_x                                  0x1402263D0
#define CEverQuest__GetRaceDesc_x                                  0x140226770
#define CEverQuest__InterpretCmd_x                                 0x140227E60
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023C7E0
#define CEverQuest__LMouseUp_x                                     0x1402298A0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A180
#define CEverQuest__RMouseUp_x                                     0x140233950
#define CEverQuest__SetGameState_x                                 0x14023EA90
#define CEverQuest__UPCNotificationFlush_x                         0x140244140 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229520
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234C80
#define CEverQuest__ReportSuccessfulHit_x                          0x1402359C0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140366500

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400944E0
#define CGuild__GetGuildName_x                                     0x140094520

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140382C10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E350
#define CHotButton__SetCheck_x                                     0x14025E5E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140391B20
#define CInvSlotMgr__MoveItem_x                                    0x140391C70
#define CInvSlotMgr__SelectSlot_x                                  0x140393640

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F790
#define CInvSlot__SliderComplete_x                                 0x1403909C0
#define CInvSlot__GetItemBase_x                                    0x14038BDC0
#define CInvSlot__UpdateItem_x                                     0x140390E20

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140393CA0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403947F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B3EF0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B67C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0E00
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B2480
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B3340

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140476F10
#define CSpellDisplayWnd__UpdateStrings_x                          0x140478AE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AEF10

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AD5B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117460

// CLabel
#define CLabel__UpdateText_x                                       0x1403BDB80

// CListWnd
#define CListWnd__CListWnd_x                                       0x140511900
#define CListWnd__dCListWnd_x                                      0x140511D40
#define CListWnd__vftable_x                                        0x1407CEBA0
#define CListWnd__AddColumn_x                                      0x1405123E0
#define CListWnd__AddColumn1_x                                     0x140512480
#define CListWnd__AddLine_x                                        0x1405125E0
#define CListWnd__AddString_x                                      0x140512B60
#define CListWnd__CalculateFirstVisibleLine_x                      0x140513250
#define CListWnd__CalculateVSBRange_x                              0x140513530
#define CListWnd__ClearSel_x                                       0x1405136E0
#define CListWnd__ClearAllSel_x                                    0x140513680
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140513740
#define CListWnd__Compare_x                                        0x140513900
#define CListWnd__Draw_x                                           0x140513DD0
#define CListWnd__DrawColumnSeparators_x                           0x140514970
#define CListWnd__DrawHeader_x                                     0x140514A30
#define CListWnd__DrawItem_x                                       0x1405150F0
#define CListWnd__DrawLine_x                                       0x140515A70
#define CListWnd__DrawSeparator_x                                  0x140515F30
#define CListWnd__EnableLine_x                                     0x140516350
#define CListWnd__EnsureVisible_x                                  0x1405163B0
#define CListWnd__ExtendSel_x                                      0x1405164B0
#define CListWnd__GetColumnMinWidth_x                              0x1405167E0
#define CListWnd__GetColumnWidth_x                                 0x140516860
#define CListWnd__GetCurSel_x                                      0x140516960
#define CListWnd__GetItemData_x                                    0x140516CE0
#define CListWnd__GetItemHeight_x                                  0x140516D20
#define CListWnd__GetItemRect_x                                    0x140516EE0
#define CListWnd__GetItemText_x                                    0x140517180
#define CListWnd__GetSelList_x                                     0x1405173D0
#define CListWnd__GetSeparatorRect_x                               0x1405175C0
#define CListWnd__InsertLine_x                                     0x140518A30
#define CListWnd__RemoveLine_x                                     0x140519050
#define CListWnd__SetColors_x                                      0x140519420
#define CListWnd__SetColumnJustification_x                         0x140519440
#define CListWnd__SetColumnLabel_x                                 0x1405194C0
#define CListWnd__SetColumnWidth_x                                 0x140519660
#define CListWnd__SetCurSel_x                                      0x140519730
#define CListWnd__SetItemColor_x                                   0x1405199A0
#define CListWnd__SetItemData_x                                    0x140519A40
#define CListWnd__SetItemText_x                                    0x140519C80
#define CListWnd__Sort_x                                           0x14051A090
#define CListWnd__ToggleSel_x                                      0x14051A200
#define CListWnd__SetColumnsSizable_x                              0x1405196B0
#define CListWnd__SetItemWnd_x                                     0x140519DB0
#define CListWnd__GetItemWnd_x                                     0x140517360
#define CListWnd__SetItemIcon_x                                    0x140519A80
#define CListWnd__CalculateCustomWindowPositions_x                 0x140513020
#define CListWnd__SetVScrollPos_x                                  0x140519FF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D05F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AB730
#define MapViewMap__Clear_x                                        0x1403D2170
#define MapViewMap__SetZoom_x                                      0x1403D8730
#define MapViewMap__HandleLButtonDown_x                            0x1403D5270

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F9C90  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FF8B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404018D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404036E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140402B00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140406DB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A88E0
#define CPacketScrambler__hton_x                                   0x1405A88D0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140537F10
#define CSidlManagerBase__FindAnimation1_x                         0x140537E50
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140538540
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405382F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140537260
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405371F0
#define CSidlManagerBase__CreateXWnd_x                             0x140536860

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404696D0
#define CSidlManager__CreateXWnd_x                                 0x140469890

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052F1C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052F2F0
#define CSidlScreenWnd__ConvertToRes_x                             0x14055B910 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052F420
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052EA60
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052E9B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052EC80
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052F9F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052FC20
#define CSidlScreenWnd__GetChildItem_x                             0x14052FDC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14052FFE0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521B40 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140530350
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405306C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140530F60
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140531810
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0C288
#define CSidlScreenWnd__StoreIniInfo_x                             0x140531E40
#define CSidlScreenWnd__StoreIniVis_x                              0x140532630
#define CSidlScreenWnd__vftable_x                                  0x1407CFC00
#define CSidlScreenWnd__WndNotification_x                          0x140532680

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D07E0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D0BE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D0B20
#define CSkillMgr__IsActivatedSkill_x                              0x1402D0F80
#define CSkillMgr__IsCombatSkill_x                                 0x1402D0FC0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140486480
#define CSliderWnd__SetValue_x                                     0x140540D60
#define CSliderWnd__SetNumTicks_x                                  0x140540BE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140470BB0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405492A0
#define CStmlWnd__CalculateHSBRange_x                              0x140521510
#define CStmlWnd__CalculateVSBRange_x                              0x14054A150
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054AC50
#define CStmlWnd__ForceParseNow_x                                  0x14054ACF0
#define CStmlWnd__GetVisibleText_x                                 0x14054B3D0
#define CStmlWnd__MakeStmlColorTag_x                               0x14054D160
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054D1A0
#define CStmlWnd__SetSTMLText_x                                    0x140554180
#define CStmlWnd__StripFirstSTMLLines_x                            0x140554330
#define CStmlWnd__UpdateHistoryString_x                            0x1405546C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140545D90
#define CTabWnd__DrawCurrentPage_x                                 0x140545E30
#define CTabWnd__DrawTab_x                                         0x140546200
#define CTabWnd__GetTabRect_x                                      0x140546860
#define CTabWnd__InsertPage_x                                      0x140546B30
#define CTabWnd__RemovePage_x                                      0x140546DC0
#define CTabWnd__SetPage_x                                         0x140546F20
#define CTabWnd__UpdatePage_x                                      0x140547220

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140545990
#define CPageWnd__SetTabText_x                                     0x140545A00

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DA30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DE40


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051B350
#define CTextureFont__DrawWrappedText1_x                           0x14051B260
#define CTextureFont__DrawWrappedText2_x                           0x14051B480
#define CTextureFont__GetTextExtent_x                              0x14051B830
#define CTextureFont__GetHeight_x                                  0x14051B7F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055A070

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E570

// CXStr
#define CXStr__gFreeLists_x                                        0x140A43090
#define CXStr__gCXStrAccess_x                                      0x140C0B848

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051CD70
#define CXWnd__ClrFocus_x                                          0x14051CFB0
#define CXWnd__Destroy_x                                           0x14051D0F0
#define CXWnd__DoAllDrawing_x                                      0x14051D1F0
#define CXWnd__DrawColoredRect_x                                   0x14051D9B0
#define CXWnd__DrawTooltip_x                                       0x14051F030
#define CXWnd__DrawTooltipAtPoint_x                                0x14051F0E0
#define CXWnd__GetChildItem_x                                      0x14051F9E0
#define CXWnd__GetChildWndAt_x                                     0x14051FAA0
#define CXWnd__GetClientClipRect_x                                 0x14051FC10
#define CXWnd__GetRelativeRect_x                                   0x140521640
#define CXWnd__GetScreenClipRect_x                                 0x140521750
#define CXWnd__GetScreenRect_x                                     0x1405218C0
#define CXWnd__GetTooltipRect_x                                    0x140521A40
#define CXWnd__IsActive_x                                          0x140521FC0
#define CXWnd__IsDescendantOf_x                                    0x140521FF0
#define CXWnd__IsReallyVisible_x                                   0x140522060
#define CXWnd__IsType_x                                            0x1405220A0
#define CXWnd__Minimize_x                                          0x1405221A0
#define CXWnd__ProcessTransition_x                                 0x1405231D0
#define CXWnd__Refade_x                                            0x1405232D0
#define CXWnd__Resize_x                                            0x1405232F0
#define CXWnd__Right_x                                             0x140523390
#define CXWnd__SetFocus_x                                          0x140523730
#define CXWnd__SetFont_x                                           0x140523780
#define CXWnd__SetKeyTooltip_x                                     0x140523880
#define CXWnd__SetMouseOver_x                                      0x1405239B0
#define CXWnd__SetParent_x                                         0x140523A30
#define CXWnd__StartFade_x                                         0x140523E60
#define CXWnd__vftable_x                                           0x1407CF318
#define CXWnd__CXWnd_x                                             0x14051B950
#define CXWnd__dCXWnd_x                                            0x14051C270

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140560AF0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140525670
#define CXWndManager__DrawWindows_x                                0x1405257A0
#define CXWndManager__GetKeyboardFlags_x                           0x140525E60
#define CXWndManager__HandleKeyboardMsg_x                          0x140525EA0
#define CXWndManager__RemoveWnd_x                                  0x140529230

// CDBStr
#define CDBStr__GetString_x                                        0x14014F2E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B20E0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1BF0
#define CCharacterListWnd__EnterWorld_x                            0x1400A08A0
#define CCharacterListWnd__Quit_x                                  0x1400A1BD0
#define CCharacterListWnd__UpdateList_x                            0x1400A28E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140581E80
#define ItemBase__CreateItemTagString_x                            0x140582880
#define ItemBase__GetImageNum_x                                    0x140584A80
#define ItemBase__GetItemValue_x                                   0x140586980
#define ItemBase__IsEmpty_x                                        0x1405884E0
#define ItemBase__IsKeyRingItem_x                                  0x140588C00
#define ItemBase__ValueSellMerchant_x                              0x14058CFA0
#define ItemClient__CanDrop_x                                      0x140260730
#define ItemClient__CanGoInBag_x                                   0x140260860
#define ItemClient__CreateItemClient_x                             0x140260B20
#define ItemClient__dItemClient_x                                  0x140260590

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016E170
#define EQ_LoadingS__Array_x                                       0x140A2DA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140598610
#define PcBase__GetCombatAbility_x                                 0x140598C60
#define PcBase__GetCombatAbilityTimer_x                            0x140598D00
#define PcBase__GetItemContainedRealEstateIds_x                    0x140599410
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140599C70
#define PcClient__AlertInventoryChanged_x                          0x140281250
#define PcClient__GetConLevel_x                                    0x140281720  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140283F30
#define PcClient__HasLoreItem_x                                    0x140284FC0
#define PcZoneClient__GetItemRecastTimer_x                         0x140290ED0
#define PcZoneClient__RemoveMyAffect_x                             0x140293580

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D3A40  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D3AB0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D3BC0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D3B20  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020AA90  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149BC0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F5880
#define PlayerBase__CanSee1_x                                      0x1405F5950
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F5E80
#define PlayerBase__HasProperty_x                                  0x1405F60A0
#define PlayerBase__IsTargetable_x                                 0x1405F6160
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F1A0
#define PlayerClient__GetPcClient_x                                0x1402A1730
#define PlayerClient__PlayerClient_x                               0x140298380
#define PlayerClient__SetNameSpriteState_x                         0x1402A4B60
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5B00
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3A70
#define PlayerZoneClient__DoAttack_x                               0x1402B4760
#define PlayerZoneClient__GetLevel_x                               0x1402B7CD0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020D850
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D4A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD4F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD520  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD5D0
#define PlayerManagerClient__CreatePlayer_x                        0x1402ACEE0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F5500

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265AD0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402656D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265740
#define KeypressHandler__ClearCommandStateArray_x                  0x140265A60  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265BF0
#define KeypressHandler__HandleKeyUp_x                             0x140265CD0
#define KeypressHandler__SaveKeymapping_x                          0x140265970  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AF9D0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A9F80

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A5A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F550
#define PcZoneClient__GetPcSkillLimit_x                            0x140291430
#define PcZoneClient__RemovePetEffect_x                            0x140293680
#define PcZoneClient__HasAlternateAbility_x                        0x140291EA0
#define PcZoneClient__CanEquipItem_x                               0x14028D920
#define PcZoneClient__GetItemByID_x                                0x140290490
#define PcZoneClient__RemoveBuffEffect_x                           0x140293430
#define PcZoneClient__BandolierSwap_x                              0x14028CAE0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291380

// Doors
#define EQSwitch__UseSwitch_x                                      0x140212310

// IconCache
#define IconCache__GetIcon_x                                       0x14035C1F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140353090
#define CContainerMgr__CloseContainer_x                            0x140352A50
#define CContainerMgr__OpenExperimentContainer_x                   0x1403533F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140430960

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402590A0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C47E0
#define CLootWnd__RequestLootSlot_x                                0x1403C57C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401991F0
#define EQ_Spell__SpellAffects_x                                   0x14019A490
#define EQ_Spell__SpellAffectBase_x                                0x14019A3F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA680
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA630
#define EQ_Spell__IsSPAStacking_x                                  0x14019A0B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199C70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199550

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092F10

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048A240  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048A280
#define CTargetWnd__RefreshTargetBuffs_x                           0x140489790
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140488D40

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140491300  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140146580
#define CTaskManager__GetTaskStatus_x                              0x140146690
#define CTaskManager__GetElementDescription_x                      0x140146210

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197550
#define EqSoundManager__PlayScriptMp3_x                            0x140196350
#define EqSoundManager__SoundAssistPlay_x                          0x1402D6FE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7310  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140544FF0
#define CTextureAnimation__SetCurCell_x                            0x140545300

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257380

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9BC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C9C40
#define CharacterBase__IsExpansionFlag_x                           0x1401B8240

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403343F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140334D30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140336170

// messages
#define msg_spell_worn_off_x                                       0x1401CB1D0
#define msg_new_text_x                                             0x1401C7000
#define __msgTokenTextParam_x                                      0x1401BEFA0
#define msgTokenText_x                                             0x1401BEEC0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D89A0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D88C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140604B60

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BE2B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403583B0
#define CCursorAttachment__AttachToCursor1_x                       0x140357000
#define CCursorAttachment__Deactivate_x                            0x1403588B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405582C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405584B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405584C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113000
#define CFindItemWnd__Update_x                                     0x140113200
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E270

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BC20
#define LootFiltersManager__GetItemFilterData_x                    0x14011C740
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CFE0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D290

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140414030

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140608F70
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0340

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034F680

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CDA20  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CDB30  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371760
#define CGroupWnd__UpdateDisplay_x                                 0x140371500

// ItemBase
#define ItemBase__IsLore_x                                         0x140588CD0
#define ItemBase__IsLoreEquipped_x                                 0x140588E30

#define MultipleItemMoveManager__ProcessMove_x                     0x1402780C0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020ABF0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020AB80
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020ABC0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAD50

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF3B0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF760
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB80
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB80
#define FactionManagerClient__GetMinFaction_x                      0x1400EEA30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D970

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA70

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176A50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175D50
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176870  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401767F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD0A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAD50

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D3CB0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140557440

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE650

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
