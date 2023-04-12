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

#define __ClientDate                                               20230411u
#define __ExpectedVersionDate                                     "Apr 11 2023"
#define __ExpectedVersionTime                                     "14:38:03"
#define __ActualVersionDate_x                                      0x14080A328
#define __ActualVersionTime_x                                      0x14080A318
#define __ActualVersionBuild_x                                     0x1407F7AC8

// Memory Protection
#define __MemChecker0_x                                            0x1402C7D50
#define __MemChecker1_x                                            0x14056F340
#define __MemChecker4_x                                            0x1402971F0
#define __EncryptPad0_x                                            0x140AC4860

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C00040
#define instEQZoneInfo_x                                           0x140C00234 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140230130
#define __gfMaxZoomCameraDistance_x                                0x1408002B0
#define __gfMaxCameraDistance_x                                    0x14083ED64
#define __CurrentSocial_x                                          0x14098093C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140ABC1A0
#define g_eqCommandStates_x                                        0x140ABD210
#define __CommandList_x                                            0x140ABD450
#define __ScreenMode_x                                             0x140B4789C
#define __gWorld_x                                                 0x140BF8AA0
#define __gpbCommandEvent_x                                        0x140BF84C8
#define __ServerHost_x                                             0x140BF86A8
#define __Guilds_x                                                 0x140BFEBF0
#define __MouseEventTime_x                                         0x140C75540
#define DI8__Mouse_Check_x                                         0x140C79678
#define __heqmain_x                                                0x140C7BB10
#define DI8__Mouse_x                                               0x140C7BB68
#define __HWnd_x                                                   0x140C7C618
#define __Mouse_x                                                  0x140C7BB28
#define DI8__Main_x                                                0x140C7BB40
#define DI8__Keyboard_x                                            0x140C7BB48
#define __LoginName_x                                              0x140C7C2AC
#define __CurrentMapLabel_x                                        0x140C8F7F0
#define __LabelCache_x                                             0x140C903C0
#define __SubscriptionType_x                                       0x140CC51D0
#define Teleport_Table_Size_x                                      0x140BF8550
#define Teleport_Table_x                                           0x140BF8AE0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140BFAF80
#define pinstActiveBanker_x                                        0x140BF89E8
#define pinstActiveCorpse_x                                        0x140BF89D8
#define pinstActiveGMaster_x                                       0x140BF89E0
#define pinstActiveMerchant_x                                      0x140BF89D0
#define pinstAltAdvManager_x                                       0x140B487A8
#define pinstCEverQuest_x                                          0x140C7BB60
#define pinstCamActor_x                                            0x140B47888
#define pinstCDBStr_x                                              0x140B475B0
#define pinstCDisplay_x                                            0x140BFAB48
#define pinstControlledPlayer_x                                    0x140BF8A78
#define pinstCResolutionHandler_x                                  0x1412FDD78
#define pinstCSidlManager_x                                        0x140CA15D0
#define pinstCXWndManager_x                                        0x140CA15C8
#define instDynamicZone_x                                          0x140BFEAB0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140BFEAFE
#define instExpeditionName_x                                       0x140BFEB3E
#define pinstDZMember_x                                            0x140BFEBC8
#define pinstDZTimerInfo_x                                         0x140BFEBD0
#define pinstEqLogin_x                                             0x140C7BBF0
#define instTribute_x                                              0x140AB7830
#define pinstEQSoundManager_x                                      0x140B48B28
#define pinstEQSpellStrings_x                                      0x140B2C1D0
#define pinstSGraphicsEngine_x                                     0x1412FDAF8
#define pinstLocalPC_x                                             0x140BF8AB8
#define pinstLocalPlayer_x                                         0x140BF89C8
#define pinstCMercenaryClientManager_x                             0x140C76DF8
#define pinstModelPlayer_x                                         0x140BF89F8
#define pinstRenderInterface_x                                     0x1412FDB10
#define pinstSkillMgr_x                                            0x140C78A90
#define pinstSpawnManager_x                                        0x140C771B0
#define pinstSpellManager_x                                        0x140C78AF8
#define pinstStringTable_x                                         0x140BF8AC0
#define pinstSwitchManager_x                                       0x140BF8440
#define pinstTarget_x                                              0x140BF8A70
#define pinstTaskMember_x                                          0x140AB7820 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140BF8A80
#define pinstTradeTarget_x                                         0x140BF89F0
#define instTributeActive_x                                        0x140AB7859
#define pinstViewActor_x                                           0x140B47880
#define pinstWorldData_x                                           0x140BFAB40
#define pinstPlayerPath_x                                          0x140C771D8
#define pinstTargetIndicator_x                                     0x140C78BA8
#define EQObject_Top_x                                             0x140BF8A98

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C8C948
#define pinstCContainerMgr_x                                       0x140B47B18
#define pinstCContextMenuManager_x                                 0x140CA13A0
#define pinstCInvSlotMgr_x                                         0x140B47B08
#define pinstCItemDisplayManager_x                                 0x140C8F3C0
#define pinstCPopupWndManager_x                                    0x140C8FC50
#define pinstCSpellDisplayMgr_x                                    0x140C902A0
#define pinstCTaskManager_x                                        0x140980C70
#define pinstEQSuiteTextureLoader_x                                0x140ACDEE0
#define pinstItemIconCache_x                                       0x140C8CCA8
#define pinstLootFiltersManager_x                                  0x140B47008

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402581B0
#define __CastRay_x                                                0x1402509E0
#define __CastRay2_x                                               0x1402506F0
#define __ConvertItemTags_x                                        0x140250DE0
#define __CleanItemTags_x                                          0x1400ABD40
#define __CreateCascadeMenuItems_x                                 0x1401A2BE0
#define __DoesFileExist_x                                          0x140573B20
#define __EQGetTime_x                                              0x14056F8F0
#define __ExecuteCmd_x                                             0x140227B60
#define __FixHeading_x                                             0x140672320
#define __FlushDxKeyboard_x                                        0x140345DA0
#define __get_bearing_x                                            0x14025A3A0
#define __get_melee_range_x                                        0x14025A490
#define __GetAnimationCache_x                                      0x1403BDB60
#define __GetGaugeValueFromEQ_x                                    0x1404E7720
#define __GetLabelFromEQ_x                                         0x1404E8CF0
#define __GetXTargetType_x                                         0x140673600   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406723A0
#define __HelpPath_x                                               0x140C75408   // Why?
#define __NewUIINI_x                                               0x1404F3EC0   // Why?
#define __ProcessGameEvents_x                                      0x14028C670
#define __ProcessKeyboardEvents_x                                  0x140347600
#define __ProcessMouseEvents_x                                     0x14028DB50
#define __SaveColors_x                                             0x1401B2A40
#define __STMLToText_x                                             0x140584BF0
#define __WndProc_x                                                0x140344520
#define CMemoryMappedFile__SetFile_x                               0x1407A9B30
#define DrawNetStatus_x                                            0x1402D6B10
#define Util__FastTime_x                                           0x1405705F0
#define __eq_delete_x                                              0x14069C1C4
#define __eq_new_x                                                 0x14069C180
#define __CopyLayout_x                                             0x1402C4200
#define __ThrottleFrameRate_x                                      0x14027BFBC
#define __ThrottleFrameRateEnd_x                                   0x14027C01C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140356750
#define CAAWnd__Update_x                                           0x140356A50
#define CAAWnd__UpdateSelected_x                                   0x140357A10

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400CDF70
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C68A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407E63D0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400CE820

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401BDA80
#define AltAdvManager__IsAbilityReady_x                            0x1401BDD00
#define AltAdvManager__GetAAById_x                                 0x1401BD350
#define AltAdvManager__CanTrainAbility_x                           0x1401BD180
#define AltAdvManager__CanSeeAbility_x                             0x1401BCE40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400F44E0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400F5290
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400F54A0
#define CharacterZoneClient__CanUseItem_x                          0x140109B90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F5D90
#define CharacterZoneClient__CastSpell_x                           0x1400F5E30
#define CharacterZoneClient__CharacterZoneClient_x                 0x140105670
#define CharacterZoneClient__Cur_HP_x                              0x14010B270
#define CharacterZoneClient__Cur_Mana_x                            0x14010B430
#define CharacterZoneClient__FindAffectSlot_x                      0x1400F8EC0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140111C10
#define CharacterZoneClient__GetBaseSkill_x                        0x140120B90  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400FA3A0
#define CharacterZoneClient__GetCurrentMod_x                       0x140109070
#define CharacterZoneClient__GetCursorItemCount_x                  0x140113760
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140112660
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400FA570
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EAB20
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EC4F0
#define CharacterZoneClient__GetHPRegen_x                          0x140112D90
#define CharacterZoneClient__GetItemCountInInventory_x             0x14010AEE0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1401139F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400FA670
#define CharacterZoneClient__GetManaRegen_x                        0x140114740
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FA880
#define CharacterZoneClient__GetModCap_x                           0x14011BE90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400FA920
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400FAB30
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400EF690
#define CharacterZoneClient__HasSkill_x                            0x1401176C0
#define CharacterZoneClient__HitBySpell_x                          0x1400FB5D0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400FEDB0
#define CharacterZoneClient__MakeMeVisible_x                       0x14011B920
#define CharacterZoneClient__Max_Endurance_x                       0x1402F0B30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011BC60
#define CharacterZoneClient__Max_Mana_x                            0x1402F0D20  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14011C120
#define CharacterZoneClient__RemovePCAffectex_x                    0x1401023C0
#define CharacterZoneClient__SpellDuration_x                       0x140103130
#define CharacterZoneClient__TotalEffect_x                         0x140104460
#define CharacterZoneClient__UseSkill_x                            0x140121AE0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140374CB0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037EF10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037AE20
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140379EB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403815C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14084CC90

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A2A10
#define CChatWindowManager__InitContextMenu_x                      0x1403A2BA0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A1C60
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A93C0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A15A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140129C10

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AA3B0
#define CChatWindow__Clear_x                                       0x1403AB1F0
#define CChatWindow__WndNotification_x                             0x1403AC3D0
#define CChatWindow__AddHistory_x                                  0x1403AACF0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14059F7F0
#define CContextMenu__RemoveMenuItem_x                             0x14059FBD0
#define CContextMenu__RemoveAllMenuItems_x                         0x14059FBA0
#define CContextMenu__CheckMenuItem_x                              0x14059FA10
#define CContextMenu__SetMenuItem_x                                0x14059FBF0
#define CContextMenu__AddSeparator_x                               0x14059F950

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059EA60
#define CContextMenuManager__RemoveMenu_x                          0x14059F030
#define CContextMenuManager__PopupMenu_x                           0x14059ED70
#define CContextMenuManager__Flush_x                               0x14059EAE0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B7950

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405F7860
#define CChatService__GetFriendName_x                              0x14063B850

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058FA30
#define CComboWnd__Draw_x                                          0x14058FB20
#define CComboWnd__GetCurChoice_x                                  0x14058FDF0  // unused
#define CComboWnd__GetListRect_x                                   0x14058FE90
#define CComboWnd__InsertChoice_x                                  0x1405901B0
#define CComboWnd__SetColors_x                                     0x140590540
#define CComboWnd__SetChoice_x                                     0x140590500
#define CComboWnd__GetItemCount_x                                  0x14058FE80
#define CComboWnd__GetCurChoiceText_x                              0x14058FE30  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058FDC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140590270

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B5720
#define CContainerWnd__SetContainer_x                              0x140401D30
#define CContainerWnd__vftable_x                                   0x1408194B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4763C
#define CDisplay__ZoneMainUI_x                                     0x1405C6B30
#define CDisplay__PreZoneMainUI_x                                  0x1401AFA00
#define CDisplay__CleanGameUI_x                                    0x1401A1CE0
#define CDisplay__GetClickedActor_x                                0x1401A5E70
#define CDisplay__GetUserDefinedColor_x                            0x1401A6A80
#define CDisplay__InitCharSelectUI_x                               0x1401A6D30
#define CDisplay__ReloadUI_x                                       0x1401B1CE0
#define CDisplay__WriteTextHD2_x                                   0x1401B8CF0
#define CDisplay__TrueDistance_x                                   0x1401B89D0
#define CDisplay__SetViewActor_x                                   0x1401B5230
#define CDisplay__GetFloorHeight_x                                 0x1401A60D0
#define CDisplay__ToggleScreenshotMode_x                           0x1401B84D0
#define CDisplay__RealRender_World_x                               0x1401B10D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D0E80
#define CEditWnd__DrawCaret_x                                      0x1405B5550  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B59D0
#define CEditWnd__GetCaretPt_x                                     0x1405B5C50  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B5C90
#define CEditWnd__GetDisplayString_x                               0x1405B5EF0
#define CEditWnd__GetHorzOffset_x                                  0x1405B6120
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B6260
#define CEditWnd__GetSelStartPt_x                                  0x1405B6540  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B6390
#define CEditWnd__PointFromPrintableChar_x                         0x1405B70F0
#define CEditWnd__ReplaceSelection_x                               0x1405B7490
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B7930
#define CEditWnd__SetEditable_x                                    0x1405B7BA0
#define CEditWnd__SetWindowText_x                                  0x1405B7BD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027CF90
#define CEverQuest__ClickedPlayer_x                                0x140272EC0
#define CEverQuest__CreateTargetIndicator_x                        0x140273780
#define CEverQuest__DoTellWindow_x                                 0x140129920 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14012A1E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027E9C0
#define CEverQuest__dsp_chat_x                                     0x140129360 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A8AE0
#define CEverQuest__Emote_x                                        0x14027F370
#define CEverQuest__GetBodyTypeDesc_x                              0x140280110
#define CEverQuest__GetClassDesc_x                                 0x140280170
#define CEverQuest__GetClassThreeLetterCode_x                      0x140280540
#define CEverQuest__GetDeityDesc_x                                 0x1402807F0
#define CEverQuest__GetLangDesc_x                                  0x140280C20
#define CEverQuest__GetRaceDesc_x                                  0x140280FC0
#define CEverQuest__InterpretCmd_x                                 0x1402828D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140297870
#define CEverQuest__LMouseUp_x                                     0x140284270
#define CEverQuest__RightClickedOnPlayer_x                         0x1402950D0
#define CEverQuest__RMouseUp_x                                     0x14028E6D0
#define CEverQuest__SetGameState_x                                 0x140299DA0
#define CEverQuest__UPCNotificationFlush_x                         0x14029F590 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140283EF0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028FA00
#define CEverQuest__ReportSuccessfulHit_x                          0x1402908B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C7F20

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E4890
#define CGuild__GetGuildName_x                                     0x1400E48D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EA1E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B9DA0
#define CHotButton__SetCheck_x                                     0x1402BA070

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FB400
#define CInvSlotMgr__MoveItem_x                                    0x1403FB580
#define CInvSlotMgr__SelectSlot_x                                  0x1403FCEC0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F87D0
#define CInvSlot__SliderComplete_x                                 0x1403F9AB0
#define CInvSlot__GetItemBase_x                                    0x1403F51D0
#define CInvSlot__UpdateItem_x                                     0x1403F9F60

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FDA40

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041EE10
#define CItemDisplayWnd__UpdateStrings_x                           0x1404217B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041B8B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041D0D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041E240

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E42E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E5EA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051F0C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140418010

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14016BCE0

