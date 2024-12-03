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

#define __ClientDate                                               20241127u
#define __ExpectedVersionDate                                     "Nov 27 2024"
#define __ExpectedVersionTime                                     "04:17:17"
#define __ActualVersionDate_x                                      0x14094BED0
#define __ActualVersionTime_x                                      0x14094BEC0
#define __ActualVersionBuild_x                                     0x1408E2760

// Memory Protection
#define __MemChecker0_x                                            0x1402B2470
#define __MemChecker1_x                                            0x140572360
#define __MemChecker4_x                                            0x140280F70
#define __EncryptPad0_x                                            0x140D18E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E51970
#define instEQZoneInfo_x                                           0x140E51B64 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140217CE0
#define __gfMaxZoomCameraDistance_x                                0x1408E39D8
#define __gfMaxCameraDistance_x                                    0x140A88708
#define __CurrentSocial_x                                          0x140BD4940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D10720
#define g_eqCommandStates_x                                        0x140D11790
#define __CommandList_x                                            0x140D119D0
#define __ScreenMode_x                                             0x140D99244
#define __gWorld_x                                                 0x140E4C2A8
#define __gpbCommandEvent_x                                        0x140E4C2B4
#define __ServerHost_x                                             0x140E4C498
#define __Guilds_x                                                 0x140E50520
#define __MemCheckBitmask_x                                        0x140E51EAB
#define __MemCheckActive_x                                         0x140E5359D
#define __MouseEventTime_x                                         0x140EC6EE8
#define DI8__MouseState_x                                          0x140ECB118
#define __heqmain_x                                                0x140ECD5B8
#define DI8__Mouse_x                                               0x140ECB068
#define __HWnd_x                                                   0x140ECB0F0
#define __Mouse_x                                                  0x140ECB024
#define DI8__Keyboard_x                                            0x140ECB040
#define __LoginName_x                                              0x140ECDC9C
#define __CurrentMapLabel_x                                        0x140EE1530
#define __LabelCache_x                                             0x140EE2100
#define __ChatFilterDefs_x                                         0x140A237F0
#define Teleport_Table_Size_x                                      0x140E4C340
#define Teleport_Table_x                                           0x140E49E00

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4C8B0
#define pinstActiveBanker_x                                        0x140E4C7D0
#define pinstActiveCorpse_x                                        0x140E4C7C0
#define pinstActiveGMaster_x                                       0x140E4C7C8
#define pinstActiveMerchant_x                                      0x140E4C7B8
#define pinstAltAdvManager_x                                       0x140D9A0C8
#define pinstCEverQuest_x                                          0x140ECB060
#define pinstCamActor_x                                            0x140D99230
#define pinstCDBStr_x                                              0x140D98E80
#define pinstCDisplay_x                                            0x140E4C8A8
#define pinstControlledPlayer_x                                    0x140E4C860
#define pinstCResolutionHandler_x                                  0x1415528A8
#define pinstCSidlManager_x                                        0x140EF3400
#define pinstCXWndManager_x                                        0x140EF33F8
#define instDynamicZone_x                                          0x140E503E0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5042E
#define instExpeditionName_x                                       0x140E5046E
#define pinstDZMember_x                                            0x140E504F8
#define pinstDZTimerInfo_x                                         0x140E50500
#define pinstEqLogin_x                                             0x140ECD5E0
#define instTribute_x                                              0x140D0BD50
#define pinstDeviceInputProxy_x                                    0x140E519CC
#define pinstEQSoundManager_x                                      0x140D9A448
#define pinstEQSpellStrings_x                                      0x140D7DA50
#define pinstSGraphicsEngine_x                                     0x141552628
#define pinstLocalPC_x                                             0x140E4C890
#define pinstLocalPlayer_x                                         0x140E4C7B0
#define pinstCMercenaryClientManager_x                             0x140EC87C8
#define pinstModelPlayer_x                                         0x140E4C7E0
#define pinstRenderInterface_x                                     0x141552640
#define pinstSkillMgr_x                                            0x140ECA468
#define pinstSpawnManager_x                                        0x140EC8B90
#define pinstSpellManager_x                                        0x140ECA4D0
#define pinstStringTable_x                                         0x140E49DF0
#define pinstSwitchManager_x                                       0x140E49D70
#define pinstTarget_x                                              0x140E4C858
#define pinstTaskMember_x                                          0x140D0BD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E4C868
#define pinstTradeTarget_x                                         0x140E4C7D8
#define instTributeActive_x                                        0x140D0BD79
#define pinstViewActor_x                                           0x140D99228
#define pinstWorldData_x                                           0x140E4C8A0
#define pinstPlayerPath_x                                          0x140EC8BB8
#define pinstTargetIndicator_x                                     0x140ECA580
#define EQObject_Top_x                                             0x140E4C880

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDE688
#define pinstCContainerMgr_x                                       0x140D98ED8
#define pinstCContextMenuManager_x                                 0x140EF30E0
#define pinstCInvSlotMgr_x                                         0x140D98ED0
#define pinstCItemDisplayManager_x                                 0x140EE1100
#define pinstCPopupWndManager_x                                    0x140EE1990
#define pinstCSpellDisplayMgr_x                                    0x140EE1FE0
#define pinstCTaskManager_x                                        0x140BD4C80
#define pinstEQSuiteTextureLoader_x                                0x140D22560
#define pinstItemIconCache_x                                       0x140EDE9E8
#define pinstLootFiltersManager_x                                  0x140D988C8
#define pinstGFViewListener_x                                      0x140EF28B8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140240D40
#define __CastRay_x                                                0x140239180
#define __CastRay2_x                                               0x140238E80
#define __compress_block_x                                         0x140527A00
#define __ConvertItemTags_x                                        0x1402395E0
#define __CleanItemTags_x                                          0x140088A40
#define __CreateCascadeMenuItems_x                                 0x140187960
#define __decompress_block_x                                       0x14056DBD0
#define __DoesFileExist_x                                          0x140576210
#define __EQGetTime_x                                              0x140572910
#define __ExecuteCmd_x                                             0x14020F5F0
#define __FixHeading_x                                             0x14069FFC0
#define __FlushDxKeyboard_x                                        0x140334260
#define __get_bearing_x                                            0x140242F30
#define __get_melee_range_x                                        0x140243020
#define __GetAnimationCache_x                                      0x1403B16B0
#define __GetGaugeValueFromEQ_x                                    0x1404E7730
#define __GetLabelFromEQ_x                                         0x1404E8D40
#define __GetXTargetType_x                                         0x1406A12A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A0040
#define __HelpPath_x                                               0x140EC6DB0   // Why?
#define __NewUIINI_x                                               0x1404F47D0   // Why?
#define __ProcessDeviceEvents_x                                    0x140281580
#define __ProcessGameEvents_x                                      0x1402762B0
#define __ProcessKeyboardEvents_x                                  0x1403359B0
#define __ProcessMouseEvents_x                                     0x140277980
#define __SaveColors_x                                             0x140197980
#define __STMLToText_x                                             0x14057AB60
#define __WndProc_x                                                0x140332A60
#define CMemoryMappedFile__SetFile_x                               0x1407DC040
#define DrawNetStatus_x                                            0x1402C0940
#define Util__FastTime_x                                           0x140571EA0
#define __eq_delete_x                                              0x1406A80D4
#define __eq_new_x                                                 0x1406A8090
#define __CopyLayout_x                                             0x1402AE880
#define __ThrottleFrameRate_x                                      0x140265AD4
#define __ThrottleFrameRateEnd_x                                   0x140265B34

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403450B0
#define CAAWnd__Update_x                                           0x1403453B0
#define CAAWnd__UpdateSelected_x                                   0x140346400

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AADE0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A36E0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140830BB8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB710

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2AB0
#define AltAdvManager__IsAbilityReady_x                            0x1401A2D30
#define AltAdvManager__GetAAById_x                                 0x1401A2380
#define AltAdvManager__CanTrainAbility_x                           0x1401A2190
#define AltAdvManager__CanSeeAbility_x                             0x1401A1E50

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1790
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D25D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2820
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E66B0
#define CharacterZoneClient__CanUseItem_x                          0x1400E6AE0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D31F0
#define CharacterZoneClient__CastSpell_x                           0x1400D3290
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E2610
#define CharacterZoneClient__Cur_HP_x                              0x1400E81B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8370
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D6020
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE830
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD260  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D74D0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5FB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F03F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF2C0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D76A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7BA0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9570
#define CharacterZoneClient__GetHPRegen_x                          0x1400EFA00
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7E20
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0680
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7720
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1460
#define CharacterZoneClient__GetModCap_x                           0x1400F8A20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D79B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7BC0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC6E0
#define CharacterZoneClient__HasSkill_x                            0x1400F4450
#define CharacterZoneClient__HitBySpell_x                          0x1400D8670
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DBE10
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8500
#define CharacterZoneClient__Max_Endurance_x                       0x1402DD040  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8850
#define CharacterZoneClient__Max_Mana_x                            0x1402DD260  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8CB0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF1A0
#define CharacterZoneClient__SpellDuration_x                       0x1400DFEA0
#define CharacterZoneClient__TotalEffect_x                         0x1400E11F0
#define CharacterZoneClient__UseSkill_x                            0x1400FE1D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140363560

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036D890

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140369730
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036D310

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036FF50

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA7490

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392ED0
#define CChatWindowManager__InitContextMenu_x                      0x140393060
#define CChatWindowManager__FreeChatWindow_x                       0x140391F50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039AC40
#define CChatWindowManager__CreateChatWindow_x                     0x140391890

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106690

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039BC90
#define CChatWindow__Clear_x                                       0x14039CC50
#define CChatWindow__WndNotification_x                             0x14039DE40
#define CChatWindow__AddHistory_x                                  0x14039C750

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AFD20
#define CContextMenu__RemoveMenuItem_x                             0x1405B0110
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B00E0
#define CContextMenu__CheckMenuItem_x                              0x1405AFF50
#define CContextMenu__SetMenuItem_x                                0x1405B0130
#define CContextMenu__AddSeparator_x                               0x1405AFE90

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A1BE0
#define CContextMenuManager__RemoveMenu_x                          0x1405A21C0
#define CContextMenuManager__PopupMenu_x                           0x1405A1F00
#define CContextMenuManager__Flush_x                               0x1405A1C60
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A95D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140669C60
#define CChatService__GetFriendName_x                              0x140669C70

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140592AD0
#define CComboWnd__Draw_x                                          0x140592BD0
#define CComboWnd__GetCurChoice_x                                  0x140592EB0  // unused
#define CComboWnd__GetListRect_x                                   0x140592F50
#define CComboWnd__InsertChoice_x                                  0x140593290
#define CComboWnd__SetColors_x                                     0x140593620
#define CComboWnd__SetChoice_x                                     0x1405935E0
#define CComboWnd__GetItemCount_x                                  0x140592F40
#define CComboWnd__GetCurChoiceText_x                              0x140592EF0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140592E80
#define CComboWnd__InsertChoiceAtIndex_x                           0x140593350

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A7350
#define CContainerWnd__SetContainer_x                              0x1403FE450
#define CContainerWnd__vftable_x                                   0x1409BF908

