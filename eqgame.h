/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

#define __ClientDate                                               20220415u
#define __ExpectedVersionDate                                     "Apr 15 2022"
#define __ExpectedVersionTime                                     "11:43:50"
#define __ActualVersionDate_x                                      0x1407913E0
#define __ActualVersionTime_x                                      0x1407913D0
#define __ActualVersionBuild_x                                     0x14077F5D8

// Memory Protection
#define __MemChecker0_x                                            0x14026C2E0
#define __MemChecker1_x                                            0x140501CD0
#define __MemChecker4_x                                            0x14023C2C0
#define __EncryptPad0_x                                            0x140A391D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B74610
#define __ScreenX_x                                                0x140B74620 // flip flopped?
#define __ScreenY_x                                                0x140B74624
#define __ScreenXMax_x                                             0x140B74628
#define __ScreenYMax_x                                             0x140B7462C
#define __InChatMode_x                                             0x140B74658
#define __RunWalkState_x                                           0x140B7465C
#define DI8__Mouse_Copy_x                                          0x140B7466C
#define __MouseLook_x                                              0x140B746DD
#define __NetStatusToggle_x                                        0x140B746DC
#define __pulAutoRun_x                                             0x140B746F8
#define __Clicks_x                                                 0x140B7470C
#define __RMouseHeldTime_x                                         0x140B74760 // EverQuest.rMouseDown
#define __LMouseHeldTime_x                                         0x140B74764 // EverQuest.lMouseDown
#define instEQZoneInfo_x                                           0x140B74804
#define __ZoneType_x                                               0x140B749C8 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140B74AE6 // EverQuest.isPressedShift
#define __AutoSkillArray_x                                         0x140B75114
#define __RangeAttackReady_x                                       0x140B74F54
#define __AttackOnAssist_x                                         0x140B750A8
#define __ShowNames_x                                              0x140B750C0
#define __PCNames_x                                                0x140B75238
#define __UseTellWindows_x                                         0x140B752A9
#define __pulForward_x                                             0x140B75302 // keyDwn[NUM_COMMANDS_ALL] NUM_COMMANDS_ALL = 546
#define __pulBackward_x                                            0x140B75303
#define __pulTurnRight_x                                           0x140B75304
#define __pulTurnLeft_x                                            0x140B75305
#define __pulStrafeLeft_x                                          0x140B75306
#define __pulStrafeRight_x                                         0x140B75307
#define __LastTell_x                                               0x140B75522
#define __ServerName_x                                             0x140B76228
#define __DoAbilityList_x                                          0x140B76268
#define __SocialChangedList_x                                      0x140B762B0
#define __Socials_x                                                0x140B76328
#define __Inviter_x                                                0x140BDF710
#define __Attack_x                                                 0x140BDF753
#define __Autofire_x                                               0x140BDF754
#define EverQuest__Cameras_x                                       0x140B752B8  // part of EverQuestInfo
#define EverQuestinfo__IsItemPending_x                             0x140BDF758  // part of EverQuestInfo


