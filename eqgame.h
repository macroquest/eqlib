/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#define __ClientDate                                               20231012u
#define __ExpectedVersionDate                                     "Oct 12 2023"
#define __ExpectedVersionTime                                     "12:49:51"
#define __ActualVersionDate_x                                      0x14081D108
#define __ActualVersionTime_x                                      0x14081D0F8
#define __ActualVersionBuild_x                                     0x140811B80

// Memory Protection
#define __MemChecker0_x                                            0x1402A6920
#define __MemChecker1_x                                            0x14055A020
#define __MemChecker4_x                                            0x1402759A0
#define __EncryptPad0_x                                            0x140AD08D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C09390
#define instEQZoneInfo_x                                           0x140C09584 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020E2B0
#define __gfMaxZoomCameraDistance_x                                0x140812D30
#define __gfMaxCameraDistance_x                                    0x1408521E0
#define __CurrentSocial_x                                          0x14098C94C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC81C0
#define g_eqCommandStates_x                                        0x140AC9230
#define __CommandList_x                                            0x140AC9470
#define __ScreenMode_x                                             0x140B50C6C
#define __gWorld_x                                                 0x140C02290
#define __gpbCommandEvent_x                                        0x140C01CBC
#define __ServerHost_x                                             0x140C01EA8
#define __Guilds_x                                                 0x140C07F40
#define __MouseEventTime_x                                         0x140C7E8C8
#define DI8__Mouse_Check_x                                         0x140C829F8
#define __heqmain_x                                                0x140C84E90
#define DI8__Mouse_x                                               0x140C84EE8
#define __HWnd_x                                                   0x140C85998
#define __Mouse_x                                                  0x140C84EA8
#define DI8__Main_x                                                0x140C84EC0
#define DI8__Keyboard_x                                            0x140C84EC8
#define __LoginName_x                                              0x140C8562C
#define __CurrentMapLabel_x                                        0x140C98B70
#define __LabelCache_x                                             0x140C99740
#define Teleport_Table_Size_x                                      0x140C01D4C
#define Teleport_Table_x                                           0x140C022C0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C042D0
#define pinstActiveBanker_x                                        0x140C021E0
#define pinstActiveCorpse_x                                        0x140C021D0
#define pinstActiveGMaster_x                                       0x140C021D8
#define pinstActiveMerchant_x                                      0x140C021C8
#define pinstAltAdvManager_x                                       0x140B51AF8
#define pinstCEverQuest_x                                          0x140C84EE0
#define pinstCamActor_x                                            0x140B50C58
#define pinstCDBStr_x                                              0x140B508F0
#define pinstCDisplay_x                                            0x140C042C8
#define pinstControlledPlayer_x                                    0x140C02270
#define pinstCResolutionHandler_x                                  0x1413071D8
#define pinstCSidlManager_x                                        0x140CAAA40
#define pinstCXWndManager_x                                        0x140CAAA38
#define instDynamicZone_x                                          0x140C07E00 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C07E4E
#define instExpeditionName_x                                       0x140C07E8E
#define pinstDZMember_x                                            0x140C07F18
#define pinstDZTimerInfo_x                                         0x140C07F20
#define pinstEqLogin_x                                             0x140C84F70
#define instTribute_x                                              0x140AC3840
#define pinstEQSoundManager_x                                      0x140B51E78
#define pinstEQSpellStrings_x                                      0x140B35500
#define pinstSGraphicsEngine_x                                     0x141306F58
#define pinstLocalPC_x                                             0x140C022B0
#define pinstLocalPlayer_x                                         0x140C021C0
#define pinstCMercenaryClientManager_x                             0x140C80178
#define pinstModelPlayer_x                                         0x140C021F0
#define pinstRenderInterface_x                                     0x141306F70
#define pinstSkillMgr_x                                            0x140C81E10
#define pinstSpawnManager_x                                        0x140C80530
#define pinstSpellManager_x                                        0x140C81E78
#define pinstStringTable_x                                         0x140C022B8
#define pinstSwitchManager_x                                       0x140C01790
#define pinstTarget_x                                              0x140C02268
#define pinstTaskMember_x                                          0x140AC3830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C02278
#define pinstTradeTarget_x                                         0x140C021E8
#define instTributeActive_x                                        0x140AC3869
#define pinstViewActor_x                                           0x140B50C50
#define pinstWorldData_x                                           0x140C042C0
#define pinstPlayerPath_x                                          0x140C80558
#define pinstTargetIndicator_x                                     0x140C81F28
#define EQObject_Top_x                                             0x140C02298

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C95CC8
#define pinstCContainerMgr_x                                       0x140B50F20
#define pinstCContextMenuManager_x                                 0x140CAA720
#define pinstCInvSlotMgr_x                                         0x140B50F00
#define pinstCItemDisplayManager_x                                 0x140C98740
#define pinstCPopupWndManager_x                                    0x140C98FD0
#define pinstCSpellDisplayMgr_x                                    0x140C99620
#define pinstCTaskManager_x                                        0x14098CC80
#define pinstEQSuiteTextureLoader_x                                0x140AD9F50
#define pinstItemIconCache_x                                       0x140C96028
#define pinstLootFiltersManager_x                                  0x140B50338
#define pinstGFViewListener_x                                      0x140CA9EF8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402364A0
#define __CastRay_x                                                0x14022ED20
#define __CastRay2_x                                               0x14022EA20
#define __ConvertItemTags_x                                        0x14022F180
#define __CleanItemTags_x                                          0x140087830
#define __CreateCascadeMenuItems_x                                 0x140180980
#define __DoesFileExist_x                                          0x14055DED0
#define __EQGetTime_x                                              0x14055A5D0
#define __ExecuteCmd_x                                             0x140205C80
#define __FixHeading_x                                             0x140684EB0
#define __FlushDxKeyboard_x                                        0x140324A30
#define __get_bearing_x                                            0x140238690
#define __get_melee_range_x                                        0x140238790
#define __GetAnimationCache_x                                      0x14039F6F0
#define __GetGaugeValueFromEQ_x                                    0x1404D08F0
#define __GetLabelFromEQ_x                                         0x1404D1EE0
#define __GetXTargetType_x                                         0x140686190   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140684F30
#define __HelpPath_x                                               0x140C7E790   // Why?
#define __NewUIINI_x                                               0x1404DD3D0   // Why?
#define __ProcessGameEvents_x                                      0x14026ADD0
#define __ProcessKeyboardEvents_x                                  0x140326290
#define __ProcessMouseEvents_x                                     0x14026C2D0
#define __SaveColors_x                                             0x140190B10
#define __STMLToText_x                                             0x14056A0A0
#define __WndProc_x                                                0x140323190
#define CMemoryMappedFile__SetFile_x                               0x1407BBEC0
#define DrawNetStatus_x                                            0x1402B4D50
#define Util__FastTime_x                                           0x140559B60
#define __eq_delete_x                                              0x14068B154
#define __eq_new_x                                                 0x14068B110
#define __CopyLayout_x                                             0x1402A2D70
#define __ThrottleFrameRate_x                                      0x14025A675
#define __ThrottleFrameRateEnd_x                                   0x14025A6D5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403358D0
#define CAAWnd__Update_x                                           0x140335BD0
#define CAAWnd__UpdateSelected_x                                   0x140336BD0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9A40
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2340
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F88B8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA330

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BB60
#define AltAdvManager__IsAbilityReady_x                            0x14019BDE0
#define AltAdvManager__GetAAById_x                                 0x14019B430
#define AltAdvManager__CanTrainAbility_x                           0x14019B260
#define AltAdvManager__CanSeeAbility_x                             0x14019AF20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0250
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1090
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D12E0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5B20
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1CB0
#define CharacterZoneClient__CastSpell_x                           0x1400D1D50
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E15F0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7220
#define CharacterZoneClient__Cur_Mana_x                            0x1400E73E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4D70
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED830
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC5F0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D61E0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4FF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF3C0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE290
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D63B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6850
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8220
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE9D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6E90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF650
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D64B0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F03B0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D66C0
#define CharacterZoneClient__GetModCap_x                           0x1400F7B40
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6760
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6970
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB390
#define CharacterZoneClient__HasSkill_x                            0x1400F33A0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7420
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAD50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7630
#define CharacterZoneClient__Max_Endurance_x                       0x1402CF0C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7970
#define CharacterZoneClient__Max_Mana_x                            0x1402CF2E0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7DD0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE1A0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEEA0
#define CharacterZoneClient__TotalEffect_x                         0x1400E01E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD540


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140353E70

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035E1D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035A050
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403590E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140360880

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1408607E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140381E70
#define CChatWindowManager__InitContextMenu_x                      0x140382000
#define CChatWindowManager__FreeChatWindow_x                       0x140381090
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140388FF0
#define CChatWindowManager__CreateChatWindow_x                     0x1403809D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401056D0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140389FE0
#define CChatWindow__Clear_x                                       0x14038AE60
#define CChatWindow__WndNotification_x                             0x14038C050
#define CChatWindow__AddHistory_x                                  0x14038A960

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405976F0
#define CContextMenu__RemoveMenuItem_x                             0x140597AE0
#define CContextMenu__RemoveAllMenuItems_x                         0x140597AB0
#define CContextMenu__CheckMenuItem_x                              0x140597920
#define CContextMenu__SetMenuItem_x                                0x140597B00
#define CContextMenu__AddSeparator_x                               0x140597860

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405895B0
#define CContextMenuManager__RemoveMenu_x                          0x140589B90
#define CContextMenuManager__PopupMenu_x                           0x1405898D0
#define CContextMenuManager__Flush_x                               0x140589630
#define CContextMenuManager__CreateDefaultMenu_x                   0x140397760

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064DE60
#define CChatService__GetFriendName_x                              0x14064DE70

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057A530
#define CComboWnd__Draw_x                                          0x14057A630
#define CComboWnd__GetCurChoice_x                                  0x14057A910  // unused
#define CComboWnd__GetListRect_x                                   0x14057A9B0
#define CComboWnd__InsertChoice_x                                  0x14057ACF0
#define CComboWnd__SetColors_x                                     0x14057B080
#define CComboWnd__SetChoice_x                                     0x14057B040
#define CComboWnd__GetItemCount_x                                  0x14057A9A0
#define CComboWnd__GetCurChoiceText_x                              0x14057A950  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057A8E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057ADB0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403954D0
#define CContainerWnd__SetContainer_x                              0x1403E8400
#define CContainerWnd__vftable_x                                   0x14082C3F0

