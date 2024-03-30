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

#define __ClientDate                                               20240327u
#define __ExpectedVersionDate                                     "Mar 27 2024"
#define __ExpectedVersionTime                                     "17:17:15"
#define __ActualVersionDate_x                                      0x140935730
#define __ActualVersionTime_x                                      0x140935720
#define __ActualVersionBuild_x                                     0x1408CC2C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A9550
#define __MemChecker1_x                                            0x140564D60
#define __MemChecker4_x                                            0x140277F30
#define __EncryptPad0_x                                            0x140D02E20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9E0
#define instEQZoneInfo_x                                           0x140E3BBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F600
#define __gfMaxZoomCameraDistance_x                                0x1408CD530
#define __gfMaxCameraDistance_x                                    0x140A736A0
#define __CurrentSocial_x                                          0x140BBE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140CFA710
#define g_eqCommandStates_x                                        0x140CFB780
#define __CommandList_x                                            0x140CFB9B0
#define __ScreenMode_x                                             0x140D83534
#define __gWorld_x                                                 0x140E33F30
#define __gpbCommandEvent_x                                        0x140E36424
#define __ServerHost_x                                             0x140E36608
#define __Guilds_x                                                 0x140E3A590
#define __MouseEventTime_x                                         0x140EB0F48
#define DI8__MouseState_x                                          0x140EB5100
#define __heqmain_x                                                0x140EB7598
#define DI8__Mouse_x                                               0x140EB75B0
#define __HWnd_x                                                   0x140EB75B8
#define __Mouse_x                                                  0x140EB75C0
#define DI8__Keyboard_x                                            0x140EB75E0
#define __LoginName_x                                              0x140EB7CBC
#define __CurrentMapLabel_x                                        0x140ECB4D0
#define __LabelCache_x                                             0x140ECC0A0
#define __ChatFilterDefs_x                                         0x140A0CF90
#define Teleport_Table_Size_x                                      0x140E364B0
#define Teleport_Table_x                                           0x140E33F60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E36920
#define pinstActiveBanker_x                                        0x140E33E80
#define pinstActiveCorpse_x                                        0x140E33E70
#define pinstActiveGMaster_x                                       0x140E33E78
#define pinstActiveMerchant_x                                      0x140E33E68
#define pinstAltAdvManager_x                                       0x140D84148
#define pinstCEverQuest_x                                          0x140EB5050
#define pinstCamActor_x                                            0x140D83520
#define pinstCDBStr_x                                              0x140D82F00
#define pinstCDisplay_x                                            0x140E35F70
#define pinstControlledPlayer_x                                    0x140E33F10
#define pinstCResolutionHandler_x                                  0x14153C858
#define pinstCSidlManager_x                                        0x140EDD3A0
#define pinstCXWndManager_x                                        0x140EDD398
#define instDynamicZone_x                                          0x140E3A450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E3A49E
#define instExpeditionName_x                                       0x140E3A4DE
#define pinstDZMember_x                                            0x140E3A568
#define pinstDZTimerInfo_x                                         0x140E3A570
#define pinstEqLogin_x                                             0x140EB7600
#define instTribute_x                                              0x140CF5D50
#define pinstEQSoundManager_x                                      0x140D844C8
#define pinstEQSpellStrings_x                                      0x140D67B10
#define pinstSGraphicsEngine_x                                     0x14153C5D8
#define pinstLocalPC_x                                             0x140E33F50
#define pinstLocalPlayer_x                                         0x140E33E60
#define pinstCMercenaryClientManager_x                             0x140EB27E8
#define pinstModelPlayer_x                                         0x140E33E90
#define pinstRenderInterface_x                                     0x14153C5F0
#define pinstSkillMgr_x                                            0x140EB4490
#define pinstSpawnManager_x                                        0x140EB2BB0
#define pinstSpellManager_x                                        0x140EB44F8
#define pinstStringTable_x                                         0x140E33F58
#define pinstSwitchManager_x                                       0x140E33DE0
#define pinstTarget_x                                              0x140E33F08
#define pinstTaskMember_x                                          0x140CF5D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E33F18
#define pinstTradeTarget_x                                         0x140E33E88
#define instTributeActive_x                                        0x140CF5D79
#define pinstViewActor_x                                           0x140D83518
#define pinstWorldData_x                                           0x140E35F60
#define pinstPlayerPath_x                                          0x140EB2BD8
#define pinstTargetIndicator_x                                     0x140EB45A8
#define EQObject_Top_x                                             0x140E33F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EC8628
#define pinstCContainerMgr_x                                       0x140D83198
#define pinstCContextMenuManager_x                                 0x140EDD080
#define pinstCInvSlotMgr_x                                         0x140D83190
#define pinstCItemDisplayManager_x                                 0x140ECB0A0
#define pinstCPopupWndManager_x                                    0x140ECB930
#define pinstCSpellDisplayMgr_x                                    0x140ECBF80
#define pinstCTaskManager_x                                        0x140BBEC80
#define pinstEQSuiteTextureLoader_x                                0x140D0C520
#define pinstItemIconCache_x                                       0x140EC8988
#define pinstLootFiltersManager_x                                  0x140D82948
#define pinstGFViewListener_x                                      0x140EDC858


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140238810
#define __CastRay_x                                                0x140230B80
#define __CastRay2_x                                               0x140230880
#define __ConvertItemTags_x                                        0x140230FE0
#define __CleanItemTags_x                                          0x140087DB0
#define __CreateCascadeMenuItems_x                                 0x140180CB0
#define __DoesFileExist_x                                          0x140568C10
#define __EQGetTime_x                                              0x140565310
#define __ExecuteCmd_x                                             0x140206F60
#define __FixHeading_x                                             0x140690660
#define __FlushDxKeyboard_x                                        0x14032B310
#define __get_bearing_x                                            0x14023AA00
#define __get_melee_range_x                                        0x14023AB00
#define __GetAnimationCache_x                                      0x1403A8360
#define __GetGaugeValueFromEQ_x                                    0x1404DBB40
#define __GetLabelFromEQ_x                                         0x1404DD140
#define __GetXTargetType_x                                         0x140691940   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406906E0
#define __HelpPath_x                                               0x140EB0E10   // Why?
#define __NewUIINI_x                                               0x1404E86B0   // Why?
#define __ProcessGameEvents_x                                      0x14026D420
#define __ProcessKeyboardEvents_x                                  0x14032CB70
#define __ProcessMouseEvents_x                                     0x14026E950
#define __SaveColors_x                                             0x140190C80
#define __STMLToText_x                                             0x14056D550
#define __WndProc_x                                                0x140329AF0
#define CMemoryMappedFile__SetFile_x                               0x1407C8470
#define DrawNetStatus_x                                            0x1402B79B0
#define Util__FastTime_x                                           0x1405648A0
#define __eq_delete_x                                              0x140697A94
#define __eq_new_x                                                 0x140697A50
#define __CopyLayout_x                                             0x1402A5980
#define __ThrottleFrameRate_x                                      0x14025CC9C
#define __ThrottleFrameRateEnd_x                                   0x14025CCFC

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033C0D0
#define CAAWnd__Update_x                                           0x14033C3D0
#define CAAWnd__UpdateSelected_x                                   0x14033D410

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AA0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BD90
#define AltAdvManager__IsAbilityReady_x                            0x14019C010
#define AltAdvManager__GetAAById_x                                 0x14019B660
#define AltAdvManager__CanTrainAbility_x                           0x14019B490
#define AltAdvManager__CanSeeAbility_x                             0x14019B150

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1850
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1AA0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5D10
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2470
#define CharacterZoneClient__CastSpell_x                           0x1400D2510
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1840
#define CharacterZoneClient__Cur_HP_x                              0x1400E7420
#define CharacterZoneClient__Cur_Mana_x                            0x1400E75E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D52A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDAA0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC4D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6700
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E51E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF660
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE530
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D68D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8940
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEC70
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7090
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF8F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6950
#define CharacterZoneClient__GetManaRegen_x                        0x1400F06D0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6B50
#define CharacterZoneClient__GetModCap_x                           0x1400F7C90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6BE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6DF0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBAB0
#define CharacterZoneClient__HasSkill_x                            0x1400F36C0
#define CharacterZoneClient__HitBySpell_x                          0x1400D78A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB040
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7770
#define CharacterZoneClient__Max_Endurance_x                       0x1402D43B0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7AC0
#define CharacterZoneClient__Max_Mana_x                            0x1402D45D0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7F20
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE3D0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF0D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0420
#define CharacterZoneClient__UseSkill_x                            0x1400FD440


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A540

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140364870

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360700
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F790

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366F20

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389D70
#define CChatWindowManager__InitContextMenu_x                      0x140389F00
#define CChatWindowManager__FreeChatWindow_x                       0x140388DF0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391AB0
#define CChatWindowManager__CreateChatWindow_x                     0x140388730

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105580

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392AF0
#define CChatWindow__Clear_x                                       0x140393990
#define CChatWindow__WndNotification_x                             0x140394B80
#define CChatWindow__AddHistory_x                                  0x140393490

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A2600
#define CContextMenu__RemoveMenuItem_x                             0x1405A29F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A29C0
#define CContextMenu__CheckMenuItem_x                              0x1405A2830
#define CContextMenu__SetMenuItem_x                                0x1405A2A10
#define CContextMenu__AddSeparator_x                               0x1405A2770

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405944F0
#define CContextMenuManager__RemoveMenu_x                          0x140594AC0
#define CContextMenuManager__PopupMenu_x                           0x140594800
#define CContextMenuManager__Flush_x                               0x140594570
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A02B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140659BB0
#define CChatService__GetFriendName_x                              0x140659BC0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140585270
#define CComboWnd__Draw_x                                          0x140585370
#define CComboWnd__GetCurChoice_x                                  0x140585650  // unused
#define CComboWnd__GetListRect_x                                   0x1405856F0
#define CComboWnd__InsertChoice_x                                  0x140585A30
#define CComboWnd__SetColors_x                                     0x140585DC0
#define CComboWnd__SetChoice_x                                     0x140585D80
#define CComboWnd__GetItemCount_x                                  0x1405856E0
#define CComboWnd__GetCurChoiceText_x                              0x140585690  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585620
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585AF0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039E020
#define CContainerWnd__SetContainer_x                              0x1403F3530
#define CContainerWnd__vftable_x                                   0x1409A9090

