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

// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UBP_PG_GameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_GameInstance.BP_PG_GameInstance_C.ReceiveInit");

	UBP_PG_GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ExecuteUbergraph_BP_PG_GameInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PG_GameInstance_C::ExecuteUbergraph_BP_PG_GameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_GameInstance.BP_PG_GameInstance_C.ExecuteUbergraph_BP_PG_GameInstance");

	UBP_PG_GameInstance_C_ExecuteUbergraph_BP_PG_GameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
