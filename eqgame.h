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

#define __ClientDate                                               20240201u
#define __ExpectedVersionDate                                     "Feb  1 2024"
#define __ExpectedVersionTime                                     "12:35:06"
#define __ActualVersionDate_x                                      0x140829478
#define __ActualVersionTime_x                                      0x140829468
#define __ActualVersionBuild_x                                     0x14081DCF0

// Memory Protection
#define __MemChecker0_x                                            0x1402A88C0
#define __MemChecker1_x                                            0x1405643C0
#define __MemChecker4_x                                            0x140277360
#define __EncryptPad0_x                                            0x140ADCE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C15A00
#define instEQZoneInfo_x                                           0x140C15BF4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020ECC0
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
#define __allowslashcommand_x                                      0x140237B90
#define __CastRay_x                                                0x14022FEF0
#define __CastRay2_x                                               0x14022FBF0
#define __ConvertItemTags_x                                        0x140230350
#define __CleanItemTags_x                                          0x1400879F0
#define __CreateCascadeMenuItems_x                                 0x140180B80
#define __DoesFileExist_x                                          0x140568270
#define __EQGetTime_x                                              0x140564970
#define __ExecuteCmd_x                                             0x140206620
#define __FixHeading_x                                             0x14068F4F0
#define __FlushDxKeyboard_x                                        0x14032A8A0
#define __get_bearing_x                                            0x140239D80
#define __get_melee_range_x                                        0x140239E80
#define __GetAnimationCache_x                                      0x1403A7910
#define __GetGaugeValueFromEQ_x                                    0x1404DB0E0
#define __GetLabelFromEQ_x                                         0x1404DC6E0
#define __GetXTargetType_x                                         0x1406907D0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068F570
#define __HelpPath_x                                               0x140C8AE18   // Why?
#define __NewUIINI_x                                               0x1404E7C40   // Why?
#define __ProcessGameEvents_x                                      0x14026C7A0
#define __ProcessKeyboardEvents_x                                  0x14032C100
#define __ProcessMouseEvents_x                                     0x14026DCD0
#define __SaveColors_x                                             0x140190B40
#define __STMLToText_x                                             0x14056CBB0
#define __WndProc_x                                                0x140328FF0
#define CMemoryMappedFile__SetFile_x                               0x1407C7430
#define DrawNetStatus_x                                            0x1402B6D40
#define Util__FastTime_x                                           0x140563F00
#define __eq_delete_x                                              0x140696914
#define __eq_new_x                                                 0x1406968D0
#define __CopyLayout_x                                             0x1402A4D00
#define __ThrottleFrameRate_x                                      0x14025BE95
#define __ThrottleFrameRateEnd_x                                   0x14025BEF5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033B830
#define CAAWnd__Update_x                                           0x14033BB30
#define CAAWnd__UpdateSelected_x                                   0x14033CB70

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9C50
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2540
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140804928
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA540

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BC50
#define AltAdvManager__IsAbilityReady_x                            0x14019BED0
#define AltAdvManager__GetAAById_x                                 0x14019B520
#define AltAdvManager__CanTrainAbility_x                           0x14019B350
#define AltAdvManager__CanSeeAbility_x                             0x14019B010

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D04B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D12F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1540
#define CharacterZoneClient__CanUseItem_x                          0x1400E57D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1F10
#define CharacterZoneClient__CastSpell_x                           0x1400D1FB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1300
#define CharacterZoneClient__Cur_HP_x                              0x1400E6EE0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E70A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4D40
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED600
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC280  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D61A0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4CA0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF1C0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE090
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6370
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6A00
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C83D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE7D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6B50
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF450
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D63F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0230
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D65F0
#define CharacterZoneClient__GetModCap_x                           0x1400F7A40
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6680
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6890
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB540
#define CharacterZoneClient__HasSkill_x                            0x1400F3220
#define CharacterZoneClient__HitBySpell_x                          0x1400D7340
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAAF0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7530
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3820  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7870
#define CharacterZoneClient__Max_Mana_x                            0x1402D3A40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7CD0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDE90
#define CharacterZoneClient__SpellDuration_x                       0x1400DEB90
#define CharacterZoneClient__TotalEffect_x                         0x1400DFEE0
#define CharacterZoneClient__UseSkill_x                            0x1400FD1D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140359CE0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140364030

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035FEC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035EF50

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403666E0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14086CB60

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389450
#define CChatWindowManager__InitContextMenu_x                      0x1403895E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403884D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391190
#define CChatWindowManager__CreateChatWindow_x                     0x140387E10

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401053B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403921D0
#define CChatWindow__Clear_x                                       0x140393070
#define CChatWindow__WndNotification_x                             0x140394240
#define CChatWindow__AddHistory_x                                  0x140392B70

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A1A50
#define CContextMenu__RemoveMenuItem_x                             0x1405A1E40
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A1E10
#define CContextMenu__CheckMenuItem_x                              0x1405A1C80
#define CContextMenu__SetMenuItem_x                                0x1405A1E60
#define CContextMenu__AddSeparator_x                               0x1405A1BC0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140593950
#define CContextMenuManager__RemoveMenu_x                          0x140593F30
#define CContextMenuManager__PopupMenu_x                           0x140593C70
#define CContextMenuManager__Flush_x                               0x1405939D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039F970

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140658960
#define CChatService__GetFriendName_x                              0x140658970

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140584910
#define CComboWnd__Draw_x                                          0x140584A10
#define CComboWnd__GetCurChoice_x                                  0x140584CF0  // unused
#define CComboWnd__GetListRect_x                                   0x140584D90
#define CComboWnd__InsertChoice_x                                  0x1405850D0
#define CComboWnd__SetColors_x                                     0x140585460
#define CComboWnd__SetChoice_x                                     0x140585420
#define CComboWnd__GetItemCount_x                                  0x140584D80
#define CComboWnd__GetCurChoiceText_x                              0x140584D30  // unused
#define CComboWnd__GetChoiceText_x                                 0x140584CC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585190

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039D6F0
#define CContainerWnd__SetContainer_x                              0x1403F27E0
#define CContainerWnd__vftable_x                                   0x140838840

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5D1E4
#define CDisplay__ZoneMainUI_x                                     0x1405BBC20
#define CDisplay__PreZoneMainUI_x                                  0x14018DA30
#define CDisplay__CleanGameUI_x                                    0x14017FC60
#define CDisplay__GetClickedActor_x                                0x140183DD0
#define CDisplay__GetUserDefinedColor_x                            0x140184A40
#define CDisplay__InitCharSelectUI_x                               0x140184CF0
#define CDisplay__ReloadUI_x                                       0x14018FD20
#define CDisplay__WriteTextHD2_x                                   0x140196D90
#define CDisplay__TrueDistance_x                                   0x140196A40
#define CDisplay__SetViewActor_x                                   0x140193260
#define CDisplay__GetFloorHeight_x                                 0x140184030
#define CDisplay__ToggleScreenshotMode_x                           0x140196530
#define CDisplay__RealRender_World_x                               0x14018F100

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C5DC0
#define CEditWnd__DrawCaret_x                                      0x1405B78F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B7DA0
#define CEditWnd__GetCaretPt_x                                     0x1405B8020  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8060
#define CEditWnd__GetDisplayString_x                               0x1405B82D0
#define CEditWnd__GetHorzOffset_x                                  0x1405B8510
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B8660
#define CEditWnd__GetSelStartPt_x                                  0x1405B8940  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B8790
#define CEditWnd__PointFromPrintableChar_x                         0x1405B9570
#define CEditWnd__ReplaceSelection_x                               0x1405B9920
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B9DC0
#define CEditWnd__SetEditable_x                                    0x1405BA050
#define CEditWnd__SetWindowText_x                                  0x1405BA080

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025CF90
#define CEverQuest__ClickedPlayer_x                                0x140252AA0
#define CEverQuest__CreateTargetIndicator_x                        0x140253360
#define CEverQuest__DoTellWindow_x                                 0x1401050C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105980 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025E9C0
#define CEverQuest__dsp_chat_x                                     0x140104AF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140288C70
#define CEverQuest__Emote_x                                        0x14025F3A0
#define CEverQuest__GetBodyTypeDesc_x                              0x140260140
#define CEverQuest__GetClassDesc_x                                 0x1402601A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260570
#define CEverQuest__GetDeityDesc_x                                 0x140260820
#define CEverQuest__GetLangDesc_x                                  0x140260C50
#define CEverQuest__GetRaceDesc_x                                  0x140260FF0
#define CEverQuest__InterpretCmd_x                                 0x140262920
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402779E0
#define CEverQuest__LMouseUp_x                                     0x1402642F0
#define CEverQuest__RightClickedOnPlayer_x                         0x140275200
#define CEverQuest__RMouseUp_x                                     0x14026E850
#define CEverQuest__SetGameState_x                                 0x140279F20
#define CEverQuest__UPCNotificationFlush_x                         0x14027F720 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263F60
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026FC00
#define CEverQuest__ReportSuccessfulHit_x                          0x140270A10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B1CA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C07A0
#define CGuild__GetGuildName_x                                     0x1400C07E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D41D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029A7B0
#define CHotButton__SetCheck_x                                     0x14029AA80

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EB520
#define CInvSlotMgr__MoveItem_x                                    0x1403EB700
#define CInvSlotMgr__SelectSlot_x                                  0x1403ED0B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E8710
#define CInvSlot__SliderComplete_x                                 0x1403E9C60
#define CInvSlot__GetItemBase_x                                    0x1403E4340
#define CInvSlot__UpdateItem_x                                     0x1403EA120

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EE440

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040F670
#define CItemDisplayWnd__UpdateStrings_x                           0x140411FC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040C160
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040D8C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040EA80

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D7C10
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D9900

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140512F00

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404088A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148230

