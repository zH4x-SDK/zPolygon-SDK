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

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ToggleMenu
struct UUI_GeneralGameScreen_C_ToggleMenu_Params
{
};

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.SetActiveScreenIndex
struct UUI_GeneralGameScreen_C_SetActiveScreenIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnKeyDown
struct UUI_GeneralGameScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.Construct
struct UUI_GeneralGameScreen_C_Construct_Params
{
};

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnNewLevelReceived_Event
struct UUI_GeneralGameScreen_C_OnNewLevelReceived_Event_Params
{
};

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnTeamWon_Event
struct UUI_GeneralGameScreen_C_OnTeamWon_Event_Params
{
};

// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ExecuteUbergraph_UI_GeneralGameScreen
struct UUI_GeneralGameScreen_C_ExecuteUbergraph_UI_GeneralGameScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
