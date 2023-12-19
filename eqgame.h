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

#define __ClientDate                                               20231212u
#define __ExpectedVersionDate                                     "Dec 12 2023"
#define __ExpectedVersionTime                                     "11:47:56"
#define __ActualVersionDate_x                                      0x140826168
#define __ActualVersionTime_x                                      0x140826158
#define __ActualVersionBuild_x                                     0x14081AC00

// Memory Protection
#define __MemChecker0_x                                            0x1402A89D0
#define __MemChecker1_x                                            0x140562490
#define __MemChecker4_x                                            0x140277430
#define __EncryptPad0_x                                            0x140AD98D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C12420
#define instEQZoneInfo_x                                           0x140C12614 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F600
#define __gfMaxZoomCameraDistance_x                                0x14081BE70
#define __gfMaxCameraDistance_x                                    0x14085B4B0
#define __CurrentSocial_x                                          0x14099594C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AD11C0
#define g_eqCommandStates_x                                        0x140AD2230
#define __CommandList_x                                            0x140AD2460
#define __ScreenMode_x                                             0x140B59E2C
#define __gWorld_x                                                 0x140C0D350
#define __gpbCommandEvent_x                                        0x140C0CCE8
#define __ServerHost_x                                             0x140C0CF48
#define __Guilds_x                                                 0x140C10FD0
#define __MouseEventTime_x                                         0x140C87960
#define DI8__MouseState_x                                          0x140C8BA98
#define __heqmain_x                                                0x140C8DF30
#define DI8__Mouse_x                                               0x140C8DF88
#define __HWnd_x                                                   0x140C8EA38
#define __Mouse_x                                                  0x140C8DF48
#define DI8__Keyboard_x                                            0x140C8DF68
#define __LoginName_x                                              0x140C8E6CC
#define __CurrentMapLabel_x                                        0x140CA1CE0
#define __LabelCache_x                                             0x140CA28B0
#define Teleport_Table_Size_x                                      0x140C0CD84
#define Teleport_Table_x                                           0x140C0A8B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C0D360
#define pinstActiveBanker_x                                        0x140C0D288
#define pinstActiveCorpse_x                                        0x140C0D278
#define pinstActiveGMaster_x                                       0x140C0D280
#define pinstActiveMerchant_x                                      0x140C0D270
#define pinstAltAdvManager_x                                       0x140B5AB88
#define pinstCEverQuest_x                                          0x140C8DF80
#define pinstCamActor_x                                            0x140B59E18
#define pinstCDBStr_x                                              0x140B59980
#define pinstCDisplay_x                                            0x140C0C8D0
#define pinstControlledPlayer_x                                    0x140C0D318
#define pinstCResolutionHandler_x                                  0x141313068
#define pinstCSidlManager_x                                        0x140CB3BB0
#define pinstCXWndManager_x                                        0x140CB3BA8
#define instDynamicZone_x                                          0x140C10E90 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C10EDE
#define instExpeditionName_x                                       0x140C10F1E
#define pinstDZMember_x                                            0x140C10FA8
#define pinstDZTimerInfo_x                                         0x140C10FB0
#define pinstEqLogin_x                                             0x140C8E010
#define instTribute_x                                              0x140ACC840
#define pinstEQSoundManager_x                                      0x140B5AF08
#define pinstEQSpellStrings_x                                      0x140B3E590
#define pinstSGraphicsEngine_x                                     0x141312DE8
#define pinstLocalPC_x                                             0x140C0D358
#define pinstLocalPlayer_x                                         0x140C0D268
#define pinstCMercenaryClientManager_x                             0x140C89208
#define pinstModelPlayer_x                                         0x140C0D298
#define pinstRenderInterface_x                                     0x141312E00
#define pinstSkillMgr_x                                            0x140C8AEB0
#define pinstSpawnManager_x                                        0x140C895D0
#define pinstSpellManager_x                                        0x140C8AF18
#define pinstStringTable_x                                         0x140C0A8A0
#define pinstSwitchManager_x                                       0x140C0A820
#define pinstTarget_x                                              0x140C0D310
#define pinstTaskMember_x                                          0x140ACC830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C0D320
#define pinstTradeTarget_x                                         0x140C0D290
#define instTributeActive_x                                        0x140ACC869
#define pinstViewActor_x                                           0x140B59E10
#define pinstWorldData_x                                           0x140C0C8D8
#define pinstPlayerPath_x                                          0x140C895F8
#define pinstTargetIndicator_x                                     0x140C8AFC8
#define EQObject_Top_x                                             0x140C0D338

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C9EE40
#define pinstCContainerMgr_x                                       0x140B59A60
#define pinstCContextMenuManager_x                                 0x140CB3890
#define pinstCInvSlotMgr_x                                         0x140B59A50
#define pinstCItemDisplayManager_x                                 0x140CA18B0
#define pinstCPopupWndManager_x                                    0x140CA2140
#define pinstCSpellDisplayMgr_x                                    0x140CA2790
#define pinstCTaskManager_x                                        0x140995C80
#define pinstEQSuiteTextureLoader_x                                0x140AE2FC0
#define pinstItemIconCache_x                                       0x140C9F1A0
#define pinstLootFiltersManager_x                                  0x140B593C8
#define pinstGFViewListener_x                                      0x140CB3068


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140237C90
#define __CastRay_x                                                0x140230500
#define __CastRay2_x                                               0x140230200
#define __ConvertItemTags_x                                        0x140230960
#define __CleanItemTags_x                                          0x1400879D0
#define __CreateCascadeMenuItems_x                                 0x140180770
#define __DoesFileExist_x                                          0x140566340
#define __EQGetTime_x                                              0x140562A40
#define __ExecuteCmd_x                                             0x140206FA0
#define __FixHeading_x                                             0x14068D880
#define __FlushDxKeyboard_x                                        0x140329CC0
#define __get_bearing_x                                            0x140239E80
#define __get_melee_range_x                                        0x140239F80
#define __GetAnimationCache_x                                      0x1403A62B0
#define __GetGaugeValueFromEQ_x                                    0x1404D9820
#define __GetLabelFromEQ_x                                         0x1404DAE10
#define __GetXTargetType_x                                         0x14068EB60   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068D900
#define __HelpPath_x                                               0x140C87828   // Why?
#define __NewUIINI_x                                               0x1404E6370   // Why?
#define __ProcessGameEvents_x                                      0x14026C7F0
#define __ProcessKeyboardEvents_x                                  0x14032B520
#define __ProcessMouseEvents_x                                     0x14026DD20
#define __SaveColors_x                                             0x140190990
#define __STMLToText_x                                             0x140572510
#define __WndProc_x                                                0x140328420
#define CMemoryMappedFile__SetFile_x                               0x1407C4820
#define DrawNetStatus_x                                            0x1402B6E20
#define Util__FastTime_x                                           0x140561FD0
#define __eq_delete_x                                              0x140693B24
#define __eq_new_x                                                 0x140693AE0
#define __CopyLayout_x                                             0x1402A4E10
#define __ThrottleFrameRate_x                                      0x14025BF08
#define __ThrottleFrameRateEnd_x                                   0x14025BF68

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033A8A0
#define CAAWnd__Update_x                                           0x14033ABA0
#define CAAWnd__UpdateSelected_x                                   0x14033BBA0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9C20
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2510
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408018C8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA510

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BB00
#define AltAdvManager__IsAbilityReady_x                            0x14019BD80
#define AltAdvManager__GetAAById_x                                 0x14019B3D0
#define AltAdvManager__CanTrainAbility_x                           0x14019B200
#define AltAdvManager__CanSeeAbility_x                             0x14019AEC0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0490
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D12D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1520
#define CharacterZoneClient__CanUseItem_x                          0x1400E57B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1EF0
#define CharacterZoneClient__CastSpell_x                           0x1400D1F90
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E12E0
#define CharacterZoneClient__Cur_HP_x                              0x1400E6EB0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7070
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4D20
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED5D0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC200  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6180
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4C80
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF190
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE060
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6350
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6A90
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8460
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE7A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6B20
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF420
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D63D0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0200
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D65D0
#define CharacterZoneClient__GetModCap_x                           0x1400F79C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6660
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6870
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB5D0
#define CharacterZoneClient__HasSkill_x                            0x1400F31F0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7320
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAAD0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F74B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3800  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F77F0
#define CharacterZoneClient__Max_Mana_x                            0x1402D3A20  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7C50
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDE70
#define CharacterZoneClient__SpellDuration_x                       0x1400DEB70
#define CharacterZoneClient__TotalEffect_x                         0x1400DFEC0
#define CharacterZoneClient__UseSkill_x                            0x1400FD150


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140358EB0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140363200

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035F090
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035E120

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403658D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140869AB0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403886A0
#define CChatWindowManager__InitContextMenu_x                      0x140388830
#define CChatWindowManager__FreeChatWindow_x                       0x1403877A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038FB70
#define CChatWindowManager__CreateChatWindow_x                     0x1403870E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105300

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140390B70
#define CChatWindow__Clear_x                                       0x140391A10
#define CChatWindow__WndNotification_x                             0x140392C00
#define CChatWindow__AddHistory_x                                  0x140391510

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14059FB90
#define CContextMenu__RemoveMenuItem_x                             0x14059FF80
#define CContextMenu__RemoveAllMenuItems_x                         0x14059FF50
#define CContextMenu__CheckMenuItem_x                              0x14059FDC0
#define CContextMenu__SetMenuItem_x                                0x14059FFA0
#define CContextMenu__AddSeparator_x                               0x14059FD00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140591A50
#define CContextMenuManager__RemoveMenu_x                          0x140592030
#define CContextMenuManager__PopupMenu_x                           0x140591D70
#define CContextMenuManager__Flush_x                               0x140591AD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039E320

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406568A0
#define CChatService__GetFriendName_x                              0x1406568B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405829B0
#define CComboWnd__Draw_x                                          0x140582AB0
#define CComboWnd__GetCurChoice_x                                  0x140582D90  // unused
#define CComboWnd__GetListRect_x                                   0x140582E30
#define CComboWnd__InsertChoice_x                                  0x140583170
#define CComboWnd__SetColors_x                                     0x140583500
#define CComboWnd__SetChoice_x                                     0x1405834C0
#define CComboWnd__GetItemCount_x                                  0x140582E20
#define CComboWnd__GetCurChoiceText_x                              0x140582DD0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140582D60
#define CComboWnd__InsertChoiceAtIndex_x                           0x140583230

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039C0B0
#define CContainerWnd__SetContainer_x                              0x1403F0FE0
#define CContainerWnd__vftable_x                                   0x140835500

