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
#include "Constants.h"
#include "Containers.h"
#include "CXStr.h"
#include "GraphicsEngine.h"
#include "Items.h"
#include "Spells.h"

// This is the home of all things related to what used to be called SPAWNINFO,
// plus a few extra things until they find a home of their own.
//
// Class hierarchies:
//
// SPAWNINFO:
//   PlayerClient -> PlayerZoneClient -> PlayerBase

namespace eqlib {

class CLightInterface;
class CParticlePointInterface;
class EQObject;
class EQSwitch;
class EQPlacedItem;
class PlayerAnimationBase;
class PlayerBase;
class PlayerClient;
class PcClient;
class MissileBase;
class CRaceGenderInfo;

inline namespace deprecated {
	struct EQC_INFO;
}
struct LaunchSpellData;
struct chngForm;

using SPAWNINFO = PlayerClient;
using PSPAWNINFO = PlayerClient *;

//============================================================================
// Misc
//============================================================================

enum GravityBehavior
{
	Ground,
	Flying,
	Levitating,
	Water,
	Floating,//boat
	LevitateWhileRunning
};

class [[offsetcomments]] CPhysicsInfo
{
public:
/*0x00*/ float               Y;
/*0x04*/ float               X;
/*0x08*/ float               Z;
/*0x0c*/ float               SpeedY;
/*0x10*/ float               SpeedX;
/*0x14*/ float               SpeedZ;
/*0x18*/ float               SpeedRun;
/*0x1c*/ float               Heading;
/*0x20*/ float               Angle;
/*0x24*/ float               AccelAngle;
/*0x28*/ float               SpeedHeading;
/*0x2c*/ float               CameraAngle;
/*0x30*/
};

struct [[offsetcomments]] SDoCollisionMovementStats
{
/*0x00*/ CPhysicsInfo        Source;
/*0x30*/ float               DestY;
/*0x34*/ float               DestX;
/*0x38*/ float               DestZ;
/*0x3c*/ float               SourceFloor;
/*0x40*/ float               DestFloor;
/*0x44*/ CPhysicsInfo        Dest;
/*0x74*/
};

class [[offsetcomments]] CLineBase
{
public:
/*0x00*/ float OriginY;
/*0x04*/ float OriginX;
/*0x08*/ float OriginZ;
/*0x0c*/ float DirectionY;
/*0x10*/ float DirectionX;
/*0x14*/ float DirectionZ;
/*0x18*/
};

class CLineSegment : public CLineBase
{
};

class [[offsetcomments]] CCapsule : public CLineSegment
{
public:
/*0x18*/ float Radius;
/*0x1c*/
};

struct [[offsetcomments]] PhysicsEffect
{
/*0x00*/ int SpellID;
/*0x04*/ int CasterID;
/*0x08*/ int EffectID;
/*0x0c*/ int BaseEffect;
/*0x10*/
};

// Mar 09 2020
struct [[offsetcomments]] SFellowshipMember
{
/*0x00*/ EqGuid       UniqueEntityID;
/*0x08*/ char         Name[EQ_MAX_NAME];
/*0x48*/ int          ZoneID;
/*0x4c*/ int          Level;
/*0x50*/ int          Class;
/*0x54*/ int          LastOn;
/*0x58*/
};

inline namespace deprecated {
	using FELLOWSHIPMEMBER DEPRECATE("Use SFellowshipMember instead of FELLOSWHIPMEMBER") = SFellowshipMember;
	using PFELLOWSHIPMEMBER DEPRECATE("Use SFellowshipMember* instead of PFELLOWSHIPMEMBER") = SFellowshipMember*;
}

struct FSDATA
{
	char Strings[0x20];   // need to check what these are...
};

constexpr int MAX_FELLOWSHIP_MEMBERS = 12;
constexpr int MAX_FELLOWSHIP_MOTD = 1024;

// Mar 09 2020 - 0xa80 see 8CB990
struct [[offsetcomments]] SFellowship
{
/*0x000*/ unsigned int      Version;
/*0x004*/ unsigned int      Version2;
/*0x008*/ unsigned int      Version3;
/*0x00c*/ unsigned int      Version4;
/*0x010*/ EqGuid            FellowshipGUID;
/*0x018*/ char              MotD[MAX_FELLOWSHIP_MOTD];
/*0x418*/ int               Members;
/*0x420*/ SFellowshipMember FellowshipMember[MAX_FELLOWSHIP_MEMBERS];
/*0x840*/ unsigned int      Sync;
/*0x844*/ bool              bExpSharingEnabled[MAX_FELLOWSHIP_MEMBERS];
/*0x850*/ bool              bSharedExpCapped[MAX_FELLOWSHIP_MEMBERS];
/*0x85c*/ int               Unknown0x85C;
/*0x860*/

	inline const char* get_Leader() { return Members > 0 ? FellowshipMember[0].Name : ""; }
	__declspec(property(get = get_Leader)) const char* Leader;

