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

#define __ClientDate                                               20251117u
#define __ExpectedVersionDate                                     "Nov 17 2025"
#define __ExpectedVersionTime                                     "04:21:47"
#define __ActualVersionDate_x                                      0x140970898
#define __ActualVersionTime_x                                      0x140970888
#define __ActualVersionBuild_x                                     0x140905A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C4900
#define __MemChecker1_x                                            0x140591FB0
#define __MemChecker4_x                                            0x140292120
#define __EncryptPad0_x                                            0x140D43F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C840
#define instEQZoneInfo_x                                           0x140E7CA34 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225D60
#define __gfMaxZoomCameraDistance_x                                0x140906CF8
#define __gfMaxCameraDistance_x                                    0x140AB0C44
#define __CurrentSocial_x                                          0x140BFF950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3B730
#define g_eqCommandStates_x                                        0x140D3C7D0
#define __CommandList_x                                            0x140D3CA00
#define __ScreenMode_x                                             0x140DC4194
#define __gWorld_x                                                 0x140E76D20
#define __gpbCommandEvent_x                                        0x140E77278
#define __ServerHost_x                                             0x140E77478
#define __Guilds_x                                                 0x140E7B400
#define __MemCheckBitmask_x                                        0x140E7CD7F
#define __MemCheckActive_x                                         0x140E7E495
#define __MouseEventTime_x                                         0x140EF1E10
#define DI8__MouseState_x                                          0x140EF6050
#define __heqmain_x                                                0x140EF84E0
#define DI8__Mouse_x                                               0x140EF84F8
#define __HWnd_x                                                   0x140EF8500
#define __Mouse_x                                                  0x140EF8508
#define DI8__Keyboard_x                                            0x140EF8528
#define __LoginName_x                                              0x140EF8C0C
#define __CurrentMapLabel_x                                        0x140F0C720
#define __LabelCache_x                                             0x140F0D2F0
#define __ChatFilterDefs_x                                         0x140A4AB00
#define Teleport_Table_Size_x                                      0x140E7730C
#define Teleport_Table_x                                           0x140E74CE0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E77790
#define pinstActiveBanker_x                                        0x140E771C0
#define pinstActiveCorpse_x                                        0x140E771B0
#define pinstActiveGMaster_x                                       0x140E771B8
#define pinstActiveMerchant_x                                      0x140E771A8
#define pinstAltAdvManager_x                                       0x140DC4F88
#define pinstCEverQuest_x                                          0x140EF5FA8
#define pinstCamActor_x                                            0x140DC4180
#define pinstCDBStr_x                                              0x140DC3D40
#define pinstCDisplay_x                                            0x140E74CD8
#define pinstControlledPlayer_x                                    0x140E77250
#define pinstCResolutionHandler_x                                  0x140F1DB28
#define pinstCSidlManager_x                                        0x140F1E8A0
#define pinstCXWndManager_x                                        0x140F1E898
#define instDynamicZone_x                                          0x140E7B2C0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B30E
#define instExpeditionName_x                                       0x140E7B34E
#define pinstDZMember_x                                            0x140E7B3D8
#define pinstDZTimerInfo_x                                         0x140E7B3E0
#define pinstEqLogin_x                                             0x140EF8550
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C89C
#define pinstEQSoundManager_x                                      0x140DC5310
#define pinstEQSpellStrings_x                                      0x140DA88D0
#define pinstSGraphicsEngine_x                                     0x140F1D8B8
#define pinstLocalPC_x                                             0x140E76D08
#define pinstLocalPlayer_x                                         0x140E771A0
#define pinstCMercenaryClientManager_x                             0x140EF3738
#define pinstModelPlayer_x                                         0x140E771D0
#define pinstRenderInterface_x                                     0x140F1D8D0
#define pinstSkillMgr_x                                            0x140EF53E8
#define pinstSpawnManager_x                                        0x140EF3AF0
#define pinstSpellManager_x                                        0x140EF5450
#define pinstStringTable_x                                         0x140E76D10
#define pinstSwitchManager_x                                       0x140E74C40
#define pinstTarget_x                                              0x140E77248
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E771C8
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC4178
#define pinstWorldData_x                                           0x140E74CD0
#define pinstPlayerPath_x                                          0x140EF3B18
#define pinstTargetIndicator_x                                     0x140EF5500
#define EQObject_Top_x                                             0x140E77300

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F09880
#define pinstCContainerMgr_x                                       0x140DC41E8
#define pinstCContextMenuManager_x                                 0x140F1E580
#define pinstCInvSlotMgr_x                                         0x140DC41C8
#define pinstCItemDisplayManager_x                                 0x140F0C2F0
#define pinstCPopupWndManager_x                                    0x140F0CB80
#define pinstCSpellDisplayMgr_x                                    0x140F0D1D0
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D640
#define pinstItemIconCache_x                                       0x140F09BE0
#define pinstLootFiltersManager_x                                  0x140DC3788
#define pinstGFViewListener_x                                      0x140F1DD58


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024FAA0
#define __CastRay_x                                                0x140247D20
#define __CastRay2_x                                               0x140247A20
#define __compress_block_x                                         0x140547370
#define __ConvertItemTags_x                                        0x140248180
#define __CleanItemTags_x                                          0x14008A5C0
#define __CreateCascadeMenuItems_x                                 0x140190990
#define __decompress_block_x                                       0x14058D7C0
#define __DoesFileExist_x                                          0x140595E60
#define __EQGetTime_x                                              0x140592560
#define __ExecuteCmd_x                                             0x14021D2F0
#define __FixHeading_x                                             0x14064CA30
#define __FlushDxKeyboard_x                                        0x140348750
#define __get_bearing_x                                            0x140251CD0
#define __get_melee_range_x                                        0x140251DC0
#define __GetAnimationCache_x                                      0x1403CA190
#define __GetGaugeValueFromEQ_x                                    0x140506E60
#define __GetLabelFromEQ_x                                         0x140508450
#define __GetXTargetType_x                                         0x14064DD10   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064CAB0
#define __HelpPath_x                                               0x140EF1CD8   // Why?
#define __NewUIINI_x                                               0x140513EA0   // Why?
#define __ProcessDeviceEvents_x                                    0x140292730
#define __ProcessGameEvents_x                                      0x140287140
#define __ProcessKeyboardEvents_x                                  0x140349EA0
#define __ProcessMouseEvents_x                                     0x140288860
#define __SaveColors_x                                             0x1401A0890
#define __STMLToText_x                                             0x1405A5A90
#define __WndProc_x                                                0x140346EF0
#define CMemoryMappedFile__SetFile_x                               0x1407FA8B0
#define DrawNetStatus_x                                            0x1402D3C10
#define Util__FastTime_x                                           0x140591A90
#define __eq_delete_x                                              0x1406C6868
#define __eq_new_x                                                 0x1406C6AC0
#define __CopyLayout_x                                             0x1402C0D10
#define __ThrottleFrameRate_x                                      0x14027670C
#define __ThrottleFrameRateEnd_x                                   0x140276712

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140359C80
#define CAAWnd__Update_x                                           0x140359F80
#define CAAWnd__UpdateSelected_x                                   0x14035B170

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACFE0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A59C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD910

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABB00
#define AltAdvManager__IsAbilityReady_x                            0x1401ABF90
#define AltAdvManager__GetAAById_x                                 0x1401AB3D0
#define AltAdvManager__CanTrainAbility_x                           0x1401AB1C0
#define AltAdvManager__CanSeeAbility_x                             0x1401AAE80

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D43E0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D5250
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D54A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9840
#define CharacterZoneClient__CanUseItem_x                          0x1400E9E00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5E70
#define CharacterZoneClient__CastSpell_x                           0x1400D5F10
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5D10
#define CharacterZoneClient__Cur_HP_x                              0x1400EB520
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB6E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D9180
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1D90
#define CharacterZoneClient__GetBaseSkill_x                        0x140100460  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA620
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E9140
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3630
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2510
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA7A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA1F0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC0C0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2C50
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB190
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F38C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA820
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4640
#define CharacterZoneClient__GetModCap_x                           0x1400FBC10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DAAB0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DAC80
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF750
#define CharacterZoneClient__HasSkill_x                            0x1400F7750
#define CharacterZoneClient__HitBySpell_x                          0x1400DB710
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF0E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB6F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE980  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBA40
#define CharacterZoneClient__Max_Mana_x                            0x1402EEBA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FBEA0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E2750
#define CharacterZoneClient__SpellDuration_x                       0x1400E3480
#define CharacterZoneClient__TotalEffect_x                         0x1400E4860
#define CharacterZoneClient__UseSkill_x                            0x1401013D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378A20

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382FF0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037EE70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140382A70

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140385760

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD02E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A8440
#define CChatWindowManager__InitContextMenu_x                      0x1403A85D0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A7490
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B0580
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6ED0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109950

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B15D0
#define CChatWindow__Clear_x                                       0x1403B2580
#define CChatWindow__WndNotification_x                             0x1403B3740
#define CChatWindow__AddHistory_x                                  0x1403B2080

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D3160
#define CContextMenu__RemoveMenuItem_x                             0x1405D3550
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3520
#define CContextMenu__CheckMenuItem_x                              0x1405D3390
#define CContextMenu__SetMenuItem_x                                0x1405D3570
#define CContextMenu__AddSeparator_x                               0x1405D32D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C5090
#define CContextMenuManager__RemoveMenu_x                          0x1405C5660
#define CContextMenuManager__PopupMenu_x                           0x1405C53A0
#define CContextMenuManager__Flush_x                               0x1405C5110
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C1B90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A0680
#define CChatService__GetFriendName_x                              0x1406A0690

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B5FB0
#define CComboWnd__Draw_x                                          0x1405B60B0
#define CComboWnd__GetCurChoice_x                                  0x1405B6390  // unused
#define CComboWnd__GetListRect_x                                   0x1405B6430
#define CComboWnd__InsertChoice_x                                  0x1405B6770
#define CComboWnd__SetColors_x                                     0x1405B6B00
#define CComboWnd__SetChoice_x                                     0x1405B6AC0
#define CComboWnd__GetItemCount_x                                  0x1405B6420
#define CComboWnd__GetCurChoiceText_x                              0x1405B63D0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B6360
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B6830

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF8A0
#define CContainerWnd__SetContainer_x                              0x14041B5D0
#define CContainerWnd__vftable_x                                   0x1409E5918

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC3F04
#define CDisplay__ZoneMainUI_x                                     0x1405ED4D0
#define CDisplay__PreZoneMainUI_x                                  0x14019D790
#define CDisplay__CleanGameUI_x                                    0x14018FA50
#define CDisplay__GetClickedActor_x                                0x140193C20
#define CDisplay__GetUserDefinedColor_x                            0x140194890
#define CDisplay__InitCharSelectUI_x                               0x140194B40
#define CDisplay__ReloadUI_x                                       0x14019FA90
#define CDisplay__RestartUI_x                                      0x140201B20
#define CDisplay__WriteTextHD2_x                                   0x1401A6AA0
#define CDisplay__TrueDistance_x                                   0x1401A6750
#define CDisplay__SetViewActor_x                                   0x1401A2FC0
#define CDisplay__GetFloorHeight_x                                 0x140193E80
#define CDisplay__ToggleScreenshotMode_x                           0x1401A6240
#define CDisplay__RealRender_World_x                               0x14019EE60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7700
#define CEditWnd__DrawCaret_x                                      0x1405E91A0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9640
#define CEditWnd__GetCaretPt_x                                     0x1405E98C0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E9900
#define CEditWnd__GetDisplayString_x                               0x1405E9B70
#define CEditWnd__GetHorzOffset_x                                  0x1405E9DA0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E9EF0
#define CEditWnd__GetSelStartPt_x                                  0x1405EA1D0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EA020
#define CEditWnd__PointFromPrintableChar_x                         0x1405EAE00
#define CEditWnd__ReplaceSelection_x                               0x1405EB1A0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB640
#define CEditWnd__SetEditable_x                                    0x1405EB8C0
#define CEditWnd__SetWindowText_x                                  0x1405EB8F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402777E0
#define CEverQuest__ClickedPlayer_x                                0x14026B7D0
#define CEverQuest__CreateTargetIndicator_x                        0x14026C090
#define CEverQuest__DoTellWindow_x                                 0x140109660 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109F40 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402791D0
#define CEverQuest__dsp_chat_x                                     0x1401090A0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A4160
#define CEverQuest__Emote_x                                        0x140279BC0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A9A0
#define CEverQuest__GetClassDesc_x                                 0x14027AA00
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027ADD0
#define CEverQuest__GetDeityDesc_x                                 0x14027B080
#define CEverQuest__GetLangDesc_x                                  0x14027B4B0
#define CEverQuest__GetRaceDesc_x                                  0x14027B850
#define CEverQuest__InterpretCmd_x                                 0x14027D1E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402927A0
#define CEverQuest__LMouseUp_x                                     0x14027EC60
#define CEverQuest__RightClickedOnPlayer_x                         0x14028FD30
#define CEverQuest__RMouseUp_x                                     0x1402893F0
#define CEverQuest__SetGameState_x                                 0x140295220
#define CEverQuest__UPCNotificationFlush_x                         0x14029AB90 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E8C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028A7C0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028B5E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D5060

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3A50
#define CGuild__GetGuildName_x                                     0x1400C3A90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F8590

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B6400
#define CHotButton__SetCheck_x                                     0x1402B66D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404121C0
#define CInvSlotMgr__MoveItem_x                                    0x140412D50
#define CInvSlotMgr__SelectSlot_x                                  0x140415070

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040F200
#define CInvSlot__SliderComplete_x                                 0x140410800
#define CInvSlot__GetItemBase_x                                    0x14040AA10
#define CInvSlot__UpdateItem_x                                     0x140410CB0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140417260

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438BF0
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B810
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404353A0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436D10
#define CItemDisplayWnd__RequestConvertItem_x                      0x140438000

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405038E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140505670

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405406D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140431A70

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140156020

