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

#define __ClientDate                                               20240912u
#define __ExpectedVersionDate                                     "Sep 12 2024"
#define __ExpectedVersionTime                                     "13:23:13"
#define __ActualVersionDate_x                                      0x140946C40
#define __ActualVersionTime_x                                      0x140946C30
#define __ActualVersionBuild_x                                     0x1408DD620

// Memory Protection
#define __MemChecker0_x                                            0x1402B1360
#define __MemChecker1_x                                            0x14056DAB0
#define __MemChecker4_x                                            0x14027FC90
#define __EncryptPad0_x                                            0x140D13E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4CAA0
#define instEQZoneInfo_x                                           0x140E4CC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216850
#define __gfMaxZoomCameraDistance_x                                0x1408DE898
#define __gfMaxCameraDistance_x                                    0x140A833D8
#define __CurrentSocial_x                                          0x140BCF940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0B720
#define g_eqCommandStates_x                                        0x140D0C790
#define __CommandList_x                                            0x140D0C9D0
#define __ScreenMode_x                                             0x140D94354
#define __gWorld_x                                                 0x140E473D8
#define __gpbCommandEvent_x                                        0x140E473E4
#define __ServerHost_x                                             0x140E475C8
#define __Guilds_x                                                 0x140E4B660
#define __MemCheckBitmask_x                                        0x140E4CFD7
#define __MemCheckActive_x                                         0x140E4E6C5
#define __MouseEventTime_x                                         0x140EC2010
#define DI8__MouseState_x                                          0x140EC6258
#define __heqmain_x                                                0x140EC86F8
#define DI8__Mouse_x                                               0x140EC61A8
#define __HWnd_x                                                   0x140EC6230
#define __Mouse_x                                                  0x140EC6164
#define DI8__Keyboard_x                                            0x140EC6180
#define __LoginName_x                                              0x140EC8DDC
#define __CurrentMapLabel_x                                        0x140EDC5E0
#define __LabelCache_x                                             0x140EDD1B0
#define __ChatFilterDefs_x                                         0x140A1E4F0
#define Teleport_Table_Size_x                                      0x140E47470
#define Teleport_Table_x                                           0x140E44F20

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E479F0
#define pinstActiveBanker_x                                        0x140E47900
#define pinstActiveCorpse_x                                        0x140E478F0
#define pinstActiveGMaster_x                                       0x140E478F8
#define pinstActiveMerchant_x                                      0x140E478E8
#define pinstAltAdvManager_x                                       0x140D951F8
#define pinstCEverQuest_x                                          0x140EC61A0
#define pinstCamActor_x                                            0x140D94338
#define pinstCDBStr_x                                              0x140D93FB0
#define pinstCDisplay_x                                            0x140E479D8
#define pinstControlledPlayer_x                                    0x140E47990
#define pinstCResolutionHandler_x                                  0x14154D978
#define pinstCSidlManager_x                                        0x140EEE4B0
#define pinstCXWndManager_x                                        0x140EEE4A8
#define instDynamicZone_x                                          0x140E4B520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4B56E
#define instExpeditionName_x                                       0x140E4B5AE
#define pinstDZMember_x                                            0x140E4B638
#define pinstDZTimerInfo_x                                         0x140E4B640
#define pinstEqLogin_x                                             0x140EC8720
#define instTribute_x                                              0x140D06D50
#define pinstDeviceInputProxy_x                                    0x140E4CAFC
#define pinstEQSoundManager_x                                      0x140D95578
#define pinstEQSpellStrings_x                                      0x140D78B80
#define pinstSGraphicsEngine_x                                     0x14154D6F8
#define pinstLocalPC_x                                             0x140E479C0
#define pinstLocalPlayer_x                                         0x140E478E0
#define pinstCMercenaryClientManager_x                             0x140EC38F8
#define pinstModelPlayer_x                                         0x140E47910
#define pinstRenderInterface_x                                     0x14154D710
#define pinstSkillMgr_x                                            0x140EC55A0
#define pinstSpawnManager_x                                        0x140EC3CC0
#define pinstSpellManager_x                                        0x140EC5608
#define pinstStringTable_x                                         0x140E479E0
#define pinstSwitchManager_x                                       0x140E44EA0
#define pinstTarget_x                                              0x140E47988
#define pinstTaskMember_x                                          0x140D06D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E47998
#define pinstTradeTarget_x                                         0x140E47908
#define instTributeActive_x                                        0x140D06D79
#define pinstViewActor_x                                           0x140D94330
#define pinstWorldData_x                                           0x140E479C8
#define pinstPlayerPath_x                                          0x140EC3CE8
#define pinstTargetIndicator_x                                     0x140EC56B8
#define EQObject_Top_x                                             0x140E479B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED9738
#define pinstCContainerMgr_x                                       0x140D93FF8
#define pinstCContextMenuManager_x                                 0x140EEE190
#define pinstCInvSlotMgr_x                                         0x140D93FF0
#define pinstCItemDisplayManager_x                                 0x140EDC1B0
#define pinstCPopupWndManager_x                                    0x140EDCA40
#define pinstCSpellDisplayMgr_x                                    0x140EDD090
#define pinstCTaskManager_x                                        0x140BCFC80
#define pinstEQSuiteTextureLoader_x                                0x140D1D550
#define pinstItemIconCache_x                                       0x140ED9A98
#define pinstLootFiltersManager_x                                  0x140D939F8
#define pinstGFViewListener_x                                      0x140EED968


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023FA20
#define __CastRay_x                                                0x140237E60
#define __CastRay2_x                                               0x140237B60
#define __compress_block_x                                         0x140523150
#define __ConvertItemTags_x                                        0x1402382C0
#define __CleanItemTags_x                                          0x1400880E0
#define __CreateCascadeMenuItems_x                                 0x140186750
#define __decompress_block_x                                       0x140569320
#define __DoesFileExist_x                                          0x140571960
#define __EQGetTime_x                                              0x14056E060
#define __ExecuteCmd_x                                             0x14020E160
#define __FixHeading_x                                             0x14069AB70
#define __FlushDxKeyboard_x                                        0x140332FA0
#define __get_bearing_x                                            0x140241C10
#define __get_melee_range_x                                        0x140241D00
#define __GetAnimationCache_x                                      0x1403B0290
#define __GetGaugeValueFromEQ_x                                    0x1404E4130
#define __GetLabelFromEQ_x                                         0x1404E5740
#define __GetXTargetType_x                                         0x14069BE50   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069ABF0
#define __HelpPath_x                                               0x140EC1ED8   // Why?
#define __NewUIINI_x                                               0x1404F11D0   // Why?
#define __ProcessDeviceEvents_x                                    0x1402802A0
#define __ProcessGameEvents_x                                      0x140274FC0
#define __ProcessKeyboardEvents_x                                  0x1403346F0
#define __ProcessMouseEvents_x                                     0x1402766A0
#define __SaveColors_x                                             0x140196740
#define __STMLToText_x                                             0x1405762A0
#define __WndProc_x                                                0x1403317C0
#define CMemoryMappedFile__SetFile_x                               0x1407D6B20
#define DrawNetStatus_x                                            0x1402BF810
#define Util__FastTime_x                                           0x14056D5F0
#define __eq_delete_x                                              0x1406A2BA4
#define __eq_new_x                                                 0x1406A2B60
#define __CopyLayout_x                                             0x1402AD770
#define __ThrottleFrameRate_x                                      0x1402647E4
#define __ThrottleFrameRateEnd_x                                   0x140264844

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140343D80
#define CAAWnd__Update_x                                           0x140344080
#define CAAWnd__UpdateSelected_x                                   0x1403450C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DB0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082BB58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1840
#define AltAdvManager__IsAbilityReady_x                            0x1401A1AC0
#define AltAdvManager__GetAAById_x                                 0x1401A1110
#define AltAdvManager__CanTrainAbility_x                           0x1401A0F40
#define AltAdvManager__CanSeeAbility_x                             0x1401A0C00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0AC0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1900
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1B50
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5A00
#define CharacterZoneClient__CanUseItem_x                          0x1400E5E30
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2520
#define CharacterZoneClient__CastSpell_x                           0x1400D25C0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1960
#define CharacterZoneClient__Cur_HP_x                              0x1400E7540
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7700
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5350
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDBD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC600  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6800
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5300
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF790
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE660
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D69D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6EE0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C88B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEDA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E71B0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFA20
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6A50
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0800
#define CharacterZoneClient__GetModCap_x                           0x1400F7DC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6CE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6EF0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBA20
#define CharacterZoneClient__HasSkill_x                            0x1400F37F0
#define CharacterZoneClient__HitBySpell_x                          0x1400D79A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB140
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F78A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBF00  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7BF0
#define CharacterZoneClient__Max_Mana_x                            0x1402DC120  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8050
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE4F0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF1F0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0540
#define CharacterZoneClient__UseSkill_x                            0x1400FD570


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362250

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C5B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140368440
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036C030

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036EC80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA2160

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391B50
#define CChatWindowManager__InitContextMenu_x                      0x140391CE0
#define CChatWindowManager__FreeChatWindow_x                       0x140390BD0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403998C0
#define CChatWindowManager__CreateChatWindow_x                     0x140390510

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105AC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A900
#define CChatWindow__Clear_x                                       0x14039B8B0
#define CChatWindow__WndNotification_x                             0x14039CAA0
#define CChatWindow__AddHistory_x                                  0x14039B3B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB420
#define CContextMenu__RemoveMenuItem_x                             0x1405AB800
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB7D0
#define CContextMenu__CheckMenuItem_x                              0x1405AB640
#define CContextMenu__SetMenuItem_x                                0x1405AB820
#define CContextMenu__AddSeparator_x                               0x1405AB580

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D310
#define CContextMenuManager__RemoveMenu_x                          0x14059D8F0
#define CContextMenuManager__PopupMenu_x                           0x14059D630
#define CContextMenuManager__Flush_x                               0x14059D390
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A81E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140664320
#define CChatService__GetFriendName_x                              0x140664330

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E150
#define CComboWnd__Draw_x                                          0x14058E240
#define CComboWnd__GetCurChoice_x                                  0x14058E510  // unused
#define CComboWnd__GetListRect_x                                   0x14058E5B0
#define CComboWnd__InsertChoice_x                                  0x14058E8D0
#define CComboWnd__SetColors_x                                     0x14058EC60
#define CComboWnd__SetChoice_x                                     0x14058EC20
#define CComboWnd__GetItemCount_x                                  0x14058E5A0
#define CComboWnd__GetCurChoiceText_x                              0x14058E550  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E4E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E990

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5F60
#define CContainerWnd__SetContainer_x                              0x1403FB800
#define CContainerWnd__vftable_x                                   0x1409BA658

