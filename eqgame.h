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

#define __ClientDate                                               20230918u
#define __ExpectedVersionDate                                     "Sep 18 2023"
#define __ExpectedVersionTime                                     "19:05:29"
#define __ActualVersionDate_x                                      0x14081E038
#define __ActualVersionTime_x                                      0x14081E028
#define __ActualVersionBuild_x                                     0x140812AE0

// Memory Protection
#define __MemChecker0_x                                            0x1402A72A0
#define __MemChecker1_x                                            0x14055AF60
#define __MemChecker4_x                                            0x1402762A0
#define __EncryptPad0_x                                            0x140ACF8E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C083C0
#define instEQZoneInfo_x                                           0x140C085B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020ECF0
#define __gfMaxZoomCameraDistance_x                                0x140813C90
#define __gfMaxCameraDistance_x                                    0x1408530C8
#define __CurrentSocial_x                                          0x14098B940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC71D0
#define g_eqCommandStates_x                                        0x140AC8240
#define __CommandList_x                                            0x140AC8470
#define __ScreenMode_x                                             0x140B4FD04
#define __gWorld_x                                                 0x140C031F0
#define __gpbCommandEvent_x                                        0x140C02CE8
#define __ServerHost_x                                             0x140C02ED8
#define __Guilds_x                                                 0x140C06F70
#define __MouseEventTime_x                                         0x140C7D8F8
#define DI8__Mouse_Check_x                                         0x140C81AB0
#define __heqmain_x                                                0x140C83F48
#define DI8__Mouse_x                                               0x140C83F98
#define __HWnd_x                                                   0x140C849C8
#define __Mouse_x                                                  0x140C83F60
#define DI8__Main_x                                                0x140C83F78
#define DI8__Keyboard_x                                            0x140C83F80
#define __LoginName_x                                              0x140C8465C
#define __CurrentMapLabel_x                                        0x140C97BA0
#define __LabelCache_x                                             0x140C98770
#define Teleport_Table_Size_x                                      0x140C02D74
#define Teleport_Table_x                                           0x140C00830

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C03300
#define pinstActiveBanker_x                                        0x140C03218
#define pinstActiveCorpse_x                                        0x140C03208
#define pinstActiveGMaster_x                                       0x140C03210
#define pinstActiveMerchant_x                                      0x140C03200
#define pinstAltAdvManager_x                                       0x140B50B18
#define pinstCEverQuest_x                                          0x140C81A00
#define pinstCamActor_x                                            0x140B4FCF0
#define pinstCDBStr_x                                              0x140B4F910
#define pinstCDisplay_x                                            0x140C02830
#define pinstControlledPlayer_x                                    0x140C032A8
#define pinstCResolutionHandler_x                                  0x141306208
#define pinstCSidlManager_x                                        0x140CA9A70
#define pinstCXWndManager_x                                        0x140CA9A68
#define instDynamicZone_x                                          0x140C06E30 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C06E7E
#define instExpeditionName_x                                       0x140C06EBE
#define pinstDZMember_x                                            0x140C06F48
#define pinstDZTimerInfo_x                                         0x140C06F50
#define pinstEqLogin_x                                             0x140C83FA0
#define instTribute_x                                              0x140AC2840
#define pinstEQSoundManager_x                                      0x140B50E98
#define pinstEQSpellStrings_x                                      0x140B34520
#define pinstSGraphicsEngine_x                                     0x141305F88
#define pinstLocalPC_x                                             0x140C032E0
#define pinstLocalPlayer_x                                         0x140C031F8
#define pinstCMercenaryClientManager_x                             0x140C7F198
#define pinstModelPlayer_x                                         0x140C03228
#define pinstRenderInterface_x                                     0x141305FA0
#define pinstSkillMgr_x                                            0x140C80E40
#define pinstSpawnManager_x                                        0x140C7F560
#define pinstSpellManager_x                                        0x140C80EA8
#define pinstStringTable_x                                         0x140C032F0
#define pinstSwitchManager_x                                       0x140C007B0
#define pinstTarget_x                                              0x140C032A0
#define pinstTaskMember_x                                          0x140AC2830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C032B0
#define pinstTradeTarget_x                                         0x140C03220
#define instTributeActive_x                                        0x140AC2869
#define pinstViewActor_x                                           0x140B4FCE8
#define pinstWorldData_x                                           0x140C032E8
#define pinstPlayerPath_x                                          0x140C7F588
#define pinstTargetIndicator_x                                     0x140C80F58
#define EQObject_Top_x                                             0x140C032C8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C94CF8
#define pinstCContainerMgr_x                                       0x140B4F990
#define pinstCContextMenuManager_x                                 0x140CA9750
#define pinstCInvSlotMgr_x                                         0x140B4F980
#define pinstCItemDisplayManager_x                                 0x140C97770
#define pinstCPopupWndManager_x                                    0x140C98000
#define pinstCSpellDisplayMgr_x                                    0x140C98650
#define pinstCTaskManager_x                                        0x14098BC80
#define pinstEQSuiteTextureLoader_x                                0x140AD8F60
#define pinstItemIconCache_x                                       0x140C95058
#define pinstLootFiltersManager_x                                  0x140B4F358
#define pinstGFViewListener_x                                      0x140CA8F28


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140236EA0
#define __CastRay_x                                                0x14022F720
#define __CastRay2_x                                               0x14022F420
#define __ConvertItemTags_x                                        0x14022FB80
#define __CleanItemTags_x                                          0x1400875F0
#define __CreateCascadeMenuItems_x                                 0x1401806C0
#define __DoesFileExist_x                                          0x14055EE20
#define __EQGetTime_x                                              0x14055B510
#define __ExecuteCmd_x                                             0x1402066E0
#define __FixHeading_x                                             0x140685A80
#define __FlushDxKeyboard_x                                        0x140326C10
#define __get_bearing_x                                            0x140239090
#define __get_melee_range_x                                        0x140239190
#define __GetAnimationCache_x                                      0x1403A1490
#define __GetGaugeValueFromEQ_x                                    0x1404D2300
#define __GetLabelFromEQ_x                                         0x1404D38F0
#define __GetXTargetType_x                                         0x140686DA0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140685B00
#define __HelpPath_x                                               0x140C7D7C0   // Why?
#define __NewUIINI_x                                               0x1404DEE10   // Why?
#define __ProcessGameEvents_x                                      0x14026B6B0
#define __ProcessKeyboardEvents_x                                  0x140328470
#define __ProcessMouseEvents_x                                     0x14026CBB0
#define __SaveColors_x                                             0x1401907C0
#define __STMLToText_x                                             0x140563760
#define __WndProc_x                                                0x140325370
#define CMemoryMappedFile__SetFile_x                               0x1407BCAC0
#define DrawNetStatus_x                                            0x1402B60C0
#define Util__FastTime_x                                           0x14055AAA0
#define __eq_delete_x                                              0x1406AFC20
#define __eq_new_x                                                 0x1406AFBDC
#define __CopyLayout_x                                             0x1402A36C0
#define __ThrottleFrameRate_x                                      0x14025AF5D
#define __ThrottleFrameRateEnd_x                                   0x14025AFBD

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403377E0
#define CAAWnd__Update_x                                           0x140337AE0
#define CAAWnd__UpdateSelected_x                                   0x140338AE0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9820
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2120
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F98C8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA110

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019B810
#define AltAdvManager__IsAbilityReady_x                            0x14019BA90
#define AltAdvManager__GetAAById_x                                 0x14019B0E0
#define AltAdvManager__CanTrainAbility_x                           0x14019AF10
#define AltAdvManager__CanSeeAbility_x                             0x14019ABD0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0000
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0E30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1080
#define CharacterZoneClient__CanUseItem_x                          0x1400E5910
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1A50
#define CharacterZoneClient__CastSpell_x                           0x1400D1AF0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E13E0
#define CharacterZoneClient__Cur_HP_x                              0x1400E6FF0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E71B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4B10
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED5F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC360  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5FC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4DE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF190
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE060
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6190
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6600
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7FD0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE7A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6C60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF420
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6290
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0180
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D64A0
#define CharacterZoneClient__GetModCap_x                           0x1400F78B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6540
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6750
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB140
#define CharacterZoneClient__HasSkill_x                            0x1400F3170
#define CharacterZoneClient__HitBySpell_x                          0x1400D7200
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAB30
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F73A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D0560  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F76E0
#define CharacterZoneClient__Max_Mana_x                            0x1402D0780  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7B40
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDF80
#define CharacterZoneClient__SpellDuration_x                       0x1400DEC80
#define CharacterZoneClient__TotalEffect_x                         0x1400DFFC0
#define CharacterZoneClient__UseSkill_x                            0x1400FD2B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140355D50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140360090

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035BF20
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035AFB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140362750

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140861280

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140383CB0
#define CChatWindowManager__InitContextMenu_x                      0x140383E40
#define CChatWindowManager__FreeChatWindow_x                       0x140382ED0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038AE30
#define CChatWindowManager__CreateChatWindow_x                     0x140382810

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105440

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038BE20
#define CChatWindow__Clear_x                                       0x14038CCA0
#define CChatWindow__WndNotification_x                             0x14038DE90
#define CChatWindow__AddHistory_x                                  0x14038C7A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405986A0
#define CContextMenu__RemoveMenuItem_x                             0x140598A90
#define CContextMenu__RemoveAllMenuItems_x                         0x140598A60
#define CContextMenu__CheckMenuItem_x                              0x1405988D0
#define CContextMenu__SetMenuItem_x                                0x140598AB0
#define CContextMenu__AddSeparator_x                               0x140598810

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14058A560
#define CContextMenuManager__RemoveMenu_x                          0x14058AB40
#define CContextMenuManager__PopupMenu_x                           0x14058A880
#define CContextMenuManager__Flush_x                               0x14058A5E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140399530

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064EBF0
#define CChatService__GetFriendName_x                              0x14064EC00

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057B490
#define CComboWnd__Draw_x                                          0x14057B590
#define CComboWnd__GetCurChoice_x                                  0x14057B870  // unused
#define CComboWnd__GetListRect_x                                   0x14057B910
#define CComboWnd__InsertChoice_x                                  0x14057BC50
#define CComboWnd__SetColors_x                                     0x14057BFE0
#define CComboWnd__SetChoice_x                                     0x14057BFA0
#define CComboWnd__GetItemCount_x                                  0x14057B900
#define CComboWnd__GetCurChoiceText_x                              0x14057B8B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057B840
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057BD10

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403972B0
#define CContainerWnd__SetContainer_x                              0x1403EA2C0
#define CContainerWnd__vftable_x                                   0x14082D318

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4FA8C
#define CDisplay__ZoneMainUI_x                                     0x1405B2860
#define CDisplay__PreZoneMainUI_x                                  0x14018D5E0
#define CDisplay__CleanGameUI_x                                    0x14017F7C0
#define CDisplay__GetClickedActor_x                                0x140183950
#define CDisplay__GetUserDefinedColor_x                            0x1401845C0
#define CDisplay__InitCharSelectUI_x                               0x140184870
#define CDisplay__ReloadUI_x                                       0x14018F8C0
#define CDisplay__WriteTextHD2_x                                   0x140196A60
#define CDisplay__TrueDistance_x                                   0x140196710
#define CDisplay__SetViewActor_x                                   0x140192F30
#define CDisplay__GetFloorHeight_x                                 0x140183BB0
#define CDisplay__ToggleScreenshotMode_x                           0x140196200
#define CDisplay__RealRender_World_x                               0x14018ECB0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BCA10
#define CEditWnd__DrawCaret_x                                      0x1405AE560  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AEA10
#define CEditWnd__GetCaretPt_x                                     0x1405AEC90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AECD0
#define CEditWnd__GetDisplayString_x                               0x1405AEF40
#define CEditWnd__GetHorzOffset_x                                  0x1405AF180
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AF2D0
#define CEditWnd__GetSelStartPt_x                                  0x1405AF5B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AF400
#define CEditWnd__PointFromPrintableChar_x                         0x1405B0160
#define CEditWnd__ReplaceSelection_x                               0x1405B0510
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B09B0
#define CEditWnd__SetEditable_x                                    0x1405B0C40
#define CEditWnd__SetWindowText_x                                  0x1405B0C70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025BF40
#define CEverQuest__ClickedPlayer_x                                0x140251D70
#define CEverQuest__CreateTargetIndicator_x                        0x140252630
#define CEverQuest__DoTellWindow_x                                 0x140105150 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105A10 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D970
#define CEverQuest__dsp_chat_x                                     0x140104B90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287B80
#define CEverQuest__Emote_x                                        0x14025E320
#define CEverQuest__GetBodyTypeDesc_x                              0x14025F0C0
#define CEverQuest__GetClassDesc_x                                 0x14025F120
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025F4F0
#define CEverQuest__GetDeityDesc_x                                 0x14025F7A0
#define CEverQuest__GetLangDesc_x                                  0x14025FBD0
#define CEverQuest__GetRaceDesc_x                                  0x14025FF70
#define CEverQuest__InterpretCmd_x                                 0x140261880
#define CEverQuest__LeftClickedOnPlayer_x                          0x140276920
#define CEverQuest__LMouseUp_x                                     0x140263230
#define CEverQuest__RightClickedOnPlayer_x                         0x140274170
#define CEverQuest__RMouseUp_x                                     0x14026D740
#define CEverQuest__SetGameState_x                                 0x140278E50
#define CEverQuest__UPCNotificationFlush_x                         0x14027E640 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140262EA0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026EAF0
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F950

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AB850

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0390
#define CGuild__GetGuildName_x                                     0x1400C03D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CDCA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299190
#define CHotButton__SetCheck_x                                     0x140299460

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E2E80
#define CInvSlotMgr__MoveItem_x                                    0x1403E3060
#define CInvSlotMgr__SelectSlot_x                                  0x1403E4A00

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E0070
#define CInvSlot__SliderComplete_x                                 0x1403E15C0
#define CInvSlot__GetItemBase_x                                    0x1403DBCB0
#define CInvSlot__UpdateItem_x                                     0x1403E1A80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E5D90

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140407160
#define CItemDisplayWnd__UpdateStrings_x                           0x140409B70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140403B90
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404053D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140406580

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CEE00
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D09E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14050A180

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404002D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401481E0

