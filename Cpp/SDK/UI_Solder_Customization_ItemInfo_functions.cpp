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

// Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.ResetInfo
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Solder_Customization_ItemInfo_C::ResetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.ResetInfo");

	UUI_Solder_Customization_ItemInfo_C_ResetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.SetItemInfoAsWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Solder_Customization_ItemInfo_C::SetItemInfoAsWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.SetItemInfoAsWeapon");

	UUI_Solder_Customization_ItemInfo_C_SetItemInfoAsWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.SetItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_ItemInfo_C::SetItemInfo(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.SetItemInfo");

	UUI_Solder_Customization_ItemInfo_C_SetItemInfo_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Solder_Customization_ItemInfo_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.PreConstruct");

	UUI_Solder_Customization_ItemInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.ExecuteUbergraph_UI_Solder_Customization_ItemInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_Customization_ItemInfo_C::ExecuteUbergraph_UI_Solder_Customization_ItemInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder_Customization_ItemInfo.UI_Solder_Customization_ItemInfo_C.ExecuteUbergraph_UI_Solder_Customization_ItemInfo");

	UUI_Solder_Customization_ItemInfo_C_ExecuteUbergraph_UI_Solder_Customization_ItemInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
