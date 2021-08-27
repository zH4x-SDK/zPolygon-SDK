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

// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.SetVisibleLoadingSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_Item_C::SetVisibleLoadingSlot(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.SetVisibleLoadingSlot");

	UUI_Solder_Customization_Item_C_SetVisibleLoadingSlot_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.SetIsEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_Customization_Item_C::SetIsEquipped(bool IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.SetIsEquipped");

	UUI_Solder_Customization_Item_C_SetIsEquipped_Params params;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ParseItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*      ItemJson                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UUI_Solder_Customization_Item_C::ParseItemInfo(class UPlayFabJsonObject* ItemJson)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ParseItemInfo");

	UUI_Solder_Customization_Item_C_ParseItemInfo_Params params;
	params.ItemJson = ItemJson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.OnPlayFabResponse_487557984C86D004694AA696B812CA7F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_Customization_Item_C::OnPlayFabResponse_487557984C86D004694AA696B812CA7F(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.OnPlayFabResponse_487557984C86D004694AA696B812CA7F");

	UUI_Solder_Customization_Item_C_OnPlayFabResponse_487557984C86D004694AA696B812CA7F_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Solder_Customization_Item_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_Solder_Customization_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Solder_Customization_Item_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Solder_Customization_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Solder_Customization_Item_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UUI_Solder_Customization_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteCloudScript_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientExecuteCloudScriptResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_Item_C::ExecuteCloudScript_Success(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteCloudScript_Success");

	UUI_Solder_Customization_Item_C_ExecuteCloudScript_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteCloudScript_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_Item_C::ExecuteCloudScript_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteCloudScript_Failure");

	UUI_Solder_Customization_Item_C_ExecuteCloudScript_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteUbergraph_UI_Solder_Customization_Item
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_Item_C::ExecuteUbergraph_UI_Solder_Customization_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ExecuteUbergraph_UI_Solder_Customization_Item");

	UUI_Solder_Customization_Item_C_ExecuteUbergraph_UI_Solder_Customization_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.HoveredDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Item_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_Customization_Item_C::HoveredDelegate__DelegateSignature(class UUI_Solder_Customization_Item_C* Item, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.HoveredDelegate__DelegateSignature");

	UUI_Solder_Customization_Item_C_HoveredDelegate__DelegateSignature_Params params;
	params.Item = Item;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ClickDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Solder_Customization_Item_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_Item_C::ClickDelegate__DelegateSignature(class UUI_Solder_Customization_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_Item.UI_Solder_Customization_Item_C.ClickDelegate__DelegateSignature");

	UUI_Solder_Customization_Item_C_ClickDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
