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

#define __ClientDate                                               20220826u
#define __ExpectedVersionDate                                     "Aug 26 2022"
#define __ExpectedVersionTime                                     "07:41:52"
#define __ActualVersionDate_x                                      0x140795C08
#define __ActualVersionTime_x                                      0x140795BF8
#define __ActualVersionBuild_x                                     0x140783DA8

// Memory Protection
#define __MemChecker0_x                                            0x14026D2D0
#define __MemChecker1_x                                            0x1405024D0
#define __MemChecker4_x                                            0x14023D500
#define __EncryptPad0_x                                            0x140A3F0D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7A4D0
#define instEQZoneInfo_x                                           0x140B7A6C4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D9410
#define __gfMaxZoomCameraDistance_x                                0x14078BF40
#define __gfMaxCameraDistance_x                                    0x1407C68DC
#define __CurrentSocial_x                                          0x1408F9900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A34F70
#define g_eqCommandStates_x                                        0x140A35FD0
#define __CommandList_x                                            0x140A36210
#define __ScreenMode_x                                             0x140AC1FFC
#define __gWorld_x                                                 0x140B74A60
#define __gpbCommandEvent_x                                        0x140B74F10
#define __ServerHost_x                                             0x140B750F8
#define __Guilds_x                                                 0x140B79080
#define __MouseEventTime_x                                         0x140BE5988
#define DI8__Mouse_Check_x                                         0x140BEA5E0
#define __heqmain_x                                                0x140BECA88
#define DI8__Mouse_x                                               0x140BECAA0
#define __HWnd_x                                                   0x140BECAA8
#define __Mouse_x                                                  0x140BE9AD8
#define DI8__Main_x                                                0x140BE9B70
#define DI8__Keyboard_x                                            0x140BE9B78
#define __LoginName_x                                              0x140BEA25C
#define __CurrentMapLabel_x                                        0x140BFF7F0
#define __LabelCache_x                                             0x140C00400
#define __SubscriptionType_x                                       0x140C379F0
#define Teleport_Table_Size_x                                      0x140B74F18
#define Teleport_Table_x                                           0x140B72A60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B75410
#define pinstActiveBanker_x                                        0x140B72968
#define pinstActiveCorpse_x                                        0x140B72958
#define pinstActiveGMaster_x                                       0x140B72960
#define pinstActiveMerchant_x                                      0x140B72950
#define pinstAltAdvManager_x                                       0x140AC2C68
#define pinstCEverQuest_x                                          0x140BE9AD0
#define pinstCamActor_x                                            0x140AC1FE8
#define pinstCDBStr_x                                              0x140AC1A70
#define pinstCDisplay_x                                            0x140B72A58
#define pinstControlledPlayer_x                                    0x140B729F8
#define pinstCResolutionHandler_x                                  0x141270590
#define pinstCSidlManager_x                                        0x140C11470
#define pinstCXWndManager_x                                        0x140C11460
#define instDynamicZone_x                                          0x140B78F40 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B78F8E
#define instExpeditionName_x                                       0x140B78FCE
#define pinstDZMember_x                                            0x140B79058
#define pinstDZTimerInfo_x                                         0x140B79060
#define pinstEqLogin_x                                             0x140BE9BA0
#define instTribute_x                                              0x140A30800
#define pinstEQSoundManager_x                                      0x140AC2FA8
#define pinstEQSpellStrings_x                                      0x140AA66A0
#define pinstSGraphicsEngine_x                                     0x141270328
#define pinstLocalPC_x                                             0x140B72A48
#define pinstLocalPlayer_x                                         0x140B72948
#define pinstCMercenaryClientManager_x                             0x140BE7218
#define pinstModelPlayer_x                                         0x140B72978
#define pinstRenderInterface_x                                     0x141270340
#define pinstSkillMgr_x                                            0x140BE8EB0
#define pinstSpawnManager_x                                        0x140BE75E0
#define pinstSpellManager_x                                        0x140BE8FF8
#define pinstStringTable_x                                         0x140B72A50
#define pinstSwitchManager_x                                       0x140B728C0
#define pinstTarget_x                                              0x140B729F0
#define pinstTaskMember_x                                          0x140A307F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B72A00
#define pinstTradeTarget_x                                         0x140B72970
#define instTributeActive_x                                        0x140A30829
#define pinstViewActor_x                                           0x140AC1FE0
#define pinstWorldData_x                                           0x140B72A28
#define pinstPlayerPath_x                                          0x140BE7608
#define pinstTargetIndicator_x                                     0x140BE90A8
#define EQObject_Top_x                                             0x140B72A20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFC958
#define pinstCContainerMgr_x                                       0x140AC1AD8
#define pinstCContextMenuManager_x                                 0x140C11410
#define pinstCInvSlotMgr_x                                         0x140AC1AC0
#define pinstCItemDisplayManager_x                                 0x140BFF3C0
#define pinstCPopupWndManager_x                                    0x140BFFC50
#define pinstCSpellDisplayMgr_x                                    0x140C002E0
#define pinstCTaskManager_x                                        0x1408F9C40
#define pinstEQSuiteTextureLoader_x                                0x140A48730
#define pinstItemIconCache_x                                       0x140BFCCB8
#define pinstLootFiltersManager_x                                  0x140AC1488

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F7940
#define __CastRay2_x                                               0x1401F7650
#define __ConvertItemTags_x                                        0x1401F7D40
#define __CleanItemTags_x                                          0x140058F30
#define __CreateCascadeMenuItems_x                                 0x140153400
#define __DoesFileExist_x                                          0x140506CB0
#define __EQGetTime_x                                              0x140502A80
#define __ExecuteCmd_x                                             0x1401D1370
#define __FixHeading_x                                             0x140606380
#define __FlushDxKeyboard_x                                        0x1402E89C0
#define __get_bearing_x                                            0x140200C60
#define __get_melee_range_x                                        0x140200D50
#define __GetAnimationCache_x                                      0x14035D650
#define __GetGaugeValueFromEQ_x                                    0x14047C260
#define __GetLabelFromEQ_x                                         0x14047D810
#define __GetXTargetType_x                                         0x1406077F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140606400
#define __HelpPath_x                                               0x140BE5850   // Why?
#define __NewUIINI_x                                               0x1404883C0   // Why?
#define __ProcessGameEvents_x                                      0x140232D40
#define __ProcessKeyboardEvents_x                                  0x1402EA1C0
#define __ProcessMouseEvents_x                                     0x140234170
#define __SaveColors_x                                             0x1401630B0
#define __STMLToText_x                                             0x140530830
#define __WndProc_x                                                0x1402E7140
#define CMemoryMappedFile__SetFile_x                               0x140742020
#define DrawNetStatus_x                                            0x14027AE30
#define Util__FastTime_x                                           0x140503780
#define __eq_delete_x                                              0x14060C630
#define __eq_new_x                                                 0x14060C72C
#define __CopyLayout_x                                             0x140269770
#define __ThrottleFrameRate_x                                      0x140222BD1
#define __ThrottleFrameRateEnd_x                                   0x140222C31

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F9390
#define CAAWnd__Update_x                                           0x1402F9690
#define CAAWnd__UpdateSelected_x                                   0x1402FA650

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B560
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073D70
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407733F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BDD0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DDC0
#define AltAdvManager__IsAbilityReady_x                            0x14016E040
#define AltAdvManager__GetAAById_x                                 0x14016D690
#define AltAdvManager__CanTrainAbility_x                           0x14016D4C0
#define AltAdvManager__CanSeeAbility_x                             0x14016D180

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3BB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4960
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4B70
#define CharacterZoneClient__CanUseItem_x                          0x1400B8990
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5460
#define CharacterZoneClient__CastSpell_x                           0x1400A5500
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4B00
#define CharacterZoneClient__Cur_HP_x                              0x1400B9FC0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA180
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8720
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFC10
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE670  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9C10
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7F10
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1730
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0660
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9DE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA20
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C290
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0D60
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9C70
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1940
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E60
#define CharacterZoneClient__GetManaRegen_x                        0x1400C23D0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA070
#define CharacterZoneClient__GetModCap_x                           0x1400C9D80
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA110
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA320
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F130
#define CharacterZoneClient__HasSkill_x                            0x1400C55B0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE640
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9810
#define CharacterZoneClient__Max_Endurance_x                       0x140293700  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B50
#define CharacterZoneClient__Max_Mana_x                            0x1402938F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA010
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B30
#define CharacterZoneClient__SpellDuration_x                       0x1400B2710
#define CharacterZoneClient__TotalEffect_x                         0x1400B3940
#define CharacterZoneClient__UseSkill_x                            0x1400CF5D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403167D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403208E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031C880
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031B920

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140322F60

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D2FC0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403436B0
#define CChatWindowManager__InitContextMenu_x                      0x140343840
#define CChatWindowManager__FreeChatWindow_x                       0x140342900
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034A5D0
#define CChatWindowManager__CreateChatWindow_x                     0x140342240

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D73B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034B530
#define CChatWindow__Clear_x                                       0x14034C340
#define CChatWindow__WndNotification_x                             0x14034D4B0
#define CChatWindow__AddHistory_x                                  0x14034BE40

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140541730
#define CContextMenu__RemoveMenuItem_x                             0x140541C40
#define CContextMenu__RemoveAllMenuItems_x                         0x140541C10
#define CContextMenu__CheckMenuItem_x                              0x140541A80
#define CContextMenu__SetMenuItem_x                                0x140541C60
#define CContextMenu__AddSeparator_x                               0x140541890

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405422B0
#define CContextMenuManager__RemoveMenu_x                          0x140542820
#define CContextMenuManager__PopupMenu_x                           0x1405425A0
#define CContextMenuManager__Flush_x                               0x140542330
#define CContextMenuManager__CreateDefaultMenu_x                   0x140357700

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140589FE0
#define CChatService__GetFriendName_x                              0x1405CEB70

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053D900
#define CComboWnd__Draw_x                                          0x14053DA00
#define CComboWnd__GetCurChoice_x                                  0x14053DCD0  // unused
#define CComboWnd__GetListRect_x                                   0x14053DD70
#define CComboWnd__InsertChoice_x                                  0x14053E0A0
#define CComboWnd__SetColors_x                                     0x14053E430
#define CComboWnd__SetChoice_x                                     0x14053E3F0
#define CComboWnd__GetItemCount_x                                  0x14053DD60
#define CComboWnd__GetCurChoiceText_x                              0x14053DD10  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053DCA0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053E160

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140355790
#define CContainerWnd__SetContainer_x                              0x140356530
#define CContainerWnd__vftable_x                                   0x1407A3928

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC1D64
#define CDisplay__ZoneMainUI_x                                     0x140558E50
#define CDisplay__PreZoneMainUI_x                                  0x140160000
#define CDisplay__CleanGameUI_x                                    0x140152500
#define CDisplay__GetClickedActor_x                                0x140156690
#define CDisplay__GetUserDefinedColor_x                            0x140157170
#define CDisplay__InitCharSelectUI_x                               0x140157420
#define CDisplay__ReloadUI_x                                       0x140162360
#define CDisplay__WriteTextHD2_x                                   0x1401692B0
#define CDisplay__TrueDistance_x                                   0x140168F90
#define CDisplay__SetViewActor_x                                   0x1401658A0
#define CDisplay__GetFloorHeight_x                                 0x1401568F0
#define CDisplay__ToggleScreenshotMode_x                           0x140168A90
#define CDisplay__RealRender_World_x                               0x1401616F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140564360
#define CEditWnd__DrawCaret_x                                      0x140545160  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140545600
#define CEditWnd__GetCaretPt_x                                     0x140545880  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405458C0
#define CEditWnd__GetDisplayString_x                               0x140545B30
#define CEditWnd__GetHorzOffset_x                                  0x140545D60
#define CEditWnd__GetLineForPrintableChar_x                        0x140545EB0
#define CEditWnd__GetSelStartPt_x                                  0x140546190  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140545FE0
#define CEditWnd__PointFromPrintableChar_x                         0x140546D40
#define CEditWnd__ReplaceSelection_x                               0x1405470F0
#define CEditWnd__SelectableCharFromPoint_x                        0x140547590
#define CEditWnd__SetEditable_x                                    0x140547810
#define CEditWnd__SetWindowText_x                                  0x140547840

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140223F80
#define CEverQuest__ClickedPlayer_x                                0x14021A2D0
#define CEverQuest__CreateTargetIndicator_x                        0x14021AA30
#define CEverQuest__DoTellWindow_x                                 0x1400D70C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7980 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140225480
#define CEverQuest__dsp_chat_x                                     0x1400D6BE0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024E9D0
#define CEverQuest__Emote_x                                        0x140225DE0
#define CEverQuest__GetBodyTypeDesc_x                              0x140226B50
#define CEverQuest__GetClassDesc_x                                 0x140226BB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140226F80
#define CEverQuest__GetDeityDesc_x                                 0x140227330
#define CEverQuest__GetLangDesc_x                                  0x140227760
#define CEverQuest__GetRaceDesc_x                                  0x140227B00
#define CEverQuest__InterpretCmd_x                                 0x1402291F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023DB80
#define CEverQuest__LMouseUp_x                                     0x14022AC30
#define CEverQuest__RightClickedOnPlayer_x                         0x14023B520
#define CEverQuest__RMouseUp_x                                     0x140234CF0
#define CEverQuest__SetGameState_x                                 0x14023FE30
#define CEverQuest__UPCNotificationFlush_x                         0x1402454E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022A8B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140236020
#define CEverQuest__ReportSuccessfulHit_x                          0x140236D60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140367980

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094300
#define CGuild__GetGuildName_x                                     0x140094340

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140384270

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025F550
#define CHotButton__SetCheck_x                                     0x14025F7E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403936A0
#define CInvSlotMgr__MoveItem_x                                    0x1403937F0
#define CInvSlotMgr__SelectSlot_x                                  0x1403951E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140391310
#define CInvSlot__SliderComplete_x                                 0x140392540
#define CInvSlot__GetItemBase_x                                    0x14038D3F0
#define CInvSlot__UpdateItem_x                                     0x140392990

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140395830
#define CInvSlotWnd__HandleLButtonUp_x                             0x140396380

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B5DD0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B86D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B2C60
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B4300
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B5210

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140478F40
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047AB10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B1F00

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AF410

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117380