// Misc Globals
#define __do_loot_x                                                0x1401D6C80
#define __gfMaxZoomCameraDistance_x                                0x140787710
#define __gfMaxCameraDistance_x                                    0x1407C1F5C
#define __CurrentSocial_x                                          0x1408F3A20 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2F090
#define g_eqCommandStates_x                                        0x140A300F0
#define __CommandList_x                                            0x140A30330
#define __ScreenMode_x                                             0x140ABC0E4
#define __gWorld_x                                                 0x140B6EFD0
#define __gpbCommandEvent_x                                        0x140B6F050
#define __ServerHost_x                                             0x140B6F238
#define __Guilds_x                                                 0x140B731C0
#define __MouseEventTime_x                                         0x140BDFAC0
#define DI8__Mouse_Check_x                                         0x140BE4740
#define __heqmain_x                                                0x140BE6BE8
#define DI8__Mouse_x                                               0x140BE6C00
#define __HWnd_x                                                   0x140BE6C08
#define __Mouse_x                                                  0x140BE3C38
#define DI8__Main_x                                                0x140BE3CD0
#define DI8__Keyboard_x                                            0x140BE3CD8
#define __LoginName_x                                              0x140BE43BC
#define __CurrentMapLabel_x                                        0x140BF9940
#define __LabelCache_x                                             0x140BFA550
#define __SubscriptionType_x                                       0x140C31B40
#define Teleport_Table_Size_x                                      0x140B6F058
#define Teleport_Table_x                                           0x140B6CBA0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B6F550
#define pinstActiveBanker_x                                        0x140B6CAA0
#define pinstActiveCorpse_x                                        0x140B6CA90
#define pinstActiveGMaster_x                                       0x140B6CA98
#define pinstActiveMerchant_x                                      0x140B6CA88
#define pinstAltAdvManager_x                                       0x140ABCD68
#define pinstCEverQuest_x                                          0x140BE3C30
#define pinstCamActor_x                                            0x140ABC0D0
#define pinstCDBStr_x                                              0x140ABBB70
#define pinstCDisplay_x                                            0x140B6CB98
#define pinstControlledPlayer_x                                    0x140B6CB30
#define pinstCResolutionHandler_x                                  0x14126A6C0
#define pinstCSidlManager_x                                        0x140C0B6E0
#define pinstCXWndManager_x                                        0x140C0B6D0
#define instDynamicZone_x                                          0x140B73080 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B730CE
#define instExpeditionName_x                                       0x140B7310E
#define pinstDZMember_x                                            0x140B73198
#define pinstDZTimerInfo_x                                         0x140B731A0
#define pinstEqLogin_x                                             0x140BE3D00
#define instTribute_x                                              0x140A2A820
#define pinstEQSoundManager_x                                      0x140ABD0A8
#define pinstEQSpellStrings_x                                      0x140AA07A0
#define pinstSGraphicsEngine_x                                     0x14126A458
#define pinstLocalPC_x                                             0x140B6CB88
#define pinstLocalPlayer_x                                         0x140B6CA80
#define pinstCMercenaryClientManager_x                             0x140BE1358
#define pinstModelPlayer_x                                         0x140B6CAB0
#define pinstRenderInterface_x                                     0x14126A470
#define pinstSkillMgr_x                                            0x140BE3010
#define pinstSpawnManager_x                                        0x140BE1720
#define pinstSpellManager_x                                        0x140BE3158
#define pinstSpellSets_x                                           0x140BD8240
#define pinstStringTable_x                                         0x140B6CB90
#define pinstSwitchManager_x                                       0x140B6CA00
#define pinstTarget_x                                              0x140B6CB28
#define pinstTaskMember_x                                          0x140A2A810 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6CB38
#define pinstTradeTarget_x                                         0x140B6CAA8
#define instTributeActive_x                                        0x140A2A849
#define pinstViewActor_x                                           0x140ABC0C8
#define pinstWorldData_x                                           0x140B6CB78
#define pinstPlayerPath_x                                          0x140BE1748
#define pinstTargetIndicator_x                                     0x140BE3208
#define EQObject_Top_x                                             0x140B6CB60

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF6AB0
#define pinstCContainerMgr_x                                       0x140ABC1B8
#define pinstCContextMenuManager_x                                 0x140C0B680
#define pinstCInvSlotMgr_x                                         0x140ABC1A0
#define pinstCItemDisplayManager_x                                 0x140BF9510
#define pinstCPopupWndManager_x                                    0x140BF9DA0
#define pinstCSpellDisplayMgr_x                                    0x140BFA430
#define pinstCTaskManager_x                                        0x1408F3C60
#define pinstEQSuiteTextureLoader_x                                0x140A42830
#define pinstItemIconCache_x                                       0x140BF6E10
#define pinstLootFiltersManager_x                                  0x140ABB588

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6320
#define __CastRay2_x                                               0x1401F6030
#define __ConvertItemTags_x                                        0x1401F6720
#define __CleanItemTags_x                                          0x140059BC0
#define __CreateCascadeMenuItems_x                                 0x140151BB0
#define __DoesFileExist_x                                          0x1405051F0
#define __EQGetTime_x                                              0x140501890
#define __ExecuteCmd_x                                             0x1401CEEA0
#define __FixHeading_x                                             0x140602760
#define __FlushDxKeyboard_x                                        0x1402EAFB0
#define __get_bearing_x                                            0x1401FF9A0
#define __get_melee_range_x                                        0x1401FFA90
#define __GetAnimationCache_x                                      0x14035E660
#define __GetGaugeValueFromEQ_x                                    0x14047C400
#define __GetLabelFromEQ_x                                         0x14047DA10
#define __GetXTargetType_x                                         0x140603BD0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406027E0
#define __HelpPath_x                                               0x140BDF988   // Why?
#define __NewUIINI_x                                               0x1404885C0   // Why?
#define __ProcessGameEvents_x                                      0x140231B60
#define __ProcessKeyboardEvents_x                                  0x1402EC760
#define __ProcessMouseEvents_x                                     0x140232F70
#define __SaveColors_x                                             0x1401618C0
#define __STMLToText_x                                             0x14053AF50
#define __WndProc_x                                                0x1402E9720
#define CMemoryMappedFile__SetFile_x                               0x14073E8F0
#define DrawNetStatus_x                                            0x140279E50
#define Util__FastTime_x                                           0x140501400
#define __eq_delete_x                                              0x140608940
#define __eq_new_x                                                 0x140609000
#define __CopyLayout_x                                             0x140268760
#define __ThrottleFrameRate_x                                      0x140221A57
#define __ThrottleFrameRateEnd_x                                   0x140221AB7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB620
#define CAAWnd__Update_x                                           0x1402FB920
#define CAAWnd__UpdateSelected_x                                   0x1402FC8E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007C0D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140074B80
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076F480
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C940

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016C630
#define AltAdvManager__IsAbilityReady_x                            0x14016C8B0
#define AltAdvManager__GetAAById_x                                 0x14016BF00
#define AltAdvManager__CanTrainAbility_x                           0x14016BD30
#define AltAdvManager__CanSeeAbility_x                             0x14016B9F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A4710
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A55A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A57B0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8DB0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A60A0
#define CharacterZoneClient__CastSpell_x                           0x1400A6140
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4EE0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA3A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA560
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A90B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C0000
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE950  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA4C0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8330
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1B60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0A80
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA650
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009B5A0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009CE10
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1180
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BA090
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1D70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA6E0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2780
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA960
#define CharacterZoneClient__GetModCap_x                           0x1400CA0B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AAA00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AAB60
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009FCB0
#define CharacterZoneClient__HasSkill_x                            0x1400C58C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEBB0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400BADE0
#define CharacterZoneClient__Max_Endurance_x                       0x1402927F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9E80
#define CharacterZoneClient__Max_Mana_x                            0x1402929E0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA2F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2140
#define CharacterZoneClient__SpellDuration_x                       0x1400B2B30
#define CharacterZoneClient__TotalEffect_x                         0x1400B3D20
#define CharacterZoneClient__UseSkill_x                            0x1400CF8B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403189A0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140322720

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031E6F0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031D790

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140324D90

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CE810

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140344640
#define CChatWindowManager__InitContextMenu_x                      0x1403447D0
#define CChatWindowManager__FreeChatWindow_x                       0x140343890
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034B560
#define CChatWindowManager__CreateChatWindow_x                     0x1403431D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D76B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034C4D0
#define CChatWindow__Clear_x                                       0x14034D2E0
#define CChatWindow__WndNotification_x                             0x14034E460
#define CChatWindow__AddHistory_x                                  0x14034CDE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14054BF50
#define CContextMenu__RemoveMenuItem_x                             0x14054C460
#define CContextMenu__RemoveAllMenuItems_x                         0x14054C430
#define CContextMenu__CheckMenuItem_x                              0x14054C2A0
#define CContextMenu__SetMenuItem_x                                0x14054C480
#define CContextMenu__AddSeparator_x                               0x14054C0B0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14054CAD0
#define CContextMenuManager__RemoveMenu_x                          0x14054D050
#define CContextMenuManager__PopupMenu_x                           0x14054CDD0
#define CContextMenuManager__Flush_x                               0x14054CB50
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403586E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D7600
#define CChatService__GetFriendName_x                              0x1405D7610

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405480D0
#define CComboWnd__Draw_x                                          0x1405481D0
#define CComboWnd__GetCurChoice_x                                  0x1405484B0  // unused
#define CComboWnd__GetListRect_x                                   0x140548550
#define CComboWnd__InsertChoice_x                                  0x140548890
#define CComboWnd__SetColors_x                                     0x140548C20
#define CComboWnd__SetChoice_x                                     0x140548BE0
#define CComboWnd__GetItemCount_x                                  0x140548540
#define CComboWnd__GetCurChoiceText_x                              0x1405484F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140548480
#define CComboWnd__InsertChoiceAtIndex_x                           0x140548950

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140356760
#define CContainerWnd__SetContainer_x                              0x140357500
#define CContainerWnd__vftable_x                                   0x14079EFA8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABBE6C
#define CDisplay__ZoneMainUI_x                                     0x1402D1580
#define CDisplay__PreZoneMainUI_x                                  0x14015E7F0
#define CDisplay__CleanGameUI_x                                    0x140150CB0
#define CDisplay__GetClickedActor_x                                0x140154E60
#define CDisplay__GetUserDefinedColor_x                            0x140155940
#define CDisplay__InitCharSelectUI_x                               0x140155BF0
#define CDisplay__ReloadUI_x                                       0x140160B50
#define CDisplay__WriteTextHD2_x                                   0x140167AF0
#define CDisplay__TrueDistance_x                                   0x1401677D0
#define CDisplay__SetViewActor_x                                   0x1401640B0
#define CDisplay__GetFloorHeight_x                                 0x1401550C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401672D0
#define CDisplay__RealRender_World_x                               0x14015FEE0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14056CE40
#define CEditWnd__DrawCaret_x                                      0x14054F990  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054FE50
#define CEditWnd__GetCaretPt_x                                     0x1405500D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140550110
#define CEditWnd__GetDisplayString_x                               0x140550380
#define CEditWnd__GetHorzOffset_x                                  0x1405505C0
#define CEditWnd__GetLineForPrintableChar_x                        0x140550710
#define CEditWnd__GetSelStartPt_x                                  0x1405509F0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140550840
#define CEditWnd__PointFromPrintableChar_x                         0x1405515A0
#define CEditWnd__ReplaceSelection_x                               0x140551950
#define CEditWnd__SelectableCharFromPoint_x                        0x140551DF0
#define CEditWnd__SetEditable_x                                    0x140552080
#define CEditWnd__SetWindowText_x                                  0x1405520B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222E00
#define CEverQuest__ClickedPlayer_x                                0x140219110
#define CEverQuest__CreateTargetIndicator_x                        0x140219870
#define CEverQuest__DoTellWindow_x                                 0x1400D73C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7C80 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022B570
#define CEverQuest__dsp_chat_x                                     0x1400D6EE0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D7C0
#define CEverQuest__Emote_x                                        0x140224C60
#define CEverQuest__GetBodyTypeDesc_x                              0x1402259D0
#define CEverQuest__GetClassDesc_x                                 0x140225A30
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225E00
#define CEverQuest__GetDeityDesc_x                                 0x1402261B0
#define CEverQuest__GetLangDesc_x                                  0x1402265E0
#define CEverQuest__GetRaceDesc_x                                  0x140226980
#define CEverQuest__InterpretCmd_x                                 0x140228070
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023C940
#define CEverQuest__LMouseUp_x                                     0x140229AB0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A2E0
#define CEverQuest__RMouseUp_x                                     0x140233AE0
#define CEverQuest__SetGameState_x                                 0x14023EBF0
#define CEverQuest__UPCNotificationFlush_x                         0x1402442D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229730
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234E10
#define CEverQuest__ReportSuccessfulHit_x                          0x140235B50

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403689A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094E80
#define CGuild__GetGuildName_x                                     0x140094EC0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403850B0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E4B0
#define CHotButton__SetCheck_x                                     0x14025E740

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140393870
#define CInvSlotMgr__MoveItem_x                                    0x1403939C0
#define CInvSlotMgr__SelectSlot_x                                  0x1403953A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403914B0
#define CInvSlot__SliderComplete_x                                 0x1403926E0
#define CInvSlot__GetItemBase_x                                    0x14038DAE0
#define CInvSlot__UpdateItem_x                                     0x140392B60

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140395A00
#define CInvSlotWnd__HandleLButtonUp_x                             0x140396550

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B6090
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B89B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B2F00
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B45C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B54D0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404790E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047ACB0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B0110

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AF6B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140116F80

