﻿// Name: Polygon, Version: 0.3.13.76

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

// Function BP_PG_Character_Red.BP_PG_Character_Red_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PG_Character_Red_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_Red.BP_PG_Character_Red_C.ReceiveBeginPlay");

	ABP_PG_Character_Red_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_Red.BP_PG_Character_Red_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PG_Character_Red_C::OnSetTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_Red.BP_PG_Character_Red_C.OnSetTeam_Event");

	ABP_PG_Character_Red_C_OnSetTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_Red.BP_PG_Character_Red_C.OnSetPlayerState_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PG_Character_Red_C::OnSetPlayerState_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_Red.BP_PG_Character_Red_C.OnSetPlayerState_Event");

	ABP_PG_Character_Red_C_OnSetPlayerState_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_Red.BP_PG_Character_Red_C.ExecuteUbergraph_BP_PG_Character_Red
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PG_Character_Red_C::ExecuteUbergraph_BP_PG_Character_Red(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_Red.BP_PG_Character_Red_C.ExecuteUbergraph_BP_PG_Character_Red");

	ABP_PG_Character_Red_C_ExecuteUbergraph_BP_PG_Character_Red_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