	inline uint32_t get_FellowshipID() { return FellowshipGUID.UniqueEntityID; }
	__declspec(property(get = get_FellowshipID)) uint32_t FellowshipID;
};

inline namespace deprecated {
	using FELLOWSHIPINFO DEPRECATE("Use SFellowship instead of FELLOWSHIPINFO") = SFellowship;
	using PFELLOWSHIPINFO DEPRECATE("Use SFellowship* instead of PFELLOWSHIPINFO") = SFellowship*;
}

// Size: 0x150, 0x69B040 @ 2021-05-14
struct chngForm {
/*0x000*/ int             spawnID;
/*0x004*/ char            name[EQ_MAX_NAME];
/*0x044*/ int             race;                // GetRace()
/*0x048*/ char            gender;              // mActorClient.Gender
/*0x049*/ char            textureType;         // mActorClient.TextureType
/*0x04a*/ char            armorVariation;      // mActorClient.Variation
/*0x04b*/ char            armorMaterial;       // mActorClient.Material
/*0x04c*/ char            head;                // mActorClient.HeadType
/*0x050*/ int             faceStyle;           // mActorClient.FaceStyle
/*0x054*/ uint8_t         hairStyle;           // mActorClient.HairStyle
/*0x055*/ uint8_t         hairColor;           // mActorClient.HairColor
/*0x056*/ uint8_t         facialHair;          // mActorClient.FacialHair
/*0x057*/ uint8_t         facialHairColor;     // mActorClient.FacialHairColor
/*0x058*/ float           height;              // Height
/*0x05c*/ uint32_t        npcTintIndex;        // NpcTintIndex
/*0x060*/ bool            keepArmorProperties;
/*0x064*/ ArmorProperties armorProperties[9];  // mActorClient.ActorEquipment
/*0x118*/ int             armorTint[9];        // mActorClient.ArmorColor
/*0x13c*/ int             Class;               // mActorClient.Class
/*0x144*/ int             heritage;            // mActorClient.Heritage
/*0x148*/ int             tattoo;              // mActorClient.Tattoo
/*0x14c*/ int             facialAttachment;    // mActorClient.Details
/*0x150*/

	chngForm()
		: spawnID(0)
		, race(-1)
		, gender(-1)
		, textureType(-1)
		, armorVariation(-1)
		, armorMaterial(-1)
		, head(-1)
		, faceStyle(-1)
		, hairStyle(255)
		, hairColor(255)
		, facialHair(255)
		, facialHairColor(255)
		, height(-1.0f)
		, npcTintIndex(0)
		, keepArmorProperties(false)
		, Class(-1)
		, heritage(0)
		, tattoo(-1)
		, facialAttachment(-1)
	{
		memset(armorTint, 0, sizeof(armorTint));
		memset(name, 0, sizeof(name));
	}
};

struct [[offsetcomments]] LaunchSpellData
{
/*0x00*/ int                SpellID;             // -1 = not casting a spell
/*0x04*/ uint32_t           TargetID;
/*0x08*/ uint32_t           unknown08;
/*0x0c*/ uint32_t           unknown0c;
/*0x10*/ uint32_t           SpellETA;            // Calculated TimeStamp when current spell being cast will land. 0 while not casting.
/*0x14*/ int                ItemID;
/*0x18*/ float              CastingY;
/*0x1c*/ float              CastingX;
/*0x20*/ float              TargetPosY;
/*0x24*/ float              TargetPosX;
/*0x28*/ float              TargetPosZ;
/*0x2c*/ ItemGlobalIndex    ItemLocation;
/*0x38*/ ItemSpellTypes     ItemCastType;
/*0x39*/ uint8_t            SpellSlot;           // -1 if not casting, otherwise it's the spell gem number.
/*0x3a*/ bool               bUnknownFlag3a;
/*0x3b*/ bool               bUnknownFlag3b;
/*0x3c*/ bool               bResetMeleeTimers;
/*0x3d*/ bool               bUnknownFlag3d;
/*0x3e*/ bool               bFreeTarget;
/*0x3f*/ bool               bTwinCast;
/*0x40*/ bool               bUnknownFlag40;
/*0x41*/ bool               bUnknownFlag41;
/*0x42*/ bool               bUnknownFlag42;
/*0x43*/ bool               bUnknownFlag43;
/*0x44*/

	// Changed 2022-10-12, the following are missing or removed:
	// SpellLevel, DamageID, bDetrimental, bResetAAOnNotTakeHold, bLanded, bNPCTarget, bHasHitRecourse,
	// AnchorPosY, AnchorPosX, AnchorPosZ, bIgnoreRange, bResetAAOnNotTakeHoldSuccess, Unknown0x54

	bool IsCasting() const
	{
		return SpellID != -1;
	}
};

inline namespace deprecated {
	using LAUNCHSPELLDATA DEPRECATE("Use LaunchSpellData instead of LAUNCHSPELLDATA") = LaunchSpellData;
	using PLAUNCHSPELLDATA DEPRECATE("Use LaunchSpellData* instead PLAUNCHSPELLDATA") = LaunchSpellData*;
}

//============================================================================
// PhysicsBase & PlayerPhysics
//============================================================================

class [[offsetcomments]] PhysicsBase // 1f00
{
public:
	// just add a virtual to create a vtable
	virtual float ClampZAccel(float zAccel) { return zAccel; }
};

class [[offsetcomments]] PlayerPhysics : public PhysicsBase
{
public:
/*0x08*/ GravityBehavior Levitate;
/*0x0c*/ int             UpDownIndex;
/*0x10*/ int             LeftRightIndex;
/*0x14*/ int             UpDownSpeed;
/*0x18*/ int             LeftRightSpeed;
/*0x1c*/ float           LeftRightDist;
/*0x20*/ float           UpDownDist;
/*0x28*/ PlayerClient*   pSpawn;
/*0x30*/ bool            bApplyGravity;
/*0x34*/
};

class PlayerPhysicsClient : public PlayerPhysics
{
public:
};

struct [[offsetcomments]] PZCPhysicsInfo
{
// @start: PZCPhysicsInfo Members
/*0x00*/ float DeltaY;
/*0x04*/ float DeltaZ;
/*0x08*/ float DeltaX;
/*0x0c*/ float X;
/*0x10*/ int Acceleration : 10;
/*0x14*/ float Z;
/*0x18*/ int DeltaHeading : 10;
/*0x18*/ int Heading : 12;
/*0x1c*/ float Y;
/*0x20*/ int ZHeading : 12;
/*0x24*/
// @end: PZCPhysicsInfo Members
};

struct HASHENTRY
{
	PlayerClient* spawn;
	DWORD         key;                             // same as SpawnID for spawns
	HASHENTRY*    next;
};
using PHASHENTRY = HASHENTRY*;

struct HASHTABLE
{
    HASHENTRY** table;
    int size;
};
using PHASHTABLE = HASHTABLE*;

class [[offsetcomments]] PlayerManagerBase
{
public:
	virtual ~PlayerManagerBase() {}
	EQLIB_OBJECT PlayerClient* DestroyPlayer(PlayerClient*);

/*0x08*/ DWORD         random;                   // rand() % 20000
/*0x10*/ PlayerClient* FirstSpawn;
/*0x18*/ PlayerClient* LastSpawn;
/*0x20*/ DWORD         unknown10;
/*0x28*/ HASHTABLE*    SPHash;
/*0x30*/
};

class PlayerManagerClient : public PlayerManagerBase
{
public:
	//PlayerClient* GetPlayerFromPartialName(const char* szName, PlayerBase* = nullptr);
	//PlayerClient* GetPlayerFromName(const char* szName);