// CDisplay
#define CDisplay__cameraType_x                                     0x140D832BC
#define CDisplay__ZoneMainUI_x                                     0x1405BC760
#define CDisplay__PreZoneMainUI_x                                  0x14018DB70
#define CDisplay__CleanGameUI_x                                    0x14017FD90
#define CDisplay__GetClickedActor_x                                0x140183F00
#define CDisplay__GetUserDefinedColor_x                            0x140184B70
#define CDisplay__InitCharSelectUI_x                               0x140184E20
#define CDisplay__ReloadUI_x                                       0x14018FE60
#define CDisplay__WriteTextHD2_x                                   0x140196EB0
#define CDisplay__TrueDistance_x                                   0x140196B60
#define CDisplay__SetViewActor_x                                   0x1401933A0
#define CDisplay__GetFloorHeight_x                                 0x140184160
#define CDisplay__ToggleScreenshotMode_x                           0x140196650
#define CDisplay__RealRender_World_x                               0x14018F240

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6910
#define CEditWnd__DrawCaret_x                                      0x1405B8450  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8910
#define CEditWnd__GetCaretPt_x                                     0x1405B8B90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8BD0
#define CEditWnd__GetDisplayString_x                               0x1405B8E40
#define CEditWnd__GetHorzOffset_x                                  0x1405B9080
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B91D0
#define CEditWnd__GetSelStartPt_x                                  0x1405B94B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B9300
#define CEditWnd__PointFromPrintableChar_x                         0x1405BA060
#define CEditWnd__ReplaceSelection_x                               0x1405BA410
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BA8B0
#define CEditWnd__SetEditable_x                                    0x1405BAB40
#define CEditWnd__SetWindowText_x                                  0x1405BAB70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025DDB0
#define CEverQuest__ClickedPlayer_x                                0x1402538D0
#define CEverQuest__CreateTargetIndicator_x                        0x140254190
#define CEverQuest__DoTellWindow_x                                 0x140105290 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105B50 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F770
#define CEverQuest__dsp_chat_x                                     0x140104CC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140289950
#define CEverQuest__Emote_x                                        0x140260150
#define CEverQuest__GetBodyTypeDesc_x                              0x140260F00
#define CEverQuest__GetClassDesc_x                                 0x140260F60
#define CEverQuest__GetClassThreeLetterCode_x                      0x140261330
#define CEverQuest__GetDeityDesc_x                                 0x1402615E0
#define CEverQuest__GetLangDesc_x                                  0x140261A10
#define CEverQuest__GetRaceDesc_x                                  0x140261DB0
#define CEverQuest__InterpretCmd_x                                 0x1402636E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402785B0
#define CEverQuest__LMouseUp_x                                     0x1402650B0
#define CEverQuest__RightClickedOnPlayer_x                         0x140275DD0
#define CEverQuest__RMouseUp_x                                     0x14026F4D0
#define CEverQuest__SetGameState_x                                 0x14027AAF0
#define CEverQuest__UPCNotificationFlush_x                         0x140280420 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140264D20
#define CEverQuest__ReportSuccessfulHeal_x                         0x140270880
#define CEverQuest__ReportSuccessfulHit_x                          0x1402716A0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2720

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D10
#define CGuild__GetGuildName_x                                     0x1400C0D50

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4BC0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029B470
#define CHotButton__SetCheck_x                                     0x14029B740

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EC2D0
#define CInvSlotMgr__MoveItem_x                                    0x1403EC4B0
#define CInvSlotMgr__SelectSlot_x                                  0x1403EDE20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E9500
#define CInvSlot__SliderComplete_x                                 0x1403EAA50
#define CInvSlot__GetItemBase_x                                    0x1403E5140
#define CInvSlot__UpdateItem_x                                     0x1403EAF00

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EF1B0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140410480
#define CItemDisplayWnd__UpdateStrings_x                           0x140412DA0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040CFB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E700
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F8B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D8670
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DA360

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405138A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404096F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148400