// CLabel
#define CLabel__UpdateText_x                                       0x1403BFA90

// CListWnd
#define CListWnd__CListWnd_x                                       0x140514900
#define CListWnd__dCListWnd_x                                      0x140514D40
#define CListWnd__vftable_x                                        0x1407D23C0
#define CListWnd__AddColumn_x                                      0x1405153E0
#define CListWnd__AddColumn1_x                                     0x140515480
#define CListWnd__AddLine_x                                        0x1405155E0
#define CListWnd__AddString_x                                      0x140515B60
#define CListWnd__CalculateFirstVisibleLine_x                      0x140516250
#define CListWnd__CalculateVSBRange_x                              0x140516530
#define CListWnd__ClearSel_x                                       0x1405166E0
#define CListWnd__ClearAllSel_x                                    0x140516680
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140516740
#define CListWnd__Compare_x                                        0x1405168F0
#define CListWnd__Draw_x                                           0x140516DC0
#define CListWnd__DrawColumnSeparators_x                           0x140517960
#define CListWnd__DrawHeader_x                                     0x140517A20
#define CListWnd__DrawItem_x                                       0x1405180E0
#define CListWnd__DrawLine_x                                       0x140518A60
#define CListWnd__DrawSeparator_x                                  0x140518F20
#define CListWnd__EnableLine_x                                     0x140519340
#define CListWnd__EnsureVisible_x                                  0x1405193A0
#define CListWnd__ExtendSel_x                                      0x1405194A0
#define CListWnd__GetColumnMinWidth_x                              0x1405197D0
#define CListWnd__GetColumnWidth_x                                 0x140519850
#define CListWnd__GetCurSel_x                                      0x140519950
#define CListWnd__GetItemData_x                                    0x140519CD0
#define CListWnd__GetItemHeight_x                                  0x140519D10
#define CListWnd__GetItemRect_x                                    0x140519ED0
#define CListWnd__GetItemText_x                                    0x14051A170
#define CListWnd__GetSelList_x                                     0x14051A3C0
#define CListWnd__GetSeparatorRect_x                               0x14051A5B0
#define CListWnd__InsertLine_x                                     0x14051BA20
#define CListWnd__RemoveLine_x                                     0x14051C030
#define CListWnd__SetColors_x                                      0x14051C400
#define CListWnd__SetColumnJustification_x                         0x14051C420
#define CListWnd__SetColumnLabel_x                                 0x14051C4A0
#define CListWnd__SetColumnWidth_x                                 0x14051C640
#define CListWnd__SetCurSel_x                                      0x14051C710
#define CListWnd__SetItemColor_x                                   0x14051C980
#define CListWnd__SetItemData_x                                    0x14051CA20
#define CListWnd__SetItemText_x                                    0x14051CC60
#define CListWnd__Sort_x                                           0x14051D070
#define CListWnd__ToggleSel_x                                      0x14051D1E0
#define CListWnd__SetColumnsSizable_x                              0x14051C690
#define CListWnd__SetItemWnd_x                                     0x14051CD90
#define CListWnd__GetItemWnd_x                                     0x14051A350
#define CListWnd__SetItemIcon_x                                    0x14051CA60
#define CListWnd__CalculateCustomWindowPositions_x                 0x140516020
#define CListWnd__SetVScrollPos_x                                  0x14051CFD0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D24F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AEFA0
#define MapViewMap__Clear_x                                        0x1403D4070
#define MapViewMap__SetZoom_x                                      0x1403DA630
#define MapViewMap__HandleLButtonDown_x                            0x1403D7170

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FBBE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140401880
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404038A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404056A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140404AC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140408D50

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405AB7A0
#define CPacketScrambler__hton_x                                   0x1405AB790

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14053AFD0
#define CSidlManagerBase__FindAnimation1_x                         0x14053AF10
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14053B600
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14053B3B0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053A310
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053A2A0
#define CSidlManagerBase__CreateXWnd_x                             0x1405398E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046B720
#define CSidlManager__CreateXWnd_x                                 0x14046B8E0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405322A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405323C0
#define CSidlScreenWnd__ConvertToRes_x                             0x14055E910 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405324E0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140531B40
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140531A90
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140531D60
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140532AB0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140532CE0
#define CSidlScreenWnd__GetChildItem_x                             0x140532E70
#define CSidlScreenWnd__GetSidlPiece_x                             0x140533090
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140524AE0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140533400
#define CSidlScreenWnd__LoadIniInfo_x                              0x140533770
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140534000
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405348B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C112B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140534EC0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405356A0
#define CSidlScreenWnd__vftable_x                                  0x1407D3420
#define CSidlScreenWnd__WndNotification_x                          0x1405356F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D1910 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D1D10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D1C50
#define CSkillMgr__IsActivatedSkill_x                              0x1402D20B0
#define CSkillMgr__IsCombatSkill_x                                 0x1402D20F0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140488430
#define CSliderWnd__SetValue_x                                     0x140543DE0
#define CSliderWnd__SetNumTicks_x                                  0x140543C60

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140472C00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14054C2F0
#define CStmlWnd__CalculateHSBRange_x                              0x140524490
#define CStmlWnd__CalculateVSBRange_x                              0x14054D190
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054DC80
#define CStmlWnd__ForceParseNow_x                                  0x14054DD20
#define CStmlWnd__GetVisibleText_x                                 0x14054E400
#define CStmlWnd__MakeStmlColorTag_x                               0x140550180
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405501C0
#define CStmlWnd__SetSTMLText_x                                    0x1405571A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140557350
#define CStmlWnd__UpdateHistoryString_x                            0x1405576E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140548DE0
#define CTabWnd__DrawCurrentPage_x                                 0x140548E80
#define CTabWnd__DrawTab_x                                         0x140549250
#define CTabWnd__GetTabRect_x                                      0x1405498B0
#define CTabWnd__InsertPage_x                                      0x140549B80
#define CTabWnd__RemovePage_x                                      0x140549E10
#define CTabWnd__SetPage_x                                         0x140549F70
#define CTabWnd__UpdatePage_x                                      0x14054A270

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405489E0
#define CPageWnd__SetTabText_x                                     0x140548A50

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D850  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DC60


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051E330
#define CTextureFont__DrawWrappedText1_x                           0x14051E240
#define CTextureFont__DrawWrappedText2_x                           0x14051E460
#define CTextureFont__GetTextExtent_x                              0x14051E810
#define CTextureFont__GetHeight_x                                  0x14051E7D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055D070

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140511570