// CLabel
#define CLabel__UpdateText_x                                       0x140410F30

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057EE20
#define CListWnd__dCListWnd_x                                      0x14057F270
#define CListWnd__vftable_x                                        0x14085F448
#define CListWnd__AddColumn_x                                      0x14057F910
#define CListWnd__AddColumn1_x                                     0x14057F9B0
#define CListWnd__AddLine_x                                        0x14057FB10
#define CListWnd__AddString_x                                      0x1405800A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140580610
#define CListWnd__CalculateVSBRange_x                              0x1405808F0
#define CListWnd__ClearSel_x                                       0x140580AA0
#define CListWnd__ClearAllSel_x                                    0x140580A40
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140580B00
#define CListWnd__Compare_x                                        0x140580CC0
#define CListWnd__Draw_x                                           0x140581190
#define CListWnd__DrawColumnSeparators_x                           0x140581D40
#define CListWnd__DrawHeader_x                                     0x140581E00
#define CListWnd__DrawItem_x                                       0x1405824E0
#define CListWnd__DrawLine_x                                       0x140582E60
#define CListWnd__DrawSeparator_x                                  0x140583320
#define CListWnd__EnableLine_x                                     0x140583740
#define CListWnd__EnsureVisible_x                                  0x1405837A0
#define CListWnd__ExtendSel_x                                      0x1405838A0
#define CListWnd__GetColumnMinWidth_x                              0x140583BD0
#define CListWnd__GetColumnWidth_x                                 0x140583C50
#define CListWnd__GetCurSel_x                                      0x140583D50
#define CListWnd__GetItemData_x                                    0x1405840D0
#define CListWnd__GetItemHeight_x                                  0x140584110
#define CListWnd__GetItemRect_x                                    0x140584330
#define CListWnd__GetItemText_x                                    0x1405845D0
#define CListWnd__GetSelList_x                                     0x140584820
#define CListWnd__GetSeparatorRect_x                               0x140584A10
#define CListWnd__InsertLine_x                                     0x140585E90
#define CListWnd__RemoveLine_x                                     0x140586500
#define CListWnd__SetColors_x                                      0x1405868C0
#define CListWnd__SetColumnJustification_x                         0x1405868E0
#define CListWnd__SetColumnLabel_x                                 0x140586960
#define CListWnd__SetColumnWidth_x                                 0x140586B00
#define CListWnd__SetCurSel_x                                      0x140586BD0
#define CListWnd__SetItemColor_x                                   0x140586E40
#define CListWnd__SetItemData_x                                    0x140586EE0
#define CListWnd__SetItemText_x                                    0x140587120
#define CListWnd__Sort_x                                           0x140587530
#define CListWnd__ToggleSel_x                                      0x1405876A0
#define CListWnd__SetColumnsSizable_x                              0x140586B50
#define CListWnd__SetItemWnd_x                                     0x140587250
#define CListWnd__GetItemWnd_x                                     0x1405847B0
#define CListWnd__SetItemIcon_x                                    0x140586F20
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405803E0
#define CListWnd__SetVScrollPos_x                                  0x140587490

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140424230

