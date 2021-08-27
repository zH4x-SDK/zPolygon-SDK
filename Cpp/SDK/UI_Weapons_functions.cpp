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

// Function UI_Weapons.UI_Weapons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Weapons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapons.UI_Weapons_C.Construct");

	UUI_Weapons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Weapons.UI_Weapons_C.OnSetPawn_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Weapons_C::OnSetPawn_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapons.UI_Weapons_C.OnSetPawn_Event");

	UUI_Weapons_C_OnSetPawn_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Weapons.UI_Weapons_C.OnSetPrimaryWeapon_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Weapons_C::OnSetPrimaryWeapon_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapons.UI_Weapons_C.OnSetPrimaryWeapon_Event");

	UUI_Weapons_C_OnSetPrimaryWeapon_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Weapons.UI_Weapons_C.OnSetSecondaryWeapon_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Weapons_C::OnSetSecondaryWeapon_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapons.UI_Weapons_C.OnSetSecondaryWeapon_Event");

	UUI_Weapons_C_OnSetSecondaryWeapon_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Weapons.UI_Weapons_C.OnSetCurrentWeapon_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Weapons_C::OnSetCurrentWeapon_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapons.UI_Weapons_C.OnSetCurrentWeapon_Event");

	UUI_Weapons_C_OnSetCurrentWeapon_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Weapons.UI_Weapons_C.ExecuteUbergraph_UI_Weapons
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Weapons_C::ExecuteUbergraph_UI_Weapons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapons.UI_Weapons_C.ExecuteUbergraph_UI_Weapons");

	UUI_Weapons_C_ExecuteUbergraph_UI_Weapons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