	EQLIB_OBJECT PlayerClient* GetSpawnByID(int);
	EQLIB_OBJECT PlayerClient* GetSpawnByName(const char*);
	EQLIB_OBJECT PlayerClient* GetPlayerFromPartialName(const char*, PlayerBase*);
	EQLIB_OBJECT PlayerClient* CreatePlayer(CUnSerializeBuffer*, unsigned char, int, int, const char*, bool, const char*, const char*);
};

inline namespace deprecated {
	using EQPlayerManager DEPRECATE("Use PlayerManagerClient instead of EQPlayerManager") = PlayerManagerClient;
	using SPAWNMANAGER DEPRECATE("Use PlayerManagerClient instead SPAWNMANAGER") = PlayerManagerClient;
	using PSPAWNMANAGER DEPRECATE("Use PlayerManagerClient* instead PSPAWNMANAGER") = PlayerManagerClient*;
}

//============================================================================
// PlayerBase
//============================================================================

class [[offsetcomments]] PlayerBase : public TListNode<PlayerClient>, public CActorApplicationData
{
public:
/*0x020*/ float             JumpStrength;
/*0x024*/ float             SwimStrength;
/*0x028*/ float             SpeedMultiplier;
/*0x02c*/ float             AreaFriction;
/*0x030*/ float             AccelerationFriction;
/*0x034*/ EActorType        CollidingType;                // when we collide with something this gets set.
/*0x038*/ float             FloorHeight;
/*0x03c*/ bool              bSinksInWater;
/*0x040*/ unsigned int      PlayerTimeStamp;              // doesn't update when on a Vehicle (mounts/boats etc)
/*0x044*/ unsigned int      LastTimeIdle;
/*0x048*/ char              Lastname[0x20];
/*0x068*/ float             AreaHPRegenMod;               // from guild hall pools etc.
/*0x06c*/ float             AreaEndRegenMod;
/*0x070*/ float             AreaManaRegenMod;
/*0x074*/ float             Y;
/*0x078*/ float             X;
/*0x07c*/ float             Z;
/*0x080*/ float             SpeedY;
/*0x084*/ float             SpeedX;
/*0x088*/ float             SpeedZ;
/*0x08c*/ float             SpeedRun;
/*0x090*/ float             Heading;
/*0x094*/ float             Angle;
/*0x098*/ float             AccelAngle;
/*0x09c*/ float             SpeedHeading;
/*0x0a0*/ float             CameraAngle;
/*0x0a4*/ unsigned int      UnderWater;                   // LastHeadEnvironmentType
/*0x0a8*/ unsigned int      LastBodyEnvironmentType;
/*0x0ac*/ unsigned int      LastFeetEnvironmentType;
/*0x0b0*/ uint8_t           HeadWet;                      // these really are environment related, like lava as well for example
/*0x0b1*/ uint8_t           FeetWet;
/*0x0b2*/ uint8_t           BodyWet;
/*0x0b3*/ uint8_t           LastBodyWet;
/*0x0b4*/ char              Name[EQ_MAX_NAME];            // ie priest_of_discord00
/*0x0f4*/ char              DisplayedName[EQ_MAX_NAME];   // ie Priest of Discord
/*0x134*/ uint8_t           PossiblyStuck;                // never seen this be 1 so maybe it was used a a point but not now...
/*0x135*/ uint8_t           Type;
/*0x138*/ CharacterPropertyHash Properties;
/*0x150*/ float             AvatarHeight;                 // height of avatar from groundwhen standing
/*0x154*/ float             Height;
/*0x158*/ float             Width;
/*0x15c*/ float             Length;
/*0x160*/ int               Unknown0x0148;
/*0x164*/ int               Unknown0x014C;
/*0x168*/ unsigned int      SpawnID;
/*0x16c*/ unsigned int      PlayerState;                  // 0=Idle 1=Open 2=WeaponSheathed 4=Aggressive 8=ForcedAggressive 0x10=InstrumentEquipped 0x20=Stunned 0x40=PrimaryWeaponEquipped 0x80=SecondaryWeaponEquipped
/*0x170*/ PlayerClient*     Vehicle;                      // NULL until you collide with a vehicle (boat,airship etc)
/*0x178*/ PlayerClient*     Mount;                        // NULL if no mount present
/*0x180*/ PlayerClient*     Rider;                        // the mount's rider
/*0x188*/ unsigned int      Unknown0x0164;
/*0x18c*/ bool              Targetable;                   // true if mob is targetable
/*0x18d*/ bool              bTargetCyclable;
/*0x18e*/ bool              bClickThrough;
/*0x18f*/ bool              bBeingFlung;
/*0x190*/ unsigned int      FlingActiveTimer;
/*0x194*/ unsigned int      FlingTimerStart;
/*0x198*/ bool              bFlingSomething;
/*0x19c*/ float             FlingY;
/*0x1a0*/ float             FlingX;
/*0x1a4*/ float             FlingZ;
/*0x1a8*/ bool              bFlingSnapToDest;
/*0x1ac*/ int               SplineID;
/*0x1b0*/ int               SplineRiderID;
/*0x1b8*/ uint64_t          LockID;
/*0x1c0*/ uint32_t          EncounterLockState;
/*0x1c4*/

