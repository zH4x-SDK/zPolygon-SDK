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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UWorks.UWorksSteamID
// 0x0008
struct FUWorksSteamID
{
	unsigned char                                      UnknownData_AEGQ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorks.UWorksGameID
// 0x0008
struct FUWorksGameID
{
	unsigned char                                      UnknownData_OJPP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorks.UWorksPublishedFileID
// 0x0008
struct FUWorksPublishedFileID
{
	unsigned char                                      UnknownData_448S[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorks.UWorksSteamItemDef
// 0x0004
struct FUWorksSteamItemDef
{
	int                                                Value;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorks.UWorksSteamItemInstanceID
// 0x0008
struct FUWorksSteamItemInstanceID
{
	unsigned char                                      UnknownData_VMLL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
