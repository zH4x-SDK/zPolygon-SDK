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

// Function UI_Shop_Weapon.UI_Shop_Weapon_C.SetShowWeaponClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Shop_Weapon_C::SetShowWeaponClass(int Index, class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.SetShowWeaponClass");

	UUI_Shop_Weapon_C_SetShowWeaponClass_Params params;
	params.Index = Index;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.SetWeaponIsHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Shop_Weapon_C::SetWeaponIsHovered(class UUI_ShopItem_C* Weapon, bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.SetWeaponIsHovered");

	UUI_Shop_Weapon_C_SetWeaponIsHovered_Params params;
	params.Weapon = Weapon;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.AddNewWeaponItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WeaponClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*          CreatedItem                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Shop_Weapon_C::AddNewWeaponItem(class UClass* WeaponClass, class UUI_ShopItem_C** CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.AddNewWeaponItem");

	UUI_Shop_Weapon_C_AddNewWeaponItem_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedItem != nullptr)
		*CreatedItem = params.CreatedItem;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Shop_Weapon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.PreConstruct");

	UUI_Shop_Weapon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.IsHoveredDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Shop_Weapon_C::IsHoveredDelegate_Event(class UUI_ShopItem_C* Item, bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.IsHoveredDelegate_Event");

	UUI_Shop_Weapon_C_IsHoveredDelegate_Event_Params params;
	params.Item = Item;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Shop_Weapon_C::BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UUI_Shop_Weapon_C_BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Shop_Weapon_C::BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UUI_Shop_Weapon_C_BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.ExecuteUbergraph_UI_Shop_Weapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Shop_Weapon_C::ExecuteUbergraph_UI_Shop_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_Weapon.UI_Shop_Weapon_C.ExecuteUbergraph_UI_Shop_Weapon");

	UUI_Shop_Weapon_C_ExecuteUbergraph_UI_Shop_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
