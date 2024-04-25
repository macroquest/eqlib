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

#define __ClientDate                                               20240408u
#define __ExpectedVersionDate                                     "Apr  8 2024"
#define __ExpectedVersionTime                                     "16:24:55"
#define __ActualVersionDate_x                                      0x14093EA50
#define __ActualVersionTime_x                                      0x14093EA40
#define __ActualVersionBuild_x                                     0x1408D54E0

// Memory Protection
#define __MemChecker0_x                                            0x1402AE680
#define __MemChecker1_x                                            0x14056A850
#define __MemChecker4_x                                            0x14027CFF0
#define __EncryptPad0_x                                            0x140D0CE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E45A70
#define instEQZoneInfo_x                                           0x140E45C64 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140214CE0
#define __gfMaxZoomCameraDistance_x                                0x1408D6750
#define __gfMaxCameraDistance_x                                    0x140A7B224
#define __CurrentSocial_x                                          0x140BC8940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D04710
#define g_eqCommandStates_x                                        0x140D05780
#define __CommandList_x                                            0x140D059C0
#define __ScreenMode_x                                             0x140D8D27C
#define __gWorld_x                                                 0x140E3DEF8
#define __gpbCommandEvent_x                                        0x140E404BC
#define __ServerHost_x                                             0x140E406A8
#define __Guilds_x                                                 0x140E44630
#define __MouseEventTime_x                                         0x140EBAFD8
#define DI8__MouseState_x                                          0x140EBF1E0
#define __heqmain_x                                                0x140EC1670
#define DI8__Mouse_x                                               0x140EBF1B0
#define __HWnd_x                                                   0x140EBF1B8
#define __Mouse_x                                                  0x140EC1688
#define DI8__Keyboard_x                                            0x140EC16A8
#define __LoginName_x                                              0x140EC1D8C
#define __CurrentMapLabel_x                                        0x140ED5590
#define __LabelCache_x                                             0x140ED6160
#define __ChatFilterDefs_x                                         0x140A16320
#define Teleport_Table_Size_x                                      0x140E40544
#define Teleport_Table_x                                           0x140E3E000

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E409C0
#define pinstActiveBanker_x                                        0x140E3DF20
#define pinstActiveCorpse_x                                        0x140E3DF10
#define pinstActiveGMaster_x                                       0x140E3DF18
#define pinstActiveMerchant_x                                      0x140E3DF08
#define pinstAltAdvManager_x                                       0x140D8E1D8
#define pinstCEverQuest_x                                          0x140EBF128
#define pinstCamActor_x                                            0x140D8D268
#define pinstCDBStr_x                                              0x140D8CF90
#define pinstCDisplay_x                                            0x140E40018
#define pinstControlledPlayer_x                                    0x140E3DFB0
#define pinstCResolutionHandler_x                                  0x141546928
#define pinstCSidlManager_x                                        0x140EE7460
#define pinstCXWndManager_x                                        0x140EE7458
#define instDynamicZone_x                                          0x140E444F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4453E
#define instExpeditionName_x                                       0x140E4457E
#define pinstDZMember_x                                            0x140E44608
#define pinstDZTimerInfo_x                                         0x140E44610
#define pinstEqLogin_x                                             0x140EC16D0
#define instTribute_x                                              0x140CFFD50
#define pinstEQSoundManager_x                                      0x140D8E558
#define pinstEQSpellStrings_x                                      0x140D71B60
#define pinstSGraphicsEngine_x                                     0x1415466A8
#define pinstLocalPC_x                                             0x140E3DFE8
#define pinstLocalPlayer_x                                         0x140E3DF00
#define pinstCMercenaryClientManager_x                             0x140EBC8C8
#define pinstModelPlayer_x                                         0x140E3DF30
#define pinstRenderInterface_x                                     0x1415466C0
#define pinstSkillMgr_x                                            0x140EBE560
#define pinstSpawnManager_x                                        0x140EBCC80
#define pinstSpellManager_x                                        0x140EBE5C8
#define pinstStringTable_x                                         0x140E3DFF0
#define pinstSwitchManager_x                                       0x140E3DE70
#define pinstTarget_x                                              0x140E3DFA8
#define pinstTaskMember_x                                          0x140CFFD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3DFB8
#define pinstTradeTarget_x                                         0x140E3DF28
#define instTributeActive_x                                        0x140CFFD79
#define pinstViewActor_x                                           0x140D8D260
#define pinstWorldData_x                                           0x140E3DFF8
#define pinstPlayerPath_x                                          0x140EBCCA8
#define pinstTargetIndicator_x                                     0x140EBE678
#define EQObject_Top_x                                             0x140E3DFD0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED26E8
#define pinstCContainerMgr_x                                       0x140D8D508
#define pinstCContextMenuManager_x                                 0x140EE7140
#define pinstCInvSlotMgr_x                                         0x140D8D500
#define pinstCItemDisplayManager_x                                 0x140ED5160
#define pinstCPopupWndManager_x                                    0x140ED59F0
#define pinstCSpellDisplayMgr_x                                    0x140ED6040
#define pinstCTaskManager_x                                        0x140BC8C80
#define pinstEQSuiteTextureLoader_x                                0x140D16530
#define pinstItemIconCache_x                                       0x140ED2A48
#define pinstLootFiltersManager_x                                  0x140D8C9D8
#define pinstGFViewListener_x                                      0x140EE6918


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023D8E0
#define __CastRay_x                                                0x140235D30
#define __CastRay2_x                                               0x140235A30
#define __ConvertItemTags_x                                        0x140236190
#define __CleanItemTags_x                                          0x140087F30
#define __CreateCascadeMenuItems_x                                 0x1401855B0
#define __DoesFileExist_x                                          0x14056E700
#define __EQGetTime_x                                              0x14056AE00
#define __ExecuteCmd_x                                             0x14020C640
#define __FixHeading_x                                             0x140696500
#define __FlushDxKeyboard_x                                        0x140330500
#define __get_bearing_x                                            0x14023FAD0
#define __get_melee_range_x                                        0x14023FBD0
#define __GetAnimationCache_x                                      0x1403AD670
#define __GetGaugeValueFromEQ_x                                    0x1404E1070
#define __GetLabelFromEQ_x                                         0x1404E2670
#define __GetXTargetType_x                                         0x1406977E0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140696580
#define __HelpPath_x                                               0x140EBAEA0   // Why?
#define __NewUIINI_x                                               0x1404EE050   // Why?
#define __ProcessGameEvents_x                                      0x1402724E0
#define __ProcessKeyboardEvents_x                                  0x140331C50
#define __ProcessMouseEvents_x                                     0x140273A10
#define __SaveColors_x                                             0x1401955E0
#define __STMLToText_x                                             0x140573040
#define __WndProc_x                                                0x14032ED00
#define CMemoryMappedFile__SetFile_x                               0x1407CEE40
#define DrawNetStatus_x                                            0x1402BCAC0
#define Util__FastTime_x                                           0x14056A390
#define __eq_delete_x                                              0x14069E434
#define __eq_new_x                                                 0x14069E3F0
#define __CopyLayout_x                                             0x1402AAAA0
#define __ThrottleFrameRate_x                                      0x140261D64
#define __ThrottleFrameRateEnd_x                                   0x140261DC4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140341310
#define CAAWnd__Update_x                                           0x140341610
#define CAAWnd__UpdateSelected_x                                   0x140342650

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA340
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2C30
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140823A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAC30

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A06F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A0970
#define AltAdvManager__GetAAById_x                                 0x14019FFC0
#define AltAdvManager__CanTrainAbility_x                           0x14019FDF0
#define AltAdvManager__CanSeeAbility_x                             0x14019FAB0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0BA0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D19E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1C30
#define CharacterZoneClient__CanUseItem_x                          0x1400E5ED0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2600
#define CharacterZoneClient__CastSpell_x                           0x1400D26A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1A00
#define CharacterZoneClient__Cur_HP_x                              0x1400E75E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E77A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5440
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDC60
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC690  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D68A0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E53A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF820
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE6F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6A70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C70F0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AC0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEE30
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7250
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFAB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6AF0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0890
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6CF0
#define CharacterZoneClient__GetModCap_x                           0x1400F7E50
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6D80
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6F90
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC30
#define CharacterZoneClient__HasSkill_x                            0x1400F3880
#define CharacterZoneClient__HitBySpell_x                          0x1400D7A40
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB1E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7930
#define CharacterZoneClient__Max_Endurance_x                       0x1402D94D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7C80
#define CharacterZoneClient__Max_Mana_x                            0x1402D96F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F80E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE590
#define CharacterZoneClient__SpellDuration_x                       0x1400DF290
#define CharacterZoneClient__TotalEffect_x                         0x1400E05E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD600


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035F7B0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140369AE0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140365970
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140364A00

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036C190

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A99F10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14038F050
#define CChatWindowManager__InitContextMenu_x                      0x14038F1E0
#define CChatWindowManager__FreeChatWindow_x                       0x14038E0D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140396D90
#define CChatWindowManager__CreateChatWindow_x                     0x14038DA10

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105910

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140397DD0
#define CChatWindow__Clear_x                                       0x140398C70
#define CChatWindow__WndNotification_x                             0x140399E60
#define CChatWindow__AddHistory_x                                  0x140398770

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A8100
#define CContextMenu__RemoveMenuItem_x                             0x1405A84F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A84C0
#define CContextMenu__CheckMenuItem_x                              0x1405A8330
#define CContextMenu__SetMenuItem_x                                0x1405A8510
#define CContextMenu__AddSeparator_x                               0x1405A8270

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140599FC0
#define CContextMenuManager__RemoveMenu_x                          0x14059A5A0
#define CContextMenuManager__PopupMenu_x                           0x14059A2E0
#define CContextMenuManager__Flush_x                               0x14059A040
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A55B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14065F8F0
#define CChatService__GetFriendName_x                              0x14065F900

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058AF00
#define CComboWnd__Draw_x                                          0x14058B000
#define CComboWnd__GetCurChoice_x                                  0x14058B2E0  // unused
#define CComboWnd__GetListRect_x                                   0x14058B380
#define CComboWnd__InsertChoice_x                                  0x14058B6C0
#define CComboWnd__SetColors_x                                     0x14058BA50
#define CComboWnd__SetChoice_x                                     0x14058BA10
#define CComboWnd__GetItemCount_x                                  0x14058B370
#define CComboWnd__GetCurChoiceText_x                              0x14058B320  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058B2B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058B780

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A3320
#define CContainerWnd__SetContainer_x                              0x1403F8910
#define CContainerWnd__vftable_x                                   0x1409B2478

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8CFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C22F0
#define CDisplay__PreZoneMainUI_x                                  0x1401924D0
#define CDisplay__CleanGameUI_x                                    0x140184690
#define CDisplay__GetClickedActor_x                                0x140188800
#define CDisplay__GetUserDefinedColor_x                            0x140189470
#define CDisplay__InitCharSelectUI_x                               0x140189720
#define CDisplay__ReloadUI_x                                       0x1401947C0
#define CDisplay__WriteTextHD2_x                                   0x14019B810
#define CDisplay__TrueDistance_x                                   0x14019B4C0
#define CDisplay__SetViewActor_x                                   0x140197D00
#define CDisplay__GetFloorHeight_x                                 0x140188A60
#define CDisplay__ToggleScreenshotMode_x                           0x14019AFB0
#define CDisplay__RealRender_World_x                               0x140193BA0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CC4B0
#define CEditWnd__DrawCaret_x                                      0x1405BDFD0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405BE490
#define CEditWnd__GetCaretPt_x                                     0x1405BE710  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405BE750
#define CEditWnd__GetDisplayString_x                               0x1405BE9C0
#define CEditWnd__GetHorzOffset_x                                  0x1405BEC00
#define CEditWnd__GetLineForPrintableChar_x                        0x1405BED50
#define CEditWnd__GetSelStartPt_x                                  0x1405BF030  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405BEE80
#define CEditWnd__PointFromPrintableChar_x                         0x1405BFBE0
#define CEditWnd__ReplaceSelection_x                               0x1405BFF90
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C0430
#define CEditWnd__SetEditable_x                                    0x1405C06C0
#define CEditWnd__SetWindowText_x                                  0x1405C06F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140262E70
#define CEverQuest__ClickedPlayer_x                                0x1402589A0
#define CEverQuest__CreateTargetIndicator_x                        0x140259260
#define CEverQuest__DoTellWindow_x                                 0x140105620 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105EE0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140264830
#define CEverQuest__dsp_chat_x                                     0x140105050 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14028EA10
#define CEverQuest__Emote_x                                        0x140265210
#define CEverQuest__GetBodyTypeDesc_x                              0x140265FC0
#define CEverQuest__GetClassDesc_x                                 0x140266020
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402663F0
#define CEverQuest__GetDeityDesc_x                                 0x1402666A0
#define CEverQuest__GetLangDesc_x                                  0x140266AD0
#define CEverQuest__GetRaceDesc_x                                  0x140266E70
#define CEverQuest__InterpretCmd_x                                 0x1402687A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027D670
#define CEverQuest__LMouseUp_x                                     0x14026A170
#define CEverQuest__RightClickedOnPlayer_x                         0x14027AE90
#define CEverQuest__RMouseUp_x                                     0x140274590
#define CEverQuest__SetGameState_x                                 0x14027FBB0
#define CEverQuest__UPCNotificationFlush_x                         0x1402854E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140269DE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140275940
#define CEverQuest__ReportSuccessfulHit_x                          0x140276760

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B7A40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0EA0
#define CGuild__GetGuildName_x                                     0x1400C0EE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D9F20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A0540
#define CHotButton__SetCheck_x                                     0x1402A0810

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F1660
#define CInvSlotMgr__MoveItem_x                                    0x1403F1840
#define CInvSlotMgr__SelectSlot_x                                  0x1403F31E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403EE860
#define CInvSlot__SliderComplete_x                                 0x1403EFDB0
#define CInvSlot__GetItemBase_x                                    0x1403EA490
#define CInvSlot__UpdateItem_x                                     0x1403F0260

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F4570

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404158B0
#define CItemDisplayWnd__UpdateStrings_x                           0x140418200
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404123B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140413B10
#define CItemDisplayWnd__RequestConvertItem_x                      0x140414CD0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DDB90
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DF880

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140519290

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14040EAF0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014CE20

