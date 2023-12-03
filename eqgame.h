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

#define __ClientDate                                               20231129u
#define __ExpectedVersionDate                                     "Nov 29 2023"
#define __ExpectedVersionTime                                     "00:53:28"
#define __ActualVersionDate_x                                      0x140828168
#define __ActualVersionTime_x                                      0x140828158
#define __ActualVersionBuild_x                                     0x14081CC00

// Memory Protection
#define __MemChecker0_x                                            0x1402A8980
#define __MemChecker1_x                                            0x140562CE0
#define __MemChecker4_x                                            0x140277360
#define __EncryptPad0_x                                            0x140ADB8E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C14430
#define instEQZoneInfo_x                                           0x140C14624 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F570
#define __gfMaxZoomCameraDistance_x                                0x14081DE70
#define __gfMaxCameraDistance_x                                    0x14085D590
#define __CurrentSocial_x                                          0x140997940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AD31D0
#define g_eqCommandStates_x                                        0x140AD4240
#define __CommandList_x                                            0x140AD4470
#define __ScreenMode_x                                             0x140B5BED4
#define __gWorld_x                                                 0x140C0F350
#define __gpbCommandEvent_x                                        0x140C0ED84
#define __ServerHost_x                                             0x140C0EF68
#define __Guilds_x                                                 0x140C12FE0
#define __MouseEventTime_x                                         0x140C89970
#define DI8__Mouse_Check_x                                         0x140C8DAA8
#define __heqmain_x                                                0x140C8FF40
#define DI8__Mouse_x                                               0x140C8FF58
#define __HWnd_x                                                   0x140C8FF60
#define __Mouse_x                                                  0x140C8FF68
#define DI8__Main_x                                                0x140C8FF80
#define DI8__Keyboard_x                                            0x140C8FF88
#define __LoginName_x                                              0x140C9065C
#define __CurrentMapLabel_x                                        0x140CA3CF0
#define __LabelCache_x                                             0x140CA48C0
#define Teleport_Table_Size_x                                      0x140C0EE10
#define Teleport_Table_x                                           0x140C0C8D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C0F370
#define pinstActiveBanker_x                                        0x140C0F2A0
#define pinstActiveCorpse_x                                        0x140C0F290
#define pinstActiveGMaster_x                                       0x140C0F298
#define pinstActiveMerchant_x                                      0x140C0F288
#define pinstAltAdvManager_x                                       0x140B5CB98
#define pinstCEverQuest_x                                          0x140C909C8
#define pinstCamActor_x                                            0x140B5BEC0
#define pinstCDBStr_x                                              0x140B5B990
#define pinstCDisplay_x                                            0x140C0E8F0
#define pinstControlledPlayer_x                                    0x140C0F330
#define pinstCResolutionHandler_x                                  0x141315078
#define pinstCSidlManager_x                                        0x140CB5BC0
#define pinstCXWndManager_x                                        0x140CB5BB8
#define instDynamicZone_x                                          0x140C12EA0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C12EEE
#define instExpeditionName_x                                       0x140C12F2E
#define pinstDZMember_x                                            0x140C12FB8
#define pinstDZTimerInfo_x                                         0x140C12FC0
#define pinstEqLogin_x                                             0x140C8FFA0
#define instTribute_x                                              0x140ACE840
#define pinstEQSoundManager_x                                      0x140B5CF18
#define pinstEQSpellStrings_x                                      0x140B405A0
#define pinstSGraphicsEngine_x                                     0x141314DF8
#define pinstLocalPC_x                                             0x140C0C8B0
#define pinstLocalPlayer_x                                         0x140C0F280
#define pinstCMercenaryClientManager_x                             0x140C8B228
#define pinstModelPlayer_x                                         0x140C0F2B0
#define pinstRenderInterface_x                                     0x141314E10
#define pinstSkillMgr_x                                            0x140C8CEC0
#define pinstSpawnManager_x                                        0x140C8B5E0
#define pinstSpellManager_x                                        0x140C8CF28
#define pinstStringTable_x                                         0x140C0C8B8
#define pinstSwitchManager_x                                       0x140C0C830
#define pinstTarget_x                                              0x140C0F328
#define pinstTaskMember_x                                          0x140ACE830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C0F338
#define pinstTradeTarget_x                                         0x140C0F2A8
#define instTributeActive_x                                        0x140ACE869
#define pinstViewActor_x                                           0x140B5BEB8
#define pinstWorldData_x                                           0x140C0C8C0
#define pinstPlayerPath_x                                          0x140C8B608
#define pinstTargetIndicator_x                                     0x140C8CFD8
#define EQObject_Top_x                                             0x140C0F358

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140CA0E50
#define pinstCContainerMgr_x                                       0x140B5BB28
#define pinstCContextMenuManager_x                                 0x140CB58A0
#define pinstCInvSlotMgr_x                                         0x140B5BB20
#define pinstCItemDisplayManager_x                                 0x140CA38C0
#define pinstCPopupWndManager_x                                    0x140CA4150
#define pinstCSpellDisplayMgr_x                                    0x140CA47A0
#define pinstCTaskManager_x                                        0x140997C80
#define pinstEQSuiteTextureLoader_x                                0x140AE4FD0
#define pinstItemIconCache_x                                       0x140CA11B0
#define pinstLootFiltersManager_x                                  0x140B5B3D8
#define pinstGFViewListener_x                                      0x140CB5078


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140237C00
#define __CastRay_x                                                0x140230470
#define __CastRay2_x                                               0x140230170
#define __ConvertItemTags_x                                        0x1402308D0
#define __CleanItemTags_x                                          0x1400879B0
#define __CreateCascadeMenuItems_x                                 0x140180680
#define __DoesFileExist_x                                          0x140566B90
#define __EQGetTime_x                                              0x140563290
#define __ExecuteCmd_x                                             0x140206F10
#define __FixHeading_x                                             0x14068E050
#define __FlushDxKeyboard_x                                        0x14032A7F0
#define __get_bearing_x                                            0x140239DF0
#define __get_melee_range_x                                        0x140239EF0
#define __GetAnimationCache_x                                      0x1403A6F00
#define __GetGaugeValueFromEQ_x                                    0x1404DA090
#define __GetLabelFromEQ_x                                         0x1404DB690
#define __GetXTargetType_x                                         0x14068F330   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068E0D0
#define __HelpPath_x                                               0x140C89838   // Why?
#define __NewUIINI_x                                               0x1404E6BF0   // Why?
#define __ProcessGameEvents_x                                      0x14026C750
#define __ProcessKeyboardEvents_x                                  0x14032C050
#define __ProcessMouseEvents_x                                     0x14026DC50
#define __SaveColors_x                                             0x140190810
#define __STMLToText_x                                             0x14056B4D0
#define __WndProc_x                                                0x140328F40
#define CMemoryMappedFile__SetFile_x                               0x1407C6010
#define DrawNetStatus_x                                            0x1402B6D90
#define Util__FastTime_x                                           0x140562820
#define __eq_delete_x                                              0x1406954E4
#define __eq_new_x                                                 0x1406954A0
#define __CopyLayout_x                                             0x1402A4DC0
#define __ThrottleFrameRate_x                                      0x14025BE75
#define __ThrottleFrameRateEnd_x                                   0x14025BED5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033B4E0
#define CAAWnd__Update_x                                           0x14033B7E0
#define CAAWnd__UpdateSelected_x                                   0x14033C7E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9C10
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2500
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140803918
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA500

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019B980
#define AltAdvManager__IsAbilityReady_x                            0x14019BC00
#define AltAdvManager__GetAAById_x                                 0x14019B250
#define AltAdvManager__CanTrainAbility_x                           0x14019B080
#define AltAdvManager__CanSeeAbility_x                             0x14019AD40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0430
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1270
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D14C0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5760
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1E90
#define CharacterZoneClient__CastSpell_x                           0x1400D1F30
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1290
#define CharacterZoneClient__Cur_HP_x                              0x1400E6E60
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7020
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4CD0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED580
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC1B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6130
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4C30
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF140
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE010
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6300
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6A30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8400
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE750
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6AD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF3D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6380
#define CharacterZoneClient__GetManaRegen_x                        0x1400F01B0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6580
#define CharacterZoneClient__GetModCap_x                           0x1400F7970
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6610
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6820
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB570
#define CharacterZoneClient__HasSkill_x                            0x1400F31A0
#define CharacterZoneClient__HitBySpell_x                          0x1400D72D0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAA80
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7460
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3740  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F77A0
#define CharacterZoneClient__Max_Mana_x                            0x1402D3960  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7C00
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDE20
#define CharacterZoneClient__SpellDuration_x                       0x1400DEB20
#define CharacterZoneClient__TotalEffect_x                         0x1400DFE70
#define CharacterZoneClient__UseSkill_x                            0x1400FD100


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140359AE0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140363E40

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035FCC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035ED50

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403664F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14086B730

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403892D0
#define CChatWindowManager__InitContextMenu_x                      0x140389460
#define CChatWindowManager__FreeChatWindow_x                       0x1403883D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403907A0
#define CChatWindowManager__CreateChatWindow_x                     0x140387D10

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401052B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403917A0
#define CChatWindow__Clear_x                                       0x140392640
#define CChatWindow__WndNotification_x                             0x140393830
#define CChatWindow__AddHistory_x                                  0x140392140

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A04A0
#define CContextMenu__RemoveMenuItem_x                             0x1405A0890
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A0860
#define CContextMenu__CheckMenuItem_x                              0x1405A06D0
#define CContextMenu__SetMenuItem_x                                0x1405A08B0
#define CContextMenu__AddSeparator_x                               0x1405A0610

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140592360
#define CContextMenuManager__RemoveMenu_x                          0x140592940
#define CContextMenuManager__PopupMenu_x                           0x140592680
#define CContextMenuManager__Flush_x                               0x1405923E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039EF60

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140657210
#define CChatService__GetFriendName_x                              0x140657220

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405832B0
#define CComboWnd__Draw_x                                          0x1405833B0
#define CComboWnd__GetCurChoice_x                                  0x140583690  // unused
#define CComboWnd__GetListRect_x                                   0x140583730
#define CComboWnd__InsertChoice_x                                  0x140583A70
#define CComboWnd__SetColors_x                                     0x140583E00
#define CComboWnd__SetChoice_x                                     0x140583DC0
#define CComboWnd__GetItemCount_x                                  0x140583720
#define CComboWnd__GetCurChoiceText_x                              0x1405836D0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140583660
#define CComboWnd__InsertChoiceAtIndex_x                           0x140583B30

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039CCE0
#define CContainerWnd__SetContainer_x                              0x1403F1880
#define CContainerWnd__vftable_x                                   0x140837560

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5BC5C
#define CDisplay__ZoneMainUI_x                                     0x1405BA630
#define CDisplay__PreZoneMainUI_x                                  0x14018D620
#define CDisplay__CleanGameUI_x                                    0x14017F770
#define CDisplay__GetClickedActor_x                                0x140183910
#define CDisplay__GetUserDefinedColor_x                            0x140184580
#define CDisplay__InitCharSelectUI_x                               0x140184830
#define CDisplay__ReloadUI_x                                       0x14018F900
#define CDisplay__WriteTextHD2_x                                   0x140196AB0
#define CDisplay__TrueDistance_x                                   0x140196760
#define CDisplay__SetViewActor_x                                   0x140192F80
#define CDisplay__GetFloorHeight_x                                 0x140183B70
#define CDisplay__ToggleScreenshotMode_x                           0x140196250
#define CDisplay__RealRender_World_x                               0x14018ECF0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C47E0
#define CEditWnd__DrawCaret_x                                      0x1405B6340  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B6800
#define CEditWnd__GetCaretPt_x                                     0x1405B6A80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B6AC0
#define CEditWnd__GetDisplayString_x                               0x1405B6D30
#define CEditWnd__GetHorzOffset_x                                  0x1405B6F70
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B70C0
#define CEditWnd__GetSelStartPt_x                                  0x1405B73A0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B71F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405B7F50
#define CEditWnd__ReplaceSelection_x                               0x1405B8300
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B87A0
#define CEditWnd__SetEditable_x                                    0x1405B8A30
#define CEditWnd__SetWindowText_x                                  0x1405B8A60

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025CF70
#define CEverQuest__ClickedPlayer_x                                0x140252A90
#define CEverQuest__CreateTargetIndicator_x                        0x140253350
#define CEverQuest__DoTellWindow_x                                 0x140104FC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105880 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025E9A0
#define CEverQuest__dsp_chat_x                                     0x1401049F0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140288C70
#define CEverQuest__Emote_x                                        0x14025F350
#define CEverQuest__GetBodyTypeDesc_x                              0x1402600F0
#define CEverQuest__GetClassDesc_x                                 0x140260150
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260520
#define CEverQuest__GetDeityDesc_x                                 0x1402607D0
#define CEverQuest__GetLangDesc_x                                  0x140260C00
#define CEverQuest__GetRaceDesc_x                                  0x140260FA0
#define CEverQuest__InterpretCmd_x                                 0x1402628D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402779E0
#define CEverQuest__LMouseUp_x                                     0x1402642A0
#define CEverQuest__RightClickedOnPlayer_x                         0x140275200
#define CEverQuest__RMouseUp_x                                     0x14026E7D0
#define CEverQuest__SetGameState_x                                 0x140279F20
#define CEverQuest__UPCNotificationFlush_x                         0x14027F720 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263F10
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026FB80
#define CEverQuest__ReportSuccessfulHit_x                          0x1402709E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B12B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0770
#define CGuild__GetGuildName_x                                     0x1400C07B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D37D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029A840
#define CHotButton__SetCheck_x                                     0x14029AB10

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EA5D0
#define CInvSlotMgr__MoveItem_x                                    0x1403EA7B0
#define CInvSlotMgr__SelectSlot_x                                  0x1403EC150

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E77C0
#define CInvSlot__SliderComplete_x                                 0x1403E8D10
#define CInvSlot__GetItemBase_x                                    0x1403E33F0
#define CInvSlot__UpdateItem_x                                     0x1403E91D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403ED4E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040E730
#define CItemDisplayWnd__UpdateStrings_x                           0x1404110A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040B210
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040C980
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040DB40

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D6BA0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D8850

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140511820

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140407930

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148130

