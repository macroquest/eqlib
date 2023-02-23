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

#define __ClientDate                                               20130510u
#define __ExpectedVersionDate                                     "May 10 2013"
#define __ExpectedVersionTime                                     "23:30:08"
#define __ActualVersionDate_x                                      0x9DD250
#define __ActualVersionTime_x                                      0x9DD25C

// Memory Protection
#define __MemChecker0_x                                            0x5643F0
#define __MemChecker1_x                                            0x808CB0
#define __MemChecker2_x                                            0x5F97E0
#define __MemChecker3_x                                            0x5F9730
#define __EncryptPad0_x                                            0xAE42D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDDF618
#define instEQZoneInfo_x                                           0xDDF8F0

#define __ScreenX_x                                                0xDDF624
#define __ScreenY_x                                                0xDDF620
#define __ScreenXMax_x                                             0xDDF628
#define __ScreenYMax_x                                             0xDDF62C
#define __InChatMode_x                                             0xDDF66C
#define __RunWalkState_x                                           0xDDF670
#define DI8__Mouse_Copy_x                                          0xDDF684
#define __MouseLook_x                                              0xDDF702
#define __NetStatusToggle_x                                        0xDDF705
#define __pulAutoRun_x                                             0xDDF720
#define __Clicks_x                                                 0xDDF734
#define __RMouseHeldTime_x                                         0xDDF79C
#define __LMouseHeldTime_x                                         0xDDF7A0
#define __ZoneType_x                                               0xDDFAF8
#define __ShiftKeyDown_x                                           0xDDFD00
#define __RangeAttackReady_x                                       0xDE0864
#define __AttackOnAssist_x                                         0xDE09DC
#define __ShowNames_x                                              0xDE0A70
#define __PCNames_x                                                0xDE0BC8
#define __UseTellWindows_x                                         0xDE0D58
#define __pulForward_x                                             0xDE0D90
#define __pulBackward_x                                            0xDE0D94
#define __pulTurnRight_x                                           0xDE0D98
#define __pulTurnLeft_x                                            0xDE0D9C
#define __pulStrafeLeft_x                                          0xDE0DA0
#define __pulStrafeRight_x                                         0xDE0DA4
#define __LastTell_x                                               0xDE1558
#define __ServerName_x                                             0xE15E10
#define __DoAbilityList_x                                          0xE15E50
#define __SocialChangedList_x                                      0xE15E98
#define __Socials_x                                                0xE15F10
#define __Inviter_x                                                0xE63528
#define __Attack_x                                                 0xE635AA
#define __Autofire_x                                               0xE635AB
#define EverQuest__Cameras_x                                       0xDE0D64
#define EverQuestinfo__IsItemPending_x                             0xE635AC


