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

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_GameMenuScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnKeyUp");

	UUI_GameMenuScreen_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.GetControlPointMarkerByTypeFromBoard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          ControlPointType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControlPointMarker_C* Marker                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenuScreen_C::GetControlPointMarkerByTypeFromBoard(POLYGON_EControlPoint ControlPointType, class UUI_ControlPointMarker_C** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.GetControlPointMarkerByTypeFromBoard");

	UUI_GameMenuScreen_C_GetControlPointMarkerByTypeFromBoard_Params params;
	params.ControlPointType = ControlPointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Marker != nullptr)
		*Marker = params.Marker;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_GameMenuScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnKeyDown");

	UUI_GameMenuScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GameMenuScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.Construct");

	UUI_GameMenuScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.Deploy
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenuScreen_C::Deploy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.Deploy");

	UUI_GameMenuScreen_C_Deploy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.StartTimeToSpawn
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenuScreen_C::StartTimeToSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.StartTimeToSpawn");

	UUI_GameMenuScreen_C_StartTimeToSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenuScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.Tick");

	UUI_GameMenuScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GameMenuScreen_C::BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_GameMenuScreen_C_BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenuScreen_C::OnSetTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnSetTeam_Event");

	UUI_GameMenuScreen_C_OnSetTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnChangeTotalScore_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenuScreen_C::OnChangeTotalScore_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnChangeTotalScore_Event");

	UUI_GameMenuScreen_C_OnChangeTotalScore_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenuScreen.UI_GameMenuScreen_C.ExecuteUbergraph_UI_GameMenuScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenuScreen_C::ExecuteUbergraph_UI_GameMenuScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenuScreen.UI_GameMenuScreen_C.ExecuteUbergraph_UI_GameMenuScreen");

	UUI_GameMenuScreen_C_ExecuteUbergraph_UI_GameMenuScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