// CLabel
#define CLabel__UpdateText_x                                       0x14041A190

// CListWnd
#define CListWnd__CListWnd_x                                       0x140588C00
#define CListWnd__dCListWnd_x                                      0x140589050
#define CListWnd__vftable_x                                        0x140A8ECA8
#define CListWnd__AddColumn_x                                      0x1405896F0
#define CListWnd__AddColumn1_x                                     0x140589790
#define CListWnd__AddLine_x                                        0x1405898F0
#define CListWnd__AddString_x                                      0x140589E80
#define CListWnd__CalculateFirstVisibleLine_x                      0x14058A3F0
#define CListWnd__CalculateVSBRange_x                              0x14058A6D0
#define CListWnd__ClearSel_x                                       0x14058A880
#define CListWnd__ClearAllSel_x                                    0x14058A820
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058A8E0
#define CListWnd__Compare_x                                        0x14058AAA0
#define CListWnd__Draw_x                                           0x14058AF70
#define CListWnd__DrawColumnSeparators_x                           0x14058BB20
#define CListWnd__DrawHeader_x                                     0x14058BBE0
#define CListWnd__DrawItem_x                                       0x14058C2C0
#define CListWnd__DrawLine_x                                       0x14058CC40
#define CListWnd__DrawSeparator_x                                  0x14058D100
#define CListWnd__EnableLine_x                                     0x14058D520
#define CListWnd__EnsureVisible_x                                  0x14058D580
#define CListWnd__ExtendSel_x                                      0x14058D680
#define CListWnd__GetColumnMinWidth_x                              0x14058D9B0
#define CListWnd__GetColumnWidth_x                                 0x14058DA30
#define CListWnd__GetCurSel_x                                      0x14058DB30
#define CListWnd__GetItemData_x                                    0x14058DEB0
#define CListWnd__GetItemHeight_x                                  0x14058DEF0
#define CListWnd__GetItemRect_x                                    0x14058E110
#define CListWnd__GetItemText_x                                    0x14058E3B0
#define CListWnd__GetSelList_x                                     0x14058E600
#define CListWnd__GetSeparatorRect_x                               0x14058E7F0
#define CListWnd__InsertLine_x                                     0x14058FC60
#define CListWnd__RemoveLine_x                                     0x1405902D0
#define CListWnd__SetColors_x                                      0x140590690
#define CListWnd__SetColumnJustification_x                         0x1405906B0
#define CListWnd__SetColumnLabel_x                                 0x140590730
#define CListWnd__SetColumnWidth_x                                 0x1405908D0
#define CListWnd__SetCurSel_x                                      0x1405909A0
#define CListWnd__SetItemColor_x                                   0x140590C10
#define CListWnd__SetItemData_x                                    0x140590CB0
#define CListWnd__SetItemText_x                                    0x140590EF0
#define CListWnd__Sort_x                                           0x140591300
#define CListWnd__ToggleSel_x                                      0x140591470
#define CListWnd__SetColumnsSizable_x                              0x140590920
#define CListWnd__SetItemWnd_x                                     0x140591020
#define CListWnd__GetItemWnd_x                                     0x14058E590
#define CListWnd__SetItemIcon_x                                    0x140590CF0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058A1C0
#define CListWnd__SetVScrollPos_x                                  0x140591260

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042D420

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B78
#define MapViewMap__Clear_x                                        0x14042EF90
#define MapViewMap__SetZoom_x                                      0x1404355E0
#define MapViewMap__HandleLButtonDown_x                            0x140432120

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456C50  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045D1F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045D990
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140461190
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404604E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140465410

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636760
#define CPacketScrambler__hton_x                                   0x140636750

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B1D30
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1C70
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B2360
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B2110
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B1070
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B1000
#define CSidlManagerBase__CreateXWnd_x                             0x1405B0660

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB6B0
#define CSidlManager__CreateXWnd_x                                 0x1404CB870

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405769C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405768B0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C0ED0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576B40
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140576000
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405760D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405762E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405771E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140577410
#define CSidlScreenWnd__GetChildItem_x                             0x1405775B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577800
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581880 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140577B70
#define CSidlScreenWnd__LoadIniInfo_x                              0x140577EE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578790
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140579080
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC6F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405796C0
#define CSidlScreenWnd__StoreIniVis_x                              0x140579EB0
#define CSidlScreenWnd__vftable_x                                  0x140A8DF18
#define CSidlScreenWnd__WndNotification_x                          0x140579F00

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403149B0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314E50 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314D80
#define CSkillMgr__IsActivatedSkill_x                              0x140315200
#define CSkillMgr__IsCombatSkill_x                                 0x140315240
#define CSkillMgr__GetSkillTimerDuration_x                         0x140315170
#define CSkillMgr__GetSkillLastUsed_x                              0x140314DD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140591DE0
#define CSliderWnd__SetValue_x                                     0x1405925F0
#define CSliderWnd__SetNumTicks_x                                  0x140592470

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D1CE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140596F40
#define CStmlWnd__CalculateHSBRange_x                              0x140581250
#define CStmlWnd__CalculateVSBRange_x                              0x140597E60
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405988D0
#define CStmlWnd__ForceParseNow_x                                  0x140598970
#define CStmlWnd__GetVisibleText_x                                 0x140599040
#define CStmlWnd__MakeStmlColorTag_x                               0x14059ADA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059ADE0
#define CStmlWnd__SetSTMLText_x                                    0x1405A1DB0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A1F60
#define CStmlWnd__UpdateHistoryString_x                            0x1405A22F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592BA0
#define CTabWnd__DrawCurrentPage_x                                 0x140592C40
#define CTabWnd__DrawTab_x                                         0x140593010
#define CTabWnd__GetTabRect_x                                      0x140593680
#define CTabWnd__InsertPage_x                                      0x140593950
#define CTabWnd__RemovePage_x                                      0x140593BD0
#define CTabWnd__SetPage_x                                         0x140593D30
#define CTabWnd__UpdatePage_x                                      0x140594030

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BAFC0
#define CPageWnd__SetTabText_x                                     0x1405BB030

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA470  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA880


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A9710
#define CTextureFont__DrawWrappedText1_x                           0x1405A9620
#define CTextureFont__DrawWrappedText2_x                           0x1405A9840
#define CTextureFont__GetTextExtent_x                              0x1405A9BF0
#define CTextureFont__GetHeight_x                                  0x1405A9BB0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BF630

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575BE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE90
#define CXStr__gCXStrAccess_x                                      0x140EDC4F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057C920
#define CXWnd__ClrFocus_x                                          0x14057CC10
#define CXWnd__Destroy_x                                           0x14057CD90
#define CXWnd__DoAllDrawing_x                                      0x14057CEA0
#define CXWnd__DrawColoredRect_x                                   0x14057D650
#define CXWnd__DrawTooltip_x                                       0x14057ECB0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057ED60
#define CXWnd__GetChildItem_x                                      0x14057F670
#define CXWnd__GetChildWndAt_x                                     0x14057F730
#define CXWnd__GetClientRect_x                                     0x14057F9D0
#define CXWnd__GetClientClipRect_x                                 0x14057F890
#define CXWnd__GetRelativeRect_x                                   0x140581380
#define CXWnd__GetScreenClipRect_x                                 0x140581480
#define CXWnd__GetScreenRect_x                                     0x140581600
#define CXWnd__GetTooltipRect_x                                    0x140581780
#define CXWnd__IsActive_x                                          0x140581D30
#define CXWnd__IsDescendantOf_x                                    0x140581D60
#define CXWnd__IsReallyVisible_x                                   0x140581DD0
#define CXWnd__IsType_x                                            0x140581E10
#define CXWnd__Minimize_x                                          0x140581F10
#define CXWnd__ProcessTransition_x                                 0x140582DC0
#define CXWnd__Resize_x                                            0x140582ED0
#define CXWnd__Right_x                                             0x140582F70
#define CXWnd__SetFocus_x                                          0x140583320
#define CXWnd__SetFont_x                                           0x140583370
#define CXWnd__SetKeyTooltip_x                                     0x140583460
#define CXWnd__SetMouseOver_x                                      0x1405835A0
#define CXWnd__SetParent_x                                         0x140583620
#define CXWnd__StartFade_x                                         0x140583A60
#define CXWnd__vftable_x                                           0x140A8E508
#define CXWnd__CXWnd_x                                             0x14057B4C0
#define CXWnd__dCXWnd_x                                            0x14057BE10

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C6090

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3BC0
#define CXWndManager__DrawCursor_x                                 0x1405A3EA0
#define CXWndManager__DrawWindows_x                                0x1405A4100
#define CXWndManager__GetKeyboardFlags_x                           0x1405A47D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4810
#define CXWndManager__RemoveWnd_x                                  0x1405A7DE0

