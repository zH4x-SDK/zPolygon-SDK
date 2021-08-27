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

// Function BP_PG_AnimBluerpint_Menu.BP_PG_AnimBluerpint_Menu_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBP_PG_AnimBluerpint_Menu_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_AnimBluerpint_Menu.BP_PG_AnimBluerpint_Menu_C.AnimGraph");

	UBP_PG_AnimBluerpint_Menu_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function BP_PG_AnimBluerpint_Menu.BP_PG_AnimBluerpint_Menu_C.ExecuteUbergraph_BP_PG_AnimBluerpint_Menu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PG_AnimBluerpint_Menu_C::ExecuteUbergraph_BP_PG_AnimBluerpint_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_AnimBluerpint_Menu.BP_PG_AnimBluerpint_Menu_C.ExecuteUbergraph_BP_PG_AnimBluerpint_Menu");

	UBP_PG_AnimBluerpint_Menu_C_ExecuteUbergraph_BP_PG_AnimBluerpint_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
