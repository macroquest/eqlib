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

#define __ClientDate                                               20230519u
#define __ExpectedVersionDate                                     "May 19 2023"
#define __ExpectedVersionTime                                     "11:35:04"
#define __ActualVersionDate_x                                      0x14080E318
#define __ActualVersionTime_x                                      0x14080E308
#define __ActualVersionBuild_x                                     0x1408030F0

// Memory Protection
#define __MemChecker0_x                                            0x1402CA630
#define __MemChecker1_x                                            0x140573040
#define __MemChecker4_x                                            0x140299940
#define __EncryptPad0_x                                            0x140AC8860

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C04810
#define instEQZoneInfo_x                                           0x140C04A04 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140232A10
#define __gfMaxZoomCameraDistance_x                                0x1408042A0
#define __gfMaxCameraDistance_x                                    0x140842DF4
#define __CurrentSocial_x                                          0x14098493C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC01A0
#define g_eqCommandStates_x                                        0x140AC1210
#define __CommandList_x                                            0x140AC1450
#define __ScreenMode_x                                             0x140B4C0C4
#define __gWorld_x                                                 0x140BFD468
#define __gpbCommandEvent_x                                        0x140BFCE98
#define __ServerHost_x                                             0x140BFD088
#define __Guilds_x                                                 0x140C033C0
#define __MouseEventTime_x                                         0x140C79D38
#define DI8__Mouse_Check_x                                         0x140C7DE68
#define __heqmain_x                                                0x140C80300
#define DI8__Mouse_x                                               0x140C80358
#define __HWnd_x                                                   0x140C80E08
#define __Mouse_x                                                  0x140C80318
#define DI8__Main_x                                                0x140C80330
#define DI8__Keyboard_x                                            0x140C80338
#define __LoginName_x                                              0x140C80A9C
#define __CurrentMapLabel_x                                        0x140C93FE0
#define __LabelCache_x                                             0x140C94BB0
#define __SubscriptionType_x                                       0x140CC99C0
#define Teleport_Table_Size_x                                      0x140BFCF20
#define Teleport_Table_x                                           0x140BFD4A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140BFF750
#define pinstActiveBanker_x                                        0x140BFD3B8
#define pinstActiveCorpse_x                                        0x140BFD3A8
#define pinstActiveGMaster_x                                       0x140BFD3B0
#define pinstActiveMerchant_x                                      0x140BFD3A0
#define pinstAltAdvManager_x                                       0x140B4CF78
#define pinstCEverQuest_x                                          0x140C80350
#define pinstCamActor_x                                            0x140B4C0B0
#define pinstCDBStr_x                                              0x140B4BD80
#define pinstCDisplay_x                                            0x140BFF518
#define pinstControlledPlayer_x                                    0x140BFD448
#define pinstCResolutionHandler_x                                  0x141302568
#define pinstCSidlManager_x                                        0x140CA5DC0
#define pinstCXWndManager_x                                        0x140CA5DB8
#define instDynamicZone_x                                          0x140C03280 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C032CE
#define instExpeditionName_x                                       0x140C0330E
#define pinstDZMember_x                                            0x140C03398
#define pinstDZTimerInfo_x                                         0x140C033A0
#define pinstEqLogin_x                                             0x140C803E0
#define instTribute_x                                              0x140ABB830
#define pinstEQSoundManager_x                                      0x140B4D2F8
#define pinstEQSpellStrings_x                                      0x140B309A0
#define pinstSGraphicsEngine_x                                     0x1413022E8
#define pinstLocalPC_x                                             0x140BFD488
#define pinstLocalPlayer_x                                         0x140BFD398
#define pinstCMercenaryClientManager_x                             0x140C7B5E8
#define pinstModelPlayer_x                                         0x140BFD3C8
#define pinstRenderInterface_x                                     0x141302300
#define pinstSkillMgr_x                                            0x140C7D280
#define pinstSpawnManager_x                                        0x140C7B9A0
#define pinstSpellManager_x                                        0x140C7D2E8
#define pinstStringTable_x                                         0x140BFD490
#define pinstSwitchManager_x                                       0x140BFCC10
#define pinstTarget_x                                              0x140BFD440
#define pinstTaskMember_x                                          0x140ABB820 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140BFD450
#define pinstTradeTarget_x                                         0x140BFD3C0
#define instTributeActive_x                                        0x140ABB859
#define pinstViewActor_x                                           0x140B4C0A8
#define pinstWorldData_x                                           0x140BFF510
#define pinstPlayerPath_x                                          0x140C7B9C8
#define pinstTargetIndicator_x                                     0x140C7D398
#define EQObject_Top_x                                             0x140BFD470

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C91138
#define pinstCContainerMgr_x                                       0x140B4C358
#define pinstCContextMenuManager_x                                 0x140CA5B90
#define pinstCInvSlotMgr_x                                         0x140B4C330
#define pinstCItemDisplayManager_x                                 0x140C93BB0
#define pinstCPopupWndManager_x                                    0x140C94440
#define pinstCSpellDisplayMgr_x                                    0x140C94A90
#define pinstCTaskManager_x                                        0x140984C70
#define pinstEQSuiteTextureLoader_x                                0x140AD1EE0
#define pinstItemIconCache_x                                       0x140C91498
#define pinstLootFiltersManager_x                                  0x140B4B7D8
#define pinstGFViewListener_x                                      0x14130B4F0


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025A8E0
#define __CastRay_x                                                0x140253110
#define __CastRay2_x                                               0x140252E20
#define __ConvertItemTags_x                                        0x140253510
#define __CleanItemTags_x                                          0x1400AD8E0
#define __CreateCascadeMenuItems_x                                 0x1401A4820
#define __DoesFileExist_x                                          0x140577A90
#define __EQGetTime_x                                              0x1405735F0
#define __ExecuteCmd_x                                             0x14022A440
#define __FixHeading_x                                             0x140675EB0
#define __FlushDxKeyboard_x                                        0x140348780
#define __get_bearing_x                                            0x14025CAD0
#define __get_melee_range_x                                        0x14025CBC0
#define __GetAnimationCache_x                                      0x1403C06B0
#define __GetGaugeValueFromEQ_x                                    0x1404EB400
#define __GetLabelFromEQ_x                                         0x1404EC9E0
#define __GetXTargetType_x                                         0x140677190   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140675F30
#define __HelpPath_x                                               0x140C79C00   // Why?
#define __NewUIINI_x                                               0x1404F7B90   // Why?
#define __ProcessGameEvents_x                                      0x14028EDB0
#define __ProcessKeyboardEvents_x                                  0x140349FE0
#define __ProcessMouseEvents_x                                     0x140290290
#define __SaveColors_x                                             0x1401B4940
#define __STMLToText_x                                             0x140588BA0
#define __WndProc_x                                                0x140346EF0
#define CMemoryMappedFile__SetFile_x                               0x1407ADB60
#define DrawNetStatus_x                                            0x1402D93F0
#define Util__FastTime_x                                           0x1405742F0
#define __eq_delete_x                                              0x14069FD54
#define __eq_new_x                                                 0x14069FD10
#define __CopyLayout_x                                             0x1402C6AE0
#define __ThrottleFrameRate_x                                      0x14027E6FC
#define __ThrottleFrameRateEnd_x                                   0x14027E75C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140359120
#define CAAWnd__Update_x                                           0x140359420
#define CAAWnd__UpdateSelected_x                                   0x14035A3E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400CFB10
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C8440
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407EA3F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400D03C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401BFA30
#define AltAdvManager__IsAbilityReady_x                            0x1401BFCB0
#define AltAdvManager__GetAAById_x                                 0x1401BF300
#define AltAdvManager__CanTrainAbility_x                           0x1401BF130
#define AltAdvManager__CanSeeAbility_x                             0x1401BEDF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400F6080
#define CharacterZoneClient__CalcAffectChange_x                    0x1400F6E30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400F7040
#define CharacterZoneClient__CanUseItem_x                          0x14010B790
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F7930
#define CharacterZoneClient__CastSpell_x                           0x1400F79D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x140107270
#define CharacterZoneClient__Cur_HP_x                              0x14010CE70
#define CharacterZoneClient__Cur_Mana_x                            0x14010D030
#define CharacterZoneClient__FindAffectSlot_x                      0x1400FAA70
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140113810
#define CharacterZoneClient__GetBaseSkill_x                        0x140122790  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400FBF50
#define CharacterZoneClient__GetCurrentMod_x                       0x14010AC70
#define CharacterZoneClient__GetCursorItemCount_x                  0x140115360
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140114260
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400FC120
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EC6D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EE0A0
#define CharacterZoneClient__GetHPRegen_x                          0x140114990
#define CharacterZoneClient__GetItemCountInInventory_x             0x14010CAE0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1401155F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400FC220
#define CharacterZoneClient__GetManaRegen_x                        0x140116340
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FC430
#define CharacterZoneClient__GetModCap_x                           0x14011DA90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400FC4D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400FC6E0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400F1240
#define CharacterZoneClient__HasSkill_x                            0x1401192C0
#define CharacterZoneClient__HitBySpell_x                          0x1400FD180
#define CharacterZoneClient__IsStackBlocked_x                      0x140100960
#define CharacterZoneClient__MakeMeVisible_x                       0x14011D520
#define CharacterZoneClient__Max_Endurance_x                       0x1402F3440  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011D860
#define CharacterZoneClient__Max_Mana_x                            0x1402F3630  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14011DD20
#define CharacterZoneClient__RemovePCAffectex_x                    0x140103F70
#define CharacterZoneClient__SpellDuration_x                       0x140104D30
#define CharacterZoneClient__TotalEffect_x                         0x140106060
#define CharacterZoneClient__UseSkill_x                            0x1401236E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403775F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140381850

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037D760
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037C7F0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140383F00

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140850D20

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A53D0
#define CChatWindowManager__InitContextMenu_x                      0x1403A5560
#define CChatWindowManager__FreeChatWindow_x                       0x1403A4620
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403ABD80
#define CChatWindowManager__CreateChatWindow_x                     0x1403A3F60

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14012B810

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ACD70
#define CChatWindow__Clear_x                                       0x1403ADBB0
#define CChatWindow__WndNotification_x                             0x1403AEDA0
#define CChatWindow__AddHistory_x                                  0x1403AD6B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A3A10
#define CContextMenu__RemoveMenuItem_x                             0x1405A3E00
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A3DD0
#define CContextMenu__CheckMenuItem_x                              0x1405A3C40
#define CContextMenu__SetMenuItem_x                                0x1405A3E20
#define CContextMenu__AddSeparator_x                               0x1405A3B80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A2C90
#define CContextMenuManager__RemoveMenu_x                          0x1405A3250
#define CContextMenuManager__PopupMenu_x                           0x1405A2FA0
#define CContextMenuManager__Flush_x                               0x1405A2D10
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BA310

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14063F8D0
#define CChatService__GetFriendName_x                              0x14063F8E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140593A10
#define CComboWnd__Draw_x                                          0x140593B10
#define CComboWnd__GetCurChoice_x                                  0x140593DF0  // unused
#define CComboWnd__GetListRect_x                                   0x140593E90
#define CComboWnd__InsertChoice_x                                  0x1405941D0
#define CComboWnd__SetColors_x                                     0x140594560
#define CComboWnd__SetChoice_x                                     0x140594520
#define CComboWnd__GetItemCount_x                                  0x140593E80
#define CComboWnd__GetCurChoiceText_x                              0x140593E30  // unused
#define CComboWnd__GetChoiceText_x                                 0x140593DC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140594290

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B80D0
#define CContainerWnd__SetContainer_x                              0x140405040
#define CContainerWnd__vftable_x                                   0x14081D4A8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4BE6C
#define CDisplay__ZoneMainUI_x                                     0x1405CAF10
#define CDisplay__PreZoneMainUI_x                                  0x1401B1790
#define CDisplay__CleanGameUI_x                                    0x1401A3920
#define CDisplay__GetClickedActor_x                                0x1401A7AB0
#define CDisplay__GetUserDefinedColor_x                            0x1401A86C0
#define CDisplay__InitCharSelectUI_x                               0x1401A8970
#define CDisplay__ReloadUI_x                                       0x1401B3A70
#define CDisplay__WriteTextHD2_x                                   0x1401BAC90
#define CDisplay__TrueDistance_x                                   0x1401BA970
#define CDisplay__SetViewActor_x                                   0x1401B71D0
#define CDisplay__GetFloorHeight_x                                 0x1401A7D10
#define CDisplay__ToggleScreenshotMode_x                           0x1401BA470
#define CDisplay__RealRender_World_x                               0x1401B2E60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D5260
#define CEditWnd__DrawCaret_x                                      0x1405B9890  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B9D50
#define CEditWnd__GetCaretPt_x                                     0x1405B9FD0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405BA010
#define CEditWnd__GetDisplayString_x                               0x1405BA280
#define CEditWnd__GetHorzOffset_x                                  0x1405BA4C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405BA610
#define CEditWnd__GetSelStartPt_x                                  0x1405BA8F0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405BA740
#define CEditWnd__PointFromPrintableChar_x                         0x1405BB4A0
#define CEditWnd__ReplaceSelection_x                               0x1405BB850
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BBCF0
#define CEditWnd__SetEditable_x                                    0x1405BBF80
#define CEditWnd__SetWindowText_x                                  0x1405BBFB0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027F6D0
#define CEverQuest__ClickedPlayer_x                                0x140275610
#define CEverQuest__CreateTargetIndicator_x                        0x140275ED0
#define CEverQuest__DoTellWindow_x                                 0x14012B520 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14012BDE0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140281100
#define CEverQuest__dsp_chat_x                                     0x14012AF60 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AB230
#define CEverQuest__Emote_x                                        0x140281AB0
#define CEverQuest__GetBodyTypeDesc_x                              0x140282850
#define CEverQuest__GetClassDesc_x                                 0x1402828B0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140282C80
#define CEverQuest__GetDeityDesc_x                                 0x140282F30
#define CEverQuest__GetLangDesc_x                                  0x140283360
#define CEverQuest__GetRaceDesc_x                                  0x140283700
#define CEverQuest__InterpretCmd_x                                 0x140285010
#define CEverQuest__LeftClickedOnPlayer_x                          0x140299FC0
#define CEverQuest__LMouseUp_x                                     0x1402869B0
#define CEverQuest__RightClickedOnPlayer_x                         0x140297820
#define CEverQuest__RMouseUp_x                                     0x140290E20
#define CEverQuest__SetGameState_x                                 0x14029C4F0
#define CEverQuest__UPCNotificationFlush_x                         0x1402A1CE0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140286630
#define CEverQuest__ReportSuccessfulHeal_x                         0x140292150
#define CEverQuest__ReportSuccessfulHit_x                          0x140293000

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CAA60

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E6460
#define CGuild__GetGuildName_x                                     0x1400E64A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403ECCA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BC660
#define CHotButton__SetCheck_x                                     0x1402BC930

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FE3F0
#define CInvSlotMgr__MoveItem_x                                    0x1403FE5C0
#define CInvSlotMgr__SelectSlot_x                                  0x1403FFF00

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FB5B0
#define CInvSlot__SliderComplete_x                                 0x1403FC8E0
#define CInvSlot__GetItemBase_x                                    0x1403F7F90
#define CInvSlot__UpdateItem_x                                     0x1403FCD90

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140400BF0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140422140
#define CItemDisplayWnd__UpdateStrings_x                           0x140424AE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041EBD0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404203F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140421560

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E7FA0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E9B60

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140522DB0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041B320

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14016D890

