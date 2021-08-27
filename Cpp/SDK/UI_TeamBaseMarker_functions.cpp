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

// Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_TeamBaseMarker_C::SetBaseColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.SetBaseColor");

	UUI_TeamBaseMarker_C_SetBaseColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TeamBaseMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.Construct");

	UUI_TeamBaseMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TeamBaseMarker_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.PreConstruct");

	UUI_TeamBaseMarker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_TeamBaseMarker_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_TeamBaseMarker_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.ExecuteUbergraph_UI_TeamBaseMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TeamBaseMarker_C::ExecuteUbergraph_UI_TeamBaseMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.ExecuteUbergraph_UI_TeamBaseMarker");

	UUI_TeamBaseMarker_C_ExecuteUbergraph_UI_TeamBaseMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.SelectAsSpawnPointDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TeamBaseMarker_C::SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamBaseMarker.UI_TeamBaseMarker_C.SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_TeamBaseMarker_C_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