// CDBStr
#define CDBStr__GetString_x                                        0x14017DF00

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063F8C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE6F0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD3F0
#define CCharacterListWnd__Quit_x                                  0x1400CE6D0
#define CCharacterListWnd__UpdateList_x                            0x1400CF3E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060E520
#define ItemBase__CreateItemTagString_x                            0x14060EF70
#define ItemBase__GetImageNum_x                                    0x140611530
#define ItemBase__GetItemValue_x                                   0x140612FE0
#define ItemBase__IsEmpty_x                                        0x140614BF0
#define ItemBase__IsKeyRingItem_x                                  0x140615320
#define ItemBase__ValueSellMerchant_x                              0x1406194E0
#define ItemClient__CanDrop_x                                      0x14029DA40
#define ItemClient__CanGoInBag_x                                   0x14029DB70
#define ItemClient__CreateItemClient_x                             0x14029DE50
#define ItemClient__dItemClient_x                                  0x14029D8B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D530
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140625BC0
#define PcBase__GetCombatAbility_x                                 0x140626260
#define PcBase__GetCombatAbilityTimer_x                            0x140626300
#define PcBase__GetItemContainedRealEstateIds_x                    0x140626A50
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627540
#define PcClient__AlertInventoryChanged_x                          0x1402BFF90
#define PcClient__GetConLevel_x                                    0x1402C05B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2CE0
#define PcClient__HasLoreItem_x                                    0x1402C3CA0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1520
#define PcZoneClient__RemoveMyAffect_x                             0x1402D5450

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B620  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B7D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B930  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B870  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244FF0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178790

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140683280
#define PlayerBase__CanSee1_x                                      0x140683350
#define PlayerBase__GetVisibilityLineSegment_x                     0x140683810
#define PlayerBase__HasProperty_x                                  0x140683A40
#define PlayerBase__IsTargetable_x                                 0x140683B00
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1F30
#define PlayerClient__GetPcClient_x                                0x1402E4760
#define PlayerClient__PlayerClient_x                               0x1402DB200
#define PlayerClient__SetNameSpriteState_x                         0x1402E7BB0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8B70
#define PlayerZoneClient__ChangeHeight_x                           0x1402F7120
#define PlayerZoneClient__DoAttack_x                               0x1402F7E30
#define PlayerZoneClient__GetLevel_x                               0x1402FB560
#define PlayerZoneClient__IsValidTeleport_x                        0x140247D80
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C3F0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F0A40  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0AF0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0BF0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0510
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140682E40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2EA0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A2AA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2B10
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2E30  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2FC0
#define KeypressHandler__HandleKeyUp_x                             0x1402A30C0
#define KeypressHandler__SaveKeymapping_x                          0x1402A2D40  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063D400  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140637E90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402CA260  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF560
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1C10
#define PcZoneClient__RemovePetEffect_x                            0x1402D5550
#define PcZoneClient__HasAlternateAbility_x                        0x1402D27E0
#define PcZoneClient__CanEquipItem_x                               0x1402CD890
#define PcZoneClient__GetItemByID_x                                0x1402D05F0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D52D0
#define PcZoneClient__BandolierSwap_x                              0x1402CC870

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C8B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A8390

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039CDD0
#define CContainerMgr__CloseContainer_x                            0x14039C710
#define CContainerMgr__OpenExperimentContainer_x                   0x14039D150

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140490420

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295C50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140421470
#define CLootWnd__RequestLootSlot_x                                0x140422480

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC860
#define EQ_Spell__SpellAffects_x                                   0x1401CDB20
#define EQ_Spell__SpellAffectBase_x                                0x1401CDA80
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6FC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6F70
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD740
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD300
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCBD0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF950

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EBDB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EB4C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EAD00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F3460  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175020
#define CTaskManager__GetTaskStatus_x                              0x140175130
#define CTaskManager__GetElementDescription_x                      0x140174CB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CABD0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9A10
#define EqSoundManager__SoundAssistPlay_x                          0x14031A000  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14031A340  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584800
#define CTextureAnimation__SetCurCell_x                            0x140584B10

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293EB0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406572F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140657370
#define CharacterBase__IsExpansionFlag_x                           0x1401EDA30

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037B0B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037BA20
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CF60