// CDisplay
#define CDisplay__cameraType_x                                     0x140B59BCC
#define CDisplay__ZoneMainUI_x                                     0x1405B9D50
#define CDisplay__PreZoneMainUI_x                                  0x14018D7A0
#define CDisplay__CleanGameUI_x                                    0x14017F860
#define CDisplay__GetClickedActor_x                                0x140183A00
#define CDisplay__GetUserDefinedColor_x                            0x140184670
#define CDisplay__InitCharSelectUI_x                               0x140184920
#define CDisplay__ReloadUI_x                                       0x14018FA80
#define CDisplay__WriteTextHD2_x                                   0x140196C30
#define CDisplay__TrueDistance_x                                   0x1401968E0
#define CDisplay__SetViewActor_x                                   0x140193100
#define CDisplay__GetFloorHeight_x                                 0x140183C60
#define CDisplay__ToggleScreenshotMode_x                           0x1401963D0
#define CDisplay__RealRender_World_x                               0x14018EE70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C3F00
#define CEditWnd__DrawCaret_x                                      0x1405B5A40  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B5F00
#define CEditWnd__GetCaretPt_x                                     0x1405B6180  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B61C0
#define CEditWnd__GetDisplayString_x                               0x1405B6430
#define CEditWnd__GetHorzOffset_x                                  0x1405B6670
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B67C0
#define CEditWnd__GetSelStartPt_x                                  0x1405B6AA0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B68F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405B7650
#define CEditWnd__ReplaceSelection_x                               0x1405B7A00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B7EA0
#define CEditWnd__SetEditable_x                                    0x1405B8130
#define CEditWnd__SetWindowText_x                                  0x1405B8160

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D010
#define CEverQuest__ClickedPlayer_x                                0x140252B40
#define CEverQuest__CreateTargetIndicator_x                        0x140253400
#define CEverQuest__DoTellWindow_x                                 0x140105010 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401058D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025EA40
#define CEverQuest__dsp_chat_x                                     0x140104A40 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140288D40
#define CEverQuest__Emote_x                                        0x14025F3F0
#define CEverQuest__GetBodyTypeDesc_x                              0x140260190
#define CEverQuest__GetClassDesc_x                                 0x1402601F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402605C0
#define CEverQuest__GetDeityDesc_x                                 0x140260870
#define CEverQuest__GetLangDesc_x                                  0x140260CA0
#define CEverQuest__GetRaceDesc_x                                  0x140261040
#define CEverQuest__InterpretCmd_x                                 0x140262970
#define CEverQuest__LeftClickedOnPlayer_x                          0x140277AB0
#define CEverQuest__LMouseUp_x                                     0x140264340
#define CEverQuest__RightClickedOnPlayer_x                         0x1402752D0
#define CEverQuest__RMouseUp_x                                     0x14026E8A0
#define CEverQuest__SetGameState_x                                 0x140279FF0
#define CEverQuest__UPCNotificationFlush_x                         0x14027F7F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263FB0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026FC50
#define CEverQuest__ReportSuccessfulHit_x                          0x140270AB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B0680

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C07B0
#define CGuild__GetGuildName_x                                     0x1400C07F0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D2B50

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029A910
#define CHotButton__SetCheck_x                                     0x14029ABE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E9D20
#define CInvSlotMgr__MoveItem_x                                    0x1403E9F00
#define CInvSlotMgr__SelectSlot_x                                  0x1403EB8B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E6F10
#define CInvSlot__SliderComplete_x                                 0x1403E8460
#define CInvSlot__GetItemBase_x                                    0x1403E2B30
#define CInvSlot__UpdateItem_x                                     0x1403E8920

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403ECC40

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040DE80
#define CItemDisplayWnd__UpdateStrings_x                           0x1404107E0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040A950
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040C0C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040D290

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D6320
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D7FD0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140510FC0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140407070

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401481B0