	EQLIB_OBJECT unsigned int GetId() const { return SpawnID; }

	unsigned int** get_BodyType() { return *(unsigned int***)&Properties; }
	__declspec(property(get = get_BodyType)) unsigned int** BodyType;

	// These are methods that originated from EQPlayer. They might not
	// all still exist.
	EQLIB_OBJECT bool IsAMount();
	EQLIB_OBJECT bool MyFeetAreOnGround();
	EQLIB_OBJECT bool HasProperty(int, int = 0, int = 0);
	EQLIB_OBJECT bool IsTargetable();
	EQLIB_OBJECT bool CanSee(const PlayerBase&);
	EQLIB_OBJECT bool CanSee(const CVector3& pos);
	EQLIB_OBJECT CLineSegment GetVisibilityLineSegment(const PlayerBase& other, unsigned int index = 0);

private:
	virtual void Dummy() {} // force a vtable
};

//============================================================================
// PlayerZoneClient
//============================================================================

class [[offsetcomments]] PlayerZoneClient : public PlayerBase
{
public:
/*0x01c8*/ unsigned int                 LastIntimidateUse; // 1c8

// @start: PlayerZoneClient Members
/*0x01cc*/ unsigned int             LastMealTime;
/*0x01d0*/ char                     DragNames[2][0x40];
/*0x0250*/ unsigned int             LoginSerial;
/*0x0254*/ bool                     bStationary;
/*0x0258*/ float                    ViewHeight;
/*0x025c*/ bool                     bAnimationOnPop;
/*0x025d*/ bool                     bAttackRelated;
/*0x0260*/ float                    CameraOffset;
/*0x0264*/ bool                     Linkdead;
/*0x0268*/ unsigned int             CombatSkillTicks[CONCURRENT_SKILLS];
/*0x0270*/ int                      Unknown1;
/*0x0274*/ uint8_t                  StandState;
/*0x0275*/ bool                     bSummoned;
/*0x0276*/ bool                     bTempPet;
/*0x0278*/ unsigned int             LastRangedUsedTime;
/*0x027c*/ int                      SecondaryTintIndex;
/*0x0280*/ float                    AnimationSpeedRelated;
/*0x0284*/ unsigned int             Meditating;
/*0x0288*/ float                    RunSpeed;
/*0x028c*/ int                      ManaCurrent;
/*0x0290*/ CharacterZoneClient*     pCharacter;
/*0x0298*/ float                    MerchantGreed;
/*0x029c*/ uint8_t                  Original;
/*0x029d*/ bool                     PvPFlag;
/*0x02a0*/ unsigned int             CorpseDragCount;
/*0x02a4*/ unsigned int             LastPrimaryUseTime;
/*0x02a8*/ CPhysicsInfo             LastCollision;
/*0x02d8*/ uint8_t                  LastAttack;
/*0x02d9*/ char                     GM;
/*0x02da*/ EqItemGuid               realEstateItemGuid;
/*0x02ec*/ int                      Anon;
/*0x02f0*/ int                      Birthdate;
/*0x02f8*/ void*                    pRaceGenderInfo;
/*0x0300*/ char                     Handle[0x20];
/*0x0320*/ unsigned int             CombatSkillUsed[CONCURRENT_SKILLS];
/*0x0328*/ int                      PetID;
/*0x032c*/ float                    BearingToTarget;
/*0x0330*/ SPAWNINFO*               pViewPlayer;
/*0x0338*/ uint8_t                  TitleVisible;
/*0x033c*/ unsigned int             LastTimeStoodStill;
/*0x0340*/ int                      AltAttack;
/*0x0344*/ int                      SomeData[2];
/*0x034c*/ unsigned int             MinuteTimer;
/*0x0350*/ int                      Buyer;
/*0x0354*/ int                      PrimaryTintIndex;
/*0x0358*/ bool                     LFG;
/*0x035c*/ int                      Unknown3;
/*0x0360*/ uint8_t                  FD;
/*0x0364*/ unsigned int             LastResendAddPlayerPacket;
/*0x0368*/ int                      NpcTintIndex;
/*0x036c*/ bool                     bBetaBuffed;
/*0x036d*/ char                     LoginRelated[0x20];
/*0x038d*/ uint8_t                  HoldingAnimation;
/*0x038e*/ char                     DraggingPlayer[0x40];
/*0x03d0*/ int                      EnduranceCurrent;
/*0x03d4*/ unsigned int             NextIntimidateTime;
/*0x03d8*/ bool                     bOfflineMode;
/*0x03d9*/ uint8_t                  Light;
/*0x03dc*/ int                      AFK;
/*0x03e0*/ float                    GetMeleeRangeVar1;
/*0x03e8*/ int64_t                  HPMax;
/*0x03f0*/ bool                     bShowHelm;
/*0x03f8*/ int64_t                  HPCurrent;
/*0x0400*/ unsigned int             LastRefresh;
/*0x0404*/ unsigned int             StunTimer;
/*0x0408*/ float                    MissileRangeToTarget;
/*0x040c*/ bool                     bBuffTimersOnHold;
/*0x040d*/ uint8_t                  IsPassenger;
/*0x040e*/ uint8_t                  CharClass;
/*0x0410*/ int                      DoSpecialMelee;
/*0x0414*/ int                      Trader;
/*0x0418*/ bool                     bSwitchMoved;
/*0x041c*/ unsigned int             EnduranceMax;
/*0x0420*/ uint8_t                  GMRank;
/*0x0421*/ char                     Suffix[0x80];
/*0x04a4*/ float                    MyWalkSpeed;
/*0x04a8*/ uint8_t                  InPvPArea;
/*0x04ac*/ unsigned int             RespawnTimer;
/*0x04b0*/ int                      RealEstateItemId;
/*0x04b4*/ int                      IsAttacking;
/*0x04b8*/ uint8_t                  Blind;
/*0x04b9*/ uint8_t                  FindBits;
/*0x04bc*/ int                      HideMode;
/*0x04c0*/ unsigned int             SpellGemETA[15];
/*0x04fc*/ unsigned int             MasterID;
/*0x0500*/ int64_t                  GuildID;
/*0x0508*/ unsigned int**           ppUDP;
/*0x0510*/ int                      Unknown4;
/*0x0514*/ unsigned int             SitStartTime;
/*0x0518*/ unsigned int             ACounter;
/*0x051c*/ uint8_t                  Level;
/*0x0520*/ int                      WarCry;
/*0x0524*/ int                      ManaMax;
/*0x0528*/ unsigned int             LastTick;
/*0x052c*/ unsigned int             Zone;
/*0x0530*/ int                      Deity;
/*0x0534*/ int                      CurrIOState;
/*0x0538*/ bool                     Sneak;
/*0x053c*/ float                    FallingStartZ;
/*0x0540*/ uint8_t                  FishingEvent;
/*0x0544*/ int                      berserker;
/*0x0548*/ unsigned int             TimeStamp;
/*0x054c*/ LaunchSpellData          CastingData;
/*0x0590*/ int                      RealEstateID;
/*0x0594*/ unsigned int             LastSecondaryUseTime;
/*0x0598*/ char                     Title[0x80];
/*0x0618*/ unsigned int             NextSwim;
/*0x061c*/ unsigned int             FishingETA;
/*0x0620*/ uint8_t                  IntimidateCount;
/*0x0628*/ void*                    pTouchingSwitch;
/*0x0630*/ unsigned int             SpellCooldownETA;
/*0x0634*/ unsigned int             LastTrapDamageTime;
/*0x0638*/ bool                     bAlwaysShowAura;
/*0x0639*/ bool                     Mercenary;

// @end: PlayerZoneClient Members

/*0x063c*/ TCircularBuffer<SDoCollisionMovementStats, MAX_MOVEMENT_STATS> MovementStats;
/*0x0f58*/ PlayerClient*      WhoFollowing;                       // NULL if autofollow off
/*0x0f60*/ unsigned int       GroupAssistNPC[MAX_GROUP_ASSISTS];
/*0x0f64*/ unsigned int       RaidAssistNPC[MAX_RAID_ASSISTS];
/*0x0f70*/ unsigned int       GroupMarkNPC[MAX_GROUP_MARK_TARGETS];
/*0x0f7c*/ unsigned int       RaidMarkNPC[MAX_RAID_MARK_TARGETS];
/*0x0f88*/ unsigned int       TargetOfTarget;
/*0x0f8c*/ PZCPhysicsInfo     PZCLastPhysics;
/*0x0fb0*/ unsigned int       ParticleCastStartTime;
/*0x0fb4*/ unsigned int       ParticleCastDuration;
/*0x0fb8*/ int                ParticleVisualSpellNum;
/*0x0fc0*/ ActorClient        mActorClient;
/*0x11d0*/ PlayerAnimationBase* pAnimation;
/*0x11d8*/ float              MeleeRadius;                        // used by GetMeleeRange
/*0x11dc*/ unsigned int       CollisionCounter;
/*0x11e0*/ float              CachedFloorLocationY;
/*0x11e4*/ float              CachedFloorLocationX;
/*0x11e8*/ float              CachedFloorLocationZ;
/*0x11ec*/ float              CachedFloorHeight;
/*0x11f0*/ float              CachedCeilingLocationY;
/*0x11f4*/ float              CachedCeilingLocationX;
/*0x11f8*/ float              CachedCeilingLocationZ;
/*0x11fc*/ float              CachedCeilingHeight;
/*0x1200*/ CCapsule           StaticCollision;
/*0x1220*/ ArrayClass<PhysicsEffect> mPhysicsEffects;
/*0x1238*/ ArrayClass<bool>   PhysicsEffectsUpdated;
/*0x1250*/