// CLabel
#define CLabel__UpdateText_x                                       0x140418480

// CListWnd
#define CListWnd__CListWnd_x                                       0x140586C40
#define CListWnd__dCListWnd_x                                      0x140587090
#define CListWnd__vftable_x                                        0x1408698F8
#define CListWnd__AddColumn_x                                      0x140587730
#define CListWnd__AddColumn1_x                                     0x1405877D0
#define CListWnd__AddLine_x                                        0x140587930
#define CListWnd__AddString_x                                      0x140587EC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140588430
#define CListWnd__CalculateVSBRange_x                              0x140588710
#define CListWnd__ClearSel_x                                       0x1405888C0
#define CListWnd__ClearAllSel_x                                    0x140588860
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140588920
#define CListWnd__Compare_x                                        0x140588AE0
#define CListWnd__Draw_x                                           0x140588FB0
#define CListWnd__DrawColumnSeparators_x                           0x140589B60
#define CListWnd__DrawHeader_x                                     0x140589C20
#define CListWnd__DrawItem_x                                       0x14058A300
#define CListWnd__DrawLine_x                                       0x14058AC80
#define CListWnd__DrawSeparator_x                                  0x14058B140
#define CListWnd__EnableLine_x                                     0x14058B560
#define CListWnd__EnsureVisible_x                                  0x14058B5C0
#define CListWnd__ExtendSel_x                                      0x14058B6C0
#define CListWnd__GetColumnMinWidth_x                              0x14058B9F0
#define CListWnd__GetColumnWidth_x                                 0x14058BA70
#define CListWnd__GetCurSel_x                                      0x14058BB70
#define CListWnd__GetItemData_x                                    0x14058BEF0
#define CListWnd__GetItemHeight_x                                  0x14058BF30
#define CListWnd__GetItemRect_x                                    0x14058C150
#define CListWnd__GetItemText_x                                    0x14058C3F0
#define CListWnd__GetSelList_x                                     0x14058C640
#define CListWnd__GetSeparatorRect_x                               0x14058C830
#define CListWnd__InsertLine_x                                     0x14058DCA0
#define CListWnd__RemoveLine_x                                     0x14058E310
#define CListWnd__SetColors_x                                      0x14058E6D0
#define CListWnd__SetColumnJustification_x                         0x14058E6F0
#define CListWnd__SetColumnLabel_x                                 0x14058E770
#define CListWnd__SetColumnWidth_x                                 0x14058E910
#define CListWnd__SetCurSel_x                                      0x14058E9E0
#define CListWnd__SetItemColor_x                                   0x14058EC50
#define CListWnd__SetItemData_x                                    0x14058ECF0
#define CListWnd__SetItemText_x                                    0x14058EF30
#define CListWnd__Sort_x                                           0x14058F340
#define CListWnd__ToggleSel_x                                      0x14058F4B0
#define CListWnd__SetColumnsSizable_x                              0x14058E960
#define CListWnd__SetItemWnd_x                                     0x14058F060
#define CListWnd__GetItemWnd_x                                     0x14058C5D0
#define CListWnd__SetItemIcon_x                                    0x14058ED30
#define CListWnd__CalculateCustomWindowPositions_x                 0x140588200
#define CListWnd__SetVScrollPos_x                                  0x14058F2A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042B790

