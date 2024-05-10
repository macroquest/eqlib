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

#define __ClientDate                                               20240416u
#define __ExpectedVersionDate                                     "Apr 16 2024"
#define __ExpectedVersionTime                                     "18:34:14"
#define __ActualVersionDate_x                                      0x14093CA40
#define __ActualVersionTime_x                                      0x14093CA30
#define __ActualVersionBuild_x                                     0x1408D3510

// Memory Protection
#define __MemChecker0_x                                            0x1402AE940
#define __MemChecker1_x                                            0x14056A9F0
#define __MemChecker4_x                                            0x14027D3A0
#define __EncryptPad0_x                                            0x140D09E40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E42A40
#define instEQZoneInfo_x                                           0x140E42C34 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402150D0
#define __gfMaxZoomCameraDistance_x                                0x1408D4780
#define __gfMaxCameraDistance_x                                    0x140A791F4
#define __CurrentSocial_x                                          0x140BC5940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D01710
#define g_eqCommandStates_x                                        0x140D02780
#define __CommandList_x                                            0x140D029C0
#define __ScreenMode_x                                             0x140D89FEC
#define __gWorld_x                                                 0x140E3AEC8
#define __gpbCommandEvent_x                                        0x140E3D48C
#define __ServerHost_x                                             0x140E3D678
#define __Guilds_x                                                 0x140E41600
#define __MouseEventTime_x                                         0x140EB7FA8
#define DI8__MouseState_x                                          0x140EBCBC8
#define __heqmain_x                                                0x140EBF068
#define DI8__Mouse_x                                               0x140EBF080
#define __HWnd_x                                                   0x140EBF088
#define __Mouse_x                                                  0x140EBF090
#define DI8__Keyboard_x                                            0x140EBF0B0
#define __LoginName_x                                              0x140EBC7BC
#define __CurrentMapLabel_x                                        0x140ED2570
#define __LabelCache_x                                             0x140ED3140
#define __ChatFilterDefs_x                                         0x140A142F0
#define Teleport_Table_Size_x                                      0x140E3D514
#define Teleport_Table_x                                           0x140E3AFD0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E3D990
#define pinstActiveBanker_x                                        0x140E3AEF0
#define pinstActiveCorpse_x                                        0x140E3AEE0
#define pinstActiveGMaster_x                                       0x140E3AEE8
#define pinstActiveMerchant_x                                      0x140E3AED8
#define pinstAltAdvManager_x                                       0x140D8B1A8
#define pinstCEverQuest_x                                          0x140EBC0F8
#define pinstCamActor_x                                            0x140D89FD8
#define pinstCDBStr_x                                              0x140D89F60
#define pinstCDisplay_x                                            0x140E3CFE8
#define pinstControlledPlayer_x                                    0x140E3AF80
#define pinstCResolutionHandler_x                                  0x141543908
#define pinstCSidlManager_x                                        0x140EE4440
#define pinstCXWndManager_x                                        0x140EE4438
#define instDynamicZone_x                                          0x140E414C0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4150E
#define instExpeditionName_x                                       0x140E4154E
#define pinstDZMember_x                                            0x140E415D8
#define pinstDZTimerInfo_x                                         0x140E415E0
#define pinstEqLogin_x                                             0x140EBC100
#define instTribute_x                                              0x140CFCD50
#define pinstEQSoundManager_x                                      0x140D8B528
#define pinstEQSpellStrings_x                                      0x140D6EB30
#define pinstSGraphicsEngine_x                                     0x141543688
#define pinstLocalPC_x                                             0x140E3AFB8
#define pinstLocalPlayer_x                                         0x140E3AED0
#define pinstCMercenaryClientManager_x                             0x140EB9898
#define pinstModelPlayer_x                                         0x140E3AF00
#define pinstRenderInterface_x                                     0x1415436A0
#define pinstSkillMgr_x                                            0x140EBB530
#define pinstSpawnManager_x                                        0x140EB9C50
#define pinstSpellManager_x                                        0x140EBB598
#define pinstStringTable_x                                         0x140E3AFC0
#define pinstSwitchManager_x                                       0x140E3AE40
#define pinstTarget_x                                              0x140E3AF78
#define pinstTaskMember_x                                          0x140CFCD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3AF88
#define pinstTradeTarget_x                                         0x140E3AEF8
#define instTributeActive_x                                        0x140CFCD79
#define pinstViewActor_x                                           0x140D89FD0
#define pinstWorldData_x                                           0x140E3AFC8
#define pinstPlayerPath_x                                          0x140EB9C78
#define pinstTargetIndicator_x                                     0x140EBB648
#define EQObject_Top_x                                             0x140E3AFA0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ECF6C8
#define pinstCContainerMgr_x                                       0x140D8A278
#define pinstCContextMenuManager_x                                 0x140EE4120
#define pinstCInvSlotMgr_x                                         0x140D8A270
#define pinstCItemDisplayManager_x                                 0x140ED2140
#define pinstCPopupWndManager_x                                    0x140ED29D0
#define pinstCSpellDisplayMgr_x                                    0x140ED3020
#define pinstCTaskManager_x                                        0x140BC5C80
#define pinstEQSuiteTextureLoader_x                                0x140D13540
#define pinstItemIconCache_x                                       0x140ECFA28
#define pinstLootFiltersManager_x                                  0x140D899A8
#define pinstGFViewListener_x                                      0x140EE38F8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023DCD0
#define __CastRay_x                                                0x140236110
#define __CastRay2_x                                               0x140235E10
#define __ConvertItemTags_x                                        0x140236570
#define __CleanItemTags_x                                          0x140087F10
#define __CreateCascadeMenuItems_x                                 0x1401856E0
#define __DoesFileExist_x                                          0x14056E8A0
#define __EQGetTime_x                                              0x14056AFA0
#define __ExecuteCmd_x                                             0x14020CA60
#define __FixHeading_x                                             0x140695860
#define __FlushDxKeyboard_x                                        0x140330700
#define __get_bearing_x                                            0x14023FEC0
#define __get_melee_range_x                                        0x14023FFC0
#define __GetAnimationCache_x                                      0x1403AD870
#define __GetGaugeValueFromEQ_x                                    0x1404E11F0
#define __GetLabelFromEQ_x                                         0x1404E27F0
#define __GetXTargetType_x                                         0x140696B40   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406958E0
#define __HelpPath_x                                               0x140EB7E70   // Why?
#define __NewUIINI_x                                               0x1404EE1D0   // Why?
#define __ProcessGameEvents_x                                      0x140272890
#define __ProcessKeyboardEvents_x                                  0x140331F60
#define __ProcessMouseEvents_x                                     0x140273DC0
#define __SaveColors_x                                             0x1401956E0
#define __STMLToText_x                                             0x1405731E0
#define __WndProc_x                                                0x14032EEE0
#define CMemoryMappedFile__SetFile_x                               0x1407CD690
#define DrawNetStatus_x                                            0x1402BCDF0
#define Util__FastTime_x                                           0x14056A530
#define __eq_delete_x                                              0x14069CC94
#define __eq_new_x                                                 0x14069CC50
#define __CopyLayout_x                                             0x1402AAD60
#define __ThrottleFrameRate_x                                      0x140262134
#define __ThrottleFrameRateEnd_x                                   0x140262194

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403415D0
#define CAAWnd__Update_x                                           0x1403418D0
#define CAAWnd__UpdateSelected_x                                   0x140342910

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA300
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2C10
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140821A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AABF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A07F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A0A70
#define AltAdvManager__GetAAById_x                                 0x1401A00C0
#define AltAdvManager__CanTrainAbility_x                           0x14019FEF0
#define AltAdvManager__CanSeeAbility_x                             0x14019FBB0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0B60
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D19A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1BF0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5E80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D25C0
#define CharacterZoneClient__CastSpell_x                           0x1400D2660
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E19B0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7590
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7750
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D53F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDC20
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC650  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6850
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5350
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF7E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE6B0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6A20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C70B0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8A80
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEDF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7200
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFA70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6AA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0850
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6CA0
#define CharacterZoneClient__GetModCap_x                           0x1400F7E10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6D30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6F40
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBBF0
#define CharacterZoneClient__HasSkill_x                            0x1400F3840
#define CharacterZoneClient__HitBySpell_x                          0x1400D79F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB190
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F78F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D9840  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7C40
#define CharacterZoneClient__Max_Mana_x                            0x1402D9A60  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F80A0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE540
#define CharacterZoneClient__SpellDuration_x                       0x1400DF240
#define CharacterZoneClient__TotalEffect_x                         0x1400E0590
#define CharacterZoneClient__UseSkill_x                            0x1400FD5C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035FA30

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140369D80

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140365C00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140364C90

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036C430

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A97EE0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14038F2F0
#define CChatWindowManager__InitContextMenu_x                      0x14038F480
#define CChatWindowManager__FreeChatWindow_x                       0x14038E370
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140397030
#define CChatWindowManager__CreateChatWindow_x                     0x14038DCB0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401058B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140398070
#define CChatWindow__Clear_x                                       0x140398F10
#define CChatWindow__WndNotification_x                             0x14039A0E0
#define CChatWindow__AddHistory_x                                  0x140398A10

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A8110
#define CContextMenu__RemoveMenuItem_x                             0x1405A8500
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A84D0
#define CContextMenu__CheckMenuItem_x                              0x1405A8340
#define CContextMenu__SetMenuItem_x                                0x1405A8520
#define CContextMenu__AddSeparator_x                               0x1405A8280

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140599FD0
#define CContextMenuManager__RemoveMenu_x                          0x14059A5B0
#define CContextMenuManager__PopupMenu_x                           0x14059A2F0
#define CContextMenuManager__Flush_x                               0x14059A050
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A57E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14065F8F0
#define CChatService__GetFriendName_x                              0x14065F900

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058AF50
#define CComboWnd__Draw_x                                          0x14058B050
#define CComboWnd__GetCurChoice_x                                  0x14058B320  // unused
#define CComboWnd__GetListRect_x                                   0x14058B3C0
#define CComboWnd__InsertChoice_x                                  0x14058B6F0
#define CComboWnd__SetColors_x                                     0x14058BA80
#define CComboWnd__SetChoice_x                                     0x14058BA40
#define CComboWnd__GetItemCount_x                                  0x14058B3B0
#define CComboWnd__GetCurChoiceText_x                              0x14058B360  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058B2F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058B7B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A3560
#define CContainerWnd__SetContainer_x                              0x1403F8AB0
#define CContainerWnd__vftable_x                                   0x1409B0448

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8A39C
#define CDisplay__ZoneMainUI_x                                     0x1405C2240
#define CDisplay__PreZoneMainUI_x                                  0x1401925E0
#define CDisplay__CleanGameUI_x                                    0x1401847C0
#define CDisplay__GetClickedActor_x                                0x140188930
#define CDisplay__GetUserDefinedColor_x                            0x1401895A0
#define CDisplay__InitCharSelectUI_x                               0x140189850
#define CDisplay__ReloadUI_x                                       0x1401948D0
#define CDisplay__WriteTextHD2_x                                   0x14019B910
#define CDisplay__TrueDistance_x                                   0x14019B5C0
#define CDisplay__SetViewActor_x                                   0x140197E00
#define CDisplay__GetFloorHeight_x                                 0x140188B90
#define CDisplay__ToggleScreenshotMode_x                           0x14019B0B0
#define CDisplay__RealRender_World_x                               0x140193CB0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CC3F0
#define CEditWnd__DrawCaret_x                                      0x1405BDF70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405BE410
#define CEditWnd__GetCaretPt_x                                     0x1405BE690  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405BE6D0
#define CEditWnd__GetDisplayString_x                               0x1405BE940
#define CEditWnd__GetHorzOffset_x                                  0x1405BEB70
#define CEditWnd__GetLineForPrintableChar_x                        0x1405BECC0
#define CEditWnd__GetSelStartPt_x                                  0x1405BEFA0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405BEDF0
#define CEditWnd__PointFromPrintableChar_x                         0x1405BFB50
#define CEditWnd__ReplaceSelection_x                               0x1405BFF00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C03A0
#define CEditWnd__SetEditable_x                                    0x1405C0620
#define CEditWnd__SetWindowText_x                                  0x1405C0650

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140263240
#define CEverQuest__ClickedPlayer_x                                0x140258D70
#define CEverQuest__CreateTargetIndicator_x                        0x140259630
#define CEverQuest__DoTellWindow_x                                 0x1401055C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105E80 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140264C00
#define CEverQuest__dsp_chat_x                                     0x140104FF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14028EDB0
#define CEverQuest__Emote_x                                        0x1402655E0
#define CEverQuest__GetBodyTypeDesc_x                              0x140266390
#define CEverQuest__GetClassDesc_x                                 0x1402663F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402667C0
#define CEverQuest__GetDeityDesc_x                                 0x140266A70
#define CEverQuest__GetLangDesc_x                                  0x140266EA0
#define CEverQuest__GetRaceDesc_x                                  0x140267240
#define CEverQuest__InterpretCmd_x                                 0x140268B70
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027DA20
#define CEverQuest__LMouseUp_x                                     0x14026A540
#define CEverQuest__RightClickedOnPlayer_x                         0x14027B240
#define CEverQuest__RMouseUp_x                                     0x140274940
#define CEverQuest__SetGameState_x                                 0x14027FF50
#define CEverQuest__UPCNotificationFlush_x                         0x140285880 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026A1B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140275CF0
#define CEverQuest__ReportSuccessfulHit_x                          0x140276B10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B7C20

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0E50
#define CGuild__GetGuildName_x                                     0x1400C0E90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DA0C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A08C0
#define CHotButton__SetCheck_x                                     0x1402A0B90

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F1810
#define CInvSlotMgr__MoveItem_x                                    0x1403F19F0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F33A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403EEA10
#define CInvSlot__SliderComplete_x                                 0x1403EFF60
#define CInvSlot__GetItemBase_x                                    0x1403EA640
#define CInvSlot__UpdateItem_x                                     0x1403F0420

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F4720

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140415A40
#define CItemDisplayWnd__UpdateStrings_x                           0x140418390
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140412550
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140413CA0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140414E60

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DDD20
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DFA10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140519430

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14040EC80

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014CF90

