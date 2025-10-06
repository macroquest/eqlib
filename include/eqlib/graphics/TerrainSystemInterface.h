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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#pragma once

#include "eqlib/game/MathTypes.h"

namespace eqlib {

//============================================================================


//----------------------------------------------------------------------------
struct SEQZoneParameters;
class CEcoSystemManagerInterface;
class CTerrainBubbleInterface;
class CTerrainTileInterface;
class CEcoSCBitmapRefInterfaceystemManagerInterface;
class CTerrainObjectInterface;
class CTerrainAreaInterface;
class CTerrainLightManagerInterface;
class CBitmapRefInterface;
class CTerrainExclusionAreaInterface;
class CTerrainObjectGroupInterface;
class CTerrainLightInterface;
class CTerrainInvisibleWallInterface;
class CTerrainDiskTileInterface;
class CRadialFloraInstanceInterface;
class CRadialFloraDefinitionInterface;
class CTerrainObjectGroupDefinitionManagerInterface;
class CTerrainObjectGroupDefinitionInterface;

struct UnlitVert;

//----------------------------------------------------------------------------
struct SEQZoneParameters
{
	
};

//----------------------------------------------------------------------------
struct TileLoc
{
	int x, y;
};

//----------------------------------------------------------------------------
struct Loc
{
	int x, y;
	CVector3 pos;
	CVector3 rot;
	CVector3 scale;
};

//----------------------------------------------------------------------------
class CTerrainSystemInterface
{
public:
/*0x0000*/ virtual void Init() = 0;
/*0x0004*/ virtual void ShutDown() = 0;
/*0x0008*/ virtual void LoadZoneParameters(SEQZoneParameters*, const char*, const char*) = 0;
/*0x000c*/ virtual bool LoadProject(SEQZoneParameters*, bool) = 0;
/*0x0010*/ virtual bool SaveAll() = 0;
/*0x0014*/ virtual bool UnloadProject(bool) = 0;
/*0x0018*/ virtual CEcoSystemManagerInterface* GetEcoSystemManagerInterface() = 0;
/*0x001c*/ virtual CTerrainBubbleInterface* GetBubbleInterface() = 0;
/*0x0020*/ virtual CTerrainTileInterface* GetTileInterface(int, int) = 0;
/*0x0024*/ virtual void SetBaseDirectory(const char*) = 0;
/*0x0028*/ virtual void SetEcoSystemDirectory(const char*) = 0;
/*0x002c*/ virtual void SetResourceDirectory(const char*) = 0;
/*0x0030*/ virtual void SetLandDirectory(const char*) = 0;
/*0x0034*/ virtual void SetObjectDirectory(const char*) = 0;
/*0x0038*/ virtual void SetLightDirectory(const char*) = 0;
/*0x003c*/ virtual CBitmapRefInterface* GetDefaultBitmap() = 0;
/*0x0040*/ virtual CBitmapRefInterface* GetBitmap(const char*) = 0;
/*0x0044*/ virtual void ReloadBitmap(const char*) = 0;
/*0x0048*/ virtual CTerrainObjectInterface* CreateTerrainObjectInterface(const char*, int) = 0;
/*0x004c*/ virtual void ReleaseObject(CTerrainObjectInterface*) = 0;
/*0x0050*/ virtual char* GetLoadedObjectsList() = 0;
/*0x0054*/ virtual void EnableObjectRendering(bool) = 0;
/*0x0058*/ virtual CTerrainAreaInterface* CreateArea() = 0;
/*0x005c*/ virtual void EnableAreaRendering(bool) = 0;
/*0x0060*/ virtual void DestroyArea(CTerrainAreaInterface*) = 0;
/*0x0064*/ virtual CTerrainLightManagerInterface* GetLightManagerInterface() = 0;
/*0x0068*/ virtual void EnableLightGizmoRendering(bool) = 0;
/*0x006c*/ virtual void EnableWaterRendering(bool) = 0;
/*0x0070*/ virtual TileLoc GetMin() const = 0;
/*0x0074*/ virtual TileLoc GetMax() const = 0;
/*0x0078*/ virtual void ExportOBJ(const char*, int, int, int, int) = 0;
/*0x007c*/ virtual void ImportBMP(const char*, TileLoc, float, float) = 0;
/*0x0080*/ virtual void SetErrorNotificationCallback(void (*)(const char*, const char*)) = 0;
/*0x0084*/ virtual bool GetTerrainClicked(int, int, Loc&) = 0;
/*0x0088*/ virtual bool GetAreaClicked(int, int, CTerrainAreaInterface**) = 0;
/*0x008c*/ virtual bool GetObjectClicked(int, int, CTerrainObjectInterface**) = 0;
/*0x0090*/ virtual bool GetRadialFloraExclusionAreaClicked(int, int iewY, CTerrainExclusionAreaInterface**) = 0;
/*0x0094*/ virtual bool GetObjectGroupClicked(int, int, CTerrainObjectGroupInterface**) = 0;
/*0x0098*/ virtual bool GetLightClicked(int, int, CTerrainLightInterface**) = 0;
/*0x009c*/ virtual bool GetWallClicked(int, int, CTerrainInvisibleWallInterface**, int&) = 0;
/*0x00a0*/ virtual bool AddTerrainClicked(int, int, Loc&) = 0;
/*0x00a4*/ virtual Loc WorldToTile(const CVector3&) = 0;
/*0x00a8*/ virtual CVector3 TileToWorld(Loc) = 0;
/*0x00ac*/ virtual void SetMode(unsigned int) = 0;
/*0x00b0*/ virtual void DestroyUndoTile(CTerrainDiskTileInterface*) = 0;
/*0x00b4*/ virtual float GetDefaultLandError() = 0;
/*0x00b8*/ virtual void SetDefaultLandError(float) = 0;
/*0x00bc*/ virtual void EnableLODs(bool) = 0;
/*0x00c0*/ virtual bool LODsEnabled() = 0;
/*0x00c4*/ virtual float GetFogStart() = 0;
/*0x00c8*/ virtual float GetFogEnd() = 0;
/*0x00cc*/ virtual unsigned int GetFogColor() = 0;
/*0x00d0*/ virtual void SetFog(bool, int, int, RGB&) = 0;
/*0x00d4*/ virtual void SetWireframe(bool) = 0;
/*0x00d8*/ virtual void SetUseShaders(bool) = 0;
/*0x00dc*/ virtual void UpdateStats() = 0;
/*0x00e0*/ virtual void UpdateTime(unsigned int) = 0;
/*0x00e4*/ virtual void RenderFrame() = 0;
/*0x00e8*/ virtual void CreateEditorCamera(float, float, float, Loc) = 0;
/*0x00ec*/ virtual void MoveEditorCamera(Loc) = 0;
/*0x00f0*/ virtual void GetEditorCameraLocation(Loc*) = 0;
/*0x00f4*/ virtual int GetNumLODs() = 0;
/*0x00f8*/ virtual void GetLODData(int, int&, float&, int&) = 0;
/*0x00fc*/ virtual void AddLOD(int, float, int) = 0;
/*0x0100*/ virtual void RemoveLOD(int, float, int) = 0;
/*0x0104*/ virtual char* ProcessUserCommand(const char*) = 0;
/*0x0108*/ virtual void EnableFloraRendering(bool) = 0;
/*0x010c*/ virtual bool FloraRenderingEnabled() = 0;
/*0x0110*/ virtual CRadialFloraInstanceInterface* CreateFloraInstance(CRadialFloraDefinitionInterface*, CVector3&, float) = 0;
/*0x0114*/ virtual CRadialFloraDefinitionInterface* GetFloraDefinition(const char*) = 0;
/*0x0118*/ virtual CRadialFloraDefinitionInterface* CreateFloraDefinition(const char*) = 0;
/*0x011c*/ virtual void DestroyFloraDefinition(CRadialFloraDefinitionInterface*) = 0;
/*0x0120*/ virtual unsigned int GetNumFloraDefinitions() = 0;
/*0x0124*/ virtual CRadialFloraDefinitionInterface* GetFloraDefinition(unsigned int) = 0;
/*0x0128*/ virtual void ClearOldStyleWaterSheets() = 0;
/*0x012c*/ virtual void EnableInvisibleWallRendering(bool) = 0;
/*0x0130*/ virtual bool InvisibleWallRenderingEnabled() = 0;
/*0x0134*/ virtual CTerrainInvisibleWallInterface* CreateInvisibleWall(const char*) = 0;
/*0x0138*/ virtual void AddInvisibleWall(CTerrainInvisibleWallInterface*) = 0;
/*0x013c*/ virtual void RemoveInvisibleWall(CTerrainInvisibleWallInterface*) = 0;
/*0x0140*/ virtual CTerrainInvisibleWallInterface* GetInvisibleWall(unsigned int) = 0;
/*0x0144*/ virtual CTerrainInvisibleWallInterface* GetInvisibleWall(const char*) = 0;
/*0x0148*/ virtual unsigned int GetNumInvisibleWalls() = 0;
/*0x014c*/ virtual void DestroyInvisibleWall(CTerrainInvisibleWallInterface*) = 0;
/*0x0150*/ virtual void EnableFloraExclusionAreaRendering(bool) = 0;
/*0x0154*/ virtual bool FloraExclusionAreaRenderingEnabled() = 0;
/*0x0158*/ virtual CTerrainExclusionAreaInterface* CreateExclusionArea() = 0;
/*0x015c*/ virtual void AddRadialFloraExclusionArea(CTerrainExclusionAreaInterface*) = 0;
/*0x0160*/ virtual void RemoveRadialFloraExclusionArea(CTerrainExclusionAreaInterface*) = 0;
/*0x0164*/ virtual void DestroyRadialFloraExclusionArea(CTerrainExclusionAreaInterface*) = 0;
/*0x0168*/ virtual unsigned int CleanUpDuplicateAreas() = 0;
/*0x016c*/ virtual void DeleteTile(int, int) = 0;
/*0x0170*/ virtual void AddTile(int, int) = 0;
/*0x0174*/ virtual bool SeamlessLoading() = 0;
/*0x0178*/ virtual void SetBubbleLocked(bool) = 0;
/*0x017c*/ virtual unsigned int GetBubbleRadius() = 0;
/*0x0180*/ virtual void SetBubbleRadius(unsigned int) = 0;
/*0x0184*/ virtual const char* GetOrdinalDirection(float) = 0;
/*0x0188*/ virtual void RotateZone() = 0;
/*0x018c*/ virtual void DrawLineListMesh(Loc, UnlitVert*, unsigned int) = 0;
/*0x0190*/ virtual void DrawLineStripMesh(Loc, UnlitVert*, unsigned int) = 0;
/*0x0194*/ virtual void DrawScreenBox(int, int, int, int, unsigned int) = 0;
/*0x0198*/ virtual TileLoc GetWorldMin() = 0;
/*0x019c*/ virtual TileLoc GetWorldMax() = 0;
/*0x01a0*/ virtual int GetVertsPerTile() const = 0;
/*0x01a4*/ virtual int GetQuadsPerTile() const = 0;
/*0x01a8*/ virtual float GetUnitsPerTile() = 0;
/*0x01ac*/ virtual float GetUnitsPerVert() = 0;
/*0x01b0*/ virtual int GetTextureMaskSize() = 0;
/*0x01b4*/ virtual int GetCoverMapInputSize() = 0;
/*0x01b8*/ virtual int GetLayeringMapInputSize() = 0;
/*0x01bc*/ virtual CTerrainObjectGroupDefinitionManagerInterface* GetTerrainObjectGroupDefinitionManager() = 0;
/*0x01c0*/ virtual CTerrainObjectGroupInterface* CreateTerrainObjectGroup(CTerrainObjectGroupDefinitionInterface*, Loc*, float) = 0;
/*0x01c4*/ virtual void DestroyTerrainObjectGroup(CTerrainObjectGroupInterface*) = 0;
/*0x01c8*/ virtual void DrawObjectGroupSelection(CTerrainObjectGroupInterface*) = 0;
/*0x01cc*/ virtual void RebuildAllFlora() = 0;
/*0x01d0*/ virtual const char* GetFallbackDetailMapName() = 0;
/*0x01d4*/ virtual void SetFallbackDetailMapName(const char*) = 0;
/*0x01d8*/ virtual CBitmapRefInterface* GetFallbackDetailMap() = 0;
/*0x01dc*/ virtual unsigned int GetFallbackDetailRepeat() = 0;
/*0x01e0*/ virtual void SetFallbackDetailRepeat(unsigned int) = 0;
/*0x01e4*/ virtual void EnableTileOverlay(bool) = 0;
/*0x01e8*/ virtual void EnableEcosystemAudit(bool) = 0;
/*0x01ec*/ virtual bool EcosystemAuditEnabled() = 0;
/*0x01f0*/ virtual void SaveZoneParameters(const char*, const char*, SEQZoneParameters*) = 0;
};

//============================================================================

} // namespace eqlib