// CDisplay
#define CDisplay__cameraType_x                                     0x140B50A1C
#define CDisplay__ZoneMainUI_x                                     0x1405B1900
#define CDisplay__PreZoneMainUI_x                                  0x14018D930
#define CDisplay__CleanGameUI_x                                    0x14017FA80
#define CDisplay__GetClickedActor_x                                0x140183C10
#define CDisplay__GetUserDefinedColor_x                            0x140184880
#define CDisplay__InitCharSelectUI_x                               0x140184B30
#define CDisplay__ReloadUI_x                                       0x14018FC10
#define CDisplay__WriteTextHD2_x                                   0x140196DB0
#define CDisplay__TrueDistance_x                                   0x140196A60
#define CDisplay__SetViewActor_x                                   0x140193280
#define CDisplay__GetFloorHeight_x                                 0x140183E70
#define CDisplay__ToggleScreenshotMode_x                           0x140196550
#define CDisplay__RealRender_World_x                               0x14018F000

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BBAB0
#define CEditWnd__DrawCaret_x                                      0x1405AD5E0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405ADAA0
#define CEditWnd__GetCaretPt_x                                     0x1405ADD20  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405ADD60
#define CEditWnd__GetDisplayString_x                               0x1405ADFD0
#define CEditWnd__GetHorzOffset_x                                  0x1405AE210
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AE360
#define CEditWnd__GetSelStartPt_x                                  0x1405AE640  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AE490
#define CEditWnd__PointFromPrintableChar_x                         0x1405AF1F0
#define CEditWnd__ReplaceSelection_x                               0x1405AF5A0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405AFA40
#define CEditWnd__SetEditable_x                                    0x1405AFCD0
#define CEditWnd__SetWindowText_x                                  0x1405AFD00

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025B660
#define CEverQuest__ClickedPlayer_x                                0x140251380
#define CEverQuest__CreateTargetIndicator_x                        0x140251C40
#define CEverQuest__DoTellWindow_x                                 0x1401053E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105CA0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D090
#define CEverQuest__dsp_chat_x                                     0x140104E20 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287280
#define CEverQuest__Emote_x                                        0x14025DA40
#define CEverQuest__GetBodyTypeDesc_x                              0x14025E7E0
#define CEverQuest__GetClassDesc_x                                 0x14025E840
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025EC10
#define CEverQuest__GetDeityDesc_x                                 0x14025EEC0
#define CEverQuest__GetLangDesc_x                                  0x14025F2F0
#define CEverQuest__GetRaceDesc_x                                  0x14025F690
#define CEverQuest__InterpretCmd_x                                 0x140260FA0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140276020
#define CEverQuest__LMouseUp_x                                     0x140262950
#define CEverQuest__RightClickedOnPlayer_x                         0x140273880
#define CEverQuest__RMouseUp_x                                     0x14026CE50
#define CEverQuest__SetGameState_x                                 0x140278550
#define CEverQuest__UPCNotificationFlush_x                         0x14027DD40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402625C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026E200
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F060

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403A9AB0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C05A0
#define CGuild__GetGuildName_x                                     0x1400C05E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CBF20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140298890
#define CHotButton__SetCheck_x                                     0x140298B60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E1140
#define CInvSlotMgr__MoveItem_x                                    0x1403E1320
#define CInvSlotMgr__SelectSlot_x                                  0x1403E2CC0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DE330
#define CInvSlot__SliderComplete_x                                 0x1403DF880
#define CInvSlot__GetItemBase_x                                    0x1403D9F70
#define CInvSlot__UpdateItem_x                                     0x1403DFD40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E4050

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140405460
#define CItemDisplayWnd__UpdateStrings_x                           0x140407E50
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140401E90
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404036D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140404880

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CD2C0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404CEFC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140508B60

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403FE5E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401484B0