// CLabel
#define CLabel__UpdateText_x                                       0x140419390

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405882A0
#define CListWnd__dCListWnd_x                                      0x1405886F0
#define CListWnd__vftable_x                                        0x14086AD28
#define CListWnd__AddColumn_x                                      0x140588D90
#define CListWnd__AddColumn1_x                                     0x140588E30
#define CListWnd__AddLine_x                                        0x140588F90
#define CListWnd__AddString_x                                      0x140589520
#define CListWnd__CalculateFirstVisibleLine_x                      0x140589A90
#define CListWnd__CalculateVSBRange_x                              0x140589D70
#define CListWnd__ClearSel_x                                       0x140589F10
#define CListWnd__ClearAllSel_x                                    0x140589EB0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140589F70
#define CListWnd__Compare_x                                        0x14058A130
#define CListWnd__Draw_x                                           0x14058A600
#define CListWnd__DrawColumnSeparators_x                           0x14058B1B0
#define CListWnd__DrawHeader_x                                     0x14058B270
#define CListWnd__DrawItem_x                                       0x14058B950
#define CListWnd__DrawLine_x                                       0x14058C2D0
#define CListWnd__DrawSeparator_x                                  0x14058C790
#define CListWnd__EnableLine_x                                     0x14058CBB0
#define CListWnd__EnsureVisible_x                                  0x14058CC10
#define CListWnd__ExtendSel_x                                      0x14058CD00
#define CListWnd__GetColumnMinWidth_x                              0x14058D030
#define CListWnd__GetColumnWidth_x                                 0x14058D0B0
#define CListWnd__GetCurSel_x                                      0x14058D1B0
#define CListWnd__GetItemData_x                                    0x14058D530
#define CListWnd__GetItemHeight_x                                  0x14058D570
#define CListWnd__GetItemRect_x                                    0x14058D790
#define CListWnd__GetItemText_x                                    0x14058DA30
#define CListWnd__GetSelList_x                                     0x14058DC80
#define CListWnd__GetSeparatorRect_x                               0x14058DE70
#define CListWnd__InsertLine_x                                     0x14058F2D0
#define CListWnd__RemoveLine_x                                     0x14058F940
#define CListWnd__SetColors_x                                      0x14058FD00
#define CListWnd__SetColumnJustification_x                         0x14058FD20
#define CListWnd__SetColumnLabel_x                                 0x14058FDA0
#define CListWnd__SetColumnWidth_x                                 0x14058FF40
#define CListWnd__SetCurSel_x                                      0x140590010
#define CListWnd__SetItemColor_x                                   0x140590280
#define CListWnd__SetItemData_x                                    0x140590320
#define CListWnd__SetItemText_x                                    0x140590560
#define CListWnd__Sort_x                                           0x140590970
#define CListWnd__ToggleSel_x                                      0x140590AE0
#define CListWnd__SetColumnsSizable_x                              0x14058FF90
#define CListWnd__SetItemWnd_x                                     0x140590690
#define CListWnd__GetItemWnd_x                                     0x14058DC10
#define CListWnd__SetItemIcon_x                                    0x140590360
#define CListWnd__CalculateCustomWindowPositions_x                 0x140589860
#define CListWnd__SetVScrollPos_x                                  0x1405908D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042C680

