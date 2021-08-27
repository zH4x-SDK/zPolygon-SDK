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

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.ConvertWorldPositionToMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector2D UUI_GameMenu_Map_C::ConvertWorldPositionToMap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.ConvertWorldPositionToMap");

	UUI_GameMenu_Map_C_ConvertWorldPositionToMap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.SetMapInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_Map_C::SetMapInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.SetMapInfo");

	UUI_GameMenu_Map_C_SetMapInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.SelectNewSpawnPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::SelectNewSpawnPoint(POLYGON_EControlPoint SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.SelectNewSpawnPoint");

	UUI_GameMenu_Map_C_SelectNewSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.AddPlayerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::AddPlayerIcon(class APawn* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.AddPlayerIcon");

	UUI_GameMenu_Map_C_AddPlayerIcon_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.SetControlPointsPosition
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_Map_C::SetControlPointsPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.SetControlPointsPosition");

	UUI_GameMenu_Map_C_SetControlPointsPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.Get Team Base by Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// POLYGON_ETeam                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_TeamBaseMarker_C*    Marker                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::Get_Team_Base_by_Type(POLYGON_ETeam Type, class UUI_TeamBaseMarker_C** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.Get Team Base by Type");

	UUI_GameMenu_Map_C_Get_Team_Base_by_Type_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Marker != nullptr)
		*Marker = params.Marker;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.GetControlPointMarkerByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          ControlPointType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControlPointMarker_C* Marker                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::GetControlPointMarkerByType(POLYGON_EControlPoint ControlPointType, class UUI_ControlPointMarker_C** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.GetControlPointMarkerByType");

	UUI_GameMenu_Map_C_GetControlPointMarkerByType_Params params;
	params.ControlPointType = ControlPointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Marker != nullptr)
		*Marker = params.Marker;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GameMenu_Map_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.Construct");

	UUI_GameMenu_Map_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_GameMenu_Map_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.PreConstruct");

	UUI_GameMenu_Map_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// POLYGON_EControlPoint          Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature");

	UUI_GameMenu_Map_C_BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_Map_C::OnSetTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.OnSetTeam_Event");

	UUI_GameMenu_Map_C_OnSetTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map.UI_GameMenu_Map_C.ExecuteUbergraph_UI_GameMenu_Map
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_C::ExecuteUbergraph_UI_GameMenu_Map(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map.UI_GameMenu_Map_C.ExecuteUbergraph_UI_GameMenu_Map");

	UUI_GameMenu_Map_C_ExecuteUbergraph_UI_GameMenu_Map_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
