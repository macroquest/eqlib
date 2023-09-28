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

#define __ClientDate                                               20230926u
#define __ExpectedVersionDate                                     "Sep 26 2023"
#define __ExpectedVersionTime                                     "10:31:57"
#define __ActualVersionDate_x                                      0x14081E038
#define __ActualVersionTime_x                                      0x14081E028
#define __ActualVersionBuild_x                                     0x140812AE0

// Memory Protection
#define __MemChecker0_x                                            0x1402A72A0
#define __MemChecker1_x                                            0x14055B250
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
#define __DoesFileExist_x                                          0x14055F110
#define __EQGetTime_x                                              0x14055B800
#define __ExecuteCmd_x                                             0x1402066E0
#define __FixHeading_x                                             0x1406859D0
#define __FlushDxKeyboard_x                                        0x140326C10
#define __get_bearing_x                                            0x140239090
#define __get_melee_range_x                                        0x140239190
#define __GetAnimationCache_x                                      0x1403A1780
#define __GetGaugeValueFromEQ_x                                    0x1404D25F0
#define __GetLabelFromEQ_x                                         0x1404D3BE0
#define __GetXTargetType_x                                         0x140686CF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140685A50
#define __HelpPath_x                                               0x140C7D7C0   // Why?
#define __NewUIINI_x                                               0x1404DF100   // Why?
#define __ProcessGameEvents_x                                      0x14026B6B0
#define __ProcessKeyboardEvents_x                                  0x140328470
#define __ProcessMouseEvents_x                                     0x14026CBB0
#define __SaveColors_x                                             0x1401907C0
#define __STMLToText_x                                             0x140563A50
#define __WndProc_x                                                0x140325370
#define CMemoryMappedFile__SetFile_x                               0x1407BCA10
#define DrawNetStatus_x                                            0x1402B60C0
#define Util__FastTime_x                                           0x14055AD90
#define __eq_delete_x                                              0x1406AFB70
#define __eq_new_x                                                 0x1406AFB2C
#define __CopyLayout_x                                             0x1402A36C0
#define __ThrottleFrameRate_x                                      0x14025AF5D
#define __ThrottleFrameRateEnd_x                                   0x14025AFBD

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140337AD0
#define CAAWnd__Update_x                                           0x140337DD0
#define CAAWnd__UpdateSelected_x                                   0x140338DD0

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
#define CBankWnd__WndNotification_x                                0x140356040

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140360380

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035C210
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035B2A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140362A40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140861280

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140383FA0
#define CChatWindowManager__InitContextMenu_x                      0x140384130
#define CChatWindowManager__FreeChatWindow_x                       0x1403831C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038B120
#define CChatWindowManager__CreateChatWindow_x                     0x140382B00

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105440

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038C110
#define CChatWindow__Clear_x                                       0x14038CF90
#define CChatWindow__WndNotification_x                             0x14038E180
#define CChatWindow__AddHistory_x                                  0x14038CA90

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140598990
#define CContextMenu__RemoveMenuItem_x                             0x140598D80
#define CContextMenu__RemoveAllMenuItems_x                         0x140598D50
#define CContextMenu__CheckMenuItem_x                              0x140598BC0
#define CContextMenu__SetMenuItem_x                                0x140598DA0
#define CContextMenu__AddSeparator_x                               0x140598B00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14058A850
#define CContextMenuManager__RemoveMenu_x                          0x14058AE30
#define CContextMenuManager__PopupMenu_x                           0x14058AB70
#define CContextMenuManager__Flush_x                               0x14058A8D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140399820

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064EEE0
#define CChatService__GetFriendName_x                              0x14064EEF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057B780
#define CComboWnd__Draw_x                                          0x14057B880
#define CComboWnd__GetCurChoice_x                                  0x14057BB60  // unused
#define CComboWnd__GetListRect_x                                   0x14057BC00
#define CComboWnd__InsertChoice_x                                  0x14057BF40
#define CComboWnd__SetColors_x                                     0x14057C2D0
#define CComboWnd__SetChoice_x                                     0x14057C290
#define CComboWnd__GetItemCount_x                                  0x14057BBF0
#define CComboWnd__GetCurChoiceText_x                              0x14057BBA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057BB30
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057C000

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403975A0
#define CContainerWnd__SetContainer_x                              0x1403EA5B0
#define CContainerWnd__vftable_x                                   0x14082D318

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4FA8C
#define CDisplay__ZoneMainUI_x                                     0x1405B2B50
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
#define CEditBaseWnd__SetSel_x                                     0x1405BCD00
#define CEditWnd__DrawCaret_x                                      0x1405AE850  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AED00
#define CEditWnd__GetCaretPt_x                                     0x1405AEF80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AEFC0
#define CEditWnd__GetDisplayString_x                               0x1405AF230
#define CEditWnd__GetHorzOffset_x                                  0x1405AF470
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AF5C0
#define CEditWnd__GetSelStartPt_x                                  0x1405AF8A0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AF6F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405B0450
#define CEditWnd__ReplaceSelection_x                               0x1405B0800
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B0CA0
#define CEditWnd__SetEditable_x                                    0x1405B0F30
#define CEditWnd__SetWindowText_x                                  0x1405B0F60

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
#define CGaugeWnd__Draw_x                                          0x1403ABB40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0390
#define CGuild__GetGuildName_x                                     0x1400C03D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CDF90

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299190
#define CHotButton__SetCheck_x                                     0x140299460

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E3170
#define CInvSlotMgr__MoveItem_x                                    0x1403E3350
#define CInvSlotMgr__SelectSlot_x                                  0x1403E4CF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E0360
#define CInvSlot__SliderComplete_x                                 0x1403E18B0
#define CInvSlot__GetItemBase_x                                    0x1403DBFA0
#define CInvSlot__UpdateItem_x                                     0x1403E1D70

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E6080

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140407450
#define CItemDisplayWnd__UpdateStrings_x                           0x140409E60
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140403E80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404056C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140406870

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CF0F0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D0CD0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14050A470

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404005C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401481E0