// Misc Globals
#define __do_loot_x                                                0x4E7880
#define __gfMaxZoomCameraDistance_x                                0x9D0DE4
#define __gfMaxCameraDistance_x                                    0xA002C4
#define __CurrentSocial_x                                          0xAB6A28
#define __BindList_x                                               0xACBEE8
#define g_eqCommandStates_x                                        0xDCEF08
#define __CommandList_x                                            0xACD5A8
#define __ScreenMode_x                                             0xD1F3B8
#define __gWorld_x                                                 0xDD25AC
#define __gpbCommandEvent_x                                        0xDD2670
#define __ServerHost_x                                             0xDD003C
#define __Guilds_x                                                 0xDD5CF8
#define __MouseEventTime_x                                         0xE639CC
#define DI8__Mouse_Check_x                                         0xE67884
#define __heqmain_x                                                0xE67CD0
#define DI8__Mouse_x                                               0xE67B50
#define __HWnd_x                                                   0xE678A0
#define __Mouse_x                                                  0xE67B54
#define DI8__Main_x                                                0xE67B48
#define DI8__Keyboard_x                                            0xE67B4C
#define __LoginName_x                                              0xE66478
#define __CurrentMapLabel_x                                        0xF73E00
#define __LabelCache_x                                             0xF74AB0
#define __SubscriptionType_x                                       0xF9C298
#define Teleport_Table_Size_x                                      0xDD25B4
#define Teleport_Table_x                                           0xDD02E0
#define __ExceptionFilter_x                                        0x5FA950

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xDD2690
#define pinstActiveBanker_x                                        0xDD2650
#define pinstActiveCorpse_x                                        0xDD2654
#define pinstActiveGMaster_x                                       0xDD2658
#define pinstActiveMerchant_x                                      0xDD264C
#define pinstAltAdvManager_x                                       0xD20358
#define pinstCEverQuest_x                                          0xE67CCC
#define pinstCamActor_x                                            0xD1FD8C
#define pinstCDBStr_x                                              0xD1F380
#define pinstCDisplay_x                                            0xDD2660
#define pinstControlledPlayer_x                                    0xDD2644
#define pinstCResolutionHandler_x                                  0x15D46CC
#define pinstCSidlManager_x                                        0x15D3D08
#define pinstCXWndManager_x                                        0x15D3D00
#define instDynamicZone_x                                          0xDDF4D0
#define instExpeditionLeader_x                                     0xDDF51A
#define instExpeditionName_x                                       0xDDF55A
#define pinstDZMember_x                                            0xDDF5E0
#define pinstDZTimerInfo_x                                         0xDDF5E4
#define pinstEqLogin_x                                             0xE65DC8
#define instTribute_x                                              0xABFCD0
#define pinstEQSoundManager_x                                      0xD20460
//#define pinstEQSpellStrings_x                                    0x0
#define pinstSGraphicsEngine_x                                     0x15D4698
#define pinstLocalPC_x                                             0xDD261C
#define pinstLocalPlayer_x                                         0xDD2630
#define pinstCMercenaryClientManager_x                             0xE63E90
//#define pinstMercenaryStats_x                                      0x0
#define pinstModelPlayer_x                                         0xDD265C
#define pinstRenderInterface_x                                     0x15D46A4
#define pinstSkillMgr_x                                            0xE64610
#define pinstSpawnManager_x                                        0xE641D0
#define pinstSpellManager_x                                        0xE646B0
#define pinstSpellSets_x                                           0xE5C8B4
#define pinstStringTable_x                                         0xDD25C4
#define pinstSwitchManager_x                                       0xDCFD00
#define pinstTarget_x                                              0xDD2648
#define pinstTaskMember_x                                          0xD1F314
#define pinstTrackTarget_x                                         0xDD263C
#define pinstTradeTarget_x                                         0xDD262C
#define instTributeActive_x                                        0xABFCF5
#define pinstViewActor_x                                           0xD1FD88
#define pinstWorldData_x                                           0xDD2600
#define pinstPlayerPath_x                                          0xE641F8
#define pinstTargetIndicator_x                                     0xE64748
#define EQObject_Top_x                                             0xDD2610

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0xF71070
#define pinstCContainerMgr_x                                       0xD1FD84
#define pinstCContextMenuManager_x                                 0x15D391C
#define pinstCInvSlotMgr_x                                         0xD1FD80
#define pinstCItemDisplayManager_x                                 0xF73A28
#define pinstCPopupWndManager_x                                    0xF74338
#define pinstCSpellDisplayMgr_x                                    0xF749F0
#define pinstCTaskManager_x                                        0xB82C80
#define pinstEQSuiteTextureLoader_x                                0xB64CEC
#define pinstItemIconCache_x                                       0xF71398
//#define pinstLootFiltersManager_x                                  0x0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x4FD1D0
#define __CastRay2_x                                               0x4FCC20
#define __ConvertItemTags_x                                        0x4ED110
#define __CleanItemTags_x                                          0x4ED580
#define __CreateCascadeMenuItems_x                                 0x494BD0
#define __DoesFileExist_x                                          0x80BDD0
#define __EQGetTime_x                                              0x809810
#define __ExecuteCmd_x                                             0x4D7230
#define __FixHeading_x                                             0x8D1F50
#define __FlushDxKeyboard_x                                        0x5F9A70
#define __get_bearing_x                                            0x4EF250
#define __get_melee_range_x                                        0x4DDEB0
#define __GetAnimationCache_x                                      0x665430
#define __GetGaugeValueFromEQ_x                                    0x762410
#define __GetLabelFromEQ_x                                         0x763640
#define __GetXTargetType_x                                         0x8D3BE0
#define __HandleMouseWheel_x                                       0x5F9C90
#define __HeadingDiff_x                                            0x8D1FC0
#define __HelpPath_x                                               0xE63870
#define __InitMouse_x                                              0x5FC850
#define __NewUIINI_x                                               0x761D40
#define __ProcessGameEvents_x                                      0x53A6C0
#define __ProcessKeyboardEvents_x                                  0x5FDA30
#define __ProcessMouseEvents_x                                     0x539E60
#define __SaveColors_x                                             0x489FB0
#define __STMLToText_x                                             0x860620
#define __WndProc_x                                                0x5FCD80
#define CMemoryMappedFile__SetFile_x                               0x8FC1B0
#define DrawNetStatus_x                                            0x573620
#define Util__FastTime_x                                           0x808B50
#define __eq_delete_x                                              0x8DB146
#define __eq_new_x                                                 0x8DBB3B
#define __CopyLayout_x                                             0x55BE50
#define __ThrottleFrameRate_x                                      0x517EE0 // SleepWell

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x60A7A0
#define CAAWnd__Update_x                                           0x609F90
#define CAAWnd__UpdateSelected_x                                   0x608650