// CDisplay
#define CDisplay__cameraType_x                                     0x140D98FDC
#define CDisplay__ZoneMainUI_x                                     0x1405C9E30
#define CDisplay__PreZoneMainUI_x                                  0x1401948B0
#define CDisplay__CleanGameUI_x                                    0x140186A20
#define CDisplay__GetClickedActor_x                                0x14018ABE0
#define CDisplay__GetUserDefinedColor_x                            0x14018B850
#define CDisplay__InitCharSelectUI_x                               0x14018BB00
#define CDisplay__ReloadUI_x                                       0x140196BA0
#define CDisplay__RestartUI_x                                      0x1401F59F0
#define CDisplay__WriteTextHD2_x                                   0x14019DBB0
#define CDisplay__TrueDistance_x                                   0x14019D860
#define CDisplay__SetViewActor_x                                   0x14019A0A0
#define CDisplay__GetFloorHeight_x                                 0x14018AE40
#define CDisplay__ToggleScreenshotMode_x                           0x14019D350
#define CDisplay__RealRender_World_x                               0x140195F80

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D4060
#define CEditWnd__DrawCaret_x                                      0x1405C5B10  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C5FD0
#define CEditWnd__GetCaretPt_x                                     0x1405C6250  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C6290
#define CEditWnd__GetDisplayString_x                               0x1405C6500
#define CEditWnd__GetHorzOffset_x                                  0x1405C6740
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C6890
#define CEditWnd__GetSelStartPt_x                                  0x1405C6B70  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C69C0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C7720
#define CEditWnd__ReplaceSelection_x                               0x1405C7AD0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C7F70
#define CEditWnd__SetEditable_x                                    0x1405C8200
#define CEditWnd__SetWindowText_x                                  0x1405C8230

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140266BE0
#define CEverQuest__ClickedPlayer_x                                0x14025C6D0
#define CEverQuest__CreateTargetIndicator_x                        0x14025CF90
#define CEverQuest__DoTellWindow_x                                 0x1401063A0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106C60 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402685A0
#define CEverQuest__dsp_chat_x                                     0x140105DD0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140292990
#define CEverQuest__Emote_x                                        0x140268F80
#define CEverQuest__GetBodyTypeDesc_x                              0x140269D30
#define CEverQuest__GetClassDesc_x                                 0x140269D90
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026A160
#define CEverQuest__GetDeityDesc_x                                 0x14026A410
#define CEverQuest__GetLangDesc_x                                  0x14026A840
#define CEverQuest__GetRaceDesc_x                                  0x14026ABE0
#define CEverQuest__InterpretCmd_x                                 0x14026C520
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402815F0
#define CEverQuest__LMouseUp_x                                     0x14026DF40
#define CEverQuest__RightClickedOnPlayer_x                         0x14027EE10
#define CEverQuest__RMouseUp_x                                     0x140278510
#define CEverQuest__SetGameState_x                                 0x140283B30
#define CEverQuest__UPCNotificationFlush_x                         0x140289460 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026DBB0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402798C0
#define CEverQuest__ReportSuccessfulHit_x                          0x14027A6E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BC5F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1710
#define CGuild__GetGuildName_x                                     0x1400C1750

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DF7E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A4640
#define CHotButton__SetCheck_x                                     0x1402A4910

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F71D0
#define CInvSlotMgr__MoveItem_x                                    0x1403F73B0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F8DB0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F4400
#define CInvSlot__SliderComplete_x                                 0x1403F5950
#define CInvSlot__GetItemBase_x                                    0x1403EFE30
#define CInvSlot__UpdateItem_x                                     0x1403F5E00

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FA140

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041B2E0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041DBE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140417DB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140419560
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041A700

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E4270
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E5F60

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140520D70

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404144E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014ED40

