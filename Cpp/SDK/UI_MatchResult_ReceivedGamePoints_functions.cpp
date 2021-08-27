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

// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPremium_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MatchResult_ReceivedGamePoints_C::SetProgress(float CurrentProgress, bool IsPremium_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.SetProgress");

	UUI_MatchResult_ReceivedGamePoints_C_SetProgress_Params params;
	params.CurrentProgress = CurrentProgress;
	params.IsPremium_ = IsPremium_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.GoToNextLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_MatchResult_ReceivedGamePoints_C::GoToNextLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.GoToNextLevel");

	UUI_MatchResult_ReceivedGamePoints_C_GoToNextLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MatchResult_ReceivedGamePoints_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.PreConstruct");

	UUI_MatchResult_ReceivedGamePoints_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MatchResult_ReceivedGamePoints_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Tick");

	UUI_MatchResult_ReceivedGamePoints_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Display
// (BlueprintCallable, BlueprintEvent)
void UUI_MatchResult_ReceivedGamePoints_C::Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Display");

	UUI_MatchResult_ReceivedGamePoints_C_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MatchResult_ReceivedGamePoints_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Destruct");

	UUI_MatchResult_ReceivedGamePoints_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.StartAddExpEvent
// (BlueprintCallable, BlueprintEvent)
void UUI_MatchResult_ReceivedGamePoints_C::StartAddExpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.StartAddExpEvent");

	UUI_MatchResult_ReceivedGamePoints_C_StartAddExpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnGameTimer_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_MatchResult_ReceivedGamePoints_C::OnGameTimer_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnGameTimer_Event");

	UUI_MatchResult_ReceivedGamePoints_C_OnGameTimer_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnSetTotalProgress_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_MatchResult_ReceivedGamePoints_C::OnSetTotalProgress_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnSetTotalProgress_Event");

	UUI_MatchResult_ReceivedGamePoints_C_OnSetTotalProgress_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MatchResult_ReceivedGamePoints_C::ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints");

	UUI_MatchResult_ReceivedGamePoints_C_ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