// CLabel
#define CLabel__UpdateText_x                                       0x140411220

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057F110
#define CListWnd__dCListWnd_x                                      0x14057F560
#define CListWnd__vftable_x                                        0x14085F448
#define CListWnd__AddColumn_x                                      0x14057FC00
#define CListWnd__AddColumn1_x                                     0x14057FCA0
#define CListWnd__AddLine_x                                        0x14057FE00
#define CListWnd__AddString_x                                      0x140580390
#define CListWnd__CalculateFirstVisibleLine_x                      0x140580900
#define CListWnd__CalculateVSBRange_x                              0x140580BE0
#define CListWnd__ClearSel_x                                       0x140580D90
#define CListWnd__ClearAllSel_x                                    0x140580D30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140580DF0
#define CListWnd__Compare_x                                        0x140580FB0
#define CListWnd__Draw_x                                           0x140581480
#define CListWnd__DrawColumnSeparators_x                           0x140582030
#define CListWnd__DrawHeader_x                                     0x1405820F0
#define CListWnd__DrawItem_x                                       0x1405827D0
#define CListWnd__DrawLine_x                                       0x140583150
#define CListWnd__DrawSeparator_x                                  0x140583610
#define CListWnd__EnableLine_x                                     0x140583A30
#define CListWnd__EnsureVisible_x                                  0x140583A90
#define CListWnd__ExtendSel_x                                      0x140583B90
#define CListWnd__GetColumnMinWidth_x                              0x140583EC0
#define CListWnd__GetColumnWidth_x                                 0x140583F40
#define CListWnd__GetCurSel_x                                      0x140584040
#define CListWnd__GetItemData_x                                    0x1405843C0
#define CListWnd__GetItemHeight_x                                  0x140584400
#define CListWnd__GetItemRect_x                                    0x140584620
#define CListWnd__GetItemText_x                                    0x1405848C0
#define CListWnd__GetSelList_x                                     0x140584B10
#define CListWnd__GetSeparatorRect_x                               0x140584D00
#define CListWnd__InsertLine_x                                     0x140586180
#define CListWnd__RemoveLine_x                                     0x1405867F0
#define CListWnd__SetColors_x                                      0x140586BB0
#define CListWnd__SetColumnJustification_x                         0x140586BD0
#define CListWnd__SetColumnLabel_x                                 0x140586C50
#define CListWnd__SetColumnWidth_x                                 0x140586DF0
#define CListWnd__SetCurSel_x                                      0x140586EC0
#define CListWnd__SetItemColor_x                                   0x140587130
#define CListWnd__SetItemData_x                                    0x1405871D0
#define CListWnd__SetItemText_x                                    0x140587410
#define CListWnd__Sort_x                                           0x140587820
#define CListWnd__ToggleSel_x                                      0x140587990
#define CListWnd__SetColumnsSizable_x                              0x140586E40
#define CListWnd__SetItemWnd_x                                     0x140587540
#define CListWnd__GetItemWnd_x                                     0x140584AA0
#define CListWnd__SetItemIcon_x                                    0x140587210
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405806D0
#define CListWnd__SetVScrollPos_x                                  0x140587780

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140424520