// CLabel
#define CLabel__UpdateText_x                                       0x140424FA0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140596460
#define CListWnd__dCListWnd_x                                      0x1405968B0
#define CListWnd__vftable_x                                        0x140AA55E8
#define CListWnd__AddColumn_x                                      0x140596F50
#define CListWnd__AddColumn1_x                                     0x140596FF0
#define CListWnd__AddLine_x                                        0x140597150
#define CListWnd__AddString_x                                      0x1405976E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140597C50
#define CListWnd__CalculateVSBRange_x                              0x140597F30
#define CListWnd__ClearSel_x                                       0x1405980E0
#define CListWnd__ClearAllSel_x                                    0x140598080
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140598140
#define CListWnd__Compare_x                                        0x1405982F0
#define CListWnd__Draw_x                                           0x1405987C0
#define CListWnd__DrawColumnSeparators_x                           0x140599370
#define CListWnd__DrawHeader_x                                     0x140599430
#define CListWnd__DrawItem_x                                       0x140599B10
#define CListWnd__DrawLine_x                                       0x14059A490
#define CListWnd__DrawSeparator_x                                  0x14059A950
#define CListWnd__EnableLine_x                                     0x14059AD70
#define CListWnd__EnsureVisible_x                                  0x14059ADD0
#define CListWnd__ExtendSel_x                                      0x14059AED0
#define CListWnd__GetColumnMinWidth_x                              0x14059B260
#define CListWnd__GetColumnWidth_x                                 0x14059B2E0
#define CListWnd__GetCurSel_x                                      0x14059B3E0
#define CListWnd__GetItemData_x                                    0x14059B760
#define CListWnd__GetItemHeight_x                                  0x14059B7A0
#define CListWnd__GetItemRect_x                                    0x14059B9C0
#define CListWnd__GetItemText_x                                    0x14059BC60
#define CListWnd__GetSelList_x                                     0x14059BEB0
#define CListWnd__GetSeparatorRect_x                               0x14059C0A0
#define CListWnd__InsertLine_x                                     0x14059D500
#define CListWnd__RemoveLine_x                                     0x14059DB70
#define CListWnd__SetColors_x                                      0x14059DF30
#define CListWnd__SetColumnJustification_x                         0x14059DF50
#define CListWnd__SetColumnLabel_x                                 0x14059DFD0
#define CListWnd__SetColumnWidth_x                                 0x14059E170
#define CListWnd__SetCurSel_x                                      0x14059E240
#define CListWnd__SetItemColor_x                                   0x14059E4B0
#define CListWnd__SetItemData_x                                    0x14059E550
#define CListWnd__SetItemText_x                                    0x14059E790
#define CListWnd__Sort_x                                           0x14059EBA0
#define CListWnd__ToggleSel_x                                      0x14059ED10
#define CListWnd__SetColumnsSizable_x                              0x14059E1C0
#define CListWnd__SetItemWnd_x                                     0x14059E8C0
#define CListWnd__GetItemWnd_x                                     0x14059BE40
#define CListWnd__SetItemIcon_x                                    0x14059E590
#define CListWnd__CalculateCustomWindowPositions_x                 0x140597A20
#define CListWnd__SetVScrollPos_x                                  0x14059EB00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140438280

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0C3F8
#define MapViewMap__Clear_x                                        0x140439E00
#define MapViewMap__SetZoom_x                                      0x140440450
#define MapViewMap__HandleLButtonDown_x                            0x14043CF90

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140461B00  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140468090
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140468830
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046C030
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046B380
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404702C0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140644FC0
#define CPacketScrambler__hton_x                                   0x140644FB0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BF3E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BF320
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BFA10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BF7C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BE720
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BE6B0
#define CSidlManagerBase__CreateXWnd_x                             0x1405BDCF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D7260
#define CSidlManager__CreateXWnd_x                                 0x1404D7420

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140583EE0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140584000
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CE5A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140584180
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140583610
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405836E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405838F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140584870
#define CSidlScreenWnd__EnableIniStorage_x                         0x140584AA0
#define CSidlScreenWnd__GetChildItem_x                             0x140584C40
#define CSidlScreenWnd__GetSidlPiece_x                             0x140584E90
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058F070 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140585200
#define CSidlScreenWnd__LoadIniInfo_x                              0x140585570
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140585E30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140586830
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF2758
#define CSidlScreenWnd__StoreIniInfo_x                             0x140586EB0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405876A0
#define CSidlScreenWnd__vftable_x                                  0x140AA4858
#define CSidlScreenWnd__WndNotification_x                          0x1405876F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031D740 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031DBE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031DB10
#define CSkillMgr__IsActivatedSkill_x                              0x14031DF90
#define CSkillMgr__IsCombatSkill_x                                 0x14031DFD0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031DF00
#define CSkillMgr__GetSkillLastUsed_x                              0x14031DB60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059F690
#define CSliderWnd__SetValue_x                                     0x14059FEA0
#define CSliderWnd__SetNumTicks_x                                  0x14059FD20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DD8C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A4640
#define CStmlWnd__CalculateHSBRange_x                              0x14058EA20
#define CStmlWnd__CalculateVSBRange_x                              0x1405A54E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A5FE0
#define CStmlWnd__ForceParseNow_x                                  0x1405A6080
#define CStmlWnd__GetVisibleText_x                                 0x1405A6750
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A84B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A84F0
#define CStmlWnd__SetSTMLText_x                                    0x1405AF4C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AF670
#define CStmlWnd__UpdateHistoryString_x                            0x1405AFA00

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A0270
#define CTabWnd__DrawCurrentPage_x                                 0x1405A0310
#define CTabWnd__DrawTab_x                                         0x1405A06E0
#define CTabWnd__GetTabRect_x                                      0x1405A0D50
#define CTabWnd__InsertPage_x                                      0x1405A1020
#define CTabWnd__RemovePage_x                                      0x1405A12B0
#define CTabWnd__SetPage_x                                         0x1405A1410
#define CTabWnd__UpdatePage_x                                      0x1405A1710

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C8690
#define CPageWnd__SetTabText_x                                     0x1405C8700

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BAE60  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB270


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B6DA0
#define CTextureFont__DrawWrappedText1_x                           0x1405B6CB0
#define CTextureFont__DrawWrappedText2_x                           0x1405B6ED0
#define CTextureFont__GetTextExtent_x                              0x1405B7280
#define CTextureFont__GetHeight_x                                  0x1405B7240

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CCD00

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405831F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D21ED0
#define CXStr__gCXStrAccess_x                                      0x140EF2558

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058A110
#define CXWnd__ClrFocus_x                                          0x14058A400
#define CXWnd__Destroy_x                                           0x14058A580
#define CXWnd__DoAllDrawing_x                                      0x14058A680
#define CXWnd__DrawColoredRect_x                                   0x14058AE50
#define CXWnd__DrawTooltip_x                                       0x14058C4C0
#define CXWnd__DrawTooltipAtPoint_x                                0x14058C570
#define CXWnd__GetChildItem_x                                      0x14058CE80
#define CXWnd__GetChildWndAt_x                                     0x14058CF30
#define CXWnd__GetClientRect_x                                     0x14058D1E0
#define CXWnd__GetClientClipRect_x                                 0x14058D090
#define CXWnd__GetRelativeRect_x                                   0x14058EB60
#define CXWnd__GetScreenClipRect_x                                 0x14058EC70
#define CXWnd__GetScreenRect_x                                     0x14058EDF0
#define CXWnd__GetTooltipRect_x                                    0x14058EF70
#define CXWnd__IsActive_x                                          0x14058F530
#define CXWnd__IsDescendantOf_x                                    0x14058F560
#define CXWnd__IsReallyVisible_x                                   0x14058F5D0
#define CXWnd__IsType_x                                            0x14058F610
#define CXWnd__Minimize_x                                          0x14058F710
#define CXWnd__ProcessTransition_x                                 0x1405905E0
#define CXWnd__Resize_x                                            0x140590700
#define CXWnd__Right_x                                             0x1405907A0
#define CXWnd__SetFocus_x                                          0x140590B60
#define CXWnd__SetFont_x                                           0x140590BB0
#define CXWnd__SetKeyTooltip_x                                     0x140590CC0
#define CXWnd__SetMouseOver_x                                      0x140590E00
#define CXWnd__SetParent_x                                         0x140590E80
#define CXWnd__StartFade_x                                         0x1405912D0
#define CXWnd__vftable_x                                           0x140AA4E48
#define CXWnd__CXWnd_x                                             0x140588C90
#define CXWnd__dCXWnd_x                                            0x1405895E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D37E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B12E0
#define CXWndManager__DrawCursor_x                                 0x1405B15C0
#define CXWndManager__DrawWindows_x                                0x1405B1820
#define CXWndManager__GetKeyboardFlags_x                           0x1405B1EF0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B1F30
#define CXWndManager__RemoveWnd_x                                  0x1405B5470

