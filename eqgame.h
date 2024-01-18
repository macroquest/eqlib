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

#define __ClientDate                                               20240108u
#define __ExpectedVersionDate                                     "Jan  8 2024"
#define __ExpectedVersionTime                                     "18:32:18"
#define __ActualVersionDate_x                                      0x140829478
#define __ActualVersionTime_x                                      0x140829468
#define __ActualVersionBuild_x                                     0x14081DCF0

// Memory Protection
#define __MemChecker0_x                                            0x1402A88A0
#define __MemChecker1_x                                            0x1405640B0
#define __MemChecker4_x                                            0x1402773D0
#define __EncryptPad0_x                                            0x140ADCE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C15A00
#define instEQZoneInfo_x                                           0x140C15BF4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020ED50
#define __gfMaxZoomCameraDistance_x                                0x14081EF60
#define __gfMaxCameraDistance_x                                    0x14085E9C0
#define __CurrentSocial_x                                          0x140998940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AD4720
#define g_eqCommandStates_x                                        0x140AD5790
#define __CommandList_x                                            0x140AD59C0
#define __ScreenMode_x                                             0x140B5D454
#define __gWorld_x                                                 0x140C10918
#define __gpbCommandEvent_x                                        0x140C1034C
#define __ServerHost_x                                             0x140C10538
#define __Guilds_x                                                 0x140C145B0
#define __MouseEventTime_x                                         0x140C8AF50
#define DI8__MouseState_x                                          0x140C8F088
#define __heqmain_x                                                0x140C91520
#define DI8__Mouse_x                                               0x140C91538
#define __HWnd_x                                                   0x140C91540
#define __Mouse_x                                                  0x140C91548
#define DI8__Keyboard_x                                            0x140C91568
#define __LoginName_x                                              0x140C91C3C
#define __CurrentMapLabel_x                                        0x140CA52D0
#define __LabelCache_x                                             0x140CA5EA0
#define __ChatFilterDefs_x                                         0x14084BD70
#define Teleport_Table_Size_x                                      0x140C103D4
#define Teleport_Table_x                                           0x140C0DE90

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C10940
#define pinstActiveBanker_x                                        0x140C10870
#define pinstActiveCorpse_x                                        0x140C10860
#define pinstActiveGMaster_x                                       0x140C10868
#define pinstActiveMerchant_x                                      0x140C10858
#define pinstAltAdvManager_x                                       0x140B5E158
#define pinstCEverQuest_x                                          0x140C91FA8
#define pinstCamActor_x                                            0x140B5D440
#define pinstCDBStr_x                                              0x140B5CF10
#define pinstCDisplay_x                                            0x140C0FEB0
#define pinstControlledPlayer_x                                    0x140C10900
#define pinstCResolutionHandler_x                                  0x141316658
#define pinstCSidlManager_x                                        0x140CB71A0
#define pinstCXWndManager_x                                        0x140CB7198
#define instDynamicZone_x                                          0x140C14470 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C144BE
#define instExpeditionName_x                                       0x140C144FE
#define pinstDZMember_x                                            0x140C14588
#define pinstDZTimerInfo_x                                         0x140C14590
#define pinstEqLogin_x                                             0x140C91580
#define instTribute_x                                              0x140ACFD50
#define pinstEQSoundManager_x                                      0x140B5E4D8
#define pinstEQSpellStrings_x                                      0x140B41B20
#define pinstSGraphicsEngine_x                                     0x1413163D8
#define pinstLocalPC_x                                             0x140C0DE78
#define pinstLocalPlayer_x                                         0x140C10850
#define pinstCMercenaryClientManager_x                             0x140C8C808
#define pinstModelPlayer_x                                         0x140C10880
#define pinstRenderInterface_x                                     0x1413163F0
#define pinstSkillMgr_x                                            0x140C8E4A0
#define pinstSpawnManager_x                                        0x140C8CBC0
#define pinstSpellManager_x                                        0x140C8E508
#define pinstStringTable_x                                         0x140C0DE80
#define pinstSwitchManager_x                                       0x140C0DDF0
#define pinstTarget_x                                              0x140C108F8
#define pinstTaskMember_x                                          0x140ACFD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C10908
#define pinstTradeTarget_x                                         0x140C10878
#define instTributeActive_x                                        0x140ACFD79
#define pinstViewActor_x                                           0x140B5D438
#define pinstWorldData_x                                           0x140C0DE88
#define pinstPlayerPath_x                                          0x140C8CBE8
#define pinstTargetIndicator_x                                     0x140C8E5B8
#define EQObject_Top_x                                             0x140C10928

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140CA2430
#define pinstCContainerMgr_x                                       0x140B5D0B8
#define pinstCContextMenuManager_x                                 0x140CB6E80
#define pinstCInvSlotMgr_x                                         0x140B5D0B0
#define pinstCItemDisplayManager_x                                 0x140CA4EA0
#define pinstCPopupWndManager_x                                    0x140CA5730
#define pinstCSpellDisplayMgr_x                                    0x140CA5D80
#define pinstCTaskManager_x                                        0x140998C80
#define pinstEQSuiteTextureLoader_x                                0x140AE6530
#define pinstItemIconCache_x                                       0x140CA2790
#define pinstLootFiltersManager_x                                  0x140B5C958
#define pinstGFViewListener_x                                      0x140CB6658


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140237C20
#define __CastRay_x                                                0x14022FF80
#define __CastRay2_x                                               0x14022FC80
#define __ConvertItemTags_x                                        0x1402303E0
#define __CleanItemTags_x                                          0x1400879F0
#define __CreateCascadeMenuItems_x                                 0x140180B40
#define __DoesFileExist_x                                          0x140567F60
#define __EQGetTime_x                                              0x140564660
#define __ExecuteCmd_x                                             0x1402066B0
#define __FixHeading_x                                             0x14068F280
#define __FlushDxKeyboard_x                                        0x14032A7D0
#define __get_bearing_x                                            0x140239E10
#define __get_melee_range_x                                        0x140239F10
#define __GetAnimationCache_x                                      0x1403A7740
#define __GetGaugeValueFromEQ_x                                    0x1404DAE30
#define __GetLabelFromEQ_x                                         0x1404DC420
#define __GetXTargetType_x                                         0x140690560   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068F300
#define __HelpPath_x                                               0x140C8AE18   // Why?
#define __NewUIINI_x                                               0x1404E7950   // Why?
#define __ProcessGameEvents_x                                      0x14026C820
#define __ProcessKeyboardEvents_x                                  0x14032C030
#define __ProcessMouseEvents_x                                     0x14026DD40
#define __SaveColors_x                                             0x140190B00
#define __STMLToText_x                                             0x14056C8A0
#define __WndProc_x                                                0x140328F20
#define CMemoryMappedFile__SetFile_x                               0x1407C71D0
#define DrawNetStatus_x                                            0x1402B6D70
#define Util__FastTime_x                                           0x140563BF0
#define __eq_delete_x                                              0x1406966A4
#define __eq_new_x                                                 0x140696660
#define __CopyLayout_x                                             0x1402A4CD0
#define __ThrottleFrameRate_x                                      0x14025BF15
#define __ThrottleFrameRateEnd_x                                   0x14025BF75

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033B770
#define CAAWnd__Update_x                                           0x14033BA70
#define CAAWnd__UpdateSelected_x                                   0x14033CAB0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9C40
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2530
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140804928
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA530

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BC00
#define AltAdvManager__IsAbilityReady_x                            0x14019BE80
#define AltAdvManager__GetAAById_x                                 0x14019B4D0
#define AltAdvManager__CanTrainAbility_x                           0x14019B300
#define AltAdvManager__CanSeeAbility_x                             0x14019AFC0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0520
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1360
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D15B0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5830
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1F80
#define CharacterZoneClient__CastSpell_x                           0x1400D2020
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1360
#define CharacterZoneClient__Cur_HP_x                              0x1400E6F40
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7100
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4DB0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED660
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC2E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6210
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4D00
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF220
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE0F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D63E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6A70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8440
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE830
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6BB0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF4B0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6460
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0290
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6660
#define CharacterZoneClient__GetModCap_x                           0x1400F7AA0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D66F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6900
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB5B0
#define CharacterZoneClient__HasSkill_x                            0x1400F3280
#define CharacterZoneClient__HitBySpell_x                          0x1400D73B0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAB60
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7590
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3820  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F78D0
#define CharacterZoneClient__Max_Mana_x                            0x1402D3A40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D30
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDEF0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEBF0
#define CharacterZoneClient__TotalEffect_x                         0x1400DFF40
#define CharacterZoneClient__UseSkill_x                            0x1400FD230


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140359BF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140363F50

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035FDD0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035EE60

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366600

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14086CB60

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403892C0
#define CChatWindowManager__InitContextMenu_x                      0x140389450
#define CChatWindowManager__FreeChatWindow_x                       0x140388340
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391000
#define CChatWindowManager__CreateChatWindow_x                     0x140387C80

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401053E0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392040
#define CChatWindow__Clear_x                                       0x140392EE0
#define CChatWindow__WndNotification_x                             0x1403940A0
#define CChatWindow__AddHistory_x                                  0x1403929E0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A16B0
#define CContextMenu__RemoveMenuItem_x                             0x1405A1A90
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A1A60
#define CContextMenu__CheckMenuItem_x                              0x1405A18D0
#define CContextMenu__SetMenuItem_x                                0x1405A1AB0
#define CContextMenu__AddSeparator_x                               0x1405A1810

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405935D0
#define CContextMenuManager__RemoveMenu_x                          0x140593BB0
#define CContextMenuManager__PopupMenu_x                           0x1405938F0
#define CContextMenuManager__Flush_x                               0x140593650
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039F7C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140658530
#define CChatService__GetFriendName_x                              0x140658540

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405845F0
#define CComboWnd__Draw_x                                          0x1405846E0
#define CComboWnd__GetCurChoice_x                                  0x1405849B0  // unused
#define CComboWnd__GetListRect_x                                   0x140584A50
#define CComboWnd__InsertChoice_x                                  0x140584D70
#define CComboWnd__SetColors_x                                     0x140585100
#define CComboWnd__SetChoice_x                                     0x1405850C0
#define CComboWnd__GetItemCount_x                                  0x140584A40
#define CComboWnd__GetCurChoiceText_x                              0x1405849F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140584980
#define CComboWnd__InsertChoiceAtIndex_x                           0x140584E30

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039D540
#define CContainerWnd__SetContainer_x                              0x1403F2540
#define CContainerWnd__vftable_x                                   0x140838840

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5D1E4
#define CDisplay__ZoneMainUI_x                                     0x1405BB800
#define CDisplay__PreZoneMainUI_x                                  0x14018D9F0
#define CDisplay__CleanGameUI_x                                    0x14017FC20
#define CDisplay__GetClickedActor_x                                0x140183D90
#define CDisplay__GetUserDefinedColor_x                            0x140184A00
#define CDisplay__InitCharSelectUI_x                               0x140184CB0
#define CDisplay__ReloadUI_x                                       0x14018FCE0
#define CDisplay__WriteTextHD2_x                                   0x140196D50
#define CDisplay__TrueDistance_x                                   0x140196A00
#define CDisplay__SetViewActor_x                                   0x140193220
#define CDisplay__GetFloorHeight_x                                 0x140183FF0
#define CDisplay__ToggleScreenshotMode_x                           0x1401964F0
#define CDisplay__RealRender_World_x                               0x14018F0C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C59B0
#define CEditWnd__DrawCaret_x                                      0x1405B7520  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B79A0
#define CEditWnd__GetCaretPt_x                                     0x1405B7C10  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B7C50
#define CEditWnd__GetDisplayString_x                               0x1405B7EB0
#define CEditWnd__GetHorzOffset_x                                  0x1405B80E0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B8220
#define CEditWnd__GetSelStartPt_x                                  0x1405B8500  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B8350
#define CEditWnd__PointFromPrintableChar_x                         0x1405B9130
#define CEditWnd__ReplaceSelection_x                               0x1405B94D0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B9970
#define CEditWnd__SetEditable_x                                    0x1405B9BE0
#define CEditWnd__SetWindowText_x                                  0x1405B9C10

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D010
#define CEverQuest__ClickedPlayer_x                                0x140252B20
#define CEverQuest__CreateTargetIndicator_x                        0x1402533E0
#define CEverQuest__DoTellWindow_x                                 0x1401050F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401059B0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025EA40
#define CEverQuest__dsp_chat_x                                     0x140104B20 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140288CE0
#define CEverQuest__Emote_x                                        0x14025F420
#define CEverQuest__GetBodyTypeDesc_x                              0x1402601C0
#define CEverQuest__GetClassDesc_x                                 0x140260220
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402605F0
#define CEverQuest__GetDeityDesc_x                                 0x1402608A0
#define CEverQuest__GetLangDesc_x                                  0x140260CD0
#define CEverQuest__GetRaceDesc_x                                  0x140261070
#define CEverQuest__InterpretCmd_x                                 0x1402629A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140277A50
#define CEverQuest__LMouseUp_x                                     0x140264370
#define CEverQuest__RightClickedOnPlayer_x                         0x140275270
#define CEverQuest__RMouseUp_x                                     0x14026E8C0
#define CEverQuest__SetGameState_x                                 0x140279F90
#define CEverQuest__UPCNotificationFlush_x                         0x14027F790 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263FE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026FC70
#define CEverQuest__ReportSuccessfulHit_x                          0x140270A80

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B1B10

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C07F0
#define CGuild__GetGuildName_x                                     0x1400C0830

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D3FB0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029A7F0
#define CHotButton__SetCheck_x                                     0x14029AAC0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EB2E0
#define CInvSlotMgr__MoveItem_x                                    0x1403EB4C0
#define CInvSlotMgr__SelectSlot_x                                  0x1403ECE30

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E8500
#define CInvSlot__SliderComplete_x                                 0x1403E9A50
#define CInvSlot__GetItemBase_x                                    0x1403E4140
#define CInvSlot__UpdateItem_x                                     0x1403E9F10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EE1C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040F470
#define CItemDisplayWnd__UpdateStrings_x                           0x140411D90
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040BFA0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040D6F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040E8A0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D7960
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D9650

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140512BF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404086F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148240