// CLabel
#define CLabel__UpdateText_x                                       0x140417BC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140586340
#define CListWnd__dCListWnd_x                                      0x140586790
#define CListWnd__vftable_x                                        0x140867C70
#define CListWnd__AddColumn_x                                      0x140586E30
#define CListWnd__AddColumn1_x                                     0x140586ED0
#define CListWnd__AddLine_x                                        0x140587030
#define CListWnd__AddString_x                                      0x1405875C0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140587B30
#define CListWnd__CalculateVSBRange_x                              0x140587E10
#define CListWnd__ClearSel_x                                       0x140587FC0
#define CListWnd__ClearAllSel_x                                    0x140587F60
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140588020
#define CListWnd__Compare_x                                        0x1405881E0
#define CListWnd__Draw_x                                           0x1405886B0
#define CListWnd__DrawColumnSeparators_x                           0x140589260
#define CListWnd__DrawHeader_x                                     0x140589320
#define CListWnd__DrawItem_x                                       0x140589A00
#define CListWnd__DrawLine_x                                       0x14058A380
#define CListWnd__DrawSeparator_x                                  0x14058A840
#define CListWnd__EnableLine_x                                     0x14058AC60
#define CListWnd__EnsureVisible_x                                  0x14058ACC0
#define CListWnd__ExtendSel_x                                      0x14058ADC0
#define CListWnd__GetColumnMinWidth_x                              0x14058B0F0
#define CListWnd__GetColumnWidth_x                                 0x14058B170
#define CListWnd__GetCurSel_x                                      0x14058B270
#define CListWnd__GetItemData_x                                    0x14058B5F0
#define CListWnd__GetItemHeight_x                                  0x14058B630
#define CListWnd__GetItemRect_x                                    0x14058B850
#define CListWnd__GetItemText_x                                    0x14058BAF0
#define CListWnd__GetSelList_x                                     0x14058BD40
#define CListWnd__GetSeparatorRect_x                               0x14058BF30
#define CListWnd__InsertLine_x                                     0x14058D3A0
#define CListWnd__RemoveLine_x                                     0x14058DA10
#define CListWnd__SetColors_x                                      0x14058DDD0
#define CListWnd__SetColumnJustification_x                         0x14058DDF0
#define CListWnd__SetColumnLabel_x                                 0x14058DE70
#define CListWnd__SetColumnWidth_x                                 0x14058E010
#define CListWnd__SetCurSel_x                                      0x14058E0E0
#define CListWnd__SetItemColor_x                                   0x14058E350
#define CListWnd__SetItemData_x                                    0x14058E3F0
#define CListWnd__SetItemText_x                                    0x14058E630
#define CListWnd__Sort_x                                           0x14058EA40
#define CListWnd__ToggleSel_x                                      0x14058EBB0
#define CListWnd__SetColumnsSizable_x                              0x14058E060
#define CListWnd__SetItemWnd_x                                     0x14058E760
#define CListWnd__GetItemWnd_x                                     0x14058BCD0
#define CListWnd__SetItemIcon_x                                    0x14058E430
#define CListWnd__CalculateCustomWindowPositions_x                 0x140587900
#define CListWnd__SetVScrollPos_x                                  0x14058E9A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042AED0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1408421C0
#define MapViewMap__Clear_x                                        0x14042CA50
#define MapViewMap__SetZoom_x                                      0x140433090
#define MapViewMap__HandleLButtonDown_x                            0x14042FBD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140454770  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045AD70
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045B520
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14045ED30
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045E080
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140462FE0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406334F0
#define CPacketScrambler__hton_x                                   0x1406334E0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405AF320
#define CSidlManagerBase__FindAnimation1_x                         0x1405AF260
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405AF950
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405AF700
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405AE660
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405AE5F0
#define CSidlManagerBase__CreateXWnd_x                             0x1405ADC30

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C9350
#define CSidlManager__CreateXWnd_x                                 0x1404C9510

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140574110
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140573FE0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405BE4C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140574290
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140573730
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140573800
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140573A10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140574930
#define CSidlScreenWnd__EnableIniStorage_x                         0x140574B60
#define CSidlScreenWnd__GetChildItem_x                             0x140574D00
#define CSidlScreenWnd__GetSidlPiece_x                             0x140574F50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14057EF70 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405752C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140575630
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140575EF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405767E0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB2F08
#define CSidlScreenWnd__StoreIniInfo_x                             0x140576E30
#define CSidlScreenWnd__StoreIniVis_x                              0x140577620
#define CSidlScreenWnd__vftable_x                                  0x140866F10
#define CSidlScreenWnd__WndNotification_x                          0x140577670

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403132D0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140313770 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403136A0
#define CSkillMgr__IsActivatedSkill_x                              0x140313B20
#define CSkillMgr__IsCombatSkill_x                                 0x140313B60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404E4720
#define CSliderWnd__SetValue_x                                     0x14058FD20
#define CSliderWnd__SetNumTicks_x                                  0x14058FBA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404CF990

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405944B0
#define CStmlWnd__CalculateHSBRange_x                              0x14057E920
#define CStmlWnd__CalculateVSBRange_x                              0x140595350
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140595E50
#define CStmlWnd__ForceParseNow_x                                  0x140595EF0
#define CStmlWnd__GetVisibleText_x                                 0x1405965C0
#define CStmlWnd__MakeStmlColorTag_x                               0x140598320
#define CStmlWnd__MakeWndNotificationTag_x                         0x140598360
#define CStmlWnd__SetSTMLText_x                                    0x14059F330
#define CStmlWnd__StripFirstSTMLLines_x                            0x14059F4E0
#define CStmlWnd__UpdateHistoryString_x                            0x14059F870

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405900F0
#define CTabWnd__DrawCurrentPage_x                                 0x140590190
#define CTabWnd__DrawTab_x                                         0x140590560
#define CTabWnd__GetTabRect_x                                      0x140590BC0
#define CTabWnd__InsertPage_x                                      0x140590E90
#define CTabWnd__RemovePage_x                                      0x140591120
#define CTabWnd__SetPage_x                                         0x140591280
#define CTabWnd__UpdatePage_x                                      0x140591580

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B85C0
#define CPageWnd__SetTabText_x                                     0x1405B8630

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9EE0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA2F0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A6CE0
#define CTextureFont__DrawWrappedText1_x                           0x1405A6BF0
#define CTextureFont__DrawWrappedText2_x                           0x1405A6E10
#define CTextureFont__GetTextExtent_x                              0x1405A71C0
#define CTextureFont__GetHeight_x                                  0x1405A7180

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BCC20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140570C00

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE2930
#define CXStr__gCXStrAccess_x                                      0x140CB2D08

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057A080
#define CXWnd__ClrFocus_x                                          0x14057A2C0
#define CXWnd__Destroy_x                                           0x14057A440
#define CXWnd__DoAllDrawing_x                                      0x14057A550
#define CXWnd__DrawColoredRect_x                                   0x14057AD10
#define CXWnd__DrawTooltip_x                                       0x14057C370
#define CXWnd__DrawTooltipAtPoint_x                                0x14057C420
#define CXWnd__GetChildItem_x                                      0x14057CD20
#define CXWnd__GetChildWndAt_x                                     0x14057CDE0
#define CXWnd__GetClientRect_x                                     0x14057D0A0
#define CXWnd__GetClientClipRect_x                                 0x14057CF50
#define CXWnd__GetRelativeRect_x                                   0x14057EA60
#define CXWnd__GetScreenClipRect_x                                 0x14057EB70
#define CXWnd__GetScreenRect_x                                     0x14057ECF0
#define CXWnd__GetTooltipRect_x                                    0x14057EE70
#define CXWnd__IsActive_x                                          0x14057F430
#define CXWnd__IsDescendantOf_x                                    0x14057F460
#define CXWnd__IsReallyVisible_x                                   0x14057F4D0
#define CXWnd__IsType_x                                            0x14057F510
#define CXWnd__Minimize_x                                          0x14057F610
#define CXWnd__ProcessTransition_x                                 0x1405804C0
#define CXWnd__Resize_x                                            0x1405805E0
#define CXWnd__Right_x                                             0x140580680
#define CXWnd__SetFocus_x                                          0x140580A40
#define CXWnd__SetFont_x                                           0x140580A90
#define CXWnd__SetKeyTooltip_x                                     0x140580BA0
#define CXWnd__SetMouseOver_x                                      0x140580CE0
#define CXWnd__SetParent_x                                         0x140580D60
#define CXWnd__StartFade_x                                         0x1405811B0
#define CXWnd__vftable_x                                           0x1408674F0
#define CXWnd__CXWnd_x                                             0x140578C20
#define CXWnd__dCXWnd_x                                            0x140579580

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C3680

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A1150
#define CXWndManager__DrawCursor_x                                 0x1405A1430
#define CXWndManager__DrawWindows_x                                0x1405A1690
#define CXWndManager__GetKeyboardFlags_x                           0x1405A1D50
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A1D90
#define CXWndManager__RemoveWnd_x                                  0x1405A53A0