// CDBStr
#define CDBStr__GetString_x                                        0x140184BE0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064EDE0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF310
#define CCharacterListWnd__EnterWorld_x                            0x1400CE010
#define CCharacterListWnd__Quit_x                                  0x1400CF2F0
#define CCharacterListWnd__UpdateList_x                            0x1400D0180

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061C190
#define ItemBase__CreateItemTagString_x                            0x14061CBD0
#define ItemBase__GetImageNum_x                                    0x14061F0D0
#define ItemBase__GetItemValue_x                                   0x140620F80
#define ItemBase__IsEmpty_x                                        0x140622B30
#define ItemBase__IsKeyRingItem_x                                  0x140623260
#define ItemBase__ValueSellMerchant_x                              0x140627450
#define ItemClient__CanDrop_x                                      0x1402A6B20
#define ItemClient__CanGoInBag_x                                   0x1402A6C50
#define ItemClient__CreateItemClient_x                             0x1402A6ED0
#define ItemClient__dItemClient_x                                  0x1402A6990

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A4250
#define EQ_LoadingS__Array_x                                       0x140D0E230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140633D20
#define PcBase__GetCombatAbility_x                                 0x140634410
#define PcBase__GetCombatAbilityTimer_x                            0x1406344B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140634C50
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140635790
#define PcClient__AlertInventoryChanged_x                          0x1402C8F20
#define PcClient__GetConLevel_x                                    0x1402C9540  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CBD10
#define PcClient__HasLoreItem_x                                    0x1402CCCE0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DA590
#define PcZoneClient__RemoveMyAffect_x                             0x1402DE180

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140213D00  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140213EB0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140214010  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140213F50  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024DCC0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017F3A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140692C60
#define PlayerBase__CanSee1_x                                      0x140692D30
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406931F0
#define PlayerBase__HasProperty_x                                  0x1406933C0
#define PlayerBase__IsTargetable_x                                 0x140693480
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EAE60
#define PlayerClient__GetPcClient_x                                0x1402ED690
#define PlayerClient__PlayerClient_x                               0x1402E4130
#define PlayerClient__SetNameSpriteState_x                         0x1402F0AE0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F1AA0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FFF50
#define PlayerZoneClient__DoAttack_x                               0x140300C60
#define PlayerZoneClient__GetLevel_x                               0x1403043A0
#define PlayerZoneClient__IsValidTeleport_x                        0x140250A50
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193130

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F9870  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F9920  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F9A20
#define PlayerManagerClient__CreatePlayer_x                        0x1402F9340
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140692820

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402ABD80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AB980
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AB9F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402ABD10  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402ABEA0
#define KeypressHandler__HandleKeyUp_x                             0x1402ABFC0
#define KeypressHandler__SaveKeymapping_x                          0x1402ABC20  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064C920  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406466F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D32A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D85D0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DAC90
#define PcZoneClient__RemovePetEffect_x                            0x1402DE460
#define PcZoneClient__HasAlternateAbility_x                        0x1402DB870
#define PcZoneClient__CanEquipItem_x                               0x1402D6900
#define PcZoneClient__GetItemByID_x                                0x1402D9660
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DE000
#define PcZoneClient__BandolierSwap_x                              0x1402D5950