// CLabel
#define CLabel__UpdateText_x                                       0x14040F230

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057DEC0
#define CListWnd__dCListWnd_x                                      0x14057E310
#define CListWnd__vftable_x                                        0x14085E9A0
#define CListWnd__AddColumn_x                                      0x14057E9B0
#define CListWnd__AddColumn1_x                                     0x14057EA50
#define CListWnd__AddLine_x                                        0x14057EBB0
#define CListWnd__AddString_x                                      0x14057F140
#define CListWnd__CalculateFirstVisibleLine_x                      0x14057F6B0
#define CListWnd__CalculateVSBRange_x                              0x14057F990
#define CListWnd__ClearSel_x                                       0x14057FB40
#define CListWnd__ClearAllSel_x                                    0x14057FAE0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14057FBA0
#define CListWnd__Compare_x                                        0x14057FD50
#define CListWnd__Draw_x                                           0x140580220
#define CListWnd__DrawColumnSeparators_x                           0x140580DD0
#define CListWnd__DrawHeader_x                                     0x140580E90
#define CListWnd__DrawItem_x                                       0x140581570
#define CListWnd__DrawLine_x                                       0x140581EF0
#define CListWnd__DrawSeparator_x                                  0x1405823B0
#define CListWnd__EnableLine_x                                     0x1405827D0
#define CListWnd__EnsureVisible_x                                  0x140582830
#define CListWnd__ExtendSel_x                                      0x140582930
#define CListWnd__GetColumnMinWidth_x                              0x140582C60
#define CListWnd__GetColumnWidth_x                                 0x140582CE0
#define CListWnd__GetCurSel_x                                      0x140582DE0
#define CListWnd__GetItemData_x                                    0x140583160
#define CListWnd__GetItemHeight_x                                  0x1405831A0
#define CListWnd__GetItemRect_x                                    0x1405833C0
#define CListWnd__GetItemText_x                                    0x140583660
#define CListWnd__GetSelList_x                                     0x1405838B0
#define CListWnd__GetSeparatorRect_x                               0x140583AA0
#define CListWnd__InsertLine_x                                     0x140584F00
#define CListWnd__RemoveLine_x                                     0x140585570
#define CListWnd__SetColors_x                                      0x140585930
#define CListWnd__SetColumnJustification_x                         0x140585950
#define CListWnd__SetColumnLabel_x                                 0x1405859D0
#define CListWnd__SetColumnWidth_x                                 0x140585B70
#define CListWnd__SetCurSel_x                                      0x140585C40
#define CListWnd__SetItemColor_x                                   0x140585EB0
#define CListWnd__SetItemData_x                                    0x140585F50
#define CListWnd__SetItemText_x                                    0x140586190
#define CListWnd__Sort_x                                           0x1405865A0
#define CListWnd__ToggleSel_x                                      0x140586710
#define CListWnd__SetColumnsSizable_x                              0x140585BC0
#define CListWnd__SetItemWnd_x                                     0x1405862C0
#define CListWnd__GetItemWnd_x                                     0x140583840
#define CListWnd__SetItemIcon_x                                    0x140585F90
#define CListWnd__CalculateCustomWindowPositions_x                 0x14057F480
#define CListWnd__SetVScrollPos_x                                  0x140586500

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140422520

