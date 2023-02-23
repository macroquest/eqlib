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

#include "Common.h"

#include <cstdint>

namespace eqlib {

// Enumerations...
using EQZoneIndex = int32_t;
using EQLocalizeLanguage = uint32_t;
enum EWndRuntimeType;

// Forward class declarations
class _EverQuestinfo;
class _partyGroup;
class AggroMeterManagerClient;
class AltAdvManager;
class CAAWnd;
class CAchievementsWnd;
class CActionsWnd;
class CActorInterface;
class CActorInterfaceBase;
class CAdvancedLootWnd;
class CAlarmWnd;
class CAltAbilityData;
class CAuraWnd;
class CBandolierWnd;
class CBankWnd;
class CBarterWnd;
class CBarterSearchWnd;
class CBazaarSearchWnd;
class CBazaarWnd;
class CBodyTintWnd;
class CBookWnd;
class CBreathWnd;
class CBroadcast;
class CBuffWindow;
class CBugReportWnd;
class CButtonDrawTemplate;
class CButtonTemplate;
class CButtonWnd;
class CCastingWnd;
class CCastSpellWnd;
class CCharacterCreation;
class CCharacterListWnd;
class CChatWindow;
class CChatWindowManager;
class CCheckBoxWnd;
class CClickStickInfo;
class CColorPickerWnd;
class CCombatAbilityWnd;
class CCombatSkillsSelectWnd;
class CComboboxTemplate;
class CComboWnd;
class CCompassWnd;
class CConfirmationDialog;
class CContainerMgr;
class CContainerWnd;
class CContextMenu;
class CContextMenuManager;
class CControlTemplate;
class CCursorAttachment;
class CDisplay;
class CEditBaseWnd;
class CEditboxTemplate;
class CEditLabelWnd;
class CEditWnd;
class CEQMainWnd;
class CEQSuiteTextureLoader;
class CEverQuest;
class CExploreModeWnd;
class CExtendedTargetWnd;
class CFactionWnd;
class CFeedbackWnd;
class CFileSelectionWnd;
class CFindItemWnd;
class CFindLocationWnd;
class CFriendsWnd;
class CGaugeDrawTemplate;
class CGaugeTemplate;
class CGaugeWnd;
class CGemsGameWnd;
class CGiveWnd;
class CGroupSearchFiltersWnd;
class CGroupSearchWnd;
class CGroupWnd;
class CGroup;
class CGroupMember;
class CGuild;
class CGuildMgmtWnd;
class CharacterBase;
class CharacterZoneClient;
class CHelpWnd;
class CHotButton;
class CHotButtonWnd;
class CIMECandidateList;
class CIMEComposition;
class CIMEManager;
class CIMEStatusBar;
class CInspectWnd;
class CInventoryWnd;
class CInvSlot;
class CInvSlotMgr;
class CInvSlotTemplate;
class CInvSlotWnd;
class CItemDisplayManager;
class CItemDisplayWnd;
class CJournalCatWnd;
class CJournalNPCWnd;
class CJournalTextWnd;
class CLabel;
class CLabelTemplate;
class CLargeDialogWnd;
class CLayoutWnd;
class ClientAuraManager;
class ClientSOIManager;
class ClientSpellManager;
class CLightDefinitionInterface;
class CLightInterface;
class CLineBase;
class CListboxColumnTemplate;
class CListboxTemplate;
class CListWnd;
class CLoadskinWnd;
class CLootWnd;
class CMapToolbarWnd;
class CMapViewWnd;
class CMarketplaceWnd;
class CMemoryStream;
class CMercenaryManager;
class CMerchantWnd;
class CMusicPlayerWnd;
class CNoteWnd;
class ConversationJournal;
class COptionsWnd;
class COverseerWnd;
class CPageTemplate;
class CPageWnd;
class CParam;
class CParamButton;
class CParamButtonDrawTemplate;
class CParamClass;
class CParamCombobox;
class CParamControl;
class CParamEditbox;
class CParamFrame;
class CParamFrameTemplate;
class CParamGauge;
class CParamGaugeDrawTemplate;
class CParamInvSlot;
class CParamLabel;
class CParamListbox;
class CParamListboxColumn;
class CParamPage;
class CParamPoint;
class CParamRGB;
class CParamScreen;
class CParamScreenPiece;
class CParamScrollbarDrawTemplate;
class CParamSize;
class CParamSlider;
class CParamSliderDrawTemplate;
class CParamSpellGem;
class CParamSpellGemDrawTemplate;
class CParamStaticAnimation;
class CParamStaticFrame;
class CParamStaticHeader;
class CParamStaticScreenPiece;
class CParamStaticText;
class CParamSTMLbox;
class CParamSuiteDefaults;
class CParamTabBox;
class CParamTextureInfo;
class CParamUi2DAnimation;
class CParamWindowDrawTemplate;
class CPetInfoWnd;
class CPetitionQWnd;
class CPlayerCustomizationWnd;
class CPlayerNotesWnd;
class CPlayerPointManager;
class CPlayerWnd;
class CPotionBeltWnd;
class CPropertySet;
class CPurchaseGroupWnd;
class CQuantityWnd;
class CRadioGroup;
class CRaid;
class CRaidOptionsWnd;
class CRaidWnd;
class CRealEstateItemsWnd;
class CResolutionHandler;
class CRespawnWnd;
class CRewardSelectionWnd;
class CScreenPieceTemplate;
class CScreenTemplate;
class CScrollbarTemplate;
class CSelectorWnd;
class CSidlManager;
class CSidlScreenWnd;
class CSkillsSelectWnd;
class CSkillsWnd;
class CSliderDrawTemplate;
class CSliderTemplate;
class CSliderWnd;
class CSocialEditWnd;
class CSpellBookWnd;
class CSpellDisplayManager;
class CSpellGemDrawTemplate;
class CSpellGemTemplate;
class CSpellGemWnd;
class CStaticAnimationTemplate;
class CStaticFrameTemplate;
class CStaticHeaderTemplate;
class CStaticScreenPieceTemplate;
class CStaticTextTemplate;
class CStaticTintedBlendAnimationTemplate;
class CSTMLboxTemplate;
class CStmlReport;
class CStmlWnd;
class CStoryWnd;
class CTabBoxTemplate;
class CTabWnd;
class CTAFrameDraw;
class CTargetManager;
class CTargetRing;
class CTargetWnd;
class CTaskManager;
class CTaskWnd;
class CTextEntryWnd;
class CTextObjectInterface;
class CTextureAnimation;
class CTextureFont;
class CTipWnd;
class CTrackingWnd;
class CTradeWnd;
class CTrainWnd;
class CTreeViewWnd;
class CTribute;
class CUITexturePiece;
class CVector3;
class CVideoModesWnd;
class CXFileXML;
class CXMLData;
class CXMLDataClass;
class CXMLDataManager;
class CXMLDataPtr;
class CXMLEnumInfo;
class CXMLParamManager;
class CXMLSOMAttribute;
class CXMLSOMAttributeType;
class CXMLSOMDocument;
class CXMLSOMDocumentBase;
class CXMLSOMElement;
class CXMLSOMElementType;
class CXMLSOMNode;
class CXMLSOMNodePtr;
class CXMLSOMParser;
class CXMLSOMSchema;
class CXMLSOMSimpleType;
class CXPoint;
class CXRect;
class CXStr;
class CXWnd;
class CXWndDrawTemplate;
class CXWndManager;
class CZoneGuideWnd;
class CZonePathWnd;
class DatabaseStringTable;
class EmitterManager;
class engineInterface;
class EQ_Affect;
class EQ_AltAbility;
class EQ_CharacterData;
class EQ_Container;
class EQ_Equipment;
class EQ_LoadingS;
class EQ_Note;
class EQ_Skill;
class EQ_Spell;
class EQAnimation;
class EQEffect;
class EqEmitterData;
class EQGroundItemListManager;
class EQItemList;
class EQMissile;
class EqMobileEmitter;
class EQMoneyList;
class EQObject;
class EQPlayerDeath;
class EQPMInfo;
class EqSoundManager;
class EQSpellStrings;
class EQSwitch;
class EqSwitchManager;
class EQWorldData;
class EQZoneInfo;
struct EverQuestinfo;
class IconCache;
class ItemBase;
class ItemContainer;
using ItemBaseContainer = ItemContainer;
class JournalNPC;
class KeyCombo;
class KeypressHandler;
class LootFiltersManager;
class MapViewMap;
class MercenaryAlternateAdvancementManagerClient;
class MidiInstance;
class monty;
class Mp3Manager;
class MusicManager;
class PlayerManagerClient;
class PointMerchantWnd;
class RealEstateManagerClient;
class SAmpersandEntry;
class SkillManager;
class SListWndSortInfo;
class SoundAsset;
class SoundEmitter;
class SoundInstance;
class SoundManager;
class SoundObject;
class SpellManager;
class StringTable;
class UdpConnection;
class UniversalChatProxy;
class Wave3dInstance;
class WaveInstance;
struct CDynamicZone;
struct CMDLIST;
struct connection_t;
struct CStrRep;
struct CUITextureInfo;
struct DynamicZoneClientTimerData;
struct DynamicZonePlayerInfo;
struct EQMERCALTABILITIES;
struct EQMissileHitinfo;
struct EQSocial;
using EQSOCIAL = EQSocial;
struct EQSOCIALCHANGED;
struct GuildMember;
struct MapViewLabel;
using MAPLABEL = MapViewLabel;
struct MOUSECLICK;
struct MQMouseInfo;
struct SDragDropInfo;
struct SharedTaskPlayerInfo;
struct SoundControl;
struct SParseVariables;
struct SpellLoadout;
struct STable;
struct STableCell;
struct STempTable;
struct STempTableCell;
struct STempTableRow;
struct zoneHeader;
struct EQLogin;
struct MercenaryInfo;

#if HAS_KEYRING_WINDOW
class CKeyRingWnd;
#endif


class CRaid;
using EQRAID = CRaid;
class CRender;

struct LabelCache;

class StringTable;
using EQSTRINGTABLE DEPRECATE("Use StringTable instead of EQSTRINGTABLE") = StringTable;

using ZONEINFO = zoneHeader;
using CChatService = UniversalChatProxy;
using EVERQUEST = CEverQuest;
using CPopDialogWnd = CConfirmationDialog;

class PcClient;
using CHARINFO = PcClient;
using PCHARINFO /*[[deprecated]]*/ = PcClient*;

using CHARINFONEW DEPRECATE("Use PcClient instead of CHARINFONEW") = PcClient;
using CHARINFOOLD DEPRECATE("Use PcClient instead of CHARINFOOLD") = PcClient;

class PcClient;
class PcZoneClient;
class PlayerClient;

using SPAWNINFO = PlayerClient;
using PSPAWNINFO = PlayerClient*;

class ItemClient;
using CONTENTS = ItemClient;

// Graphics types
struct SGraphicsEngine;
class CFastFileInterface;
class CResourceManagerInterface;
class CRenderInterface;
class CSceneGraphInterface;
class CParticleSystemInterface;
class CCollisionInterface;
class CMathInterface;
class CThickLineSystemInterface;
class CDebugDrawInterface;
class CTerrainSystemInterface;

namespace SoeUtil
{
	template <typename T>
	class IString;

	using String = IString<char>;
}

// Login frontend types
class LoginController;
class CLoginViewManager;
class LoginServerAPI;
class LoginClient;

// End forward class declarations

} // namespace eqlib

