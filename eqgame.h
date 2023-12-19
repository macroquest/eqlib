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

#define __ClientDate                                               20231213u
#define __ExpectedVersionDate                                     "Dec 13 2023"
#define __ExpectedVersionTime                                     "12:19:46"
#define __ActualVersionDate_x                                      0x140827178
#define __ActualVersionTime_x                                      0x140827168
#define __ActualVersionBuild_x                                     0x14081BC10

// Memory Protection
#define __MemChecker0_x                                            0x1402A7F00
#define __MemChecker1_x                                            0x140562640
#define __MemChecker4_x                                            0x1402769B0
#define __EncryptPad0_x                                            0x140ADA8E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C13430
#define instEQZoneInfo_x                                           0x140C13624 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020EB80
#define __gfMaxZoomCameraDistance_x                                0x14081CE80
#define __gfMaxCameraDistance_x                                    0x14085C520
#define __CurrentSocial_x                                          0x140996940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AD21D0
#define g_eqCommandStates_x                                        0x140AD3240
#define __CommandList_x                                            0x140AD3470
#define __ScreenMode_x                                             0x140B5AED4
#define __gWorld_x                                                 0x140C0E348
#define __gpbCommandEvent_x                                        0x140C0DD84
#define __ServerHost_x                                             0x140C0DF68
#define __Guilds_x                                                 0x140C11FE0
#define __MouseEventTime_x                                         0x140C88970
#define DI8__MouseState_x                                          0x140C8CAA8
#define __heqmain_x                                                0x140C8EF40
#define DI8__Mouse_x                                               0x140C8EF58
#define __HWnd_x                                                   0x140C8EF60
#define __Mouse_x                                                  0x140C8EF68
#define DI8__Keyboard_x                                            0x140C8EF88
#define __LoginName_x                                              0x140C8F65C
#define __CurrentMapLabel_x                                        0x140CA2CF0
#define __LabelCache_x                                             0x140CA38C0
#define Teleport_Table_Size_x                                      0x140C0DE10
#define Teleport_Table_x                                           0x140C0B8D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C0E370
#define pinstActiveBanker_x                                        0x140C0E2A0
#define pinstActiveCorpse_x                                        0x140C0E290
#define pinstActiveGMaster_x                                       0x140C0E298
#define pinstActiveMerchant_x                                      0x140C0E288
#define pinstAltAdvManager_x                                       0x140B5BB98
#define pinstCEverQuest_x                                          0x140C8F9C8
#define pinstCamActor_x                                            0x140B5AEC0
#define pinstCDBStr_x                                              0x140B5A990
#define pinstCDisplay_x                                            0x140C0D8F0
#define pinstControlledPlayer_x                                    0x140C0E330
#define pinstCResolutionHandler_x                                  0x141314078
#define pinstCSidlManager_x                                        0x140CB4BC0
#define pinstCXWndManager_x                                        0x140CB4BB8
#define instDynamicZone_x                                          0x140C11EA0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C11EEE
#define instExpeditionName_x                                       0x140C11F2E
#define pinstDZMember_x                                            0x140C11FB8
#define pinstDZTimerInfo_x                                         0x140C11FC0
#define pinstEqLogin_x                                             0x140C8EFA0
#define instTribute_x                                              0x140ACD840
#define pinstEQSoundManager_x                                      0x140B5BF18
#define pinstEQSpellStrings_x                                      0x140B3F5A0
#define pinstSGraphicsEngine_x                                     0x141313DF8
#define pinstLocalPC_x                                             0x140C0B8B0
#define pinstLocalPlayer_x                                         0x140C0E280
#define pinstCMercenaryClientManager_x                             0x140C8A228
#define pinstModelPlayer_x                                         0x140C0E2B0
#define pinstRenderInterface_x                                     0x141313E10
#define pinstSkillMgr_x                                            0x140C8BEC0
#define pinstSpawnManager_x                                        0x140C8A5E0
#define pinstSpellManager_x                                        0x140C8BF28
#define pinstStringTable_x                                         0x140C0B8B8
#define pinstSwitchManager_x                                       0x140C0B830
#define pinstTarget_x                                              0x140C0E328
#define pinstTaskMember_x                                          0x140ACD830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C0E338
#define pinstTradeTarget_x                                         0x140C0E2A8
#define instTributeActive_x                                        0x140ACD869
#define pinstViewActor_x                                           0x140B5AEB8
#define pinstWorldData_x                                           0x140C0B8C0
#define pinstPlayerPath_x                                          0x140C8A608
#define pinstTargetIndicator_x                                     0x140C8BFD8
#define EQObject_Top_x                                             0x140C0E358

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C9FE50
#define pinstCContainerMgr_x                                       0x140B5AB28
#define pinstCContextMenuManager_x                                 0x140CB48A0
#define pinstCInvSlotMgr_x                                         0x140B5AB20
#define pinstCItemDisplayManager_x                                 0x140CA28C0
#define pinstCPopupWndManager_x                                    0x140CA3150
#define pinstCSpellDisplayMgr_x                                    0x140CA37A0
#define pinstCTaskManager_x                                        0x140996C80
#define pinstEQSuiteTextureLoader_x                                0x140AE3FD0
#define pinstItemIconCache_x                                       0x140CA01B0
#define pinstLootFiltersManager_x                                  0x140B5A3D8
#define pinstGFViewListener_x                                      0x140CB4078


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140237210
#define __CastRay_x                                                0x14022FA80
#define __CastRay2_x                                               0x14022F780
#define __ConvertItemTags_x                                        0x14022FEE0
#define __CleanItemTags_x                                          0x1400879F0
#define __CreateCascadeMenuItems_x                                 0x140180700
#define __DoesFileExist_x                                          0x1405664F0
#define __EQGetTime_x                                              0x140562BF0
#define __ExecuteCmd_x                                             0x140206520
#define __FixHeading_x                                             0x14068DB00
#define __FlushDxKeyboard_x                                        0x140329F30
#define __get_bearing_x                                            0x140239400
#define __get_melee_range_x                                        0x140239500
#define __GetAnimationCache_x                                      0x1403A6540
#define __GetGaugeValueFromEQ_x                                    0x1404D99F0
#define __GetLabelFromEQ_x                                         0x1404DAFF0
#define __GetXTargetType_x                                         0x14068EDE0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068DB80
#define __HelpPath_x                                               0x140C88838   // Why?
#define __NewUIINI_x                                               0x1404E6540   // Why?
#define __ProcessGameEvents_x                                      0x14026BD70
#define __ProcessKeyboardEvents_x                                  0x14032B790
#define __ProcessMouseEvents_x                                     0x14026D2A0
#define __SaveColors_x                                             0x140190890
#define __STMLToText_x                                             0x14056AE30
#define __WndProc_x                                                0x140328680
#define CMemoryMappedFile__SetFile_x                               0x1407C5AC0
#define DrawNetStatus_x                                            0x1402B6370
#define Util__FastTime_x                                           0x140562180
#define __eq_delete_x                                              0x140694F94
#define __eq_new_x                                                 0x140694F50
#define __CopyLayout_x                                             0x1402A4330
#define __ThrottleFrameRate_x                                      0x14025B495
#define __ThrottleFrameRateEnd_x                                   0x14025B4F5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033AC10
#define CAAWnd__Update_x                                           0x14033AF10
#define CAAWnd__UpdateSelected_x                                   0x14033BF10

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9C50
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2540
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140802928
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA540

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BA00
#define AltAdvManager__IsAbilityReady_x                            0x14019BC80
#define AltAdvManager__GetAAById_x                                 0x14019B2D0
#define AltAdvManager__CanTrainAbility_x                           0x14019B100
#define AltAdvManager__CanSeeAbility_x                             0x14019ADC0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D04B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D12F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1540
#define CharacterZoneClient__CanUseItem_x                          0x1400E57E0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1F10
#define CharacterZoneClient__CastSpell_x                           0x1400D1FB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1310
#define CharacterZoneClient__Cur_HP_x                              0x1400E6EE0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E70A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4D40
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED600
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC230  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D61A0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4CB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF1C0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE090
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6370
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6AC0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8490
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE7D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6B50
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF450
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D63F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0230
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D65F0
#define CharacterZoneClient__GetModCap_x                           0x1400F79F0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6680
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6890
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB600
#define CharacterZoneClient__HasSkill_x                            0x1400F3220
#define CharacterZoneClient__HitBySpell_x                          0x1400D7340
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAAF0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F74E0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D2E30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7820
#define CharacterZoneClient__Max_Mana_x                            0x1402D3050  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7C80
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDEA0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEBA0
#define CharacterZoneClient__TotalEffect_x                         0x1400DFEF0
#define CharacterZoneClient__UseSkill_x                            0x1400FD180


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403591F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140363550

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035F3D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035E460

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140365C10

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14086A6C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140388930
#define CChatWindowManager__InitContextMenu_x                      0x140388AC0
#define CChatWindowManager__FreeChatWindow_x                       0x140387A30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038FE00
#define CChatWindowManager__CreateChatWindow_x                     0x140387370

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105310

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140390E00
#define CChatWindow__Clear_x                                       0x140391CA0
#define CChatWindow__WndNotification_x                             0x140392E90
#define CChatWindow__AddHistory_x                                  0x1403917A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14059FE00
#define CContextMenu__RemoveMenuItem_x                             0x1405A01F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A01C0
#define CContextMenu__CheckMenuItem_x                              0x1405A0030
#define CContextMenu__SetMenuItem_x                                0x1405A0210
#define CContextMenu__AddSeparator_x                               0x14059FF70

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140591CE0
#define CContextMenuManager__RemoveMenu_x                          0x1405922C0
#define CContextMenuManager__PopupMenu_x                           0x140592000
#define CContextMenuManager__Flush_x                               0x140591D60
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039E5A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140656B80
#define CChatService__GetFriendName_x                              0x140656B90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140582A70
#define CComboWnd__Draw_x                                          0x140582B70
#define CComboWnd__GetCurChoice_x                                  0x140582E50  // unused
#define CComboWnd__GetListRect_x                                   0x140582EF0
#define CComboWnd__InsertChoice_x                                  0x140583230
#define CComboWnd__SetColors_x                                     0x1405835C0
#define CComboWnd__SetChoice_x                                     0x140583580
#define CComboWnd__GetItemCount_x                                  0x140582EE0
#define CComboWnd__GetCurChoiceText_x                              0x140582E90  // unused
#define CComboWnd__GetChoiceText_x                                 0x140582E20
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405832F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039C320
#define CContainerWnd__SetContainer_x                              0x1403F1280
#define CContainerWnd__vftable_x                                   0x140836570

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5AC5C
#define CDisplay__ZoneMainUI_x                                     0x1405B9E40
#define CDisplay__PreZoneMainUI_x                                  0x14018D6A0
#define CDisplay__CleanGameUI_x                                    0x14017F7F0
#define CDisplay__GetClickedActor_x                                0x140183990
#define CDisplay__GetUserDefinedColor_x                            0x140184600
#define CDisplay__InitCharSelectUI_x                               0x1401848B0
#define CDisplay__ReloadUI_x                                       0x14018F980
#define CDisplay__WriteTextHD2_x                                   0x140196B30
#define CDisplay__TrueDistance_x                                   0x1401967E0
#define CDisplay__SetViewActor_x                                   0x140193000
#define CDisplay__GetFloorHeight_x                                 0x140183BF0
#define CDisplay__ToggleScreenshotMode_x                           0x1401962D0
#define CDisplay__RealRender_World_x                               0x14018ED70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C3FF0
#define CEditWnd__DrawCaret_x                                      0x1405B5B50  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B6010
#define CEditWnd__GetCaretPt_x                                     0x1405B6290  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B62D0
#define CEditWnd__GetDisplayString_x                               0x1405B6540
#define CEditWnd__GetHorzOffset_x                                  0x1405B6780
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B68D0
#define CEditWnd__GetSelStartPt_x                                  0x1405B6BB0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B6A00
#define CEditWnd__PointFromPrintableChar_x                         0x1405B7760
#define CEditWnd__ReplaceSelection_x                               0x1405B7B10
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B7FB0
#define CEditWnd__SetEditable_x                                    0x1405B8240
#define CEditWnd__SetWindowText_x                                  0x1405B8270

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025C590
#define CEverQuest__ClickedPlayer_x                                0x1402520A0
#define CEverQuest__CreateTargetIndicator_x                        0x140252960
#define CEverQuest__DoTellWindow_x                                 0x140105020 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401058E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025DFC0
#define CEverQuest__dsp_chat_x                                     0x140104A50 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402882C0
#define CEverQuest__Emote_x                                        0x14025E970
#define CEverQuest__GetBodyTypeDesc_x                              0x14025F710
#define CEverQuest__GetClassDesc_x                                 0x14025F770
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025FB40
#define CEverQuest__GetDeityDesc_x                                 0x14025FDF0
#define CEverQuest__GetLangDesc_x                                  0x140260220
#define CEverQuest__GetRaceDesc_x                                  0x1402605C0
#define CEverQuest__InterpretCmd_x                                 0x140261EF0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140277030
#define CEverQuest__LMouseUp_x                                     0x1402638C0
#define CEverQuest__RightClickedOnPlayer_x                         0x140274850
#define CEverQuest__RMouseUp_x                                     0x14026DE20
#define CEverQuest__SetGameState_x                                 0x140279570
#define CEverQuest__UPCNotificationFlush_x                         0x14027ED70 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263530
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026F1D0
#define CEverQuest__ReportSuccessfulHit_x                          0x140270030

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B0900

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C07D0
#define CGuild__GetGuildName_x                                     0x1400C0810

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D2E50

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299E70
#define CHotButton__SetCheck_x                                     0x14029A140

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E9FC0
#define CInvSlotMgr__MoveItem_x                                    0x1403EA1A0
#define CInvSlotMgr__SelectSlot_x                                  0x1403EBB50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E71B0
#define CInvSlot__SliderComplete_x                                 0x1403E8700
#define CInvSlot__GetItemBase_x                                    0x1403E2DF0
#define CInvSlot__UpdateItem_x                                     0x1403E8BC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403ECEE0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040E100
#define CItemDisplayWnd__UpdateStrings_x                           0x140410A70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040ABE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040C350
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040D520

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D6510
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D81C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140511180

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140407310

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148170

