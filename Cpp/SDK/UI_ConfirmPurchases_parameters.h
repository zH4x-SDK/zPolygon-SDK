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

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.OnPlayFabResponse_162DFB834B563E89615F53A447FEB99E
struct UUI_ConfirmPurchases_C_OnPlayFabResponse_162DFB834B563E89615F53A447FEB99E_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.PurchaseItem_Success
struct UUI_ConfirmPurchases_C_PurchaseItem_Success_Params
{
	struct FClientPurchaseItemResult                   Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.PurchaseItem_Failure
struct UUI_ConfirmPurchases_C_PurchaseItem_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_ConfirmPurchases_C_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_ConfirmPurchases_C_BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.Construct
struct UUI_ConfirmPurchases_C_Construct_Params
{
};

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.ExecuteUbergraph_UI_ConfirmPurchases
struct UUI_ConfirmPurchases_C_ExecuteUbergraph_UI_ConfirmPurchases_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