// CLabel
#define CLabel__UpdateText_x                                       0x1403BFD80

// CListWnd
#define CListWnd__CListWnd_x                                       0x14051F080
#define CListWnd__dCListWnd_x                                      0x14051F4C0
#define CListWnd__vftable_x                                        0x1407CDC10
#define CListWnd__AddColumn_x                                      0x14051FB60
#define CListWnd__AddColumn1_x                                     0x14051FC00
#define CListWnd__AddLine_x                                        0x14051FD60
#define CListWnd__AddString_x                                      0x1405202E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405209D0
#define CListWnd__CalculateVSBRange_x                              0x140520CB0
#define CListWnd__ClearSel_x                                       0x140520E60
#define CListWnd__ClearAllSel_x                                    0x140520E00
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140520EC0
#define CListWnd__Compare_x                                        0x140521080
#define CListWnd__Draw_x                                           0x140521550
#define CListWnd__DrawColumnSeparators_x                           0x1405220F0
#define CListWnd__DrawHeader_x                                     0x1405221B0
#define CListWnd__DrawItem_x                                       0x140522870
#define CListWnd__DrawLine_x                                       0x1405231F0
#define CListWnd__DrawSeparator_x                                  0x1405236B0
#define CListWnd__EnableLine_x                                     0x140523AD0
#define CListWnd__EnsureVisible_x                                  0x140523B30
#define CListWnd__ExtendSel_x                                      0x140523C30
#define CListWnd__GetColumnMinWidth_x                              0x140523F60
#define CListWnd__GetColumnWidth_x                                 0x140523FE0
#define CListWnd__GetCurSel_x                                      0x1405240E0
#define CListWnd__GetItemData_x                                    0x140524460
#define CListWnd__GetItemHeight_x                                  0x1405244A0
#define CListWnd__GetItemRect_x                                    0x140524660
#define CListWnd__GetItemText_x                                    0x140524900
#define CListWnd__GetSelList_x                                     0x140524B50
#define CListWnd__GetSeparatorRect_x                               0x140524D40
#define CListWnd__InsertLine_x                                     0x1405261C0
#define CListWnd__RemoveLine_x                                     0x1405267E0
#define CListWnd__SetColors_x                                      0x140526BB0
#define CListWnd__SetColumnJustification_x                         0x140526BD0
#define CListWnd__SetColumnLabel_x                                 0x140526C50
#define CListWnd__SetColumnWidth_x                                 0x140526DF0
#define CListWnd__SetCurSel_x                                      0x140526EC0
#define CListWnd__SetItemColor_x                                   0x140527130
#define CListWnd__SetItemData_x                                    0x1405271D0
#define CListWnd__SetItemText_x                                    0x140527410
#define CListWnd__Sort_x                                           0x140527820
#define CListWnd__ToggleSel_x                                      0x140527990
#define CListWnd__SetColumnsSizable_x                              0x140526E40
#define CListWnd__SetItemWnd_x                                     0x140527540
#define CListWnd__GetItemWnd_x                                     0x140524AE0
#define CListWnd__SetItemIcon_x                                    0x140527210
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405207A0
#define CListWnd__SetVScrollPos_x                                  0x140527780

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D2810

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AA620
#define MapViewMap__Clear_x                                        0x1403D4390
#define MapViewMap__SetZoom_x                                      0x1403DA950
#define MapViewMap__HandleLButtonDown_x                            0x1403D7490

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FBEC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140401AE0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140403B00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140405910
#define CMerchantWnd__SelectBuySellSlot_x                          0x140404D30
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140408FC0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14058C3F0
#define CPacketScrambler__hton_x                                   0x14058C3E0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405457A0
#define CSidlManagerBase__FindAnimation1_x                         0x1405456E0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140545DD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140545B80
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140544AE0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140544A70
#define CSidlManagerBase__CreateXWnd_x                             0x1405440D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046B870
#define CSidlManager__CreateXWnd_x                                 0x14046BA30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14053CA20
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14053CB50
#define CSidlScreenWnd__ConvertToRes_x                             0x1405673E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14053CC80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14053C2C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14053C210
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14053C4E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14053D250
#define CSidlScreenWnd__EnableIniStorage_x                         0x14053D480
#define CSidlScreenWnd__GetChildItem_x                             0x14053D620
#define CSidlScreenWnd__GetSidlPiece_x                             0x14053D840
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14052F290 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14053DBB0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14053DF20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14053E7D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14053F080
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0B528
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053F6A0
#define CSidlScreenWnd__StoreIniVis_x                              0x14053FE90
#define CSidlScreenWnd__vftable_x                                  0x1407CEC70
#define CSidlScreenWnd__WndNotification_x                          0x14053FEE0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D1910 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D1D10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D1C50
#define CSkillMgr__IsActivatedSkill_x                              0x1402D20B0
#define CSkillMgr__IsCombatSkill_x                                 0x1402D20F0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404885E0
#define CSliderWnd__SetValue_x                                     0x14054E610
#define CSliderWnd__SetNumTicks_x                                  0x14054E490

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140472D80

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140556B60
#define CStmlWnd__CalculateHSBRange_x                              0x14052EC80
#define CStmlWnd__CalculateVSBRange_x                              0x140557A10
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140558510
#define CStmlWnd__ForceParseNow_x                                  0x1405585B0
#define CStmlWnd__GetVisibleText_x                                 0x140558C90
#define CStmlWnd__MakeStmlColorTag_x                               0x14055AA20
#define CStmlWnd__MakeWndNotificationTag_x                         0x14055AA60
#define CStmlWnd__SetSTMLText_x                                    0x140561A40
#define CStmlWnd__StripFirstSTMLLines_x                            0x140561BF0
#define CStmlWnd__UpdateHistoryString_x                            0x140561F80