// CLabel
#define CLabel__UpdateText_x                                       0x14041F5F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x14058E890
#define CListWnd__dCListWnd_x                                      0x14058ECE0
#define CListWnd__vftable_x                                        0x140A98068
#define CListWnd__AddColumn_x                                      0x14058F380
#define CListWnd__AddColumn1_x                                     0x14058F420
#define CListWnd__AddLine_x                                        0x14058F580
#define CListWnd__AddString_x                                      0x14058FB10
#define CListWnd__CalculateFirstVisibleLine_x                      0x140590080
#define CListWnd__CalculateVSBRange_x                              0x140590360
#define CListWnd__ClearSel_x                                       0x140590510
#define CListWnd__ClearAllSel_x                                    0x1405904B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140590570
#define CListWnd__Compare_x                                        0x140590730
#define CListWnd__Draw_x                                           0x140590C00
#define CListWnd__DrawColumnSeparators_x                           0x1405917B0
#define CListWnd__DrawHeader_x                                     0x140591870
#define CListWnd__DrawItem_x                                       0x140591F50
#define CListWnd__DrawLine_x                                       0x1405928D0
#define CListWnd__DrawSeparator_x                                  0x140592D90
#define CListWnd__EnableLine_x                                     0x1405931B0
#define CListWnd__EnsureVisible_x                                  0x140593210
#define CListWnd__ExtendSel_x                                      0x140593310
#define CListWnd__GetColumnMinWidth_x                              0x140593640
#define CListWnd__GetColumnWidth_x                                 0x1405936C0
#define CListWnd__GetCurSel_x                                      0x1405937C0
#define CListWnd__GetItemData_x                                    0x140593B40
#define CListWnd__GetItemHeight_x                                  0x140593B80
#define CListWnd__GetItemRect_x                                    0x140593DA0
#define CListWnd__GetItemText_x                                    0x140594040
#define CListWnd__GetSelList_x                                     0x140594290
#define CListWnd__GetSeparatorRect_x                               0x140594480
#define CListWnd__InsertLine_x                                     0x1405958F0
#define CListWnd__RemoveLine_x                                     0x140595F60
#define CListWnd__SetColors_x                                      0x140596320
#define CListWnd__SetColumnJustification_x                         0x140596340
#define CListWnd__SetColumnLabel_x                                 0x1405963C0
#define CListWnd__SetColumnWidth_x                                 0x140596560
#define CListWnd__SetCurSel_x                                      0x140596630
#define CListWnd__SetItemColor_x                                   0x1405968A0
#define CListWnd__SetItemData_x                                    0x140596940
#define CListWnd__SetItemText_x                                    0x140596B80
#define CListWnd__Sort_x                                           0x140596F90
#define CListWnd__ToggleSel_x                                      0x140597100
#define CListWnd__SetColumnsSizable_x                              0x1405965B0
#define CListWnd__SetItemWnd_x                                     0x140596CB0
#define CListWnd__GetItemWnd_x                                     0x140594220
#define CListWnd__SetItemIcon_x                                    0x140596980
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058FE50
#define CListWnd__SetVScrollPos_x                                  0x140596EF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404328B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409FEF38
#define MapViewMap__Clear_x                                        0x140434430
#define MapViewMap__SetZoom_x                                      0x14043AA80
#define MapViewMap__HandleLButtonDown_x                            0x1404375C0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045C110  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404626A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140462E40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140466660
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404659A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046A8E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063C360
#define CPacketScrambler__hton_x                                   0x14063C350

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B7890
#define CSidlManagerBase__FindAnimation1_x                         0x1405B77D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B7EC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B7C70
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B6BD0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B6B60
#define CSidlManagerBase__CreateXWnd_x                             0x1405B61A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D0BD0
#define CSidlManager__CreateXWnd_x                                 0x1404D0D90

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057C4D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057C3A0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C6A60 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057C650
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057BAF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057BBC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057BDD0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057CCF0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057CF20
#define CSidlScreenWnd__GetChildItem_x                             0x14057D0C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057D310
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140587460 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057D680
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057D9F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14057E2B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14057EBA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE67B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14057F1F0
#define CSidlScreenWnd__StoreIniVis_x                              0x14057F9E0
#define CSidlScreenWnd__vftable_x                                  0x140A972D8
#define CSidlScreenWnd__WndNotification_x                          0x14057FA30

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140319A70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140319F10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140319E40
#define CSkillMgr__IsActivatedSkill_x                              0x14031A2C0
#define CSkillMgr__IsCombatSkill_x                                 0x14031A300
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031A230
#define CSkillMgr__GetSkillLastUsed_x                              0x140319E90

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140597A70
#define CSliderWnd__SetValue_x                                     0x140598280
#define CSliderWnd__SetNumTicks_x                                  0x140598100

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D7200

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059CA20
#define CStmlWnd__CalculateHSBRange_x                              0x140586E10
#define CStmlWnd__CalculateVSBRange_x                              0x14059D940
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059E3C0
#define CStmlWnd__ForceParseNow_x                                  0x14059E460
#define CStmlWnd__GetVisibleText_x                                 0x14059EB30
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A0890
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A08D0
#define CStmlWnd__SetSTMLText_x                                    0x1405A78A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A7A50
#define CStmlWnd__UpdateHistoryString_x                            0x1405A7DE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140598650
#define CTabWnd__DrawCurrentPage_x                                 0x1405986F0
#define CTabWnd__DrawTab_x                                         0x140598AC0
#define CTabWnd__GetTabRect_x                                      0x140599130
#define CTabWnd__InsertPage_x                                      0x140599400
#define CTabWnd__RemovePage_x                                      0x140599690
#define CTabWnd__SetPage_x                                         0x1405997F0
#define CTabWnd__UpdatePage_x                                      0x140599AF0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C0B50
#define CPageWnd__SetTabText_x                                     0x1405C0BC0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA5F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAA00


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405AF260
#define CTextureFont__DrawWrappedText1_x                           0x1405AF170
#define CTextureFont__DrawWrappedText2_x                           0x1405AF390
#define CTextureFont__GetTextExtent_x                              0x1405AF740
#define CTextureFont__GetHeight_x                                  0x1405AF700

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C51C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057B6D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D15EA0
#define CXStr__gCXStrAccess_x                                      0x140EE65B8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140582460
#define CXWnd__ClrFocus_x                                          0x140582750
#define CXWnd__Destroy_x                                           0x1405828D0
#define CXWnd__DoAllDrawing_x                                      0x1405829E0
#define CXWnd__DrawColoredRect_x                                   0x1405831B0
#define CXWnd__DrawTooltip_x                                       0x140584830
#define CXWnd__DrawTooltipAtPoint_x                                0x1405848E0
#define CXWnd__GetChildItem_x                                      0x1405851F0
#define CXWnd__GetChildWndAt_x                                     0x1405852B0
#define CXWnd__GetClientRect_x                                     0x140585570
#define CXWnd__GetClientClipRect_x                                 0x140585420
#define CXWnd__GetRelativeRect_x                                   0x140586F50
#define CXWnd__GetScreenClipRect_x                                 0x140587060
#define CXWnd__GetScreenRect_x                                     0x1405871E0
#define CXWnd__GetTooltipRect_x                                    0x140587360
#define CXWnd__IsActive_x                                          0x140587920
#define CXWnd__IsDescendantOf_x                                    0x140587950
#define CXWnd__IsReallyVisible_x                                   0x1405879C0
#define CXWnd__IsType_x                                            0x140587A00
#define CXWnd__Minimize_x                                          0x140587B00
#define CXWnd__ProcessTransition_x                                 0x1405889F0
#define CXWnd__Resize_x                                            0x140588B10
#define CXWnd__Right_x                                             0x140588BB0
#define CXWnd__SetFocus_x                                          0x140588F70
#define CXWnd__SetFont_x                                           0x140588FC0
#define CXWnd__SetKeyTooltip_x                                     0x1405890D0
#define CXWnd__SetMouseOver_x                                      0x140589210
#define CXWnd__SetParent_x                                         0x140589290
#define CXWnd__StartFade_x                                         0x1405896E0
#define CXWnd__vftable_x                                           0x140A978C8
#define CXWnd__CXWnd_x                                             0x140580FF0
#define CXWnd__dCXWnd_x                                            0x140581940

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CBC30

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A96C0
#define CXWndManager__DrawCursor_x                                 0x1405A99A0
#define CXWndManager__DrawWindows_x                                0x1405A9C00
#define CXWndManager__GetKeyboardFlags_x                           0x1405AA2D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AA310
#define CXWndManager__RemoveWnd_x                                  0x1405AD930

