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

// Function UI_InteractionTime.UI_InteractionTime_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_InteractionTime_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractionTime.UI_InteractionTime_C.Construct");

	UUI_InteractionTime_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_InteractionTime.UI_InteractionTime_C.Timer_InteractionTime
// (BlueprintCallable, BlueprintEvent)
void UUI_InteractionTime_C::Timer_InteractionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractionTime.UI_InteractionTime_C.Timer_InteractionTime");

	UUI_InteractionTime_C_Timer_InteractionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_InteractionTime.UI_InteractionTime_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_InteractionTime_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractionTime.UI_InteractionTime_C.PreConstruct");

	UUI_InteractionTime_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_InteractionTime.UI_InteractionTime_C.ExecuteUbergraph_UI_InteractionTime
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_InteractionTime_C::ExecuteUbergraph_UI_InteractionTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractionTime.UI_InteractionTime_C.ExecuteUbergraph_UI_InteractionTime");

	UUI_InteractionTime_C_ExecuteUbergraph_UI_InteractionTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
