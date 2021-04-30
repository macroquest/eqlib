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

#include "Common.h"
#include "Containers.h"
#include "CXStr.h"
#include "ForwardDecls.h"

#include <d3d9.h>

namespace eqlib {

class ActorTagManager;

class CDisplay;
class CRender;
class CCameraInterface;
class CParticlePointInterface;
class CPhysicsInfo;

class EQPlacedItem;
class MissileBase;
class PlayerBase;
class PlayerZoneClient;

struct SWadFile;


// The graphics engine holds pointers to all the components
struct SGraphicsEngine
{
public:
	CFastFileInterface*        pFastFile;
	CResourceManagerInterface* pResourceManager;
	CSceneGraphInterface*      pSceneGraph;
	CRender*                   pRender;
	CParticleSystemInterface*  pParticleSystem;
	CCollisionInterface*       pCollision;
	CMathInterface*            pMath;
	CThickLineSystemInterface* pThickLineSystem;
	CDebugDrawInterface*       pDebugDraw;
	CPropertySet*              pProperties;
	CTerrainSystemInterface*   pTerrainSystem;
};

class CRenderInterface
{
public:
	// Give us a vftable
	virtual void Placeholder() {}
};

class [[offsetcomments]] CRender : public CRenderInterface
{
public:
/*0x0000*/ //vftable
/*0x0004*/ uint8_t                   Unknown0x04[0xEBC];
/*0x0ec0*/ HWND                      hWnd;
/*0x0ec4*/ IDirect3D9*               pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n"
/*0x0ec8*/ IDirect3DDevice9*         pD3DDevice;            // "Failed to create device with error %X.\n"
/*0x0ecc*/ IDirect3DSurface9*        pD3DBackBuffer;
/*0x0ed0*/ D3DVIEWPORT9              D3DViewPort;
/*0x0ee8*/ D3DCAPS9                  D3DDeviceCaps;
/*0x1018*/ float                     GammaLevel;
/*0x101c*/ IDirect3DSwapChain9*      pD3DSwapChain;
/*0x1020*/
// ... much more
};

//----------------------------------------------------------------------------

// text flags used for rendering text. Used between the text object interface and DrawWrappedText.
enum DrawTextFlags
{
	DrawText_NoWrap       = 0x01,
	DrawText_CalcOnly     = 0x02,
	DrawText_Elide        = 0x04,
	DrawText_RightJustify = 0x08,
	DrawText_HCenter      = 0x10,
	DrawText_VCenter      = 0x20,
};

class CTextObjectInterface
{
public:
	virtual void SetText(const char* szText) = 0;
	virtual CXStr& GetText() = 0;

	virtual void SetParameters(int fontStyle, const CXRect& rect, const CXRect& clipRect, COLORREF color, uint16_t flags, int offset) = 0;
	virtual void SetParameters(int fontStyle, int x, int y, int width, int height, const CXRect& clipRect, COLORREF color, uint16_t flags, int offset) = 0;
};

class [[offsetcomments]] CTextObjectBase : public CTextObjectInterface
{
public:
	CXStr& GetText() override { return m_text; }
	void SetText(const char* szText) override
	{
		if (m_text != szText)
		{
			m_text = szText;
			m_dirty = true;
		}
	}