// CDBStr
#define CDBStr__GetString_x                                        0x140182800

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406455F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE880
#define CCharacterListWnd__EnterWorld_x                            0x1400CD580
#define CCharacterListWnd__Quit_x                                  0x1400CE860
#define CCharacterListWnd__UpdateList_x                            0x1400CF570

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140614100
#define ItemBase__CreateItemTagString_x                            0x140614B80
#define ItemBase__GetImageNum_x                                    0x140617140
#define ItemBase__GetItemValue_x                                   0x140618C10
#define ItemBase__IsEmpty_x                                        0x14061A800
#define ItemBase__IsKeyRingItem_x                                  0x14061AF30
#define ItemBase__ValueSellMerchant_x                              0x14061F0E0
#define ItemClient__CanDrop_x                                      0x1402A2B30
#define ItemClient__CanGoInBag_x                                   0x1402A2C60
#define ItemClient__CreateItemClient_x                             0x1402A2F40
#define ItemClient__dItemClient_x                                  0x1402A29A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A1E90
#define EQ_LoadingS__Array_x                                       0x140D02220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062B7C0
#define PcBase__GetCombatAbility_x                                 0x14062BE60
#define PcBase__GetCombatAbilityTimer_x                            0x14062BF00
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062C650
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062D140
#define PcClient__AlertInventoryChanged_x                          0x1402C50A0
#define PcClient__GetConLevel_x                                    0x1402C56C0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C7DF0
#define PcClient__HasLoreItem_x                                    0x1402C8DC0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D6620
#define PcZoneClient__RemoveMyAffect_x                             0x1402DA570

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140210D00  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140210EB0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140211010  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140210F50  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024A0C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017D030

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140688EE0
#define PlayerBase__CanSee1_x                                      0x140688FB0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140689470
#define PlayerBase__HasProperty_x                                  0x1406896A0
#define PlayerBase__IsTargetable_x                                 0x140689760
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E7050
#define PlayerClient__GetPcClient_x                                0x1402E9880
#define PlayerClient__PlayerClient_x                               0x1402E0320
#define PlayerClient__SetNameSpriteState_x                         0x1402ECCD0
#define PlayerClient__SetNameSpriteTint_x                          0x1402EDC90
#define PlayerZoneClient__ChangeHeight_x                           0x1402FC240
#define PlayerZoneClient__DoAttack_x                               0x1402FCF50
#define PlayerZoneClient__GetLevel_x                               0x140300680
#define PlayerZoneClient__IsValidTeleport_x                        0x14024CE50
#define PlayerZoneClient__LegalPlayerRace_x                        0x140190D50

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F5B60  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F5C10  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F5D10
#define PlayerManagerClient__CreatePlayer_x                        0x1402F5630
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140688AA0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A7FA0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A7BA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A7C10
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A7F30  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A80C0
#define KeypressHandler__HandleKeyUp_x                             0x1402A81E0
#define KeypressHandler__SaveKeymapping_x                          0x1402A7E40  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140643130  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063DA90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402CF360  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D4660
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D6D20
#define PcZoneClient__RemovePetEffect_x                            0x1402DA670
#define PcZoneClient__HasAlternateAbility_x                        0x1402D7900
#define PcZoneClient__CanEquipItem_x                               0x1402D2990
#define PcZoneClient__GetItemByID_x                                0x1402D56F0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DA3F0
#define PcZoneClient__BandolierSwap_x                              0x1402D1970

