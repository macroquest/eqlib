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

struct [[offsetcomments]] SFellowshipMember
{
/*0x00*/ uint32_t     UniqueEntityID;
/*0x04*/ char         Name[EQ_MAX_NAME];
/*0x44*/ int          ZoneID;
/*0x48*/ int          Level;
/*0x4c*/ int          Class;
/*0x50*/ int          LastOn;
/*0x54*/
};

inline namespace deprecated {
	using FELLOWSHIPMEMBER DEPRECATE("Use SFellowshipMember instead of FELLOSWHIPMEMBER") = SFellowshipMember;
	using PFELLOWSHIPMEMBER DEPRECATE("Use SFellowshipMember* instead of PFELLOWSHIPMEMBER") = SFellowshipMember*;
}

constexpr int MAX_FELLOWSHIP_MEMBERS = 12;
constexpr int MAX_FELLOWSHIP_MOTD = 1024;

// @sizeof(SFellowship) == 0x9e4 :: 2013-05-10 (emu) @ 0x5909EF
constexpr size_t SFellowship_size = 0x9e4;

struct [[offsetcomments]] SFellowship
{
/*0x000*/ unsigned int      Version;
/*0x004*/ int               FellowshipID;
/*0x008*/ char              FellowshipName[0x40];
/*0x048*/ char              MotD[MAX_FELLOWSHIP_MOTD];
/*0x448*/ int               Members;
/*0x44c*/ SFellowshipMember FellowshipMember[MAX_FELLOWSHIP_MEMBERS];
/*0x83c*/ unsigned int      Sync;
/*0x840*/ char              PlayerHandles[MAX_FELLOWSHIP_MEMBERS][32];
/*0x9c0*/ bool              bExpSharingEnabled[MAX_FELLOWSHIP_MEMBERS];
/*0x9cc*/ bool              bSharedExpCapped[MAX_FELLOWSHIP_MEMBERS];
/*0x9d8*/ bool              bIsOfflineMode[MAX_FELLOWSHIP_MEMBERS];
/*0x9e4*/

	inline const char* get_Leader() { return Members > 0 ? FellowshipMember[0].Name : ""; }
	__declspec(property(get = get_Leader)) const char* Leader;

	inline EqGuid get_FellowshipGUID() { EqGuid guid; guid.UniqueEntityID = FellowshipID; return guid; }
	__declspec(property(get = get_FellowshipGUID)) EqGuid FellowshipGUID;
};

SIZE_CHECK(SFellowship, SFellowship_size);

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
/*0x00*/ uint32_t       SpellETA;                // Calculated TimeStamp when current spell being cast will land. 0 while not casting.
/*0x04*/ int            SpellID;                 // -1 = not casting a spell
/*0x08*/ uint8_t        SpellSlot;               // 0xFF if not casting, otherwise it's the spell gem number (0 - 8)
/*0x09*/ uint8_t        SpellLevel;
/*0x0c*/ ItemGlobalIndex ItemLocation;
/*0x18*/ ItemSpellTypes ItemCastType;
/*0x1c*/ int            ItemID;
/*0x20*/ float          CastingY;
/*0x24*/ float          CastingX;
/*0x28*/ int            DamageID;
/*0x2c*/ uint32_t       TargetID;
/*0x30*/ bool           bDetrimental;
/*0x31*/ bool           bResetMeleeTimers;
/*0x32*/ bool           bResetAAOnNotTakeHold;
/*0x33*/ bool           bFreeTarget;
/*0x34*/ float          TargetPosY;
/*0x38*/ float          TargetPosX;
/*0x3c*/ float          TargetPosZ;
/*0x40*/ bool           bTwinCast;
/*0x41*/ bool           bLanded;
/*0x42*/ bool           bNPCTarget;
/*0x43*/ bool           bHasHitRecourse;
/*0x44*/ float          AnchorPosY;
/*0x48*/ float          AnchorPosX;
/*0x4c*/ float          AnchorPosZ;
/*0x50*/

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

class [[offsetcomments]] PhysicsBase
{
public:
/*0x00*/ void* vtable2;
/*0x04*/ bool  bApplyGravity;
/*0x08*/
};

