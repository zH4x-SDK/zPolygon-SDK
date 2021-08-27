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

// Function UI_WeaponModules.UI_WeaponModules_C.SetShowModuleClass
struct UUI_WeaponModules_C_SetShowModuleClass_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_WeaponModules.UI_WeaponModules_C.AddNewModuleItem
struct UUI_WeaponModules_C_AddNewModuleItem_Params
{
	class UClass*                                      ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ShopItem_C*                              CreatedItem;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_WeaponModules.UI_WeaponModules_C.PreConstruct
struct UUI_WeaponModules_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_WeaponModules.UI_WeaponModules_C.IsHoveredDelegate_Event
struct UUI_WeaponModules_C_IsHoveredDelegate_Event_Params
{
	class UUI_ShopItem_C*                              Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_WeaponModules.UI_WeaponModules_C.BndEvt__UI_Button_Optic_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UUI_WeaponModules_C_BndEvt__UI_Button_Optic_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_WeaponModules.UI_WeaponModules_C.BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UUI_WeaponModules_C_BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_WeaponModules.UI_WeaponModules_C.ExecuteUbergraph_UI_WeaponModules
struct UUI_WeaponModules_C_ExecuteUbergraph_UI_WeaponModules_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