// Doors
#define EQSwitch__UseSwitch_x                                      0x140251980

// IconCache
#define IconCache__GetIcon_x                                       0x1403AD6A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A20D0
#define CContainerMgr__CloseContainer_x                            0x1403A1A10
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A2450

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140495900

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029AD10

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404268E0
#define CLootWnd__RequestLootSlot_x                                0x1404278F0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D11C0
#define EQ_Spell__SpellAffects_x                                   0x1401D2480
#define EQ_Spell__SpellAffectBase_x                                0x1401D23E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7160
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7110
#define EQ_Spell__IsSPAStacking_x                                  0x1401D20A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D1C60
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D1530

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFAE0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F1790
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F0EA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F06D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F8E50  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401799F0
#define CTaskManager__GetTaskStatus_x                              0x140179B00
#define CTaskManager__GetElementDescription_x                      0x140179680

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CF530
#define EqSoundManager__PlayScriptMp3_x                            0x1401CE370
#define EqSoundManager__SoundAssistPlay_x                          0x14031F0C0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14031F400  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058A490
#define CTextureAnimation__SetCurCell_x                            0x14058A7A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140298F70

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065D030
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065D0B0
#define CharacterBase__IsExpansionFlag_x                           0x1401F2830

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140380350
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140380CC0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140382210

