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

#define __ClientDate                                               20220721u
#define __ExpectedVersionDate                                     "Jul 21 2022"
#define __ExpectedVersionTime                                     "15:56:06"
#define __ActualVersionDate_x                                      0x140792C28
#define __ActualVersionTime_x                                      0x140792C18
#define __ActualVersionBuild_x                                     0x140780DD8

// Memory Protection
#define __MemChecker0_x                                            0x14026C9E0
#define __MemChecker1_x                                            0x1404FFF20
#define __MemChecker4_x                                            0x14023CBC0
#define __EncryptPad0_x                                            0x140A3B0E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B764B0
#define instEQZoneInfo_x                                           0x140B766A4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D8E90
#define __gfMaxZoomCameraDistance_x                                0x140788F40
#define __gfMaxCameraDistance_x                                    0x1407C38FC
#define __CurrentSocial_x                                          0x1408F5900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A30F70
#define g_eqCommandStates_x                                        0x140A31FD0
#define __CommandList_x                                            0x140A32210
#define __ScreenMode_x                                             0x140ABDFB4
#define __gWorld_x                                                 0x140B70C68
#define __gpbCommandEvent_x                                        0x140B70EE8
#define __ServerHost_x                                             0x140B710D8
#define __Guilds_x                                                 0x140B75060
#define __MouseEventTime_x                                         0x140BE1968
#define DI8__Mouse_Check_x                                         0x140BE65C0
#define __heqmain_x                                                0x140BE8A68
#define DI8__Mouse_x                                               0x140BE8A80
#define __HWnd_x                                                   0x140BE8A88
#define __Mouse_x                                                  0x140BE5AB8
#define DI8__Main_x                                                0x140BE5B50
#define DI8__Keyboard_x                                            0x140BE5B58
#define __LoginName_x                                              0x140BE623C
#define __CurrentMapLabel_x                                        0x140BFB7D0
#define __LabelCache_x                                             0x140BFC3E0
#define __SubscriptionType_x                                       0x140C339D0
#define Teleport_Table_Size_x                                      0x140B70F74
#define Teleport_Table_x                                           0x140B6EA40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B713F0
#define pinstActiveBanker_x                                        0x140B6E940
#define pinstActiveCorpse_x                                        0x140B6E930
#define pinstActiveGMaster_x                                       0x140B6E938
#define pinstActiveMerchant_x                                      0x140B6E928
#define pinstAltAdvManager_x                                       0x140ABEC48
#define pinstCEverQuest_x                                          0x140BE5AB0
#define pinstCamActor_x                                            0x140ABDFA0
#define pinstCDBStr_x                                              0x140ABDA50
#define pinstCDisplay_x                                            0x140B6EA30
#define pinstControlledPlayer_x                                    0x140B6E9D0
#define pinstCResolutionHandler_x                                  0x14126C570
#define pinstCSidlManager_x                                        0x140C0D450
#define pinstCXWndManager_x                                        0x140C0D440
#define instDynamicZone_x                                          0x140B74F20 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B74F6E
#define instExpeditionName_x                                       0x140B74FAE
#define pinstDZMember_x                                            0x140B75038
#define pinstDZTimerInfo_x                                         0x140B75040
#define pinstEqLogin_x                                             0x140BE5B80
#define instTribute_x                                              0x140A2C800
#define pinstEQSoundManager_x                                      0x140ABEF88
#define pinstEQSpellStrings_x                                      0x140AA2680
#define pinstSGraphicsEngine_x                                     0x14126C308
#define pinstLocalPC_x                                             0x140B6EA20
#define pinstLocalPlayer_x                                         0x140B6E920
#define pinstCMercenaryClientManager_x                             0x140BE31F8
#define pinstModelPlayer_x                                         0x140B6E950
#define pinstRenderInterface_x                                     0x14126C320
#define pinstSkillMgr_x                                            0x140BE4E90
#define pinstSpawnManager_x                                        0x140BE35C0
#define pinstSpellManager_x                                        0x140BE4FD8
#define pinstStringTable_x                                         0x140B6EA28
#define pinstSwitchManager_x                                       0x140B6E8A0
#define pinstTarget_x                                              0x140B6E9C8
#define pinstTaskMember_x                                          0x140A2C7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6E9D8
#define pinstTradeTarget_x                                         0x140B6E948
#define instTributeActive_x                                        0x140A2C829
#define pinstViewActor_x                                           0x140ABDF90
#define pinstWorldData_x                                           0x140B6EA08
#define pinstPlayerPath_x                                          0x140BE35E8
#define pinstTargetIndicator_x                                     0x140BE5088
#define EQObject_Top_x                                             0x140B6E9F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF8938
#define pinstCContainerMgr_x                                       0x140ABE0A0
#define pinstCContextMenuManager_x                                 0x140C0D3F0
#define pinstCInvSlotMgr_x                                         0x140ABE088
#define pinstCItemDisplayManager_x                                 0x140BFB3A0
#define pinstCPopupWndManager_x                                    0x140BFBC30
#define pinstCSpellDisplayMgr_x                                    0x140BFC2C0
#define pinstCTaskManager_x                                        0x1408F5C40
#define pinstEQSuiteTextureLoader_x                                0x140A44740
#define pinstItemIconCache_x                                       0x140BF8C98
#define pinstLootFiltersManager_x                                  0x140ABD468

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F7070
#define __CastRay2_x                                               0x1401F6D80
#define __ConvertItemTags_x                                        0x1401F7470
#define __CleanItemTags_x                                          0x140058F30
#define __CreateCascadeMenuItems_x                                 0x1401534E0
#define __DoesFileExist_x                                          0x140504700
#define __EQGetTime_x                                              0x1405004D0
#define __ExecuteCmd_x                                             0x1401D0DD0
#define __FixHeading_x                                             0x1406040A0
#define __FlushDxKeyboard_x                                        0x1402E8160
#define __get_bearing_x                                            0x140200390
#define __get_melee_range_x                                        0x140200480
#define __GetAnimationCache_x                                      0x14035C8C0
#define __GetGaugeValueFromEQ_x                                    0x14047AEB0
#define __GetLabelFromEQ_x                                         0x14047C4C0
#define __GetXTargetType_x                                         0x140605510   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140604120
#define __HelpPath_x                                               0x140BE1830   // Why?
#define __NewUIINI_x                                               0x140487060   // Why?
#define __ProcessGameEvents_x                                      0x140232400
#define __ProcessKeyboardEvents_x                                  0x1402E9960
#define __ProcessMouseEvents_x                                     0x140233830
#define __SaveColors_x                                             0x1401631B0
#define __STMLToText_x                                             0x14052E2A0
#define __WndProc_x                                                0x1402E68E0
#define CMemoryMappedFile__SetFile_x                               0x14073FD20
#define DrawNetStatus_x                                            0x14027A540
#define Util__FastTime_x                                           0x1405011D0
#define __eq_delete_x                                              0x14060A340
#define __eq_new_x                                                 0x14060A43C
#define __CopyLayout_x                                             0x140268E80
#define __ThrottleFrameRate_x                                      0x140222277
#define __ThrottleFrameRateEnd_x                                   0x1402222D7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F88C0
#define CAAWnd__Update_x                                           0x1402F8BC0
#define CAAWnd__UpdateSelected_x                                   0x1402F9B80

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B580
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073D70
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140770400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BDF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DED0
#define AltAdvManager__IsAbilityReady_x                            0x14016E150
#define AltAdvManager__GetAAById_x                                 0x14016D7A0
#define AltAdvManager__CanTrainAbility_x                           0x14016D5D0
#define AltAdvManager__CanSeeAbility_x                             0x14016D290

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3D00
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4AB0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4CC0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8AB0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A55B0
#define CharacterZoneClient__CastSpell_x                           0x1400A5650
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4C20
#define CharacterZoneClient__Cur_HP_x                              0x1400BA0E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA2A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8840
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFD30
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE790  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8030
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1850
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0780
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F00
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AB70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C3E0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0E80
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1A60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9F80
#define CharacterZoneClient__GetManaRegen_x                        0x1400C24F0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA190
#define CharacterZoneClient__GetModCap_x                           0x1400C9EA0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA230
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA440
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F280
#define CharacterZoneClient__HasSkill_x                            0x1400C56D0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE770
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9930
#define CharacterZoneClient__Max_Endurance_x                       0x140292E40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C70
#define CharacterZoneClient__Max_Mana_x                            0x140293030  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA130
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C50
#define CharacterZoneClient__SpellDuration_x                       0x1400B2830
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A60
#define CharacterZoneClient__UseSkill_x                            0x1400CF6F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315D30

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031FAB0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031BA80
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031AB20

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140322120

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CFFE0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140342890
#define CChatWindowManager__InitContextMenu_x                      0x140342A20
#define CChatWindowManager__FreeChatWindow_x                       0x140341AE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403497A0
#define CChatWindowManager__CreateChatWindow_x                     0x140341420

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D74C0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034A710
#define CChatWindow__Clear_x                                       0x14034B520
#define CChatWindow__WndNotification_x                             0x14034C6A0
#define CChatWindow__AddHistory_x                                  0x14034B020

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053F1A0
#define CContextMenu__RemoveMenuItem_x                             0x14053F6A0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053F670
#define CContextMenu__CheckMenuItem_x                              0x14053F4E0
#define CContextMenu__SetMenuItem_x                                0x14053F6C0
#define CContextMenu__AddSeparator_x                               0x14053F300

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053FD10
#define CContextMenuManager__RemoveMenu_x                          0x140540290
#define CContextMenuManager__PopupMenu_x                           0x140540010
#define CContextMenuManager__Flush_x                               0x14053FD90
#define CContextMenuManager__CreateDefaultMenu_x                   0x140356930

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CCCE0
#define CChatService__GetFriendName_x                              0x1405CCCF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053B390
#define CComboWnd__Draw_x                                          0x14053B480
#define CComboWnd__GetCurChoice_x                                  0x14053B750  // unused
#define CComboWnd__GetListRect_x                                   0x14053B7F0
#define CComboWnd__InsertChoice_x                                  0x14053BB10
#define CComboWnd__SetColors_x                                     0x14053BE90
#define CComboWnd__SetChoice_x                                     0x14053BE50
#define CComboWnd__GetItemCount_x                                  0x14053B7E0
#define CComboWnd__GetCurChoiceText_x                              0x14053B790  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053B720
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053BBC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403549B0
#define CContainerWnd__SetContainer_x                              0x140355750
#define CContainerWnd__vftable_x                                   0x1407A0948

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABDD34
#define CDisplay__ZoneMainUI_x                                     0x140556A80
#define CDisplay__PreZoneMainUI_x                                  0x140160100
#define CDisplay__CleanGameUI_x                                    0x1401525E0
#define CDisplay__GetClickedActor_x                                0x140156770
#define CDisplay__GetUserDefinedColor_x                            0x140157250
#define CDisplay__InitCharSelectUI_x                               0x140157500
#define CDisplay__ReloadUI_x                                       0x140162460
#define CDisplay__WriteTextHD2_x                                   0x1401693B0
#define CDisplay__TrueDistance_x                                   0x140169090
#define CDisplay__SetViewActor_x                                   0x1401659A0
#define CDisplay__GetFloorHeight_x                                 0x1401569D0
#define CDisplay__ToggleScreenshotMode_x                           0x140168B90
#define CDisplay__RealRender_World_x                               0x1401617F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140561F90
#define CEditWnd__DrawCaret_x                                      0x140542BD0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140543060
#define CEditWnd__GetCaretPt_x                                     0x1405432E0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140543320
#define CEditWnd__GetDisplayString_x                               0x140543580
#define CEditWnd__GetHorzOffset_x                                  0x1405437C0
#define CEditWnd__GetLineForPrintableChar_x                        0x140543900
#define CEditWnd__GetSelStartPt_x                                  0x140543BE0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140543A30
#define CEditWnd__PointFromPrintableChar_x                         0x140544790
#define CEditWnd__ReplaceSelection_x                               0x140544B30
#define CEditWnd__SelectableCharFromPoint_x                        0x140544FD0
#define CEditWnd__SetEditable_x                                    0x140545260
#define CEditWnd__SetWindowText_x                                  0x140545290

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140223620
#define CEverQuest__ClickedPlayer_x                                0x1402199A0
#define CEverQuest__CreateTargetIndicator_x                        0x14021A100
#define CEverQuest__DoTellWindow_x                                 0x1400D71D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7A90 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140224B20
#define CEverQuest__dsp_chat_x                                     0x1400D6CF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024E090
#define CEverQuest__Emote_x                                        0x140225480
#define CEverQuest__GetBodyTypeDesc_x                              0x1402261F0
#define CEverQuest__GetClassDesc_x                                 0x140226250
#define CEverQuest__GetClassThreeLetterCode_x                      0x140226620
#define CEverQuest__GetDeityDesc_x                                 0x1402269D0
#define CEverQuest__GetLangDesc_x                                  0x140226E00
#define CEverQuest__GetRaceDesc_x                                  0x1402271A0
#define CEverQuest__InterpretCmd_x                                 0x140228890
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023D240
#define CEverQuest__LMouseUp_x                                     0x14022A2D0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023ABE0
#define CEverQuest__RMouseUp_x                                     0x1402343B0
#define CEverQuest__SetGameState_x                                 0x14023F4F0
#define CEverQuest__UPCNotificationFlush_x                         0x140244BA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229F50
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402356E0
#define CEverQuest__ReportSuccessfulHit_x                          0x140236420

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140366C10

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094460
#define CGuild__GetGuildName_x                                     0x1400944A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140383330

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025EC60
#define CHotButton__SetCheck_x                                     0x14025EEF0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140392220
#define CInvSlotMgr__MoveItem_x                                    0x140392370
#define CInvSlotMgr__SelectSlot_x                                  0x140393D40

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038FEA0
#define CInvSlot__SliderComplete_x                                 0x1403910D0
#define CInvSlot__GetItemBase_x                                    0x14038C4D0
#define CInvSlot__UpdateItem_x                                     0x140391520

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403943A0
#define CInvSlotWnd__HandleLButtonUp_x                             0x140394EF0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B48F0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B7200
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B17C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B2E60
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B3D40

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140477B90
#define CSpellDisplayWnd__UpdateStrings_x                          0x140479760

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AF970

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403ADF60

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117490