// CLabel
#define CLabel__UpdateText_x                                       0x140428B80

// CListWnd
#define CListWnd__CListWnd_x                                       0x140593380
#define CListWnd__dCListWnd_x                                      0x1405937C0
#define CListWnd__vftable_x                                        0x14084B558
#define CListWnd__AddColumn_x                                      0x140593E60
#define CListWnd__AddColumn1_x                                     0x140593F00
#define CListWnd__AddLine_x                                        0x140594060
#define CListWnd__AddString_x                                      0x1405945F0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140594B60
#define CListWnd__CalculateVSBRange_x                              0x140594E40
#define CListWnd__ClearSel_x                                       0x140594FF0
#define CListWnd__ClearAllSel_x                                    0x140594F90
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140595050
#define CListWnd__Compare_x                                        0x140595210
#define CListWnd__Draw_x                                           0x1405956E0
#define CListWnd__DrawColumnSeparators_x                           0x140596280
#define CListWnd__DrawHeader_x                                     0x140596340
#define CListWnd__DrawItem_x                                       0x140596A00
#define CListWnd__DrawLine_x                                       0x140597370
#define CListWnd__DrawSeparator_x                                  0x140597830
#define CListWnd__EnableLine_x                                     0x140597C50
#define CListWnd__EnsureVisible_x                                  0x140597CB0
#define CListWnd__ExtendSel_x                                      0x140597DB0
#define CListWnd__GetColumnMinWidth_x                              0x1405980E0
#define CListWnd__GetColumnWidth_x                                 0x140598160
#define CListWnd__GetCurSel_x                                      0x140598260
#define CListWnd__GetItemData_x                                    0x1405985E0
#define CListWnd__GetItemHeight_x                                  0x140598620
#define CListWnd__GetItemRect_x                                    0x140598840
#define CListWnd__GetItemText_x                                    0x140598AE0
#define CListWnd__GetSelList_x                                     0x140598D30
#define CListWnd__GetSeparatorRect_x                               0x140598F20
#define CListWnd__InsertLine_x                                     0x14059A390
#define CListWnd__RemoveLine_x                                     0x14059AA00
#define CListWnd__SetColors_x                                      0x14059ADD0
#define CListWnd__SetColumnJustification_x                         0x14059ADF0
#define CListWnd__SetColumnLabel_x                                 0x14059AE70
#define CListWnd__SetColumnWidth_x                                 0x14059B010
#define CListWnd__SetCurSel_x                                      0x14059B0E0
#define CListWnd__SetItemColor_x                                   0x14059B350
#define CListWnd__SetItemData_x                                    0x14059B3F0
#define CListWnd__SetItemText_x                                    0x14059B630
#define CListWnd__Sort_x                                           0x14059BA40
#define CListWnd__ToggleSel_x                                      0x14059BBB0
#define CListWnd__SetColumnsSizable_x                              0x14059B060
#define CListWnd__SetItemWnd_x                                     0x14059B760
#define CListWnd__GetItemWnd_x                                     0x140598CC0
#define CListWnd__SetItemIcon_x                                    0x14059B430
#define CListWnd__CalculateCustomWindowPositions_x                 0x140594930
#define CListWnd__SetVScrollPos_x                                  0x14059B9A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043BD50