// CLabel
#define CLabel__UpdateText_x                                       0x140442BF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B9940
#define CListWnd__dCListWnd_x                                      0x1405B9D90
#define CListWnd__vftable_x                                        0x140ACE430
#define CListWnd__AddColumn_x                                      0x1405BA430
#define CListWnd__AddColumn1_x                                     0x1405BA4D0
#define CListWnd__AddLine_x                                        0x1405BA630
#define CListWnd__AddString_x                                      0x1405BABC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BB130
#define CListWnd__CalculateVSBRange_x                              0x1405BB410
#define CListWnd__ClearSel_x                                       0x1405BB5B0
#define CListWnd__ClearAllSel_x                                    0x1405BB550
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB610
#define CListWnd__Compare_x                                        0x1405BB7D0
#define CListWnd__Draw_x                                           0x1405BBCA0
#define CListWnd__DrawColumnSeparators_x                           0x1405BC850
#define CListWnd__DrawHeader_x                                     0x1405BC910
#define CListWnd__DrawItem_x                                       0x1405BCFE0
#define CListWnd__DrawLine_x                                       0x1405BD960
#define CListWnd__DrawSeparator_x                                  0x1405BDE20
#define CListWnd__EnableLine_x                                     0x1405BE240
#define CListWnd__EnsureVisible_x                                  0x1405BE2A0
#define CListWnd__ExtendSel_x                                      0x1405BE390
#define CListWnd__GetColumnMinWidth_x                              0x1405BE720
#define CListWnd__GetColumnWidth_x                                 0x1405BE7A0
#define CListWnd__GetCurSel_x                                      0x1405BE8A0
#define CListWnd__GetItemData_x                                    0x1405BEC20
#define CListWnd__GetItemHeight_x                                  0x1405BEC60
#define CListWnd__GetItemRect_x                                    0x1405BEE80
#define CListWnd__GetItemText_x                                    0x1405BF120
#define CListWnd__GetSelList_x                                     0x1405BF370
#define CListWnd__GetSeparatorRect_x                               0x1405BF560
#define CListWnd__InsertLine_x                                     0x1405C09C0
#define CListWnd__RemoveLine_x                                     0x1405C1030
#define CListWnd__SetColors_x                                      0x1405C13F0
#define CListWnd__SetColumnJustification_x                         0x1405C1410
#define CListWnd__SetColumnLabel_x                                 0x1405C1490
#define CListWnd__SetColumnWidth_x                                 0x1405C1630
#define CListWnd__SetCurSel_x                                      0x1405C1700
#define CListWnd__SetItemColor_x                                   0x1405C1970
#define CListWnd__SetItemData_x                                    0x1405C1A10
#define CListWnd__SetItemText_x                                    0x1405C1C50
#define CListWnd__Sort_x                                           0x1405C2060
#define CListWnd__ToggleSel_x                                      0x1405C21D0
#define CListWnd__SetColumnsSizable_x                              0x1405C1680
#define CListWnd__SetItemWnd_x                                     0x1405C1D80
#define CListWnd__GetItemWnd_x                                     0x1405BF300
#define CListWnd__SetItemIcon_x                                    0x1405C1A50
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BAF00
#define CListWnd__SetVScrollPos_x                                  0x1405C1FC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404560E0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33328
#define MapViewMap__Clear_x                                        0x140457C60
#define MapViewMap__SetZoom_x                                      0x14045E2B0
#define MapViewMap__HandleLButtonDown_x                            0x14045ADF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047FAE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140486370
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140486B40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A420
#define CMerchantWnd__SelectBuySellSlot_x                          0x140489760
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E810

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067B660
#define CPacketScrambler__hton_x                                   0x14067B650

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2A70
#define CSidlManagerBase__FindAnimation1_x                         0x1405E29B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E30A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E2E50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1DB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E1D40
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1380

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F6890
#define CSidlManager__CreateXWnd_x                                 0x1404F6A50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A7580
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A7690
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F1C40 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7800
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A6CB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A6D80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A6F90
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7EF0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A8120
#define CSidlScreenWnd__GetChildItem_x                             0x1405A82C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8510
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B2560 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8880
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8BF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A94A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A9EA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DBF0
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA510
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AAD00
#define CSidlScreenWnd__vftable_x                                  0x140ACD6B8
#define CSidlScreenWnd__WndNotification_x                          0x1405AAD50

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403318D0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331BF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331B20
#define CSkillMgr__IsActivatedSkill_x                              0x140331FB0
#define CSkillMgr__IsCombatSkill_x                                 0x140331FF0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140331F20
#define CSkillMgr__GetSkillLastUsed_x                              0x140331B70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C2B40
#define CSliderWnd__SetValue_x                                     0x1405C3350
#define CSliderWnd__SetNumTicks_x                                  0x1405C31D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FD010

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C7AE0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B1F50
#define CStmlWnd__CalculateVSBRange_x                              0x1405C8970
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9450
#define CStmlWnd__ForceParseNow_x                                  0x1405C94F0
#define CStmlWnd__GetVisibleText_x                                 0x1405C9BB0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CB900
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CB940
#define CStmlWnd__SetSTMLText_x                                    0x1405D2910
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D2AC0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D2E50

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C3720
#define CTabWnd__DrawCurrentPage_x                                 0x1405C37C0
#define CTabWnd__DrawTab_x                                         0x1405C3B90
#define CTabWnd__GetTabRect_x                                      0x1405C4200
#define CTabWnd__InsertPage_x                                      0x1405C44D0
#define CTabWnd__RemovePage_x                                      0x1405C4760
#define CTabWnd__SetPage_x                                         0x1405C48C0
#define CTabWnd__UpdatePage_x                                      0x1405C4BC0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EBD50
#define CPageWnd__SetTabText_x                                     0x1405EBDC0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD000  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD410


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA440
#define CTextureFont__DrawWrappedText1_x                           0x1405DA350
#define CTextureFont__DrawWrappedText2_x                           0x1405DA570
#define CTextureFont__GetTextExtent_x                              0x1405DA920
#define CTextureFont__GetHeight_x                                  0x1405DA8E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F03A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A4180

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CFB0
#define CXStr__gCXStrAccess_x                                      0x140F1D748

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD5C0
#define CXWnd__ClrFocus_x                                          0x1405AD8B0
#define CXWnd__Destroy_x                                           0x1405ADA30
#define CXWnd__DoAllDrawing_x                                      0x1405ADB30
#define CXWnd__DrawColoredRect_x                                   0x1405AE300
#define CXWnd__DrawTooltip_x                                       0x1405AF970
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AFA20
#define CXWnd__GetChildItem_x                                      0x1405B0330
#define CXWnd__GetChildWndAt_x                                     0x1405B03F0
#define CXWnd__GetClientRect_x                                     0x1405B06A0
#define CXWnd__GetClientClipRect_x                                 0x1405B0560
#define CXWnd__GetRelativeRect_x                                   0x1405B2080
#define CXWnd__GetScreenClipRect_x                                 0x1405B2190
#define CXWnd__GetScreenRect_x                                     0x1405B22E0
#define CXWnd__GetTooltipRect_x                                    0x1405B2460
#define CXWnd__IsActive_x                                          0x1405B2A20
#define CXWnd__IsDescendantOf_x                                    0x1405B2A50
#define CXWnd__IsReallyVisible_x                                   0x1405B2AC0
#define CXWnd__IsType_x                                            0x1405B2B10
#define CXWnd__Minimize_x                                          0x1405B2C10
#define CXWnd__ProcessTransition_x                                 0x1405B3B00
#define CXWnd__Resize_x                                            0x1405B3C10
#define CXWnd__Right_x                                             0x1405B3CB0
#define CXWnd__SetFocus_x                                          0x1405B4060
#define CXWnd__SetFont_x                                           0x1405B40B0
#define CXWnd__SetKeyTooltip_x                                     0x1405B41B0
#define CXWnd__SetMouseOver_x                                      0x1405B42F0
#define CXWnd__SetParent_x                                         0x1405B4370
#define CXWnd__StartFade_x                                         0x1405B47A0
#define CXWnd__vftable_x                                           0x140ACDC90
#define CXWnd__CXWnd_x                                             0x1405AC170
#define CXWnd__dCXWnd_x                                            0x1405ACAC0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F6E80

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4720
#define CXWndManager__DrawCursor_x                                 0x1405D4A00
#define CXWndManager__DrawWindows_x                                0x1405D4C60
#define CXWndManager__GetKeyboardFlags_x                           0x1405D52B0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D52F0
#define CXWndManager__RemoveWnd_x                                  0x1405D8B20