// CDisplay
#define CDisplay__cameraType_x                                     0x140D940EC
#define CDisplay__ZoneMainUI_x                                     0x1405C54F0
#define CDisplay__PreZoneMainUI_x                                  0x140193660
#define CDisplay__CleanGameUI_x                                    0x140185810
#define CDisplay__GetClickedActor_x                                0x1401899B0
#define CDisplay__GetUserDefinedColor_x                            0x14018A620
#define CDisplay__InitCharSelectUI_x                               0x14018A8D0
#define CDisplay__ReloadUI_x                                       0x140195950
#define CDisplay__RestartUI_x                                      0x1401F47E0
#define CDisplay__WriteTextHD2_x                                   0x14019C970
#define CDisplay__TrueDistance_x                                   0x14019C620
#define CDisplay__SetViewActor_x                                   0x140198E60
#define CDisplay__GetFloorHeight_x                                 0x140189C10
#define CDisplay__ToggleScreenshotMode_x                           0x14019C110
#define CDisplay__RealRender_World_x                               0x140194D30

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF6F0
#define CEditWnd__DrawCaret_x                                      0x1405C1270  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1700
#define CEditWnd__GetCaretPt_x                                     0x1405C1980  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C19C0
#define CEditWnd__GetDisplayString_x                               0x1405C1C20
#define CEditWnd__GetHorzOffset_x                                  0x1405C1E60
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1FA0
#define CEditWnd__GetSelStartPt_x                                  0x1405C2280  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C20D0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C2E30
#define CEditWnd__ReplaceSelection_x                               0x1405C31D0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3670
#define CEditWnd__SetEditable_x                                    0x1405C3900
#define CEditWnd__SetWindowText_x                                  0x1405C3930

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402658F0
#define CEverQuest__ClickedPlayer_x                                0x14025B3E0
#define CEverQuest__CreateTargetIndicator_x                        0x14025BCA0
#define CEverQuest__DoTellWindow_x                                 0x1401057D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106090 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402672B0
#define CEverQuest__dsp_chat_x                                     0x140105200 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402916B0
#define CEverQuest__Emote_x                                        0x140267C90
#define CEverQuest__GetBodyTypeDesc_x                              0x140268A40
#define CEverQuest__GetClassDesc_x                                 0x140268AA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268E70
#define CEverQuest__GetDeityDesc_x                                 0x140269120
#define CEverQuest__GetLangDesc_x                                  0x140269550
#define CEverQuest__GetRaceDesc_x                                  0x1402698F0
#define CEverQuest__InterpretCmd_x                                 0x14026B230
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280310
#define CEverQuest__LMouseUp_x                                     0x14026CC50
#define CEverQuest__RightClickedOnPlayer_x                         0x14027DB30
#define CEverQuest__RMouseUp_x                                     0x140277230
#define CEverQuest__SetGameState_x                                 0x140282850
#define CEverQuest__UPCNotificationFlush_x                         0x140288180 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C8C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402785E0
#define CEverQuest__ReportSuccessfulHit_x                          0x140279400

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA670

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0C80
#define CGuild__GetGuildName_x                                     0x1400C0CC0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DCC10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A32A0
#define CHotButton__SetCheck_x                                     0x1402A3570

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4530
#define CInvSlotMgr__MoveItem_x                                    0x1403F4710
#define CInvSlotMgr__SelectSlot_x                                  0x1403F60C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1720
#define CInvSlot__SliderComplete_x                                 0x1403F2C70
#define CInvSlot__GetItemBase_x                                    0x1403ED340
#define CInvSlot__UpdateItem_x                                     0x1403F3130

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7450

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404186A0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041AFF0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415190
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404168F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417AB0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0C60
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2950

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C4C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404118C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DD60

