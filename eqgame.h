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

#define __ClientDate                                               20240815u
#define __ExpectedVersionDate                                     "Aug 15 2024"
#define __ExpectedVersionTime                                     "14:54:51"
#define __ActualVersionDate_x                                      0x140940B30
#define __ActualVersionTime_x                                      0x140940B20
#define __ActualVersionBuild_x                                     0x1408D7570

// Memory Protection
#define __MemChecker0_x                                            0x1402B0DC0
#define __MemChecker1_x                                            0x14056D5B0
#define __MemChecker4_x                                            0x14027F690
#define __EncryptPad0_x                                            0x140D0DE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E46A80
#define instEQZoneInfo_x                                           0x140E46C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402162D0
#define __gfMaxZoomCameraDistance_x                                0x1408D87E8
#define __gfMaxCameraDistance_x                                    0x140A7D334
#define __CurrentSocial_x                                          0x140BC9940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D05710
#define g_eqCommandStates_x                                        0x140D06780
#define __CommandList_x                                            0x140D069C0
#define __ScreenMode_x                                             0x140D8E264
#define __gWorld_x                                                 0x140E3EF00
#define __gpbCommandEvent_x                                        0x140E3EF10
#define __ServerHost_x                                             0x140E3F0F8
#define __Guilds_x                                                 0x140E45630
#define __MemCheckBitmask_x                                        0x140E46FB7
#define __MemCheckActive_x                                         0x140E486A5
#define __MouseEventTime_x                                         0x140EBBFF0
#define DI8__MouseState_x                                          0x140EC0238
#define __heqmain_x                                                0x140EC26D8
#define DI8__Mouse_x                                               0x140EC0188
#define __HWnd_x                                                   0x140EC0210
#define __Mouse_x                                                  0x140EC0144
#define DI8__Keyboard_x                                            0x140EC0160
#define __LoginName_x                                              0x140EC2DBC
#define __CurrentMapLabel_x                                        0x140ED65C0
#define __LabelCache_x                                             0x140ED7190
#define __ChatFilterDefs_x                                         0x140A18440
#define Teleport_Table_Size_x                                      0x140E3EF18
#define Teleport_Table_x                                           0x140E3F510

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E419C0
#define pinstActiveBanker_x                                        0x140E3F428
#define pinstActiveCorpse_x                                        0x140E3F418
#define pinstActiveGMaster_x                                       0x140E3F420
#define pinstActiveMerchant_x                                      0x140E3F410
#define pinstAltAdvManager_x                                       0x140D8F1D8
#define pinstCEverQuest_x                                          0x140EC0180
#define pinstCamActor_x                                            0x140D8E248
#define pinstCDBStr_x                                              0x140D8DF90
#define pinstCDisplay_x                                            0x140E3F500
#define pinstControlledPlayer_x                                    0x140E3F4B8
#define pinstCResolutionHandler_x                                  0x141547958
#define pinstCSidlManager_x                                        0x140EE8490
#define pinstCXWndManager_x                                        0x140EE8488
#define instDynamicZone_x                                          0x140E454F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4553E
#define instExpeditionName_x                                       0x140E4557E
#define pinstDZMember_x                                            0x140E45608
#define pinstDZTimerInfo_x                                         0x140E45610
#define pinstEqLogin_x                                             0x140EC2700
#define instTribute_x                                              0x140D00D50
#define pinstDeviceInputProxy_x                                    0x140E46ADC
#define pinstEQSoundManager_x                                      0x140D8F558
#define pinstEQSpellStrings_x                                      0x140D72B60
#define pinstSGraphicsEngine_x                                     0x1415476D8
#define pinstLocalPC_x                                             0x140E3F4E8
#define pinstLocalPlayer_x                                         0x140E3F408
#define pinstCMercenaryClientManager_x                             0x140EBD8E8
#define pinstModelPlayer_x                                         0x140E3F438
#define pinstRenderInterface_x                                     0x1415476F0
#define pinstSkillMgr_x                                            0x140EBF580
#define pinstSpawnManager_x                                        0x140EBDCA0
#define pinstSpellManager_x                                        0x140EBF5E8
#define pinstStringTable_x                                         0x140E3F508
#define pinstSwitchManager_x                                       0x140E3EE80
#define pinstTarget_x                                              0x140E3F4B0
#define pinstTaskMember_x                                          0x140D00D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3F4C0
#define pinstTradeTarget_x                                         0x140E3F430
#define instTributeActive_x                                        0x140D00D79
#define pinstViewActor_x                                           0x140D8E240
#define pinstWorldData_x                                           0x140E3F4F8
#define pinstPlayerPath_x                                          0x140EBDCC8
#define pinstTargetIndicator_x                                     0x140EBF698
#define EQObject_Top_x                                             0x140E3F4D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED3718
#define pinstCContainerMgr_x                                       0x140D8E520
#define pinstCContextMenuManager_x                                 0x140EE8170
#define pinstCInvSlotMgr_x                                         0x140D8E518
#define pinstCItemDisplayManager_x                                 0x140ED6190
#define pinstCPopupWndManager_x                                    0x140ED6A20
#define pinstCSpellDisplayMgr_x                                    0x140ED7070
#define pinstCTaskManager_x                                        0x140BC9C80
#define pinstEQSuiteTextureLoader_x                                0x140D17530
#define pinstItemIconCache_x                                       0x140ED3A78
#define pinstLootFiltersManager_x                                  0x140D8D9D8
#define pinstGFViewListener_x                                      0x140EE7948


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F480
#define __CastRay_x                                                0x1402378C0
#define __CastRay2_x                                               0x1402375C0
#define __compress_block_x                                         0x140522C50
#define __ConvertItemTags_x                                        0x140237D20
#define __CleanItemTags_x                                          0x140088110
#define __CreateCascadeMenuItems_x                                 0x1401863D0
#define __decompress_block_x                                       0x140568E20
#define __DoesFileExist_x                                          0x140571460
#define __EQGetTime_x                                              0x14056DB60
#define __ExecuteCmd_x                                             0x14020DC00
#define __FixHeading_x                                             0x140699240
#define __FlushDxKeyboard_x                                        0x140332F80
#define __get_bearing_x                                            0x140241670
#define __get_melee_range_x                                        0x140241760
#define __GetAnimationCache_x                                      0x1403B0160
#define __GetGaugeValueFromEQ_x                                    0x1404E3C00
#define __GetLabelFromEQ_x                                         0x1404E5210
#define __GetXTargetType_x                                         0x14069A520   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406992C0
#define __HelpPath_x                                               0x140EBBEB8   // Why?
#define __NewUIINI_x                                               0x1404F0CA0   // Why?
#define __ProcessDeviceEvents_x                                    0x14027FCA0
#define __ProcessGameEvents_x                                      0x1402749D0
#define __ProcessKeyboardEvents_x                                  0x1403346D0
#define __ProcessMouseEvents_x                                     0x1402760A0
#define __SaveColors_x                                             0x1401963A0
#define __STMLToText_x                                             0x140575DA0
#define __WndProc_x                                                0x1403317A0
#define CMemoryMappedFile__SetFile_x                               0x1407D1700
#define DrawNetStatus_x                                            0x1402BF250
#define Util__FastTime_x                                           0x14056D0F0
#define __eq_delete_x                                              0x1406A13F4
#define __eq_new_x                                                 0x1406A13B0
#define __CopyLayout_x                                             0x1402AD200
#define __ThrottleFrameRate_x                                      0x140264234
#define __ThrottleFrameRateEnd_x                                   0x140264294

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140343D30
#define CAAWnd__Update_x                                           0x140344030
#define CAAWnd__UpdateSelected_x                                   0x140345070

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA500
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2E00
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140825B38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A14B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1730
#define AltAdvManager__GetAAById_x                                 0x1401A0D80
#define AltAdvManager__CanTrainAbility_x                           0x1401A0BB0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0870

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0AA0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D18E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1B30
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E59C0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5DF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2500
#define CharacterZoneClient__CastSpell_x                           0x1400D25A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1920
#define CharacterZoneClient__Cur_HP_x                              0x1400E7500
#define CharacterZoneClient__Cur_Mana_x                            0x1400E76C0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5330
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDB90
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC5C0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D67E0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E52C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF750
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE620
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D69B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6EC0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8890
#define CharacterZoneClient__GetHPRegen_x                          0x1400EED60
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7170
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF9E0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6A30
#define CharacterZoneClient__GetManaRegen_x                        0x1400F07C0
#define CharacterZoneClient__GetModCap_x                           0x1400F7D80
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6CC0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6ED0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBA00
#define CharacterZoneClient__HasSkill_x                            0x1400F37B0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7980
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB120
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7860
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBF10  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7BB0
#define CharacterZoneClient__Max_Mana_x                            0x1402DC130  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8010
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE4B0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF1B0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0500
#define CharacterZoneClient__UseSkill_x                            0x1400FD530


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403621F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C530

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403683C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BFB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036EBE0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9C020

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391A80
#define CChatWindowManager__InitContextMenu_x                      0x140391C10
#define CChatWindowManager__FreeChatWindow_x                       0x140390B00
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403997C0
#define CChatWindowManager__CreateChatWindow_x                     0x140390440

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105A70

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A800
#define CChatWindow__Clear_x                                       0x14039B7B0
#define CChatWindow__WndNotification_x                             0x14039C9A0
#define CChatWindow__AddHistory_x                                  0x14039B2B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AAF80
#define CContextMenu__RemoveMenuItem_x                             0x1405AB370
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB340
#define CContextMenu__CheckMenuItem_x                              0x1405AB1B0
#define CContextMenu__SetMenuItem_x                                0x1405AB390
#define CContextMenu__AddSeparator_x                               0x1405AB0F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059CE70
#define CContextMenuManager__RemoveMenu_x                          0x14059D450
#define CContextMenuManager__PopupMenu_x                           0x14059D190
#define CContextMenuManager__Flush_x                               0x14059CEF0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A80A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140662990
#define CChatService__GetFriendName_x                              0x1406629A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058DC30
#define CComboWnd__Draw_x                                          0x14058DD30
#define CComboWnd__GetCurChoice_x                                  0x14058E000  // unused
#define CComboWnd__GetListRect_x                                   0x14058E0A0
#define CComboWnd__InsertChoice_x                                  0x14058E3D0
#define CComboWnd__SetColors_x                                     0x14058E760
#define CComboWnd__SetChoice_x                                     0x14058E720
#define CComboWnd__GetItemCount_x                                  0x14058E090
#define CComboWnd__GetCurChoiceText_x                              0x14058E040  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058DFD0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E490

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5E20
#define CContainerWnd__SetContainer_x                              0x1403FB570
#define CContainerWnd__vftable_x                                   0x1409B4598

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8DFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C50A0
#define CDisplay__PreZoneMainUI_x                                  0x1401932E0
#define CDisplay__CleanGameUI_x                                    0x140185490
#define CDisplay__GetClickedActor_x                                0x140189630
#define CDisplay__GetUserDefinedColor_x                            0x14018A2A0
#define CDisplay__InitCharSelectUI_x                               0x14018A550
#define CDisplay__ReloadUI_x                                       0x1401955D0
#define CDisplay__RestartUI_x                                      0x1401F4260
#define CDisplay__WriteTextHD2_x                                   0x14019C5D0
#define CDisplay__TrueDistance_x                                   0x14019C280
#define CDisplay__SetViewActor_x                                   0x140198AC0
#define CDisplay__GetFloorHeight_x                                 0x140189890
#define CDisplay__ToggleScreenshotMode_x                           0x14019BD70
#define CDisplay__RealRender_World_x                               0x1401949B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF2A0
#define CEditWnd__DrawCaret_x                                      0x1405C0D90  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1250
#define CEditWnd__GetCaretPt_x                                     0x1405C14D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1510
#define CEditWnd__GetDisplayString_x                               0x1405C1780
#define CEditWnd__GetHorzOffset_x                                  0x1405C19C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1B10
#define CEditWnd__GetSelStartPt_x                                  0x1405C1DF0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1C40
#define CEditWnd__PointFromPrintableChar_x                         0x1405C29A0
#define CEditWnd__ReplaceSelection_x                               0x1405C2D50
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C31F0
#define CEditWnd__SetEditable_x                                    0x1405C3480
#define CEditWnd__SetWindowText_x                                  0x1405C34B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265340
#define CEverQuest__ClickedPlayer_x                                0x14025AE30
#define CEverQuest__CreateTargetIndicator_x                        0x14025B6F0
#define CEverQuest__DoTellWindow_x                                 0x140105780 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106040 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266D00
#define CEverQuest__dsp_chat_x                                     0x1401051B0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402910B0
#define CEverQuest__Emote_x                                        0x1402676E0
#define CEverQuest__GetBodyTypeDesc_x                              0x140268490
#define CEverQuest__GetClassDesc_x                                 0x1402684F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402688C0
#define CEverQuest__GetDeityDesc_x                                 0x140268B70
#define CEverQuest__GetLangDesc_x                                  0x140268FA0
#define CEverQuest__GetRaceDesc_x                                  0x140269340
#define CEverQuest__InterpretCmd_x                                 0x14026AC80
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FD10
#define CEverQuest__LMouseUp_x                                     0x14026C670
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D530
#define CEverQuest__RMouseUp_x                                     0x140276C30
#define CEverQuest__SetGameState_x                                 0x140282250
#define CEverQuest__UPCNotificationFlush_x                         0x140287B80 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C2E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277FE0
#define CEverQuest__ReportSuccessfulHit_x                          0x140278E00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA500

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0C60
#define CGuild__GetGuildName_x                                     0x1400C0CA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DCA20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2CA0
#define CHotButton__SetCheck_x                                     0x1402A2F70

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4320
#define CInvSlotMgr__MoveItem_x                                    0x1403F4500
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5E80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1540
#define CInvSlot__SliderComplete_x                                 0x1403F2A90
#define CInvSlot__GetItemBase_x                                    0x1403ED160
#define CInvSlot__UpdateItem_x                                     0x1403F2F50

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7200

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418390
#define CItemDisplayWnd__UpdateStrings_x                           0x14041ACC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414EC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416610
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404177B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0730
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2420

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051BFC0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404115F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DCE0