// Doors
#define EQSwitch__UseSwitch_x                                      0x140255580

// IconCache
#define IconCache__GetIcon_x                                       0x1403B16E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A6100
#define CContainerMgr__CloseContainer_x                            0x1403A5A40
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A6480

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049B5B0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029ED60

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042C280
#define CLootWnd__RequestLootSlot_x                                0x14042D2A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D3610
#define EQ_Spell__SpellAffects_x                                   0x1401D48D0
#define EQ_Spell__SpellAffectBase_x                                0x1401D4830
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7D90
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7D40
#define EQ_Spell__IsSPAStacking_x                                  0x1401D44F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D40B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D3980

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0350

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F7F80
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F7690
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F6E90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FF5E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017BD70
#define CTaskManager__GetTaskStatus_x                              0x14017BE80
#define CTaskManager__GetElementDescription_x                      0x14017BA00

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D1980
#define EqSoundManager__PlayScriptMp3_x                            0x1401D07C0
#define EqSoundManager__SoundAssistPlay_x                          0x140322D80  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403230C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140592060
#define CTextureAnimation__SetCurCell_x                            0x140592370

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029CFC0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140667330
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406673B0
#define CharacterBase__IsExpansionFlag_x                           0x1401F5240

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140383DD0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140384740
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140385C90