// MapViewMap
#define MapViewMap__vftable_x                                      0x1408442A0
#define MapViewMap__Clear_x                                        0x14042D310
#define MapViewMap__SetZoom_x                                      0x140433950
#define MapViewMap__HandleLButtonDown_x                            0x140430490

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140454FE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045B5C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045BD70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14045F590
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045E8D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140463840

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140633E70
#define CPacketScrambler__hton_x                                   0x140633E60

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405AFC10
#define CSidlManagerBase__FindAnimation1_x                         0x1405AFB50
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B0240
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405AFFF0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405AEF50
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405AEEE0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AE540

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C9BD0
#define CSidlManager__CreateXWnd_x                                 0x1404C9D90

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140574960
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140574830
#define CSidlScreenWnd__ConvertToRes_x                             0x1405BEDA0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140574AE0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140573F80
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140574050
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140574260
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140575180
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405753B0
#define CSidlScreenWnd__GetChildItem_x                             0x140575550
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405757A0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14057F820 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140575B10
#define CSidlScreenWnd__LoadIniInfo_x                              0x140575E70
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140576730
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140577020
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB4F18
#define CSidlScreenWnd__StoreIniInfo_x                             0x140577670
#define CSidlScreenWnd__StoreIniVis_x                              0x140577E60
#define CSidlScreenWnd__vftable_x                                  0x140868B98
#define CSidlScreenWnd__WndNotification_x                          0x140577EB0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140313DF0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314290 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403141C0
#define CSkillMgr__IsActivatedSkill_x                              0x140314640
#define CSkillMgr__IsCombatSkill_x                                 0x140314680

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404E52E0
#define CSliderWnd__SetValue_x                                     0x140590620
#define CSliderWnd__SetNumTicks_x                                  0x1405904A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D0210

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140594DC0
#define CStmlWnd__CalculateHSBRange_x                              0x14057F1D0
#define CStmlWnd__CalculateVSBRange_x                              0x140595C60
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140596760
#define CStmlWnd__ForceParseNow_x                                  0x140596800
#define CStmlWnd__GetVisibleText_x                                 0x140596ED0
#define CStmlWnd__MakeStmlColorTag_x                               0x140598C30
#define CStmlWnd__MakeWndNotificationTag_x                         0x140598C70
#define CStmlWnd__SetSTMLText_x                                    0x14059FC40
#define CStmlWnd__StripFirstSTMLLines_x                            0x14059FDF0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A0180

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405909F0
#define CTabWnd__DrawCurrentPage_x                                 0x140590A90
#define CTabWnd__DrawTab_x                                         0x140590E60
#define CTabWnd__GetTabRect_x                                      0x1405914D0
#define CTabWnd__InsertPage_x                                      0x1405917A0
#define CTabWnd__RemovePage_x                                      0x140591A30
#define CTabWnd__SetPage_x                                         0x140591B90
#define CTabWnd__UpdatePage_x                                      0x140591E90

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B8EB0
#define CPageWnd__SetTabText_x                                     0x1405B8F20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9EC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA2D0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A7600
#define CTextureFont__DrawWrappedText1_x                           0x1405A7510
#define CTextureFont__DrawWrappedText2_x                           0x1405A7730
#define CTextureFont__GetTextExtent_x                              0x1405A7AE0
#define CTextureFont__GetHeight_x                                  0x1405A7AA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BD500

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140573B60

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE4940
#define CXStr__gCXStrAccess_x                                      0x140CB4D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057A8E0
#define CXWnd__ClrFocus_x                                          0x14057AB20
#define CXWnd__Destroy_x                                           0x14057ACA0
#define CXWnd__DoAllDrawing_x                                      0x14057ADA0
#define CXWnd__DrawColoredRect_x                                   0x14057B570
#define CXWnd__DrawTooltip_x                                       0x14057CBF0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057CCA0
#define CXWnd__GetChildItem_x                                      0x14057D5B0
#define CXWnd__GetChildWndAt_x                                     0x14057D670
#define CXWnd__GetClientRect_x                                     0x14057D930
#define CXWnd__GetClientClipRect_x                                 0x14057D7E0
#define CXWnd__GetRelativeRect_x                                   0x14057F310
#define CXWnd__GetScreenClipRect_x                                 0x14057F420
#define CXWnd__GetScreenRect_x                                     0x14057F5A0
#define CXWnd__GetTooltipRect_x                                    0x14057F720
#define CXWnd__IsActive_x                                          0x14057FCE0
#define CXWnd__IsDescendantOf_x                                    0x14057FD10
#define CXWnd__IsReallyVisible_x                                   0x14057FD80
#define CXWnd__IsType_x                                            0x14057FDC0
#define CXWnd__Minimize_x                                          0x14057FEC0
#define CXWnd__ProcessTransition_x                                 0x140580DC0
#define CXWnd__Resize_x                                            0x140580ED0
#define CXWnd__Right_x                                             0x140580F70
#define CXWnd__SetFocus_x                                          0x140581330
#define CXWnd__SetFont_x                                           0x140581380
#define CXWnd__SetKeyTooltip_x                                     0x140581490
#define CXWnd__SetMouseOver_x                                      0x1405815D0
#define CXWnd__SetParent_x                                         0x140581650
#define CXWnd__StartFade_x                                         0x140581A90
#define CXWnd__vftable_x                                           0x140869178
#define CXWnd__CXWnd_x                                             0x140579470
#define CXWnd__dCXWnd_x                                            0x140579DD0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C3F60

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A1A60
#define CXWndManager__DrawCursor_x                                 0x1405A1D40
#define CXWndManager__DrawWindows_x                                0x1405A1FA0
#define CXWndManager__GetKeyboardFlags_x                           0x1405A2670
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A26B0
#define CXWndManager__RemoveWnd_x                                  0x1405A5CC0