// CXStr
#define CXStr__gFreeLists_x                                        0x140A480B0
#define CXStr__gCXStrAccess_x                                      0x140C10878

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051FD60
#define CXWnd__ClrFocus_x                                          0x14051FFA0
#define CXWnd__Destroy_x                                           0x1405200E0
#define CXWnd__DoAllDrawing_x                                      0x1405201E0
#define CXWnd__DrawColoredRect_x                                   0x1405209A0
#define CXWnd__DrawTooltip_x                                       0x140522010
#define CXWnd__DrawTooltipAtPoint_x                                0x1405220C0
#define CXWnd__GetChildItem_x                                      0x1405229C0
#define CXWnd__GetChildWndAt_x                                     0x140522A80
#define CXWnd__GetClientClipRect_x                                 0x140522BE0
#define CXWnd__GetRelativeRect_x                                   0x1405245D0
#define CXWnd__GetScreenClipRect_x                                 0x1405246E0
#define CXWnd__GetScreenRect_x                                     0x140524860
#define CXWnd__GetTooltipRect_x                                    0x1405249E0
#define CXWnd__IsActive_x                                          0x140524F60
#define CXWnd__IsDescendantOf_x                                    0x140524F90
#define CXWnd__IsReallyVisible_x                                   0x140524FF0
#define CXWnd__IsType_x                                            0x140525030
#define CXWnd__Minimize_x                                          0x140525130
#define CXWnd__ProcessTransition_x                                 0x140526150
#define CXWnd__Refade_x                                            0x140526250
#define CXWnd__Resize_x                                            0x140526270
#define CXWnd__Right_x                                             0x140526310
#define CXWnd__SetFocus_x                                          0x1405266D0
#define CXWnd__SetFont_x                                           0x140526720
#define CXWnd__SetKeyTooltip_x                                     0x140526810
#define CXWnd__SetMouseOver_x                                      0x140526950
#define CXWnd__SetParent_x                                         0x1405269D0
#define CXWnd__StartFade_x                                         0x140526E10
#define CXWnd__vftable_x                                           0x1407D2B38
#define CXWnd__CXWnd_x                                             0x14051E930
#define CXWnd__dCXWnd_x                                            0x14051F240

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140563AE0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140528640
#define CXWndManager__DrawWindows_x                                0x140528770
#define CXWndManager__GetKeyboardFlags_x                           0x140528E30
#define CXWndManager__HandleKeyboardMsg_x                          0x140528E70
#define CXWndManager__RemoveWnd_x                                  0x14052C2B0