// MapViewMap
#define MapViewMap__vftable_x                                      0x140838F40
#define MapViewMap__Clear_x                                        0x1404240A0
#define MapViewMap__SetZoom_x                                      0x14042A6E0
#define MapViewMap__HandleLButtonDown_x                            0x140427220

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044BD60  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140452350
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140452B00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140456330
#define CMerchantWnd__SelectBuySellSlot_x                          0x140455670
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045A5E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062AF70
#define CPacketScrambler__hton_x                                   0x14062AF60

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A6EA0
#define CSidlManagerBase__FindAnimation1_x                         0x1405A6DE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A74D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A7280
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A61E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A6170
#define CSidlManagerBase__CreateXWnd_x                             0x1405A57B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C0320
#define CSidlManager__CreateXWnd_x                                 0x1404C04E0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056BB70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056BCA0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B6070 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056BE20
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056B2C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056B390
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056B5A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056C4C0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056C6F0
#define CSidlScreenWnd__GetChildItem_x                             0x14056C890
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056CAE0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140576AD0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056CE50
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056D1C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056DA80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056E370
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA9D98
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056E9C0
#define CSidlScreenWnd__StoreIniVis_x                              0x14056F1B0
#define CSidlScreenWnd__vftable_x                                  0x14085DC40
#define CSidlScreenWnd__WndNotification_x                          0x14056F200

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030E1A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030E5B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030E4E0
#define CSkillMgr__IsActivatedSkill_x                              0x14030E960
#define CSkillMgr__IsCombatSkill_x                                 0x14030E9A0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DD440
#define CSliderWnd__SetValue_x                                     0x140587880
#define CSliderWnd__SetNumTicks_x                                  0x140587700

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C6960

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058C010
#define CStmlWnd__CalculateHSBRange_x                              0x1405764C0
#define CStmlWnd__CalculateVSBRange_x                              0x14058CEB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058D9B0
#define CStmlWnd__ForceParseNow_x                                  0x14058DA50
#define CStmlWnd__GetVisibleText_x                                 0x14058E120
#define CStmlWnd__MakeStmlColorTag_x                               0x14058FE80
#define CStmlWnd__MakeWndNotificationTag_x                         0x14058FEC0
#define CStmlWnd__SetSTMLText_x                                    0x140596E90
#define CStmlWnd__StripFirstSTMLLines_x                            0x140597040
#define CStmlWnd__UpdateHistoryString_x                            0x1405973D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140587C50
#define CTabWnd__DrawCurrentPage_x                                 0x140587CF0
#define CTabWnd__DrawTab_x                                         0x1405880C0
#define CTabWnd__GetTabRect_x                                      0x140588720
#define CTabWnd__InsertPage_x                                      0x1405889F0
#define CTabWnd__RemovePage_x                                      0x140588C80
#define CTabWnd__SetPage_x                                         0x140588DE0
#define CTabWnd__UpdatePage_x                                      0x1405890E0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B0160
#define CPageWnd__SetTabText_x                                     0x1405B01D0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9CF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA100


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059E860
#define CTextureFont__DrawWrappedText1_x                           0x14059E770
#define CTextureFont__DrawWrappedText2_x                           0x14059E990
#define CTextureFont__GetTextExtent_x                              0x14059ED40
#define CTextureFont__GetHeight_x                                  0x14059ED00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B47D0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140568790

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD98C0
#define CXStr__gCXStrAccess_x                                      0x140CA9B98

