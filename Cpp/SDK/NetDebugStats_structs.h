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

// Enum NetDebugStats.ENetDebugStatConnectionState
enum class NetDebugStats_ENetDebugStatConnectionState : uint8_t
{
	ENetDebugStatConnectionState__Invalid = 0,
	ENetDebugStatConnectionState__Closed = 1,
	ENetDebugStatConnectionState__Pending = 2,
	ENetDebugStatConnectionState__Open = 3,
	ENetDebugStatConnectionState__ENetDebugStatConnectionState_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetDebugStats.NetDebugStatPackets
// 0x0008
struct FNetDebugStatPackets
{
	int                                                InPackets;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPackets;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct NetDebugStats.NetDebugStatBytes
// 0x0008
struct FNetDebugStatBytes
{
	float                                              InBytes;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutBytes;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
