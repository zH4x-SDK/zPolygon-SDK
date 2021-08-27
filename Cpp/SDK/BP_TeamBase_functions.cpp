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

// Function BP_TeamBase.BP_TeamBase_C.SetVisibleFromDistance
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TeamBase_C::SetVisibleFromDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamBase.BP_TeamBase_C.SetVisibleFromDistance");

	ABP_TeamBase_C_SetVisibleFromDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TeamBase.BP_TeamBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TeamBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamBase.BP_TeamBase_C.ReceiveBeginPlay");

	ABP_TeamBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TeamBase.BP_TeamBase_C.ExecuteUbergraph_BP_TeamBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TeamBase_C::ExecuteUbergraph_BP_TeamBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamBase.BP_TeamBase_C.ExecuteUbergraph_BP_TeamBase");

	ABP_TeamBase_C_ExecuteUbergraph_BP_TeamBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