// CLabel
#define CLabel__UpdateText_x                                       0x14042BEC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405973A0
#define CListWnd__dCListWnd_x                                      0x1405977F0
#define CListWnd__vftable_x                                        0x14084F5E8
#define CListWnd__AddColumn_x                                      0x140597E90
#define CListWnd__AddColumn1_x                                     0x140597F30
#define CListWnd__AddLine_x                                        0x140598090
#define CListWnd__AddString_x                                      0x140598620
#define CListWnd__CalculateFirstVisibleLine_x                      0x140598B90
#define CListWnd__CalculateVSBRange_x                              0x140598E70
#define CListWnd__ClearSel_x                                       0x140599020
#define CListWnd__ClearAllSel_x                                    0x140598FC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140599080
#define CListWnd__Compare_x                                        0x140599240
#define CListWnd__Draw_x                                           0x140599710
#define CListWnd__DrawColumnSeparators_x                           0x14059A2C0
#define CListWnd__DrawHeader_x                                     0x14059A380
#define CListWnd__DrawItem_x                                       0x14059AA60
#define CListWnd__DrawLine_x                                       0x14059B3E0
#define CListWnd__DrawSeparator_x                                  0x14059B8A0
#define CListWnd__EnableLine_x                                     0x14059BCC0
#define CListWnd__EnsureVisible_x                                  0x14059BD20
#define CListWnd__ExtendSel_x                                      0x14059BE20
#define CListWnd__GetColumnMinWidth_x                              0x14059C150
#define CListWnd__GetColumnWidth_x                                 0x14059C1D0
#define CListWnd__GetCurSel_x                                      0x14059C2D0
#define CListWnd__GetItemData_x                                    0x14059C650
#define CListWnd__GetItemHeight_x                                  0x14059C690
#define CListWnd__GetItemRect_x                                    0x14059C8B0
#define CListWnd__GetItemText_x                                    0x14059CB50
#define CListWnd__GetSelList_x                                     0x14059CDA0
#define CListWnd__GetSeparatorRect_x                               0x14059CF90
#define CListWnd__InsertLine_x                                     0x14059E410
#define CListWnd__RemoveLine_x                                     0x14059EA80
#define CListWnd__SetColors_x                                      0x14059EE50
#define CListWnd__SetColumnJustification_x                         0x14059EE70
#define CListWnd__SetColumnLabel_x                                 0x14059EEF0
#define CListWnd__SetColumnWidth_x                                 0x14059F090
#define CListWnd__SetCurSel_x                                      0x14059F160
#define CListWnd__SetItemColor_x                                   0x14059F3D0
#define CListWnd__SetItemData_x                                    0x14059F470
#define CListWnd__SetItemText_x                                    0x14059F6B0
#define CListWnd__Sort_x                                           0x14059FAC0
#define CListWnd__ToggleSel_x                                      0x14059FC30
#define CListWnd__SetColumnsSizable_x                              0x14059F0E0
#define CListWnd__SetItemWnd_x                                     0x14059F7E0
#define CListWnd__GetItemWnd_x                                     0x14059CD30
#define CListWnd__SetItemIcon_x                                    0x14059F4B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140598960
#define CListWnd__SetVScrollPos_x                                  0x14059FA20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043F080

