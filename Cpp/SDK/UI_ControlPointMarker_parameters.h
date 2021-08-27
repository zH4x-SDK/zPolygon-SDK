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

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.ResetSpawnPoint
struct UUI_ControlPointMarker_C_ResetSpawnPoint_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetSize
struct UUI_ControlPointMarker_C_SetSize_Params
{
	float                                              NewSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnMouseButtonDown
struct UUI_ControlPointMarker_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetName
struct UUI_ControlPointMarker_C_SetName_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.PreConstruct
struct UUI_ControlPointMarker_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPoint
struct UUI_ControlPointMarker_C_SelectAsSpawnPoint_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.Construct
struct UUI_ControlPointMarker_C_Construct_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.AttachMarkerToControlPoint
struct UUI_ControlPointMarker_C_AttachMarkerToControlPoint_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.Tick
struct UUI_ControlPointMarker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnCapturedTeam_Event
struct UUI_ControlPointMarker_C_OnCapturedTeam_Event_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnIsCapture_Event
struct UUI_ControlPointMarker_C_OnIsCapture_Event_Params
{
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.ExecuteUbergraph_UI_ControlPointMarker
struct UUI_ControlPointMarker_C_ExecuteUbergraph_UI_ControlPointMarker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPointDelegate__DelegateSignature
struct UUI_ControlPointMarker_C_SelectAsSpawnPointDelegate__DelegateSignature_Params
{
	POLYGON_EControlPoint                              Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