// messages
#define msg_spell_worn_off_x                                       0x14020A630
#define msg_new_text_x                                             0x140205EA0
#define __msgTokenTextParam_x                                      0x1401FD7F0
#define msgTokenText_x                                             0x1401FD710

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140324740
#define SpellManager__GetSpellByGroupAndRank_x                     0x140324660

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A1680

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404256F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AADE0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ADD40
#define CCursorAttachment__RemoveAttachment_x                      0x1403ADFF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CB1A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CB390
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CB3A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149F10
#define CFindItemWnd__Update_x                                     0x14014A8B0
#define CFindItemWnd__PickupSelectedItem_x                         0x140144390

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153A40
#define LootFiltersManager__GetItemFilterData_x                    0x140154550
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154DF0
#define LootFiltersManager__SetItemLootFilter_x                    0x1401550A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047E2C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031D300
#define CResolutionHandler__UpdateResolution_x                     0x1406A5EE0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A23E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066B730  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066B620  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C8920
#define CGroupWnd__UpdateDisplay_x                                 0x1403C8500

// ItemBase
#define ItemBase__IsLore_x                                         0x140623390
#define ItemBase__IsLoreEquipped_x                                 0x140623420

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BEAE0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024DE20
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024DDB0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024DDF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317740

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123EB0
#define FactionManagerClient__HandleFactionMessage_x               0x140124260
#define FactionManagerClient__GetFactionStanding_x                 0x140123680
#define FactionManagerClient__GetMaxFaction_x                      0x140123680
#define FactionManagerClient__GetMinFaction_x                      0x140123530

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD3F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F660

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ACBA0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401ABF20
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AC9C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AC940  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403297B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317740

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402140A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140587CE0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400858F0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033AFE0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D2C0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064F960
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB8E80

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052DE20

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