// CLabel
#define CLabel__UpdateText_x                                       0x1403BE5C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140512350
#define CListWnd__dCListWnd_x                                      0x140512790
#define CListWnd__vftable_x                                        0x1407CF3E0
#define CListWnd__AddColumn_x                                      0x140512E30
#define CListWnd__AddColumn1_x                                     0x140512ED0
#define CListWnd__AddLine_x                                        0x140513030
#define CListWnd__AddString_x                                      0x1405135B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140513CA0
#define CListWnd__CalculateVSBRange_x                              0x140513F80
#define CListWnd__ClearSel_x                                       0x140514130
#define CListWnd__ClearAllSel_x                                    0x1405140D0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140514190
#define CListWnd__Compare_x                                        0x140514350
#define CListWnd__Draw_x                                           0x140514820
#define CListWnd__DrawColumnSeparators_x                           0x1405153C0
#define CListWnd__DrawHeader_x                                     0x140515480
#define CListWnd__DrawItem_x                                       0x140515B40
#define CListWnd__DrawLine_x                                       0x1405164B0
#define CListWnd__DrawSeparator_x                                  0x140516970
#define CListWnd__EnableLine_x                                     0x140516D90
#define CListWnd__EnsureVisible_x                                  0x140516DF0
#define CListWnd__ExtendSel_x                                      0x140516EF0
#define CListWnd__GetColumnMinWidth_x                              0x140517220
#define CListWnd__GetColumnWidth_x                                 0x1405172A0
#define CListWnd__GetCurSel_x                                      0x1405173A0
#define CListWnd__GetItemData_x                                    0x140517720
#define CListWnd__GetItemHeight_x                                  0x140517760
#define CListWnd__GetItemRect_x                                    0x140517920
#define CListWnd__GetItemText_x                                    0x140517BC0
#define CListWnd__GetSelList_x                                     0x140517E10
#define CListWnd__GetSeparatorRect_x                               0x140518000
#define CListWnd__InsertLine_x                                     0x140519470
#define CListWnd__RemoveLine_x                                     0x140519A90
#define CListWnd__SetColors_x                                      0x140519E60
#define CListWnd__SetColumnJustification_x                         0x140519E80
#define CListWnd__SetColumnLabel_x                                 0x140519F00
#define CListWnd__SetColumnWidth_x                                 0x14051A0A0
#define CListWnd__SetCurSel_x                                      0x14051A170
#define CListWnd__SetItemColor_x                                   0x14051A3E0
#define CListWnd__SetItemData_x                                    0x14051A480
#define CListWnd__SetItemText_x                                    0x14051A6C0
#define CListWnd__Sort_x                                           0x14051AAD0
#define CListWnd__ToggleSel_x                                      0x14051AC40
#define CListWnd__SetColumnsSizable_x                              0x14051A0F0
#define CListWnd__SetItemWnd_x                                     0x14051A7F0
#define CListWnd__GetItemWnd_x                                     0x140517DA0
#define CListWnd__SetItemIcon_x                                    0x14051A4C0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140513A70
#define CListWnd__SetVScrollPos_x                                  0x14051AA30

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D1030

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407ABFC0
#define MapViewMap__Clear_x                                        0x1403D2BA0
#define MapViewMap__SetZoom_x                                      0x1403D9160
#define MapViewMap__HandleLButtonDown_x                            0x1403D5CA0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FA710  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404003B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404023D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404041D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404035F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140407890

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A94B0
#define CPacketScrambler__hton_x                                   0x1405A94A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140538A70
#define CSidlManagerBase__FindAnimation1_x                         0x1405389B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405390A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140538E50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140537DC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140537D50
#define CSidlManagerBase__CreateXWnd_x                             0x1405373C0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046A380
#define CSidlManager__CreateXWnd_x                                 0x14046A540

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052FD10
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052FE30
#define CSidlScreenWnd__ConvertToRes_x                             0x14055C540 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052FF60
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052F5B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052F500
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052F7D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140530530
#define CSidlScreenWnd__EnableIniStorage_x                         0x140530760
#define CSidlScreenWnd__GetChildItem_x                             0x140530900
#define CSidlScreenWnd__GetSidlPiece_x                             0x140530B20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140522510 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140530E90
#define CSidlScreenWnd__LoadIniInfo_x                              0x140531200
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140531AC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140532370
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0D298
#define CSidlScreenWnd__StoreIniInfo_x                             0x140532990
#define CSidlScreenWnd__StoreIniVis_x                              0x140533180
#define CSidlScreenWnd__vftable_x                                  0x1407D0440
#define CSidlScreenWnd__WndNotification_x                          0x1405331D0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D1090 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D1490 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D13D0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1830
#define CSkillMgr__IsCombatSkill_x                                 0x1402D1870

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140487080
#define CSliderWnd__SetValue_x                                     0x140541850
#define CSliderWnd__SetNumTicks_x                                  0x1405416D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140471840

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140549F00
#define CStmlWnd__CalculateHSBRange_x                              0x140521EE0
#define CStmlWnd__CalculateVSBRange_x                              0x14054ADB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054B8A0
#define CStmlWnd__ForceParseNow_x                                  0x14054B940
#define CStmlWnd__GetVisibleText_x                                 0x14054C020
#define CStmlWnd__MakeStmlColorTag_x                               0x14054DDB0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054DDF0
#define CStmlWnd__SetSTMLText_x                                    0x140554DC0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140554F70
#define CStmlWnd__UpdateHistoryString_x                            0x140555300