// CTabWnd
#define CTabWnd__Draw_x                                            0x140553650
#define CTabWnd__DrawCurrentPage_x                                 0x1405536F0
#define CTabWnd__DrawTab_x                                         0x140553AC0
#define CTabWnd__GetTabRect_x                                      0x140554120
#define CTabWnd__InsertPage_x                                      0x1405543F0
#define CTabWnd__RemovePage_x                                      0x140554680
#define CTabWnd__SetPage_x                                         0x1405547E0
#define CTabWnd__UpdatePage_x                                      0x140554AE0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140553250
#define CPageWnd__SetTabText_x                                     0x1405532C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008E3D0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E7E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140528AE0
#define CTextureFont__DrawWrappedText1_x                           0x1405289F0
#define CTextureFont__DrawWrappedText2_x                           0x140528C10
#define CTextureFont__GetTextExtent_x                              0x140528FC0
#define CTextureFont__GetHeight_x                                  0x140528F80

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140565B40

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14051BCF0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A421B0
#define CXStr__gCXStrAccess_x                                      0x140C0A9D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14052A510
#define CXWnd__ClrFocus_x                                          0x14052A750
#define CXWnd__Destroy_x                                           0x14052A890
#define CXWnd__DoAllDrawing_x                                      0x14052A990
#define CXWnd__DrawColoredRect_x                                   0x14052B150
#define CXWnd__DrawTooltip_x                                       0x14052C7C0
#define CXWnd__DrawTooltipAtPoint_x                                0x14052C870
#define CXWnd__GetChildItem_x                                      0x14052D170
#define CXWnd__GetChildWndAt_x                                     0x14052D230
#define CXWnd__GetClientClipRect_x                                 0x14052D390
#define CXWnd__GetRelativeRect_x                                   0x14052EDA0
#define CXWnd__GetScreenClipRect_x                                 0x14052EEB0
#define CXWnd__GetScreenRect_x                                     0x14052F020
#define CXWnd__GetTooltipRect_x                                    0x14052F1A0
#define CXWnd__IsActive_x                                          0x14052F710
#define CXWnd__IsDescendantOf_x                                    0x14052F740
#define CXWnd__IsReallyVisible_x                                   0x14052F7B0
#define CXWnd__IsType_x                                            0x14052F7F0
#define CXWnd__Minimize_x                                          0x14052F8F0
#define CXWnd__ProcessTransition_x                                 0x140530900
#define CXWnd__Refade_x                                            0x140530A00
#define CXWnd__Resize_x                                            0x140530A20
#define CXWnd__Right_x                                             0x140530AC0
#define CXWnd__SetFocus_x                                          0x140530E90
#define CXWnd__SetFont_x                                           0x140530EE0
#define CXWnd__SetKeyTooltip_x                                     0x140530FF0
#define CXWnd__SetMouseOver_x                                      0x140531130
#define CXWnd__SetParent_x                                         0x1405311B0
#define CXWnd__StartFade_x                                         0x1405315E0
#define CXWnd__vftable_x                                           0x1407CE388
#define CXWnd__CXWnd_x                                             0x1405290E0
#define CXWnd__dCXWnd_x                                            0x140529A00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14056C5C0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140532E00
#define CXWndManager__DrawWindows_x                                0x140532F30
#define CXWndManager__GetKeyboardFlags_x                           0x1405335F0
#define CXWndManager__HandleKeyboardMsg_x                          0x140533630
#define CXWndManager__RemoveWnd_x                                  0x140536A60

