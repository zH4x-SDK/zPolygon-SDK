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

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.SelectModuleSlot
struct UUI_Solder_WeaponCustomization_C_SelectModuleSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.CheckModuleIsEquipped
struct UUI_Solder_WeaponCustomization_C_CheckModuleIsEquipped_Params
{
	struct FString                                     ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsEquipped;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.FindModuleInInventory
struct UUI_Solder_WeaponCustomization_C_FindModuleInInventory_Params
{
	struct FString                                     ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          Module;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.FindModuleInListByItemId
struct UUI_Solder_WeaponCustomization_C_FindModuleInListByItemId_Params
{
	class UWidget*                                     ParentWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UUI_Solder_WeaponCustomizationItem_C*        Item;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.GetModuleSlotByModuleType
struct UUI_Solder_WeaponCustomization_C_GetModuleSlotByModuleType_Params
{
	POLYGON_EWeaponModuleType                          ModuleType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.Get Module List by Module Type
struct UUI_Solder_WeaponCustomization_C_Get_Module_List_by_Module_Type_Params
{
	POLYGON_EWeaponModuleType                          Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                List;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.AddNewModule
struct UUI_Solder_WeaponCustomization_C_AddNewModule_Params
{
	class UPlayFabJsonObject*                          ItemJson;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.ResetAllModules
struct UUI_Solder_WeaponCustomization_C_ResetAllModules_Params
{
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.GrabModulesInfo
struct UUI_Solder_WeaponCustomization_C_GrabModulesInfo_Params
{
	class UPlayFabJsonObject*                          WeaponJsonInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature
struct UUI_Solder_WeaponCustomization_C_BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Slot_C*             Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C.ExecuteUbergraph_UI_Solder_WeaponCustomization
struct UUI_Solder_WeaponCustomization_C_ExecuteUbergraph_UI_Solder_WeaponCustomization_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
