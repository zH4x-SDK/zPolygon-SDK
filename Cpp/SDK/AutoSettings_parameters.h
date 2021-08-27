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

// Function AutoSettings.InputLabel.UpdateLabel
struct UInputLabel_UpdateLabel_Params
{
};

// Function AutoSettings.InputLabel.MappingsChanged
struct UInputLabel_MappingsChanged_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMapping.UpdateMapping
struct UInputMapping_UpdateMapping_Params
{
};

// Function AutoSettings.InputMapping.UpdateLabel
struct UInputMapping_UpdateLabel_Params
{
};

// Function AutoSettings.InputMapping.ChordCaptured
struct UInputMapping_ChordCaptured_Params
{
	struct FInputChord                                 InChord;                                                   // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMapping.BindChord
struct UInputMapping_BindChord_Params
{
	struct FInputChord                                 InChord;                                                   // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingsConfig.GetKeyGroupStatic
struct UAutoSettingsConfig_GetKeyGroupStatic_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingsConfig.GetKeyFriendlyNameStatic
struct UAutoSettingsConfig_GetKeyFriendlyNameStatic_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingsPlayer.SaveInputMappings
struct UAutoSettingsPlayer_SaveInputMappings_Params
{
	struct FPlayerInputMappings                        InputMappings;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingsPlayer.GetUniquePlayerIdentifier
struct UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingsPlayer.GetInputMappings
struct UAutoSettingsPlayer_GetInputMappings_Params
{
	struct FPlayerInputMappings                        InputMappings;                                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingsPlayer.GetDefaultInputMappingPreset
struct UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params
{
	struct FInputMappingPreset                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingWidget.UpdateSelection
struct UAutoSettingWidget_UpdateSelection_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingWidget.Save
struct UAutoSettingWidget_Save_Params
{
};

// Function AutoSettings.AutoSettingWidget.HasUnsavedChange
struct UAutoSettingWidget_HasUnsavedChange_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingWidget.HasUnappliedChange
struct UAutoSettingWidget_HasUnappliedChange_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingWidget.Cancel
struct UAutoSettingWidget_Cancel_Params
{
};

// Function AutoSettings.AutoSettingWidget.ApplySettingValue
struct UAutoSettingWidget_ApplySettingValue_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveIfPossible;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.AutoSettingWidget.Apply
struct UAutoSettingWidget_Apply_Params
{
};

// Function AutoSettings.BindCaptureButton.StartCapture
struct UBindCaptureButton_StartCapture_Params
{
	class UBindCapturePrompt*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.BindCaptureButton.InitializePrompt
struct UBindCaptureButton_InitializePrompt_Params
{
	class UBindCapturePrompt*                          PromptWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.BindCaptureButton.ChordCaptured
struct UBindCaptureButton_ChordCaptured_Params
{
	struct FInputChord                                 Chord;                                                     // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.BindCapturePrompt.IsKeyAllowed
struct UBindCapturePrompt_IsKeyAllowed_Params
{
	struct FKey                                        PrimaryKey;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.BindCapturePrompt.GetKeyGroup
struct UBindCapturePrompt_GetKeyGroup_Params
{
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.BindCapturePrompt.Cancel
struct UBindCapturePrompt_Cancel_Params
{
};

// Function AutoSettings.ToggleSetting.UpdateToggleState
struct UToggleSetting_UpdateToggleState_Params
{
	bool                                               State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ToggleSetting.ToggleStateUpdated
struct UToggleSetting_ToggleStateUpdated_Params
{
	bool                                               State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
struct UCheckBoxSetting_CheckBoxStateChanged_Params
{
	bool                                               IsChecked;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SelectSetting.UpdateOptions
struct USelectSetting_UpdateOptions_Params
{
	TArray<struct FSettingOption>                      InOptions;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SelectSetting.RegenerateOptions
struct USelectSetting_RegenerateOptions_Params
{
};

// Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
struct UComboBoxSetting_ComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.SetStringCVar
struct UConsoleUtils_SetStringCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.SetIntCVar
struct UConsoleUtils_SetIntCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.SetFloatCVar
struct UConsoleUtils_SetFloatCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.SetBoolCVar
struct UConsoleUtils_SetBoolCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.IsCVarRegistered
struct UConsoleUtils_IsCVarRegistered_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.GetStringCVar
struct UConsoleUtils_GetStringCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.GetIntCVar
struct UConsoleUtils_GetIntCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.GetFloatCVar
struct UConsoleUtils_GetFloatCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.ConsoleUtils.GetBoolCVar
struct UConsoleUtils_GetBoolCVar_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
struct UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
struct UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
struct UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
struct UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.GlobalKeyIconTagManager.SetGlobalKeyIconTags
struct UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params
{
	struct FGameplayTagContainer                       InGlobalIconTags;                                          // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.GlobalKeyIconTagManager.GetIconForKey
struct UGlobalKeyIconTagManager_GetIconForKey_Params
{
	struct FKey                                        InKey;                                                     // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IconTags;                                                  // (Parm, NativeAccessSpecifierPublic)
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.SetPlayerKeyGroupStatic
struct UInputMappingManager_SetPlayerKeyGroupStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                KeyGroup;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.SetPlayerInputPresetStatic
struct UInputMappingManager_SetPlayerInputPresetStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputMappingPreset                         Preset;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.SetPlayerInputPresetByTag
struct UInputMappingManager_SetPlayerInputPresetByTag_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PresetTag;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.OnRegisteredPlayerControllerDestroyed
struct UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.InitializePlayerInputOverridesStatic
struct UInputMappingManager_InitializePlayerInputOverridesStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.GetPlayerInputMappingsStatic
struct UInputMappingManager_GetPlayerInputMappingsStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerInputMappings                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.GetPlayerAxisMappingStatic
struct UInputMappingManager_GetPlayerAxisMappingStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AxisName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MappingGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.GetPlayerActionMappingStatic
struct UInputMappingManager_GetPlayerActionMappingStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MappingGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.GetDefaultInputPresets
struct UInputMappingManager_GetDefaultInputPresets_Params
{
	TArray<struct FInputMappingPreset>                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.AddPlayerAxisOverrideStatic
struct UInputMappingManager_AddPlayerAxisOverrideStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                        NewMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                MappingGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyKeyGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.AddPlayerAxisOverride
struct UInputMappingManager_AddPlayerAxisOverride_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                        NewMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                MappingGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyKeyGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.AddPlayerActionOverrideStatic
struct UInputMappingManager_AddPlayerActionOverrideStatic_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      NewMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                MappingGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyKeyGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.InputMappingManager.AddPlayerActionOverride
struct UInputMappingManager_AddPlayerActionOverride_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      NewMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                MappingGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyKeyGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.UpdateKeyLabel
struct UKeyLabel_UpdateKeyLabel_Params
{
};

// Function AutoSettings.KeyLabel.OnGlobalKeyIconTagsModified
struct UKeyLabel_OnGlobalKeyIconTagsModified_Params
{
};

// Function AutoSettings.KeyLabel.HasValidKey
struct UKeyLabel_HasValidKey_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.HasIcon
struct UKeyLabel_HasIcon_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.GetIconVisibility
struct UKeyLabel_GetIconVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.GetIconBrush
struct UKeyLabel_GetIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.GetIcon
struct UKeyLabel_GetIcon_Params
{
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.GetDisplayNameVisibility
struct UKeyLabel_GetDisplayNameVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.KeyLabel.GetDisplayName
struct UKeyLabel_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.UpdateSliderValue
struct USliderSetting_UpdateSliderValue_Params
{
	float                                              NormalizedValue;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.SliderValueUpdated
struct USliderSetting_SliderValueUpdated_Params
{
	float                                              NormalizedValue;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
struct USliderSetting_ShouldSaveCurrentValue_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.RawValueToNormalized
struct USliderSetting_RawValueToNormalized_Params
{
	float                                              RawValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.OnSliderValueUpdated
struct USliderSetting_OnSliderValueUpdated_Params
{
	float                                              NormalizedValue;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.NormalizedValueToRaw
struct USliderSetting_NormalizedValueToRaw_Params
{
	float                                              NormalizedValue;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SliderSetting.ClampRawValue
struct USliderSetting_ClampRawValue_Params
{
	float                                              RawValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.NativeSliderSetting.SliderValueChanged
struct UNativeSliderSetting_SliderValueChanged_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
struct UNativeSliderSetting_SliderMouseCaptureEnd_Params
{
};

// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
struct UNativeSliderSetting_SliderMouseCaptureBegin_Params
{
};

// Function AutoSettings.RadioButton.UpdateSelected
struct URadioButton_UpdateSelected_Params
{
	bool                                               InSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.UpdateLabel
struct URadioButton_UpdateLabel_Params
{
	struct FText                                       InLabel;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.TriggerSelection
struct URadioButton_TriggerSelection_Params
{
};

// Function AutoSettings.RadioButton.SetValue
struct URadioButton_SetValue_Params
{
	struct FString                                     InValue;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.SetSelected
struct URadioButton_SetSelected_Params
{
	bool                                               InSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.SetLabel
struct URadioButton_SetLabel_Params
{
	struct FText                                       InLabel;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.GetValue
struct URadioButton_GetValue_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.GetSelected
struct URadioButton_GetSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioButton.GetLabel
struct URadioButton_GetLabel_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelect.SetOptions
struct URadioSelect_SetOptions_Params
{
	TArray<struct FSettingOption>                      InOptions;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelect.Select
struct URadioSelect_Select_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelect.OnButtonCreated
struct URadioSelect_OnButtonCreated_Params
{
	class URadioButton*                                Button;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                                  NewSlot;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelect.GetRadioButtonWidgets
struct URadioSelect_GetRadioButtonWidgets_Params
{
	TArray<class URadioButton*>                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelect.GetOptions
struct URadioSelect_GetOptions_Params
{
	TArray<struct FSettingOption>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelect.ButtonSelected
struct URadioSelect_ButtonSelected_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
struct URadioSelectSetting_RadioSelectionChanged_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingOptionFactory.ConstructOptions
struct USettingOptionFactory_ConstructOptions_Params
{
	TArray<struct FSettingOption>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingValueMask.RecombineValues
struct USettingValueMask_RecombineValues_Params
{
	struct FString                                     SettingValue;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConsoleValue;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingValueMask.MaskValue
struct USettingValueMask_MaskValue_Params
{
	struct FString                                     ConsoleValue;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingContainerUtils.SaveChildSettings
struct USettingContainerUtils_SaveChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Parent;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingContainerUtils.GetChildSettings
struct USettingContainerUtils_GetChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Parent;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAutoSettingWidget*>                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
struct USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params
{
	class UUserWidget*                                 UserWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Parent;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
struct USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params
{
	class UUserWidget*                                 UserWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Parent;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingContainerUtils.CancelChildSettings
struct USettingContainerUtils_CancelChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Parent;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingContainerUtils.ApplyChildSettings
struct USettingContainerUtils_ApplyChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Parent;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.SaveSettingStatic
struct USettingsManager_SaveSettingStatic_Params
{
	struct FAutoSettingData                            SettingData;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
struct USettingsManager_RegisterStringCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultValue;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterStringCVarSetting
struct USettingsManager_RegisterStringCVarSetting_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultValue;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
struct USettingsManager_RegisterIntCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterIntCVarSetting
struct USettingsManager_RegisterIntCVarSetting_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
struct USettingsManager_RegisterFloatCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
struct USettingsManager_RegisterFloatCVarSetting_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
struct USettingsManager_RegisterBoolCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DefaultValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ChangedCallback;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CallbackImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
struct USettingsManager_RegisterBoolCVarSetting_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DefaultValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Help;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.GetValue
struct USettingsManager_GetValue_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreferConfigValue;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
struct USettingsManager_AutoDetectSettingsStatic_Params
{
	int                                                WorkScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CPUMultiplier;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GPUMultiplier;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SettingsManager.ApplySettingStatic
struct USettingsManager_ApplySettingStatic_Params
{
	struct FAutoSettingData                            SettingData;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.SelectValue
struct USpinner_SelectValue_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.SelectIndex
struct USpinner_SelectIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.Previous
struct USpinner_Previous_Params
{
};

// Function AutoSettings.Spinner.OnSelectionChanged
struct USpinner_OnSelectionChanged_Params
{
	struct FSettingOption                              SelectedOption;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.Next
struct USpinner_Next_Params
{
};

// Function AutoSettings.Spinner.HasValidPrevious
struct USpinner_HasValidPrevious_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.HasValidNext
struct USpinner_HasValidNext_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.GetCurrentOption
struct USpinner_GetCurrentOption_Params
{
	struct FSettingOption                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AutoSettings.Spinner.GetCurrentIndex
struct USpinner_GetCurrentIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
struct USpinnerSetting_SpinnerSelectionChanged_Params
{
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