// messages
#define msg_spell_worn_off_x                                       0x140207690
#define msg_new_text_x                                             0x140202F50
#define __msgTokenTextParam_x                                      0x1401FAC70
#define msgTokenText_x                                             0x1401FAB90

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140320A80
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403209A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140697BC0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041FD40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A6DC0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A9D20
#define CCursorAttachment__RemoveAttachment_x                      0x1403A9FD0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C3660
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C3850
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C3860

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401480A0
#define CFindItemWnd__Update_x                                     0x140148A40
#define CFindItemWnd__PickupSelectedItem_x                         0x140142560

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140151910
#define LootFiltersManager__GetItemFilterData_x                    0x140152420
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140152CC0
#define LootFiltersManager__SetItemLootFilter_x                    0x140152F70

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140478760

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14069C4E0
#define CResolutionHandler__GetWindowedStyle_x                     0x140319630

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14039E400

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406613B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406612A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C30D0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C2CB0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061B000
#define ItemBase__IsLoreEquipped_x                                 0x14061B090

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BACE0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024A220
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024A1B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024A1F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140313C00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140122460
#define FactionManagerClient__HandleFactionMessage_x               0x140122810
#define FactionManagerClient__GetFactionStanding_x                 0x140121C30
#define FactionManagerClient__GetMaxFaction_x                      0x140121C30
#define FactionManagerClient__GetMinFaction_x                      0x140121AE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC7E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012DBF0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AA800
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A9B80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AA620  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AA5A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140325AF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140313C00

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402110A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140580020

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084DE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140337260

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C7B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140646170
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAB8E0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
