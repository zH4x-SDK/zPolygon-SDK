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

// Function UI_EscapeMenu.UI_EscapeMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_EscapeMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.OnKeyDown");

	UUI_EscapeMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_EscapeMenu.UI_EscapeMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_EscapeMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.PreConstruct");

	UUI_EscapeMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EscapeMenu.UI_EscapeMenu_C.Back
// (BlueprintCallable, BlueprintEvent)
void UUI_EscapeMenu_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.Back");

	UUI_EscapeMenu_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EscapeMenu_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UUI_EscapeMenu_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Button_Resume_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EscapeMenu_C::BndEvt__UI_Button_Resume_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Button_Resume_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UUI_EscapeMenu_C_BndEvt__UI_Button_Resume_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Button_Quit_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EscapeMenu_C::BndEvt__UI_Button_Quit_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Button_Quit_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	UUI_EscapeMenu_C_BndEvt__UI_Button_Quit_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_0_ClickBackDelegate__DelegateSignature
// (BlueprintEvent)
void UUI_EscapeMenu_C::BndEvt__UI_Options_K2Node_ComponentBoundEvent_0_ClickBackDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_0_ClickBackDelegate__DelegateSignature");

	UUI_EscapeMenu_C_BndEvt__UI_Options_K2Node_ComponentBoundEvent_0_ClickBackDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EscapeMenu.UI_EscapeMenu_C.ExecuteUbergraph_UI_EscapeMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EscapeMenu_C::ExecuteUbergraph_UI_EscapeMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EscapeMenu.UI_EscapeMenu_C.ExecuteUbergraph_UI_EscapeMenu");

	UUI_EscapeMenu_C_ExecuteUbergraph_UI_EscapeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
