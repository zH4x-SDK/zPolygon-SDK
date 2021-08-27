#pragma once

// Name: Polygon, Version: 0.3.13.76


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.ConvertWorldPositionToMap
struct UUI_GameMenu_Map_C_ConvertWorldPositionToMap_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.SetMapInfo
struct UUI_GameMenu_Map_C_SetMapInfo_Params
{
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.SelectNewSpawnPoint
struct UUI_GameMenu_Map_C_SelectNewSpawnPoint_Params
{
	POLYGON_EControlPoint                              SpawnPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.AddPlayerIcon
struct UUI_GameMenu_Map_C_AddPlayerIcon_Params
{
	class APawn*                                       PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.SetControlPointsPosition
struct UUI_GameMenu_Map_C_SetControlPointsPosition_Params
{
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.Get Team Base by Type
struct UUI_GameMenu_Map_C_Get_Team_Base_by_Type_Params
{
	POLYGON_ETeam                                      Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_TeamBaseMarker_C*                        Marker;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.GetControlPointMarkerByType
struct UUI_GameMenu_Map_C_GetControlPointMarkerByType_Params
{
	POLYGON_EControlPoint                              ControlPointType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    Marker;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.Construct
struct UUI_GameMenu_Map_C_Construct_Params
{
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.PreConstruct
struct UUI_GameMenu_Map_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_GameMenu_Map_C_BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.OnSetTeam_Event
struct UUI_GameMenu_Map_C_OnSetTeam_Event_Params
{
};

// Function UI_GameMenu_Map.UI_GameMenu_Map_C.ExecuteUbergraph_UI_GameMenu_Map
struct UUI_GameMenu_Map_C_ExecuteUbergraph_UI_GameMenu_Map_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