	EQLIB_OBJECT bool LegalPlayerRace();

	EQLIB_OBJECT bool LegalPlayerRace(int race)
	{
		if (race == -1)
			return LegalPlayerRace();

		return race <= EQR_GNOME
			|| race == EQR_IKSAR
			|| race == EQR_VAHSHIR
			|| race == EQR_FROGLOCK
			|| race == EQR_DRAKKIN;
	}

	CActorInterface* GetActor() { return mActorClient.pActor; }

	// Some methods that were from EQPlayer in the past
	EQLIB_OBJECT bool AllowedToAttack(PlayerZoneClient*, int);
	EQLIB_OBJECT bool CanChangeForm(int Race, unsigned char Sex, float Height);
	EQLIB_OBJECT bool CanIFitHere(const CVector3& pos, bool ignoreHeight = false);
	EQLIB_OBJECT bool CanIHit(const PlayerZoneClient*, int);
	EQLIB_OBJECT bool IsFlyer();
	EQLIB_OBJECT bool IsInvisible(PlayerZoneClient*, bool = false);
	EQLIB_OBJECT bool IWasHit(EQMissileHitinfo*, LaunchSpellData*, int = 0);
	EQLIB_OBJECT bool UpdatePlayerActor();
	EQLIB_OBJECT float GetDefaultHeight(int race, unsigned char);
	EQLIB_OBJECT float GetPlayerFloorHeight(float, float, float, unsigned char);
	EQLIB_OBJECT int AimAtTarget(PlayerZoneClient*, EQMissile*);
	EQLIB_OBJECT int CheckForJump();
	EQLIB_OBJECT int GetArmorType(int, char*);
	EQLIB_OBJECT int GetGuild() const;
	EQLIB_OBJECT bool IsValidTeleport(float X, float Y, float Z, float Heading, float Distance);
	EQLIB_OBJECT int Levitating();
	EQLIB_OBJECT int MountableRace();
	EQLIB_OBJECT int MovePlayer();
	EQLIB_OBJECT int NotOnSameDeity(const PlayerZoneClient*, const EQ_Spell*);
	EQLIB_OBJECT static void ComputeSpecialHeights(int, float*, float*, float*, float*, bool);
	EQLIB_OBJECT unsigned char DoTeleport(char*, int);
	EQLIB_OBJECT unsigned char DoTeleportB(int, float, float, float, float, char*, int);
	EQLIB_OBJECT unsigned char GetNearestActorTag(char*, EActorType);
	EQLIB_OBJECT unsigned char HandleAmmo();
	EQLIB_OBJECT static unsigned char SkillUsed(unsigned char);
	EQLIB_OBJECT unsigned int ModifyAttackSpeed(unsigned int, int);
	EQLIB_OBJECT unsigned long GetArmorTint(int);
	EQLIB_OBJECT void BodyEnvironmentChange(unsigned char);
	EQLIB_OBJECT void ChangeHeight(float);
	EQLIB_OBJECT void ChangePosition(unsigned char);
	EQLIB_OBJECT void CheckForUnderFloor();
	EQLIB_OBJECT void CleanUpVehicle();
	EQLIB_OBJECT void DeleteMyMissiles();
	EQLIB_OBJECT void DoFloorCheck();
	EQLIB_OBJECT void FacePlayer(PlayerZoneClient*);
	EQLIB_OBJECT void FeetEnvironmentChange(unsigned char);
	EQLIB_OBJECT void GetActorTag(char*);
	EQLIB_OBJECT void GetConscious();
	EQLIB_OBJECT void HeadEnvironmentChange(unsigned char);
	EQLIB_OBJECT void IDied(EQPlayerDeath*);
	EQLIB_OBJECT void IHaveFallen(float);
	EQLIB_OBJECT void InitSneakMod();
	EQLIB_OBJECT void KnockedOut();
	EQLIB_OBJECT void MakeRiderMountUp();
	EQLIB_OBJECT void PositionOnFloor();
	EQLIB_OBJECT void PushAlongHeading(float);
	EQLIB_OBJECT void PutPlayerOnFloor();
	EQLIB_OBJECT void ResetVariables();
	EQLIB_OBJECT void SetAnimVariation();
	EQLIB_OBJECT void SetArmorTint(int, unsigned long);
	EQLIB_OBJECT void SetHeights();
	EQLIB_OBJECT void SetRace(int);
	EQLIB_OBJECT unsigned char GetLevel() const;