// CXWnd
#define CXWnd__BringToTop_x                                        0x140571C00
#define CXWnd__ClrFocus_x                                          0x140571E40
#define CXWnd__Destroy_x                                           0x140571FC0
#define CXWnd__DoAllDrawing_x                                      0x1405720C0
#define CXWnd__DrawColoredRect_x                                   0x140572890
#define CXWnd__DrawTooltip_x                                       0x140573F20
#define CXWnd__DrawTooltipAtPoint_x                                0x140573FD0
#define CXWnd__GetChildItem_x                                      0x1405748E0
#define CXWnd__GetChildWndAt_x                                     0x140574990
#define CXWnd__GetClientRect_x                                     0x140574C30
#define CXWnd__GetClientClipRect_x                                 0x140574B00
#define CXWnd__GetRelativeRect_x                                   0x1405765E0
#define CXWnd__GetScreenClipRect_x                                 0x1405766F0
#define CXWnd__GetScreenRect_x                                     0x140576850
#define CXWnd__GetTooltipRect_x                                    0x1405769D0
#define CXWnd__IsActive_x                                          0x140576F90
#define CXWnd__IsDescendantOf_x                                    0x140576FC0
#define CXWnd__IsReallyVisible_x                                   0x140577030
#define CXWnd__IsType_x                                            0x140577070
#define CXWnd__Minimize_x                                          0x140577170
#define CXWnd__ProcessTransition_x                                 0x140578040
#define CXWnd__Resize_x                                            0x140578160
#define CXWnd__Right_x                                             0x140578200
#define CXWnd__SetFocus_x                                          0x1405785C0
#define CXWnd__SetFont_x                                           0x140578610
#define CXWnd__SetKeyTooltip_x                                     0x140578720
#define CXWnd__SetMouseOver_x                                      0x140578860
#define CXWnd__SetParent_x                                         0x1405788E0
#define CXWnd__StartFade_x                                         0x140578D20
#define CXWnd__vftable_x                                           0x14085E220
#define CXWnd__CXWnd_x                                             0x1405707B0
#define CXWnd__dCXWnd_x                                            0x1405710F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BB230

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140598CB0
#define CXWndManager__DrawCursor_x                                 0x140598F90
#define CXWndManager__DrawWindows_x                                0x1405991F0
#define CXWndManager__GetKeyboardFlags_x                           0x1405998C0
#define CXWndManager__HandleKeyboardMsg_x                          0x140599900
#define CXWndManager__RemoveWnd_x                                  0x14059CF20