// CDBStr
#define CDBStr__GetString_x                                        0x14017D9D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063C610

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE1F0
#define CCharacterListWnd__EnterWorld_x                            0x1400CCEF0
#define CCharacterListWnd__Quit_x                                  0x1400CE1D0
#define CCharacterListWnd__UpdateList_x                            0x1400CEEE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060B970
#define ItemBase__CreateItemTagString_x                            0x14060C3D0
#define ItemBase__GetImageNum_x                                    0x14060E930
#define ItemBase__GetItemValue_x                                   0x140610470
#define ItemBase__IsEmpty_x                                        0x140611FF0
#define ItemBase__IsKeyRingItem_x                                  0x140612710
#define ItemBase__ValueSellMerchant_x                              0x140616890
#define ItemClient__CanDrop_x                                      0x14029CF00
#define ItemClient__CanGoInBag_x                                   0x14029D030
#define ItemClient__CreateItemClient_x                             0x14029D310
#define ItemClient__dItemClient_x                                  0x14029CD70

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D2A0
#define EQ_LoadingS__Array_x                                       0x140ACECD0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140622970
#define PcBase__GetCombatAbility_x                                 0x140623010
#define PcBase__GetCombatAbilityTimer_x                            0x1406230B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140623800
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406242C0
#define PcClient__AlertInventoryChanged_x                          0x1402BF2C0
#define PcClient__GetConLevel_x                                    0x1402BF8E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C1FD0
#define PcClient__HasLoreItem_x                                    0x1402C2FA0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D0830
#define PcZoneClient__RemoveMyAffect_x                             0x1402D48D0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B620  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B7D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B930  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B870  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244460  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401781D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406802C0
#define PlayerBase__CanSee1_x                                      0x140680390
#define PlayerBase__GetVisibilityLineSegment_x                     0x140680850
#define PlayerBase__HasProperty_x                                  0x140680A80
#define PlayerBase__IsTargetable_x                                 0x140680B40
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E13B0
#define PlayerClient__GetPcClient_x                                0x1402E3BE0
#define PlayerClient__PlayerClient_x                               0x1402DA680
#define PlayerClient__SetNameSpriteState_x                         0x1402E70B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8070
#define PlayerZoneClient__ChangeHeight_x                           0x1402F5DC0
#define PlayerZoneClient__DoAttack_x                               0x1402F6AD0
#define PlayerZoneClient__GetLevel_x                               0x1402FA210
#define PlayerZoneClient__IsValidTeleport_x                        0x1402471F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C020

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EFE40  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EFEF0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EFFF0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EF910
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14067FE80

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2330
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A1F30
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A1FA0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A22C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2450
#define KeypressHandler__HandleKeyUp_x                             0x1402A2550
#define KeypressHandler__SaveKeymapping_x                          0x1402A21D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063A180  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140634C20

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9510  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CE830
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D0F30
#define PcZoneClient__RemovePetEffect_x                            0x1402D49D0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D1C20
#define PcZoneClient__CanEquipItem_x                               0x1402CCB50
#define PcZoneClient__GetItemByID_x                                0x1402CF8D0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4750
#define PcZoneClient__BandolierSwap_x                              0x1402CBB30
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402D0E80

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024BD20