	COLORREF GetColor() const { return m_color;  }
	const CXRect& GetRect() const { return m_rect; }

public:
/*0x04*/ CXStr                    m_text;
/*0x08*/ int                      m_font;
/*0x0c*/ CXRect                   m_rect;
/*0x1c*/ COLORREF                 m_color;
/*0x20*/ CTextObjectBase*         m_pNext;
/*0x24*/ CTextObjectBase*         m_pPrev;
/*0x28*/ IDirect3DVertexBuffer9*  m_pVertexBuffer;
/*0x2c*/ bool                     m_dirty;
/*0x2d*/ bool                     m_render;
/*0x30*/ int                      m_maxLength;
/*0x34*/
};

class [[offsetcomments]] CTextObject : public CTextObjectBase
{
public:
	const CXRect& GetClipRect() const { return m_clipRect; }
	uint16_t GetFlags() const { return m_flags; }

private:
/*0x34*/ CXRect                   m_clipRect;
/*0x44*/ uint16_t                 m_flags;
/*0x48*/ int                      m_offset;
/*0x4c*/
};

//============================================================================

enum EActorType
{
	Undefined = 0,
	Player = 1,
	Corpse = 2,
	Switch = 3,
	Missile = 4,
	Object = 5,
	Ladder = 6,
	Tree = 7,
	Wall = 8,
	PlacedObject = 9,
};


//============================================================================
// ActorAnimation
//============================================================================

// TODO: Move Actor classes to its own header
class [[offsetcomments]] ActorAnimation
{
public:
/*0x00*/ ActorAnimation*    pPrev;
/*0x04*/ ActorAnimation*    pNext;
/*0x08*/ char               Name[30];
/*0x28*/ void*              pActordef;                // CActorDefinitionInterface*
/*0x2c*/ void**             Anim;                     // EQAnimation
/*0x30*/ int                NumBones;
/*0x34*/ bool               bUsesLuclinAnimations;
/*0x35*/ bool               bNewStyleModel;
/*0x38*/ float              ParticleEmitterScaleFactor;
/*0x3c*/ float              TargetIndicatorScaleFactor;
/*0x40*/ float              FirstPersonCameraOffset;
/*0x44*/ float              ThirdPersonCameraOffset;
/*0x48*/ float              VerticalCameraOffset;
/*0x4c*/ float              CollisionSphereScaleFactor;
/*0x50*/ float              ZoomCameraMinimumDistance;
/*0x54*/ int                NumAnimations;
/*0x58*/ int                NumAnimationSlots;
/*0x5c*/
};

//============================================================================
// CActorApplicationData
//============================================================================
class CActorApplicationData
{
public:
	enum EApplicationDataType
	{
		ePlayerBase,
		eMissileBase,
		eObject,
		eSwitch,
		eEnvEmitter,
		ePlacedItem
	};

	virtual EApplicationDataType GetActorApplicationDataType() const = 0;

	virtual const MissileBase* AsMissileBase() const = 0;
	virtual MissileBase* AsMissileBase() = 0;

	virtual const PlayerBase* AsPlayerBase() const = 0;
	virtual PlayerBase* AsPlayerBase() = 0;

	virtual const EQObject* AsObject() const = 0;
	virtual EQObject* AsObject() = 0;

	virtual const EQSwitch *AsSwitch() const = 0;
	virtual EQSwitch *AsSwitch() = 0;