// CDBStr
#define CDBStr__GetString_x                                        0x14014EEB0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405BD600

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A25B0
#define CCharacterListWnd__EnterWorld_x                            0x1400A1260
#define CCharacterListWnd__Quit_x                                  0x1400A2590
#define CCharacterListWnd__UpdateList_x                            0x1400A32A0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058DB20
#define ItemBase__CreateItemTagString_x                            0x14058E510
#define ItemBase__GetImageNum_x                                    0x1405906D0
#define ItemBase__GetItemValue_x                                   0x140592270
#define ItemBase__IsEmpty_x                                        0x140593D90
#define ItemBase__IsKeyRingItem_x                                  0x1405944A0
#define ItemBase__ValueSellMerchant_x                              0x1405987F0
#define ItemClient__CanDrop_x                                      0x140260910
#define ItemClient__CanGoInBag_x                                   0x140260A40
#define ItemClient__CreateItemClient_x                             0x140260D00
#define ItemClient__dItemClient_x                                  0x140260770

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016DDD0
#define EQ_LoadingS__Array_x                                       0x140A2CBA0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A3DA0
#define PcBase__GetCombatAbility_x                                 0x1405A43F0
#define PcBase__GetCombatAbilityTimer_x                            0x1405A4490
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A4BA0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A5420
#define PcClient__AlertInventoryChanged_x                          0x140281410
#define PcClient__GetConLevel_x                                    0x1402818E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402841B0
#define PcClient__HasLoreItem_x                                    0x140285220
#define PcZoneClient__GetItemRecastTimer_x                         0x140291190
#define PcZoneClient__RemoveMyAffect_x                             0x140293810

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D3520  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D3590  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D36A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D3600  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020AC20  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401497A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140600E90
#define PlayerBase__CanSee1_x                                      0x140600F60
#define PlayerBase__GetVisibilityLineSegment_x                     0x140601490
#define PlayerBase__HasProperty_x                                  0x1406016B0
#define PlayerBase__IsTargetable_x                                 0x140601770
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F410
#define PlayerClient__GetPcClient_x                                0x1402A19A0
#define PlayerClient__PlayerClient_x                               0x1402985F0
#define PlayerClient__SetNameSpriteState_x                         0x1402A4DD0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5D70
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3D40
#define PlayerZoneClient__DoAttack_x                               0x1402B4A30
#define PlayerZoneClient__GetLevel_x                               0x1402B7FA0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020D9E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D090

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD660  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD690  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD740
#define PlayerManagerClient__CreatePlayer_x                        0x1402AD050
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140600B10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265CA0
#define pinstKeyPressHandler_x                                     0x140BE0E14
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402658A0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265910
#define KeypressHandler__ClearCommandStateArray_x                  0x140265C30  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265DC0
#define KeypressHandler__HandleKeyUp_x                             0x140265EA0
#define KeypressHandler__SaveKeymapping_x                          0x140265B40  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405BAEF0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B5450

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A830  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F800
#define PcZoneClient__GetPcSkillLimit_x                            0x1402916F0
#define PcZoneClient__RemovePetEffect_x                            0x140293910
#define PcZoneClient__HasAlternateAbility_x                        0x140292160
#define PcZoneClient__CanEquipItem_x                               0x14028DBD0
#define PcZoneClient__GetItemByID_x                                0x140290740
#define PcZoneClient__RemoveBuffEffect_x                           0x1402936C0
#define PcZoneClient__BandolierSwap_x                              0x14028CD90
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291640

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402124A0

