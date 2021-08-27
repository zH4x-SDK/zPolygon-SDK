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

// Function UI_ShopItem.UI_ShopItem_C.SetIsPurchased
struct UUI_ShopItem_C_SetIsPurchased_Params
{
	bool                                               IsPurchased;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ShopItem.UI_ShopItem_C.GetCatalogVersionByItemType
struct UUI_ShopItem_C_GetCatalogVersionByItemType_Params
{
	struct FString                                     Catalog;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_ShopItem.UI_ShopItem_C.SetItemInfo
struct UUI_ShopItem_C_SetItemInfo_Params
{
};

// Function UI_ShopItem.UI_ShopItem_C.OnPlayFabResponse_09710F9A4237AB46170B1D960A630947
struct UUI_ShopItem_C_OnPlayFabResponse_09710F9A4237AB46170B1D960A630947_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ShopItem.UI_ShopItem_C.PreConstruct
struct UUI_ShopItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ShopItem.UI_ShopItem_C.OnMouseEnter
struct UUI_ShopItem_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_ShopItem.UI_ShopItem_C.OnMouseLeave
struct UUI_ShopItem_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_ShopItem.UI_ShopItem_C.PurchaseItemSuccess
struct UUI_ShopItem_C_PurchaseItemSuccess_Params
{
	struct FClientExecuteCloudScriptResult             Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ShopItem.UI_ShopItem_C.PurchaseItemFailure
struct UUI_ShopItem_C_PurchaseItemFailure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ShopItem.UI_ShopItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_ShopItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ShopItem.UI_ShopItem_C.ExecuteUbergraph_UI_ShopItem
struct UUI_ShopItem_C_ExecuteUbergraph_UI_ShopItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ShopItem.UI_ShopItem_C.IsHoveredDelegate__DelegateSignature
struct UUI_ShopItem_C_IsHoveredDelegate__DelegateSignature_Params
{
	class UUI_ShopItem_C*                              Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
