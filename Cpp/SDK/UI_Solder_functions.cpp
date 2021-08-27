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

// Function UI_Solder.UI_Solder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Solder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder.UI_Solder_C.Construct");

	UUI_Solder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder.UI_Solder_C.OnPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_C::OnPressed_Event(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder.UI_Solder_C.OnPressed_Event");

	UUI_Solder_C_OnPressed_Event_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder.UI_Solder_C.BndEvt__UI_Button_Customization_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_C::BndEvt__UI_Button_Customization_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder.UI_Solder_C.BndEvt__UI_Button_Customization_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UUI_Solder_C_BndEvt__UI_Button_Customization_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder.UI_Solder_C.BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_C::BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder.UI_Solder_C.BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UUI_Solder_C_BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Solder.UI_Solder_C.ExecuteUbergraph_UI_Solder
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Solder_C::ExecuteUbergraph_UI_Solder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Solder.UI_Solder_C.ExecuteUbergraph_UI_Solder");

	UUI_Solder_C_ExecuteUbergraph_UI_Solder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