// CLabel
#define CLabel__UpdateText_x                                       0x140422080

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405915A0
#define CListWnd__dCListWnd_x                                      0x1405919F0
#define CListWnd__vftable_x                                        0x140A9A178
#define CListWnd__AddColumn_x                                      0x140592090
#define CListWnd__AddColumn1_x                                     0x140592130
#define CListWnd__AddLine_x                                        0x140592290
#define CListWnd__AddString_x                                      0x140592820
#define CListWnd__CalculateFirstVisibleLine_x                      0x140592D90
#define CListWnd__CalculateVSBRange_x                              0x140593070
#define CListWnd__ClearSel_x                                       0x140593210
#define CListWnd__ClearAllSel_x                                    0x1405931B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593270
#define CListWnd__Compare_x                                        0x140593420
#define CListWnd__Draw_x                                           0x1405938F0
#define CListWnd__DrawColumnSeparators_x                           0x1405944A0
#define CListWnd__DrawHeader_x                                     0x140594560
#define CListWnd__DrawItem_x                                       0x140594C40
#define CListWnd__DrawLine_x                                       0x1405955C0
#define CListWnd__DrawSeparator_x                                  0x140595A80
#define CListWnd__EnableLine_x                                     0x140595EA0
#define CListWnd__EnsureVisible_x                                  0x140595F00
#define CListWnd__ExtendSel_x                                      0x140596000
#define CListWnd__GetColumnMinWidth_x                              0x140596330
#define CListWnd__GetColumnWidth_x                                 0x1405963B0
#define CListWnd__GetCurSel_x                                      0x1405964B0
#define CListWnd__GetItemData_x                                    0x140596820
#define CListWnd__GetItemHeight_x                                  0x140596860
#define CListWnd__GetItemRect_x                                    0x140596A80
#define CListWnd__GetItemText_x                                    0x140596D20
#define CListWnd__GetSelList_x                                     0x140596F70
#define CListWnd__GetSeparatorRect_x                               0x140597160
#define CListWnd__InsertLine_x                                     0x1405985D0
#define CListWnd__RemoveLine_x                                     0x140598C40
#define CListWnd__SetColors_x                                      0x140599000
#define CListWnd__SetColumnJustification_x                         0x140599020
#define CListWnd__SetColumnLabel_x                                 0x1405990A0
#define CListWnd__SetColumnWidth_x                                 0x140599240
#define CListWnd__SetCurSel_x                                      0x140599310
#define CListWnd__SetItemColor_x                                   0x140599580
#define CListWnd__SetItemData_x                                    0x140599620
#define CListWnd__SetItemText_x                                    0x140599860
#define CListWnd__Sort_x                                           0x140599C70
#define CListWnd__ToggleSel_x                                      0x140599DE0
#define CListWnd__SetColumnsSizable_x                              0x140599290
#define CListWnd__SetItemWnd_x                                     0x140599990
#define CListWnd__GetItemWnd_x                                     0x140596F00
#define CListWnd__SetItemIcon_x                                    0x140599660
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592B60
#define CListWnd__SetVScrollPos_x                                  0x140599BD0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404352F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A01058
#define MapViewMap__Clear_x                                        0x140436E60
#define MapViewMap__SetZoom_x                                      0x14043D4B0
#define MapViewMap__HandleLButtonDown_x                            0x140439FF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045EB40  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404650E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465880
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469070
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404683C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D300

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063F410
#define CPacketScrambler__hton_x                                   0x14063F400

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BA690
#define CSidlManagerBase__FindAnimation1_x                         0x1405BA5D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BACC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BAA70
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B99D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9960
#define CSidlManagerBase__CreateXWnd_x                             0x1405B8FC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3750
#define CSidlManager__CreateXWnd_x                                 0x1404D3910

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F110
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F230
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9810 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F390
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057E850
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057E920
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057EB30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FA70
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057FCA0
#define CSidlScreenWnd__GetChildItem_x                             0x14057FE40
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580090
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A220 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580400
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580770
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581040
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581A30
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE77E8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582090
#define CSidlScreenWnd__StoreIniVis_x                              0x140582890
#define CSidlScreenWnd__vftable_x                                  0x140A993E8
#define CSidlScreenWnd__WndNotification_x                          0x1405828E0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C520 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C9C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C8F0
#define CSkillMgr__IsActivatedSkill_x                              0x14031CD70
#define CSkillMgr__IsCombatSkill_x                                 0x14031CDB0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CCE0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C940

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059A760
#define CSliderWnd__SetValue_x                                     0x14059AF70
#define CSliderWnd__SetNumTicks_x                                  0x14059ADF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9D90

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059F8D0
#define CStmlWnd__CalculateHSBRange_x                              0x140589BE0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A07F0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1250
#define CStmlWnd__ForceParseNow_x                                  0x1405A12F0
#define CStmlWnd__GetVisibleText_x                                 0x1405A19C0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3720
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A3760
#define CStmlWnd__SetSTMLText_x                                    0x1405AA730
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AA8E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405AAC70

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B520
#define CTabWnd__DrawCurrentPage_x                                 0x14059B5C0
#define CTabWnd__DrawTab_x                                         0x14059B990
#define CTabWnd__GetTabRect_x                                      0x14059C000
#define CTabWnd__InsertPage_x                                      0x14059C2D0
#define CTabWnd__RemovePage_x                                      0x14059C550
#define CTabWnd__SetPage_x                                         0x14059C6B0
#define CTabWnd__UpdatePage_x                                      0x14059C9B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3900
#define CPageWnd__SetTabText_x                                     0x1405C3970

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA7C0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2070
#define CTextureFont__DrawWrappedText1_x                           0x1405B1F80
#define CTextureFont__DrawWrappedText2_x                           0x1405B21A0
#define CTextureFont__GetTextExtent_x                              0x1405B2550
#define CTextureFont__GetHeight_x                                  0x1405B2510

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C7F70

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E430