// MapViewMap
#define MapViewMap__vftable_x                                      0x140829D88
#define MapViewMap__Clear_x                                        0x140440BF0
#define MapViewMap__SetZoom_x                                      0x1404471B0
#define MapViewMap__HandleLButtonDown_x                            0x140443CF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404688F0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046EEA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046F650
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140472E60
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404721A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140477110

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14061D8E0
#define CPacketScrambler__hton_x                                   0x14061D8D0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B3150
#define CSidlManagerBase__FindAnimation1_x                         0x1405B3090
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B3780
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B3530
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B2490
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B2420
#define CSidlManagerBase__CreateXWnd_x                             0x1405B1A80

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DB560
#define CSidlManager__CreateXWnd_x                                 0x1404DB720

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140583100
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140582FE0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CF820 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140583280
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140582770
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140582840
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140582A10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140583920
#define CSidlScreenWnd__EnableIniStorage_x                         0x140583B50
#define CSidlScreenWnd__GetChildItem_x                             0x140583CF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140583F40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140590080 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405842B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140584620
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140584EC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405857B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA51C0
#define CSidlScreenWnd__StoreIniInfo_x                             0x140585DE0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405865D0
#define CSidlScreenWnd__vftable_x                                  0x14084E830
#define CSidlScreenWnd__WndNotification_x                          0x140586620

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332500 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332900 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332840
#define CSkillMgr__IsActivatedSkill_x                              0x140332CA0
#define CSkillMgr__IsCombatSkill_x                                 0x140332CE0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F7C00
#define CSliderWnd__SetValue_x                                     0x1405A0DA0
#define CSliderWnd__SetNumTicks_x                                  0x1405A0C20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E1B90

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BE3A0
#define CStmlWnd__CalculateHSBRange_x                              0x14058FA70
#define CStmlWnd__CalculateVSBRange_x                              0x1405BF2D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BFD40
#define CStmlWnd__ForceParseNow_x                                  0x1405BFDE0
#define CStmlWnd__GetVisibleText_x                                 0x1405C04B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C2210
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C2250
#define CStmlWnd__SetSTMLText_x                                    0x1405C9220
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C93D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C9760

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A1350
#define CTabWnd__DrawCurrentPage_x                                 0x1405A13F0
#define CTabWnd__DrawTab_x                                         0x1405A17C0
#define CTabWnd__GetTabRect_x                                      0x1405A1E20
#define CTabWnd__InsertPage_x                                      0x1405A20F0
#define CTabWnd__RemovePage_x                                      0x1405A2370
#define CTabWnd__SetPage_x                                         0x1405A24D0
#define CTabWnd__UpdatePage_x                                      0x1405A27D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BC400
#define CPageWnd__SetTabText_x                                     0x1405BC470

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DFC70  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400E0080


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405AAAD0
#define CTextureFont__DrawWrappedText1_x                           0x1405AA9E0
#define CTextureFont__DrawWrappedText2_x                           0x1405AAC00
#define CTextureFont__GetTextExtent_x                              0x1405AAFB0
#define CTextureFont__GetHeight_x                                  0x1405AAF70

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CDF80

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140582350

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD1850
#define CXStr__gCXStrAccess_x                                      0x140CA5008

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058B350
#define CXWnd__ClrFocus_x                                          0x14058B590
#define CXWnd__Destroy_x                                           0x14058B6D0
#define CXWnd__DoAllDrawing_x                                      0x14058B7E0
#define CXWnd__DrawColoredRect_x                                   0x14058BF90
#define CXWnd__DrawTooltip_x                                       0x14058D600
#define CXWnd__DrawTooltipAtPoint_x                                0x14058D6B0
#define CXWnd__GetChildItem_x                                      0x14058DFB0
#define CXWnd__GetChildWndAt_x                                     0x14058E070
#define CXWnd__GetClientRect_x                                     0x14058E310
#define CXWnd__GetClientClipRect_x                                 0x14058E1D0
#define CXWnd__GetRelativeRect_x                                   0x14058FBA0
#define CXWnd__GetScreenClipRect_x                                 0x14058FCA0
#define CXWnd__GetScreenRect_x                                     0x14058FE10
#define CXWnd__GetTooltipRect_x                                    0x14058FF80
#define CXWnd__IsActive_x                                          0x140590540
#define CXWnd__IsDescendantOf_x                                    0x140590570
#define CXWnd__IsReallyVisible_x                                   0x1405905E0
#define CXWnd__IsType_x                                            0x140590620
#define CXWnd__Minimize_x                                          0x140590720
#define CXWnd__ProcessTransition_x                                 0x1405915A0
#define CXWnd__Resize_x                                            0x1405916B0
#define CXWnd__Right_x                                             0x140591750
#define CXWnd__SetFocus_x                                          0x140591B10
#define CXWnd__SetFont_x                                           0x140591B60
#define CXWnd__SetKeyTooltip_x                                     0x140591C60
#define CXWnd__SetMouseOver_x                                      0x140591DA0
#define CXWnd__SetParent_x                                         0x140591E20
#define CXWnd__StartFade_x                                         0x140592250
#define CXWnd__vftable_x                                           0x14084EE68
#define CXWnd__CXWnd_x                                             0x140589F20
#define CXWnd__dCXWnd_x                                            0x14058A850

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D49E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A4FD0
#define CXWndManager__DrawCursor_x                                 0x1405A52B0
#define CXWndManager__DrawWindows_x                                0x1405A5500
#define CXWndManager__GetKeyboardFlags_x                           0x1405A5BC0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A5C00
#define CXWndManager__RemoveWnd_x                                  0x1405A9190