// CLabel
#define CLabel__UpdateText_x                                       0x140417E80

// CListWnd
#define CListWnd__CListWnd_x                                       0x140586400
#define CListWnd__dCListWnd_x                                      0x140586850
#define CListWnd__vftable_x                                        0x140868888
#define CListWnd__AddColumn_x                                      0x140586EF0
#define CListWnd__AddColumn1_x                                     0x140586F90
#define CListWnd__AddLine_x                                        0x1405870F0
#define CListWnd__AddString_x                                      0x140587680
#define CListWnd__CalculateFirstVisibleLine_x                      0x140587BF0
#define CListWnd__CalculateVSBRange_x                              0x140587ED0
#define CListWnd__ClearSel_x                                       0x140588080
#define CListWnd__ClearAllSel_x                                    0x140588020
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405880E0
#define CListWnd__Compare_x                                        0x1405882A0
#define CListWnd__Draw_x                                           0x140588770
#define CListWnd__DrawColumnSeparators_x                           0x140589320
#define CListWnd__DrawHeader_x                                     0x1405893E0
#define CListWnd__DrawItem_x                                       0x140589AC0
#define CListWnd__DrawLine_x                                       0x14058A440
#define CListWnd__DrawSeparator_x                                  0x14058A900
#define CListWnd__EnableLine_x                                     0x14058AD20
#define CListWnd__EnsureVisible_x                                  0x14058AD80
#define CListWnd__ExtendSel_x                                      0x14058AE80
#define CListWnd__GetColumnMinWidth_x                              0x14058B1B0
#define CListWnd__GetColumnWidth_x                                 0x14058B230
#define CListWnd__GetCurSel_x                                      0x14058B330
#define CListWnd__GetItemData_x                                    0x14058B6B0
#define CListWnd__GetItemHeight_x                                  0x14058B6F0
#define CListWnd__GetItemRect_x                                    0x14058B910
#define CListWnd__GetItemText_x                                    0x14058BBB0
#define CListWnd__GetSelList_x                                     0x14058BE00
#define CListWnd__GetSeparatorRect_x                               0x14058BFF0
#define CListWnd__InsertLine_x                                     0x14058D460
#define CListWnd__RemoveLine_x                                     0x14058DAD0
#define CListWnd__SetColors_x                                      0x14058DE90
#define CListWnd__SetColumnJustification_x                         0x14058DEB0
#define CListWnd__SetColumnLabel_x                                 0x14058DF30
#define CListWnd__SetColumnWidth_x                                 0x14058E0D0
#define CListWnd__SetCurSel_x                                      0x14058E1A0
#define CListWnd__SetItemColor_x                                   0x14058E410
#define CListWnd__SetItemData_x                                    0x14058E4B0
#define CListWnd__SetItemText_x                                    0x14058E6F0
#define CListWnd__Sort_x                                           0x14058EB00
#define CListWnd__ToggleSel_x                                      0x14058EC70
#define CListWnd__SetColumnsSizable_x                              0x14058E120
#define CListWnd__SetItemWnd_x                                     0x14058E820
#define CListWnd__GetItemWnd_x                                     0x14058BD90
#define CListWnd__SetItemIcon_x                                    0x14058E4F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405879C0
#define CListWnd__SetVScrollPos_x                                  0x14058EA60

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042B160

