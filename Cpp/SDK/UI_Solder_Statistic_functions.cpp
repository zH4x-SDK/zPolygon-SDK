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

// Function UI_Solder_Statistic.UI_Solder_Statistic_C.ParsePlayerCombinedInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Solder_Statistic_C::ParsePlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Statistic.UI_Solder_Statistic_C.ParsePlayerCombinedInfo");

	UUI_Solder_Statistic_C_ParsePlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Statistic.UI_Solder_Statistic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Solder_Statistic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Statistic.UI_Solder_Statistic_C.Construct");

	UUI_Solder_Statistic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Statistic.UI_Solder_Statistic_C.OnUpdatePlayerCombinedInfo_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Solder_Statistic_C::OnUpdatePlayerCombinedInfo_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Statistic.UI_Solder_Statistic_C.OnUpdatePlayerCombinedInfo_Event");

	UUI_Solder_Statistic_C_OnUpdatePlayerCombinedInfo_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Statistic.UI_Solder_Statistic_C.ExecuteUbergraph_UI_Solder_Statistic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Statistic_C::ExecuteUbergraph_UI_Solder_Statistic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Statistic.UI_Solder_Statistic_C.ExecuteUbergraph_UI_Solder_Statistic");

	UUI_Solder_Statistic_C_ExecuteUbergraph_UI_Solder_Statistic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