// CDBStr
#define CDBStr__GetString_x                                        0x1401A1AD0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406267C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F3E50
#define CCharacterListWnd__EnterWorld_x                            0x1400F2B50
#define CCharacterListWnd__Quit_x                                  0x1400F3E30
#define CCharacterListWnd__UpdateList_x                            0x1400F4B50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F6030
#define ItemBase__CreateItemTagString_x                            0x1405F6AA0
#define ItemBase__GetImageNum_x                                    0x1405F8F60
#define ItemBase__GetItemValue_x                                   0x1405FAA10
#define ItemBase__IsEmpty_x                                        0x1405FC640
#define ItemBase__IsKeyRingItem_x                                  0x1405FCD80
#define ItemBase__ValueSellMerchant_x                              0x140600DE0
#define ItemClient__CanDrop_x                                      0x1402BEBF0
#define ItemClient__CanGoInBag_x                                   0x1402BED20
#define ItemClient__CreateItemClient_x                             0x1402BF000
#define ItemClient__dItemClient_x                                  0x1402BEA60

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401C11D0
#define EQ_LoadingS__Array_x                                       0x140ABDCB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14060CF70
#define PcBase__GetCombatAbility_x                                 0x14060D610
#define PcBase__GetCombatAbilityTimer_x                            0x14060D6B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14060DE00
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14060E790
#define PcClient__AlertInventoryChanged_x                          0x1402E0DC0
#define PcClient__GetConLevel_x                                    0x1402E1310  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E39B0
#define PcClient__HasLoreItem_x                                    0x1402E4AB0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F1980
#define PcZoneClient__RemoveMyAffect_x                             0x1402F44B0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14022EAB0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14022EC60  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14022ED90  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14022ECD0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140267020  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14019C2A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140668F80
#define PlayerBase__CanSee1_x                                      0x140669050
#define PlayerBase__GetVisibilityLineSegment_x                     0x140669580
#define PlayerBase__HasProperty_x                                  0x1406697A0
#define PlayerBase__IsTargetable_x                                 0x140669860
#define PlayerClient__ChangeBoneStringSprite_x                     0x1403003A0
#define PlayerClient__GetPcClient_x                                0x140302A60
#define PlayerClient__PlayerClient_x                               0x1402F96F0
#define PlayerClient__SetNameSpriteState_x                         0x140305F00
#define PlayerClient__SetNameSpriteTint_x                          0x140306EC0
#define PlayerZoneClient__ChangeHeight_x                           0x140315040
#define PlayerZoneClient__DoAttack_x                               0x140315D30
#define PlayerZoneClient__GetLevel_x                               0x140319460
#define PlayerZoneClient__IsValidTeleport_x                        0x140269DD0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401B0030

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030EE30  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030EE60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030EF10
#define PlayerManagerClient__CreatePlayer_x                        0x14030E820
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140668C00

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C4000
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C3C00
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C3C70
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C3F90  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C4120
#define KeypressHandler__HandleKeyUp_x                             0x1402C4220
#define KeypressHandler__SaveKeymapping_x                          0x1402C3EA0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406243D0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14061EF80

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402EA110  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EF9B0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F2080
#define PcZoneClient__RemovePetEffect_x                            0x1402F45B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402F2D60
#define PcZoneClient__CanEquipItem_x                               0x1402EDCD0
#define PcZoneClient__GetItemByID_x                                0x1402F0A30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F4330
#define PcZoneClient__BandolierSwap_x                              0x1402ECCB0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402F1FD0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026E890

