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

// Function UI_Minimap.UI_Minimap_C.GetControlPointMarkerFromType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// POLYGON_EControlPoint          ControlPointType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*          Marker                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Minimap_C::GetControlPointMarkerFromType(POLYGON_EControlPoint ControlPointType, class UHorizontalBox** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.GetControlPointMarkerFromType");

	UUI_Minimap_C_GetControlPointMarkerFromType_Params params;
	params.ControlPointType = ControlPointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Marker != nullptr)
		*Marker = params.Marker;

}


// Function UI_Minimap.UI_Minimap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Minimap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.Construct");

	UUI_Minimap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Minimap.UI_Minimap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Minimap_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.PreConstruct");

	UUI_Minimap_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Minimap.UI_Minimap_C.OnGameTimer_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Minimap_C::OnGameTimer_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.OnGameTimer_Event");

	UUI_Minimap_C_OnGameTimer_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Minimap.UI_Minimap_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Minimap_C::OnSetTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.OnSetTeam_Event");

	UUI_Minimap_C_OnSetTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Minimap.UI_Minimap_C.OnChangeTotalScore_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Minimap_C::OnChangeTotalScore_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.OnChangeTotalScore_Event");

	UUI_Minimap_C_OnChangeTotalScore_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Minimap.UI_Minimap_C.ExecuteUbergraph_UI_Minimap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Minimap_C::ExecuteUbergraph_UI_Minimap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Minimap.UI_Minimap_C.ExecuteUbergraph_UI_Minimap");

	UUI_Minimap_C_ExecuteUbergraph_UI_Minimap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