// CDBStr
#define CDBStr__GetString_x                                        0x14017D8E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063CF90

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE190
#define CCharacterListWnd__EnterWorld_x                            0x1400CCE90
#define CCharacterListWnd__Quit_x                                  0x1400CE170
#define CCharacterListWnd__UpdateList_x                            0x1400CEE80

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060C330
#define ItemBase__CreateItemTagString_x                            0x14060CDA0
#define ItemBase__GetImageNum_x                                    0x14060F320
#define ItemBase__GetItemValue_x                                   0x140610E30
#define ItemBase__IsEmpty_x                                        0x1406129B0
#define ItemBase__IsKeyRingItem_x                                  0x1406130D0
#define ItemBase__ValueSellMerchant_x                              0x140617230
#define ItemClient__CanDrop_x                                      0x14029CE60
#define ItemClient__CanGoInBag_x                                   0x14029CF90
#define ItemClient__CreateItemClient_x                             0x14029D270
#define ItemClient__dItemClient_x                                  0x14029CCD0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D120
#define EQ_LoadingS__Array_x                                       0x140AD0CE0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406232F0
#define PcBase__GetCombatAbility_x                                 0x140623990
#define PcBase__GetCombatAbilityTimer_x                            0x140623A30
#define PcBase__GetItemContainedRealEstateIds_x                    0x140624180
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140624C40
#define PcClient__AlertInventoryChanged_x                          0x1402BF150
#define PcClient__GetConLevel_x                                    0x1402BF770  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C1E60
#define PcClient__HasLoreItem_x                                    0x1402C2F50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D0D40
#define PcZoneClient__RemoveMyAffect_x                             0x1402D4810

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B590  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B740  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B8A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B7E0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402443C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178130

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140680C30
#define PlayerBase__CanSee1_x                                      0x140680D00
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406811C0
#define PlayerBase__HasProperty_x                                  0x1406813F0
#define PlayerBase__IsTargetable_x                                 0x1406814B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E12C0
#define PlayerClient__GetPcClient_x                                0x1402E3AF0
#define PlayerClient__PlayerClient_x                               0x1402DA5A0
#define PlayerClient__SetNameSpriteState_x                         0x1402E6FC0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E7F80
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6530
#define PlayerZoneClient__DoAttack_x                               0x1402F7240
#define PlayerZoneClient__GetLevel_x                               0x1402FA980
#define PlayerZoneClient__IsValidTeleport_x                        0x140247140
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BEA0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EFE50  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EFF00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0000
#define PlayerManagerClient__CreatePlayer_x                        0x1402EF920
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406807F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A22E0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A1EE0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A1F50
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2270  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2400
#define KeypressHandler__HandleKeyUp_x                             0x1402A2500
#define KeypressHandler__SaveKeymapping_x                          0x1402A2180  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063AB00  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406355A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C94C0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CED40
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1440
#define PcZoneClient__RemovePetEffect_x                            0x1402D4910
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2130
#define PcZoneClient__CanEquipItem_x                               0x1402CD060
#define PcZoneClient__GetItemByID_x                                0x1402CFDE0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4690
#define PcZoneClient__BandolierSwap_x                              0x1402CC040
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402D1390

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024BC70

