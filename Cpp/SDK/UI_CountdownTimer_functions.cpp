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

// Function UI_CountdownTimer.UI_CountdownTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CountdownTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CountdownTimer.UI_CountdownTimer_C.Construct");

	UUI_CountdownTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CountdownTimer.UI_CountdownTimer_C.OnChangeGameState_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_CountdownTimer_C::OnChangeGameState_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CountdownTimer.UI_CountdownTimer_C.OnChangeGameState_Event");

	UUI_CountdownTimer_C_OnChangeGameState_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CountdownTimer.UI_CountdownTimer_C.OnGameTimer_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_CountdownTimer_C::OnGameTimer_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CountdownTimer.UI_CountdownTimer_C.OnGameTimer_Event");

	UUI_CountdownTimer_C_OnGameTimer_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CountdownTimer.UI_CountdownTimer_C.ExecuteUbergraph_UI_CountdownTimer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CountdownTimer_C::ExecuteUbergraph_UI_CountdownTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CountdownTimer.UI_CountdownTimer_C.ExecuteUbergraph_UI_CountdownTimer");

	UUI_CountdownTimer_C_ExecuteUbergraph_UI_CountdownTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