// MapViewMap
#define MapViewMap__vftable_x                                      0x140825D38
#define MapViewMap__Clear_x                                        0x14043D8D0
#define MapViewMap__SetZoom_x                                      0x140443E90
#define MapViewMap__HandleLButtonDown_x                            0x1404409D0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404655E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046BBA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046C340
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046FB50
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046EE90
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140473DF0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140619870
#define CPacketScrambler__hton_x                                   0x140619860

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405AEDF0
#define CSidlManagerBase__FindAnimation1_x                         0x1405AED30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405AF420
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405AF1D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405AE130
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405AE0C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AD720

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D7890
#define CSidlManager__CreateXWnd_x                                 0x1404D7A50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F190
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F070
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CB440 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F310
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057E800
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057E8D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057EAA0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057F9B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057FBE0
#define CSidlScreenWnd__GetChildItem_x                             0x14057FD80
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057FFD0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058C0D0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580340
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405806B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140580F50
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581840
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA09D0
#define CSidlScreenWnd__StoreIniInfo_x                             0x140581E80
#define CSidlScreenWnd__StoreIniVis_x                              0x140582670
#define CSidlScreenWnd__vftable_x                                  0x14084A7A0
#define CSidlScreenWnd__WndNotification_x                          0x1405826C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032FB90 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032FF90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032FED0
#define CSkillMgr__IsActivatedSkill_x                              0x140330330
#define CSkillMgr__IsCombatSkill_x                                 0x140330370

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F3F00
#define CSliderWnd__SetValue_x                                     0x14059CD20
#define CSliderWnd__SetNumTicks_x                                  0x14059CBA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DDED0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B9FD0
#define CStmlWnd__CalculateHSBRange_x                              0x14058BAC0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BAF00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BB980
#define CStmlWnd__ForceParseNow_x                                  0x1405BBA20
#define CStmlWnd__GetVisibleText_x                                 0x1405BC0F0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BDE50
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BDE90
#define CStmlWnd__SetSTMLText_x                                    0x1405C4E50
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C5000
#define CStmlWnd__UpdateHistoryString_x                            0x1405C5390

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059D0F0
#define CTabWnd__DrawCurrentPage_x                                 0x14059D190
#define CTabWnd__DrawTab_x                                         0x14059D560
#define CTabWnd__GetTabRect_x                                      0x14059DBD0
#define CTabWnd__InsertPage_x                                      0x14059DEA0
#define CTabWnd__RemovePage_x                                      0x14059E130
#define CTabWnd__SetPage_x                                         0x14059E290
#define CTabWnd__UpdatePage_x                                      0x14059E590

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B8030
#define CPageWnd__SetTabText_x                                     0x1405B80A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DE0A0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DE4B0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A67C0
#define CTextureFont__DrawWrappedText1_x                           0x1405A66D0
#define CTextureFont__DrawWrappedText2_x                           0x1405A68F0
#define CTextureFont__GetTextExtent_x                              0x1405A6CA0
#define CTextureFont__GetHeight_x                                  0x1405A6C60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C9BA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E3E0