// MapViewMap
#define MapViewMap__vftable_x                                      0x140839E70
#define MapViewMap__Clear_x                                        0x140425DB0
#define MapViewMap__SetZoom_x                                      0x14042C3F0
#define MapViewMap__HandleLButtonDown_x                            0x140428F30

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044DAE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404540C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140454860
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140458070
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404573C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045C320

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062BE10
#define CPacketScrambler__hton_x                                   0x14062BE00

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A7DF0
#define CSidlManagerBase__FindAnimation1_x                         0x1405A7D30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A8420
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A81D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A7130
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A70C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405A6700

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C20B0
#define CSidlManager__CreateXWnd_x                                 0x1404C2270

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056CAC0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056CBF0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B6FD0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056CD70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056C210
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056C2E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056C4F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056D410
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056D640
#define CSidlScreenWnd__GetChildItem_x                             0x14056D7E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056DA30
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140577A70 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056DDA0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056E110
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056E9C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056F2B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA8DC8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056F910
#define CSidlScreenWnd__StoreIniVis_x                              0x140570100
#define CSidlScreenWnd__vftable_x                                  0x14085E6E8
#define CSidlScreenWnd__WndNotification_x                          0x140570150

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140310400 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140310800 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140310740
#define CSkillMgr__IsActivatedSkill_x                              0x140310BA0
#define CSkillMgr__IsCombatSkill_x                                 0x140310BE0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140588020
#define CSliderWnd__SetValue_x                                     0x140588830
#define CSliderWnd__SetNumTicks_x                                  0x1405886B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C86C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058CFC0
#define CStmlWnd__CalculateHSBRange_x                              0x140577440
#define CStmlWnd__CalculateVSBRange_x                              0x14058DE70
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058E970
#define CStmlWnd__ForceParseNow_x                                  0x14058EA10
#define CStmlWnd__GetVisibleText_x                                 0x14058F0E0
#define CStmlWnd__MakeStmlColorTag_x                               0x140590E40
#define CStmlWnd__MakeWndNotificationTag_x                         0x140590E80
#define CStmlWnd__SetSTMLText_x                                    0x140597E50
#define CStmlWnd__StripFirstSTMLLines_x                            0x140598000
#define CStmlWnd__UpdateHistoryString_x                            0x140598390