	EQLIB_OBJECT bool DoAttack(BYTE slot, BYTE skill, PlayerZoneClient* Target, bool bSomething = false, bool bAuto = false, bool bDontknow = false);

	EQLIB_OBJECT static PlayerZoneClient* GetClosestPlayerFromPartialName(const char* name, PlayerZoneClient* player, int maxPlayerType = 1);

	// AARank is no longer with us
	int get_AARank() const { return 0; }
	__declspec(property(get = get_AARank)) int AARank;
};

enum SeeInvisLevels {
	SeeInvisLevels_All = 0,
	SeeInvisLevels_Unead = 1,
	SeeInvisLevels_Animal = 2,

	SeeInvisLevels_Count,
};

//============================================================================
// PlayerClient
//============================================================================

// @sizeof(PlayerClient) == 0x1f60 :: 2023-04-24 (test) @ 0x1402ff13e
constexpr size_t PlayerClient_size = 0x1f60;

class [[offsetcomments]] PlayerClient : public PlayerZoneClient
{
public:
/*0x1250*/ int               Animation;                    // Current Animation Playing.
/*0x1254*/ int               NextAnim;
/*0x1258*/ int               CurrLowerBodyAnim;
/*0x125c*/ int               NextLowerBodyAnim;
/*0x1260*/ int               CurrLowerAnimVariation;
/*0x1264*/ int               CurrAnimVariation;
/*0x1268*/ int               CurrAnimRndVariation;

