// Name: Polygon, Version: 0.3.13.76

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function NetDebugStats.NetDebugStatsFunctions.GetTotalPackets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatPackets    OutPackets                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetTotalPackets(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetTotalPackets");

	UNetDebugStatsFunctions_GetTotalPackets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPackets != nullptr)
		*OutPackets = params.OutPackets;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetTotalBytes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatBytes      OutBytes                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bConvertToKB                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetTotalBytes(class UObject* WorldContextObject, struct FNetDebugStatBytes* OutBytes, bool bConvertToKB)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetTotalBytes");

	UNetDebugStatsFunctions_GetTotalBytes_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bConvertToKB = bConvertToKB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBytes != nullptr)
		*OutBytes = params.OutBytes;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetTotalAcks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutTotalAcks                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetTotalAcks(class UObject* WorldContextObject, int* OutTotalAcks)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetTotalAcks");

	UNetDebugStatsFunctions_GetTotalAcks_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTotalAcks != nullptr)
		*OutTotalAcks = params.OutTotalAcks;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetPacketsPerSecond
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatPackets    OutPackets                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetPacketsPerSecond(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetPacketsPerSecond");

	UNetDebugStatsFunctions_GetPacketsPerSecond_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPackets != nullptr)
		*OutPackets = params.OutPackets;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetPackets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatPackets    OutPackets                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetPackets(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetPackets");

	UNetDebugStatsFunctions_GetPackets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPackets != nullptr)
		*OutPackets = params.OutPackets;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetPacketLostPercentage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InPercentage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutPercentage                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetAverage                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetPacketLostPercentage(class UObject* WorldContextObject, float* InPercentage, float* OutPercentage, bool bGetAverage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetPacketLostPercentage");

	UNetDebugStatsFunctions_GetPacketLostPercentage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bGetAverage = bGetAverage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InPercentage != nullptr)
		*InPercentage = params.InPercentage;
	if (OutPercentage != nullptr)
		*OutPercentage = params.OutPercentage;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetPacketLost
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatPackets    OutPackets                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetPacketLost(class UObject* WorldContextObject, struct FNetDebugStatPackets* OutPackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetPacketLost");

	UNetDebugStatsFunctions_GetPacketLost_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPackets != nullptr)
		*OutPackets = params.OutPackets;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetMaxPacket
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutMaxPacket                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetMaxPacket(class UObject* WorldContextObject, int* OutMaxPacket)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetMaxPacket");

	UNetDebugStatsFunctions_GetMaxPacket_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaxPacket != nullptr)
		*OutMaxPacket = params.OutMaxPacket;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetConnectionState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// NetDebugStats_ENetDebugStatConnectionState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
NetDebugStats_ENetDebugStatConnectionState UNetDebugStatsFunctions::STATIC_GetConnectionState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetConnectionState");

	UNetDebugStatsFunctions_GetConnectionState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetBytesPerSecond
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatBytes      OutBytes                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bConvertToKB                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetBytesPerSecond(class UObject* WorldContextObject, struct FNetDebugStatBytes* OutBytes, bool bConvertToKB)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetBytesPerSecond");

	UNetDebugStatsFunctions_GetBytesPerSecond_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bConvertToKB = bConvertToKB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBytes != nullptr)
		*OutBytes = params.OutBytes;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetBytes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNetDebugStatBytes      OutBytes                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bConvertToKB                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetBytes(class UObject* WorldContextObject, struct FNetDebugStatBytes* OutBytes, bool bConvertToKB)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetBytes");

	UNetDebugStatsFunctions_GetBytes_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bConvertToKB = bConvertToKB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBytes != nullptr)
		*OutBytes = params.OutBytes;


	return params.ReturnValue;
}


// Function NetDebugStats.NetDebugStatsFunctions.GetAverageLag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutAverageLag                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetDebugStatsFunctions::STATIC_GetAverageLag(class UObject* WorldContextObject, float* OutAverageLag)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugStats.NetDebugStatsFunctions.GetAverageLag");

	UNetDebugStatsFunctions_GetAverageLag_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAverageLag != nullptr)
		*OutAverageLag = params.OutAverageLag;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
