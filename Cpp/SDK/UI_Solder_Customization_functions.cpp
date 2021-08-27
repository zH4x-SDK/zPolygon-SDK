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

// Function UI_Solder_Customization.UI_Solder_Customization_C.Get List by Item Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*              ScrollBox                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::Get_List_by_Item_Class(class UClass* ItemClass, class UScrollBox** ScrollBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.Get List by Item Class");

	UUI_Solder_Customization_C_Get_List_by_Item_Class_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrollBox != nullptr)
		*ScrollBox = params.ScrollBox;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.Get Slot by Item Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ShortItemData                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Solder_Customization_Slot_C* Slot                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::Get_Slot_by_Item_Class(class UClass* ShortItemData, class UUI_Solder_Customization_Slot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.Get Slot by Item Class");

	UUI_Solder_Customization_C_Get_Slot_by_Item_Class_Params params;
	params.ShortItemData = ShortItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.AddItemToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*      ItemJson                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::AddItemToList(class UPlayFabJsonObject* ItemJson)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.AddItemToList");

	UUI_Solder_Customization_C_AddItemToList_Params params;
	params.ItemJson = ItemJson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.ParsePlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Solder_Customization_C::ParsePlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.ParsePlayerInventory");

	UUI_Solder_Customization_C_ParsePlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Solder_Customization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.Construct");

	UUI_Solder_Customization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.SelectDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::SelectDelegate_Event(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.SelectDelegate_Event");

	UUI_Solder_Customization_C_SelectDelegate_Event_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature");

	UUI_Solder_Customization_C_BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature");

	UUI_Solder_Customization_C_BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.Slot_HoveredDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Slot_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_Customization_C::Slot_HoveredDelegate_Event(class UUI_Solder_Customization_Slot_C* Slot, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.Slot_HoveredDelegate_Event");

	UUI_Solder_Customization_C_Slot_HoveredDelegate_Event_Params params;
	params.Slot = Slot;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.Item_HoveredDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Item_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_Customization_C::Item_HoveredDelegate_Event(class UUI_Solder_Customization_Item_C* Item, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.Item_HoveredDelegate_Event");

	UUI_Solder_Customization_C_Item_HoveredDelegate_Event_Params params;
	params.Item = Item;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.InventoryIsReady
// (BlueprintCallable, BlueprintEvent)
void UUI_Solder_Customization_C::InventoryIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.InventoryIsReady");

	UUI_Solder_Customization_C_InventoryIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.OnUpdatePlayerCombinedInfo_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Solder_Customization_C::OnUpdatePlayerCombinedInfo_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.OnUpdatePlayerCombinedInfo_Event");

	UUI_Solder_Customization_C_OnUpdatePlayerCombinedInfo_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization.UI_Solder_Customization_C.ExecuteUbergraph_UI_Solder_Customization
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_C::ExecuteUbergraph_UI_Solder_Customization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization.UI_Solder_Customization_C.ExecuteUbergraph_UI_Solder_Customization");

	UUI_Solder_Customization_C_ExecuteUbergraph_UI_Solder_Customization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
