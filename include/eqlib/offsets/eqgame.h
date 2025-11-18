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

#define __ClientDate                                               20251116u
#define __ExpectedVersionDate                                     "Nov 16 2025"
#define __ExpectedVersionTime                                     "04:22:01"
#define __ActualVersionDate_x                                      0x14096F898
#define __ActualVersionTime_x                                      0x14096F888
#define __ActualVersionBuild_x                                     0x140904A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C4960
#define __MemChecker1_x                                            0x140591FA0
#define __MemChecker4_x                                            0x1402920F0
#define __EncryptPad0_x                                            0x140D42F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7B840
#define instEQZoneInfo_x                                           0x140E7BA34 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225D20
#define __gfMaxZoomCameraDistance_x                                0x140905CF8
#define __gfMaxCameraDistance_x                                    0x140AAFC44
#define __CurrentSocial_x                                          0x140BFE950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3A730
#define g_eqCommandStates_x                                        0x140D3B7D0
#define __CommandList_x                                            0x140D3BA00
#define __ScreenMode_x                                             0x140DC3194
#define __gWorld_x                                                 0x140E75D20
#define __gpbCommandEvent_x                                        0x140E76278
#define __ServerHost_x                                             0x140E76478
#define __Guilds_x                                                 0x140E7A400
#define __MemCheckBitmask_x                                        0x140E7BD7F
#define __MemCheckActive_x                                         0x140E7D495
#define __MouseEventTime_x                                         0x140EF0E10
#define DI8__MouseState_x                                          0x140EF5050
#define __heqmain_x                                                0x140EF74E0
#define DI8__Mouse_x                                               0x140EF74F8
#define __HWnd_x                                                   0x140EF7500
#define __Mouse_x                                                  0x140EF7508
#define DI8__Keyboard_x                                            0x140EF7528
#define __LoginName_x                                              0x140EF7C0C
#define __CurrentMapLabel_x                                        0x140F0B720
#define __LabelCache_x                                             0x140F0C2F0
#define __ChatFilterDefs_x                                         0x140A49B00
#define Teleport_Table_Size_x                                      0x140E7630C
#define Teleport_Table_x                                           0x140E73CE0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E76790
#define pinstActiveBanker_x                                        0x140E761C0
#define pinstActiveCorpse_x                                        0x140E761B0
#define pinstActiveGMaster_x                                       0x140E761B8
#define pinstActiveMerchant_x                                      0x140E761A8
#define pinstAltAdvManager_x                                       0x140DC3F88
#define pinstCEverQuest_x                                          0x140EF4FA8
#define pinstCamActor_x                                            0x140DC3180
#define pinstCDBStr_x                                              0x140DC2D40
#define pinstCDisplay_x                                            0x140E73CD8
#define pinstControlledPlayer_x                                    0x140E76250
#define pinstCResolutionHandler_x                                  0x140F1CB28
#define pinstCSidlManager_x                                        0x140F1D8A0
#define pinstCXWndManager_x                                        0x140F1D898
#define instDynamicZone_x                                          0x140E7A2C0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7A30E
#define instExpeditionName_x                                       0x140E7A34E
#define pinstDZMember_x                                            0x140E7A3D8
#define pinstDZTimerInfo_x                                         0x140E7A3E0
#define pinstEqLogin_x                                             0x140EF7550
#define instTribute_x                                              0x140D35D60
#define pinstDeviceInputProxy_x                                    0x140E7B89C
#define pinstEQSoundManager_x                                      0x140DC4310
#define pinstEQSpellStrings_x                                      0x140DA78D0
#define pinstSGraphicsEngine_x                                     0x140F1C8B8
#define pinstLocalPC_x                                             0x140E75D08
#define pinstLocalPlayer_x                                         0x140E761A0
#define pinstCMercenaryClientManager_x                             0x140EF2738
#define pinstModelPlayer_x                                         0x140E761D0
#define pinstRenderInterface_x                                     0x140F1C8D0
#define pinstSkillMgr_x                                            0x140EF43E8
#define pinstSpawnManager_x                                        0x140EF2AF0
#define pinstSpellManager_x                                        0x140EF4450
#define pinstStringTable_x                                         0x140E75D10
#define pinstSwitchManager_x                                       0x140E73C40
#define pinstTarget_x                                              0x140E76248
#define pinstTaskMember_x                                          0x140D35D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E761C8
#define instTributeActive_x                                        0x140D35D89
#define pinstViewActor_x                                           0x140DC3178
#define pinstWorldData_x                                           0x140E73CD0
#define pinstPlayerPath_x                                          0x140EF2B18
#define pinstTargetIndicator_x                                     0x140EF4500
#define EQObject_Top_x                                             0x140E76300

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F08880
#define pinstCContainerMgr_x                                       0x140DC31E8
#define pinstCContextMenuManager_x                                 0x140F1D580
#define pinstCInvSlotMgr_x                                         0x140DC31C8
#define pinstCItemDisplayManager_x                                 0x140F0B2F0
#define pinstCPopupWndManager_x                                    0x140F0BB80
#define pinstCSpellDisplayMgr_x                                    0x140F0C1D0
#define pinstCTaskManager_x                                        0x140BFEC90
#define pinstEQSuiteTextureLoader_x                                0x140D4C640
#define pinstItemIconCache_x                                       0x140F08BE0
#define pinstLootFiltersManager_x                                  0x140DC2788
#define pinstGFViewListener_x                                      0x140F1CD58


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024FA80
#define __CastRay_x                                                0x140247D00
#define __CastRay2_x                                               0x140247A00
#define __compress_block_x                                         0x140547370
#define __ConvertItemTags_x                                        0x140248160
#define __CleanItemTags_x                                          0x14008A5C0
#define __CreateCascadeMenuItems_x                                 0x1401909D0
#define __decompress_block_x                                       0x14058D7B0
#define __DoesFileExist_x                                          0x140595E50
#define __EQGetTime_x                                              0x140592550
#define __ExecuteCmd_x                                             0x14021D2B0
#define __FixHeading_x                                             0x14064CA10
#define __FlushDxKeyboard_x                                        0x1403487A0
#define __get_bearing_x                                            0x140251CB0
#define __get_melee_range_x                                        0x140251DA0
#define __GetAnimationCache_x                                      0x1403CA0D0
#define __GetGaugeValueFromEQ_x                                    0x140506E60
#define __GetLabelFromEQ_x                                         0x140508450
#define __GetXTargetType_x                                         0x14064DCF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064CA90
#define __HelpPath_x                                               0x140EF0CD8   // Why?
#define __NewUIINI_x                                               0x140513E90   // Why?
#define __ProcessDeviceEvents_x                                    0x140292700
#define __ProcessGameEvents_x                                      0x140287120
#define __ProcessKeyboardEvents_x                                  0x140349EF0
#define __ProcessMouseEvents_x                                     0x140288830
#define __SaveColors_x                                             0x1401A08D0
#define __STMLToText_x                                             0x1405A5A80
#define __WndProc_x                                                0x140346F40
#define CMemoryMappedFile__SetFile_x                               0x1407FA7C0
#define DrawNetStatus_x                                            0x1402D3C70
#define Util__FastTime_x                                           0x140591A80
#define __eq_delete_x                                              0x1406C6778
#define __eq_new_x                                                 0x1406C69D0
#define __CopyLayout_x                                             0x1402C0D70
#define __ThrottleFrameRate_x                                      0x1402766EC
#define __ThrottleFrameRateEnd_x                                   0x1402766F2

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403599D0
#define CAAWnd__Update_x                                           0x140359CD0
#define CAAWnd__UpdateSelected_x                                   0x14035AED0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACFE0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A59C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140850A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD910

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABB40
#define AltAdvManager__IsAbilityReady_x                            0x1401ABFD0
#define AltAdvManager__GetAAById_x                                 0x1401AB410
#define AltAdvManager__CanTrainAbility_x                           0x1401AB200
#define AltAdvManager__CanSeeAbility_x                             0x1401AAEC0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D4410
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D5280
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D54D0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9850
#define CharacterZoneClient__CanUseItem_x                          0x1400E9E10
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5EA0
#define CharacterZoneClient__CastSpell_x                           0x1400D5F40
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5D20
#define CharacterZoneClient__Cur_HP_x                              0x1400EB530
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB6F0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D91B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1DA0
#define CharacterZoneClient__GetBaseSkill_x                        0x140100470  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA650
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E9150
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3640
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2520
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA7D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA220
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC0F0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2C60
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB1A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F38D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA850
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4650
#define CharacterZoneClient__GetModCap_x                           0x1400FBC20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DAAE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DACB0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF780
#define CharacterZoneClient__HasSkill_x                            0x1400F7760
#define CharacterZoneClient__HitBySpell_x                          0x1400DB740
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF110
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB700
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE9D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBA50
#define CharacterZoneClient__Max_Mana_x                            0x1402EEBF0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FBEB0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E2760
#define CharacterZoneClient__SpellDuration_x                       0x1400E3490
#define CharacterZoneClient__TotalEffect_x                         0x1400E4870
#define CharacterZoneClient__UseSkill_x                            0x1401013E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378810

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382DF0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037EC60
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140382870

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140385570

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ACF2E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A82E0
#define CChatWindowManager__InitContextMenu_x                      0x1403A8470
#define CChatWindowManager__FreeChatWindow_x                       0x1403A7330
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B0430
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6D60

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109970

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B1480
#define CChatWindow__Clear_x                                       0x1403B2440
#define CChatWindow__WndNotification_x                             0x1403B3620
#define CChatWindow__AddHistory_x                                  0x1403B1F40

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D3190
#define CContextMenu__RemoveMenuItem_x                             0x1405D3580
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3550
#define CContextMenu__CheckMenuItem_x                              0x1405D33C0
#define CContextMenu__SetMenuItem_x                                0x1405D35A0
#define CContextMenu__AddSeparator_x                               0x1405D3300

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C5050
#define CContextMenuManager__RemoveMenu_x                          0x1405C5630
#define CContextMenuManager__PopupMenu_x                           0x1405C5370
#define CContextMenuManager__Flush_x                               0x1405C50D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C1AA0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A0590
#define CChatService__GetFriendName_x                              0x1406A05A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B5F50
#define CComboWnd__Draw_x                                          0x1405B6050
#define CComboWnd__GetCurChoice_x                                  0x1405B6320  // unused
#define CComboWnd__GetListRect_x                                   0x1405B63C0
#define CComboWnd__InsertChoice_x                                  0x1405B6700
#define CComboWnd__SetColors_x                                     0x1405B6A90
#define CComboWnd__SetChoice_x                                     0x1405B6A50
#define CComboWnd__GetItemCount_x                                  0x1405B63B0
#define CComboWnd__GetCurChoiceText_x                              0x1405B6360  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B62F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B67C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF7C0
#define CContainerWnd__SetContainer_x                              0x14041B550
#define CContainerWnd__vftable_x                                   0x1409E4918

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC2F04
#define CDisplay__ZoneMainUI_x                                     0x1405ED460
#define CDisplay__PreZoneMainUI_x                                  0x14019D7D0
#define CDisplay__CleanGameUI_x                                    0x14018FA90
#define CDisplay__GetClickedActor_x                                0x140193C60
#define CDisplay__GetUserDefinedColor_x                            0x1401948D0
#define CDisplay__InitCharSelectUI_x                               0x140194B80
#define CDisplay__ReloadUI_x                                       0x14019FAD0
#define CDisplay__RestartUI_x                                      0x140201B30
#define CDisplay__WriteTextHD2_x                                   0x1401A6AE0
#define CDisplay__TrueDistance_x                                   0x1401A6790
#define CDisplay__SetViewActor_x                                   0x1401A3000
#define CDisplay__GetFloorHeight_x                                 0x140193EC0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A6280
#define CDisplay__RealRender_World_x                               0x14019EEA0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7690
#define CEditWnd__DrawCaret_x                                      0x1405E9160  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9620
#define CEditWnd__GetCaretPt_x                                     0x1405E98A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E98E0
#define CEditWnd__GetDisplayString_x                               0x1405E9B50
#define CEditWnd__GetHorzOffset_x                                  0x1405E9D90
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E9EE0
#define CEditWnd__GetSelStartPt_x                                  0x1405EA1C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EA010
#define CEditWnd__PointFromPrintableChar_x                         0x1405EAD70
#define CEditWnd__ReplaceSelection_x                               0x1405EB120
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB5C0
#define CEditWnd__SetEditable_x                                    0x1405EB850
#define CEditWnd__SetWindowText_x                                  0x1405EB880

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402777C0
#define CEverQuest__ClickedPlayer_x                                0x14026B7B0
#define CEverQuest__CreateTargetIndicator_x                        0x14026C070
#define CEverQuest__DoTellWindow_x                                 0x140109680 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109F60 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402791B0
#define CEverQuest__dsp_chat_x                                     0x1401090C0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A4130
#define CEverQuest__Emote_x                                        0x140279BA0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A980
#define CEverQuest__GetClassDesc_x                                 0x14027A9E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027ADB0
#define CEverQuest__GetDeityDesc_x                                 0x14027B060
#define CEverQuest__GetLangDesc_x                                  0x14027B490
#define CEverQuest__GetRaceDesc_x                                  0x14027B830
#define CEverQuest__InterpretCmd_x                                 0x14027D1C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140292770
#define CEverQuest__LMouseUp_x                                     0x14027EC40
#define CEverQuest__RightClickedOnPlayer_x                         0x14028FD00
#define CEverQuest__RMouseUp_x                                     0x1402893C0
#define CEverQuest__SetGameState_x                                 0x1402951F0
#define CEverQuest__UPCNotificationFlush_x                         0x14029AB60 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E8A0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028A790
#define CEverQuest__ReportSuccessfulHit_x                          0x14028B5B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4FC0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3AA0
#define CGuild__GetGuildName_x                                     0x1400C3AE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F8560

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B6430
#define CHotButton__SetCheck_x                                     0x1402B6700

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140412170
#define CInvSlotMgr__MoveItem_x                                    0x140412D00
#define CInvSlotMgr__SelectSlot_x                                  0x140415010

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040F1D0
#define CInvSlot__SliderComplete_x                                 0x1404107D0
#define CInvSlot__GetItemBase_x                                    0x14040A9C0
#define CInvSlot__UpdateItem_x                                     0x140410C80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140417200

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438B80
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B740
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140435370
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436CD0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437FA0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405038F0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140505680

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405406D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140431A40

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140156070

