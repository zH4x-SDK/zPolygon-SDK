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

// Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.SetSight
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Item_Rifle_AK12_C::SetSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.SetSight");

	ABP_Item_Rifle_AK12_C_SetSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Item_Rifle_AK12_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.ReceiveBeginPlay");

	ABP_Item_Rifle_AK12_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.OnSetWeaponModules_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Item_Rifle_AK12_C::OnSetWeaponModules_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.OnSetWeaponModules_Event");

	ABP_Item_Rifle_AK12_C_OnSetWeaponModules_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.ExecuteUbergraph_BP_Item_Rifle_AK12
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Item_Rifle_AK12_C::ExecuteUbergraph_BP_Item_Rifle_AK12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Rifle_AK12.BP_Item_Rifle_AK12_C.ExecuteUbergraph_BP_Item_Rifle_AK12");

	ABP_Item_Rifle_AK12_C_ExecuteUbergraph_BP_Item_Rifle_AK12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
