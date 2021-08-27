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

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.ResetSpawnPoint
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ControlPointMarker_C::ResetSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.ResetSpawnPoint");

	UUI_ControlPointMarker_C_ResetSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ControlPointMarker_C::SetSize(float NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetSize");

	UUI_ControlPointMarker_C_SetSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_ControlPointMarker_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnMouseButtonDown");

	UUI_ControlPointMarker_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ControlPointMarker_C::SetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetName");

	UUI_ControlPointMarker_C_SetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ControlPointMarker_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.PreConstruct");

	UUI_ControlPointMarker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPoint
// (BlueprintCallable, BlueprintEvent)
void UUI_ControlPointMarker_C::SelectAsSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPoint");

	UUI_ControlPointMarker_C_SelectAsSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ControlPointMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.Construct");

	UUI_ControlPointMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.AttachMarkerToControlPoint
// (BlueprintCallable, BlueprintEvent)
void UUI_ControlPointMarker_C::AttachMarkerToControlPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.AttachMarkerToControlPoint");

	UUI_ControlPointMarker_C_AttachMarkerToControlPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ControlPointMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.Tick");

	UUI_ControlPointMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnCapturedTeam_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_ControlPointMarker_C::OnCapturedTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnCapturedTeam_Event");

	UUI_ControlPointMarker_C_OnCapturedTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnIsCapture_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_ControlPointMarker_C::OnIsCapture_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnIsCapture_Event");

	UUI_ControlPointMarker_C_OnIsCapture_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.ExecuteUbergraph_UI_ControlPointMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ControlPointMarker_C::ExecuteUbergraph_UI_ControlPointMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.ExecuteUbergraph_UI_ControlPointMarker");

	UUI_ControlPointMarker_C_ExecuteUbergraph_UI_ControlPointMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPointDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ControlPointMarker_C::SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_ControlPointMarker_C_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