// CTabWnd
#define CTabWnd__Draw_x                                            0x140588C00
#define CTabWnd__DrawCurrentPage_x                                 0x140588CA0
#define CTabWnd__DrawTab_x                                         0x140589070
#define CTabWnd__GetTabRect_x                                      0x1405896D0
#define CTabWnd__InsertPage_x                                      0x1405899A0
#define CTabWnd__RemovePage_x                                      0x140589C30
#define CTabWnd__SetPage_x                                         0x140589D90
#define CTabWnd__UpdatePage_x                                      0x14058A090

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B10D0
#define CPageWnd__SetTabText_x                                     0x1405B1140

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9AC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9ED0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059F7D0
#define CTextureFont__DrawWrappedText1_x                           0x14059F6E0
#define CTextureFont__DrawWrappedText2_x                           0x14059F900
#define CTextureFont__GetTextExtent_x                              0x14059FCB0
#define CTextureFont__GetHeight_x                                  0x14059FC70

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B5730

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14056BDF0

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD88D0
#define CXStr__gCXStrAccess_x                                      0x140CA8BC8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140572B50
#define CXWnd__ClrFocus_x                                          0x140572D90
#define CXWnd__Destroy_x                                           0x140572F10
#define CXWnd__DoAllDrawing_x                                      0x140573010
#define CXWnd__DrawColoredRect_x                                   0x1405737E0
#define CXWnd__DrawTooltip_x                                       0x140574E60
#define CXWnd__DrawTooltipAtPoint_x                                0x140574F10
#define CXWnd__GetChildItem_x                                      0x140575820
#define CXWnd__GetChildWndAt_x                                     0x1405758E0
#define CXWnd__GetClientRect_x                                     0x140575B80
#define CXWnd__GetClientClipRect_x                                 0x140575A50
#define CXWnd__GetRelativeRect_x                                   0x140577570
#define CXWnd__GetScreenClipRect_x                                 0x140577680
#define CXWnd__GetScreenRect_x                                     0x1405777F0
#define CXWnd__GetTooltipRect_x                                    0x140577970
#define CXWnd__IsActive_x                                          0x140577F30
#define CXWnd__IsDescendantOf_x                                    0x140577F60
#define CXWnd__IsReallyVisible_x                                   0x140577FD0
#define CXWnd__IsType_x                                            0x140578010
#define CXWnd__Minimize_x                                          0x140578110
#define CXWnd__ProcessTransition_x                                 0x140578FE0
#define CXWnd__Resize_x                                            0x1405790F0
#define CXWnd__Right_x                                             0x140579190
#define CXWnd__SetFocus_x                                          0x140579560
#define CXWnd__SetFont_x                                           0x1405795B0
#define CXWnd__SetKeyTooltip_x                                     0x1405796C0
#define CXWnd__SetMouseOver_x                                      0x140579800
#define CXWnd__SetParent_x                                         0x140579880
#define CXWnd__StartFade_x                                         0x140579CB0
#define CXWnd__vftable_x                                           0x14085ECC8
#define CXWnd__CXWnd_x                                             0x140571710
#define CXWnd__dCXWnd_x                                            0x140572030

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BC190

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140599C50
#define CXWndManager__DrawCursor_x                                 0x140599F30
#define CXWndManager__DrawWindows_x                                0x14059A190
#define CXWndManager__GetKeyboardFlags_x                           0x14059A850
#define CXWndManager__HandleKeyboardMsg_x                          0x14059A890
#define CXWndManager__RemoveWnd_x                                  0x14059DEA0

