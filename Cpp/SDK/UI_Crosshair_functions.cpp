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

// Function UI_Crosshair.UI_Crosshair_C.SetCrosshairPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Crosshair_C::SetCrosshairPosition(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.SetCrosshairPosition");

	UUI_Crosshair_C_SetCrosshairPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Crosshair.UI_Crosshair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Crosshair_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.Construct");

	UUI_Crosshair_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Crosshair.UI_Crosshair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Crosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.Tick");

	UUI_Crosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Crosshair.UI_Crosshair_C.OnSetPawn_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Crosshair_C::OnSetPawn_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.OnSetPawn_Event");

	UUI_Crosshair_C_OnSetPawn_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Crosshair.UI_Crosshair_C.OnSetCurrentWeapon_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Crosshair_C::OnSetCurrentWeapon_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.OnSetCurrentWeapon_Event");

	UUI_Crosshair_C_OnSetCurrentWeapon_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Crosshair.UI_Crosshair_C.OnApplyWeaponDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHeadshot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Crosshair_C::OnApplyWeaponDamage_Event(bool bHeadshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.OnApplyWeaponDamage_Event");

	UUI_Crosshair_C_OnApplyWeaponDamage_Event_Params params;
	params.bHeadshot = bHeadshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Crosshair_C::ExecuteUbergraph_UI_Crosshair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair");

	UUI_Crosshair_C_ExecuteUbergraph_UI_Crosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
