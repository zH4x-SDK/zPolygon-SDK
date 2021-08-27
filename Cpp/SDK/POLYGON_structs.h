#pragma once

// Name: Polygon, Version: 0.3.13.76


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum POLYGON.EAccrualTypeGameScore
enum class POLYGON_EAccrualTypeGameScore : uint8_t
{
	EAccrualTypeGameScore__NONE    = 0,
	EAccrualTypeGameScore__KILLED  = 1,
	EAccrualTypeGameScore__KILLED_IN_HEAD = 2,
	EAccrualTypeGameScore__KILL_ASSIST = 3,
	EAccrualTypeGameScore__CAPTURED = 4,
	EAccrualTypeGameScore__EAccrualTypeGameScore_MAX = 5,

};

// Enum POLYGON.ECameraViewMode
enum class POLYGON_ECameraViewMode : uint8_t
{
	ECameraViewMode__FIRST_PERSON  = 0,
	ECameraViewMode__THIRD_PERSON  = 1,
	ECameraViewMode__ECameraViewMode_MAX = 2,

};

// Enum POLYGON.ECharacterPoseState
enum class POLYGON_ECharacterPoseState : uint8_t
{
	ECharacterPoseState__NONE      = 0,
	ECharacterPoseState__STAND     = 1,
	ECharacterPoseState__CROUCN    = 2,
	ECharacterPoseState__LIE       = 3,
	ECharacterPoseState__AIR       = 4,
	ECharacterPoseState__ECharacterPoseState_MAX = 5,

};

// Enum POLYGON.EControlPoint
enum class POLYGON_EControlPoint : uint8_t
{
	EControlPoint__NONE_           = 0,
	EControlPoint__ALPHA_          = 1,
	EControlPoint__BRAVO_          = 2,
	EControlPoint__CHARLIE_        = 3,
	EControlPoint__DELTA_          = 4,
	EControlPoint__ECHO_           = 5,
	EControlPoint__FOXTROT_        = 6,
	EControlPoint__EControlPoint_MAX = 7,

};

// Enum POLYGON.EGameMode
enum class POLYGON_EGameMode : uint8_t
{
	EGameMode__NONE                = 0,
	EGameMode__CONQUEST            = 1,
	EGameMode__CONQUEST_V2         = 2,
	EGameMode__EGameMode_MAX       = 3,

};

// Enum POLYGON.EGameState
enum class POLYGON_EGameState : uint8_t
{
	EGameState__NONE               = 0,
	EGameState__WAITING_PLAYERS    = 1,
	EGameState__COUNTDOWN          = 2,
	EGameState__GAME               = 3,
	EGameState__ENDED              = 4,
	EGameState__EGameState_MAX     = 5,

};

// Enum POLYGON.EStaminaState
enum class POLYGON_EStaminaState : uint8_t
{
	EStaminaState__IDLE            = 0,
	EStaminaState__INCREASE        = 1,
	EStaminaState__DECREASE        = 2,
	EStaminaState__EStaminaState_MAX = 3,

};

// Enum POLYGON.EItemType
enum class POLYGON_EItemType : uint8_t
{
	EItemType__NONE                = 0,
	EItemType__WEAPON              = 1,
	EItemType__GRENADE             = 2,
	EItemType__MODULE              = 3,
	EItemType__EItemType_MAX       = 4,

};

// Enum POLYGON.EMessageType
enum class POLYGON_EMessageType : uint8_t
{
	EMessageType__ALL              = 0,
	EMessageType__TEAM             = 1,
	EMessageType__SQUAD            = 2,
	EMessageType__PRIVATE          = 3,
	EMessageType__EMessageType_MAX = 4,

};

// Enum POLYGON.EPlayerAction
enum class POLYGON_EPlayerAction : uint8_t
{
	EPlayerAction__NONE            = 0,
	EPlayerAction__RELOADING       = 1,
	EPlayerAction__CHANGING        = 2,
	EPlayerAction__THROW_GRENADE   = 3,
	EPlayerAction__EPlayerAction_MAX = 4,

};

// Enum POLYGON.ETeam
enum class POLYGON_ETeam : uint8_t
{
	ETeam__NONE                    = 0,
	ETeam__NOBODY                  = 1,
	ETeam__RED                     = 2,
	ETeam__BLUE                    = 3,
	ETeam__ETeam_MAX               = 4,

};

// Enum POLYGON.EWeaponModuleType
enum class POLYGON_EWeaponModuleType : uint8_t
{
	EWeaponModuleType__NONE        = 0,
	EWeaponModuleType__OPTIC       = 1,
	EWeaponModuleType__BARREL      = 2,
	EWeaponModuleType__UNDERBARREL = 3,
	EWeaponModuleType__ACCESSORY   = 4,
	EWeaponModuleType__SKIN        = 5,
	EWeaponModuleType__EWeaponModuleType_MAX = 6,

};

// Enum POLYGON.EWeaponType
enum class POLYGON_EWeaponType : uint8_t
{
	EWeaponType__NONE              = 0,
	EWeaponType__RIFLE             = 1,
	EWeaponType__SNIPER            = 2,
	EWeaponType__PISTOL            = 3,
	EWeaponType__EWeaponType_MAX   = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct POLYGON.ChatMessage
// 0x0020
struct FChatMessage
{
	class APG_PlayerState_Game*                        Sender;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	POLYGON_EMessageType                               MessageType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WC8[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.PlayerId
// 0x0020
struct FPlayerId
{
	struct FString                                     PlayerMasterId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerTitleId;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.PlayerAssist
// 0x0018
struct FPlayerAssist
{
	class APG_PlayerState_Game*                        PlayerAssist;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3AN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerResetAssist;                                          // 0x0010(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.WeaponHitUnreliable
// 0x0020
struct FWeaponHitUnreliable
{
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.WeaponHitOnCharacter
// 0x0040
struct FWeaponHitOnCharacter
{
	struct FVector_NetQuantize                         TraceStart;                                                // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x0018(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                              // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReticleSpread;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.ItemReference
// 0x0008 (0x0010 - 0x0008)
struct FItemReference : public FTableRowBase
{
	class UClass*                                      Item;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.LevelInfo
// 0x0018 (0x0020 - 0x0008)
struct FLevelInfo : public FTableRowBase
{
	struct FName                                       LevelID;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgressRequired;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  LevelIcon;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct POLYGON.MapInfo
// 0x0060 (0x0068 - 0x0008)
struct FMapInfo : public FTableRowBase
{
	struct FName                                       MapRowName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       MapDisplayName;                                            // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxScoreForWin;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MapPreview;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MinimapImage;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Dimension;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CameraPosition;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraRotate;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDevelopment;                                             // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SVL4[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