	virtual const EQPlacedItem* AsPlacedItem() const = 0;
	virtual EQPlacedItem* AsPlacedItem() = 0;
};

//============================================================================
// ActorBase
//============================================================================

class CObjectGroupStage;

class [[offsetcomments]] CObjectGroupStageInstance : public TListNode<CObjectGroupStageInstance>
{
public:
	/*0x0c*/ CActorInterface* pActor1;
	/*0x10*/ CActorInterface* pActor2;
	/*0x14*/ CObjectGroupStage* pStage;
	/*0x18*/
};

struct [[offsetcomments]] ARMOR
{
/*0x00*/ unsigned int ID;                        // idfile on Lucy
/*0x04*/ unsigned int Var;
/*0x08*/ unsigned int Material;
/*0x0c*/ unsigned int NewArmorID;
/*0x10*/ unsigned int NewArmorType;
/*0x14*/
};

inline namespace deprecated {
	using PARMOR DEPRECATE("Use ARMOR* instead of PARMOR") = ARMOR*;
}

struct [[offsetcomments]] EQUIPMENT
{
	union {
	/*0x00*/ struct { ARMOR Item[9]; };          // EQUIPARRAY
		struct                                   // EQUIPUNIQUE
		{
		/*0x00*/ ARMOR Head;
		/*0x14*/ ARMOR Chest;
		/*0x28*/ ARMOR Arms;
		/*0x3c*/ ARMOR Wrists;
		/*0x50*/ ARMOR Hands;
		/*0x64*/ ARMOR Legs;
		/*0x78*/ ARMOR Feet;
		/*0x8c*/ ARMOR Primary;
		/*0xa0*/ ARMOR Offhand;
		};
	};
/*0xb4*/
};

inline namespace deprecated {
	using PEQUIPMENT DEPRECATE("Use EQUIPMENT* instead of PEQUIPMENT") = EQUIPMENT*;
}

class [[offsetcomments]] ActorBase
{
public:
	EQLIB_OBJECT float GetBoundingRadius();

/*0x000*/ void*       vfTableActorClient;
/*0x004*/ char        TextureType;
/*0x005*/ char        Material;
/*0x006*/ char        Variation;
/*0x007*/ char        HeadType;
/*0x008*/ uint8_t     FaceStyle;
/*0x009*/ uint8_t     HairColor;
/*0x00a*/ uint8_t     FacialHairColor;
/*0x00b*/ uint8_t     EyeColor1;
/*0x00c*/ uint8_t     EyeColor2;
/*0x00d*/ uint8_t     HairStyle;
/*0x00e*/ uint8_t     FacialHair;
/*0x010*/ int         Race;
/*0x014*/ int         Race2;
/*0x018*/ int         Class;
/*0x01c*/ uint8_t     Gender;
/*0x01d*/ char        ActorDef[0x40];
/*0x060*/ unsigned intArmorColor[0x9];
/*0x084*/ bool        bShowHelm;
/*0x088*/ int         Heritage;                 // drakkin only face setting
/*0x08c*/ int         Tattoo;                   // drakkin only face setting
/*0x090*/ int         Details;                  // drakkin only face setting
/*0x094*/ EQUIPMENT   ActorEquipment;           // 0x0ff8 is confirmed // size 0xb4
/*0x148*/
};

//============================================================================
// ActorClient
//============================================================================

// size 0x1140 see 63D777 in Sep 25 2018 Test
//.text:0063D777                 mov     [edi+1B8h], eax so last member is at 1B8h which makes the struct size 0x1bc
// 0x1bc + 0x0f84 is 0x1140
class [[offsetcomments]] ActorClient : public ActorBase
{
public:
	// EQLIB_OBJECT const CVector3& GetPosition() const;
	// EQLIB_OBJECT void GetPosition(CVector3*) const;

/*0x148*/ int         LeftEyeMaterialIndex;
/*0x14c*/ int         RightEyeMaterialIndex;
/*0x150*/ CParticlePointInterface* pParticlePoints[0xa];
/*0x178*/ void*       pLowerBones;
/*0x17c*/ void*       pUpperBones;
/*0x180*/ void*       pcactorex;                // todo: move to ActorInterface*
/*0x184*/ CLightInterface* pLight;
/*0x188*/ ActorAnimation*  pActorAnimation;
/*0x18c*/ TList<CObjectGroupStageInstance> StageInstances;          // size 0x8
/*0x194*/ bool        bActiveTransition;
/*0x198*/ unsigned int CurrentStage;
/*0x19c*/ float       ZOffset;
/*0x1a0*/ float       TempY;//related to ZOffset adjustments I *think*
/*0x1a4*/ float       TempX;
/*0x1a8*/ float       TempZ;
/*0x1ac*/ bool        bReplacedStaticObject;
/*0x1b0*/ int         PartialFaceNumber;
/*0x1b4*/ bool        bNewArmorDisabled;
/*0x1b8*/ CActorApplicationData* pAppData;
/*0x1bc*/
};

//============================================================================

enum EnvironmentType
{
	ENVIRONMENT_GENERIC,                // factory default
	ENVIRONMENT_PADDEDCELL,
	ENVIRONMENT_ROOM,                   // standard environments
	ENVIRONMENT_BATHROOM,
	ENVIRONMENT_LIVINGROOM,
	ENVIRONMENT_STONEROOM,
	ENVIRONMENT_AUDITORIUM,
	ENVIRONMENT_CONCERTHALL,
	ENVIRONMENT_CAVE,
	ENVIRONMENT_ARENA,
	ENVIRONMENT_HANGAR,
	ENVIRONMENT_CARPETEDHALLWAY,
	ENVIRONMENT_HALLWAY,
	ENVIRONMENT_STONECORRIDOR,
	ENVIRONMENT_ALLEY,
	ENVIRONMENT_FOREST,
	ENVIRONMENT_CITY,
	ENVIRONMENT_MOUNTAINS,
	ENVIRONMENT_QUARRY,
	ENVIRONMENT_PLAIN,
	ENVIRONMENT_PARKINGLOT,
	ENVIRONMENT_SEWERPIPE,
	ENVIRONMENT_UNDERWATER,
	ENVIRONMENT_DRUGGED,
	ENVIRONMENT_DIZZY,
	ENVIRONMENT_PSYCHOTIC,

