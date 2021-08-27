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

// Enum VictoryBPLibrary.ESpeedUnit
enum class VictoryBPLibrary_ESpeedUnit : uint8_t
{
	CentimeterPerSecond            = 0,
	FootPerSecond                  = 1,
	MeterPerSecond                 = 2,
	MeterPerMinute                 = 3,
	KilometerPerSecond             = 4,
	KilometerPerMinute             = 5,
	KilometerPerHour               = 6,
	MilePerHour                    = 7,
	Knot                           = 8,
	Mach                           = 9,
	SpeedOfLight                   = 10,
	YardPerSecond                  = 11,
	ESpeedUnit_MAX                 = 12,

};

// Enum VictoryBPLibrary.EJoyGraphicsFullScreen
enum class VictoryBPLibrary_EJoyGraphicsFullScreen : uint8_t
{
	EJoyGraphicsFullScreen__FullScreen = 0,
	EJoyGraphicsFullScreen__WindowedFullScreen = 1,
	EJoyGraphicsFullScreen__WindowedFullScreenPerformance = 2,
	EJoyGraphicsFullScreen__EJoyGraphicsFullScreen_Max = 3,

};

// Enum VictoryBPLibrary.EVictoryHMDDevice
enum class VictoryBPLibrary_EVictoryHMDDevice : uint8_t
{
	EVictoryHMDDevice__None        = 0,
	EVictoryHMDDevice__OculusRift  = 1,
	EVictoryHMDDevice__Morpheus    = 2,
	EVictoryHMDDevice__ES2GenericStereoMesh = 3,
	EVictoryHMDDevice__SteamVR     = 4,
	EVictoryHMDDevice__GearVR      = 5,
	EVictoryHMDDevice__EVictoryHMDDevice_MAX = 6,

};

// Enum VictoryBPLibrary.EJoyImageFormats
enum class VictoryBPLibrary_EJoyImageFormats : uint8_t
{
	EJoyImageFormats__JPG          = 0,
	EJoyImageFormats__PNG          = 1,
	EJoyImageFormats__BMP          = 2,
	EJoyImageFormats__ICO          = 3,
	EJoyImageFormats__EXR          = 4,
	EJoyImageFormats__ICNS         = 5,
	EJoyImageFormats__EJoyImageFormats_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VictoryBPLibrary.LevelStreamInstanceInfo
// 0x0030
struct FLevelStreamInstanceInfo
{
	struct FName                                       PackageName;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PackageNameToLoad;                                         // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeLoaded : 1;                                       // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisible : 1;                                      // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBlockOnLoad : 1;                                    // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2TV[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LODIndex;                                                  // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VictoryBPLibrary.VictoryInputAxis
// 0x0040
struct FVictoryInputAxis
{
	struct FString                                     AxisName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeyAsString;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0020(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3K3[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct VictoryBPLibrary.VictoryInput
// 0x0040
struct FVictoryInput
{
	struct FString                                     ActionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0010(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeyAsString;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShift : 1;                                                // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCtrl : 1;                                                 // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlt : 1;                                                  // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCmd : 1;                                                  // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWDD[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct VictoryBPLibrary.VictorySubtitleCue
// 0x0020
struct FVictorySubtitleCue
{
	struct FText                                       SubtitleText;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NAWZ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