// CAdvancedLootWnd
// #define CAdvancedLootWnd__DoAdvLootAction_x                        0x0
// #define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x0
// #define CAdvancedLootWnd__AddPlayerToList_x                        0x0
// #define CAdvancedLootWnd__UpdateMasterLooter_x                     0x0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x4A3840
#define AltAdvManager__IsAbilityReady_x                            0x4A3880
#define AltAdvManager__GetAAById_x                                 0x4A3C60
#define AltAdvManager__CanTrainAbility_x                           0x4A44C0
#define AltAdvManager__CanSeeAbility_x                             0x4A40F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x432960
#define CharacterZoneClient__CalcAffectChange_x                    0x436670
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x434DF0
#define CharacterZoneClient__CanUseItem_x                          0x44C430
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x433BC0
#define CharacterZoneClient__CastSpell_x                           0x43A830
#define CharacterZoneClient__CharacterZoneClient_x                 0x45AB40
#define CharacterZoneClient__Cur_HP_x                              0x449E00
#define CharacterZoneClient__Cur_Mana_x                            0x4442E0
#define CharacterZoneClient__FindAffectSlot_x                      0x43D300
#define CharacterZoneClient__GetAdjustedSkill_x                    0x449FE0
#define CharacterZoneClient__GetBaseSkill_x                        0x449C80
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4336D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x451FD0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x448EC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x432AD0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x42C9A0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x42CB80
#define CharacterZoneClient__GetFocusReuseMod_x                    0x42CEC0
#define CharacterZoneClient__GetHPRegen_x                          0x4527F0
#define CharacterZoneClient__GetItemCountInInventory_x             0x451ED0
#define CharacterZoneClient__GetItemCountWorn_x                    0x451DE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x438EE0
#define CharacterZoneClient__GetManaRegen_x                        0x452DF0
#define CharacterZoneClient__GetMaxEffects_x                       0x432630
#define CharacterZoneClient__GetModCap_x                           0x57F550
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x43A6D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x433FD0
#define CharacterZoneClient__HasSkill_x                            0x44A1B0
#define CharacterZoneClient__IsStackBlocked_x                      0x4341E0
#define CharacterZoneClient__MakeMeVisible_x                       0x4592B0
#define CharacterZoneClient__Max_Endurance_x                       0x582020
#define CharacterZoneClient__Max_HP_x                              0x443FA0
#define CharacterZoneClient__Max_Mana_x                            0x581E60
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4591B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x43A7A0
#define CharacterZoneClient__SpellDuration_x                       0x434420
#define CharacterZoneClient__TotalEffect_x                         0x438990
#define CharacterZoneClient__UseSkill_x                            0x45B2D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x6293C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x631A10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x62D810
#define CBarterSearchWnd__UpdateInventoryList_x                    0x62C960

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x635530

// CButtonWnd
#define CButtonWnd__vftable_x                                      0xA1B41C

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x6508A0
#define CChatWindowManager__InitContextMenu_x                      0x6513C0
#define CChatWindowManager__FreeChatWindow_x                       0x650420
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x650870
#define CChatWindowManager__CreateChatWindow_x                     0x6549B0

// ChatManagerClient
//#define ChatManagerClient__Instance_x                              0x0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x656100
#define CChatWindow__Clear_x                                       0x655CB0
#define CChatWindow__WndNotification_x                             0x656640
#define CChatWindow__AddHistory_x                                  0x655AC0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x85B7B0
#define CContextMenu__RemoveMenuItem_x                             0x85BAA0
#define CContextMenu__RemoveAllMenuItems_x                         0x85BAC0
#define CContextMenu__CheckMenuItem_x                              0x85BB40
#define CContextMenu__SetMenuItem_x                                0x85B9C0
#define CContextMenu__AddSeparator_x                               0x85B930

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x861A90
#define CContextMenuManager__RemoveMenu_x                          0x861DD0
#define CContextMenuManager__PopupMenu_x                           0x862220
#define CContextMenuManager__Flush_x                               0x861B00
#define CContextMenuManager__CreateDefaultMenu_x                   0x660480

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x7EFA80
#define CChatService__GetFriendName_x                              0x7EFA90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x86A960
#define CComboWnd__Draw_x                                          0x86AB40
#define CComboWnd__GetCurChoice_x                                  0x86A780
#define CComboWnd__GetListRect_x                                   0x86ADE0
#define CComboWnd__GetTextRect_x                                   0x86A9C0
#define CComboWnd__InsertChoice_x                                  0x86AE50
#define CComboWnd__SetColors_x                                     0x86A710
#define CComboWnd__SetChoice_x                                     0x86A740
#define CComboWnd__GetItemCount_x                                  0x86A770
#define CComboWnd__GetCurChoiceText_x                              0x86A790
#define CComboWnd__GetChoiceText_x                                 0x86A800

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x65F7B0
#define CContainerWnd__SetContainer_x                              0x65E1F0
#define CContainerWnd__vftable_x                                   0x9E6758