// CLabel
#define CLabel__UpdateText_x                                       0x14041F780

// CListWnd
#define CListWnd__CListWnd_x                                       0x14058E8C0
#define CListWnd__dCListWnd_x                                      0x14058ED10
#define CListWnd__vftable_x                                        0x140A96038
#define CListWnd__AddColumn_x                                      0x14058F3B0
#define CListWnd__AddColumn1_x                                     0x14058F450
#define CListWnd__AddLine_x                                        0x14058F5B0
#define CListWnd__AddString_x                                      0x14058FB40
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405900B0
#define CListWnd__CalculateVSBRange_x                              0x140590390
#define CListWnd__ClearSel_x                                       0x140590540
#define CListWnd__ClearAllSel_x                                    0x1405904E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405905A0
#define CListWnd__Compare_x                                        0x140590750
#define CListWnd__Draw_x                                           0x140590C20
#define CListWnd__DrawColumnSeparators_x                           0x1405917D0
#define CListWnd__DrawHeader_x                                     0x140591890
#define CListWnd__DrawItem_x                                       0x140591F60
#define CListWnd__DrawLine_x                                       0x1405928E0
#define CListWnd__DrawSeparator_x                                  0x140592DA0
#define CListWnd__EnableLine_x                                     0x1405931C0
#define CListWnd__EnsureVisible_x                                  0x140593220
#define CListWnd__ExtendSel_x                                      0x140593320
#define CListWnd__GetColumnMinWidth_x                              0x140593650
#define CListWnd__GetColumnWidth_x                                 0x1405936D0
#define CListWnd__GetCurSel_x                                      0x1405937D0
#define CListWnd__GetItemData_x                                    0x140593B50
#define CListWnd__GetItemHeight_x                                  0x140593B90
#define CListWnd__GetItemRect_x                                    0x140593DB0
#define CListWnd__GetItemText_x                                    0x140594050
#define CListWnd__GetSelList_x                                     0x1405942A0
#define CListWnd__GetSeparatorRect_x                               0x140594490
#define CListWnd__InsertLine_x                                     0x140595900
#define CListWnd__RemoveLine_x                                     0x140595F70
#define CListWnd__SetColors_x                                      0x140596330
#define CListWnd__SetColumnJustification_x                         0x140596350
#define CListWnd__SetColumnLabel_x                                 0x1405963D0
#define CListWnd__SetColumnWidth_x                                 0x140596570
#define CListWnd__SetCurSel_x                                      0x140596640
#define CListWnd__SetItemColor_x                                   0x1405968B0
#define CListWnd__SetItemData_x                                    0x140596950
#define CListWnd__SetItemText_x                                    0x140596B90
#define CListWnd__Sort_x                                           0x140596FA0
#define CListWnd__ToggleSel_x                                      0x140597110
#define CListWnd__SetColumnsSizable_x                              0x1405965C0
#define CListWnd__SetItemWnd_x                                     0x140596CC0
#define CListWnd__GetItemWnd_x                                     0x140594230
#define CListWnd__SetItemIcon_x                                    0x140596990
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058FE80
#define CListWnd__SetVScrollPos_x                                  0x140596F00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140432A20

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409FCF08
#define MapViewMap__Clear_x                                        0x1404345A0
#define MapViewMap__SetZoom_x                                      0x14043ABF0
#define MapViewMap__HandleLButtonDown_x                            0x140437730

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045C280  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140462830
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140462FD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404667E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140465B30
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046AA70

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063C370
#define CPacketScrambler__hton_x                                   0x14063C360

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B7870
#define CSidlManagerBase__FindAnimation1_x                         0x1405B77B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B7EA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B7C50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B6BB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B6B40
#define CSidlManagerBase__CreateXWnd_x                             0x1405B61A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D0D60
#define CSidlManager__CreateXWnd_x                                 0x1404D0F20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057C660
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057C540
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C69B0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057C7D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057BC90
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057BD60
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057BF70
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057CE70
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057D0A0
#define CSidlScreenWnd__GetChildItem_x                             0x14057D240
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057D490
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140587520 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057D800
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057DB70
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14057E420
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14057ED10
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE3798
#define CSidlScreenWnd__StoreIniInfo_x                             0x14057F360
#define CSidlScreenWnd__StoreIniVis_x                              0x14057FB50
#define CSidlScreenWnd__vftable_x                                  0x140A952A8
#define CSidlScreenWnd__WndNotification_x                          0x14057FBA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140319DE0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031A280 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031A1B0
#define CSkillMgr__IsActivatedSkill_x                              0x14031A630
#define CSkillMgr__IsCombatSkill_x                                 0x14031A670
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031A5A0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031A200

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140597A80
#define CSliderWnd__SetValue_x                                     0x140598290
#define CSliderWnd__SetNumTicks_x                                  0x140598110

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D73A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059CA30
#define CStmlWnd__CalculateHSBRange_x                              0x140586ED0
#define CStmlWnd__CalculateVSBRange_x                              0x14059D950
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059E3D0
#define CStmlWnd__ForceParseNow_x                                  0x14059E470
#define CStmlWnd__GetVisibleText_x                                 0x14059EB40
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A08A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A08E0
#define CStmlWnd__SetSTMLText_x                                    0x1405A78B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A7A60
#define CStmlWnd__UpdateHistoryString_x                            0x1405A7DF0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140598660
#define CTabWnd__DrawCurrentPage_x                                 0x140598700
#define CTabWnd__DrawTab_x                                         0x140598AD0
#define CTabWnd__GetTabRect_x                                      0x140599140
#define CTabWnd__InsertPage_x                                      0x140599410
#define CTabWnd__RemovePage_x                                      0x1405996A0
#define CTabWnd__SetPage_x                                         0x140599800
#define CTabWnd__UpdatePage_x                                      0x140599B00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C0AB0
#define CPageWnd__SetTabText_x                                     0x1405C0B20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA5B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA9C0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405AF260
#define CTextureFont__DrawWrappedText1_x                           0x1405AF170
#define CTextureFont__DrawWrappedText2_x                           0x1405AF390
#define CTextureFont__GetTextExtent_x                              0x1405AF740
#define CTextureFont__GetHeight_x                                  0x1405AF700

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C5110

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057B870

