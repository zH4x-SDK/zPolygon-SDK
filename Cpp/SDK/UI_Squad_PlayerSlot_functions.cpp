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

// Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Squad_PlayerSlot_C::SetPlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.SetPlayerName");

	UUI_Squad_PlayerSlot_C_SetPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Squad_PlayerSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.PreConstruct");

	UUI_Squad_PlayerSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Squad_PlayerSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Squad_PlayerSlot_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.ExecuteUbergraph_UI_Squad_PlayerSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Squad_PlayerSlot_C::ExecuteUbergraph_UI_Squad_PlayerSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.ExecuteUbergraph_UI_Squad_PlayerSlot");

	UUI_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Squad_PlayerSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.OnClickDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Squad_PlayerSlot_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Squad_PlayerSlot_C::OnClickDelegate__DelegateSignature(class UUI_Squad_PlayerSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad_PlayerSlot.UI_Squad_PlayerSlot_C.OnClickDelegate__DelegateSignature");

	UUI_Squad_PlayerSlot_C_OnClickDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