// CDBStr
#define CDBStr__GetString_x                                        0x14017DBF0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140634080

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDFB0
#define CCharacterListWnd__EnterWorld_x                            0x1400CCCB0
#define CCharacterListWnd__Quit_x                                  0x1400CDF90
#define CCharacterListWnd__UpdateList_x                            0x1400CECA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406035A0
#define ItemBase__CreateItemTagString_x                            0x140604010
#define ItemBase__GetImageNum_x                                    0x1406065D0
#define ItemBase__GetItemValue_x                                   0x1406080A0
#define ItemBase__IsEmpty_x                                        0x140609CC0
#define ItemBase__IsKeyRingItem_x                                  0x14060A400
#define ItemBase__ValueSellMerchant_x                              0x14060E620
#define ItemClient__CanDrop_x                                      0x14029AE60
#define ItemClient__CanGoInBag_x                                   0x14029AF90
#define ItemClient__CreateItemClient_x                             0x14029B270
#define ItemClient__dItemClient_x                                  0x14029ACD0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D300
#define EQ_LoadingS__Array_x                                       0x140AC5CD0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061A5D0
#define PcBase__GetCombatAbility_x                                 0x14061AC70
#define PcBase__GetCombatAbilityTimer_x                            0x14061AD10
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061B460
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061BDF0
#define PcClient__AlertInventoryChanged_x                          0x1402BC840
#define PcClient__GetConLevel_x                                    0x1402BCE20  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BF4F0
#define PcClient__HasLoreItem_x                                    0x1402C05F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CD600
#define PcZoneClient__RemoveMyAffect_x                             0x1402D0190

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020A2F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020A4A0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020A600  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020A540  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140242C70  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178430

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140677A30
#define PlayerBase__CanSee1_x                                      0x140677B00
#define PlayerBase__GetVisibilityLineSegment_x                     0x140677FC0
#define PlayerBase__HasProperty_x                                  0x1406781E0
#define PlayerBase__IsTargetable_x                                 0x1406782A0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DC0D0
#define PlayerClient__GetPcClient_x                                0x1402DE900
#define PlayerClient__PlayerClient_x                               0x1402D5430
#define PlayerClient__SetNameSpriteState_x                         0x1402E1DB0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E2D70
#define PlayerZoneClient__ChangeHeight_x                           0x1402F0C10
#define PlayerZoneClient__DoAttack_x                               0x1402F1920
#define PlayerZoneClient__GetLevel_x                               0x1402F5090
#define PlayerZoneClient__IsValidTeleport_x                        0x140245A00
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C1C0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EAB30  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EABE0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EACE0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EA600
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140677610

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0290
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029FE90
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14029FF00
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0220  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A03B0
#define KeypressHandler__HandleKeyUp_x                             0x1402A04B0
#define KeypressHandler__SaveKeymapping_x                          0x1402A0130  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140631C00  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062C6A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C5D80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CB620
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CDD00
#define PcZoneClient__RemovePetEffect_x                            0x1402D0290
#define PcZoneClient__HasAlternateAbility_x                        0x1402CE9E0
#define PcZoneClient__CanEquipItem_x                               0x1402C9920
#define PcZoneClient__GetItemByID_x                                0x1402CC6B0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D0010
#define PcZoneClient__BandolierSwap_x                              0x1402C8900
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CDC50

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024A530