// CLabel
#define CLabel__UpdateText_x                                       0x140442B20

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B98D0
#define CListWnd__dCListWnd_x                                      0x1405B9D20
#define CListWnd__vftable_x                                        0x140ACD430
#define CListWnd__AddColumn_x                                      0x1405BA3C0
#define CListWnd__AddColumn1_x                                     0x1405BA460
#define CListWnd__AddLine_x                                        0x1405BA5C0
#define CListWnd__AddString_x                                      0x1405BAB50
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BB0C0
#define CListWnd__CalculateVSBRange_x                              0x1405BB3A0
#define CListWnd__ClearSel_x                                       0x1405BB550
#define CListWnd__ClearAllSel_x                                    0x1405BB4F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB5B0
#define CListWnd__Compare_x                                        0x1405BB770
#define CListWnd__Draw_x                                           0x1405BBC40
#define CListWnd__DrawColumnSeparators_x                           0x1405BC7F0
#define CListWnd__DrawHeader_x                                     0x1405BC8B0
#define CListWnd__DrawItem_x                                       0x1405BCF90
#define CListWnd__DrawLine_x                                       0x1405BD910
#define CListWnd__DrawSeparator_x                                  0x1405BDDD0
#define CListWnd__EnableLine_x                                     0x1405BE1F0
#define CListWnd__EnsureVisible_x                                  0x1405BE250
#define CListWnd__ExtendSel_x                                      0x1405BE350
#define CListWnd__GetColumnMinWidth_x                              0x1405BE6E0
#define CListWnd__GetColumnWidth_x                                 0x1405BE760
#define CListWnd__GetCurSel_x                                      0x1405BE860
#define CListWnd__GetItemData_x                                    0x1405BEBE0
#define CListWnd__GetItemHeight_x                                  0x1405BEC20
#define CListWnd__GetItemRect_x                                    0x1405BEE40
#define CListWnd__GetItemText_x                                    0x1405BF0E0
#define CListWnd__GetSelList_x                                     0x1405BF330
#define CListWnd__GetSeparatorRect_x                               0x1405BF520
#define CListWnd__InsertLine_x                                     0x1405C0980
#define CListWnd__RemoveLine_x                                     0x1405C0FF0
#define CListWnd__SetColors_x                                      0x1405C13B0
#define CListWnd__SetColumnJustification_x                         0x1405C13D0
#define CListWnd__SetColumnLabel_x                                 0x1405C1450
#define CListWnd__SetColumnWidth_x                                 0x1405C15F0
#define CListWnd__SetCurSel_x                                      0x1405C16C0
#define CListWnd__SetItemColor_x                                   0x1405C1930
#define CListWnd__SetItemData_x                                    0x1405C19D0
#define CListWnd__SetItemText_x                                    0x1405C1C10
#define CListWnd__Sort_x                                           0x1405C2020
#define CListWnd__ToggleSel_x                                      0x1405C2190
#define CListWnd__SetColumnsSizable_x                              0x1405C1640
#define CListWnd__SetItemWnd_x                                     0x1405C1D40
#define CListWnd__GetItemWnd_x                                     0x1405BF2C0
#define CListWnd__SetItemIcon_x                                    0x1405C1A10
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BAE90
#define CListWnd__SetVScrollPos_x                                  0x1405C1F80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140456020

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A32328
#define MapViewMap__Clear_x                                        0x140457BA0
#define MapViewMap__SetZoom_x                                      0x14045E1F0
#define MapViewMap__HandleLButtonDown_x                            0x14045AD30

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047FA20  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404862C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140486AA0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A360
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404896B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E760

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067B570
#define CPacketScrambler__hton_x                                   0x14067B560

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2A20
#define CSidlManagerBase__FindAnimation1_x                         0x1405E2960
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E3050
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E2E00
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1D60
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E1CF0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1330

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F6880
#define CSidlManager__CreateXWnd_x                                 0x1404F6A40

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A7570
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A76A0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F1BD0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7820
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A6CA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A6D70
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A6F80
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7F00
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A8130
#define CSidlScreenWnd__GetChildItem_x                             0x1405A82D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8520
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B2580 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8890
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8C00
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A94A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A9EA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1CBF0
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA530
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AAD10
#define CSidlScreenWnd__vftable_x                                  0x140ACC6B8
#define CSidlScreenWnd__WndNotification_x                          0x1405AAD60

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140331920 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331C40 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331B70
#define CSkillMgr__IsActivatedSkill_x                              0x140332000
#define CSkillMgr__IsCombatSkill_x                                 0x140332040
#define CSkillMgr__GetSkillTimerDuration_x                         0x140331F70
#define CSkillMgr__GetSkillLastUsed_x                              0x140331BC0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C2B00
#define CSliderWnd__SetValue_x                                     0x1405C3310
#define CSliderWnd__SetNumTicks_x                                  0x1405C3190

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FD020

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C7AB0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B1F80
#define CStmlWnd__CalculateVSBRange_x                              0x1405C8950
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9450
#define CStmlWnd__ForceParseNow_x                                  0x1405C94F0
#define CStmlWnd__GetVisibleText_x                                 0x1405C9BC0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CB920
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CB960
#define CStmlWnd__SetSTMLText_x                                    0x1405D2930
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D2AE0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D2E70

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C36E0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3780
#define CTabWnd__DrawTab_x                                         0x1405C3B50
#define CTabWnd__GetTabRect_x                                      0x1405C41C0
#define CTabWnd__InsertPage_x                                      0x1405C4490
#define CTabWnd__RemovePage_x                                      0x1405C4720
#define CTabWnd__SetPage_x                                         0x1405C4880
#define CTabWnd__UpdatePage_x                                      0x1405C4B80

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EBCE0
#define CPageWnd__SetTabText_x                                     0x1405EBD50

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD040  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD450


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA440
#define CTextureFont__DrawWrappedText1_x                           0x1405DA350
#define CTextureFont__DrawWrappedText2_x                           0x1405DA570
#define CTextureFont__GetTextExtent_x                              0x1405DA920
#define CTextureFont__GetHeight_x                                  0x1405DA8E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F0330

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A4170

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4BFB0
#define CXStr__gCXStrAccess_x                                      0x140F1C748

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD5F0
#define CXWnd__ClrFocus_x                                          0x1405AD8E0
#define CXWnd__Destroy_x                                           0x1405ADA60
#define CXWnd__DoAllDrawing_x                                      0x1405ADB70
#define CXWnd__DrawColoredRect_x                                   0x1405AE320
#define CXWnd__DrawTooltip_x                                       0x1405AF9A0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AFA50
#define CXWnd__GetChildItem_x                                      0x1405B0350
#define CXWnd__GetChildWndAt_x                                     0x1405B0410
#define CXWnd__GetClientRect_x                                     0x1405B06D0
#define CXWnd__GetClientClipRect_x                                 0x1405B0580
#define CXWnd__GetRelativeRect_x                                   0x1405B20C0
#define CXWnd__GetScreenClipRect_x                                 0x1405B21C0
#define CXWnd__GetScreenRect_x                                     0x1405B2310
#define CXWnd__GetTooltipRect_x                                    0x1405B2480
#define CXWnd__IsActive_x                                          0x1405B2A40
#define CXWnd__IsDescendantOf_x                                    0x1405B2A70
#define CXWnd__IsReallyVisible_x                                   0x1405B2AE0
#define CXWnd__IsType_x                                            0x1405B2B30
#define CXWnd__Minimize_x                                          0x1405B2C30
#define CXWnd__ProcessTransition_x                                 0x1405B3AB0
#define CXWnd__Resize_x                                            0x1405B3BD0
#define CXWnd__Right_x                                             0x1405B3C70
#define CXWnd__SetFocus_x                                          0x1405B4020
#define CXWnd__SetFont_x                                           0x1405B4070
#define CXWnd__SetKeyTooltip_x                                     0x1405B4180
#define CXWnd__SetMouseOver_x                                      0x1405B42C0
#define CXWnd__SetParent_x                                         0x1405B4340
#define CXWnd__StartFade_x                                         0x1405B4770
#define CXWnd__vftable_x                                           0x140ACCC90
#define CXWnd__CXWnd_x                                             0x1405AC180
#define CXWnd__dCXWnd_x                                            0x1405ACAE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F6E10

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4740
#define CXWndManager__DrawCursor_x                                 0x1405D4A20
#define CXWndManager__DrawWindows_x                                0x1405D4C80
#define CXWndManager__GetKeyboardFlags_x                           0x1405D52D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D5310
#define CXWndManager__RemoveWnd_x                                  0x1405D8B10