// CLabel
#define CLabel__UpdateText_x                                       0x1404223E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591AA0
#define CListWnd__dCListWnd_x                                      0x140591EE0
#define CListWnd__vftable_x                                        0x140AA02B8
#define CListWnd__AddColumn_x                                      0x140592580
#define CListWnd__AddColumn1_x                                     0x140592620
#define CListWnd__AddLine_x                                        0x140592780
#define CListWnd__AddString_x                                      0x140592D10
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593280
#define CListWnd__CalculateVSBRange_x                              0x140593560
#define CListWnd__ClearSel_x                                       0x140593710
#define CListWnd__ClearAllSel_x                                    0x1405936B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593770
#define CListWnd__Compare_x                                        0x140593920
#define CListWnd__Draw_x                                           0x140593DF0
#define CListWnd__DrawColumnSeparators_x                           0x140594990
#define CListWnd__DrawHeader_x                                     0x140594A50
#define CListWnd__DrawItem_x                                       0x140595120
#define CListWnd__DrawLine_x                                       0x140595A90
#define CListWnd__DrawSeparator_x                                  0x140595F50
#define CListWnd__EnableLine_x                                     0x140596370
#define CListWnd__EnsureVisible_x                                  0x1405963D0
#define CListWnd__ExtendSel_x                                      0x1405964D0
#define CListWnd__GetColumnMinWidth_x                              0x140596800
#define CListWnd__GetColumnWidth_x                                 0x140596880
#define CListWnd__GetCurSel_x                                      0x140596980
#define CListWnd__GetItemData_x                                    0x140596D00
#define CListWnd__GetItemHeight_x                                  0x140596D40
#define CListWnd__GetItemRect_x                                    0x140596F60
#define CListWnd__GetItemText_x                                    0x140597200
#define CListWnd__GetSelList_x                                     0x140597450
#define CListWnd__GetSeparatorRect_x                               0x140597640
#define CListWnd__InsertLine_x                                     0x140598A90
#define CListWnd__RemoveLine_x                                     0x140599100
#define CListWnd__SetColors_x                                      0x1405994C0
#define CListWnd__SetColumnJustification_x                         0x1405994E0
#define CListWnd__SetColumnLabel_x                                 0x140599560
#define CListWnd__SetColumnWidth_x                                 0x140599700
#define CListWnd__SetCurSel_x                                      0x1405997D0
#define CListWnd__SetItemColor_x                                   0x140599A40
#define CListWnd__SetItemData_x                                    0x140599AE0
#define CListWnd__SetItemText_x                                    0x140599D20
#define CListWnd__Sort_x                                           0x14059A130
#define CListWnd__ToggleSel_x                                      0x14059A2A0
#define CListWnd__SetColumnsSizable_x                              0x140599750
#define CListWnd__SetItemWnd_x                                     0x140599E50
#define CListWnd__GetItemWnd_x                                     0x1405973E0
#define CListWnd__SetItemIcon_x                                    0x140599B20
#define CListWnd__CalculateCustomWindowPositions_x                 0x140593050
#define CListWnd__SetVScrollPos_x                                  0x14059A090

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404356B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A070E8
#define MapViewMap__Clear_x                                        0x140437220
#define MapViewMap__SetZoom_x                                      0x14043D870
#define MapViewMap__HandleLButtonDown_x                            0x14043A3B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045EF00  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404654B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465C50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469470
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404687C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D700

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140640220
#define CPacketScrambler__hton_x                                   0x140640210

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BAB50
#define CSidlManagerBase__FindAnimation1_x                         0x1405BAA90
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BB180
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BAF30
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B9E90
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9E20
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9480

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3C50
#define CSidlManager__CreateXWnd_x                                 0x1404D3E10

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F620
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F730
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9C60 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F8B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057ED50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057EE20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F030
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FFA0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405801D0
#define CSidlScreenWnd__GetChildItem_x                             0x140580370
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405805C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A710 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580930
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580CA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581560
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581F50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EED808
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405825D0
#define CSidlScreenWnd__StoreIniVis_x                              0x140582DC0
#define CSidlScreenWnd__vftable_x                                  0x140A9F528
#define CSidlScreenWnd__WndNotification_x                          0x140582E10

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C540 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C9E0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C910
#define CSkillMgr__IsActivatedSkill_x                              0x14031CD90
#define CSkillMgr__IsCombatSkill_x                                 0x14031CDD0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CD00
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C960

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404EF8C0
#define CSliderWnd__SetValue_x                                     0x14059B410
#define CSliderWnd__SetNumTicks_x                                  0x14059B290

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DA2B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059FD70
#define CStmlWnd__CalculateHSBRange_x                              0x14058A0D0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A0C10
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1700
#define CStmlWnd__ForceParseNow_x                                  0x1405A17A0
#define CStmlWnd__GetVisibleText_x                                 0x1405A1E70
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3BD0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A3C10
#define CStmlWnd__SetSTMLText_x                                    0x1405AABD0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AAD80
#define CStmlWnd__UpdateHistoryString_x                            0x1405AB110

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B9C0
#define CTabWnd__DrawCurrentPage_x                                 0x14059BA60
#define CTabWnd__DrawTab_x                                         0x14059BE30
#define CTabWnd__GetTabRect_x                                      0x14059C4A0
#define CTabWnd__InsertPage_x                                      0x14059C770
#define CTabWnd__RemovePage_x                                      0x14059C9F0
#define CTabWnd__SetPage_x                                         0x14059CB50
#define CTabWnd__UpdatePage_x                                      0x14059CE50

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3D80
#define CPageWnd__SetTabText_x                                     0x1405C3DF0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA7C0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2530
#define CTextureFont__DrawWrappedText1_x                           0x1405B2440
#define CTextureFont__DrawWrappedText2_x                           0x1405B2660
#define CTextureFont__GetTextExtent_x                              0x1405B2A10
#define CTextureFont__GetHeight_x                                  0x1405B29D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C83C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E930

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1CEC0
#define CXStr__gCXStrAccess_x                                      0x140EED608

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405857F0
#define CXWnd__ClrFocus_x                                          0x140585AE0
#define CXWnd__Destroy_x                                           0x140585C60
#define CXWnd__DoAllDrawing_x                                      0x140585D70
#define CXWnd__DrawColoredRect_x                                   0x140586530
#define CXWnd__DrawTooltip_x                                       0x140587B90
#define CXWnd__DrawTooltipAtPoint_x                                0x140587C40
#define CXWnd__GetChildItem_x                                      0x140588540
#define CXWnd__GetChildWndAt_x                                     0x1405885F0
#define CXWnd__GetClientRect_x                                     0x140588890
#define CXWnd__GetClientClipRect_x                                 0x140588740
#define CXWnd__GetRelativeRect_x                                   0x14058A210
#define CXWnd__GetScreenClipRect_x                                 0x14058A310
#define CXWnd__GetScreenRect_x                                     0x14058A490
#define CXWnd__GetTooltipRect_x                                    0x14058A610
#define CXWnd__IsActive_x                                          0x14058ABC0
#define CXWnd__IsDescendantOf_x                                    0x14058ABF0
#define CXWnd__IsReallyVisible_x                                   0x14058AC60
#define CXWnd__IsType_x                                            0x14058ACA0
#define CXWnd__Minimize_x                                          0x14058ADA0
#define CXWnd__ProcessTransition_x                                 0x14058BC80
#define CXWnd__Resize_x                                            0x14058BD90
#define CXWnd__Right_x                                             0x14058BE30
#define CXWnd__SetFocus_x                                          0x14058C1E0
#define CXWnd__SetFont_x                                           0x14058C230
#define CXWnd__SetKeyTooltip_x                                     0x14058C330
#define CXWnd__SetMouseOver_x                                      0x14058C470
#define CXWnd__SetParent_x                                         0x14058C4F0
#define CXWnd__StartFade_x                                         0x14058C930
#define CXWnd__vftable_x                                           0x140A9FB18
#define CXWnd__CXWnd_x                                             0x1405843B0
#define CXWnd__dCXWnd_x                                            0x140584CF0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEE70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC9C0
#define CXWndManager__DrawCursor_x                                 0x1405ACCA0
#define CXWndManager__DrawWindows_x                                0x1405ACF00
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD5D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD610
#define CXWndManager__RemoveWnd_x                                  0x1405B0BF0

