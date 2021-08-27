#pragma once

// Name: Polygon, Version: 0.3.13.76


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Solder_Customization.UI_Solder_Customization_C.Get List by Item Class
struct UUI_Solder_Customization_C_Get_List_by_Item_Class_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.Get Slot by Item Class
struct UUI_Solder_Customization_C_Get_Slot_by_Item_Class_Params
{
	class UClass*                                      ShortItemData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.AddItemToList
struct UUI_Solder_Customization_C_AddItemToList_Params
{
	class UPlayFabJsonObject*                          ItemJson;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.ParsePlayerInventory
struct UUI_Solder_Customization_C_ParsePlayerInventory_Params
{
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.Construct
struct UUI_Solder_Customization_C_Construct_Params
{
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.SelectDelegate_Event
struct UUI_Solder_Customization_C_SelectDelegate_Event_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature
struct UUI_Solder_Customization_C_BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature
struct UUI_Solder_Customization_C_BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.Slot_HoveredDelegate_Event
struct UUI_Solder_Customization_C_Slot_HoveredDelegate_Event_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHover;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.Item_HoveredDelegate_Event
struct UUI_Solder_Customization_C_Item_HoveredDelegate_Event_Params
{
	class UUI_Solder_Customization_Item_C*             Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHover;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.InventoryIsReady
struct UUI_Solder_Customization_C_InventoryIsReady_Params
{
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_Solder_Customization_C_OnUpdatePlayerCombinedInfo_Event_Params
{
};

// Function UI_Solder_Customization.UI_Solder_Customization_C.ExecuteUbergraph_UI_Solder_Customization
struct UUI_Solder_Customization_C_ExecuteUbergraph_UI_Solder_Customization_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