// MapViewMap
#define MapViewMap__vftable_x                                      0x140843230
#define MapViewMap__Clear_x                                        0x14042CCD0
#define MapViewMap__SetZoom_x                                      0x140433320
#define MapViewMap__HandleLButtonDown_x                            0x14042FE60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404549E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045AFE0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045B790
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14045EFB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045E300
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140463260

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406337D0
#define CPacketScrambler__hton_x                                   0x1406337C0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405AF430
#define CSidlManagerBase__FindAnimation1_x                         0x1405AF370
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405AFA60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405AF810
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405AE770
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405AE700
#define CSidlManagerBase__CreateXWnd_x                             0x1405ADD70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C9550
#define CSidlManager__CreateXWnd_x                                 0x1404C9710

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405742B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140574190
#define CSidlScreenWnd__ConvertToRes_x                             0x1405BE5B0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140574430
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405738E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405739B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140573BC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140574AD0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140574D00
#define CSidlScreenWnd__GetChildItem_x                             0x140574EA0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405750F0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14057F070 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140575460
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405757D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140576090
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140576980
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB3F18
#define CSidlScreenWnd__StoreIniInfo_x                             0x140576FC0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405777B0
#define CSidlScreenWnd__vftable_x                                  0x140867B28
#define CSidlScreenWnd__WndNotification_x                          0x140577800

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140313540 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403139E0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140313910
#define CSkillMgr__IsActivatedSkill_x                              0x140313D90
#define CSkillMgr__IsCombatSkill_x                                 0x140313DD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DAF00
#define CSliderWnd__SetValue_x                                     0x14058FDE0
#define CSliderWnd__SetNumTicks_x                                  0x14058FC60

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404CFB80

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140594740
#define CStmlWnd__CalculateHSBRange_x                              0x14057EA70
#define CStmlWnd__CalculateVSBRange_x                              0x1405955E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405960D0
#define CStmlWnd__ForceParseNow_x                                  0x140596170
#define CStmlWnd__GetVisibleText_x                                 0x140596840
#define CStmlWnd__MakeStmlColorTag_x                               0x1405985A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405985E0
#define CStmlWnd__SetSTMLText_x                                    0x14059F5B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x14059F760
#define CStmlWnd__UpdateHistoryString_x                            0x14059FAF0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140590390
#define CTabWnd__DrawCurrentPage_x                                 0x140590430
#define CTabWnd__DrawTab_x                                         0x140590800
#define CTabWnd__GetTabRect_x                                      0x140590E70
#define CTabWnd__InsertPage_x                                      0x140591140
#define CTabWnd__RemovePage_x                                      0x1405913C0
#define CTabWnd__SetPage_x                                         0x140591520
#define CTabWnd__UpdatePage_x                                      0x140591820

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B86C0
#define CPageWnd__SetTabText_x                                     0x1405B8730

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9F10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA320


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A6E40
#define CTextureFont__DrawWrappedText1_x                           0x1405A6D50
#define CTextureFont__DrawWrappedText2_x                           0x1405A6F70
#define CTextureFont__GetTextExtent_x                              0x1405A7320
#define CTextureFont__GetHeight_x                                  0x1405A72E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BCD10

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405734C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE3940
#define CXStr__gCXStrAccess_x                                      0x140CB3D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057A210
#define CXWnd__ClrFocus_x                                          0x14057A450
#define CXWnd__Destroy_x                                           0x14057A5D0
#define CXWnd__DoAllDrawing_x                                      0x14057A6D0
#define CXWnd__DrawColoredRect_x                                   0x14057AE80
#define CXWnd__DrawTooltip_x                                       0x14057C4E0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057C590
#define CXWnd__GetChildItem_x                                      0x14057CE90
#define CXWnd__GetChildWndAt_x                                     0x14057CF50
#define CXWnd__GetClientRect_x                                     0x14057D1F0
#define CXWnd__GetClientClipRect_x                                 0x14057D0B0
#define CXWnd__GetRelativeRect_x                                   0x14057EBA0
#define CXWnd__GetScreenClipRect_x                                 0x14057ECA0
#define CXWnd__GetScreenRect_x                                     0x14057EE10
#define CXWnd__GetTooltipRect_x                                    0x14057EF80
#define CXWnd__IsActive_x                                          0x14057F530
#define CXWnd__IsDescendantOf_x                                    0x14057F560
#define CXWnd__IsReallyVisible_x                                   0x14057F5D0
#define CXWnd__IsType_x                                            0x14057F610
#define CXWnd__Minimize_x                                          0x14057F710
#define CXWnd__ProcessTransition_x                                 0x1405805B0
#define CXWnd__Resize_x                                            0x1405806D0
#define CXWnd__Right_x                                             0x140580770
#define CXWnd__SetFocus_x                                          0x140580B30
#define CXWnd__SetFont_x                                           0x140580B80
#define CXWnd__SetKeyTooltip_x                                     0x140580C90
#define CXWnd__SetMouseOver_x                                      0x140580DC0
#define CXWnd__SetParent_x                                         0x140580E30
#define CXWnd__StartFade_x                                         0x140581260
#define CXWnd__vftable_x                                           0x140868108
#define CXWnd__CXWnd_x                                             0x140578DC0
#define CXWnd__dCXWnd_x                                            0x140579710

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C3770

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A13C0
#define CXWndManager__DrawCursor_x                                 0x1405A16A0
#define CXWndManager__DrawWindows_x                                0x1405A1900
#define CXWndManager__GetKeyboardFlags_x                           0x1405A1FD0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A2010
#define CXWndManager__RemoveWnd_x                                  0x1405A5500