// CXStr
#define CXStr__gFreeLists_x                                        0x140ACD850
#define CXStr__gCXStrAccess_x                                      0x140CA0818

// CXWnd
#define CXWnd__BringToTop_x                                        0x140587380
#define CXWnd__ClrFocus_x                                          0x1405875C0
#define CXWnd__Destroy_x                                           0x140587700
#define CXWnd__DoAllDrawing_x                                      0x140587800
#define CXWnd__DrawColoredRect_x                                   0x140587FD0
#define CXWnd__DrawTooltip_x                                       0x140589650
#define CXWnd__DrawTooltipAtPoint_x                                0x140589700
#define CXWnd__GetChildItem_x                                      0x140589FF0
#define CXWnd__GetChildWndAt_x                                     0x14058A0B0
#define CXWnd__GetClientRect_x                                     0x14058A350
#define CXWnd__GetClientClipRect_x                                 0x14058A210
#define CXWnd__GetRelativeRect_x                                   0x14058BBF0
#define CXWnd__GetScreenClipRect_x                                 0x14058BCF0
#define CXWnd__GetScreenRect_x                                     0x14058BE60
#define CXWnd__GetTooltipRect_x                                    0x14058BFE0
#define CXWnd__IsActive_x                                          0x14058C590
#define CXWnd__IsDescendantOf_x                                    0x14058C5C0
#define CXWnd__IsReallyVisible_x                                   0x14058C620
#define CXWnd__IsType_x                                            0x14058C660
#define CXWnd__Minimize_x                                          0x14058C760
#define CXWnd__ProcessTransition_x                                 0x14058D5F0
#define CXWnd__Resize_x                                            0x14058D710
#define CXWnd__Right_x                                             0x14058D7B0
#define CXWnd__SetFocus_x                                          0x14058DB30
#define CXWnd__SetFont_x                                           0x14058DB80
#define CXWnd__SetKeyTooltip_x                                     0x14058DC70
#define CXWnd__SetMouseOver_x                                      0x14058DDB0
#define CXWnd__SetParent_x                                         0x14058DE20
#define CXWnd__StartFade_x                                         0x14058E240
#define CXWnd__vftable_x                                           0x14084ADD8
#define CXWnd__CXWnd_x                                             0x140585F50
#define CXWnd__dCXWnd_x                                            0x140586870

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D0600

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A0DA0
#define CXWndManager__DrawCursor_x                                 0x1405A1080
#define CXWndManager__DrawWindows_x                                0x1405A12D0
#define CXWndManager__GetKeyboardFlags_x                           0x1405A1990
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A19D0
#define CXWndManager__RemoveWnd_x                                  0x1405A4E80