// IconCache
#define IconCache__GetIcon_x                                       0x1403C06E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B6F20
#define CContainerMgr__CloseContainer_x                            0x1403B6860
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B7290

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A18A0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B6E40

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140433170
#define CLootWnd__RequestLootSlot_x                                0x140434170

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401F1160
#define EQ_Spell__SpellAffects_x                                   0x1401F2420
#define EQ_Spell__SpellAffectBase_x                                0x1401F2380
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400FC8C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400FC870
#define EQ_Spell__IsSPAStacking_x                                  0x1401F2040
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401F1C00
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401F14D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E5100

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404FB9D0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404FBA10
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FAF10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FA4C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140502A70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140198AD0
#define CTaskManager__GetTaskStatus_x                              0x140198BE0
#define CTaskManager__GetElementDescription_x                      0x140198760

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401EF4E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401EE2E0
#define EqSoundManager__SoundAssistPlay_x                          0x1403378D0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140337C00  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140592FA0
#define CTextureAnimation__SetCurCell_x                            0x1405932B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B50C0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14063D330
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14063D3B0
#define CharacterBase__IsExpansionFlag_x                           0x1402112E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140397640
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140397FA0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140399410

// messages
#define msg_spell_worn_off_x                                       0x140225540
#define msg_new_text_x                                             0x140220EB0
#define __msgTokenTextParam_x                                      0x140218C90
#define msgTokenText_x                                             0x140218BB0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403392A0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403391C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140677570

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042C610

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BC7E0
#define CCursorAttachment__AttachToCursor1_x                       0x1403BB1C0
#define CCursorAttachment__Deactivate_x                            0x1403BCCE0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CC420
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CC610
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CC620

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140168B40
#define CFindItemWnd__Update_x                                     0x1401694E0
#define CFindItemWnd__PickupSelectedItem_x                         0x140162FF0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140172470
#define LootFiltersManager__GetItemFilterData_x                    0x140172F80
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140173820
#define LootFiltersManager__SetItemLootFilter_x                    0x140173AD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140484F50

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067B970
#define CResolutionHandler__GetWindowedStyle_x                     0x140332060

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B3300

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140641360  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140641250  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D5FE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5BC0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405FCE50
#define ItemBase__IsLoreEquipped_x                                 0x1405FCEE0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D7640

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140267180
#define EQPlacedItemManager__GetItemByGuid_x                       0x140267110
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140267150

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032C800

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140143940
#define FactionManagerClient__HandleFactionMessage_x               0x140143CF0
#define FactionManagerClient__GetFactionStanding_x                 0x140143110
#define FactionManagerClient__GetMaxFaction_x                      0x140143110
#define FactionManagerClient__GetMinFaction_x                      0x140142FC0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400D1F30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14014F000

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C9B30
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C8EB0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C9950  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C98D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DF90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032C800

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14022EE20

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140586C10

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400AAAA0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F1B0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400B1FB0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