// MapViewMap
#define MapViewMap__vftable_x                                      0x140839E70
#define MapViewMap__Clear_x                                        0x1404260A0
#define MapViewMap__SetZoom_x                                      0x14042C6E0
#define MapViewMap__HandleLButtonDown_x                            0x140429220

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044DDD0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404543B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140454B50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140458360
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404576B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045C610

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062C100
#define CPacketScrambler__hton_x                                   0x14062C0F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A80E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405A8020
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A8710
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A84C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A7420
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A73B0
#define CSidlManagerBase__CreateXWnd_x                             0x1405A69F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C23A0
#define CSidlManager__CreateXWnd_x                                 0x1404C2560

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056CDB0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056CEE0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B72C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056D060
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056C500
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056C5D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056C7E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056D700
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056D930
#define CSidlScreenWnd__GetChildItem_x                             0x14056DAD0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056DD20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140577D60 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056E090
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056E400
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056ECB0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056F5A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA8DC8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056FC00
#define CSidlScreenWnd__StoreIniVis_x                              0x1405703F0
#define CSidlScreenWnd__vftable_x                                  0x14085E6E8
#define CSidlScreenWnd__WndNotification_x                          0x140570440

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140310400 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140310800 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140310740
#define CSkillMgr__IsActivatedSkill_x                              0x140310BA0
#define CSkillMgr__IsCombatSkill_x                                 0x140310BE0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140588310
#define CSliderWnd__SetValue_x                                     0x140588B20
#define CSliderWnd__SetNumTicks_x                                  0x1405889A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C89B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058D2B0
#define CStmlWnd__CalculateHSBRange_x                              0x140577730
#define CStmlWnd__CalculateVSBRange_x                              0x14058E160
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058EC60
#define CStmlWnd__ForceParseNow_x                                  0x14058ED00
#define CStmlWnd__GetVisibleText_x                                 0x14058F3D0
#define CStmlWnd__MakeStmlColorTag_x                               0x140591130
#define CStmlWnd__MakeWndNotificationTag_x                         0x140591170
#define CStmlWnd__SetSTMLText_x                                    0x140598140
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405982F0
#define CStmlWnd__UpdateHistoryString_x                            0x140598680

// CTabWnd
#define CTabWnd__Draw_x                                            0x140588EF0
#define CTabWnd__DrawCurrentPage_x                                 0x140588F90
#define CTabWnd__DrawTab_x                                         0x140589360
#define CTabWnd__GetTabRect_x                                      0x1405899C0
#define CTabWnd__InsertPage_x                                      0x140589C90
#define CTabWnd__RemovePage_x                                      0x140589F20
#define CTabWnd__SetPage_x                                         0x14058A080
#define CTabWnd__UpdatePage_x                                      0x14058A380

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B13C0
#define CPageWnd__SetTabText_x                                     0x1405B1430

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9AC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9ED0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059FAC0
#define CTextureFont__DrawWrappedText1_x                           0x14059F9D0
#define CTextureFont__DrawWrappedText2_x                           0x14059FBF0
#define CTextureFont__GetTextExtent_x                              0x14059FFA0
#define CTextureFont__GetHeight_x                                  0x14059FF60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B5A20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14056C0E0

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD88D0
#define CXStr__gCXStrAccess_x                                      0x140CA8BC8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140572E40
#define CXWnd__ClrFocus_x                                          0x140573080
#define CXWnd__Destroy_x                                           0x140573200
#define CXWnd__DoAllDrawing_x                                      0x140573300
#define CXWnd__DrawColoredRect_x                                   0x140573AD0
#define CXWnd__DrawTooltip_x                                       0x140575150
#define CXWnd__DrawTooltipAtPoint_x                                0x140575200
#define CXWnd__GetChildItem_x                                      0x140575B10
#define CXWnd__GetChildWndAt_x                                     0x140575BD0
#define CXWnd__GetClientRect_x                                     0x140575E70
#define CXWnd__GetClientClipRect_x                                 0x140575D40
#define CXWnd__GetRelativeRect_x                                   0x140577860
#define CXWnd__GetScreenClipRect_x                                 0x140577970
#define CXWnd__GetScreenRect_x                                     0x140577AE0
#define CXWnd__GetTooltipRect_x                                    0x140577C60
#define CXWnd__IsActive_x                                          0x140578220
#define CXWnd__IsDescendantOf_x                                    0x140578250
#define CXWnd__IsReallyVisible_x                                   0x1405782C0
#define CXWnd__IsType_x                                            0x140578300
#define CXWnd__Minimize_x                                          0x140578400
#define CXWnd__ProcessTransition_x                                 0x1405792D0
#define CXWnd__Resize_x                                            0x1405793E0
#define CXWnd__Right_x                                             0x140579480
#define CXWnd__SetFocus_x                                          0x140579850
#define CXWnd__SetFont_x                                           0x1405798A0
#define CXWnd__SetKeyTooltip_x                                     0x1405799B0
#define CXWnd__SetMouseOver_x                                      0x140579AF0
#define CXWnd__SetParent_x                                         0x140579B70
#define CXWnd__StartFade_x                                         0x140579FA0
#define CXWnd__vftable_x                                           0x14085ECC8
#define CXWnd__CXWnd_x                                             0x140571A00
#define CXWnd__dCXWnd_x                                            0x140572320

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BC480

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140599F40
#define CXWndManager__DrawCursor_x                                 0x14059A220
#define CXWndManager__DrawWindows_x                                0x14059A480
#define CXWndManager__GetKeyboardFlags_x                           0x14059AB40
#define CXWndManager__HandleKeyboardMsg_x                          0x14059AB80
#define CXWndManager__RemoveWnd_x                                  0x14059E190

