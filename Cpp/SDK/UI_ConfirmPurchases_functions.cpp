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

// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.OnPlayFabResponse_162DFB834B563E89615F53A447FEB99E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ConfirmPurchases_C::OnPlayFabResponse_162DFB834B563E89615F53A447FEB99E(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.OnPlayFabResponse_162DFB834B563E89615F53A447FEB99E");

	UUI_ConfirmPurchases_C_OnPlayFabResponse_162DFB834B563E89615F53A447FEB99E_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.PurchaseItem_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientPurchaseItemResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmPurchases_C::PurchaseItem_Success(const struct FClientPurchaseItemResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.PurchaseItem_Success");

	UUI_ConfirmPurchases_C_PurchaseItem_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.PurchaseItem_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmPurchases_C::PurchaseItem_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.PurchaseItem_Failure");

	UUI_ConfirmPurchases_C_PurchaseItem_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ConfirmPurchases_C::BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_ConfirmPurchases_C_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ConfirmPurchases_C::BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_ConfirmPurchases_C_BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ConfirmPurchases_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.Construct");

	UUI_ConfirmPurchases_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.ExecuteUbergraph_UI_ConfirmPurchases
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmPurchases_C::ExecuteUbergraph_UI_ConfirmPurchases(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmPurchases.UI_ConfirmPurchases_C.ExecuteUbergraph_UI_ConfirmPurchases");

	UUI_ConfirmPurchases_C_ExecuteUbergraph_UI_ConfirmPurchases_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
