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

// Function UI_Options.UI_Options_C.SetCurrentLanguageOption
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Options_C::SetCurrentLanguageOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.SetCurrentLanguageOption");

	UUI_Options_C_SetCurrentLanguageOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.SelectLanguage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Options_C::SelectLanguage(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.SelectLanguage");

	UUI_Options_C_SelectLanguage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.SetActiveOptionsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::SetActiveOptionsMenu(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.SetActiveOptionsMenu");

	UUI_Options_C_SetActiveOptionsMenu_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.SetGraphicsQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GeneralGraphicsQuality         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::SetGraphicsQuality(int GeneralGraphicsQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.SetGraphicsQuality");

	UUI_Options_C_SetGraphicsQuality_Params params;
	params.GeneralGraphicsQuality = GeneralGraphicsQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Options_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.Construct");

	UUI_Options_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.VerticalSyncEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::VerticalSyncEvent(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.VerticalSyncEvent");

	UUI_Options_C_VerticalSyncEvent_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ApplyChanges
// (BlueprintCallable, BlueprintEvent)
void UUI_Options_C::ApplyChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ApplyChanges");

	UUI_Options_C_ApplyChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_ResolutionScale_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_ResolutionScale_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_ResolutionScale_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_ResolutionScale_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.OnChangedValue_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Options_C::OnChangedValue_Event(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.OnChangedValue_Event");

	UUI_Options_C_OnChangedValue_Event_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeMasterVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeMasterVolume(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeMasterVolume");

	UUI_Options_C_ChangeMasterVolume_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeMusicVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeMusicVolume(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeMusicVolume");

	UUI_Options_C_ChangeMusicVolume_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeEffectsVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeEffectsVolume(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeEffectsVolume");

	UUI_Options_C_ChangeEffectsVolume_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeGeneralQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeGeneralQuality(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeGeneralQuality");

	UUI_Options_C_ChangeGeneralQuality_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeMouseSensitivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeMouseSensitivity(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeMouseSensitivity");

	UUI_Options_C_ChangeMouseSensitivity_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeInvertMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeInvertMouse(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeInvertMouse");

	UUI_Options_C_ChangeInvertMouse_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");

	UUI_Options_C_BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeInputVolumetricFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeInputVolumetricFog(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeInputVolumetricFog");

	UUI_Options_C_ChangeInputVolumetricFog_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ChangeFOVEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ChangeFOVEvent(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ChangeFOVEvent");

	UUI_Options_C_ChangeFOVEvent_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_FOV_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_FOV_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_FOV_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_FOV_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature");

	UUI_Options_C_BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ExecuteUbergraph_UI_Options
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_C::ExecuteUbergraph_UI_Options(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ExecuteUbergraph_UI_Options");

	UUI_Options_C_ExecuteUbergraph_UI_Options_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Options.UI_Options_C.ClickBackDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_Options_C::ClickBackDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Options.UI_Options_C.ClickBackDelegate__DelegateSignature");

	UUI_Options_C_ClickBackDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
