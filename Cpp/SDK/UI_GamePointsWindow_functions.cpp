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

// Function UI_GamePointsWindow.UI_GamePointsWindow_C.AddNewPointMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// POLYGON_EAccrualTypeGameScore  addGameScoreType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 customString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_GamePointsWindow_C::AddNewPointMessage(int AddPoint, POLYGON_EAccrualTypeGameScore addGameScoreType, const struct FString& customString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GamePointsWindow.UI_GamePointsWindow_C.AddNewPointMessage");

	UUI_GamePointsWindow_C_AddNewPointMessage_Params params;
	params.AddPoint = AddPoint;
	params.addGameScoreType = addGameScoreType;
	params.customString = customString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GamePointsWindow.UI_GamePointsWindow_C.ExecuteUbergraph_UI_GamePointsWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GamePointsWindow_C::ExecuteUbergraph_UI_GamePointsWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GamePointsWindow.UI_GamePointsWindow_C.ExecuteUbergraph_UI_GamePointsWindow");

	UUI_GamePointsWindow_C_ExecuteUbergraph_UI_GamePointsWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