// CTabWnd
#define CTabWnd__Draw_x                                            0x140546A00
#define CTabWnd__DrawCurrentPage_x                                 0x140546AA0
#define CTabWnd__DrawTab_x                                         0x140546E70
#define CTabWnd__GetTabRect_x                                      0x1405474D0
#define CTabWnd__InsertPage_x                                      0x1405477A0
#define CTabWnd__RemovePage_x                                      0x140547A20
#define CTabWnd__SetPage_x                                         0x140547B80
#define CTabWnd__UpdatePage_x                                      0x140547E80

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140546420
#define CPageWnd__SetTabText_x                                     0x140546490

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D9C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DDD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051BD90
#define CTextureFont__DrawWrappedText1_x                           0x14051BCA0
#define CTextureFont__DrawWrappedText2_x                           0x14051BEC0
#define CTextureFont__GetTextExtent_x                              0x14051C270
#define CTextureFont__GetHeight_x                                  0x14051C230

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055ACA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050EFC0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A440C0
#define CXStr__gCXStrAccess_x                                      0x140C0C858

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051D7C0
#define CXWnd__ClrFocus_x                                          0x14051DA00
#define CXWnd__Destroy_x                                           0x14051DB40
#define CXWnd__DoAllDrawing_x                                      0x14051DC50
#define CXWnd__DrawColoredRect_x                                   0x14051E400
#define CXWnd__DrawTooltip_x                                       0x14051FA60
#define CXWnd__DrawTooltipAtPoint_x                                0x14051FB10
#define CXWnd__GetChildItem_x                                      0x140520400
#define CXWnd__GetChildWndAt_x                                     0x1405204C0
#define CXWnd__GetClientClipRect_x                                 0x140520610
#define CXWnd__GetRelativeRect_x                                   0x140522000
#define CXWnd__GetScreenClipRect_x                                 0x140522110
#define CXWnd__GetScreenRect_x                                     0x140522290
#define CXWnd__GetTooltipRect_x                                    0x140522410
#define CXWnd__IsActive_x                                          0x140522990
#define CXWnd__IsDescendantOf_x                                    0x1405229C0
#define CXWnd__IsReallyVisible_x                                   0x140522A30
#define CXWnd__IsType_x                                            0x140522A70
#define CXWnd__Minimize_x                                          0x140522B70
#define CXWnd__ProcessTransition_x                                 0x140523BC0
#define CXWnd__Refade_x                                            0x140523CC0
#define CXWnd__Resize_x                                            0x140523CE0
#define CXWnd__Right_x                                             0x140523D80
#define CXWnd__SetFocus_x                                          0x140524130
#define CXWnd__SetFont_x                                           0x140524180
#define CXWnd__SetKeyTooltip_x                                     0x140524280
#define CXWnd__SetMouseOver_x                                      0x1405243B0
#define CXWnd__SetParent_x                                         0x140524430
#define CXWnd__StartFade_x                                         0x140524870
#define CXWnd__vftable_x                                           0x1407CFB58
#define CXWnd__CXWnd_x                                             0x14051C390
#define CXWnd__dCXWnd_x                                            0x14051CCB0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140561710

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x1405260B0
#define CXWndManager__DrawWindows_x                                0x1405261E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405268A0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405268E0
#define CXWndManager__RemoveWnd_x                                  0x140529D10