// CXStr
#define CXStr__gFreeLists_x                                        0x140D12EB0
#define CXStr__gCXStrAccess_x                                      0x140EE3598

// CXWnd
#define CXWnd__BringToTop_x                                        0x140582590
#define CXWnd__ClrFocus_x                                          0x140582880
#define CXWnd__Destroy_x                                           0x140582A00
#define CXWnd__DoAllDrawing_x                                      0x140582B00
#define CXWnd__DrawColoredRect_x                                   0x1405832D0
#define CXWnd__DrawTooltip_x                                       0x140584950
#define CXWnd__DrawTooltipAtPoint_x                                0x140584A00
#define CXWnd__GetChildItem_x                                      0x140585300
#define CXWnd__GetChildWndAt_x                                     0x1405853C0
#define CXWnd__GetClientRect_x                                     0x140585670
#define CXWnd__GetClientClipRect_x                                 0x140585520
#define CXWnd__GetRelativeRect_x                                   0x140587010
#define CXWnd__GetScreenClipRect_x                                 0x140587120
#define CXWnd__GetScreenRect_x                                     0x1405872A0
#define CXWnd__GetTooltipRect_x                                    0x140587420
#define CXWnd__IsActive_x                                          0x1405879E0
#define CXWnd__IsDescendantOf_x                                    0x140587A10
#define CXWnd__IsReallyVisible_x                                   0x140587A70
#define CXWnd__IsType_x                                            0x140587AB0
#define CXWnd__Minimize_x                                          0x140587BB0
#define CXWnd__ProcessTransition_x                                 0x140588A90
#define CXWnd__Resize_x                                            0x140588BA0
#define CXWnd__Right_x                                             0x140588C40
#define CXWnd__SetFocus_x                                          0x140588FF0
#define CXWnd__SetFont_x                                           0x140589040
#define CXWnd__SetKeyTooltip_x                                     0x140589140
#define CXWnd__SetMouseOver_x                                      0x140589270
#define CXWnd__SetParent_x                                         0x1405892F0
#define CXWnd__StartFade_x                                         0x140589730
#define CXWnd__vftable_x                                           0x140A95898
#define CXWnd__CXWnd_x                                             0x140581160
#define CXWnd__dCXWnd_x                                            0x140581AA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CBB70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A96C0
#define CXWndManager__DrawCursor_x                                 0x1405A99A0
#define CXWndManager__DrawWindows_x                                0x1405A9C00
#define CXWndManager__GetKeyboardFlags_x                           0x1405AA2C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AA300
#define CXWndManager__RemoveWnd_x                                  0x1405AD920

