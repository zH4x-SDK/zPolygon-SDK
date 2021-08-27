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

// Function UI_Squad.UI_Squad_C.SetNameMyPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Squad_C::SetNameMyPlayer(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.SetNameMyPlayer");

	UUI_Squad_C_SetNameMyPlayer_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.BndEvt__Button_Ready_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Squad_C::BndEvt__Button_Ready_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.BndEvt__Button_Ready_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_Squad_C_BndEvt__Button_Ready_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Squad_C::BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_Squad_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.BndEvt__UI_Squad_PlayerSlot_1_K2Node_ComponentBoundEvent_0_OnClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Squad_PlayerSlot_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Squad_C::BndEvt__UI_Squad_PlayerSlot_1_K2Node_ComponentBoundEvent_0_OnClickDelegate__DelegateSignature(class UUI_Squad_PlayerSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.BndEvt__UI_Squad_PlayerSlot_1_K2Node_ComponentBoundEvent_0_OnClickDelegate__DelegateSignature");

	UUI_Squad_C_BndEvt__UI_Squad_PlayerSlot_1_K2Node_ComponentBoundEvent_0_OnClickDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.BndEvt__UI_Squad_PlayerSlot_2_K2Node_ComponentBoundEvent_1_OnClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Squad_PlayerSlot_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Squad_C::BndEvt__UI_Squad_PlayerSlot_2_K2Node_ComponentBoundEvent_1_OnClickDelegate__DelegateSignature(class UUI_Squad_PlayerSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.BndEvt__UI_Squad_PlayerSlot_2_K2Node_ComponentBoundEvent_1_OnClickDelegate__DelegateSignature");

	UUI_Squad_C_BndEvt__UI_Squad_PlayerSlot_2_K2Node_ComponentBoundEvent_1_OnClickDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.BndEvt__UI_Squad_PlayerSlot_3_K2Node_ComponentBoundEvent_6_OnClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Squad_PlayerSlot_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Squad_C::BndEvt__UI_Squad_PlayerSlot_3_K2Node_ComponentBoundEvent_6_OnClickDelegate__DelegateSignature(class UUI_Squad_PlayerSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.BndEvt__UI_Squad_PlayerSlot_3_K2Node_ComponentBoundEvent_6_OnClickDelegate__DelegateSignature");

	UUI_Squad_C_BndEvt__UI_Squad_PlayerSlot_3_K2Node_ComponentBoundEvent_6_OnClickDelegate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Squad_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.PreConstruct");

	UUI_Squad_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.BndEvt__Button_CreateSquad_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Squad_C::BndEvt__Button_CreateSquad_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.BndEvt__Button_CreateSquad_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_Squad_C_BndEvt__Button_CreateSquad_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Squad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.Construct");

	UUI_Squad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Squad_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.Destruct");

	UUI_Squad_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Squad.UI_Squad_C.ExecuteUbergraph_UI_Squad
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Squad_C::ExecuteUbergraph_UI_Squad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Squad.UI_Squad_C.ExecuteUbergraph_UI_Squad");

	UUI_Squad_C_ExecuteUbergraph_UI_Squad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