class [[offsetcomments]] PlayerPhysics : public PhysicsBase
{
public:
/*0x08*/ PlayerClient*    pSpawn;
/*0x0c*/ GravityBehavior  Levitate;
// bobbing control
/*0x10*/ int              UpDownIndex;
/*0x14*/ int              LeftRightIndex;
/*0x18*/ int              UpDownSpeed;
/*0x1c*/ int              LeftRightSpeed;
/*0x20*/ float            LeftRightDist;
/*0x24*/ float            UpDownDist;
/*0x28*/
};

class PlayerPhysicsClient : public PlayerPhysics
{
public:
/*0x1Fb8*/
};

struct [[offsetcomments]] PZCPhysicsInfo
{
// @start: PZCPhysicsInfo Members
/*0x00*/ float DeltaX;
/*0x04*/ int Heading : 12;
/*0x04*/ int DeltaHeading : 10;
/*0x04*/ int Acceleration : 10;
/*0x08*/ float X;
/*0x0c*/ float DeltaZ;
/*0x10*/ float Z;
/*0x14*/ float Y;
/*0x18*/ int Animation : 10;
/*0x1c*/ float DeltaY;
/*0x20*/ int ZHeading : 12;
/*0x24*/
// @end: PZCPhysicsInfo Members
};

class [[offsetcomments]] PlayerManagerBase
{
public:
	~PlayerManagerBase() {}
	EQLIB_OBJECT PlayerClient* DestroyPlayer(PlayerClient*);

/*0x00*/ uint32_t                  NextID;
/*0x04*/ TList<PlayerClient>       PlayerList;
/*0x0c*/ HashTable<PlayerClient*>* PlayerNameHashTable;
/*0x10*/ HashTable<PlayerClient*>* PlayerIdHashTable;
/*0x14*/

	PlayerClient* get_FirstSpawn() const { return (PlayerClient*)PlayerList.GetFirstNode(); }
	__declspec(property(get = get_FirstSpawn)) PlayerClient* FirstSpawn;

	PlayerClient* get_LastSpawn() const { return (PlayerClient*)PlayerList.GetLastNode(); }
	__declspec(property(get = get_LastSpawn)) PlayerClient* LastSpawn;
};

