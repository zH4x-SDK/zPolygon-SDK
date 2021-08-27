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

// Function UI_DarkenScreen.UI_DarkenScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_DarkenScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DarkenScreen.UI_DarkenScreen_C.Construct");

	UUI_DarkenScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DarkenScreen.UI_DarkenScreen_C.RemoveDarken
// (BlueprintCallable, BlueprintEvent)
void UUI_DarkenScreen_C::RemoveDarken()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DarkenScreen.UI_DarkenScreen_C.RemoveDarken");

	UUI_DarkenScreen_C_RemoveDarken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DarkenScreen.UI_DarkenScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DarkenScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DarkenScreen.UI_DarkenScreen_C.Tick");

	UUI_DarkenScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DarkenScreen.UI_DarkenScreen_C.SmoothStartEvent
// (BlueprintCallable, BlueprintEvent)
void UUI_DarkenScreen_C::SmoothStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DarkenScreen.UI_DarkenScreen_C.SmoothStartEvent");

	UUI_DarkenScreen_C_SmoothStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DarkenScreen.UI_DarkenScreen_C.ExecuteUbergraph_UI_DarkenScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DarkenScreen_C::ExecuteUbergraph_UI_DarkenScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DarkenScreen.UI_DarkenScreen_C.ExecuteUbergraph_UI_DarkenScreen");

	UUI_DarkenScreen_C_ExecuteUbergraph_UI_DarkenScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
