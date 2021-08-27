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

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.SetIsAvaliable
struct UUI_Solder_WeaponCustomizationItem_C_SetIsAvaliable_Params
{
	bool                                               IsAvaliable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.SetVisibleLoadingSlot
struct UUI_Solder_WeaponCustomizationItem_C_SetVisibleLoadingSlot_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.SetIsEquipped
struct UUI_Solder_WeaponCustomizationItem_C_SetIsEquipped_Params
{
	bool                                               IsEquipped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.OnPlayFabResponse_3342D2A64568AA5D78B4D1BA42BF904F
struct UUI_Solder_WeaponCustomizationItem_C_OnPlayFabResponse_3342D2A64568AA5D78B4D1BA42BF904F_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.PreConstruct
struct UUI_Solder_WeaponCustomizationItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Solder_WeaponCustomizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Solder_WeaponCustomizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_Solder_WeaponCustomizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.ExecuteCloudScript_Success
struct UUI_Solder_WeaponCustomizationItem_C_ExecuteCloudScript_Success_Params
{
	struct FClientExecuteCloudScriptResult             Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.ExecuteCloudScript_Failure
struct UUI_Solder_WeaponCustomizationItem_C_ExecuteCloudScript_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.ExecuteUbergraph_UI_Solder_WeaponCustomizationItem
struct UUI_Solder_WeaponCustomizationItem_C_ExecuteUbergraph_UI_Solder_WeaponCustomizationItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_WeaponCustomizationItem.UI_Solder_WeaponCustomizationItem_C.ClickDelegate__DelegateSignature
struct UUI_Solder_WeaponCustomizationItem_C_ClickDelegate__DelegateSignature_Params
{
	class UUI_Solder_WeaponCustomizationItem_C*        Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
