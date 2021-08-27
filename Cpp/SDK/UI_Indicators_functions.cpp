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

// Function UI_Indicators.UI_Indicators_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Indicators_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.Construct");

	UUI_Indicators_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Indicators_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.PreConstruct");

	UUI_Indicators_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.OnSetPawn_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Indicators_C::OnSetPawn_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.OnSetPawn_Event");

	UUI_Indicators_C_OnSetPawn_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.OnChangeHealth_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Indicators_C::OnChangeHealth_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.OnChangeHealth_Event");

	UUI_Indicators_C_OnChangeHealth_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.OnSetCurrentWeapon_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Indicators_C::OnSetCurrentWeapon_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.OnSetCurrentWeapon_Event");

	UUI_Indicators_C_OnSetCurrentWeapon_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.OnChangeNumberGrenades_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Indicators_C::OnChangeNumberGrenades_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.OnChangeNumberGrenades_Event");

	UUI_Indicators_C_OnChangeNumberGrenades_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Indicators_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.Tick");

	UUI_Indicators_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.OnChangeStockAmmo_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Indicators_C::OnChangeStockAmmo_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.OnChangeStockAmmo_Event");

	UUI_Indicators_C_OnChangeStockAmmo_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.OnChangeCurrentNumberAmmo_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Indicators_C::OnChangeCurrentNumberAmmo_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.OnChangeCurrentNumberAmmo_Event");

	UUI_Indicators_C_OnChangeCurrentNumberAmmo_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Indicators.UI_Indicators_C.ExecuteUbergraph_UI_Indicators
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Indicators_C::ExecuteUbergraph_UI_Indicators(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Indicators.UI_Indicators_C.ExecuteUbergraph_UI_Indicators");

	UUI_Indicators_C_ExecuteUbergraph_UI_Indicators_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