	ENVIRONMENT_COUNT                   // total number of environments
};

// @size: CDisplay = 0x2E04 @ 0x5F4F15 (05-21-2020 live)
class [[offsetcomments]] CDisplay
{
public:
	EQLIB_OBJECT CDisplay(HWND);
	EQLIB_OBJECT ~CDisplay();

	// Imported Functions
	EQLIB_OBJECT float GetFloorHeight(float X, float Y, float F, float Radius = 0.0f, const CVector3& CollisionVector = CVector3(-1, -1, 1), CActorApplicationData* pAppData = 0, EActorType eActorType = Undefined, float ZOffset = 1.0f);
	EQLIB_OBJECT CActorInterface* GetClickedActor(int X, int Y, bool bClimbLadder, CVector3& outHitLocation, CVector3& outHitNormal);
	EQLIB_OBJECT bool GetWorldFilePath(char*, const char*);
	EQLIB_OBJECT void ReloadUI(bool, bool);
	EQLIB_OBJECT int is_3dON();
	EQLIB_OBJECT float TrueDistance(float fromx, float fromy, float fromz, float tox, float toy, float toz, float zfactor);
	EQLIB_OBJECT void SetViewActor(CActorInterface*);
	EQLIB_OBJECT void SetRenderWindow(int mode);
	EQLIB_OBJECT void ToggleScreenshotMode();
	EQLIB_OBJECT static COLORREF GetUserDefinedColor(int);
	EQLIB_OBJECT static int WriteTextHD2(const char* text, int X, int Y, int color);

	EQLIB_OBJECT void SetYon(float);
	EQLIB_OBJECT void SetActorYon(float);
	EQLIB_OBJECT void SetActorClipPlane(int);
	EQLIB_OBJECT void SetShadowClipPlane(int);