// CDBStr
#define CDBStr__GetString_x                                        0x14019FED0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140622740

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F22B0
#define CCharacterListWnd__EnterWorld_x                            0x1400F0FB0
#define CCharacterListWnd__Quit_x                                  0x1400F2290
#define CCharacterListWnd__UpdateList_x                            0x1400F2FB0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F1C30
#define ItemBase__CreateItemTagString_x                            0x1405F2680
#define ItemBase__GetImageNum_x                                    0x1405F4B40
#define ItemBase__GetItemValue_x                                   0x1405F69A0
#define ItemBase__IsEmpty_x                                        0x1405F86F0
#define ItemBase__IsKeyRingItem_x                                  0x1405F8DF0
#define ItemBase__ValueSellMerchant_x                              0x1405FCDC0
#define ItemClient__CanDrop_x                                      0x1402BC310
#define ItemClient__CanGoInBag_x                                   0x1402BC440
#define ItemClient__CreateItemClient_x                             0x1402BC720
#define ItemClient__dItemClient_x                                  0x1402BC180

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401BF220
#define EQ_LoadingS__Array_x                                       0x140AB9CB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140608F10
#define PcBase__GetCombatAbility_x                                 0x1406095B0
#define PcBase__GetCombatAbilityTimer_x                            0x140609650
#define PcBase__GetItemContainedRealEstateIds_x                    0x140609DA0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14060A730
#define PcClient__AlertInventoryChanged_x                          0x1402DE4E0
#define PcClient__GetConLevel_x                                    0x1402DEA30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E10D0
#define PcClient__HasLoreItem_x                                    0x1402E21D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EF090
#define PcZoneClient__RemoveMyAffect_x                             0x1402F1BA0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14022C1D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14022C380  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14022C4B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14022C3F0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402648F0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14019A6F0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140664ED0
#define PlayerBase__CanSee1_x                                      0x140664FA0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406654D0
#define PlayerBase__HasProperty_x                                  0x1406656F0
#define PlayerBase__IsTargetable_x                                 0x1406657B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FDA80
#define PlayerClient__GetPcClient_x                                0x140300140
#define PlayerClient__PlayerClient_x                               0x1402F6DD0
#define PlayerClient__SetNameSpriteState_x                         0x1403035E0
#define PlayerClient__SetNameSpriteTint_x                          0x1403045A0
#define PlayerZoneClient__ChangeHeight_x                           0x1403126B0
#define PlayerZoneClient__DoAttack_x                               0x1403133A0
#define PlayerZoneClient__GetLevel_x                               0x140316AD0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402676A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401AE2A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C4A0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030C4D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030C580
#define PlayerManagerClient__CreatePlayer_x                        0x14030BE90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140664B60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C1720
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C1320
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C1390
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C16B0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C1840
#define KeypressHandler__HandleKeyUp_x                             0x1402C1940
#define KeypressHandler__SaveKeymapping_x                          0x1402C15C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140620350  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14061AF10

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E7820  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402ED0C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EF780
#define PcZoneClient__RemovePetEffect_x                            0x1402F1CA0
#define PcZoneClient__HasAlternateAbility_x                        0x1402F0450
#define PcZoneClient__CanEquipItem_x                               0x1402EB3E0
#define PcZoneClient__GetItemByID_x                                0x1402EE140
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F1A20
#define PcZoneClient__BandolierSwap_x                              0x1402EA3C0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402EF6D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026C160

