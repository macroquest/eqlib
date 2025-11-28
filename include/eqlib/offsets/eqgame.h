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

#define __ClientDate                                               20251127u
#define __ExpectedVersionDate                                     "Nov 27 2025"
#define __ExpectedVersionTime                                     "04:35:13"
#define __ActualVersionDate_x                                      0x140973918
#define __ActualVersionTime_x                                      0x140973908
#define __ActualVersionBuild_x                                     0x140908AC0

// Memory Protection
#define __MemChecker0_x                                            0x1402C6230
#define __MemChecker1_x                                            0x140595980
#define __MemChecker4_x                                            0x1402939A0
#define __EncryptPad0_x                                            0x140D46F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7F8C0
#define instEQZoneInfo_x                                           0x140E7FAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140227800
#define __gfMaxZoomCameraDistance_x                                0x140909D68
#define __gfMaxCameraDistance_x                                    0x140AB3CA4
#define __CurrentSocial_x                                          0x140C0295C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3E720
#define g_eqCommandStates_x                                        0x140D3F7C0
#define __CommandList_x                                            0x140D3FA00
#define __ScreenMode_x                                             0x140DC7234
#define __gWorld_x                                                 0x140E7A3E8
#define __gpbCommandEvent_x                                        0x140E77E94
#define __ServerHost_x                                             0x140E78098
#define __Guilds_x                                                 0x140E7E470
#define __MemCheckBitmask_x                                        0x140E7FDFF
#define __MemCheckActive_x                                         0x140E81515
#define __MouseEventTime_x                                         0x140EF4E88
#define DI8__MouseState_x                                          0x140EF9108
#define __heqmain_x                                                0x140EFB5A8
#define DI8__Mouse_x                                               0x140EF9058
#define __HWnd_x                                                   0x140EF90E0
#define __Mouse_x                                                  0x140EF9014
#define DI8__Keyboard_x                                            0x140EF9030
#define __LoginName_x                                              0x140EFBC8C
#define __CurrentMapLabel_x                                        0x140F0F7A0
#define __LabelCache_x                                             0x140F10370
#define __ChatFilterDefs_x                                         0x140A4DB70
#define Teleport_Table_Size_x                                      0x140E77F2C
#define Teleport_Table_x                                           0x140E783B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E7A800
#define pinstActiveBanker_x                                        0x140E77D60
#define pinstActiveCorpse_x                                        0x140E77D50
#define pinstActiveGMaster_x                                       0x140E77D58
#define pinstActiveMerchant_x                                      0x140E77D48
#define pinstAltAdvManager_x                                       0x140DC8010
#define pinstCEverQuest_x                                          0x140EF9050
#define pinstCamActor_x                                            0x140DC7220
#define pinstCDBStr_x                                              0x140DC6DC0
#define pinstCDisplay_x                                            0x140E77E98
#define pinstControlledPlayer_x                                    0x140E77DF0
#define pinstCResolutionHandler_x                                  0x140F20BA8
#define pinstCSidlManager_x                                        0x140F21910
#define pinstCXWndManager_x                                        0x140F21908
#define instDynamicZone_x                                          0x140E7E330 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7E37E
#define instExpeditionName_x                                       0x140E7E3BE
#define pinstDZMember_x                                            0x140E7E448
#define pinstDZTimerInfo_x                                         0x140E7E450
#define pinstEqLogin_x                                             0x140EFB5D0
#define instTribute_x                                              0x140D39D60
#define pinstDeviceInputProxy_x                                    0x140E7F91C
#define pinstEQSoundManager_x                                      0x140DC8390
#define pinstEQSpellStrings_x                                      0x140DAB950
#define pinstSGraphicsEngine_x                                     0x140F20938
#define pinstLocalPC_x                                             0x140E7A3D8
#define pinstLocalPlayer_x                                         0x140E77D40
#define pinstCMercenaryClientManager_x                             0x140EF67A8
#define pinstModelPlayer_x                                         0x140E77D70
#define pinstRenderInterface_x                                     0x140F20950
#define pinstSkillMgr_x                                            0x140EF8458
#define pinstSpawnManager_x                                        0x140EF6B60
#define pinstSpellManager_x                                        0x140EF84C0
#define pinstStringTable_x                                         0x140E7A3E0
#define pinstSwitchManager_x                                       0x140E77CC0
#define pinstTarget_x                                              0x140E77DE8
#define pinstTaskMember_x                                          0x140D39D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E77D68
#define instTributeActive_x                                        0x140D39D89
#define pinstViewActor_x                                           0x140DC7218
#define pinstWorldData_x                                           0x140E77E08
#define pinstPlayerPath_x                                          0x140EF6B88
#define pinstTargetIndicator_x                                     0x140EF8570
#define EQObject_Top_x                                             0x140E77F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F0C900
#define pinstCContainerMgr_x                                       0x140DC7348
#define pinstCContextMenuManager_x                                 0x140F215F0
#define pinstCInvSlotMgr_x                                         0x140DC7328
#define pinstCItemDisplayManager_x                                 0x140F0F370
#define pinstCPopupWndManager_x                                    0x140F0FC00
#define pinstCSpellDisplayMgr_x                                    0x140F10250
#define pinstCTaskManager_x                                        0x140C02C90
#define pinstEQSuiteTextureLoader_x                                0x140D50620
#define pinstItemIconCache_x                                       0x140F0CC60
#define pinstLootFiltersManager_x                                  0x140DC6808
#define pinstGFViewListener_x                                      0x140F20DC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140251360
#define __CastRay_x                                                0x1402497D0
#define __CastRay2_x                                               0x1402494D0
#define __compress_block_x                                         0x14054AD40
#define __ConvertItemTags_x                                        0x140249C30
#define __CleanItemTags_x                                          0x14008A5C0
#define __CreateCascadeMenuItems_x                                 0x140192740
#define __decompress_block_x                                       0x140591190
#define __DoesFileExist_x                                          0x140599830
#define __EQGetTime_x                                              0x140595F30
#define __ExecuteCmd_x                                             0x14021ED90
#define __FixHeading_x                                             0x140650050
#define __FlushDxKeyboard_x                                        0x14034A180
#define __get_bearing_x                                            0x140253590
#define __get_melee_range_x                                        0x140253680
#define __GetAnimationCache_x                                      0x1403CDA40
#define __GetGaugeValueFromEQ_x                                    0x14050A870
#define __GetLabelFromEQ_x                                         0x14050BE70
#define __GetXTargetType_x                                         0x140651330   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406500D0
#define __HelpPath_x                                               0x140EF4D50   // Why?
#define __NewUIINI_x                                               0x1405178B0   // Why?
#define __ProcessDeviceEvents_x                                    0x140293FB0
#define __ProcessGameEvents_x                                      0x1402889E0
#define __ProcessKeyboardEvents_x                                  0x14034B8D0
#define __ProcessMouseEvents_x                                     0x14028A100
#define __SaveColors_x                                             0x1401A2630
#define __STMLToText_x                                             0x1405A9670
#define __WndProc_x                                                0x140348920
#define CMemoryMappedFile__SetFile_x                               0x1407FD970
#define DrawNetStatus_x                                            0x1402D5560
#define Util__FastTime_x                                           0x140595460
#define __eq_delete_x                                              0x1406C9938
#define __eq_new_x                                                 0x1406C9B90
#define __CopyLayout_x                                             0x1402C2630
#define __ThrottleFrameRate_x                                      0x140277FBC
#define __ThrottleFrameRateEnd_x                                   0x140277FC2

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035B3D0
#define CAAWnd__Update_x                                           0x14035B6D0
#define CAAWnd__UpdateSelected_x                                   0x14035C8D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE550
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F30
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140854A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEE80

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD890
#define AltAdvManager__IsAbilityReady_x                            0x1401ADD20
#define AltAdvManager__GetAAById_x                                 0x1401AD160
#define AltAdvManager__CanTrainAbility_x                           0x1401ACF60
#define AltAdvManager__CanSeeAbility_x                             0x1401ACC20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5BF0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A60
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6CB0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAFD0
#define CharacterZoneClient__CanUseItem_x                          0x1400EB590
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7680
#define CharacterZoneClient__CastSpell_x                           0x1400D7720
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E74A0
#define CharacterZoneClient__Cur_HP_x                              0x1400ECCB0
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECE70
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA990
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F3530
#define CharacterZoneClient__GetBaseSkill_x                        0x140101BF0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBE30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA8D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4DC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3CB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBFB0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB7A0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD670
#define CharacterZoneClient__GetHPRegen_x                          0x1400F43E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC920
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F5050
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC030
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5DD0
#define CharacterZoneClient__GetModCap_x                           0x1400FD3A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC2C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC490
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0D00
#define CharacterZoneClient__HasSkill_x                            0x1400F8EE0
#define CharacterZoneClient__HitBySpell_x                          0x1400DCF20
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E08F0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE80
#define CharacterZoneClient__Max_Endurance_x                       0x1402F0310  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD1D0
#define CharacterZoneClient__Max_Mana_x                            0x1402F0530  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD630
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3F60
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C90
#define CharacterZoneClient__TotalEffect_x                         0x1400E6070
#define CharacterZoneClient__UseSkill_x                            0x140102B60


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037BA90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403866C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403824F0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140386140

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140388E40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD3580

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403ABC00
#define CChatWindowManager__InitContextMenu_x                      0x1403ABD90
#define CChatWindowManager__FreeChatWindow_x                       0x1403AAC50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B3D50
#define CChatWindowManager__CreateChatWindow_x                     0x1403AA680

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B100

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B4DA0
#define CChatWindow__Clear_x                                       0x1403B5D60
#define CChatWindow__WndNotification_x                             0x1403B6F50
#define CChatWindow__AddHistory_x                                  0x1403B5860

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D6D40
#define CContextMenu__RemoveMenuItem_x                             0x1405D7130
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D7100
#define CContextMenu__CheckMenuItem_x                              0x1405D6F70
#define CContextMenu__SetMenuItem_x                                0x1405D7150
#define CContextMenu__AddSeparator_x                               0x1405D6EB0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C8C00
#define CContextMenuManager__RemoveMenu_x                          0x1405C91E0
#define CContextMenuManager__PopupMenu_x                           0x1405C8F20
#define CContextMenuManager__Flush_x                               0x1405C8C80
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C53E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A3750
#define CChatService__GetFriendName_x                              0x1406A3760

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B9AF0
#define CComboWnd__Draw_x                                          0x1405B9BF0
#define CComboWnd__GetCurChoice_x                                  0x1405B9ED0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B9F70
#define CComboWnd__InsertChoice_x                                  0x1405BA2B0
#define CComboWnd__SetColors_x                                     0x1405BA640
#define CComboWnd__SetChoice_x                                     0x1405BA600
#define CComboWnd__GetItemCount_x                                  0x1405B9F60
#define CComboWnd__GetCurChoiceText_x                              0x1405B9F10  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B9EA0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405BA370

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C30F0
#define CContainerWnd__SetContainer_x                              0x14041F1D0
#define CContainerWnd__vftable_x                                   0x1409E8988

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC6FB4
#define CDisplay__ZoneMainUI_x                                     0x1405F10D0
#define CDisplay__PreZoneMainUI_x                                  0x14019F530
#define CDisplay__CleanGameUI_x                                    0x140191800
#define CDisplay__GetClickedActor_x                                0x1401959C0
#define CDisplay__GetUserDefinedColor_x                            0x140196630
#define CDisplay__InitCharSelectUI_x                               0x1401968E0
#define CDisplay__ReloadUI_x                                       0x1401A1830
#define CDisplay__RestartUI_x                                      0x140203580
#define CDisplay__WriteTextHD2_x                                   0x1401A8840
#define CDisplay__TrueDistance_x                                   0x1401A84F0
#define CDisplay__SetViewActor_x                                   0x1401A4D60
#define CDisplay__GetFloorHeight_x                                 0x140195C20
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7FE0
#define CDisplay__RealRender_World_x                               0x1401A0C00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FB300
#define CEditWnd__DrawCaret_x                                      0x1405ECDB0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405ED270
#define CEditWnd__GetCaretPt_x                                     0x1405ED4F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405ED530
#define CEditWnd__GetDisplayString_x                               0x1405ED7A0
#define CEditWnd__GetHorzOffset_x                                  0x1405ED9E0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EDB30
#define CEditWnd__GetSelStartPt_x                                  0x1405EDE10  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EDC60
#define CEditWnd__PointFromPrintableChar_x                         0x1405EE9C0
#define CEditWnd__ReplaceSelection_x                               0x1405EED70
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EF210
#define CEditWnd__SetEditable_x                                    0x1405EF4A0
#define CEditWnd__SetWindowText_x                                  0x1405EF4D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140279080
#define CEverQuest__ClickedPlayer_x                                0x14026D080
#define CEverQuest__CreateTargetIndicator_x                        0x14026D940
#define CEverQuest__DoTellWindow_x                                 0x14010AE10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B6F0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027AA70
#define CEverQuest__dsp_chat_x                                     0x14010A850 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A59E0
#define CEverQuest__Emote_x                                        0x14027B460
#define CEverQuest__GetBodyTypeDesc_x                              0x14027C240
#define CEverQuest__GetClassDesc_x                                 0x14027C2A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027C670
#define CEverQuest__GetDeityDesc_x                                 0x14027C920
#define CEverQuest__GetLangDesc_x                                  0x14027CD50
#define CEverQuest__GetRaceDesc_x                                  0x14027D0F0
#define CEverQuest__InterpretCmd_x                                 0x14027EA80
#define CEverQuest__LeftClickedOnPlayer_x                          0x140294020
#define CEverQuest__LMouseUp_x                                     0x140280500
#define CEverQuest__RightClickedOnPlayer_x                         0x1402915D0
#define CEverQuest__RMouseUp_x                                     0x14028AC90
#define CEverQuest__SetGameState_x                                 0x140296AA0
#define CEverQuest__UPCNotificationFlush_x                         0x14029C410 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140280160
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028C060
#define CEverQuest__ReportSuccessfulHit_x                          0x14028CE80

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D8930

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F60
#define CGuild__GetGuildName_x                                     0x1400C4FA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FBD70

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B7CE0
#define CHotButton__SetCheck_x                                     0x1402B7FB0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140415DA0
#define CInvSlotMgr__MoveItem_x                                    0x140416930
#define CInvSlotMgr__SelectSlot_x                                  0x140418C80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140412BA0
#define CInvSlot__SliderComplete_x                                 0x1404143D0
#define CInvSlot__GetItemBase_x                                    0x14040E200
#define CInvSlot__UpdateItem_x                                     0x140414890

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041AE60

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043C970
#define CItemDisplayWnd__UpdateStrings_x                           0x14043F590
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140439100
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043AA80
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043BD80

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405072F0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140509080

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405440A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404357B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157DF0