// CDBStr
#define CDBStr__GetString_x                                        0x14017D960

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063C8F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE210
#define CCharacterListWnd__EnterWorld_x                            0x1400CCF10
#define CCharacterListWnd__Quit_x                                  0x1400CE1F0
#define CCharacterListWnd__UpdateList_x                            0x1400CEF00

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060BB70
#define ItemBase__CreateItemTagString_x                            0x14060C5E0
#define ItemBase__GetImageNum_x                                    0x14060EBB0
#define ItemBase__GetItemValue_x                                   0x140610670
#define ItemBase__IsEmpty_x                                        0x140612270
#define ItemBase__IsKeyRingItem_x                                  0x1406129A0
#define ItemBase__ValueSellMerchant_x                              0x140616BA0
#define ItemClient__CanDrop_x                                      0x14029C430
#define ItemClient__CanGoInBag_x                                   0x14029C560
#define ItemClient__CreateItemClient_x                             0x14029C840
#define ItemClient__dItemClient_x                                  0x14029C2A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D1A0
#define EQ_LoadingS__Array_x                                       0x140ACFCE0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140622C50
#define PcBase__GetCombatAbility_x                                 0x1406232F0
#define PcBase__GetCombatAbilityTimer_x                            0x140623390
#define PcBase__GetItemContainedRealEstateIds_x                    0x140623AE0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406245A0
#define PcClient__AlertInventoryChanged_x                          0x1402BE940
#define PcClient__GetConLevel_x                                    0x1402BEF60  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C1650
#define PcClient__HasLoreItem_x                                    0x1402C2610
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CFE70
#define PcZoneClient__RemoveMyAffect_x                             0x1402D3F00

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020ABA0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AD50  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020AEB0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020ADF0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402439C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178160

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140680590
#define PlayerBase__CanSee1_x                                      0x140680660
#define PlayerBase__GetVisibilityLineSegment_x                     0x140680B20
#define PlayerBase__HasProperty_x                                  0x140680D50
#define PlayerBase__IsTargetable_x                                 0x140680E10
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E09E0
#define PlayerClient__GetPcClient_x                                0x1402E3210
#define PlayerClient__PlayerClient_x                               0x1402D9CA0
#define PlayerClient__SetNameSpriteState_x                         0x1402E66D0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E7690
#define PlayerZoneClient__ChangeHeight_x                           0x1402F5C40
#define PlayerZoneClient__DoAttack_x                               0x1402F6950
#define PlayerZoneClient__GetLevel_x                               0x1402FA090
#define PlayerZoneClient__IsValidTeleport_x                        0x140246750
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BF20

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EF560  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EF610  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EF710
#define PlayerManagerClient__CreatePlayer_x                        0x1402EF030
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140680150

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A1850
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A1450
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A14C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A17E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A1970
#define KeypressHandler__HandleKeyUp_x                             0x1402A1A70
#define KeypressHandler__SaveKeymapping_x                          0x1402A16F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063A460  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140634F00

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C8B60  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CDE80
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D0570
#define PcZoneClient__RemovePetEffect_x                            0x1402D4000
#define PcZoneClient__HasAlternateAbility_x                        0x1402D1250
#define PcZoneClient__CanEquipItem_x                               0x1402CC1A0
#define PcZoneClient__GetItemByID_x                                0x1402CEF10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D3D80
#define PcZoneClient__BandolierSwap_x                              0x1402CB180
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402D04C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024B280