// IconCache
#define IconCache__GetIcon_x                                       0x14039F720

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140394280
#define CContainerMgr__CloseContainer_x                            0x140393BC0
#define CContainerMgr__OpenExperimentContainer_x                   0x140394600

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404851E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293060

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140416520
#define CLootWnd__RequestLootSlot_x                                0x140417560

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC520
#define EQ_Spell__SpellAffects_x                                   0x1401CD7E0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD740
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6B50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6B00
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD400
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CCFC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC890

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF1F0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E1670  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E16B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E0BB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E0160

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E8710  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174CB0
#define CTaskManager__GetTaskStatus_x                              0x140174DC0
#define CTaskManager__GetElementDescription_x                      0x140174940

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA890
#define EqSoundManager__PlayScriptMp3_x                            0x1401C96D0
#define EqSoundManager__SoundAssistPlay_x                          0x140313690  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403139D0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140579AC0
#define CTextureAnimation__SetCurCell_x                            0x140579DD0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402912D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064B880
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064B900
#define CharacterBase__IsExpansionFlag_x                           0x1401EC7A0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140374170
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140374AD0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140376020

// messages
#define msg_spell_worn_off_x                                       0x140200D70
#define msg_new_text_x                                             0x1401FC640
#define __msgTokenTextParam_x                                      0x1401F43D0
#define msgTokenText_x                                             0x1401F42F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140315080
#define SpellManager__GetSpellByGroupAndRank_x                     0x140314FA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140686570

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14040F980

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039B780
#define CCursorAttachment__AttachToCursor1_x                       0x140398E40
#define CCursorAttachment__Deactivate_x                            0x14039BCF0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B2C70
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B2E60
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B2E70

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143740
#define CFindItemWnd__Update_x                                     0x1401440E0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DC00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF50
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E300
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E5B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140468510

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068AA20
#define CResolutionHandler__GetWindowedStyle_x                     0x14030DD00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403905B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14064F920  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14064F810  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B5140
#define CGroupWnd__UpdateDisplay_x                                 0x1403B4D20

// ItemBase
#define ItemBase__IsLore_x                                         0x14060A4D0
#define ItemBase__IsLoreEquipped_x                                 0x14060A560

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B2F80

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140242DD0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140242D60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140242DA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140308370

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DB40
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEF0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D310
#define FactionManagerClient__GetMaxFaction_x                      0x14011D310
#define FactionManagerClient__GetMinFaction_x                      0x14011D1C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABEE0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401292A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5C40
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4FC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5A60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A59E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031A1A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140308370

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020A690

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056F7F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400849F0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032B7B0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BF00

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140634AA0
#define FreeToPlayClient__RestrictionInfo_x                        0x1408700A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