// MapViewMap
#define MapViewMap__vftable_x                                      0x140845520
#define MapViewMap__Clear_x                                        0x14042E200
#define MapViewMap__SetZoom_x                                      0x140434850
#define MapViewMap__HandleLButtonDown_x                            0x140431390

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456030  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045C620
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045CDD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404605E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045F930
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140464880

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140635580
#define CPacketScrambler__hton_x                                   0x140635570

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B11E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1120
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B1810
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B15C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B0520
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B04B0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AFAF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CAC40
#define CSidlManager__CreateXWnd_x                                 0x1404CAE00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576040
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140575F10
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C0380 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405761B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140575660
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140575730
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140575940
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140576850
#define CSidlScreenWnd__EnableIniStorage_x                         0x140576A80
#define CSidlScreenWnd__GetChildItem_x                             0x140576C20
#define CSidlScreenWnd__GetSidlPiece_x                             0x140576E70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140580E80 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405771E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140577520
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140577DF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405786E0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB64F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140578D20
#define CSidlScreenWnd__StoreIniVis_x                              0x140579520
#define CSidlScreenWnd__vftable_x                                  0x140869FC8
#define CSidlScreenWnd__WndNotification_x                          0x140579570

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140313EA0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314340 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314270
#define CSkillMgr__IsActivatedSkill_x                              0x1403146F0
#define CSkillMgr__IsCombatSkill_x                                 0x140314730
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314660
#define CSkillMgr__GetSkillLastUsed_x                              0x1403142C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404E6330
#define CSliderWnd__SetValue_x                                     0x140591C30
#define CSliderWnd__SetNumTicks_x                                  0x140591AB0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D1280

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405963B0
#define CStmlWnd__CalculateHSBRange_x                              0x140580840
#define CStmlWnd__CalculateVSBRange_x                              0x140597250
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140597D30
#define CStmlWnd__ForceParseNow_x                                  0x140597DD0
#define CStmlWnd__GetVisibleText_x                                 0x140598490
#define CStmlWnd__MakeStmlColorTag_x                               0x14059A1E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059A220
#define CStmlWnd__SetSTMLText_x                                    0x1405A11F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A13A0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A1730