// CDBStr
#define CDBStr__GetString_x                                        0x140150700

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B4AF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1A30
#define CCharacterListWnd__EnterWorld_x                            0x1400A06E0
#define CCharacterListWnd__Quit_x                                  0x1400A1A10
#define CCharacterListWnd__UpdateList_x                            0x1400A2720

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140584E30
#define ItemBase__CreateItemTagString_x                            0x140585820
#define ItemBase__GetImageNum_x                                    0x1405879E0
#define ItemBase__GetItemValue_x                                   0x1405895C0
#define ItemBase__IsEmpty_x                                        0x14058B120
#define ItemBase__IsKeyRingItem_x                                  0x14058B830
#define ItemBase__ValueSellMerchant_x                              0x14058FC00
#define ItemClient__CanDrop_x                                      0x140261930
#define ItemClient__CanGoInBag_x                                   0x140261A60
#define ItemClient__CreateItemClient_x                             0x140261D20
#define ItemClient__dItemClient_x                                  0x140261790

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F560
#define EQ_LoadingS__Array_x                                       0x140A32A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14059B4A0
#define PcBase__GetCombatAbility_x                                 0x14059BAF0
#define PcBase__GetCombatAbilityTimer_x                            0x14059BB90
#define PcBase__GetItemContainedRealEstateIds_x                    0x14059C2A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14059CB00
#define PcClient__AlertInventoryChanged_x                          0x140282410
#define PcClient__GetConLevel_x                                    0x1402828E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402850F0
#define PcClient__HasLoreItem_x                                    0x140286160
#define PcZoneClient__GetItemRecastTimer_x                         0x1402920A0
#define PcZoneClient__RemoveMyAffect_x                             0x140294750

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D59D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D5A40  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D5B50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D5AB0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020BDD0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B030

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F8900
#define PlayerBase__CanSee1_x                                      0x1405F89D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F8F00
#define PlayerBase__HasProperty_x                                  0x1405F9120
#define PlayerBase__IsTargetable_x                                 0x1405F91E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A0360
#define PlayerClient__GetPcClient_x                                0x1402A28F0
#define PlayerClient__PlayerClient_x                               0x140299550
#define PlayerClient__SetNameSpriteState_x                         0x1402A5D20
#define PlayerClient__SetNameSpriteTint_x                          0x1402A6CC0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B4C00
#define PlayerZoneClient__DoAttack_x                               0x1402B58F0
#define PlayerZoneClient__GetLevel_x                               0x1402B8E60
#define PlayerZoneClient__IsValidTeleport_x                        0x14020EB90
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E8A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AE680  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AE6B0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AE760
#define PlayerManagerClient__CreatePlayer_x                        0x1402AE070
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F8580

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140266CB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402668B0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140266920
#define KeypressHandler__ClearCommandStateArray_x                  0x140266C40  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140266DD0
#define KeypressHandler__HandleKeyUp_x                             0x140266EB0
#define KeypressHandler__SaveKeymapping_x                          0x140266B50  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B23E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405ACE40

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028B770  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140290710
#define PcZoneClient__GetPcSkillLimit_x                            0x140292600
#define PcZoneClient__RemovePetEffect_x                            0x140294850
#define PcZoneClient__HasAlternateAbility_x                        0x140293070
#define PcZoneClient__CanEquipItem_x                               0x14028EAE0
#define PcZoneClient__GetItemByID_x                                0x140291650
#define PcZoneClient__RemoveBuffEffect_x                           0x140294600
#define PcZoneClient__BandolierSwap_x                              0x14028DCA0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140292550