// IconCache
#define IconCache__GetIcon_x                                       0x1403A6F30

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039BA90
#define CContainerMgr__CloseContainer_x                            0x14039B3D0
#define CContainerMgr__OpenExperimentContainer_x                   0x14039BE10

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048E950

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295000

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14041F770
#define CLootWnd__RequestLootSlot_x                                0x1404207B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC420
#define EQ_Spell__SpellAffects_x                                   0x1401CD6E0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD640
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D69F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D69A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD300
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CCEC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC790

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF3B0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EA330
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E9A40
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E9270

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F13B0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401749D0
#define CTaskManager__GetTaskStatus_x                              0x140174AE0
#define CTaskManager__GetElementDescription_x                      0x140174660

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA790
#define EqSoundManager__PlayScriptMp3_x                            0x1401C95D0
#define EqSoundManager__SoundAssistPlay_x                          0x140319440  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319780  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140582840
#define CTextureAnimation__SetCurCell_x                            0x140582B50

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293260

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140654BE0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140654C60
#define CharacterBase__IsExpansionFlag_x                           0x1401ED7D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037A760
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B0D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037C620

// messages
#define msg_spell_worn_off_x                                       0x140201F90
#define msg_new_text_x                                             0x1401FD840
#define __msgTokenTextParam_x                                      0x1401F5490
#define msgTokenText_x                                             0x1401F53B0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031AE30
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031AD50

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14068F710

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140418BD0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A0640
#define CCursorAttachment__IsOkToActivate_x                        0x1403A35B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403A3860
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BB9A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BBB90
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BBBA0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401433C0
#define CFindItemWnd__Update_x                                     0x140143D60
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D880

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CBE0
#define LootFiltersManager__GetItemFilterData_x                    0x14014D6F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014DF90
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E240

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140471790

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140694CC0
#define CResolutionHandler__GetWindowedStyle_x                     0x140313950

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140397DC0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140658CD0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140658BC0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BC990
#define CGroupWnd__UpdateDisplay_x                                 0x1403BC570

// ItemBase
#define ItemBase__IsLore_x                                         0x1406131A0
#define ItemBase__IsLoreEquipped_x                                 0x140613230

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4FC0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244520
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402444B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402444F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DF30

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D730
#define FactionManagerClient__HandleFactionMessage_x               0x14011DAE0
#define FactionManagerClient__GetFactionStanding_x                 0x14011CF00
#define FactionManagerClient__GetMaxFaction_x                      0x14011CF00
#define FactionManagerClient__GetMinFaction_x                      0x14011CDB0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC0B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128EC0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5A80
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4E00
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A58A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5820  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031FF50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DF30

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B930

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405784A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084B70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403313D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C080

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063DB10
#define FreeToPlayClient__RestrictionInfo_x                        0x14087B160

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