// IconCache
#define IconCache__GetIcon_x                                       0x14035E690

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140355540
#define CContainerMgr__CloseContainer_x                            0x140354F00
#define CContainerMgr__OpenExperimentContainer_x                   0x1403558A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140432B70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259220

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C69F0
#define CLootWnd__RequestLootSlot_x                                0x1403C79D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140198E10
#define EQ_Spell__SpellAffects_x                                   0x14019A0B0
#define EQ_Spell__SpellAffectBase_x                                0x14019A010
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAD00
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AACB0
#define EQ_Spell__IsSPAStacking_x                                  0x140199CD0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199890
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199170

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400938B0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048B670  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048B6B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048AEC0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048A690

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140492690  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140146130
#define CTaskManager__GetTaskStatus_x                              0x140146240
#define CTaskManager__GetElementDescription_x                      0x140145DC0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197170
#define EqSoundManager__PlayScriptMp3_x                            0x140195F70
#define EqSoundManager__SoundAssistPlay_x                          0x1402D80F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D8420  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405528B0
#define CTextureAnimation__SetCurCell_x                            0x140552BC0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257500

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D5130
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D51B0
#define CharacterBase__IsExpansionFlag_x                           0x1401B7B50

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140337000
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140337940
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140338600

// messages
#define msg_spell_worn_off_x                                       0x1401CACB0
#define msg_new_text_x                                             0x1401C6AF0
#define __msgTokenTextParam_x                                      0x1401BEA90
#define msgTokenText_x                                             0x1401BE9B0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9AB0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D99D0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140603FB0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C04C0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035A850
#define CCursorAttachment__AttachToCursor1_x                       0x1403594B0
#define CCursorAttachment__Deactivate_x                            0x14035AD50

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140563D90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140563F80
#define CEQSuiteTextureLoader__GetTexture_x                        0x140563F90

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401128F0
#define CFindItemWnd__Update_x                                     0x140112AD0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E140

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011B740
#define LootFiltersManager__GetItemFilterData_x                    0x14011C260
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CB00
#define LootFiltersManager__SetItemLootFilter_x                    0x14011CDB0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140416220

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140608380
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D05D0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140351B10

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D8F80  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D9090  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140373C00
#define CGroupWnd__UpdateDisplay_x                                 0x1403739A0

// ItemBase
#define ItemBase__IsLore_x                                         0x140594570
#define ItemBase__IsLoreEquipped_x                                 0x1405946D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402782A0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020AD80
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020AD10
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020AD50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAFE0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF470
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF820
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEC40
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEC40
#define FactionManagerClient__GetMinFaction_x                      0x1400EEAF0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007E360

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAB10

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401765E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401759C0
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176400  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140176380  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DE1B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAFE0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D3790

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140513E20

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056ED0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F1980

// AchievementManager
#define AchievementManager__Instance_x                             0x14005E570

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
