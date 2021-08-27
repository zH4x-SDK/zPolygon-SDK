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

// Enum SoundCueTemplates.ESoundContainerType
enum class SoundCueTemplates_ESoundContainerType : uint8_t
{
	ESoundContainerType__Concatenate = 0,
	ESoundContainerType__Randomize = 1,
	ESoundContainerType__Mix       = 2,
	ESoundContainerType__ESoundContainerType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SoundCueTemplates.SoundCueCrossfadeInfo
// 0x0020
struct FSoundCueCrossfadeInfo
{
	struct FDistanceDatum                              DistanceInfo;                                              // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HG5M[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundWave*                                  Sound;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SoundCueTemplates.SoundCueTemplateQualitySettings
// 0x0028
struct FSoundCueTemplateQualitySettings
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)
	int                                                MaxConcatenatedVariations;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRandomizedVariations;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMixVariations;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZXJ[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