// CLabel
#define CLabel__UpdateText_x                                       0x140419160

// CListWnd
#define CListWnd__CListWnd_x                                       0x140587F40
#define CListWnd__dCListWnd_x                                      0x140588380
#define CListWnd__vftable_x                                        0x14086AD28
#define CListWnd__AddColumn_x                                      0x140588A20
#define CListWnd__AddColumn1_x                                     0x140588AC0
#define CListWnd__AddLine_x                                        0x140588C20
#define CListWnd__AddString_x                                      0x1405891B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140589720
#define CListWnd__CalculateVSBRange_x                              0x140589A00
#define CListWnd__ClearSel_x                                       0x140589BA0
#define CListWnd__ClearAllSel_x                                    0x140589B40
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140589C00
#define CListWnd__Compare_x                                        0x140589DC0
#define CListWnd__Draw_x                                           0x14058A290
#define CListWnd__DrawColumnSeparators_x                           0x14058AE30
#define CListWnd__DrawHeader_x                                     0x14058AEF0
#define CListWnd__DrawItem_x                                       0x14058B5B0
#define CListWnd__DrawLine_x                                       0x14058BF20
#define CListWnd__DrawSeparator_x                                  0x14058C3E0
#define CListWnd__EnableLine_x                                     0x14058C800
#define CListWnd__EnsureVisible_x                                  0x14058C860
#define CListWnd__ExtendSel_x                                      0x14058C950
#define CListWnd__GetColumnMinWidth_x                              0x14058CC80
#define CListWnd__GetColumnWidth_x                                 0x14058CD00
#define CListWnd__GetCurSel_x                                      0x14058CE00
#define CListWnd__GetItemData_x                                    0x14058D180
#define CListWnd__GetItemHeight_x                                  0x14058D1C0
#define CListWnd__GetItemRect_x                                    0x14058D3E0
#define CListWnd__GetItemText_x                                    0x14058D680
#define CListWnd__GetSelList_x                                     0x14058D8D0
#define CListWnd__GetSeparatorRect_x                               0x14058DAC0
#define CListWnd__InsertLine_x                                     0x14058EF10
#define CListWnd__RemoveLine_x                                     0x14058F580
#define CListWnd__SetColors_x                                      0x14058F940
#define CListWnd__SetColumnJustification_x                         0x14058F960
#define CListWnd__SetColumnLabel_x                                 0x14058F9E0
#define CListWnd__SetColumnWidth_x                                 0x14058FB80
#define CListWnd__SetCurSel_x                                      0x14058FC50
#define CListWnd__SetItemColor_x                                   0x14058FEC0
#define CListWnd__SetItemData_x                                    0x14058FF60
#define CListWnd__SetItemText_x                                    0x1405901A0
#define CListWnd__Sort_x                                           0x1405905B0
#define CListWnd__ToggleSel_x                                      0x140590720
#define CListWnd__SetColumnsSizable_x                              0x14058FBD0
#define CListWnd__SetItemWnd_x                                     0x1405902D0
#define CListWnd__GetItemWnd_x                                     0x14058D860
#define CListWnd__SetItemIcon_x                                    0x14058FFA0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405894F0
#define CListWnd__SetVScrollPos_x                                  0x140590510

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042C460