	// Beginning of sound ids
/*0x126c*/ int               Loop3d_SoundID;
/*0x1270*/ int               Step_SoundID;
/*0x1274*/ int               CurLoop_SoundID;
/*0x1278*/ int               Idle3d1_SoundID;
/*0x127c*/ int               Idle3d2_SoundID;
/*0x1280*/ int               Jump_SoundID;
/*0x1284*/ int               Hit1_SoundID;
/*0x1288*/ int               Hit2_SoundID;
/*0x128c*/ int               Hit3_SoundID;
/*0x1290*/ int               Hit4_SoundID;
/*0x1294*/ int               Gasp1_SoundID;
/*0x1298*/ int               Gasp2_SoundID;
/*0x129c*/ int               Drown_SoundID;
/*0x12a0*/ int               Death_SoundID;
/*0x12a4*/ int               Attk1_SoundID;
/*0x12a8*/ int               Attk2_SoundID;
/*0x12ac*/ int               Attk3_SoundID;
/*0x12b0*/ int               Walk_SoundID;
/*0x12b4*/ int               Run_SoundID;
/*0x12b8*/ int               Crouch_SoundID;
/*0x12bc*/ int               Swim_SoundID;
/*0x12c0*/ int               TreadWater_SoundID;
/*0x12c4*/ int               Climb_SoundID;
/*0x12c8*/ int               Sit_SoundID;
/*0x12cc*/ int               Kick_SoundID;
/*0x12d0*/ int               Bash_SoundID;
/*0x12d4*/ int               FireBow_SoundID;
/*0x12d8*/ int               MonkAttack1_SoundID;
/*0x12dc*/ int               MonkAttack2_SoundID;
/*0x12e0*/ int               MonkSpecial_SoundID;
/*0x12e4*/ int               PrimaryBlunt_SoundID;
/*0x12e8*/ int               PrimarySlash_SoundID;
/*0x12ec*/ int               PrimaryStab_SoundID;
/*0x12f0*/ int               Punch_SoundID;
/*0x12f4*/ int               Roundhouse_SoundID;
/*0x12f8*/ int               SecondaryBlunt_SoundID;
/*0x12fc*/ int               SecondarySlash_SoundID;
/*0x1300*/ int               SecondaryStab_SoundID;
/*0x1304*/ int               SwimAttack_SoundID;
/*0x1308*/ int               TwoHandedBlunt_SoundID;
/*0x130c*/ int               TwoHandedSlash_SoundID;
/*0x1310*/ int               TwoHandedStab_SoundID;
/*0x1314*/ int               SecondaryPunch_SoundID;
/*0x1318*/ int               JumpAcross_SoundID;
/*0x131c*/ int               WalkBackwards_SoundID;
/*0x1320*/ int               CrouchWalk_SoundID;
/*0x1324*/ unsigned int      LastHurtSound;
/*0x1328*/ unsigned int      LastWalkTime;                 // used for animations
/*0x132c*/ int               ShipRelated;                  // ID? look into.
/*0x1330*/ int               RightHolding;                 // Nothing=0 Other/Weapon=1 shield=2
/*0x1334*/ int               LeftHolding;                  // old Holding
/*0x1338*/ unsigned int      DeathAnimationFinishTime;
/*0x133c*/ bool              bRemoveCorpseAfterDeathAnim;  // used by /hidecorpse
/*0x1340*/ unsigned int      LastBubblesTime;
/*0x1344*/ unsigned int      LastBubblesTime1;
/*0x1348*/ unsigned int      LastColdBreathTime;
/*0x134c*/ unsigned int      LastParticleUpdateTime;
/*0x1350*/ unsigned int      MercID;                       // if the spawn is player and has a merc up this is it's spawn ID
/*0x1354*/ unsigned int      ContractorID;                 // if the spawn is a merc this is its contractor's spawn ID
/*0x1358*/ float             CeilingHeightAtCurrLocation;
/*0x1360*/ EqMobileEmitter*  MobileEmitter;
/*0x1368*/ bool              bInstantHPGaugeChange;
/*0x136c*/ unsigned int      LastUpdateReceivedTime;
/*0x1370*/ float             MaxSpeakDistance;
/*0x1374*/ float             WalkSpeed;                    // how much we will slow down while sneaking
/*0x1378*/ bool              bHideCorpse;
/*0x1379*/ char              AssistName[0x40];
/*0x13b9*/ bool              InvitedToGroup;
/*0x13bc*/ int               GroupMemberTargeted;          // -1 if no target, else 1 through 5
/*0x13c0*/ bool              bRemovalPending;
/*0x13c8*/ void*             pCorpse;
/*0x13d0*/ float             EmitterScalingRadius;
/*0x13d4*/ int               DefaultEmitterID;
/*0x13d8*/ bool              bDisplayNameSprite;
/*0x13d9*/ bool              bIdleAnimationOff;
/*0x13da*/ bool              bIsInteractiveObject;
/*0x13db*/ uint8_t           InteractiveObjectModelName[0x80];
/*0x145b*/ uint8_t           InteractiveObjectOtherName[0x80];
/*0x14db*/ uint8_t           InteractiveObjectName[0x40];
/*0x151c*/ CPhysicsInfo      PhysicsBeforeLastPort;
/*0x154c*/ unsigned int      notsure;                      // could be part of CPhysicsInfo?
/*0x1550*/ SFellowship       Fellowship;
/*0x1db0*/ float             CampfireY;
/*0x1db4*/ float             CampfireX;
/*0x1db8*/ float             CampfireZ;
/*0x1dbc*/ int               CampfireZoneID;               // zone ID where campfire is
/*0x1dc0*/ int               CampfireTimestamp;            // CampfireTimestamp-FastTime()=time left on campfire
/*0x1dc4*/ int               CampfireTimestamp2;
/*0x1dc8*/ int               FellowShipID;
/*0x1dcc*/ int               FellowShipID2;
/*0x1dd0*/ int               CampType;
/*0x1dd4*/ bool              Campfire;
/*0x1dd8*/ TSafeArrayStatic<int, 3> SeeInvis;
/*0x1de4*/ EQUIPMENT         Equipment;
/*0x1e98*/ bool              bIsPlacingItem;
/*0x1e99*/ bool              bGMCreatedNPC;
/*0x1e9c*/ int               ObjectAnimationID;
/*0x1ea0*/ bool              bInteractiveObjectCollidable;
/*0x1ea4*/ int               InteractiveObjectType;
/*0x1ea8*/ int               SoundIDs[0xa];
/*0x1ed0*/ ArrayClass2<unsigned int> BardTwistSpells;
/*0x1ef0*/ int               CurrentBardTwistIndex;
/*0x1ef4*/ int               CurrentBardTwistIndex2;
/*0x1ef8*/ PlayerPhysicsClient mPlayerPhysicsClient;
/*0x1f30*/ int               SpawnStatus[6];
/*0x1f48*/ int               BannerIndex0;                 // guild banners
/*0x1f4c*/ int               BannerIndex1;
/*0x1f50*/ ARGBCOLOR         BannerTint0;
/*0x1f54*/ ARGBCOLOR         BannerTint1;
/*0x1f58*/ int               MountAnimationRelated;
/*0x1f5c*/ bool              bGuildShowAnim;               // or sprite? need to check
/*0x1f5d*/ bool              bWaitingForPort;
/*0x1f60*/

	void Initialize(PlayerClient*, unsigned char, unsigned int, unsigned char, char*);
	~PlayerClient();

private:
	struct constructor_key_t {};

public:
	// not allowed to create this class, only use existing instances
	PlayerClient() = delete;
	PlayerClient(constructor_key_t) {} // define a custom constructor to prevent initialization
	PlayerClient(const PlayerClient&) = delete;
	PlayerClient& operator=(const PlayerClient&) = delete;