// CDisplay
#define CDisplay__cameraType_x                                     0xD1FD9C
#define CDisplay__ZoneMainUI_x                                     0x4891A0
#define CDisplay__PreZoneMainUI_x                                  0x489190
#define CDisplay__CleanGameUI_x                                    0x4936E0
#define CDisplay__GetClickedActor_x                                0x48B6B0
#define CDisplay__GetUserDefinedColor_x                            0x489F70
#define CDisplay__InitCharSelectUI_x                               0x4967B0
#define CDisplay__ReloadUI_x                                       0x49D6B0
#define CDisplay__WriteTextHD2_x                                   0x48EB40
#define CDisplay__TrueDistance_x                                   0x48C2C0
#define CDisplay__SetViewActor_x                                   0x48F030
#define CDisplay__GetFloorHeight_x                                 0x48C5B0
#define CDisplay__SetRenderWindow_x                                0x494080
#define CDisplay__ToggleScreenshotMode_x                           0x48D030
#define CDisplay__RealRender_World_x                               0x49CA10

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x88C0C0
#define CEditWnd__DrawCaret_x                                      0x87B230
#define CEditWnd__EnsureCaretVisible_x                             0x87D240
#define CEditWnd__GetCaretPt_x                                     0x87CCF0
#define CEditWnd__GetCharIndexPt_x                                 0x87C260
#define CEditWnd__GetDisplayString_x                               0x87B3E0
#define CEditWnd__GetHorzOffset_x                                  0x87B720
#define CEditWnd__GetLineForPrintableChar_x                        0x87BD20
#define CEditWnd__GetSelStartPt_x                                  0x87C520
#define CEditWnd__GetSTMLSafeText_x                                0x87B8C0
#define CEditWnd__PointFromPrintableChar_x                         0x87BE10
#define CEditWnd__ReplaceSelection_x                               0x87CD30
#define CEditWnd__SelectableCharFromPoint_x                        0x87BF90
#define CEditWnd__SetEditable_x                                    0x87B890
#define CEditWnd__SetWindowText_x                                  0x87DD00

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x51B600
#define CEverQuest__ClickedPlayer_x                                0x5190A0
#define CEverQuest__CreateTargetIndicator_x                        0x519D00
#define CEverQuest__DeleteTargetIndicator_x                        0x519D80
#define CEverQuest__DoTellWindow_x                                 0x51DA00
#define CEverQuest__OutputTextToLog_x                              0x5130C0
#define CEverQuest__DropHeldItemOnGround_x                         0x526290
#define CEverQuest__dsp_chat_x                                     0x51F1A0
#define CEverQuest__trimName_x                                     0x5172D0
#define CEverQuest__Emote_x                                        0x51F400
#define CEverQuest__EnterZone_x                                    0x531F90
#define CEverQuest__GetBodyTypeDesc_x                              0x515660
#define CEverQuest__GetClassDesc_x                                 0x514DC0
#define CEverQuest__GetClassThreeLetterCode_x                      0x5153C0
#define CEverQuest__GetDeityDesc_x                                 0x515F70
#define CEverQuest__GetLangDesc_x                                  0x5159F0
#define CEverQuest__GetRaceDesc_x                                  0x515CE0
#define CEverQuest__InterpretCmd_x                                 0x51FCE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x536310
#define CEverQuest__LMouseUp_x                                     0x5384D0
#define CEverQuest__RightClickedOnPlayer_x                         0x536D80
#define CEverQuest__RMouseUp_x                                     0x537D30
#define CEverQuest__SetGameState_x                                 0x519750
#define CEverQuest__UPCNotificationFlush_x                         0x520C70
#define CEverQuest__IssuePetCommand_x                              0x5209B0
//#define CEverQuest__ReportSuccessfulHeal_x                         0x0
#define CEverQuest__ReportSuccessfulHit_x                          0x52EE40

// CGaugeWnd
#define CGaugeWnd__CalcFillRect_x                                  0x66F7A0
#define CGaugeWnd__CalcLinesFillRect_x                             0x66F800
#define CGaugeWnd__Draw_x                                          0x66FC30

// CGuild
#define CGuild__FindMemberByName_x                                 0x423D70
#define CGuild__GetGuildName_x                                     0x425670
#define CGuild__GetGuildIndex_x                                    0x425860

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x68C8B0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x550120
#define CHotButton__SetCheck_x                                     0x54FBE0

// CInvSlotMgr
#define CInvSlotMgr__MoveItem_x                                    0x698D80
#define CInvSlotMgr__SelectSlot_x                                  0x697F00

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x697250
#define CInvSlot__SliderComplete_x                                 0x695270
#define CInvSlot__GetItemBase_x                                    0x694780
#define CInvSlot__UpdateItem_x                                     0x694D20

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x69AC10
#define CInvSlotWnd__HandleLButtonUp_x                             0x69A5D0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x6AE100
#define CItemDisplayWnd__UpdateStrings_x                           0x69AE30
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x6A8190
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x6A86B0
//#define CItemDisplayWnd__RequestConvertItem_x                      0x0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x75F060
#define CSpellDisplayWnd__UpdateStrings_x                          0x75EAC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x796420

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x6A1AE0

// CKeyRingWnd
//#define CKeyRingWnd__ExecuteRightClick_x                           0x0

// CLabel
#define CLabel__UpdateText_x                                       0x6B4D40