// IconCache
#define IconCache__GetIcon_x                                       0x1403A62E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039AE60
#define CContainerMgr__CloseContainer_x                            0x14039A7A0
#define CContainerMgr__OpenExperimentContainer_x                   0x14039B1E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048E0F0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402950D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14041EEB0
#define CLootWnd__RequestLootSlot_x                                0x14041FEF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC610
#define EQ_Spell__SpellAffects_x                                   0x1401CD8D0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD830
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6A40
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D69F0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD4F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD0B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC980

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF3F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404E9AA0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E91B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E89E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F0B20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174A50
#define CTaskManager__GetTaskStatus_x                              0x140174B60
#define CTaskManager__GetElementDescription_x                      0x1401746E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA980
#define EqSoundManager__PlayScriptMp3_x                            0x1401C97C0
#define EqSoundManager__SoundAssistPlay_x                          0x140318920  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140318C60  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140581F40
#define CTextureAnimation__SetCurCell_x                            0x140582250

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293330

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140654270
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406542F0
#define CharacterBase__IsExpansionFlag_x                           0x1401ED810

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140379B30
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037A4A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037B9F0

// messages
#define msg_spell_worn_off_x                                       0x140202020
#define msg_new_text_x                                             0x1401FD860
#define __msgTokenTextParam_x                                      0x1401F54D0
#define msgTokenText_x                                             0x1401F53F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031A310
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031A230

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14068EF40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140418310

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039F9F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A2960
#define CCursorAttachment__RemoveAttachment_x                      0x1403A2C10
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BB0C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BB2B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BB2C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143430
#define CFindItemWnd__Update_x                                     0x140143DD0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D8E0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CC60
#define LootFiltersManager__GetItemFilterData_x                    0x14014D770
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E010
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E2C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140470F30

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406933F0
#define CResolutionHandler__GetWindowedStyle_x                     0x140312E30

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140397190

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140658360  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140658250  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BBD00
#define CGroupWnd__UpdateDisplay_x                                 0x1403BB8E0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406127E0
#define ItemBase__IsLoreEquipped_x                                 0x140612870

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B5030

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402445C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244550
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244590

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030D520

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D7A0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DB50
#define FactionManagerClient__GetFactionStanding_x                 0x14011CF70
#define FactionManagerClient__GetMaxFaction_x                      0x14011CF70
#define FactionManagerClient__GetMinFaction_x                      0x14011CE20

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC0C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128F30

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5C00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4F80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5A20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A59A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031F430

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030D520

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B9C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140577C60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084B90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140330780

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C0A0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063D190
#define FreeToPlayClient__RestrictionInfo_x                        0x1408794E0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