// CDBStr
#define CDBStr__GetString_x                                        0x14017D930

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140635210

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDD60
#define CCharacterListWnd__EnterWorld_x                            0x1400CCA60
#define CCharacterListWnd__Quit_x                                  0x1400CDD40
#define CCharacterListWnd__UpdateList_x                            0x1400CEA50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140604920
#define ItemBase__CreateItemTagString_x                            0x140605390
#define ItemBase__GetImageNum_x                                    0x140607950
#define ItemBase__GetItemValue_x                                   0x1406093F0
#define ItemBase__IsEmpty_x                                        0x14060AFF0
#define ItemBase__IsKeyRingItem_x                                  0x14060B720
#define ItemBase__ValueSellMerchant_x                              0x14060F8E0
#define ItemClient__CanDrop_x                                      0x14029B770
#define ItemClient__CanGoInBag_x                                   0x14029B8A0
#define ItemClient__CreateItemClient_x                             0x14029BB80
#define ItemClient__dItemClient_x                                  0x14029B5E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019CFB0
#define EQ_LoadingS__Array_x                                       0x140AC4CE0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061B850
#define PcBase__GetCombatAbility_x                                 0x14061BEF0
#define PcBase__GetCombatAbilityTimer_x                            0x14061BF90
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061C6E0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061D070
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
#define PlayerBase__CanSee_x                                       0x1406787D0
#define PlayerBase__CanSee1_x                                      0x1406788A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140678D60
#define PlayerBase__HasProperty_x                                  0x140678F80
#define PlayerBase__IsTargetable_x                                 0x140679040
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
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140678440

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0BE0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A07E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0850
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0B70  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A0D00
#define KeypressHandler__HandleKeyUp_x                             0x1402A0E00
#define KeypressHandler__SaveKeymapping_x                          0x1402A0A80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140632D90  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062D830

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
#define IconCache__GetIcon_x                                       0x1403A17B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140396350
#define CContainerMgr__CloseContainer_x                            0x140395C90
#define CContainerMgr__OpenExperimentContainer_x                   0x1403966D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404871F0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293960

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140418510
#define CLootWnd__RequestLootSlot_x                                0x140419550

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
#define CTargetWnd__GetBuffCaster_x                                0x1404E2F80  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E2FC0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E24C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E1A80

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404EA020  // CTaskWnd::UpdateTimes

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
#define CTextureAnimation__Draw_x                                  0x14057AD10
#define CTextureAnimation__SetCurCell_x                            0x14057B020

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291BD0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064C900
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064C980
#define CharacterBase__IsExpansionFlag_x                           0x1401ED250

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140376300
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140376C60
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403781A0

// messages
#define msg_spell_worn_off_x                                       0x1402017D0
#define msg_new_text_x                                             0x1401FD090
#define __msgTokenTextParam_x                                      0x1401F4E30
#define msgTokenText_x                                             0x1401F4D50

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140317250
#define SpellManager__GetSpellByGroupAndRank_x                     0x140317170

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406870D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140411970

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039D810
#define CCursorAttachment__AttachToCursor1_x                       0x14039AF00
#define CCursorAttachment__Deactivate_x                            0x14039DD80

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B3EC0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B40B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B40C0

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
#define COptionsWnd__FillChatFilterList_x                          0x14046A550

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068B570
#define CResolutionHandler__GetWindowedStyle_x                     0x14030FF60

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403926D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406509A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140650890  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B71C0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B6DA0

// ItemBase
#define ItemBase__IsLore_x                                         0x14060B7F0
#define ItemBase__IsLoreEquipped_x                                 0x14060B880

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
#define KeyCombo__GetTextDescription_x                             0x140570A30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400847B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032D9C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BCC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140635C30
#define FreeToPlayClient__RestrictionInfo_x                        0x140870B00

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