// messages
#define msg_spell_worn_off_x                                       0x140201FA0
#define msg_new_text_x                                             0x1401FD860
#define __msgTokenTextParam_x                                      0x1401F5660
#define msgTokenText_x                                             0x1401F5580

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B9F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B910

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140691D20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A8E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1AB0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A4A10
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4CC0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BDAD0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BDCC0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BDCD0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401436A0
#define CFindItemWnd__Update_x                                     0x140144040
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DB70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CEF0
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E2A0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E550

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404732A0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406972E0
#define CResolutionHandler__GetWindowedStyle_x                     0x140314510

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140399110

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065B670  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065B560  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BDD80
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD960

// ItemBase
#define ItemBase__IsLore_x                                         0x1406153F0
#define ItemBase__IsLoreEquipped_x                                 0x140615480

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B5BD0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140245150
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402450E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140245120

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030EAF0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DA70
#define FactionManagerClient__HandleFactionMessage_x               0x14011DE20
#define FactionManagerClient__GetFactionStanding_x                 0x14011D240
#define FactionManagerClient__GetMaxFaction_x                      0x14011D240
#define FactionManagerClient__GetMinFaction_x                      0x14011D0F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC650

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129210

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5E90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5210
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5CB0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5C30  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320B00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030EAF0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B9C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057A4F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C60

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140332040

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C630

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640440
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