// CDBStr
#define CDBStr__GetString_x                                        0x1401507E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B2CB0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1B80
#define CCharacterListWnd__EnterWorld_x                            0x1400A0830
#define CCharacterListWnd__Quit_x                                  0x1400A1B60
#define CCharacterListWnd__UpdateList_x                            0x1400A2870

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140582A60
#define ItemBase__CreateItemTagString_x                            0x140583450
#define ItemBase__GetImageNum_x                                    0x140585640
#define ItemBase__GetItemValue_x                                   0x140587540
#define ItemBase__IsEmpty_x                                        0x140589050
#define ItemBase__IsKeyRingItem_x                                  0x140589760
#define ItemBase__ValueSellMerchant_x                              0x14058DAB0
#define ItemClient__CanDrop_x                                      0x140261040
#define ItemClient__CanGoInBag_x                                   0x140261170
#define ItemClient__CreateItemClient_x                             0x140261430
#define ItemClient__dItemClient_x                                  0x140260EA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F670
#define EQ_LoadingS__Array_x                                       0x140A2EA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140599310
#define PcBase__GetCombatAbility_x                                 0x140599960
#define PcBase__GetCombatAbilityTimer_x                            0x140599A00
#define PcBase__GetItemContainedRealEstateIds_x                    0x14059A110
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14059A970
#define PcClient__AlertInventoryChanged_x                          0x140281B20
#define PcClient__GetConLevel_x                                    0x140281FF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140284810
#define PcClient__HasLoreItem_x                                    0x140285890
#define PcZoneClient__GetItemRecastTimer_x                         0x1402917E0
#define PcZoneClient__RemoveMyAffect_x                             0x140293E90

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D5450  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D54C0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D55D0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D5530  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020B4D0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B100

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F6A90
#define PlayerBase__CanSee1_x                                      0x1405F6B60
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F7090
#define PlayerBase__HasProperty_x                                  0x1405F72B0
#define PlayerBase__IsTargetable_x                                 0x1405F7370
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029FAA0
#define PlayerClient__GetPcClient_x                                0x1402A2030
#define PlayerClient__PlayerClient_x                               0x140298C90
#define PlayerClient__SetNameSpriteState_x                         0x1402A5460
#define PlayerClient__SetNameSpriteTint_x                          0x1402A6400
#define PlayerZoneClient__ChangeHeight_x                           0x1402B4350
#define PlayerZoneClient__DoAttack_x                               0x1402B5040
#define PlayerZoneClient__GetLevel_x                               0x1402B85B0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020E280
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E9A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402ADDD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402ADE00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402ADEB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402AD7C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F6710

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402663C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265FC0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140266030
#define KeypressHandler__ClearCommandStateArray_x                  0x140266350  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402664E0
#define KeypressHandler__HandleKeyUp_x                             0x1402665C0
#define KeypressHandler__SaveKeymapping_x                          0x140266260  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B05A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405AAB50

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028AEB0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028FE50
#define PcZoneClient__GetPcSkillLimit_x                            0x140291D40
#define PcZoneClient__RemovePetEffect_x                            0x140293F90
#define PcZoneClient__HasAlternateAbility_x                        0x1402927B0
#define PcZoneClient__CanEquipItem_x                               0x14028E220
#define PcZoneClient__GetItemByID_x                                0x140290D90
#define PcZoneClient__RemoveBuffEffect_x                           0x140293D40
#define PcZoneClient__BandolierSwap_x                              0x14028D3E0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291C90