// MapViewMap
#define MapViewMap__vftable_x                                      0x140845520
#define MapViewMap__Clear_x                                        0x14042DFE0
#define MapViewMap__SetZoom_x                                      0x140434630
#define MapViewMap__HandleLButtonDown_x                            0x140431170

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140455E10  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045C400
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045CBB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404603C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045F700
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140464670

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140635160
#define CPacketScrambler__hton_x                                   0x140635150

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B0DF0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B0D30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B1420
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B11D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B0130
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B00C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AF720

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CA990
#define CSidlManager__CreateXWnd_x                                 0x1404CAB50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140575D30
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140575C00
#define CSidlScreenWnd__ConvertToRes_x                             0x1405BFF70 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140575EA0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140575350
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140575420
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140575630
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140576540
#define CSidlScreenWnd__EnableIniStorage_x                         0x140576770
#define CSidlScreenWnd__GetChildItem_x                             0x140576910
#define CSidlScreenWnd__GetSidlPiece_x                             0x140576B60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140580BC0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140576ED0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140577240
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140577B00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405783F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB64F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140578A40
#define CSidlScreenWnd__StoreIniVis_x                              0x140579230
#define CSidlScreenWnd__vftable_x                                  0x140869FC8
#define CSidlScreenWnd__WndNotification_x                          0x140579280

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140313DD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314270 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403141A0
#define CSkillMgr__IsActivatedSkill_x                              0x140314620
#define CSkillMgr__IsCombatSkill_x                                 0x140314660

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DAD50
#define CSliderWnd__SetValue_x                                     0x140591890
#define CSliderWnd__SetNumTicks_x                                  0x140591710

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D0FD0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140596030
#define CStmlWnd__CalculateHSBRange_x                              0x140580580
#define CStmlWnd__CalculateVSBRange_x                              0x140596ED0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405979B0
#define CStmlWnd__ForceParseNow_x                                  0x140597A50
#define CStmlWnd__GetVisibleText_x                                 0x140598110
#define CStmlWnd__MakeStmlColorTag_x                               0x140599E60
#define CStmlWnd__MakeWndNotificationTag_x                         0x140599EA0
#define CStmlWnd__SetSTMLText_x                                    0x1405A0E60
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A1010
#define CStmlWnd__UpdateHistoryString_x                            0x1405A13A0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140591C60
#define CTabWnd__DrawCurrentPage_x                                 0x140591D00
#define CTabWnd__DrawTab_x                                         0x1405920D0
#define CTabWnd__GetTabRect_x                                      0x140592740
#define CTabWnd__InsertPage_x                                      0x140592A10
#define CTabWnd__RemovePage_x                                      0x140592CA0
#define CTabWnd__SetPage_x                                         0x140592E00
#define CTabWnd__UpdatePage_x                                      0x140593100

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BA070
#define CPageWnd__SetTabText_x                                     0x1405BA0E0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9F40  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA350


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A8800
#define CTextureFont__DrawWrappedText1_x                           0x1405A8710
#define CTextureFont__DrawWrappedText2_x                           0x1405A8930
#define CTextureFont__GetTextExtent_x                              0x1405A8CE0
#define CTextureFont__GetHeight_x                                  0x1405A8CA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BE6D0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140574F30

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE5EA0
#define CXStr__gCXStrAccess_x                                      0x140CB62F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057BCA0
#define CXWnd__ClrFocus_x                                          0x14057BEE0
#define CXWnd__Destroy_x                                           0x14057C060
#define CXWnd__DoAllDrawing_x                                      0x14057C170
#define CXWnd__DrawColoredRect_x                                   0x14057C940
#define CXWnd__DrawTooltip_x                                       0x14057DFB0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057E060
#define CXWnd__GetChildItem_x                                      0x14057E960
#define CXWnd__GetChildWndAt_x                                     0x14057EA20
#define CXWnd__GetClientRect_x                                     0x14057ECD0
#define CXWnd__GetClientClipRect_x                                 0x14057EB80
#define CXWnd__GetRelativeRect_x                                   0x1405806C0
#define CXWnd__GetScreenClipRect_x                                 0x1405807D0
#define CXWnd__GetScreenRect_x                                     0x140580940
#define CXWnd__GetTooltipRect_x                                    0x140580AC0
#define CXWnd__IsActive_x                                          0x140581080
#define CXWnd__IsDescendantOf_x                                    0x1405810B0
#define CXWnd__IsReallyVisible_x                                   0x140581120
#define CXWnd__IsType_x                                            0x140581160
#define CXWnd__Minimize_x                                          0x140581260
#define CXWnd__ProcessTransition_x                                 0x140582130
#define CXWnd__Resize_x                                            0x140582250
#define CXWnd__Right_x                                             0x1405822F0
#define CXWnd__SetFocus_x                                          0x1405826A0
#define CXWnd__SetFont_x                                           0x1405826F0
#define CXWnd__SetKeyTooltip_x                                     0x1405827F0
#define CXWnd__SetMouseOver_x                                      0x140582930
#define CXWnd__SetParent_x                                         0x1405829B0
#define CXWnd__StartFade_x                                         0x140582DE0
#define CXWnd__vftable_x                                           0x14086A5A8
#define CXWnd__CXWnd_x                                             0x14057A840
#define CXWnd__dCXWnd_x                                            0x14057B190

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C5130

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A2C60
#define CXWndManager__DrawCursor_x                                 0x1405A2F40
#define CXWndManager__DrawWindows_x                                0x1405A31A0
#define CXWndManager__GetKeyboardFlags_x                           0x1405A3870
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A38B0
#define CXWndManager__RemoveWnd_x                                  0x1405A6ED0