// CDBStr
#define CDBStr__GetString_x                                        0x1401839C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064A020

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE640
#define CCharacterListWnd__EnterWorld_x                            0x1400CD340
#define CCharacterListWnd__Quit_x                                  0x1400CE620
#define CCharacterListWnd__UpdateList_x                            0x1400CF4B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406178A0
#define ItemBase__CreateItemTagString_x                            0x140618320
#define ItemBase__GetImageNum_x                                    0x14061A8E0
#define ItemBase__GetItemValue_x                                   0x14061C720
#define ItemBase__IsEmpty_x                                        0x14061E330
#define ItemBase__IsKeyRingItem_x                                  0x14061EA60
#define ItemBase__ValueSellMerchant_x                              0x140622C20
#define ItemClient__CanDrop_x                                      0x1402A5860
#define ItemClient__CanGoInBag_x                                   0x1402A5990
#define ItemClient__CreateItemClient_x                             0x1402A5C70
#define ItemClient__dItemClient_x                                  0x1402A56D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2FE0
#define EQ_LoadingS__Array_x                                       0x140D09230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062F450
#define PcBase__GetCombatAbility_x                                 0x14062FB40
#define PcBase__GetCombatAbilityTimer_x                            0x14062FBE0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140630330
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630E20
#define PcClient__AlertInventoryChanged_x                          0x1402C7DF0
#define PcClient__GetConLevel_x                                    0x1402C8410  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CABB0
#define PcClient__HasLoreItem_x                                    0x1402CBB80
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9430
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD040

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212870  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212A20  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212B80  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212AC0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C9B0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E220

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068D910
#define PlayerBase__CanSee1_x                                      0x14068D9E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068DEA0
#define PlayerBase__HasProperty_x                                  0x14068E070
#define PlayerBase__IsTargetable_x                                 0x14068E130
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9B20
#define PlayerClient__GetPcClient_x                                0x1402EC350
#define PlayerClient__PlayerClient_x                               0x1402E2DF0
#define PlayerClient__SetNameSpriteState_x                         0x1402EF7A0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0760
#define PlayerZoneClient__ChangeHeight_x                           0x1402FED10
#define PlayerZoneClient__DoAttack_x                               0x1402FFA20
#define PlayerZoneClient__GetLevel_x                               0x140303150
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F740
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191EE0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8630  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F86E0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F87E0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F8100
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068D4D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AAC70
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA870
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA8E0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AAC00  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AAD90
#define KeypressHandler__HandleKeyUp_x                             0x1402AAEB0
#define KeypressHandler__SaveKeymapping_x                          0x1402AAB10  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140647B60  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641950

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2130  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7460
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9B30
#define PcZoneClient__RemovePetEffect_x                            0x1402DD140
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA720
#define PcZoneClient__CanEquipItem_x                               0x1402D57A0
#define PcZoneClient__GetItemByID_x                                0x1402D8500
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCEC0
#define PcZoneClient__BandolierSwap_x                              0x1402D47F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140254270