// CLabel
#define CLabel__UpdateText_x                                       0x140446990

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BD480
#define CListWnd__dCListWnd_x                                      0x1405BD8D0
#define CListWnd__vftable_x                                        0x140AD16D0
#define CListWnd__AddColumn_x                                      0x1405BDF70
#define CListWnd__AddColumn1_x                                     0x1405BE010
#define CListWnd__AddLine_x                                        0x1405BE170
#define CListWnd__AddString_x                                      0x1405BE700
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BEC70
#define CListWnd__CalculateVSBRange_x                              0x1405BEF50
#define CListWnd__ClearSel_x                                       0x1405BF100
#define CListWnd__ClearAllSel_x                                    0x1405BF0A0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BF160
#define CListWnd__Compare_x                                        0x1405BF320
#define CListWnd__Draw_x                                           0x1405BF7F0
#define CListWnd__DrawColumnSeparators_x                           0x1405C03A0
#define CListWnd__DrawHeader_x                                     0x1405C0460
#define CListWnd__DrawItem_x                                       0x1405C0B40
#define CListWnd__DrawLine_x                                       0x1405C14C0
#define CListWnd__DrawSeparator_x                                  0x1405C1980
#define CListWnd__EnableLine_x                                     0x1405C1DA0
#define CListWnd__EnsureVisible_x                                  0x1405C1E00
#define CListWnd__ExtendSel_x                                      0x1405C1F00
#define CListWnd__GetColumnMinWidth_x                              0x1405C2290
#define CListWnd__GetColumnWidth_x                                 0x1405C2310
#define CListWnd__GetCurSel_x                                      0x1405C2410
#define CListWnd__GetItemData_x                                    0x1405C2790
#define CListWnd__GetItemHeight_x                                  0x1405C27D0
#define CListWnd__GetItemRect_x                                    0x1405C29F0
#define CListWnd__GetItemText_x                                    0x1405C2C90
#define CListWnd__GetSelList_x                                     0x1405C2EE0
#define CListWnd__GetSeparatorRect_x                               0x1405C30D0
#define CListWnd__InsertLine_x                                     0x1405C4540
#define CListWnd__RemoveLine_x                                     0x1405C4BB0
#define CListWnd__SetColors_x                                      0x1405C4F70
#define CListWnd__SetColumnJustification_x                         0x1405C4F90
#define CListWnd__SetColumnLabel_x                                 0x1405C5010
#define CListWnd__SetColumnWidth_x                                 0x1405C51B0
#define CListWnd__SetCurSel_x                                      0x1405C5280
#define CListWnd__SetItemColor_x                                   0x1405C54F0
#define CListWnd__SetItemData_x                                    0x1405C5590
#define CListWnd__SetItemText_x                                    0x1405C57D0
#define CListWnd__Sort_x                                           0x1405C5BE0
#define CListWnd__ToggleSel_x                                      0x1405C5D50
#define CListWnd__SetColumnsSizable_x                              0x1405C5200
#define CListWnd__SetItemWnd_x                                     0x1405C5900
#define CListWnd__GetItemWnd_x                                     0x1405C2E70
#define CListWnd__SetItemIcon_x                                    0x1405C55D0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BEA40
#define CListWnd__SetVScrollPos_x                                  0x1405C5B40

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140459E90

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A36398
#define MapViewMap__Clear_x                                        0x14045BA10
#define MapViewMap__SetZoom_x                                      0x140462060
#define MapViewMap__HandleLButtonDown_x                            0x14045EBA0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404838A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14048A140
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048A920
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048E210
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048D560
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140492610

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067EA70
#define CPacketScrambler__hton_x                                   0x14067EA60

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E6670
#define CSidlManagerBase__FindAnimation1_x                         0x1405E65B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E6CA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E6A50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E59B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E5940
#define CSidlManagerBase__CreateXWnd_x                             0x1405E4F80

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404FA280
#define CSidlManager__CreateXWnd_x                                 0x1404FA440

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AB160
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AB290
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F5840 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AB410
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405AA890
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405AA960
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405AAB70
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405ABB00
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405ABD30
#define CSidlScreenWnd__GetChildItem_x                             0x1405ABED0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AC120
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B61A0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AC490
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AC800
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405AD0B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405ADAB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F20C68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AE140
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AE930
#define CSidlScreenWnd__vftable_x                                  0x140AD0958
#define CSidlScreenWnd__WndNotification_x                          0x1405AE980

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403332C0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403335E0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140333510
#define CSkillMgr__IsActivatedSkill_x                              0x1403339A0
#define CSkillMgr__IsCombatSkill_x                                 0x1403339E0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140333910
#define CSkillMgr__GetSkillLastUsed_x                              0x140333560

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14050A840
#define CSliderWnd__SetValue_x                                     0x1405C6EC0
#define CSliderWnd__SetNumTicks_x                                  0x1405C6D40

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140500A20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CB660
#define CStmlWnd__CalculateHSBRange_x                              0x1405B5BB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CC500
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CD000
#define CStmlWnd__ForceParseNow_x                                  0x1405CD0A0
#define CStmlWnd__GetVisibleText_x                                 0x1405CD770
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CF4D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CF510
#define CStmlWnd__SetSTMLText_x                                    0x1405D64E0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D6690
#define CStmlWnd__UpdateHistoryString_x                            0x1405D6A20

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C7290
#define CTabWnd__DrawCurrentPage_x                                 0x1405C7330
#define CTabWnd__DrawTab_x                                         0x1405C7700
#define CTabWnd__GetTabRect_x                                      0x1405C7D70
#define CTabWnd__InsertPage_x                                      0x1405C8040
#define CTabWnd__RemovePage_x                                      0x1405C82D0
#define CTabWnd__SetPage_x                                         0x1405C8430
#define CTabWnd__UpdatePage_x                                      0x1405C8730

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EF930
#define CPageWnd__SetTabText_x                                     0x1405EF9A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE530  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE940


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DE030
#define CTextureFont__DrawWrappedText1_x                           0x1405DDF40
#define CTextureFont__DrawWrappedText2_x                           0x1405DE160
#define CTextureFont__GetTextExtent_x                              0x1405DE510
#define CTextureFont__GetHeight_x                                  0x1405DE4D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F3FA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A7D60

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4FF90
#define CXStr__gCXStrAccess_x                                      0x140F207C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B1210
#define CXWnd__ClrFocus_x                                          0x1405B1500
#define CXWnd__Destroy_x                                           0x1405B1680
#define CXWnd__DoAllDrawing_x                                      0x1405B1780
#define CXWnd__DrawColoredRect_x                                   0x1405B1F50
#define CXWnd__DrawTooltip_x                                       0x1405B35D0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B3680
#define CXWnd__GetChildItem_x                                      0x1405B3F90
#define CXWnd__GetChildWndAt_x                                     0x1405B4050
#define CXWnd__GetClientRect_x                                     0x1405B4300
#define CXWnd__GetClientClipRect_x                                 0x1405B41C0
#define CXWnd__GetRelativeRect_x                                   0x1405B5CD0
#define CXWnd__GetScreenClipRect_x                                 0x1405B5DD0
#define CXWnd__GetScreenRect_x                                     0x1405B5F40
#define CXWnd__GetTooltipRect_x                                    0x1405B60B0
#define CXWnd__IsActive_x                                          0x1405B6660
#define CXWnd__IsDescendantOf_x                                    0x1405B6690
#define CXWnd__IsReallyVisible_x                                   0x1405B6700
#define CXWnd__IsType_x                                            0x1405B6750
#define CXWnd__Minimize_x                                          0x1405B6850
#define CXWnd__ProcessTransition_x                                 0x1405B7690
#define CXWnd__Resize_x                                            0x1405B77B0
#define CXWnd__Right_x                                             0x1405B7850
#define CXWnd__SetFocus_x                                          0x1405B7C10
#define CXWnd__SetFont_x                                           0x1405B7C60
#define CXWnd__SetKeyTooltip_x                                     0x1405B7D70
#define CXWnd__SetMouseOver_x                                      0x1405B7EB0
#define CXWnd__SetParent_x                                         0x1405B7F30
#define CXWnd__StartFade_x                                         0x1405B8350
#define CXWnd__vftable_x                                           0x140AD0F30
#define CXWnd__CXWnd_x                                             0x1405AFDA0
#define CXWnd__dCXWnd_x                                            0x1405B06F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FAA80

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D8300
#define CXWndManager__DrawCursor_x                                 0x1405D85E0
#define CXWndManager__DrawWindows_x                                0x1405D8840
#define CXWndManager__GetKeyboardFlags_x                           0x1405D8E90
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D8ED0
#define CXWndManager__RemoveWnd_x                                  0x1405DC6F0