// CDBStr
#define CDBStr__GetString_x                                        0x14017D930

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140634F20

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDD60
#define CCharacterListWnd__EnterWorld_x                            0x1400CCA60
#define CCharacterListWnd__Quit_x                                  0x1400CDD40
#define CCharacterListWnd__UpdateList_x                            0x1400CEA50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140604630
#define ItemBase__CreateItemTagString_x                            0x1406050A0
#define ItemBase__GetImageNum_x                                    0x140607660
#define ItemBase__GetItemValue_x                                   0x140609100
#define ItemBase__IsEmpty_x                                        0x14060AD00
#define ItemBase__IsKeyRingItem_x                                  0x14060B430
#define ItemBase__ValueSellMerchant_x                              0x14060F5F0
#define ItemClient__CanDrop_x                                      0x14029B770
#define ItemClient__CanGoInBag_x                                   0x14029B8A0
#define ItemClient__CreateItemClient_x                             0x14029BB80
#define ItemClient__dItemClient_x                                  0x14029B5E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019CFB0
#define EQ_LoadingS__Array_x                                       0x140AC4CE0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061B560
#define PcBase__GetCombatAbility_x                                 0x14061BC00
#define PcBase__GetCombatAbilityTimer_x                            0x14061BCA0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061C3F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061CD80
#define PcClient__AlertInventoryChanged_x                          0x1402BDCD0
#define PcClient__GetConLevel_x                                    0x1402BE2B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C0980
#define PcClient__HasLoreItem_x                                    0x1402C1A80
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CEAA0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D1630

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AD50  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AF00  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B060  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020AFA0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140243660  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178110

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406784E0
#define PlayerBase__CanSee1_x                                      0x1406785B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140678A70
#define PlayerBase__HasProperty_x                                  0x140678C90
#define PlayerBase__IsTargetable_x                                 0x140678D50
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DD580
#define PlayerClient__GetPcClient_x                                0x1402DFDB0
#define PlayerClient__PlayerClient_x                               0x1402D68E0
#define PlayerClient__SetNameSpriteState_x                         0x1402E3260
#define PlayerClient__SetNameSpriteTint_x                          0x1402E4220
#define PlayerZoneClient__ChangeHeight_x                           0x1402F2C20
#define PlayerZoneClient__DoAttack_x                               0x1402F3930
#define PlayerZoneClient__GetLevel_x                               0x1402F70A0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402463F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BE70

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EC190  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EC240  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EC2F0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EBB90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140678150

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0BE0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A07E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0850
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0B70  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A0D00
#define KeypressHandler__HandleKeyUp_x                             0x1402A0E00
#define KeypressHandler__SaveKeymapping_x                          0x1402A0A80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140632AA0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062D540

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C7210  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CCAB0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CF1A0
#define PcZoneClient__RemovePetEffect_x                            0x1402D1730
#define PcZoneClient__HasAlternateAbility_x                        0x1402CFE80
#define PcZoneClient__CanEquipItem_x                               0x1402CADB0
#define PcZoneClient__GetItemByID_x                                0x1402CDB40
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D14B0
#define PcZoneClient__BandolierSwap_x                              0x1402C9D90
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CF0F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024AF20

