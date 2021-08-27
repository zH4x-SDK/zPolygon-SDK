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

// Function UI_WeaponModules.UI_WeaponModules_C.SetShowModuleClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WeaponModules_C::SetShowModuleClass(int Index, class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.SetShowModuleClass");

	UUI_WeaponModules_C_SetShowModuleClass_Params params;
	params.Index = Index;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WeaponModules.UI_WeaponModules_C.AddNewModuleItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*          CreatedItem                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WeaponModules_C::AddNewModuleItem(class UClass* ModuleID, class UUI_ShopItem_C** CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.AddNewModuleItem");

	UUI_WeaponModules_C_AddNewModuleItem_Params params;
	params.ModuleID = ModuleID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedItem != nullptr)
		*CreatedItem = params.CreatedItem;

}


// Function UI_WeaponModules.UI_WeaponModules_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_WeaponModules_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.PreConstruct");

	UUI_WeaponModules_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WeaponModules.UI_WeaponModules_C.IsHoveredDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_WeaponModules_C::IsHoveredDelegate_Event(class UUI_ShopItem_C* Item, bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.IsHoveredDelegate_Event");

	UUI_WeaponModules_C_IsHoveredDelegate_Event_Params params;
	params.Item = Item;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WeaponModules.UI_WeaponModules_C.BndEvt__UI_Button_Optic_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WeaponModules_C::BndEvt__UI_Button_Optic_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.BndEvt__UI_Button_Optic_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UUI_WeaponModules_C_BndEvt__UI_Button_Optic_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WeaponModules.UI_WeaponModules_C.BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WeaponModules_C::BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UUI_WeaponModules_C_BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WeaponModules.UI_WeaponModules_C.ExecuteUbergraph_UI_WeaponModules
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WeaponModules_C::ExecuteUbergraph_UI_WeaponModules(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponModules.UI_WeaponModules_C.ExecuteUbergraph_UI_WeaponModules");

	UUI_WeaponModules_C_ExecuteUbergraph_UI_WeaponModules_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