// CDBStr
#define CDBStr__GetString_x                                        0x14018DC50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406853C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1F10
#define CCharacterListWnd__EnterWorld_x                            0x1400D0F20
#define CCharacterListWnd__Quit_x                                  0x1400D1EF0
#define CCharacterListWnd__UpdateList_x                            0x1400D2D70

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140652AA0
#define ItemBase__CreateItemTagString_x                            0x140653520
#define ItemBase__GetImageNum_x                                    0x140655BF0
#define ItemBase__GetItemValue_x                                   0x140657730
#define ItemBase__IsEmpty_x                                        0x140659470
#define ItemBase__IsKeyRingItem_x                                  0x140659BA0
#define ItemBase__ValueSellMerchant_x                              0x14065DE90
#define ItemClient__CanDrop_x                                      0x1402B8D30
#define ItemClient__CanGoInBag_x                                   0x1402B8E60
#define ItemClient__CreateItemClient_x                             0x1402B90F0
#define ItemClient__dItemClient_x                                  0x1402B8BA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD4F0
#define EQ_LoadingS__Array_x                                       0x140D38240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140669F00
#define PcBase__GetCombatAbility_x                                 0x14066A5F0
#define PcBase__GetCombatAbilityTimer_x                            0x14066A690
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066AE30
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066B8B0
#define PcClient__AlertInventoryChanged_x                          0x1402DBEC0
#define PcClient__GetConLevel_x                                    0x1402DC610  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DEDA0
#define PcClient__HasLoreItem_x                                    0x1402DFDF0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC640
#define PcZoneClient__RemoveMyAffect_x                             0x1402EFB10

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221CB0
#define EQGroundItemListManager__Add_x                             0x140221E60
#define EQGroundItemListManager__Clear_x                           0x140221F00
#define EQGroundItemListManager__Delete_x                          0x140221FC0
#define EQGroundItemListManager__Instance_x                        0x140222050

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025CB80

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188440

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F640
#define PlayerBase__CanSee1_x                                      0x14063F710
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063FBF0
#define PlayerBase__HasProperty_x                                  0x14063FDC0
#define PlayerBase__IsTargetable_x                                 0x14063FE80
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD7A0
#define PlayerClient__GetPcClient_x                                0x1403002D0
#define PlayerClient__PlayerClient_x                               0x1402F5AF0
#define PlayerClient__SetNameSpriteState_x                         0x140303A00
#define PlayerClient__SetNameSpriteTint_x                          0x1403049C0
#define PlayerZoneClient__ChangeHeight_x                           0x1403134F0
#define PlayerZoneClient__DoAttack_x                               0x140314200
#define PlayerZoneClient__GetLevel_x                               0x140317930
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F920
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C050

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C9F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030CAA0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030CBA0
#define PlayerManagerClient__CreatePlayer_x                        0x14030C4C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063F200

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BE290
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BDBC0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BDC30
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BE220  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BE3B0
#define KeypressHandler__HandleKeyUp_x                             0x1402BE4D0
#define KeypressHandler__SaveKeymapping_x                          0x1402BE0B0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140682EE0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067CCB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E5EB0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA770
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED720
#define PcZoneClient__RemovePetEffect_x                            0x1402EFDF0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EE300
#define PcZoneClient__CanEquipItem_x                               0x1402E8A70
#define PcZoneClient__GetItemByID_x                                0x1402EB690
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF990
#define PcZoneClient__BandolierSwap_x                              0x1402DBF70