// CTabWnd
#define CTabWnd__Draw_x                                            0x140591FE0
#define CTabWnd__DrawCurrentPage_x                                 0x140592080
#define CTabWnd__DrawTab_x                                         0x140592450
#define CTabWnd__GetTabRect_x                                      0x140592AC0
#define CTabWnd__InsertPage_x                                      0x140592D90
#define CTabWnd__RemovePage_x                                      0x140593020
#define CTabWnd__SetPage_x                                         0x140593180
#define CTabWnd__UpdatePage_x                                      0x140593480

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BA4B0
#define CPageWnd__SetTabText_x                                     0x1405BA520

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9EF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA300


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A8BA0
#define CTextureFont__DrawWrappedText1_x                           0x1405A8AB0
#define CTextureFont__DrawWrappedText2_x                           0x1405A8CD0
#define CTextureFont__GetTextExtent_x                              0x1405A9080
#define CTextureFont__GetHeight_x                                  0x1405A9040

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BEAE0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575240

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE5EA0
#define CXStr__gCXStrAccess_x                                      0x140CB62F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057BF40
#define CXWnd__ClrFocus_x                                          0x14057C180
#define CXWnd__Destroy_x                                           0x14057C300
#define CXWnd__DoAllDrawing_x                                      0x14057C400
#define CXWnd__DrawColoredRect_x                                   0x14057CBD0
#define CXWnd__DrawTooltip_x                                       0x14057E260
#define CXWnd__DrawTooltipAtPoint_x                                0x14057E310
#define CXWnd__GetChildItem_x                                      0x14057EC20
#define CXWnd__GetChildWndAt_x                                     0x14057ECE0
#define CXWnd__GetClientRect_x                                     0x14057EF90
#define CXWnd__GetClientClipRect_x                                 0x14057EE50
#define CXWnd__GetRelativeRect_x                                   0x140580970
#define CXWnd__GetScreenClipRect_x                                 0x140580A80
#define CXWnd__GetScreenRect_x                                     0x140580C00
#define CXWnd__GetTooltipRect_x                                    0x140580D80
#define CXWnd__IsActive_x                                          0x140581340
#define CXWnd__IsDescendantOf_x                                    0x140581370
#define CXWnd__IsReallyVisible_x                                   0x1405813E0
#define CXWnd__IsType_x                                            0x140581420
#define CXWnd__Minimize_x                                          0x140581510
#define CXWnd__ProcessTransition_x                                 0x140582420
#define CXWnd__Resize_x                                            0x140582540
#define CXWnd__Right_x                                             0x1405825E0
#define CXWnd__SetFocus_x                                          0x1405829A0
#define CXWnd__SetFont_x                                           0x1405829F0
#define CXWnd__SetKeyTooltip_x                                     0x140582B00
#define CXWnd__SetMouseOver_x                                      0x140582C40
#define CXWnd__SetParent_x                                         0x140582CC0
#define CXWnd__StartFade_x                                         0x140583100
#define CXWnd__vftable_x                                           0x14086A5A8
#define CXWnd__CXWnd_x                                             0x14057AB30
#define CXWnd__dCXWnd_x                                            0x14057B450

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C5540

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3010
#define CXWndManager__DrawCursor_x                                 0x1405A32F0
#define CXWndManager__DrawWindows_x                                0x1405A3550
#define CXWndManager__GetKeyboardFlags_x                           0x1405A3C20
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A3C60
#define CXWndManager__RemoveWnd_x                                  0x1405A7270

