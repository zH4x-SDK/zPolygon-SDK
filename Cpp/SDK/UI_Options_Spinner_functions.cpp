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

// Function UI_Options_Spinner.UI_Options_Spinner_C.ApplyValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Options_Spinner_C::ApplyValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.ApplyValue");

	UUI_Options_Spinner_C_ApplyValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.GetValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 NewParam                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Options_Spinner_C::GetValue(struct FString* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.GetValue");

	UUI_Options_Spinner_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Options_Spinner_C::SetValue(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.SetValue");

	UUI_Options_Spinner_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.Next
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Options_Spinner_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.Next");

	UUI_Options_Spinner_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.Previous
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Options_Spinner_C::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.Previous");

	UUI_Options_Spinner_C_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Options_Spinner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.Construct");

	UUI_Options_Spinner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Options_Spinner_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Options_Spinner_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Options_Spinner_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_Options_Spinner_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.ExecuteUbergraph_UI_Options_Spinner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_Spinner_C::ExecuteUbergraph_UI_Options_Spinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.ExecuteUbergraph_UI_Options_Spinner");

	UUI_Options_Spinner_C_ExecuteUbergraph_UI_Options_Spinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options_Spinner.UI_Options_Spinner_C.OnChangedValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Options_Spinner_C::OnChangedValue__DelegateSignature(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options_Spinner.UI_Options_Spinner_C.OnChangedValue__DelegateSignature");

	UUI_Options_Spinner_C_OnChangedValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
