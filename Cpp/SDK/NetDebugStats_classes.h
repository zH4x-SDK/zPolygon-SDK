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
// Classes
//---------------------------------------------------------------------------

// Class NetDebugStats.NetDebugStatsFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNetDebugStatsFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetDebugStats.NetDebugStatsFunctions");
		return ptr;
	}



	bool STATIC_GetTotalPackets(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets);
	bool STATIC_GetTotalBytes(class UObject* WorldContextObject, struct FNetDebugStatBytes* OutBytes, bool bConvertToKB);
	bool STATIC_GetTotalAcks(class UObject* WorldContextObject, int* OutTotalAcks);
	bool STATIC_GetPacketsPerSecond(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets);
	bool STATIC_GetPackets(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets);
	bool STATIC_GetPacketLostPercentage(class UObject* WorldContextObject, float* InPercentage, float* OutPercentage, bool bGetAverage);
	bool STATIC_GetPacketLost(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets);
	bool STATIC_GetMaxPacket(class UObject* WorldContextObject, int* OutMaxPacket);
	NetDebugStats_ENetDebugStatConnectionState STATIC_GetConnectionState(class UObject* WorldContextObject);
	bool STATIC_GetBytesPerSecond(class UObject* WorldContextObject, struct FNetDebugStatBytes* OutBytes, bool bConvertToKB);
	bool STATIC_GetBytes(class UObject* WorldContextObject, struct FNetDebugStatBytes* OutBytes, bool bConvertToKB);
	bool STATIC_GetAverageLag(class UObject* WorldContextObject, float* OutAverageLag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