// CDBStr
#define CDBStr__GetString_x                                        0x14018DC10

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406854C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1EE0
#define CCharacterListWnd__EnterWorld_x                            0x1400D0EF0
#define CCharacterListWnd__Quit_x                                  0x1400D1EC0
#define CCharacterListWnd__UpdateList_x                            0x1400D2D40

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140652AE0
#define ItemBase__CreateItemTagString_x                            0x140653570
#define ItemBase__GetImageNum_x                                    0x140655C80
#define ItemBase__GetItemValue_x                                   0x1406577F0
#define ItemBase__IsEmpty_x                                        0x140659570
#define ItemBase__IsKeyRingItem_x                                  0x140659C90
#define ItemBase__ValueSellMerchant_x                              0x14065DFA0
#define ItemClient__CanDrop_x                                      0x1402B8CD0
#define ItemClient__CanGoInBag_x                                   0x1402B8E00
#define ItemClient__CreateItemClient_x                             0x1402B9090
#define ItemClient__dItemClient_x                                  0x1402B8B40

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD4B0
#define EQ_LoadingS__Array_x                                       0x140D39240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140669FF0
#define PcBase__GetCombatAbility_x                                 0x14066A6E0
#define PcBase__GetCombatAbilityTimer_x                            0x14066A780
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066AF20
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066B9A0
#define PcClient__AlertInventoryChanged_x                          0x1402DBE60
#define PcClient__GetConLevel_x                                    0x1402DC5B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DED40
#define PcClient__HasLoreItem_x                                    0x1402DFDA0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC5F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EFAC0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221CF0
#define EQGroundItemListManager__Add_x                             0x140221EA0
#define EQGroundItemListManager__Clear_x                           0x140221F40
#define EQGroundItemListManager__Delete_x                          0x140222000
#define EQGroundItemListManager__Instance_x                        0x140222090

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025CBA0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188400

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F6B0
#define PlayerBase__CanSee1_x                                      0x14063F780
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063FC60
#define PlayerBase__HasProperty_x                                  0x14063FE30
#define PlayerBase__IsTargetable_x                                 0x14063FEF0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD760
#define PlayerClient__GetPcClient_x                                0x140300290
#define PlayerClient__PlayerClient_x                               0x1402F5AB0
#define PlayerClient__SetNameSpriteState_x                         0x1403039C0
#define PlayerClient__SetNameSpriteTint_x                          0x140304980
#define PlayerZoneClient__ChangeHeight_x                           0x1403134B0
#define PlayerZoneClient__DoAttack_x                               0x1403141C0
#define PlayerZoneClient__GetLevel_x                               0x1403178F0
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F940
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C010

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C9B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030CA60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030CB60
#define PlayerManagerClient__CreatePlayer_x                        0x14030C480
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063F270

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BE230
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BDB60
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BDBD0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BE1C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BE350
#define KeypressHandler__HandleKeyUp_x                             0x1402BE470
#define KeypressHandler__SaveKeymapping_x                          0x1402BE050  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140682FE0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067CDA0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E5E50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA710
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED6D0
#define PcZoneClient__RemovePetEffect_x                            0x1402EFDA0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EE2B0
#define PcZoneClient__CanEquipItem_x                               0x1402E8A10
#define PcZoneClient__GetItemByID_x                                0x1402EB630
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF940
#define PcZoneClient__BandolierSwap_x                              0x1402DBF10