// CDBStr
#define CDBStr__GetString_x                                        0x14017DDD0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063E6D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE190
#define CCharacterListWnd__EnterWorld_x                            0x1400CCE90
#define CCharacterListWnd__Quit_x                                  0x1400CE170
#define CCharacterListWnd__UpdateList_x                            0x1400CEE80

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060D910
#define ItemBase__CreateItemTagString_x                            0x14060E370
#define ItemBase__GetImageNum_x                                    0x140610920
#define ItemBase__GetItemValue_x                                   0x140612470
#define ItemBase__IsEmpty_x                                        0x140613FF0
#define ItemBase__IsKeyRingItem_x                                  0x140614700
#define ItemBase__ValueSellMerchant_x                              0x1406188B0
#define ItemClient__CanDrop_x                                      0x14029CDB0
#define ItemClient__CanGoInBag_x                                   0x14029CEE0
#define ItemClient__CreateItemClient_x                             0x14029D1C0
#define ItemClient__dItemClient_x                                  0x14029CC20

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D3F0
#define EQ_LoadingS__Array_x                                       0x140AD2230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140624A00
#define PcBase__GetCombatAbility_x                                 0x1406250A0
#define PcBase__GetCombatAbilityTimer_x                            0x140625140
#define PcBase__GetItemContainedRealEstateIds_x                    0x140625890
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140626350
#define PcClient__AlertInventoryChanged_x                          0x1402BF310
#define PcClient__GetConLevel_x                                    0x1402BF930  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2030
#define PcClient__HasLoreItem_x                                    0x1402C3000
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D0850
#define PcZoneClient__RemoveMyAffect_x                             0x1402D48F0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020ACE0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AE90  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020AFF0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020AF30  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244360  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178600

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140682390
#define PlayerBase__CanSee1_x                                      0x140682460
#define PlayerBase__GetVisibilityLineSegment_x                     0x140682920
#define PlayerBase__HasProperty_x                                  0x140682B50
#define PlayerBase__IsTargetable_x                                 0x140682C10
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E13B0
#define PlayerClient__GetPcClient_x                                0x1402E3BE0
#define PlayerClient__PlayerClient_x                               0x1402DA680
#define PlayerClient__SetNameSpriteState_x                         0x1402E70B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8070
#define PlayerZoneClient__ChangeHeight_x                           0x1402F65F0
#define PlayerZoneClient__DoAttack_x                               0x1402F7300
#define PlayerZoneClient__GetLevel_x                               0x1402FAA30
#define PlayerZoneClient__IsValidTeleport_x                        0x1402470F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C2B0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EFF10  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EFFC0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F00C0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EF9E0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140681F50

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2220
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A1E20
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A1E90
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A21B0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2340
#define KeypressHandler__HandleKeyUp_x                             0x1402A2440
#define KeypressHandler__SaveKeymapping_x                          0x1402A20C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063C210  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140636CB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9560  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CE880
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D0F50
#define PcZoneClient__RemovePetEffect_x                            0x1402D49F0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D1C40
#define PcZoneClient__CanEquipItem_x                               0x1402CCBA0
#define PcZoneClient__GetItemByID_x                                0x1402CF920
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4770
#define PcZoneClient__BandolierSwap_x                              0x1402CBB80
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402D0EA0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024BC20