// CListWnd
#define CListWnd__CListWnd_x                                       0x857C00
#define CListWnd__dCListWnd_x                                      0x858C80
#define CListWnd__vftable_x                                        0xA1927C
#define CListWnd__AddColumn_x                                      0x858C20
#define CListWnd__AddColumn1_x                                     0x858400
#define CListWnd__AddLine_x                                        0x857EB0
#define CListWnd__AddString_x                                      0x8580C0
#define CListWnd__CalculateFirstVisibleLine_x                      0x854F70
#define CListWnd__CalculateVSBRange_x                              0x8570B0
#define CListWnd__ClearSel_x                                       0x854270
#define CListWnd__ClearAllSel_x                                    0x854220
#define CListWnd__CloseAndUpdateEditWindow_x                       0x857A90
#define CListWnd__Compare_x                                        0x855A80
#define CListWnd__Draw_x                                           0x856D10
#define CListWnd__DrawColumnSeparators_x                           0x856BA0
#define CListWnd__DrawHeader_x                                     0x854530
#define CListWnd__DrawItem_x                                       0x8560D0
#define CListWnd__DrawLine_x                                       0x856840
#define CListWnd__DrawSeparator_x                                  0x856C40
#define CListWnd__EnableLine_x                                     0x854440
#define CListWnd__EnsureVisible_x                                  0x8550D0
#define CListWnd__ExtendSel_x                                      0x855FE0
#define CListWnd__GetColumnTooltip_x                               0x853C40
#define CListWnd__GetColumnMinWidth_x                              0x853D70
#define CListWnd__GetColumnWidth_x                                 0x853B60
#define CListWnd__GetCurSel_x                                      0x853430
#define CListWnd__GetItemAtPoint_x                                 0x855370
#define CListWnd__GetItemAtPoint1_x                                0x8553E0
#define CListWnd__GetItemData_x                                    0x853680
#define CListWnd__GetItemHeight_x                                  0x854BC0
#define CListWnd__GetItemIcon_x                                    0x853860
#define CListWnd__GetItemRect_x                                    0x8551B0
#define CListWnd__GetItemText_x                                    0x853710
#define CListWnd__GetSelList_x                                     0x8582F0
#define CListWnd__GetSeparatorRect_x                               0x8559A0
#define CListWnd__InsertLine_x                                     0x858290
#define CListWnd__RemoveLine_x                                     0x8582A0
#define CListWnd__SetColors_x                                      0x853490
#define CListWnd__SetColumnJustification_x                         0x853F10
#define CListWnd__SetColumnLabel_x                                 0x8544D0
#define CListWnd__SetColumnWidth_x                                 0x853BF0
#define CListWnd__SetCurSel_x                                      0x853470
#define CListWnd__SetItemColor_x                                   0x857770
#define CListWnd__SetItemData_x                                    0x8542D0
#define CListWnd__SetItemText_x                                    0x8575B0
#define CListWnd__ShiftColumnSeparator_x                           0x857440
#define CListWnd__Sort_x                                           0x858D80
#define CListWnd__ToggleSel_x                                      0x8541A0
#define CListWnd__SetColumnsSizable_x                              0x855F20
#define CListWnd__SetItemWnd_x                                     0x857630
#define CListWnd__GetItemWnd_x                                     0x8538B0
#define CListWnd__SetItemIcon_x                                    0x857540
#define CListWnd__CalculateCustomWindowPositions_x                 0x8571E0
#define CListWnd__SetVScrollPos_x                                  0x855C00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x6CFB70

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x6C7E60
#define MapViewMap__dMapViewMap_x                                  0x6CC580
#define MapViewMap__vftable_x                                      0x9EE580
#define MapViewMap__Clear_x                                        0x6C7FD0
#define MapViewMap__SetZoom_x                                      0x6C7C40
#define MapViewMap__HandleLButtonDown_x                            0x6C9430
#define MapViewMap__GetWorldCoordinates_x                          0x6C88A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x6EF750
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x6F5BE0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x6F6650
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x6EEC30
#define CMerchantWnd__SelectBuySellSlot_x                          0x6F31A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x6F0BB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x7D03B0
#define CPacketScrambler__hton_x                                   0x7D03C0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x86C160
#define CSidlManagerBase__CreatePageWnd_x                          0x86BDB0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x86CF40
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x86CED0
#define CSidlManagerBase__FindAnimation1_x                         0x86E010
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x870040
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x870120
#define CSidlManagerBase__CreateLabel_x                            0x7556F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x86E5E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x870400
#define CSidlManagerBase__CreateXWnd_x                             0x870440

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x755DE0
#define CSidlManager__CreateXWnd_x                                 0x755F20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x61EE40
#define CSidlScreenWnd__CalculateVSBRange_x                        0x61ED60
#define CSidlScreenWnd__ConvertToRes_x                             0x88BFA0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x85DCF0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x85F070
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x85F120
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x85E600
#define CSidlScreenWnd__DrawSidlPiece_x                            0x85D7D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x85CF00
#define CSidlScreenWnd__GetChildItem_x                             0x85CFD0
#define CSidlScreenWnd__GetSidlPiece_x                             0x85D9C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x863A30
#define CSidlScreenWnd__Init1_x                                    0x85ED50
#define CSidlScreenWnd__LoadIniInfo_x                              0x85DDA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x85D0C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x85E850
#define CSidlScreenWnd__m_layoutCopy_x                             0x15D38E0
#define CSidlScreenWnd__StoreIniInfo_x                             0x85CA70
#define CSidlScreenWnd__StoreIniVis_x                              0x85CE90
#define CSidlScreenWnd__vftable_x                                  0xA1982C
#define CSidlScreenWnd__WndNotification_x                          0x85EAD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x5BAE40
#define CSkillMgr__GetSkillCap_x                                   0x5BAEC0
#define CSkillMgr__GetNameToken_x                                  0x5BAAB0
#define CSkillMgr__IsActivatedSkill_x                              0x5BABD0
#define CSkillMgr__IsCombatSkill_x                                 0x5BAB10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x895FE0
#define CSliderWnd__SetValue_x                                     0x8961B0
#define CSliderWnd__SetNumTicks_x                                  0x896930

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x75CAC0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x886720
#define CStmlWnd__CalculateHSBRange_x                              0x87EE80
#define CStmlWnd__CalculateVSBRange_x                              0x87EF10
#define CStmlWnd__CanBreakAtCharacter_x                            0x87F090
#define CStmlWnd__FastForwardToEndOfTag_x                          0x87F970
#define CStmlWnd__ForceParseNow_x                                  0x887070
#define CStmlWnd__GetNextTagPiece_x                                0x87F870
#define CStmlWnd__GetVisibleText_x                                 0x8803C0
#define CStmlWnd__InitializeWindowVariables_x                      0x8825A0
#define CStmlWnd__MakeStmlColorTag_x                               0x87E0D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x87E130
#define CStmlWnd__SetSTMLText_x                                    0x883E10
#define CStmlWnd__StripFirstSTMLLines_x                            0x8863C0
#define CStmlWnd__UpdateHistoryString_x                            0x881300

