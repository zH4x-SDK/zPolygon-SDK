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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C
// 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
class UUI_Solder_WeaponCustomization_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_Back;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_Solder_CustomizationSlot_Barrel;                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_Solder_CustomizationSlot_Skin;                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_Solder_CustomizationSlot_Underbarrel;                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_SolderCustomizationSlot_Accessory;                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_SolderCustomizationSlot_Optic;                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Accessory;                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Barrel;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Equipped;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Optic;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Skin;                                          // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Underbarrel;                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Inventory;                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>                  modules;                                                   // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UPlayFabJsonObject*                          WeaponJsonInfo;                                            // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Solder_WeaponCustomization.UI_Solder_WeaponCustomization_C");
		return ptr;
	}



	void SelectModuleSlot(int Index, class UUI_Solder_Customization_Slot_C* Slot);
	void CheckModuleIsEquipped(const struct FString& ItemId, bool* IsEquipped);
	void FindModuleInInventory(const struct FString& ItemId, class UPlayFabJsonObject** Module);
	void FindModuleInListByItemId(class UWidget* ParentWidget, const struct FString& ItemId, class UUI_Solder_WeaponCustomizationItem_C** Item);
	void GetModuleSlotByModuleType(POLYGON_EWeaponModuleType ModuleType, class UUI_Solder_Customization_Slot_C** Slot);
	void Get_Module_List_by_Module_Type(POLYGON_EWeaponModuleType Selection, class UVerticalBox** List);
	void AddNewModule(class UPlayFabJsonObject* ItemJson);
	void ResetAllModules();
	void GrabModulesInfo(class UPlayFabJsonObject* WeaponJsonInfo);
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_SolderCustomizationSlot_Optic_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void BndEvt__UI_Solder_CustomizationSlot_Skin_K2Node_ComponentBoundEvent_4_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void BndEvt__UI_Solder_CustomizationSlot_Barrel_K2Node_ComponentBoundEvent_5_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void BndEvt__UI_Solder_CustomizationSlot_Underbarrel_K2Node_ComponentBoundEvent_6_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void BndEvt__UI_SolderCustomizationSlot_Accessory_K2Node_ComponentBoundEvent_7_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void ExecuteUbergraph_UI_Solder_WeaponCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