// IconCache
#define IconCache__GetIcon_x                                       0x1403A7940

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039C4A0
#define CContainerMgr__CloseContainer_x                            0x14039BDE0
#define CContainerMgr__OpenExperimentContainer_x                   0x14039C820

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048F8C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140294F70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140420680
#define CLootWnd__RequestLootSlot_x                                0x1404216C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC6D0
#define EQ_Spell__SpellAffects_x                                   0x1401CD990
#define EQ_Spell__SpellAffectBase_x                                0x1401CD8F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6A60
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6A10
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD5B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD170
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCA40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF3E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EB380
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EAA90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EA2C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F2A40  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174E60
#define CTaskManager__GetTaskStatus_x                              0x140174F70
#define CTaskManager__GetElementDescription_x                      0x140174AF0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAA40
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9880
#define EqSoundManager__SoundAssistPlay_x                          0x1403194F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319830  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140583EC0
#define CTextureAnimation__SetCurCell_x                            0x1405841D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402931D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140656330
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406563B0
#define CharacterBase__IsExpansionFlag_x                           0x1401ECE80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037A8F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B260
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037C7B0

// messages
#define msg_spell_worn_off_x                                       0x140201670
#define msg_new_text_x                                             0x1401FCEB0
#define __msgTokenTextParam_x                                      0x1401F4B20
#define msgTokenText_x                                             0x1401F4A40

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031AEE0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031AE00

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140690BB0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140419AE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1050
#define CCursorAttachment__IsOkToActivate_x                        0x1403A3FC0
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4270
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BCF80
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BD170
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BD180

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401434A0
#define CFindItemWnd__Update_x                                     0x140143E40
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D960

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CD10
#define LootFiltersManager__GetItemFilterData_x                    0x14014D820
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E0C0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E370

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140472720

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140696160
#define CResolutionHandler__GetWindowedStyle_x                     0x140313A00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403987D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065A420  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065A310  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BD380
#define CGroupWnd__UpdateDisplay_x                                 0x1403BCF60

// ItemBase
#define ItemBase__IsLore_x                                         0x1406147D0
#define ItemBase__IsLoreEquipped_x                                 0x140614860

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4F50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402444C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244450
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244490

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DFE0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D830
#define FactionManagerClient__HandleFactionMessage_x               0x14011DBE0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D000
#define FactionManagerClient__GetMaxFaction_x                      0x14011D000
#define FactionManagerClient__GetMinFaction_x                      0x14011CEB0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC0F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128FD0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5D40
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A50C0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5B60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5AE0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320000

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DFE0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B080

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140579B60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084BB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331790

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C0C0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063F250
#define FreeToPlayClient__RestrictionInfo_x                        0x14087C5B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
