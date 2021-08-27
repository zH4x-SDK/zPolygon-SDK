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

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ToggleMenu
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GeneralGameScreen_C::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ToggleMenu");

	UUI_GeneralGameScreen_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.SetActiveScreenIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralGameScreen_C::SetActiveScreenIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.SetActiveScreenIndex");

	UUI_GeneralGameScreen_C_SetActiveScreenIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_GeneralGameScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnKeyDown");

	UUI_GeneralGameScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GeneralGameScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.Construct");

	UUI_GeneralGameScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnNewLevelReceived_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GeneralGameScreen_C::OnNewLevelReceived_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnNewLevelReceived_Event");

	UUI_GeneralGameScreen_C_OnNewLevelReceived_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnTeamWon_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GeneralGameScreen_C::OnTeamWon_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnTeamWon_Event");

	UUI_GeneralGameScreen_C_OnTeamWon_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ExecuteUbergraph_UI_GeneralGameScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralGameScreen_C::ExecuteUbergraph_UI_GeneralGameScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ExecuteUbergraph_UI_GeneralGameScreen");

	UUI_GeneralGameScreen_C_ExecuteUbergraph_UI_GeneralGameScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