// CDBStr
#define CDBStr__GetString_x                                        0x14018F9D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406888C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3490
#define CCharacterListWnd__EnterWorld_x                            0x1400D24A0
#define CCharacterListWnd__Quit_x                                  0x1400D3470
#define CCharacterListWnd__UpdateList_x                            0x1400D42F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406560C0
#define ItemBase__CreateItemTagString_x                            0x140656B50
#define ItemBase__GetImageNum_x                                    0x140659290
#define ItemBase__GetItemValue_x                                   0x14065ADB0
#define ItemBase__IsEmpty_x                                        0x14065CAB0
#define ItemBase__IsKeyRingItem_x                                  0x14065D1C0
#define ItemBase__ValueSellMerchant_x                              0x140661400
#define ItemClient__CanDrop_x                                      0x1402BA5F0
#define ItemClient__CanGoInBag_x                                   0x1402BA720
#define ItemClient__CreateItemClient_x                             0x1402BA9B0
#define ItemClient__dItemClient_x                                  0x1402BA460

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF240
#define EQ_LoadingS__Array_x                                       0x140D3C230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066D460
#define PcBase__GetCombatAbility_x                                 0x14066DB50
#define PcBase__GetCombatAbilityTimer_x                            0x14066DBF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066E390
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066EE00
#define PcClient__AlertInventoryChanged_x                          0x1402DD7A0
#define PcClient__GetConLevel_x                                    0x1402DDEF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E0680
#define PcClient__HasLoreItem_x                                    0x1402E16C0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EDF60
#define PcZoneClient__RemoveMyAffect_x                             0x1402F1450

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140223790
#define EQGroundItemListManager__Add_x                             0x140223940
#define EQGroundItemListManager__Clear_x                           0x1402239E0
#define EQGroundItemListManager__Delete_x                          0x140223AA0
#define EQGroundItemListManager__Instance_x                        0x140223B30

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025E450

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A1B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140642FF0
#define PlayerBase__CanSee1_x                                      0x1406430C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406435A0
#define PlayerBase__HasProperty_x                                  0x140643770
#define PlayerBase__IsTargetable_x                                 0x140643830
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FF0E0
#define PlayerClient__GetPcClient_x                                0x140301BF0
#define PlayerClient__PlayerClient_x                               0x1402F7430
#define PlayerClient__SetNameSpriteState_x                         0x140305320
#define PlayerClient__SetNameSpriteTint_x                          0x1403062E0
#define PlayerZoneClient__ChangeHeight_x                           0x140314E10
#define PlayerZoneClient__DoAttack_x                               0x140315B20
#define PlayerZoneClient__GetLevel_x                               0x140319250
#define PlayerZoneClient__IsValidTeleport_x                        0x1402611F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DDB0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030E310  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030E3C0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030E4C0
#define PlayerManagerClient__CreatePlayer_x                        0x14030DDE0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140642BB0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BFB50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BF480
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BF4F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BFAE0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BFC70
#define KeypressHandler__HandleKeyUp_x                             0x1402BFD90
#define KeypressHandler__SaveKeymapping_x                          0x1402BF970  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406863F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406801B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E7790  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EC070
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EF050
#define PcZoneClient__RemovePetEffect_x                            0x1402F1730
#define PcZoneClient__HasAlternateAbility_x                        0x1402EFC40
#define PcZoneClient__CanEquipItem_x                               0x1402EA360
#define PcZoneClient__GetItemByID_x                                0x1402ECFA0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F12D0
#define PcZoneClient__BandolierSwap_x                              0x1402DD850