// Doors
#define EQSwitch__UseSwitch_x                                      0x140212D40

// IconCache
#define IconCache__GetIcon_x                                       0x14035C8F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140353790
#define CContainerMgr__CloseContainer_x                            0x140353150
#define CContainerMgr__OpenExperimentContainer_x                   0x140353AF0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140431600

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402599C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C5220
#define CLootWnd__RequestLootSlot_x                                0x1403C6200

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A7C0
#define EQ_Spell__SpellAffects_x                                   0x14019BA60
#define EQ_Spell__SpellAffectBase_x                                0x14019B9C0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA620
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA5D0
#define EQ_Spell__IsSPAStacking_x                                  0x14019B680
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B240
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019AB20

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092E90

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048AE30  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048AE70
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048A380
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140489930

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140491F00  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147AA0
#define CTaskManager__GetTaskStatus_x                              0x140147BB0
#define CTaskManager__GetElementDescription_x                      0x140147730

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198B20
#define EqSoundManager__PlayScriptMp3_x                            0x140197920
#define EqSoundManager__SoundAssistPlay_x                          0x1402D7890  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7BC0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140545A90
#define CTextureAnimation__SetCurCell_x                            0x140545DA0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257C80

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405CA800
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405CA880
#define CharacterBase__IsExpansionFlag_x                           0x1401B9C80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140334AF0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140335430
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140336870