// Doors
#define EQSwitch__UseSwitch_x                                      0x140264470

// IconCache
#define IconCache__GetIcon_x                                       0x1403CA1C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE650
#define CContainerMgr__CloseContainer_x                            0x1403BDF70
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE9D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA550

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B0640

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449F00
#define CLootWnd__RequestLootSlot_x                                0x14044AF50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DCE60
#define EQ_Spell__SpellAffects_x                                   0x1401DE140
#define EQ_Spell__SpellAffectBase_x                                0x1401DE0A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DAE10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DADC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DDD70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DD920
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD1E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2590

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405176A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516DB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405165C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051ED40  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140184DB0
#define CTaskManager__GetTaskStatus_x                              0x140184EC0
#define CTaskManager__GetElementDescription_x                      0x140184A40

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB180
#define EqSoundManager__PlayScriptMp3_x                            0x1401D9FC0
#define EqSoundManager__SoundAssistPlay_x                          0x140336D10  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140337050  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B5540
#define CTextureAnimation__SetCurCell_x                            0x1405B5850

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AE840

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069DD40
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069DDC0
#define CharacterBase__IsExpansionFlag_x                           0x140201180

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140399520
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399F90
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039B4E0

// messages
#define msg_spell_worn_off_x                                       0x140218230
#define msg_new_text_x                                             0x1402139F0
#define __msgTokenTextParam_x                                      0x14020AEC0
#define msgTokenText_x                                             0x14020ADD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338940
#define SpellManager__GetSpellByGroupAndRank_x                     0x140338860

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064E0F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140443330

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C33C0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C6830
#define CCursorAttachment__RemoveAttachment_x                      0x1403C6AE0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE840
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EEA30
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EEA40

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150960
#define CFindItemWnd__Update_x                                     0x140151300
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A2C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B0E0
#define LootFiltersManager__GetItemFilterData_x                    0x14015BBF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C490
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C740

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049CE50

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140331490
#define CResolutionHandler__UpdateResolution_x                     0x14059AB00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA930

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A2200  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A20F0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E1420
#define CGroupWnd__UpdateDisplay_x                                 0x1403E1000

// ItemBase
#define ItemBase__IsLore_x                                         0x140659DD0
#define ItemBase__IsLoreEquipped_x                                 0x140659E60

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1A00

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025CD00
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025CC90
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025CCD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B8F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140127390
#define FactionManagerClient__HandleFactionMessage_x               0x140127770
#define FactionManagerClient__GetFactionStanding_x                 0x140126B60
#define FactionManagerClient__GetMaxFaction_x                      0x140126B60
#define FactionManagerClient__GetMinFaction_x                      0x140126A10

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF5F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132B70

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B6070
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B5230
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B5E90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B5E10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DBF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B8F0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB340

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F7E0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EFA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140686040
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2590

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D790

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
