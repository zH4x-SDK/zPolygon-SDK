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

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.SetVisibleLoadingSlot
struct UUI_Solder_Customization_Item_C_SetVisibleLoadingSlot_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.SetIsEquipped
struct UUI_Solder_Customization_Item_C_SetIsEquipped_Params
{
	bool                                               IsEquipped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ParseItemInfo
struct UUI_Solder_Customization_Item_C_ParseItemInfo_Params
{
	class UPlayFabJsonObject*                          ItemJson;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.OnPlayFabResponse_487557984C86D004694AA696B812CA7F
struct UUI_Solder_Customization_Item_C_OnPlayFabResponse_487557984C86D004694AA696B812CA7F_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Solder_Customization_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Solder_Customization_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_Solder_Customization_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteCloudScript_Success
struct UUI_Solder_Customization_Item_C_ExecuteCloudScript_Success_Params
{
	struct FClientExecuteCloudScriptResult             Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteCloudScript_Failure
struct UUI_Solder_Customization_Item_C_ExecuteCloudScript_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteUbergraph_UI_Solder_Customization_Item
struct UUI_Solder_Customization_Item_C_ExecuteUbergraph_UI_Solder_Customization_Item_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.HoveredDelegate__DelegateSignature
struct UUI_Solder_Customization_Item_C_HoveredDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Item_C*             Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHover;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ClickDelegate__DelegateSignature
struct UUI_Solder_Customization_Item_C_ClickDelegate__DelegateSignature_Params
{
	class UUI_Solder_Customization_Item_C*             Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
