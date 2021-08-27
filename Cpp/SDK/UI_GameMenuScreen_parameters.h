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

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnKeyUp
struct UUI_GameMenuScreen_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.GetControlPointMarkerByTypeFromBoard
struct UUI_GameMenuScreen_C_GetControlPointMarkerByTypeFromBoard_Params
{
	POLYGON_EControlPoint                              ControlPointType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    Marker;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnKeyDown
struct UUI_GameMenuScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.Construct
struct UUI_GameMenuScreen_C_Construct_Params
{
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.Deploy
struct UUI_GameMenuScreen_C_Deploy_Params
{
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.StartTimeToSpawn
struct UUI_GameMenuScreen_C_StartTimeToSpawn_Params
{
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.Tick
struct UUI_GameMenuScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_GameMenuScreen_C_BndEvt__Button_Deploy_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnSetTeam_Event
struct UUI_GameMenuScreen_C_OnSetTeam_Event_Params
{
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.OnChangeTotalScore_Event
struct UUI_GameMenuScreen_C_OnChangeTotalScore_Event_Params
{
};

// Function UI_GameMenuScreen.UI_GameMenuScreen_C.ExecuteUbergraph_UI_GameMenuScreen
struct UUI_GameMenuScreen_C_ExecuteUbergraph_UI_GameMenuScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