// IconCache
#define IconCache__GetIcon_x                                       0x1403A14C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140396060
#define CContainerMgr__CloseContainer_x                            0x1403959A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403963E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140486F00

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293960

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140418220
#define CLootWnd__RequestLootSlot_x                                0x140419260

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CCA50
#define EQ_Spell__SpellAffects_x                                   0x1401CDD10
#define EQ_Spell__SpellAffectBase_x                                0x1401CDC70
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6930
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D68E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD930
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD4F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCDC0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BEFE0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E2C90  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E2CD0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E21D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E1790

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E9D30  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174990
#define CTaskManager__GetTaskStatus_x                              0x140174AA0
#define CTaskManager__GetElementDescription_x                      0x140174620

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CADC0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9C00
#define EqSoundManager__SoundAssistPlay_x                          0x140315860  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140315BA0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14057AA20
#define CTextureAnimation__SetCurCell_x                            0x14057AD30

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291BD0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064C610
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064C690
#define CharacterBase__IsExpansionFlag_x                           0x1401ED250

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140376010
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140376970
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140377EB0

// messages
#define msg_spell_worn_off_x                                       0x1402017D0
#define msg_new_text_x                                             0x1401FD090
#define __msgTokenTextParam_x                                      0x1401F4E30
#define msgTokenText_x                                             0x1401F4D50

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140317250
#define SpellManager__GetSpellByGroupAndRank_x                     0x140317170

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140687180

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140411680

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039D520
#define CCursorAttachment__AttachToCursor1_x                       0x14039AC10
#define CCursorAttachment__Deactivate_x                            0x14039DA90

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B3BD0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B3DC0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B3DD0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143480
#define CFindItemWnd__Update_x                                     0x140143E20
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D940

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CC80
#define LootFiltersManager__GetItemFilterData_x                    0x14014D790
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E030
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E2E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14046A260

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068B620
#define CResolutionHandler__GetWindowedStyle_x                     0x14030FF60

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403923E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406506B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406505A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B6ED0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B6AB0

// ItemBase
#define ItemBase__IsLore_x                                         0x14060B500
#define ItemBase__IsLoreEquipped_x                                 0x14060B590

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B42F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402437C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140243750
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243790

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030A530

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D8C0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DC70
#define FactionManagerClient__GetFactionStanding_x                 0x14011D090
#define FactionManagerClient__GetMaxFaction_x                      0x14011D090
#define FactionManagerClient__GetMinFaction_x                      0x14011CF40

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABCC0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128FF0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5910
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4C90
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5730  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A56B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031C380

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030A530

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B0F0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140570740

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400847B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032D6D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BCC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140635940
#define FreeToPlayClient__RestrictionInfo_x                        0x140870B00

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