// CXStr
#define CXStr__gFreeLists_x                                        0x140D16EA0
#define CXStr__gCXStrAccess_x                                      0x140EE75E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405852E0
#define CXWnd__ClrFocus_x                                          0x1405855D0
#define CXWnd__Destroy_x                                           0x140585750
#define CXWnd__DoAllDrawing_x                                      0x140585850
#define CXWnd__DrawColoredRect_x                                   0x140586000
#define CXWnd__DrawTooltip_x                                       0x140587660
#define CXWnd__DrawTooltipAtPoint_x                                0x140587710
#define CXWnd__GetChildItem_x                                      0x140588010
#define CXWnd__GetChildWndAt_x                                     0x1405880D0
#define CXWnd__GetClientRect_x                                     0x140588380
#define CXWnd__GetClientClipRect_x                                 0x140588230
#define CXWnd__GetRelativeRect_x                                   0x140589D20
#define CXWnd__GetScreenClipRect_x                                 0x140589E30
#define CXWnd__GetScreenRect_x                                     0x140589FA0
#define CXWnd__GetTooltipRect_x                                    0x14058A120
#define CXWnd__IsActive_x                                          0x14058A6E0
#define CXWnd__IsDescendantOf_x                                    0x14058A710
#define CXWnd__IsReallyVisible_x                                   0x14058A770
#define CXWnd__IsType_x                                            0x14058A7B0
#define CXWnd__Minimize_x                                          0x14058A8B0
#define CXWnd__ProcessTransition_x                                 0x14058B790
#define CXWnd__Resize_x                                            0x14058B8A0
#define CXWnd__Right_x                                             0x14058B940
#define CXWnd__SetFocus_x                                          0x14058BCF0
#define CXWnd__SetFont_x                                           0x14058BD40
#define CXWnd__SetKeyTooltip_x                                     0x14058BE40
#define CXWnd__SetMouseOver_x                                      0x14058BF80
#define CXWnd__SetParent_x                                         0x14058C000
#define CXWnd__StartFade_x                                         0x14058C430
#define CXWnd__vftable_x                                           0x140A999D8
#define CXWnd__CXWnd_x                                             0x140583EA0
#define CXWnd__dCXWnd_x                                            0x1405847F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEA20

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC510
#define CXWndManager__DrawCursor_x                                 0x1405AC7F0
#define CXWndManager__DrawWindows_x                                0x1405ACA50
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD110
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD150
#define CXWndManager__RemoveWnd_x                                  0x1405B0730