// IconCache
#define IconCache__GetIcon_x                                       0x1403A6570

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039B0D0
#define CContainerMgr__CloseContainer_x                            0x14039AA10
#define CContainerMgr__OpenExperimentContainer_x                   0x14039B450

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048E310

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140294650

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14041F160
#define CLootWnd__RequestLootSlot_x                                0x140420190

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC420
#define EQ_Spell__SpellAffects_x                                   0x1401CD6E0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD640
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6A60
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6A10
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD300
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CCEC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC790

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF410

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404E9C60
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E9370
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E8BA0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F0CE0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174A10
#define CTaskManager__GetTaskStatus_x                              0x140174B20
#define CTaskManager__GetElementDescription_x                      0x1401746A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA790
#define EqSoundManager__PlayScriptMp3_x                            0x1401C95D0
#define EqSoundManager__SoundAssistPlay_x                          0x140318B90  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140318ED0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140582000
#define CTextureAnimation__SetCurCell_x                            0x140582310

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402928B0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140654550
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406545D0
#define CharacterBase__IsExpansionFlag_x                           0x1401ECD90

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140379E00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037A770
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037BCC0

// messages
#define msg_spell_worn_off_x                                       0x1402015A0
#define msg_new_text_x                                             0x1401FCDE0
#define __msgTokenTextParam_x                                      0x1401F4A50
#define msgTokenText_x                                             0x1401F4970

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031A580
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031A4A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14068F1C0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404185D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039FC80
#define CCursorAttachment__IsOkToActivate_x                        0x1403A2BF0
#define CCursorAttachment__RemoveAttachment_x                      0x1403A2EA0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BB1B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BB3A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BB3B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143400
#define CFindItemWnd__Update_x                                     0x140143DA0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D8C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CC20
#define LootFiltersManager__GetItemFilterData_x                    0x14014D730
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014DFD0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E280

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140471190

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140694770
#define CResolutionHandler__GetWindowedStyle_x                     0x1403130A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140397410

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140658640  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140658530  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BC000
#define CGroupWnd__UpdateDisplay_x                                 0x1403BBBE0

// ItemBase
#define ItemBase__IsLore_x                                         0x140612A70
#define ItemBase__IsLoreEquipped_x                                 0x140612B00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4580

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140243B20
#define EQPlacedItemManager__GetItemByGuid_x                       0x140243AB0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243AF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030D640

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D7B0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DB60
#define FactionManagerClient__GetFactionStanding_x                 0x14011CF80
#define FactionManagerClient__GetMaxFaction_x                      0x14011CF80
#define FactionManagerClient__GetMinFaction_x                      0x14011CE30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC0F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128F40

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5B00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4E80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5920  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A58A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031F690

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030D640

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020AF40

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140577DF0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084BB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140330B10

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C0C0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063D470
#define FreeToPlayClient__RestrictionInfo_x                        0x14087A0F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
