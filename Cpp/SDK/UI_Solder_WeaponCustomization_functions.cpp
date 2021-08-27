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

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.SelectModuleSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::SelectModuleSlot(int Index, class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.SelectModuleSlot");

	UUI_Solder_WeaponCustomization_C_SelectModuleSlot_Params params;
	params.Index = Index;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.CheckModuleIsEquipped
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsEquipped                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_WeaponCustomization_C::CheckModuleIsEquipped(const struct FString& ItemId, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.CheckModuleIsEquipped");

	UUI_Solder_WeaponCustomization_C_CheckModuleIsEquipped_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.FindModuleInInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*      Module                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::FindModuleInInventory(const struct FString& ItemId, class UPlayFabJsonObject** Module)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.FindModuleInInventory");

	UUI_Solder_WeaponCustomization_C_FindModuleInInventory_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Module != nullptr)
		*Module = params.Module;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.FindModuleInListByItemId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUI_Solder_WeaponCustomizationItem_C* Item                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::FindModuleInListByItemId(class UWidget* ParentWidget, const struct FString& ItemId, class UUI_Solder_WeaponCustomizationItem_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.FindModuleInListByItemId");

	UUI_Solder_WeaponCustomization_C_FindModuleInListByItemId_Params params;
	params.ParentWidget = ParentWidget;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.GetModuleSlotByModuleType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// POLYGON_EWeaponModuleType      ModuleType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Solder_Customization_Slot_C* Slot                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::GetModuleSlotByModuleType(POLYGON_EWeaponModuleType ModuleType, class UUI_Solder_Customization_Slot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.GetModuleSlotByModuleType");

	UUI_Solder_WeaponCustomization_C_GetModuleSlotByModuleType_Params params;
	params.ModuleType = ModuleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.Get Module List by Module Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// POLYGON_EWeaponModuleType      Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*            List                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::Get_Module_List_by_Module_Type(POLYGON_EWeaponModuleType Selection, class UVerticalBox** List)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.Get Module List by Module Type");

	UUI_Solder_WeaponCustomization_C_Get_Module_List_by_Module_Type_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.AddNewModule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*      ItemJson                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::AddNewModule(class UPlayFabJsonObject* ItemJson)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.AddNewModule");

	UUI_Solder_WeaponCustomization_C_AddNewModule_Params params;
	params.ItemJson = ItemJson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.ResetAllModules
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Solder_WeaponCustomization_C::ResetAllModules()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.ResetAllModules");

	UUI_Solder_WeaponCustomization_C_ResetAllModules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.GrabModulesInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*      WeaponJsonInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::GrabModulesInfo(class UPlayFabJsonObject* WeaponJsonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.GrabModulesInfo");

	UUI_Solder_WeaponCustomization_C_GrabModulesInfo_Params params;
	params.WeaponJsonInfo = WeaponJsonInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Solder_WeaponCustomization_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Solder_WeaponCustomization_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Solder_WeaponCustomization_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature");

	UUI_Solder_WeaponCustomization_C_BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.ExecuteUbergraph_UI_Solder_WeaponCustomization
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_WeaponCustomization_C::ExecuteUbergraph_UI_Solder_WeaponCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.ExecuteUbergraph_UI_Solder_WeaponCustomization");

	UUI_Solder_WeaponCustomization_C_ExecuteUbergraph_UI_Solder_WeaponCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