// IconCache
#define IconCache__GetIcon_x                                       0x1403B02C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4D10
#define CContainerMgr__CloseContainer_x                            0x1403A4650
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5090

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404988D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029DA70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404296B0
#define CLootWnd__RequestLootSlot_x                                0x14042A6D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2350
#define EQ_Spell__SpellAffects_x                                   0x1401D3610
#define EQ_Spell__SpellAffectBase_x                                0x1401D3570
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D70C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7070
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3230
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2DF0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D26C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8C0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4970
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F4080
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F3880

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FBFD0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017ABE0
#define CTaskManager__GetTaskStatus_x                              0x14017ACF0
#define CTaskManager__GetElementDescription_x                      0x14017A870

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D06C0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF500
#define EqSoundManager__SoundAssistPlay_x                          0x140321B90  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321ED0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D6E0
#define CTextureAnimation__SetCurCell_x                            0x14058D9F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029BCD0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140661A60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140661AE0
#define CharacterBase__IsExpansionFlag_x                           0x1401F4030

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382AA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383410
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384960

// messages
#define msg_spell_worn_off_x                                       0x1402091A0
#define msg_new_text_x                                             0x140204A30
#define __msgTokenTextParam_x                                      0x1401FC5C0
#define msgTokenText_x                                             0x1401FC4E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323550
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323470

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069C230

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422B30

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A99F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC940
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACBF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6860
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6A50
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6A60

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140148FD0
#define CFindItemWnd__Update_x                                     0x140149970
#define CFindItemWnd__PickupSelectedItem_x                         0x140143490

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152860
#define LootFiltersManager__GetItemFilterData_x                    0x140153370
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153C10
#define LootFiltersManager__SetItemLootFilter_x                    0x140153EC0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B6C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C100
#define CResolutionHandler__UpdateResolution_x                     0x1406A09A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1030

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140665DE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140665CD0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5D80
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5960

// ItemBase
#define ItemBase__IsLore_x                                         0x14061EB30
#define ItemBase__IsLoreEquipped_x                                 0x14061EBC0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BDA20

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024CB10
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024CAA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024CAE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316700

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401233B0
#define FactionManagerClient__HandleFactionMessage_x               0x140123760
#define FactionManagerClient__GetFactionStanding_x                 0x140122B80
#define FactionManagerClient__GetMaxFaction_x                      0x140122B80
#define FactionManagerClient__GetMinFaction_x                      0x140122A30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC960

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EB50

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB920
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AACA0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB740  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB6C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403285B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316700

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212C10

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583400

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339CE0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C960

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064ABA0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB3B70

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529570

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
