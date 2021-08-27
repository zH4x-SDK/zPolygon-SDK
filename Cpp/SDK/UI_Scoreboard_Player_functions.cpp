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

// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewNumber                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Scoreboard_Player_C::SetPlayerNumber(int NewNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerNumber");

	UUI_Scoreboard_Player_C_SetPlayerNumber_Params params;
	params.NewNumber = NewNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SortPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*              GridTeam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Scoreboard_Player_C::SortPlayers(class UGridPanel* GridTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SortPlayers");

	UUI_Scoreboard_Player_C_SortPlayers_Params params;
	params.GridTeam = GridTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::SetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerName");

	UUI_Scoreboard_Player_C_SetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerDeaths
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::SetPlayerDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerDeaths");

	UUI_Scoreboard_Player_C_SetPlayerDeaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetKillsOfPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::SetKillsOfPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetKillsOfPlayer");

	UUI_Scoreboard_Player_C_SetKillsOfPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerGameScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::SetPlayerGameScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerGameScore");

	UUI_Scoreboard_Player_C_SetPlayerGameScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::SetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerLevel");

	UUI_Scoreboard_Player_C_SetPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Scoreboard_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.Construct");

	UUI_Scoreboard_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnNewLevelReceived_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::OnNewLevelReceived_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnNewLevelReceived_Event");

	UUI_Scoreboard_Player_C_OnNewLevelReceived_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberKills_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::OnChangeNumberKills_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberKills_Event");

	UUI_Scoreboard_Player_C_OnChangeNumberKills_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberDeaths_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::OnChangeNumberDeaths_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberDeaths_Event");

	UUI_Scoreboard_Player_C_OnChangeNumberDeaths_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnPlayerNameChanged_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::OnPlayerNameChanged_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnPlayerNameChanged_Event");

	UUI_Scoreboard_Player_C_OnPlayerNameChanged_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnSetTotalProgress_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_Player_C::OnSetTotalProgress_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnSetTotalProgress_Event");

	UUI_Scoreboard_Player_C_OnSetTotalProgress_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.ExecuteUbergraph_UI_Scoreboard_Player
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Scoreboard_Player_C::ExecuteUbergraph_UI_Scoreboard_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.ExecuteUbergraph_UI_Scoreboard_Player");

	UUI_Scoreboard_Player_C_ExecuteUbergraph_UI_Scoreboard_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
