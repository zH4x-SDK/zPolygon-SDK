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

// Function UI_ShopItem.UI_ShopItem_C.SetIsPurchased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPurchased                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ShopItem_C::SetIsPurchased(bool IsPurchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.SetIsPurchased");

	UUI_ShopItem_C_SetIsPurchased_Params params;
	params.IsPurchased = IsPurchased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.GetCatalogVersionByItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Catalog                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_ShopItem_C::GetCatalogVersionByItemType(struct FString* Catalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.GetCatalogVersionByItemType");

	UUI_ShopItem_C_GetCatalogVersionByItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Catalog != nullptr)
		*Catalog = params.Catalog;

}


// Function UI_ShopItem.UI_ShopItem_C.SetItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ShopItem_C::SetItemInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.SetItemInfo");

	UUI_ShopItem_C_SetItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.OnPlayFabResponse_09710F9A4237AB46170B1D960A630947
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ShopItem_C::OnPlayFabResponse_09710F9A4237AB46170B1D960A630947(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.OnPlayFabResponse_09710F9A4237AB46170B1D960A630947");

	UUI_ShopItem_C_OnPlayFabResponse_09710F9A4237AB46170B1D960A630947_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ShopItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.PreConstruct");

	UUI_ShopItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_ShopItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.OnMouseEnter");

	UUI_ShopItem_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_ShopItem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.OnMouseLeave");

	UUI_ShopItem_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.PurchaseItemSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientExecuteCloudScriptResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ShopItem_C::PurchaseItemSuccess(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.PurchaseItemSuccess");

	UUI_ShopItem_C_PurchaseItemSuccess_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.PurchaseItemFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ShopItem_C::PurchaseItemFailure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.PurchaseItemFailure");

	UUI_ShopItem_C_PurchaseItemFailure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ShopItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_ShopItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.ExecuteUbergraph_UI_ShopItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ShopItem_C::ExecuteUbergraph_UI_ShopItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.ExecuteUbergraph_UI_ShopItem");

	UUI_ShopItem_C_ExecuteUbergraph_UI_ShopItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShopItem.UI_ShopItem_C.IsHoveredDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ShopItem_C::IsHoveredDelegate__DelegateSignature(class UUI_ShopItem_C* Item, bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShopItem.UI_ShopItem_C.IsHoveredDelegate__DelegateSignature");

	UUI_ShopItem_C_IsHoveredDelegate__DelegateSignature_Params params;
	params.Item = Item;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