// CDBStr
#define CDBStr__GetString_x                                        0x140183640

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406486A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE620
#define CCharacterListWnd__EnterWorld_x                            0x1400CD320
#define CCharacterListWnd__Quit_x                                  0x1400CE600
#define CCharacterListWnd__UpdateList_x                            0x1400CF490

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140616DF0
#define ItemBase__CreateItemTagString_x                            0x140617830
#define ItemBase__GetImageNum_x                                    0x140619DD0
#define ItemBase__GetItemValue_x                                   0x14061B8F0
#define ItemBase__IsEmpty_x                                        0x14061D480
#define ItemBase__IsKeyRingItem_x                                  0x14061DB80
#define ItemBase__ValueSellMerchant_x                              0x140621CD0
#define ItemClient__CanDrop_x                                      0x1402A5290
#define ItemClient__CanGoInBag_x                                   0x1402A53C0
#define ItemClient__CreateItemClient_x                             0x1402A56A0
#define ItemClient__dItemClient_x                                  0x1402A5100

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2C50
#define EQ_LoadingS__Array_x                                       0x140D03220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062E4A0
#define PcBase__GetCombatAbility_x                                 0x14062EB90
#define PcBase__GetCombatAbilityTimer_x                            0x14062EC30
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062F380
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062FE70
#define PcClient__AlertInventoryChanged_x                          0x1402C7820
#define PcClient__GetConLevel_x                                    0x1402C7E40  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA5E0
#define PcClient__HasLoreItem_x                                    0x1402CB5B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8EC0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD050

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402122F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402124A0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212600  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212540  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C400  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017DE90

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068BF80
#define PlayerBase__CanSee1_x                                      0x14068C050
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068C510
#define PlayerBase__HasProperty_x                                  0x14068C6E0
#define PlayerBase__IsTargetable_x                                 0x14068C7A0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9B20
#define PlayerClient__GetPcClient_x                                0x1402EC350
#define PlayerClient__PlayerClient_x                               0x1402E2DF0
#define PlayerClient__SetNameSpriteState_x                         0x1402EF7A0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0760
#define PlayerZoneClient__ChangeHeight_x                           0x1402FECD0
#define PlayerZoneClient__DoAttack_x                               0x1402FF9E0
#define PlayerZoneClient__GetLevel_x                               0x140303110
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F190
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191B60

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F85F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F86A0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F87A0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F80C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068BB40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA700
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA300
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA370
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA690  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA820
#define KeypressHandler__HandleKeyUp_x                             0x1402AA940
#define KeypressHandler__SaveKeymapping_x                          0x1402AA5A0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406461E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140640B40

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1B60  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6F00
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D95C0
#define PcZoneClient__RemovePetEffect_x                            0x1402DD150
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA1A0
#define PcZoneClient__CanEquipItem_x                               0x1402D5240
#define PcZoneClient__GetItemByID_x                                0x1402D7F90
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCED0
#define PcZoneClient__BandolierSwap_x                              0x1402D4220

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253CC0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0190

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4BE0
#define CContainerMgr__CloseContainer_x                            0x1403A4520
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4F60

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498480

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D470

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429340
#define CLootWnd__RequestLootSlot_x                                0x14042A360

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D1F40
#define EQ_Spell__SpellAffects_x                                   0x1401D3200
#define EQ_Spell__SpellAffectBase_x                                0x1401D3160
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D70A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7050
#define EQ_Spell__IsSPAStacking_x                                  0x1401D2E20
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D29E0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D22B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8A0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4440
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3B50
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F3350

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FBB00  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017A850
#define CTaskManager__GetTaskStatus_x                              0x14017A960
#define CTaskManager__GetElementDescription_x                      0x14017A4E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D02B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF0F0
#define EqSoundManager__SoundAssistPlay_x                          0x140321B70  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321EB0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D1C0
#define CTextureAnimation__SetCurCell_x                            0x14058D4D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B6D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406600D0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140660150
#define CharacterBase__IsExpansionFlag_x                           0x1401F3AB0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403829D0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383340
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384880

