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

// WidgetBlueprintGeneratedClass UI_Solder_Customization.UI_Solder_Customization_C
// 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
class UUI_Solder_Customization_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_PrimaryWeapons;                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_SecondaryWeapons;                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_ItemInfo_C*         UI_Solder_Customization_ItemInfo;                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_WeaponCustomization_C*            UI_Solder_CustomizationSlot_WeaponSetup;                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_SolderCustomizationSlot_PrimaryWeapon;                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Solder_Customization_Slot_C*             UI_SolderCustomizationSlot_SecondaryWeapon;                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_Equipped;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Inventory;                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Menu_C*                   PlayerState;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Solder_Customization.UI_Solder_Customization_C");
		return ptr;
	}



	void Get_List_by_Item_Class(class UClass* ItemClass, class UScrollBox** ScrollBox);
	void Get_Slot_by_Item_Class(class UClass* ShortItemData, class UUI_Solder_Customization_Slot_C** Slot);
	void AddItemToList(class UPlayFabJsonObject* ItemJson);
	void ParsePlayerInventory();
	void Construct();
	void SelectDelegate_Event(class UUI_Solder_Customization_Slot_C* Slot);
	void BndEvt__UI_SolderCustomizationSlot_K2Node_ComponentBoundEvent_2_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void BndEvt__UI_SolderCustomizationSlot_C_1_K2Node_ComponentBoundEvent_3_SelectDelegate__DelegateSignature(class UUI_Solder_Customization_Slot_C* Slot);
	void Slot_HoveredDelegate_Event(class UUI_Solder_Customization_Slot_C* Slot, bool IsHover);
	void Item_HoveredDelegate_Event(class UUI_Solder_Customization_Item_C* Item, bool IsHover);
	void InventoryIsReady();
	void OnUpdatePlayerCombinedInfo_Event();
	void ExecuteUbergraph_UI_Solder_Customization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
