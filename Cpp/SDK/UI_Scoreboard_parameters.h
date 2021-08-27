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

// Function UI_Scoreboard.UI_Scoreboard_C.SortPlayers
struct UUI_Scoreboard_C_SortPlayers_Params
{
	class UUI_Scoreboard_Player_C*                     Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                                  Tab;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Scoreboard.UI_Scoreboard_C.AddPlayersToTab
struct UUI_Scoreboard_C_AddPlayersToTab_Params
{
	POLYGON_ETeam                                      Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Scoreboard.UI_Scoreboard_C.SetVisible
struct UUI_Scoreboard_C_SetVisible_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Scoreboard.UI_Scoreboard_C.Construct
struct UUI_Scoreboard_C_Construct_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.PreConstruct
struct UUI_Scoreboard_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Scoreboard.UI_Scoreboard_C.StartUpdatePlayersTab
struct UUI_Scoreboard_C_StartUpdatePlayersTab_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayeysTabEvent
struct UUI_Scoreboard_C_UpdatePlayeysTabEvent_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.OnChangeTotalScore_Event
struct UUI_Scoreboard_C_OnChangeTotalScore_Event_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
struct UUI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
