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

// Function BP_RedLine.BP_RedLine_C.SetPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PointIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RedLine_C::SetPosition(int PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RedLine.BP_RedLine_C.SetPosition");

	ABP_RedLine_C_SetPosition_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RedLine.BP_RedLine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RedLine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RedLine.BP_RedLine_C.UserConstructionScript");

	ABP_RedLine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RedLine.BP_RedLine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_RedLine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RedLine.BP_RedLine_C.ReceiveBeginPlay");

	ABP_RedLine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RedLine.BP_RedLine_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_RedLine_C::OnSetTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RedLine.BP_RedLine_C.OnSetTeam_Event");

	ABP_RedLine_C_OnSetTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RedLine.BP_RedLine_C.ExecuteUbergraph_BP_RedLine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RedLine_C::ExecuteUbergraph_BP_RedLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RedLine.BP_RedLine_C.ExecuteUbergraph_BP_RedLine");

	ABP_RedLine_C_ExecuteUbergraph_BP_RedLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