// CDBStr
#define CDBStr__GetString_x                                        0x14017DD90

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063E2A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE200
#define CCharacterListWnd__EnterWorld_x                            0x1400CCF00
#define CCharacterListWnd__Quit_x                                  0x1400CE1E0
#define CCharacterListWnd__UpdateList_x                            0x1400CEEF0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060D550
#define ItemBase__CreateItemTagString_x                            0x14060DFA0
#define ItemBase__GetImageNum_x                                    0x140610560
#define ItemBase__GetItemValue_x                                   0x140612000
#define ItemBase__IsEmpty_x                                        0x140613C00
#define ItemBase__IsKeyRingItem_x                                  0x140614330
#define ItemBase__ValueSellMerchant_x                              0x1406184D0
#define ItemClient__CanDrop_x                                      0x14029CDA0
#define ItemClient__CanGoInBag_x                                   0x14029CED0
#define ItemClient__CreateItemClient_x                             0x14029D1B0
#define ItemClient__dItemClient_x                                  0x14029CC10

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D3A0
#define EQ_LoadingS__Array_x                                       0x140AD2230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406245E0
#define PcBase__GetCombatAbility_x                                 0x140624C80
#define PcBase__GetCombatAbilityTimer_x                            0x140624D20
#define PcBase__GetItemContainedRealEstateIds_x                    0x140625470
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140625F30
#define PcClient__AlertInventoryChanged_x                          0x1402BF350
#define PcClient__GetConLevel_x                                    0x1402BF970  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2070
#define PcClient__HasLoreItem_x                                    0x1402C3050
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D0880
#define PcZoneClient__RemoveMyAffect_x                             0x1402D48F0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AD70  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AF20  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B080  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020AFC0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402443E0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401785D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140681F60
#define PlayerBase__CanSee1_x                                      0x140682030
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406824F0
#define PlayerBase__HasProperty_x                                  0x140682720
#define PlayerBase__IsTargetable_x                                 0x1406827E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E13C0
#define PlayerClient__GetPcClient_x                                0x1402E3BF0
#define PlayerClient__PlayerClient_x                               0x1402DA690
#define PlayerClient__SetNameSpriteState_x                         0x1402E70C0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8080
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6520
#define PlayerZoneClient__DoAttack_x                               0x1402F7230
#define PlayerZoneClient__GetLevel_x                               0x1402FA960
#define PlayerZoneClient__IsValidTeleport_x                        0x140247170
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C270

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EFE40  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EFEF0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EFFF0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EF910
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140681B20

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A21F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A1DF0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A1E60
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2180  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2310
#define KeypressHandler__HandleKeyUp_x                             0x1402A2410
#define KeypressHandler__SaveKeymapping_x                          0x1402A2090  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063BDE0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140636890

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C95A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CE8C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D0F70
#define PcZoneClient__RemovePetEffect_x                            0x1402D49F0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D1C40
#define PcZoneClient__CanEquipItem_x                               0x1402CCBE0
#define PcZoneClient__GetItemByID_x                                0x1402CF950
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4770
#define PcZoneClient__BandolierSwap_x                              0x1402CBBC0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402D0EC0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024BCA0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A7770

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039C2F0
#define CContainerMgr__CloseContainer_x                            0x14039BC30
#define CContainerMgr__OpenExperimentContainer_x                   0x14039C670

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048F680

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140294FE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140420450
#define CLootWnd__RequestLootSlot_x                                0x140421480

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC680
#define EQ_Spell__SpellAffects_x                                   0x1401CD940
#define EQ_Spell__SpellAffectBase_x                                0x1401CD8A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6AD0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6A80
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD560
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD120
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC9F0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF430

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EB090
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EA7A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E9FD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F2750  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174E50
#define CTaskManager__GetTaskStatus_x                              0x140174F60
#define CTaskManager__GetElementDescription_x                      0x140174AE0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA9F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9830
#define EqSoundManager__SoundAssistPlay_x                          0x140319420  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319760  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140583B80
#define CTextureAnimation__SetCurCell_x                            0x140583E90

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293240

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140655F00
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140655F80
#define CharacterBase__IsExpansionFlag_x                           0x1401ECF10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037A770
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B0E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037C630