// IconCache
#define IconCache__GetIcon_x                                       0x1403BDB90

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B4570
#define CContainerMgr__CloseContainer_x                            0x1403B3EB0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B48E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049DCC0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B46E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042FE40
#define CLootWnd__RequestLootSlot_x                                0x140430E30

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401EF210
#define EQ_Spell__SpellAffects_x                                   0x1401F04D0
#define EQ_Spell__SpellAffectBase_x                                0x1401F0430
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400FAD10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400FACC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401F00F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401EFCB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401EF580

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E3530

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404F7CF0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404F7D30
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F7230
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F67E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FED90  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140196F10
#define CTaskManager__GetTaskStatus_x                              0x140197020
#define CTaskManager__GetElementDescription_x                      0x140196BA0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401ED590
#define EqSoundManager__PlayScriptMp3_x                            0x1401EC390
#define EqSoundManager__SoundAssistPlay_x                          0x140334F60  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140335290  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058EFC0
#define CTextureAnimation__SetCurCell_x                            0x14058F2D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B2960

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406392B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140639330
#define CharacterBase__IsExpansionFlag_x                           0x14020EA80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140394C70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403955D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396A40

// messages
#define msg_spell_worn_off_x                                       0x140222C60
#define msg_new_text_x                                             0x14021E600
#define __msgTokenTextParam_x                                      0x140216400
#define msgTokenText_x                                             0x140216320

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140336930
#define SpellManager__GetSpellByGroupAndRank_x                     0x140336850

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406739E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404292D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B9CB0
#define CCursorAttachment__AttachToCursor1_x                       0x1403B8800
#define CCursorAttachment__Deactivate_x                            0x1403BA1B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C8040
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C8230
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C8240

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140166FA0
#define CFindItemWnd__Update_x                                     0x140167940
#define CFindItemWnd__PickupSelectedItem_x                         0x140161450

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401708B0
#define LootFiltersManager__GetItemFilterData_x                    0x1401713C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140171C60
#define LootFiltersManager__SetItemLootFilter_x                    0x140171F10

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404814C0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140677DE0
#define CResolutionHandler__GetWindowedStyle_x                     0x14032F6F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B0940

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14063D2C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14063D1B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D3520
#define CGroupWnd__UpdateDisplay_x                                 0x1403D3100

// ItemBase
#define ItemBase__IsLore_x                                         0x1405F8EC0
#define ItemBase__IsLoreEquipped_x                                 0x1405F8F50

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D4D60

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140264A50
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402649E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140264A20

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140329E70

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140141D50
#define FactionManagerClient__HandleFactionMessage_x               0x140142100
#define FactionManagerClient__GetFactionStanding_x                 0x140141520
#define FactionManagerClient__GetMaxFaction_x                      0x140141520
#define FactionManagerClient__GetMinFaction_x                      0x1401413D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400D0390

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14014D420

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C7B80
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C6F00
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C79A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C7920  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033B5C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140329E70

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14022C540

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582CB0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A8F00

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034C7D0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400B0410

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
