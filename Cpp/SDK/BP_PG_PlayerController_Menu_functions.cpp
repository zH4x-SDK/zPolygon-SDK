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

// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PG_PlayerController_Menu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ReceiveBeginPlay");

	ABP_PG_PlayerController_Menu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ShowError
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ErrorDetails                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_PG_PlayerController_Menu_C::ShowError(const struct FText& ErrorMessage, const struct FText& ErrorDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ShowError");

	ABP_PG_PlayerController_Menu_C_ShowError_Params params;
	params.ErrorMessage = ErrorMessage;
	params.ErrorDetails = ErrorDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ExecuteUbergraph_BP_PG_PlayerController_Menu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PG_PlayerController_Menu_C::ExecuteUbergraph_BP_PG_PlayerController_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C.ExecuteUbergraph_BP_PG_PlayerController_Menu");

	ABP_PG_PlayerController_Menu_C_ExecuteUbergraph_BP_PG_PlayerController_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