// CTabWnd
#define CTabWnd__Draw_x                                            0x88D870
#define CTabWnd__DrawCurrentPage_x                                 0x88D0E0
#define CTabWnd__DrawTab_x                                         0x88CEA0
#define CTabWnd__GetCurrentPage_x                                  0x88D4B0
#define CTabWnd__GetCurrentTabIndex_x                              0x88CB20
#define CTabWnd__GetPageFromTabIndex_x                             0x88CDF0
#define CTabWnd__GetPageInnerRect_x                                0x88CB90
#define CTabWnd__GetTabInnerRect_x                                 0x88CD90
#define CTabWnd__GetTabRect_x                                      0x88CC60
#define CTabWnd__InsertPage_x                                      0x88DB60
#define CTabWnd__RemovePage_x                                      0x88D650
#define CTabWnd__SetPage_x                                         0x88D4E0
#define CTabWnd__SetPageRect_x                                     0x88D7B0
#define CTabWnd__UpdatePage_x                                      0x88DB00

// CPageWnd
//#define CPageWnd__FlashTab_x                                       0x0
#define CPageWnd__SetTabText_x                                     0x89B9A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x41F840
#define CBroadcast__Get_x                                          0x41F3A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x889B70
#define CTextureFont__DrawWrappedText1_x                           0x889950
#define CTextureFont__DrawWrappedText2_x                           0x889A50
#define CTextureFont__GetTextExtent_x                              0x8898D0
#define CTextureFont__GetHeight_x                                  0x889910

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x8929A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x851540

// CXStr
#define CXStr__gFreeLists_x                                        0xB618A0
#define CXStr__gCXStrAccess_x                                      0x15D35E4

// CXWnd
#define CXWnd__BringToTop_x                                        0x862C50
#define CXWnd__ClrFocus_x                                          0x862820
#define CXWnd__Destroy_x                                           0x869760
#define CXWnd__DoAllDrawing_x                                      0x868A10
#define CXWnd__DrawChildren_x                                      0x868BA0
#define CXWnd__DrawColoredRect_x                                   0x863010
#define CXWnd__DrawTooltip_x                                       0x8632C0
#define CXWnd__DrawTooltipAtPoint_x                                0x8679B0
#define CXWnd__GetBorderFrame_x                                    0x863690
#define CXWnd__GetChildItem_x                                      0x868330
#define CXWnd__GetChildWndAt_x                                     0x866980
#define CXWnd__GetClientClipRect_x                                 0x8634D0
#define CXWnd__GetRelativeRect_x                                   0x8637C0
#define CXWnd__GetScreenClipRect_x                                 0x8680B0
#define CXWnd__GetScreenRect_x                                     0x8638D0
#define CXWnd__GetTooltipRect_x                                    0x863150
#define CXWnd__IsActive_x                                          0x8760A0
#define CXWnd__IsDescendantOf_x                                    0x863640
#define CXWnd__IsReallyVisible_x                                   0x866960
#define CXWnd__IsType_x                                            0x868E10
#define CXWnd__Minimize_x                                          0x8666D0
#define CXWnd__ProcessTransition_x                                 0x862C00
#define CXWnd__Refade_x                                            0x8629D0
#define CXWnd__Resize_x                                            0x863990
#define CXWnd__Right_x                                             0x867EB0
#define CXWnd__SetFocus_x                                          0x865250
#define CXWnd__SetFont_x                                           0x862870
#define CXWnd__SetKeyTooltip_x                                     0x863C00
#define CXWnd__SetMouseOver_x                                      0x8683F0
#define CXWnd__SetParent_x                                         0x869710
#define CXWnd__StartFade_x                                         0x862CA0
#define CXWnd__vftable_x                                           0xA19C74
#define CXWnd__CXWnd_x                                             0x869AC0
#define CXWnd__dCXWnd_x                                            0x869E50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x88F1E0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x8779C0
#define CXWndManager__DrawWindows_x                                0x877600
#define CXWndManager__GetKeyboardFlags_x                           0x875BD0
#define CXWndManager__HandleKeyboardMsg_x                          0x876530
#define CXWndManager__RemoveWnd_x                                  0x876230
#define CXWndManager__RemovePendingDeletionWnd_x                   0x876C80

