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

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.CreateGeneralWidget
struct ABP_PG_PlayerController_Game_C_CreateGeneralWidget_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.HideInterface
struct ABP_PG_PlayerController_Game_C_HideInterface_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.RemoveWidgets
struct ABP_PG_PlayerController_Game_C_RemoveWidgets_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
struct ABP_PG_PlayerController_Game_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_5
struct ABP_PG_PlayerController_Game_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_4
struct ABP_PG_PlayerController_Game_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_ChatAll_K2Node_InputActionEvent_3
struct ABP_PG_PlayerController_Game_C_InpActEvt_ChatAll_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_ChatTeam_K2Node_InputActionEvent_2
struct ABP_PG_PlayerController_Game_C_InpActEvt_ChatTeam_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_HideInterface_K2Node_InputActionEvent_1
struct ABP_PG_PlayerController_Game_C_InpActEvt_HideInterface_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_N_K2Node_InputKeyEvent_1
struct ABP_PG_PlayerController_Game_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OpenScoreboard
struct ABP_PG_PlayerController_Game_C_OpenScoreboard_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.CloseScoreboard
struct ABP_PG_PlayerController_Game_C_CloseScoreboard_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.ReceiveBeginPlay
struct ABP_PG_PlayerController_Game_C_ReceiveBeginPlay_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.DisplayMessageToChatEvent
struct ABP_PG_PlayerController_Game_C_DisplayMessageToChatEvent_Params
{
	struct FChatMessage                                Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.StartInteractionEvent
struct ABP_PG_PlayerController_Game_C_StartInteractionEvent_Params
{
	float                                              interactionTime;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.StopInteractionEvent
struct ABP_PG_PlayerController_Game_C_StopInteractionEvent_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnSetPawn_Event
struct ABP_PG_PlayerController_Game_C_OnSetPawn_Event_Params
{
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnEndPlay_Event
struct ABP_PG_PlayerController_Game_C_OnEndPlay_Event_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.NotifyPlayerKilledEvent
struct ABP_PG_PlayerController_Game_C_NotifyPlayerKilledEvent_Params
{
	class APG_PlayerState_Game*                        killed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APG_PlayerState_Game*                        killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isHeadshot;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isGrenade;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.NotifyAddedGameScoreEvent
struct ABP_PG_PlayerController_Game_C_NotifyAddedGameScoreEvent_Params
{
	int                                                addedScore;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	POLYGON_EAccrualTypeGameScore                      addGameScoreType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     customString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.ExecuteUbergraph_BP_PG_PlayerController_Game
struct ABP_PG_PlayerController_Game_C_ExecuteUbergraph_BP_PG_PlayerController_Game_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