// CDBStr
#define CDBStr__GetString_x                                        0x140182930

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406455F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE840
#define CCharacterListWnd__EnterWorld_x                            0x1400CD540
#define CCharacterListWnd__Quit_x                                  0x1400CE820
#define CCharacterListWnd__UpdateList_x                            0x1400CF530

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140614020
#define ItemBase__CreateItemTagString_x                            0x140614AA0
#define ItemBase__GetImageNum_x                                    0x140617080
#define ItemBase__GetItemValue_x                                   0x140618B30
#define ItemBase__IsEmpty_x                                        0x14061A740
#define ItemBase__IsKeyRingItem_x                                  0x14061AE80
#define ItemBase__ValueSellMerchant_x                              0x14061F080
#define ItemClient__CanDrop_x                                      0x1402A2E70
#define ItemClient__CanGoInBag_x                                   0x1402A2FA0
#define ItemClient__CreateItemClient_x                             0x1402A3280
#define ItemClient__dItemClient_x                                  0x1402A2CE0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A1F90
#define EQ_LoadingS__Array_x                                       0x140CFF220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062B7C0
#define PcBase__GetCombatAbility_x                                 0x14062BE60
#define PcBase__GetCombatAbilityTimer_x                            0x14062BF00
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062C650
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062D140
#define PcClient__AlertInventoryChanged_x                          0x1402C53D0
#define PcClient__GetConLevel_x                                    0x1402C59F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C8120
#define PcClient__HasLoreItem_x                                    0x1402C90E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D6970
#define PcZoneClient__RemoveMyAffect_x                             0x1402DA8E0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402110F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402112A0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140211400  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140211340  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024A4A0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017D160

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140688EE0
#define PlayerBase__CanSee1_x                                      0x140688FB0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140689470
#define PlayerBase__HasProperty_x                                  0x1406896A0
#define PlayerBase__IsTargetable_x                                 0x140689760
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E73B0
#define PlayerClient__GetPcClient_x                                0x1402E9BE0
#define PlayerClient__PlayerClient_x                               0x1402E0690
#define PlayerClient__SetNameSpriteState_x                         0x1402ED030
#define PlayerClient__SetNameSpriteTint_x                          0x1402EDFF0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FC550
#define PlayerZoneClient__DoAttack_x                               0x1402FD260
#define PlayerZoneClient__GetLevel_x                               0x140300990
#define PlayerZoneClient__IsValidTeleport_x                        0x14024D220
#define PlayerZoneClient__LegalPlayerRace_x                        0x140190E60

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F5E70  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F5F20  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F6020
#define PlayerManagerClient__CreatePlayer_x                        0x1402F5940
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140688AA0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A8280
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A7E80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A7EF0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A8210  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A83A0
#define KeypressHandler__HandleKeyUp_x                             0x1402A84A0
#define KeypressHandler__SaveKeymapping_x                          0x1402A8120  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140643130  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063DAA0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402CF680  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D49A0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D7070
#define PcZoneClient__RemovePetEffect_x                            0x1402DA9E0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D7C60
#define PcZoneClient__CanEquipItem_x                               0x1402D2CC0
#define PcZoneClient__GetItemByID_x                                0x1402D5A40
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DA760
#define PcZoneClient__BandolierSwap_x                              0x1402D1CA0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140251D50