	EQLIB_OBJECT bool GenericSphereColl(float, float, float, float, float, float, float*, float*, float*, unsigned char);
	EQLIB_OBJECT bool SlideSwitchLeftRight(EQSwitch*, float, int, float);
	EQLIB_OBJECT char* GetIniRaceName(int);
	EQLIB_OBJECT PlayerClient* GetNearestPlayerInView(float, bool);
	EQLIB_OBJECT float FindZoneTopZ(float, float, float);
	EQLIB_OBJECT float FixHeading(float);
	EQLIB_OBJECT float HeadingDiff(float, float, float*);
	EQLIB_OBJECT float PlayerDistance(PlayerZoneClient*, PlayerZoneClient*, float);
	EQLIB_OBJECT float PlayerSimpleDistance(PlayerZoneClient*, PlayerZoneClient*, float);
	EQLIB_OBJECT float SetActorBoundingRadius(CActorInterface*, float, float);
	EQLIB_OBJECT float SimpleDistance(float, float, float, float, float, float, float);
	EQLIB_OBJECT int GetItemType(int);
	EQLIB_OBJECT int GetNewPCIniFlag(int, int);
	EQLIB_OBJECT int GetSkyTime(int*, int*);
	EQLIB_OBJECT int is_ParticleSystemON();
	EQLIB_OBJECT int MoveMissile(EQMissile*);
	EQLIB_OBJECT int ShouldLoadNewPcModel(int, int);
	EQLIB_OBJECT int TurnInfravisionEffectOff();
	EQLIB_OBJECT int TurnInfravisionEffectOn();
	EQLIB_OBJECT long SetUserRender(int);
	EQLIB_OBJECT static char* DefaultUIPath;
	EQLIB_OBJECT static char* UIPath;
	EQLIB_OBJECT static void __cdecl SetUserDefinedColor(int, int, int, int);
	EQLIB_OBJECT CLightInterface* CreateLight(unsigned char, float, float, float, float);
	EQLIB_OBJECT CActorInterface* CreateActor(char*, float, float, float, float, float, float, bool, bool);
	EQLIB_OBJECT unsigned char GetEnvironment(float, float, float, int*);
	EQLIB_OBJECT unsigned char GetIntensity(unsigned char);
	EQLIB_OBJECT unsigned char LoadBMPFile();
	EQLIB_OBJECT unsigned char LoadNPCFromS3D(char*, char*, char*);
	EQLIB_OBJECT unsigned char LoadWorldFile(char*, char*, int, unsigned char);
	EQLIB_OBJECT unsigned int IsShield(int) const;
	EQLIB_OBJECT void ActivateMainUI(bool);
	EQLIB_OBJECT void ChangeVideoMode();
	EQLIB_OBJECT void CheckForScreenModeToggle();
	EQLIB_OBJECT void CleanUpDDraw();
	EQLIB_OBJECT void ClearScreen();
	EQLIB_OBJECT void CreatePlayerActor(PlayerClient*);
	EQLIB_OBJECT void DDrawUpdateDisplay();
	EQLIB_OBJECT void DeactivateMainUI();
	EQLIB_OBJECT void default_cameras();
	EQLIB_OBJECT void DefineSoloMode();
	EQLIB_OBJECT void DeleteActor(CActorInterface*);
	EQLIB_OBJECT void DeleteLight(CLightInterface*);
	EQLIB_OBJECT void GetOnActor(CActorInterface*, PlayerZoneClient*);
	EQLIB_OBJECT void hideGrassObjects();
	EQLIB_OBJECT void InitCharSelectUI();
	EQLIB_OBJECT void InitCommonLights();
	EQLIB_OBJECT void InitDDraw();
	EQLIB_OBJECT void InitEverQuestLocale(EQLocalizeLanguage);
	EQLIB_OBJECT void InitUserDefinedColors();
	EQLIB_OBJECT void InitWorld();
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void LightningStrike();
	EQLIB_OBJECT void loadGrassObjects(char*);
	EQLIB_OBJECT void MoveLight(CLightInterface*, CPhysicsInfo*);
	EQLIB_OBJECT void MoveLocalPlayerToSafeCoords();
	EQLIB_OBJECT void NewUIProcessEscape();
	EQLIB_OBJECT void PlaySoundAtLocation(float, float, float, int);
	EQLIB_OBJECT void ProcessCloud();
	EQLIB_OBJECT void ProcessEffects();
	EQLIB_OBJECT void ProcessParticleEmitter(EQSwitch*);
	EQLIB_OBJECT void ProcessSky();
	EQLIB_OBJECT void ProcessSwitches();
	EQLIB_OBJECT void ProcessWeather();
	EQLIB_OBJECT void RealRender_World();
	EQLIB_OBJECT void Render_MinWorld();
	EQLIB_OBJECT void Render_World();
	EQLIB_OBJECT void ResetRenderWindow();
	EQLIB_OBJECT void SetActorScaleFactor(CActorInterface*, float, unsigned char);
	EQLIB_OBJECT void SetActorSpriteTint(EQRGB*, CActorInterface*);
	EQLIB_OBJECT void SetActorUserData(CActorInterface*, void*);
	EQLIB_OBJECT void SetAmbientLight(float);
	EQLIB_OBJECT void SetCCreateCamera(int);
	EQLIB_OBJECT void SetDayPeriod(unsigned char);
	EQLIB_OBJECT void SetFog(bool, float, float, unsigned char, unsigned char, unsigned char);
	EQLIB_OBJECT void SetGammaCorrection(float);
	EQLIB_OBJECT void SetGenericEnvironment();
	EQLIB_OBJECT void SetPCloudDensity(int);
	EQLIB_OBJECT void SetSkyBackground();
	EQLIB_OBJECT void SetSkyLayer(int);
	EQLIB_OBJECT void SetSpecialEnvironment(EnvironmentType);
	EQLIB_OBJECT void SetSunLight();
	EQLIB_OBJECT void SetupEmitterEnvironment();
	EQLIB_OBJECT void SetupEQPlayers();
	EQLIB_OBJECT void SetViewActorByName(char*);
	EQLIB_OBJECT void SetViewAngle(int);
	EQLIB_OBJECT void ShowDisplay();
	EQLIB_OBJECT void StartWeather(int, unsigned char);
	EQLIB_OBJECT void StartWorldDisplay(EQZoneIndex);
	EQLIB_OBJECT void StartWorldDisplay_Bailout(const char*);
	EQLIB_OBJECT void StopWeather(int, unsigned char);
	EQLIB_OBJECT void StopWorldDisplay();
	EQLIB_OBJECT void SwitchToDefaultCameraMode();
	EQLIB_OBJECT void ToggleCharacterNameSprites(bool);
	EQLIB_OBJECT void ToggleNpcNameSprites(bool);
	EQLIB_OBJECT void ToggleView();
	EQLIB_OBJECT void UpdateCameraAfterModeSwitch();
	EQLIB_OBJECT void updateGrassObjects();
	EQLIB_OBJECT void UpdateMobileEmitterLocations();
	EQLIB_OBJECT void FreeAllItemLists();