// CDBStr
#define CDBStr__GetString_x                                        0x4866C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x7DB210

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x42FEC0
#define CCharacterListWnd__EnterWorld_x                            0x42FD20
#define CCharacterListWnd__Quit_x                                  0x42EA50
#define CCharacterListWnd__UpdateList_x                            0x430760

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x7BCDB0
#define ItemBase__CreateItemTagString_x                            0x7BBC50
#define ItemBase__GetImageNum_x                                    0x7B2FB0
#define ItemBase__GetItemValue_x                                   0x7BA920
#define ItemBase__IsEmpty_x                                        0x7B22A0
//#define ItemBase__IsKeyRingItem_x                                  0x0
#define ItemBase__ValueSellMerchant_x                              0x7BCF80
#define ItemClient__CanDrop_x                                      0x554E50
#define ItemClient__CanGoInBag_x                                   0x554FD0
#define ItemClient__CreateItemClient_x                             0x5559A0
#define ItemClient__dItemClient_x                                  0x5552F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x4A59A0
#define EQ_LoadingS__Array_x                                       0xAC6330

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x7C4460
#define PcBase__GetCombatAbility_x                                 0x7C44F0
#define PcBase__GetCombatAbilityTimer_x                            0x7C45A0
#define PcBase__GetItemContainedRealEstateIds_x                    0x7D0160
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x7C95F0
#define PcClient__AlertInventoryChanged_x                          0x577C80
#define PcClient__GetConLevel_x                                    0x577CB0
#define PcClient__HasLoreItem_x                                    0x57AE30
#define PcZoneClient__GetItemRecastTimer_x                         0x580600
#define PcZoneClient__RemoveMyAffect_x                             0x57FA50

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x4DBBD0
#define EQItemList__add_item_x                                     0x4DBB10
#define EQItemList__delete_item_x                                  0x4DBFD0
#define EQItemList__FreeItemList_x                                 0x4DBED0

#define EQItemList__add_object_x                                   0x506030

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x485970

// PlayerClient
#define PlayerBase__CanSee_x                                       0x8D0520
#define PlayerBase__CanSee1_x                                      0x8D05E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x8D0300
#define PlayerBase__HasProperty_x                                  0x8CFDC0
#define PlayerBase__IsTargetable_x                                 0x8D0090
#define PlayerClient__ChangeBoneStringSprite_x                     0x58BE90
#define PlayerClient__dPlayerClient_x                              0x590A60
#define PlayerClient__GetPcClient_x                                0x58C9A0
#define PlayerClient__PlayerClient_x                               0x590880
#define PlayerClient__SetNameSpriteState_x                         0x58E2D0
#define PlayerClient__SetNameSpriteTint_x                          0x58BF00
#define PlayerZoneClient__ChangeHeight_x                           0x5A4EC0
#define PlayerZoneClient__DoAttack_x                               0x5A5000
#define PlayerZoneClient__GetLevel_x                               0x59FC90
#define PlayerZoneClient__IsValidTeleport_x                        0x506A20

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x5996E0
#define PlayerManagerClient__GetSpawnByName_x                      0x599B40
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x599710
#define PlayerManagerClient__CreatePlayer_x                        0x599BD0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x8CF790
#define PlayerManagerBase__DestroyAllPlayers_x                     0x8CF800

// KeyPressHandler
#define pinstKeypressHandler_x                                     0xE639B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x55AFA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x55AFE0
#define KeypressHandler__ClearCommandStateArray_x                  0x55AB80
#define KeypressHandler__HandleKeyDown_x                           0x5594E0
#define KeypressHandler__HandleKeyUp_x                             0x559800
#define KeypressHandler__SaveKeymapping_x                          0x55AC50

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x7D5350