	inline int GetClass() const { return mActorClient.Class; }
	EQLIB_OBJECT const char* GetClassString() const;
	EQLIB_OBJECT const char* GetClassThreeLetterCode() const;
	inline int GetRaceWithOverride() const { return mActorClient.RaceOverride ? mActorClient.RaceOverride : mActorClient.Race; }
	inline int GetRace() const { return mActorClient.Race; }
	EQLIB_OBJECT const char* GetRaceString() const;
	inline int GetGender() const { return mActorClient.Gender; }
	inline BYTE GetCharacterType() const { return Type; }
	inline bool GetShowHelm() const { return mActorClient.bShowHelm; }
	inline unsigned int GetId() const { return SpawnID; }
	inline CharacterZoneClient* GetCharacter() const { return (CharacterZoneClient*)GetPcClient(); }
	inline EQZoneIndex GetZoneID() const { return Zone; }
	inline int GetCurrentMana() const { return ManaCurrent; }
	inline int GetMaxMana() const { return ManaMax; }
	inline int GetCurrentEndurance() const { return EnduranceCurrent; }
	inline int GetMaxEndurance() const { return EnduranceMax; }
	inline unsigned int GetSpellCooldownETA() const { return SpellCooldownETA; }
	inline bool IsGm() const { return GM; }

	EQLIB_OBJECT PcClient* GetPcClient() const;

	// These come from the old EQPlayer class. Not all of these methods still exist.
	EQLIB_OBJECT bool IsInvited();
	EQLIB_OBJECT bool IsRoleplaying();
	EQLIB_OBJECT bool IsUntexturedHorse();
	EQLIB_OBJECT bool const HasInvalidRiderTexture() const;
	EQLIB_OBJECT int CanBeBald();
	EQLIB_OBJECT int SetPlayerPitchType();
	EQLIB_OBJECT int SwapBody(int, int);
	EQLIB_OBJECT int SwapFace(int, int);
	EQLIB_OBJECT int SwapHead(int, int, unsigned long, int);
	EQLIB_OBJECT int SwapMaterial(int, int, int, int, unsigned char);
	EQLIB_OBJECT int SwapNPCMaterials();
	EQLIB_OBJECT static void UpdateAllPlayersVisibility();
	EQLIB_OBJECT CLightInterface* CreateUserLight(CLightDefinitionInterface*, int);
	EQLIB_OBJECT unsigned char GetBaseFaceNbr(int, unsigned char*);
	EQLIB_OBJECT unsigned char HasAttachedBeard();
	EQLIB_OBJECT unsigned char HasAttachedHair();
	EQLIB_OBJECT unsigned char UpdateItemSlot(unsigned char, char*, int);
	EQLIB_OBJECT unsigned int CalcAnimLength(int);
	EQLIB_OBJECT void ChangeLight();
	EQLIB_OBJECT void CleanUpMyEffects();
	EQLIB_OBJECT void CleanUpTarget();
	EQLIB_OBJECT void Dismount();
	EQLIB_OBJECT void DisplayWeaponsAndArmor();
	EQLIB_OBJECT void do_change_form(chngForm*, bool = false, bool = false);
	EQLIB_OBJECT void DoCamAi();
	EQLIB_OBJECT void DoClassRandomAnimation();
	EQLIB_OBJECT void DoItemSlot(int);
	EQLIB_OBJECT void DoSwimJump(unsigned char);
	EQLIB_OBJECT void FollowPlayerAI();
	EQLIB_OBJECT void ForceInvisible(bool);
	EQLIB_OBJECT void HandleMaterialEx(int, unsigned int, unsigned int, unsigned long, int);
	EQLIB_OBJECT void HandoverControlToZoneserver();
	EQLIB_OBJECT void MountEQPlayer(PlayerZoneClient*);
	EQLIB_OBJECT void PlaySound(int);
	EQLIB_OBJECT void SetAccel(float, int);
	EQLIB_OBJECT void SetAfk(int);
	EQLIB_OBJECT void SetCurrentLoopSound(int);
	EQLIB_OBJECT void SetDefaultFacialFeaturesByFace(int, unsigned char, unsigned char);
	EQLIB_OBJECT void SetInvited(bool);
	EQLIB_OBJECT void SetSounds();
	EQLIB_OBJECT void SetToRandomRace();
	EQLIB_OBJECT void TouchingSwitch();
	EQLIB_OBJECT void TriggerSpellEffect(EQMissileHitinfo*);
	EQLIB_OBJECT void TurnOffAutoFollow();
	EQLIB_OBJECT void UpdateAppearance();
	EQLIB_OBJECT void UpdateBonePointers();
	EQLIB_OBJECT void UpdateNameSprite();
	EQLIB_OBJECT void UpdatePlayerVisibility();
	EQLIB_OBJECT void ChangeBoneStringSprite(int bone, const char* spriteText);
	EQLIB_OBJECT int SetNameSpriteState(bool);
	EQLIB_OBJECT bool SetNameSpriteTint();

	EQLIB_OBJECT static PlayerClient* IsPlayerActor(CActorInterface*);

	int GetSeeInvisLevel(int invisType) const { return SeeInvis[invisType]; }

	DEPRECATE("PlayerClient: Use GetNext() instead of pNext")
	__declspec(property(get = GetNext)) PlayerClient* pNext;
	DEPRECATE("PlayerClient: Use GetPrevious() instead of pPrev")
	__declspec(property(get = GetPrevious)) PlayerClient* pPrev;
};

inline namespace deprecated {
	// For compatibility with all the old stuff
	using EQPlayer DEPRECATE("Use PlayerClient instead of EQPlayer") = PlayerClient;
}

SIZE_CHECK(PlayerClient, PlayerClient_size);

} // namespace eqlib