class PlayerManagerClient : public PlayerManagerBase
{
public:
	virtual ~PlayerManagerClient() {}

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
/*0x010*/ float             JumpStrength;
/*0x014*/ float             SwimStrength;
/*0x018*/ float             SpeedMultiplier;
/*0x01c*/ float             AreaFriction;
/*0x020*/ float             AccelerationFriction;
/*0x024*/ EActorType        CollidingType;                // when we collide with something this gets set.
/*0x028*/ float             FloorHeight;
/*0x02c*/ bool              bSinksInWater;
/*0x030*/ unsigned int      PlayerTimeStamp;              // doesn't update when on a Vehicle (mounts/boats etc)
/*0x034*/ unsigned int      LastTimeIdle;
/*0x038*/ char              Lastname[0x20];
/*0x058*/ float             AreaHPRegenMod;               // from guild hall pools etc.
/*0x05c*/ float             AreaEndRegenMod;
/*0x060*/ float             AreaManaRegenMod;
/*0x064*/ float             Y;
/*0x068*/ float             X;
/*0x06c*/ float             Z;
/*0x070*/ float             SpeedY;
/*0x074*/ float             SpeedX;
/*0x078*/ float             SpeedZ;
/*0x07c*/ float             SpeedRun;
/*0x080*/ float             Heading;
/*0x084*/ float             Angle;
/*0x088*/ float             AccelAngle;
/*0x08c*/ float             SpeedHeading;
/*0x090*/ float             CameraAngle;
/*0x094*/ unsigned int      UnderWater;                   // LastHeadEnvironmentType
/*0x098*/ unsigned int      LastBodyEnvironmentType;
/*0x09c*/ unsigned int      LastFeetEnvironmentType;
/*0x0a0*/ uint8_t           HeadWet;                      // these really are environment related, like lava as well for example
/*0x0a1*/ uint8_t           FeetWet;
/*0x0a2*/ uint8_t           BodyWet;
/*0x0a3*/ uint8_t           LastBodyWet;
/*0x0a4*/ char              Name[EQ_MAX_NAME];            // ie priest_of_discord00
/*0x0e4*/ char              DisplayedName[EQ_MAX_NAME];   // ie Priest of Discord
/*0x124*/ uint8_t           PossiblyStuck;                // never seen this be 1 so maybe it was used a a point but not now...
/*0x125*/ uint8_t           Type;
/*0x128*/ CharacterPropertyHash Properties;
/*0x138*/ float             AvatarHeight;                 // height of avatar from groundwhen standing
/*0x13c*/ float             Height;
/*0x140*/ float             Width;
/*0x144*/ float             Length;
/*0x148*/ unsigned int      SpawnID;
/*0x14c*/ unsigned int      PlayerState;                  // 0=Idle 1=Open 2=WeaponSheathed 4=Aggressive 8=ForcedAggressive 0x10=InstrumentEquipped 0x20=Stunned 0x40=PrimaryWeaponEquipped 0x80=SecondaryWeaponEquipped
/*0x150*/ PlayerClient*     Vehicle;                      // NULL until you collide with a vehicle (boat,airship etc)
/*0x154*/ PlayerClient*     Mount;                        // NULL if no mount present
/*0x158*/ PlayerClient*     Rider;                        // the mount's rider
/*0x15c*/ unsigned int      Unknown0x0164;
/*0x160*/ bool              Targetable;                   // true if mob is targetable
/*0x161*/ bool              bTargetCyclable;
/*0x162*/ bool              bClickThrough;
/*0x163*/ bool              bBeingFlung;
/*0x164*/ unsigned int      FlingActiveTimer;
/*0x168*/ unsigned int      FlingTimerStart;
/*0x16c*/ bool              bFlingSomething;
/*0x170*/ float             FlingY;
/*0x174*/ float             FlingX;
/*0x178*/ float             FlingZ;
/*0x17c*/ bool              bFlingSnapToDest;
/*0x180*/ int               SplineID;
/*0x184*/ int               SplineRiderID;
/*0x188*/

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
/*0x0188*/ unsigned int             LastIntimidateUse; // 188

// @start: PlayerZoneClient Members
/*0x018c*/ uint8_t                  IsPassenger;                  // if u are on a boat or airship or whatever
/*0x0190*/ float                    ViewHeight;
/*0x0194*/ bool                     bOfflineMode;
/*0x0198*/ int                      RealEstateID;
/*0x019c*/ uint8_t                  TitleVisible;
/*0x019d*/ bool                     bStationary;
/*0x019e*/ uint8_t                  CharClass;                    // Im pretty sure this isnt working
/*0x01a0*/ int                      EnduranceCurrent;
/*0x01a4*/ unsigned int             MinuteTimer;
/*0x01a8*/ char                     LoginRelated[0x20];
/*0x01c8*/ char                     DraggingPlayer[0x40];
/*0x0208*/ bool                     Mercenary;
/*0x020c*/ float                    FallingStartZ;
/*0x0210*/ unsigned int             Zone;
/*0x0214*/ uint8_t                  Light;
/*0x0218*/ unsigned int             LastSecondaryUseTime;
/*0x021c*/ int                      IsAttacking;                  // need to investigate
/*0x0220*/ float                    BearingToTarget;
/*0x0224*/ uint8_t                  GMRank;
/*0x0228*/ float                    AnimationSpeedRelated;
/*0x022c*/ uint8_t                  Type2;
/*0x022d*/ bool                     bBuffTimersOnHold;            // no you can't control this client side so unless you want to get banned leave it alone
/*0x0230*/ unsigned int             LastRangedUsedTime;
/*0x0234*/ void*                    pRaceGenderInfo;              // todo this is not a void* so... map the CRaceGenderInfo class
/*0x0238*/ uint8_t                  LastAttack;
/*0x023c*/ unsigned int             LastPrimaryUseTime;
/*0x0240*/ int                      CurrIOState;
/*0x0244*/ unsigned int             LastRefresh;                  // last 18 sec tick
/*0x0248*/ int                      GuildStatus;                  // emu
/*0x024c*/ unsigned int             LastTick;
/*0x0250*/ uint8_t                  Level;
/*0x0251*/ bool                     bAttackRelated;
/*0x0254*/ unsigned int             LoginSerial;
/*0x0258*/ int                      SomethingElse;
/*0x025c*/ char                     GM;
/*0x0260*/ unsigned int             FishingETA;
/*0x0264*/ bool                     Sneak;
/*0x0265*/ bool                     bAnimationOnPop;
/*0x0268*/ unsigned int             LastResendAddPlayerPacket;
/*0x026c*/ SPAWNINFO*               pViewPlayer;
/*0x0270*/ unsigned int             ACounter;                     // not sure what this one is for (m_uHibernatingCount)
/*0x0274*/ float                    CameraOffset;
/*0x0278*/ unsigned int             Meditating;
/*0x027c*/ uint8_t                  FindBits;
/*0x0280*/ int                      SecondaryTintIndex;
/*0x0284*/ CPhysicsInfo             LastCollision;
/*0x02b4*/ int                      PetID;
/*0x02b8*/ int                      Anon;                         // found in EQPlayer__SetNameSpriteTint_x
/*0x02bc*/ unsigned int             RespawnTimer;                 // its actually TimeOfDeath...TimeStamp of when RespawnWnd will close - 0 when you're alive
/*0x02c0*/ int                      LastCastNum;
/*0x02c4*/ int                      AARank;                       // this really is the title id
/*0x02c8*/ unsigned int             LastCastTime;
/*0x02cc*/ CharacterZoneClient*     pCharacter;
/*0x02d0*/ float                    MerchantGreed;
/*0x02d4*/ void*                    pTouchingSwitch;              // need to get that in here : struct _EQSWITCH
/*0x02d8*/ unsigned int             TimeStamp;                    // updates all the time including when on a mount
/*0x02dc*/ int32_t                  HPMax; // emu 64 -> 32
/*0x02e0*/ bool                     bSummoned;                    // by a PC or by anyone? need to investigate
/*0x02e1*/ uint8_t                  InPvPArea;                    // are we in a PvP area?
/*0x02e4*/ int32_t                  HPCurrent; // emu 64 -> 32
/*0x02e8*/ unsigned int             SpellGemETA[13];              // InnateETA is now the last member in this array
/*0x031c*/ float                    GetMeleeRangeVar1;            // used by GetMeleeRange (fScaleFactor)
/*0x0320*/ int                      Trader;                       // found in CEverQuest__RightClickedOnPlayer_x
/*0x0324*/ int                      SomeData[0x2];
/*0x032c*/ bool                     bSwitchMoved;                 // true when a door moves near the spawn
/*0x0330*/ float                    MyWalkSpeed;
/*0x0334*/ uint8_t                  HoldingAnimation;             // todo: create enum for this byte. Holding: Nothing=0 A RightHand Weapon=1 A Shield=2 Dual Wielding Two Weapons=3 A Spear=4 A LeftHand Weapon=5 A Two Handed Weapon=6 A bow=7
/*0x0338*/ int                      HideMode;
/*0x033c*/ int                      Stuff;
/*0x0340*/ int                      AltAttack;
/*0x0344*/ uint32_t                 PotionTimer;
/*0x0348*/ uint8_t                  HmmWhat;
/*0x0349*/ bool                     PvPFlag;
/*0x034c*/ int32_t                  GuildID; // emu - 64->32
/*0x0350*/ float                    RunSpeed;                     // 0.70 on runspeed 5...
/*0x0354*/ int                      ManaMax;
/*0x0358*/ unsigned int             LastMealTime;                 // last time we eat or drank
/*0x035c*/ uint8_t                  StandState;
/*0x0360*/ unsigned int             LastTimeStoodStill;
/*0x0364*/ int                      DoSpecialMelee;
/*0x0368*/ unsigned int             CombatSkillTicks[2];
/*0x0370*/ float                    MissileRangeToTarget;
/*0x0374*/ unsigned int             SitStartTime;
/*0x0378*/ EqItemGuid               realEstateItemGuid;
/*0x038a*/ bool                     bShowHelm;
/*0x038c*/ unsigned int             MasterID;
/*0x0390*/ unsigned int             CombatSkillUsed[2];
/*0x0398*/ char                     Handle[0x20];
/*0x03b8*/ uint8_t                  FD;
/*0x03bc*/ int                      PrimaryTintIndex;
/*0x03c0*/ int                      AFK;
/*0x03c4*/ unsigned int             EnduranceMax;
/*0x03c8*/ unsigned int             NextIntimidateTime;
/*0x03cc*/ unsigned int             SpellCooldownETA;
/*0x03d0*/ bool                     Linkdead;
/*0x03d4*/ int                      Buyer;
/*0x03d8*/ unsigned int             LastTrapDamageTime;
/*0x03dc*/ bool                     bTempPet;
/*0x03dd*/ char                     Title[0x20];
/*0x03fd*/ uint8_t                  FishingEvent;
/*0x03fe*/ char                     Suffix[0x20];
/*0x0420*/ int                      RealEstateItemId;
/*0x0424*/ int                      WarCry;
/*0x0428*/ uint8_t                  Blind;
/*0x0429*/ bool                     bBetaBuffed;
/*0x042c*/ unsigned int             NextSwim;
/*0x0430*/ unsigned int             CorpseDragCount;
/*0x0434*/ uint8_t                  IntimidateCount;
/*0x0438*/ int                      berserker;
/*0x043c*/ unsigned int             StunTimer;
/*0x0440*/ bool                     LFG;
/*0x0444*/ LaunchSpellData          CastingData;                  // size: 0x50
/*0x0494*/ int                      ManaCurrent;
/*0x0498*/ char                     DragNames[0x2][0x40];
/*0x0518*/ int                      Deity;
/*0x051c*/ int                      NpcTintIndex;
/*0x0520*/ unsigned int**           ppUDP;                        // UdpLibrary::UdpConnection
/*0x0524*/ bool                     bAlwaysShowAura;
// @end: PlayerZoneClient Members

/*0x0528*/ TCircularBuffer<SDoCollisionMovementStats, MAX_MOVEMENT_STATS> MovementStats;
/*0x0e40*/ PlayerClient*      WhoFollowing;                       // NULL if autofollow off
/*0x0e44*/ unsigned int       GroupAssistNPC[MAX_GROUP_ASSISTS];
/*0x0e48*/ unsigned int       RaidAssistNPC[MAX_RAID_ASSISTS];
/*0x0e54*/ unsigned int       GroupMarkNPC[MAX_GROUP_MARK_TARGETS];
/*0x0e60*/ unsigned int       RaidMarkNPC[MAX_RAID_MARK_TARGETS];
/*0x0e6c*/ unsigned int       TargetOfTarget;
/*0x0e70*/ PZCPhysicsInfo     PZCLastPhysics;
/*0x0e94*/ unsigned int       ParticleCastStartTime;
/*0x0e98*/ unsigned int       ParticleCastDuration;
/*0x0e9c*/ int                ParticleVisualSpellNum;
/*0x0ea0*/ int                Unknown0xea0; // not sure if this is before or after particle fields or if physics is too small
/*0x0ea4*/ ActorClient        mActorClient;
/*0x1058*/ PlayerAnimationBase* pAnimation;
/*0x105c*/ float              MeleeRadius;                        // used by GetMeleeRange
/*0x1060*/ unsigned int       CollisionCounter;
/*0x1064*/ float              CachedFloorLocationY;
/*0x1068*/ float              CachedFloorLocationX;
/*0x106c*/ float              CachedFloorLocationZ;
/*0x1070*/ float              CachedFloorHeight;
/*0x1074*/ float              CachedCeilingLocationY;
/*0x1078*/ float              CachedCeilingLocationX;
/*0x107c*/ float              CachedCeilingLocationZ;
/*0x1080*/ float              CachedCeilingHeight;
/*0x1084*/ CCapsule           StaticCollision;
/*0x10a0*/ ArrayClass<PhysicsEffect> mPhysicsEffects;
/*0x10b0*/ ArrayClass<bool>   PhysicsEffectsUpdated;
/*0x10c0*/