// StringTable
#define StringTable__getString_x                                   0x7D0660

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x5808C0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x5862F0
#define PcZoneClient__GetPcSkillLimit_x                            0x584BE0
#define PcZoneClient__RemovePetEffect_x                            0x580CA0
#define PcZoneClient__HasAlternateAbility_x                        0x582670
#define PcZoneClient__CanEquipItem_x                               0x583550
#define PcZoneClient__GetItemByID_x                                0x585A10
#define PcZoneClient__RemoveBuffEffect_x                           0x57FCE0
#define PcZoneClient__BandolierSwap_x                              0x585AA0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x57F900

// Doors
#define EQSwitch__UseSwitch_x                                      0x511D70

// IconCache
#define IconCache__GetIcon_x                                       0x665A60

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x65CAE0
#define CContainerMgr__CloseContainer_x                            0x65D2F0
#define CContainerMgr__OpenExperimentContainer_x                   0x65CAB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x725B00

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x54E670

// CLootWnd
#define CLootWnd__LootAll_x                                        0x6BDBA0
#define CLootWnd__RequestLootSlot_x                                0x6BE3A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x4AF700
#define EQ_Spell__SpellAffects_x                                   0x4AF770
#define EQ_Spell__SpellAffectBase_x                                0x4AF7A0
#define EQ_Spell__IsSPAStacking_x                                  0x4ACE40
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x4ACA70
//#define EQ_Spell__IsDegeneratingLevelMod_x                         0x0
#define __IsResEffectSpell_x                                       0x432590

// EQSpellStrings
//#define EQSpellStrings__GetString_x                                0x0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x769FD0
#define CTargetWnd__WndNotification_x                              0x769AC0
#define CTargetWnd__RefreshTargetBuffs_x                           0x76A1B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x7693F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x76EF90
#define CTaskWnd__ConfirmAbandonTask_x                             0x76FD50

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x47FFD0
#define CTaskManager__HandleMessage_x                              0x482080
#define CTaskManager__GetTaskStatus_x                              0x481100
#define CTaskManager__GetElementDescription_x                      0x4800C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x4A9140
#define EqSoundManager__PlayScriptMp3_x                            0x4AA7D0
#define EqSoundManager__SoundAssistPlay_x                          0x5BFBD0
#define EqSoundManager__WaveInstancePlay_x                         0x5BF9A0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x4772A0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x87A4A0
#define CTextureAnimation__SetCurCell_x                            0x87A860

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x54C010

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x7E9AE0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x7E9B40
#define CharacterBase__IsExpansionFlag_x                           0x4106C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x647D50
#define CCastSpellWnd__IsBardSongPlaying_x                         0x646EE0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x647EA0

// messages
#define msg_spell_worn_off_x                                       0x4B79F0
#define msg_new_text_x                                             0x4C0080
#define __msgTokenTextParam_x                                      0x4BDBE0
#define msgTokenText_x                                             0x4BDD00

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x5C1C30
#define SpellManager__GetSpellByGroupAndRank_x                     0x5C1AE0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x8D4570

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x6B4EE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x662290
#define CCursorAttachment__AttachToCursor1_x                       0x661820
#define CCursorAttachment__Deactivate_x                            0x660F00

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x88AEE0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x88A8A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x88AA20

// CFindItemWnd
//#define CFindItemWnd__WndNotification_x                            0x0
//#define CFindItemWnd__Update_x                                     0x0
//#define CFindItemWnd__PickupSelectedItem_x                         0x0

// LootFiltersManager
//#define LootFiltersManager__AddItemLootFilter_x                    0x0
//#define LootFiltersManager__GetItemFilterData_x                    0x0
//#define LootFiltersManager__RemoveItemLootFilter_x                 0x0
//#define LootFiltersManager__SetItemLootFilter_x                    0x0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x700C80

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x8D9C50
#define CResolutionHandler__GetWindowedStyle_x                     0x5B9420

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x659AF0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x67C620
#define CGroupWnd__UpdateDisplay_x                                 0x67B470

// ItemBase
#define ItemBase__IsLore_x                                         0x7B4B70
//#define ItemBase__IsLoreEquipped_x                                 0x0

#define MultipleItemMoveManager__ProcessMove_x                     0x572300

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5061E0
#define EQPlacedItemManager__GetItemByGuid_x                       0x5060C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x506120

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x5B3540

// FactionManagerClient
//#define FactionManagerClient__Instance_x                           0x0
//#define FactionManagerClient__HandleFactionMessage_x               0x0
//#define FactionManagerClient__GetFactionStanding_x                 0x0
//#define FactionManagerClient__GetMaxFaction_x                      0x0
//#define FactionManagerClient__GetMinFaction_x                      0x0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x4110E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x466CC0

// MercenaryAlternateAdvancementManagerClient
//#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x0
//#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x0
//#define CAltAbilityData__GetMercCurrentRank_x                      0x0
//#define CAltAbilityData__GetMercMaxRank_x                          0x0

// CTargetManager
#define CTargetManager__Get_x                                      0x5C6380

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x5B3540

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x4DC1B0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x88B690

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x4048D0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x600B10

// AchievementManager
#define AchievementManager__Instance_x                             0x404060

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