// Doors
#define EQSwitch__UseSwitch_x                                      0x140213650

// IconCache
#define IconCache__GetIcon_x                                       0x14035D680

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140354570
#define CContainerMgr__CloseContainer_x                            0x140353F30
#define CContainerMgr__OpenExperimentContainer_x                   0x1403548D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140432A80

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025A2D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C66F0
#define CLootWnd__RequestLootSlot_x                                0x1403C76D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A650
#define EQ_Spell__SpellAffects_x                                   0x14019B8F0
#define EQ_Spell__SpellAffectBase_x                                0x14019B850
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA500
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA4B0
#define EQ_Spell__IsSPAStacking_x                                  0x14019B510
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B0D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A9B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092D30

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048C190  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048C1D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048B6E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048AC90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140493280  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401479E0
#define CTaskManager__GetTaskStatus_x                              0x140147AF0
#define CTaskManager__GetElementDescription_x                      0x140147670

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401989B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401977B0
#define EqSoundManager__SoundAssistPlay_x                          0x1402D80F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D8420  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140548040
#define CTextureAnimation__SetCurCell_x                            0x140548350

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140258590

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405CC690
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405CC710
#define CharacterBase__IsExpansionFlag_x                           0x1401B9A40

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403358E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140336220
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140337650

// messages
#define msg_spell_worn_off_x                                       0x1401CCA90
#define msg_new_text_x                                             0x1401C88D0
#define __msgTokenTextParam_x                                      0x1401C0710
#define msgTokenText_x                                             0x1401C0630

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9AB0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D99D0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140607BD0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C01D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140359870
#define CCursorAttachment__AttachToCursor1_x                       0x1403584D0
#define CCursorAttachment__Deactivate_x                            0x140359D70

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14055B2C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14055B4B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14055B4C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112F20
#define CFindItemWnd__Update_x                                     0x140113120
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E180

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BB40
#define LootFiltersManager__GetItemFilterData_x                    0x14011C660
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CF00
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D1B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140415FA0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14060BFA0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D1480

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140350B70

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D04D0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D05E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140372DB0
#define CGroupWnd__UpdateDisplay_x                                 0x140372B50

// ItemBase
#define ItemBase__IsLore_x                                         0x14058B900
#define ItemBase__IsLoreEquipped_x                                 0x14058BA60

#define MultipleItemMoveManager__ProcessMove_x                     0x140279280

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020BF30
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020BEC0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020BF00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CBE80

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF270
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF620
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEA40
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEA40
#define FactionManagerClient__GetMinFaction_x                      0x1400EE8F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D8C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA930

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177DE0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177160
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177C00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177B80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DE1B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CBE80

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D5C40

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055A440

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056160

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EF6F0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D690

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