	// private
	EQLIB_OBJECT void CleanCharSelectUI();
	EQLIB_OBJECT void CleanGameUI();
	EQLIB_OBJECT void CleanUpNewUI();
	EQLIB_OBJECT void InitGameUI();
	EQLIB_OBJECT void InitNewUI();

	// Most of these need verification
/*0x0000*/ int                    ErrorFlag;
/*0x0004*/ uint8_t                BFog;
/*0x0005*/ uint8_t                bMoveAnims;
/*0x0008*/ float                  Yon;
/*0x000c*/ float                  AmbientLight;
/*0x0010*/ uint8_t                DragItem;
/*0x0011*/ uint8_t                DragMoney;
/*0x0012*/ uint8_t                DragHotButton;
/*0x0013*/ bool                   bInRenderLoop;
/*0x0014*/ bool                   bHideLootedCorpses;
/*0x0015*/ char                   LastTeleportAreaTag[0x100];
/*0x0118*/ CCameraInterface*      pCamera;
/*0x011c*/ CVector3*              CamPos;
/*0x0120*/ CVector3*              CamOrientation;
/*0x0124*/ SWadFile*              WadFileLoadScreen;
/*0x0128*/ uint8_t                NewPCModelsLoaded;
/*0x0129*/ bool                   bHorsesLoaded;
/*0x012c*/ ActorTagManager*       pActorTagManager;
/*0x0130*/ uint8_t                Unknown0x130[0x24];
/*0x0154*/ uint32_t               TimeStamp;
/*0x0158*/ BYTE                   Unknown0x158[0x2c12];
/*0x2d6a*/ bool                   NpcNames;
/*0x2d6b*/ bool                   bShowPetNames;
/*0x2d6c*/ bool                   bShowMercNames;
/*0x2d6d*/ bool                   bShowPetOwnerNames;
/*0x2d6e*/ bool                   bShowMercOwnerNames;
/*0x2d6f*/ bool                   bAdvancedLightingEnabled;
/*0x2d70*/ bool                   bPostEffectsEnabled;
/*0x2d71*/ bool                   bBloomEnabled;
/*0x2d72*/ bool                   bShadowsEnabled;
/*0x2d73*/ bool                   bWaterSwapEnabled;
/*0x2d74*/ bool                   b20PixelShadersEnabled;
/*0x2d75*/ bool                   bVertexShadersEnabled;
/*0x2d76*/ bool                   bWindowedGamma;
/*0x2d77*/ bool                   bWindowedIncreasedGamma;
/*0x2d78*/ int                    ActorClipPlane;
/*0x2d7c*/ int                    ShadowClipPlane;
/*0x2d80*/
};

inline namespace deprecated {
	using CDISPLAY DEPRECATE("Use CDisplay instead of CDISPLAY") = CDisplay;
	using PCDISPLAY DEPRECATE("Use CDisplay* instead of PCDISPLAY") = CDisplay*;
}

} // namespace eqlib