// messages
#define msg_spell_worn_off_x                                       0x140208C40
#define msg_new_text_x                                             0x1402044E0
#define __msgTokenTextParam_x                                      0x1401FC050
#define msgTokenText_x                                             0x1401FBF70

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323530
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323450

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069A900

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404227D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A98B0
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC820
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACAD0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6410
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6600
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6610

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140148F70
#define CFindItemWnd__Update_x                                     0x140149910
#define CFindItemWnd__PickupSelectedItem_x                         0x140143450

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401527D0
#define LootFiltersManager__GetItemFilterData_x                    0x1401532E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153B80
#define LootFiltersManager__SetItemLootFilter_x                    0x140153E30

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B2B0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C0E0
#define CResolutionHandler__UpdateResolution_x                     0x14069F1E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0F30

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140664450  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140664340  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5BC0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C57A0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061DC50
#define ItemBase__IsLoreEquipped_x                                 0x14061DCE0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD460

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C560
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C4F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C530

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403166A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123350
#define FactionManagerClient__HandleFactionMessage_x               0x140123700
#define FactionManagerClient__GetFactionStanding_x                 0x140122B20
#define FactionManagerClient__GetMaxFaction_x                      0x140122B20
#define FactionManagerClient__GetMinFaction_x                      0x1401229D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC990

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EB00

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB5B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AA930
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB3D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB350  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328590

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403166A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212690

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582ED0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339CC0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C990

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140649220
#define FreeToPlayClient__RestrictionInfo_x                        0x140AADA00

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529070

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
