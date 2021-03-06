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

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.FindCoord
struct UUI_Map_ControlPoint_C_FindCoord_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Degrees;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   NewVector;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.FindAngle
struct UUI_Map_ControlPoint_C_FindAngle_Params
{
	struct FVector2D                                   In;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Degrees;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.SetName
struct UUI_Map_ControlPoint_C_SetName_Params
{
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.Construct
struct UUI_Map_ControlPoint_C_Construct_Params
{
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.Tick
struct UUI_Map_ControlPoint_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.CalculatePosition
struct UUI_Map_ControlPoint_C_CalculatePosition_Params
{
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.OnCapturedTeam_Event
struct UUI_Map_ControlPoint_C_OnCapturedTeam_Event_Params
{
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.OnIsCapture_Event
struct UUI_Map_ControlPoint_C_OnIsCapture_Event_Params
{
};

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.ExecuteUbergraph_UI_Map_ControlPoint
struct UUI_Map_ControlPoint_C_ExecuteUbergraph_UI_Map_ControlPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
