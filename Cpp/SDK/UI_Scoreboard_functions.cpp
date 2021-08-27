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

// Function UI_Scoreboard.UI_Scoreboard_C.SortPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Scoreboard_Player_C* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*              Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Scoreboard_C::SortPlayers(class UUI_Scoreboard_Player_C* Player, class UGridPanel* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.SortPlayers");

	UUI_Scoreboard_C_SortPlayers_Params params;
	params.Player = Player;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.AddPlayersToTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// POLYGON_ETeam                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Scoreboard_C::AddPlayersToTab(POLYGON_ETeam Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.AddPlayersToTab");

	UUI_Scoreboard_C_AddPlayersToTab_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Scoreboard_C::SetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.SetVisible");

	UUI_Scoreboard_C_SetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.Construct");

	UUI_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Scoreboard_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.PreConstruct");

	UUI_Scoreboard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.StartUpdatePlayersTab
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_C::StartUpdatePlayersTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.StartUpdatePlayersTab");

	UUI_Scoreboard_C_StartUpdatePlayersTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayeysTabEvent
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_C::UpdatePlayeysTabEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayeysTabEvent");

	UUI_Scoreboard_C_UpdatePlayeysTabEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.OnChangeTotalScore_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Scoreboard_C::OnChangeTotalScore_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.OnChangeTotalScore_Event");

	UUI_Scoreboard_C_OnChangeTotalScore_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Scoreboard_C::ExecuteUbergraph_UI_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard");

	UUI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