// Doors
#define EQSwitch__UseSwitch_x                                      0x140264450

// IconCache
#define IconCache__GetIcon_x                                       0x1403CA100

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE570
#define CContainerMgr__CloseContainer_x                            0x1403BDE90
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE8F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA500

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B0620

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449E40
#define CLootWnd__RequestLootSlot_x                                0x14044AE90

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DCF30
#define EQ_Spell__SpellAffects_x                                   0x1401DE210
#define EQ_Spell__SpellAffectBase_x                                0x1401DE170
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DAE40
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DADF0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DDE40
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DD9F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD2B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C25E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140517690
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516DA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405165B0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051ED30  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140184DF0
#define CTaskManager__GetTaskStatus_x                              0x140184F00
#define CTaskManager__GetElementDescription_x                      0x140184A80

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB250
#define EqSoundManager__PlayScriptMp3_x                            0x1401DA090
#define EqSoundManager__SoundAssistPlay_x                          0x140336D60  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403370A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B54E0
#define CTextureAnimation__SetCurCell_x                            0x1405B57F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AE820

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069DC50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069DCD0
#define CharacterBase__IsExpansionFlag_x                           0x140201190

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403993C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399E30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039B380

// messages
#define msg_spell_worn_off_x                                       0x1402181F0
#define msg_new_text_x                                             0x1402139B0
#define __msgTokenTextParam_x                                      0x14020AED0
#define msgTokenText_x                                             0x14020ADE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338990
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403388B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064E0D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140443270

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C32B0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C6740
#define CCursorAttachment__RemoveAttachment_x                      0x1403C69F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE7D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EE9C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EE9D0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401509A0
#define CFindItemWnd__Update_x                                     0x140151340
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A2F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B140
#define LootFiltersManager__GetItemFilterData_x                    0x14015BC60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C500
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C7B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049CDB0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403314E0
#define CResolutionHandler__UpdateResolution_x                     0x14059AAF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA820

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A2110  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A2000  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E13D0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0FB0

// ItemBase
#define ItemBase__IsLore_x                                         0x140659CE0
#define ItemBase__IsLoreEquipped_x                                 0x140659D70

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1A60

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025CCE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025CC70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025CCB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B940

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140127380
#define FactionManagerClient__HandleFactionMessage_x               0x140127760
#define FactionManagerClient__GetFactionStanding_x                 0x140126B50
#define FactionManagerClient__GetMaxFaction_x                      0x140126B50
#define FactionManagerClient__GetMinFaction_x                      0x140126A00

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF5F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132B60

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B60C0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B5280
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B5EE0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B5E60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DC40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B940

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB350

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F540

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EFA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140685F40
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE1590

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D790

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140838058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
