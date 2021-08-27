#pragma once

// Name: Polygon, Version: 0.3.13.76


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Options.UI_Options_C.SetCurrentLanguageOption
struct UUI_Options_C_SetCurrentLanguageOption_Params
{
};

// Function UI_Options.UI_Options_C.SelectLanguage
struct UUI_Options_C_SelectLanguage_Params
{
	struct FString                                     Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.SetActiveOptionsMenu
struct UUI_Options_C_SetActiveOptionsMenu_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.SetGraphicsQuality
struct UUI_Options_C_SetGraphicsQuality_Params
{
	int                                                GeneralGraphicsQuality;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.Construct
struct UUI_Options_C_Construct_Params
{
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.VerticalSyncEvent
struct UUI_Options_C_VerticalSyncEvent_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ApplyChanges
struct UUI_Options_C_ApplyChanges_Params
{
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_ResolutionScale_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_ResolutionScale_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.OnChangedValue_Event
struct UUI_Options_C_OnChangedValue_Event_Params
{
	struct FString                                     Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeMasterVolume
struct UUI_Options_C_ChangeMasterVolume_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeMusicVolume
struct UUI_Options_C_ChangeMusicVolume_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeEffectsVolume
struct UUI_Options_C_ChangeEffectsVolume_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeGeneralQuality
struct UUI_Options_C_ChangeGeneralQuality_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeMouseSensitivity
struct UUI_Options_C_ChangeMouseSensitivity_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeInvertMouse
struct UUI_Options_C_ChangeInvertMouse_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
struct UUI_Options_C_BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeInputVolumetricFog
struct UUI_Options_C_ChangeInputVolumetricFog_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ChangeFOVEvent
struct UUI_Options_C_ChangeFOVEvent_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_FOV_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_FOV_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
struct UUI_Options_C_BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params
{
	class UUI_Button_C*                                Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ExecuteUbergraph_UI_Options
struct UUI_Options_C_ExecuteUbergraph_UI_Options_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Options.UI_Options_C.ClickBackDelegate__DelegateSignature
struct UUI_Options_C_ClickBackDelegate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