// IconCache
#define IconCache__GetIcon_x                                       0x1403AD8A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A2310
#define CContainerMgr__CloseContainer_x                            0x1403A1C50
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A2690

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140495A90

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029B0B0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140426A60
#define CLootWnd__RequestLootSlot_x                                0x140427A70

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D12C0
#define EQ_Spell__SpellAffects_x                                   0x1401D2580
#define EQ_Spell__SpellAffectBase_x                                0x1401D24E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7110
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D70C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D21A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D1D60
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D1630

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFA90

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F18F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F1000
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F0830

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F8FB0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140179B40
#define CTaskManager__GetTaskStatus_x                              0x140179C50
#define CTaskManager__GetElementDescription_x                      0x1401797D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CF630
#define EqSoundManager__PlayScriptMp3_x                            0x1401CE470
#define EqSoundManager__SoundAssistPlay_x                          0x14031F430  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14031F770  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058A4E0
#define CTextureAnimation__SetCurCell_x                            0x14058A7F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140299310

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065D030
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065D0B0
#define CharacterBase__IsExpansionFlag_x                           0x1401F2C80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403805B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140380F20
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140382460

// messages
#define msg_spell_worn_off_x                                       0x140207AB0
#define msg_new_text_x                                             0x140203390
#define __msgTokenTextParam_x                                      0x1401FB0C0
#define msgTokenText_x                                             0x1401FAFE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140320DF0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140320D10

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140696F20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041FED0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A6FF0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A9F50
#define CCursorAttachment__RemoveAttachment_x                      0x1403AA200
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C35B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C37A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C37B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140148200
#define CFindItemWnd__Update_x                                     0x140148BA0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401426D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140151A80
#define LootFiltersManager__GetItemFilterData_x                    0x140152590
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140152E30
#define LootFiltersManager__SetItemLootFilter_x                    0x1401530E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140478910

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14069C4E0
#define CResolutionHandler__GetWindowedStyle_x                     0x140319950

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14039E680

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406613B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406612A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C3280
#define CGroupWnd__UpdateDisplay_x                                 0x1403C2E60

// ItemBase
#define ItemBase__IsLore_x                                         0x14061AF50
#define ItemBase__IsLoreEquipped_x                                 0x14061AFE0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BB000

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024A600
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024A590
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024A5D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140313F10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401225F0
#define FactionManagerClient__HandleFactionMessage_x               0x1401229A0
#define FactionManagerClient__GetFactionStanding_x                 0x140121DC0
#define FactionManagerClient__GetMaxFaction_x                      0x140121DC0
#define FactionManagerClient__GetMinFaction_x                      0x140121C70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC790

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012DD90

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AA900
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A9C80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AA720  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AA6A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140325E60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140313F10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140211490

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140580190

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084DC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140337530

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C790

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140646170
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA98B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
