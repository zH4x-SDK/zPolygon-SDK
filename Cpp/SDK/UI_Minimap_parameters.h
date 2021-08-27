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

// Function UI_Minimap.UI_Minimap_C.GetControlPointMarkerFromType
struct UUI_Minimap_C_GetControlPointMarkerFromType_Params
{
	POLYGON_EControlPoint                              ControlPointType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                              Marker;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Minimap.UI_Minimap_C.Construct
struct UUI_Minimap_C_Construct_Params
{
};

// Function UI_Minimap.UI_Minimap_C.PreConstruct
struct UUI_Minimap_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Minimap.UI_Minimap_C.OnGameTimer_Event
struct UUI_Minimap_C_OnGameTimer_Event_Params
{
};

// Function UI_Minimap.UI_Minimap_C.OnSetTeam_Event
struct UUI_Minimap_C_OnSetTeam_Event_Params
{
};

// Function UI_Minimap.UI_Minimap_C.OnChangeTotalScore_Event
struct UUI_Minimap_C_OnChangeTotalScore_Event_Params
{
};

// Function UI_Minimap.UI_Minimap_C.ExecuteUbergraph_UI_Minimap
struct UUI_Minimap_C_ExecuteUbergraph_UI_Minimap_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