	inline bool LegalPlayerRace(EQRace race = -1)
	{
		if (race == -1)
			race = mActorClient.Race;

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

	EQLIB_OBJECT bool DoAttack(BYTE slot, BYTE skill, PlayerZoneClient* Target);

	bool DoAttack(BYTE slot, BYTE skill, PlayerZoneClient* Target, bool, bool = false, bool = false)
	{
		return DoAttack(slot, skill, Target);
	}

	EQLIB_OBJECT static PlayerZoneClient* GetClosestPlayerFromPartialName(const char* name, PlayerZoneClient* player, int maxPlayerType = 1);
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

// @sizeof(PlayerClient) == 0x1f08 :: 2013-05-10 (emu) @ 0x599BE8
constexpr size_t PlayerClient_size = 0x1f08;

class [[offsetcomments]] PlayerClient : public PlayerZoneClient
{
public:
/*0x10c0*/ int               Animation;                    // Current Animation Playing.
/*0x10c4*/ int               NextAnim;
/*0x10c8*/ int               CurrLowerBodyAnim;
/*0x10cc*/ int               NextLowerBodyAnim;
/*0x10d0*/ int               CurrLowerAnimVariation;
/*0x10d4*/ int               CurrAnimVariation;
/*0x10d8*/ int               CurrAnimRndVariation;

	// Beginning of sound ids
/*0x10dc*/ int               Loop3d_SoundID;
/*0x10e0*/ int               Step_SoundID;
/*0x10e4*/ int               CurLoop_SoundID;
/*0x10e8*/ int               Idle3d1_SoundID;
/*0x10ec*/ int               Idle3d2_SoundID;
/*0x10f0*/ int               Jump_SoundID;
/*0x10f4*/ int               Hit1_SoundID;
/*0x10f8*/ int               Hit2_SoundID;
/*0x10fc*/ int               Hit3_SoundID;
/*0x1100*/ int               Hit4_SoundID;
/*0x1104*/ int               Gasp1_SoundID;
/*0x1108*/ int               Gasp2_SoundID;
/*0x110c*/ int               Drown_SoundID;
/*0x1110*/ int               Death_SoundID;
/*0x1114*/ int               Attk1_SoundID;
/*0x1118*/ int               Attk2_SoundID;
/*0x111c*/ int               Attk3_SoundID;
/*0x1120*/ int               Walk_SoundID;
/*0x1124*/ int               Run_SoundID;
/*0x1128*/ int               Crouch_SoundID;
/*0x112c*/ int               Swim_SoundID;
/*0x1130*/ int               TreadWater_SoundID;
/*0x1134*/ int               Climb_SoundID;
/*0x1138*/ int               Sit_SoundID;
/*0x113c*/ int               Kick_SoundID;
/*0x1140*/ int               Bash_SoundID;
/*0x1144*/ int               FireBow_SoundID;
/*0x1148*/ int               MonkAttack1_SoundID;
/*0x114c*/ int               MonkAttack2_SoundID;
/*0x1150*/ int               MonkSpecial_SoundID;
/*0x1154*/ int               PrimaryBlunt_SoundID;
/*0x1158*/ int               PrimarySlash_SoundID;
/*0x115c*/ int               PrimaryStab_SoundID;
/*0x1160*/ int               Punch_SoundID;
/*0x1164*/ int               Roundhouse_SoundID;
/*0x1168*/ int               SecondaryBlunt_SoundID;
/*0x116c*/ int               SecondarySlash_SoundID;
/*0x1170*/ int               SecondaryStab_SoundID;
/*0x1174*/ int               SwimAttack_SoundID;
/*0x1178*/ int               TwoHandedBlunt_SoundID;
/*0x117c*/ int               TwoHandedSlash_SoundID;
/*0x1180*/ int               TwoHandedStab_SoundID;
/*0x1184*/ int               SecondaryPunch_SoundID;
/*0x1188*/ int               JumpAcross_SoundID;
/*0x118c*/ int               WalkBackwards_SoundID;
/*0x1190*/ int               CrouchWalk_SoundID;
///*0x1194*/ unsigned int      LastHurtSound;
/*0x1194*/ unsigned int      LastWalkTime;                 // used for animations
/*0x1198*/ int               ShipRelated;
/*0x119c*/ int               RightHolding;
/*0x11a0*/ int               LeftHolding;
///*0x11a8*/ unsigned int      DeathAnimationFinishTime;
///*0x11ac*/ bool              bRemoveCorpseAfterDeathAnim;  // used by /hidecorpse
/*0x11a4*/ unsigned int      LastBubblesTime; // 11a4
/*0x11a8*/ unsigned int      LastColdBreathTime;
/*0x11ac*/ unsigned int      LastColdBreathOverrideTimer;
/*0x11b0*/ unsigned int      LastParticleUpdateTime; // 11b0
///*0x11b0*/ unsigned int      MercID;                       // if the spawn is player and has a merc up this is it's spawn ID
///*0x11b4*/ unsigned int      ContractorID;                 // if the spawn is a merc this is its contractor's spawn ID
/*0x11b4*/ float             CeilingHeightAtCurrLocation;
/*0x11b8*/ EqMobileEmitter*  MobileEmitter;
/*0x11bc*/ bool              bInstantHPGaugeChange;
/*0x11c0*/ unsigned int      LastUpdateReceivedTime;
/*0x11c4*/ float             MaxSpeakDistance;
/*0x11c8*/ float             WalkSpeed;                    // how much we will slow down while sneaking
/*0x11cc*/ uint32_t          bHideCorpse;
/*0x11d0*/ char              AssistName[0x40];
/*0x1210*/ bool              InvitedToGroup;
/*0x1214*/ int               GroupMemberTargeted;          // -1 if no target, else 1 through 5
/*0x1218*/ bool              bRemovalPending;
/*0x121c*/ void*             pCorpse;
/*0x1220*/ float             EmitterScalingRadius;
/*0x1224*/ int               DefaultEmitterID;
/*0x1228*/ bool              bDisplayNameSprite;
/*0x1229*/ bool              bIdleAnimationOff;
/*0x122a*/ bool              bIsInteractiveObject;
/*0x122b*/ uint8_t           InteractiveObjectModelName[0x80];
/*0x12ab*/ uint8_t           InteractiveObjectOtherName[0x80];
/*0x132b*/ uint8_t           InteractiveObjectName[0x40];
/*0x136c*/ CPhysicsInfo      PhysicsBeforeLastPort;
/*0x139c*/ SFellowship       Fellowship; // 139c
/*0x1d80*/ float             CampfireY;
/*0x1d84*/ float             CampfireX;
/*0x1d88*/ float             CampfireZ;
/*0x1d8c*/ int               CampfireZoneID;               // zone ID where campfire is
/*0x1d90*/ int               CampfireTimestamp;            // CampfireTimestamp-FastTime()=time left on campfire
/*0x1d94*/ int               CampfireTimestamp2;
///*0x1d98*/ int               FellowShipID;
///*0x1d9c*/ int               FellowShipID2;
/*0x1d98*/ int               CampType;
/*0x1d9c*/ bool              Campfire;
///*0x1da8*/ TSafeArrayStatic<int, 3> SeeInvis;
/*0x1da0*/ EQUIPMENT         Equipment; // 1da0
/*0x1e54*/ bool              bIsPlacingItem;
/*0x1e55*/ bool              bGMCreatedNPC;
/*0x1e58*/ int               ObjectAnimationID;
/*0x1e5c*/ bool              bInteractiveObjectCollidable;
/*0x1e60*/ int               InteractiveObjectType;
/*0x1e64*/ int               SoundIDs[10];
/*0x1e8c*/ unsigned int      LastHistorySentTime;
/*0x1e90*/ ArrayClass2<unsigned int> BardTwistSpells;
/*0x1eac*/ int               CurrentBardTwistIndex;
///*0x1eb0*/ int               CurrentBardTwistIndex2;
/*0x1eb0*/ PlayerPhysicsClient mPlayerPhysicsClient;
/*0x1ed8*/ int               SpawnStatus[6];
/*0x1ef0*/ int               BannerIndex0;                 // guild banners
/*0x1ef4*/ int               BannerIndex1;
/*0x1ef8*/ ARGBCOLOR         BannerTint0;
/*0x1efc*/ ARGBCOLOR         BannerTint1;
/*0x1f00*/ int               MountAnimationRelated;
/*0x1f04*/ bool              bGuildShowAnim;               // or sprite? need to check
/*0x1f05*/ bool              bWaitingForPort;
/*0x1f08*/

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

	int GetSeeInvisLevel(int invisType) const { return 0; }

	DEPRECATE("PlayerClient: Use GetNext() instead of pNext")
	__declspec(property(get = GetNext)) PlayerClient* pNext;
	DEPRECATE("PlayerClient: Use GetPrevious() instead of pPrev")
	__declspec(property(get = GetPrevious)) PlayerClient* pPrev;

	int get_Zero() const { return 0; }
	__declspec(property(get = get_Zero)) int MercID;
	__declspec(property(get = get_Zero)) int ContractorID;

};

inline namespace deprecated {
	// For compatibility with all the old stuff
	using EQPlayer DEPRECATE("Use PlayerClient instead of EQPlayer") = PlayerClient;
}

SIZE_CHECK(PlayerClient, PlayerClient_size);

} // namespace eqlib