// messages
#define msg_spell_worn_off_x                                       0x1401CCBF0
#define msg_new_text_x                                             0x1401C8A30
#define __msgTokenTextParam_x                                      0x1401C09E0
#define msgTokenText_x                                             0x1401C0900

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9250
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D9170

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406058F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BED00

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140358AB0
#define CCursorAttachment__AttachToCursor1_x                       0x140357700
#define CCursorAttachment__Deactivate_x                            0x140358FB0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140558EF0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405590E0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405590F0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113040
#define CFindItemWnd__Update_x                                     0x140113240
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E280

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BC30
#define LootFiltersManager__GetItemFilterData_x                    0x14011C750
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CFF0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D2A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140414B00

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140609CB0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0BF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034FD60

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CE660  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CE770  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371E60
#define CGroupWnd__UpdateDisplay_x                                 0x140371C00

// ItemBase
#define ItemBase__IsLore_x                                         0x140589830
#define ItemBase__IsLoreEquipped_x                                 0x140589990

#define MultipleItemMoveManager__ProcessMove_x                     0x140278990

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020B630
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020B5C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020B600

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB600

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF390
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF740
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB60
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB60
#define FactionManagerClient__GetMinFaction_x                      0x1400EEA10

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D8F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA50

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177F60
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177260
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177D80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177D00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD950

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB600

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D56C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140558070

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056160

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EEC20

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D690

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