// Doors
#define EQSwitch__UseSwitch_x                                      0x140265D20

// IconCache
#define IconCache__GetIcon_x                                       0x1403CDA70

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C1EA0
#define CContainerMgr__CloseContainer_x                            0x1403C17C0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C2220

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BE390

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B1ED0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044DCC0
#define CLootWnd__RequestLootSlot_x                                0x14044ED10

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DEA60
#define EQ_Spell__SpellAffects_x                                   0x1401DFD40
#define EQ_Spell__SpellAffectBase_x                                0x1401DFCA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC620
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC5D0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF970
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF520
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DEDE0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3AE0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051B0C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14051A7D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140519FD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140522760  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186BC0
#define CTaskManager__GetTaskStatus_x                              0x140186CD0
#define CTaskManager__GetElementDescription_x                      0x140186850

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DCD80
#define EqSoundManager__PlayScriptMp3_x                            0x1401DBBC0
#define EqSoundManager__SoundAssistPlay_x                          0x140338700  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140338A40  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B9080
#define CTextureAnimation__SetCurCell_x                            0x1405B9390

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B00D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A0ED0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A0F50
#define CharacterBase__IsExpansionFlag_x                           0x140202BF0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039CCD0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039D740
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039EC90

// messages
#define msg_spell_worn_off_x                                       0x140219CD0
#define msg_new_text_x                                             0x140215490
#define __msgTokenTextParam_x                                      0x14020C930
#define msgTokenText_x                                             0x14020C840

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033A340
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033A260

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140651710

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404470E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C6C10
#define CCursorAttachment__IsOkToActivate_x                        0x1403CA0B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403CA360
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F2440
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F2630
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F2640

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152770
#define CFindItemWnd__Update_x                                     0x140153110
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BD20

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CEC0
#define LootFiltersManager__GetItemFilterData_x                    0x14015D9E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E280
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E530

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A0C60

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332E80
#define CResolutionHandler__UpdateResolution_x                     0x14059E550

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BE150

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A52D0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A51C0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E4BE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E47C0

// ItemBase
#define ItemBase__IsLore_x                                         0x14065D300
#define ItemBase__IsLoreEquipped_x                                 0x14065D390

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D3350

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025E5B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025E540
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025E580

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032D450

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128B50
#define FactionManagerClient__HandleFactionMessage_x               0x140128F30
#define FactionManagerClient__GetFactionStanding_x                 0x140128320
#define FactionManagerClient__GetMaxFaction_x                      0x140128320
#define FactionManagerClient__GetMinFaction_x                      0x1401281D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134330

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7E20
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6FE0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B7C40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7BC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033F620

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032D450

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AEF70

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140350F20

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FD90

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140689440
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE5830

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140551160

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083C068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
