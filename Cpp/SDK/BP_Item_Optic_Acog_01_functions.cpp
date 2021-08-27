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

// Function BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C.SetAimingMesh
// (BlueprintCallable, BlueprintEvent)
void ABP_Item_Optic_Acog_01_C::SetAimingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C.SetAimingMesh");

	ABP_Item_Optic_Acog_01_C_SetAimingMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C.ToggleAiming
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsAiming                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Item_Optic_Acog_01_C::ToggleAiming(bool IsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C.ToggleAiming");

	ABP_Item_Optic_Acog_01_C_ToggleAiming_Params params;
	params.IsAiming = IsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C.ExecuteUbergraph_BP_Item_Optic_Acog_01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Item_Optic_Acog_01_C::ExecuteUbergraph_BP_Item_Optic_Acog_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C.ExecuteUbergraph_BP_Item_Optic_Acog_01");

	ABP_Item_Optic_Acog_01_C_ExecuteUbergraph_BP_Item_Optic_Acog_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