// messages
#define msg_spell_worn_off_x                                       0x140201700
#define msg_new_text_x                                             0x1401FCF40
#define __msgTokenTextParam_x                                      0x1401F4BC0
#define msgTokenText_x                                             0x1401F4AE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031AE10
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031AD30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140690940

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404198B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A0EA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A3E10
#define CCursorAttachment__RemoveAttachment_x                      0x1403A40C0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BCB70
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BCD60
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BCD70

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401434E0
#define CFindItemWnd__Update_x                                     0x140143E80
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D9B0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CD20
#define LootFiltersManager__GetItemFilterData_x                    0x14014D830
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E0D0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E380

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140472500

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140695EF0
#define CResolutionHandler__GetWindowedStyle_x                     0x140313930

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398630

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140659FF0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140659EE0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BD170
#define CGroupWnd__UpdateDisplay_x                                 0x1403BCD50

// ItemBase
#define ItemBase__IsLore_x                                         0x140614400
#define ItemBase__IsLoreEquipped_x                                 0x140614490

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4F80

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244540
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402444D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244510

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DF10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D880
#define FactionManagerClient__HandleFactionMessage_x               0x14011DC30
#define FactionManagerClient__GetFactionStanding_x                 0x14011D050
#define FactionManagerClient__GetMaxFaction_x                      0x14011D050
#define FactionManagerClient__GetMinFaction_x                      0x14011CF00

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC0E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129020

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5CF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5070
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5B10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5A90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031FF30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DF10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B110

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140579870

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084BB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403316C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C0C0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063EE20
#define FreeToPlayClient__RestrictionInfo_x                        0x14087C5B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
