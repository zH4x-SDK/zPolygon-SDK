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
// Classes
//---------------------------------------------------------------------------

// Class AutoSettings.InputLabel
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UInputLabel : public UUserWidget
{
public:
	int                                                MappingGroup;                                              // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                KeyGroup;                                                  // 0x0264(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePlayerKeyGroup;                                        // 0x026C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O503[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       IconTags;                                                  // 0x0270(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.InputLabel");
		return ptr;
	}



	void UpdateLabel();
	void MappingsChanged(class APlayerController* Player);
};

// Class AutoSettings.ActionLabel
// 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
class UActionLabel : public UInputLabel
{
public:
	struct FName                                       ActionName;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      KeyLabelWidgetClass;                                       // 0x0298(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      KeySeparatorWidgetClass;                                   // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                                KeyContainer;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKeyLabel*                                   PrimaryKeyLabel;                                           // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                                   ShiftLabel;                                                // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                                   CtrlLabel;                                                 // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                                   AltLabel;                                                  // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                                   CmdLabel;                                                  // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     ShiftSeparator;                                            // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     CtrlSeparator;                                             // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     AltSeparator;                                              // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     CmdSeparator;                                              // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ActionLabel");
		return ptr;
	}



};

// Class AutoSettings.InputMapping
// 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
class UInputMapping : public UUserWidget
{
public:
	int                                                MappingGroup;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                                KeyGroup;                                                  // 0x0264(0x0008) (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AYJX[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       IconTags;                                                  // 0x0270(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UBindCaptureButton*                          BindCaptureButton;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.InputMapping");
		return ptr;
	}



	void UpdateMapping();
	void UpdateLabel();
	void ChordCaptured(const struct FInputChord& InChord);
	void BindChord(const struct FInputChord& InChord);
};

// Class AutoSettings.ActionMapping
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UActionMapping : public UInputMapping
{
public:
	struct FName                                       ActionName;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActionLabel*                                ActionLabel;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ActionMapping");
		return ptr;
	}



};

// Class AutoSettings.AutoSettingsConfig
// 0x0168 (FullSize[0x01A0] - InheritedSize[0x0038])
class UAutoSettingsConfig : public UDeveloperSettings
{
public:
	struct FString                                     SettingsIniName;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SettingsSectionName;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoInitializePlayerInputOverrides;                       // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowModifierKeys;                                         // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X76I[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ShiftModifierOverrideText;                                 // 0x0060(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FText                                       CtrlModifierOverrideText;                                  // 0x0078(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FText                                       AltModifierOverrideText;                                   // 0x0090(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FText                                       CmdModifierOverrideText;                                   // 0x00A8(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingPreset>                 InputPresets;                                              // 0x00C0(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               AllowMultipleBindingsPerKey;                               // 0x00D0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ODC[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMappingGroupLink>                   MappingGroupLinks;                                         // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PreservedActions;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PreservedAxes;                                             // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyIconSet>                         KeyIconSets;                                               // 0x0108(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyFriendlyName>                    KeyFriendlyNames;                                          // 0x0118(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyGroup>                           KeyGroups;                                                 // 0x0128(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                AllowedKeys;                                               // 0x0138(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                DisallowedKeys;                                            // 0x0148(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                BindingEscapeKeys;                                         // 0x0158(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                              MouseMoveCaptureDistance;                                  // 0x0168(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMRR[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAxisAssociation>                    AxisAssociations;                                          // 0x0170(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FName>                               BlacklistedActions;                                        // 0x0180(0x0010) (ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               BlacklistedAxes;                                           // 0x0190(0x0010) (ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AutoSettingsConfig");
		return ptr;
	}



	struct FGameplayTag STATIC_GetKeyGroupStatic(const struct FKey& Key);
	struct FText STATIC_GetKeyFriendlyNameStatic(const struct FKey& Key);
};

// Class AutoSettings.AutoSettingsInputSubsystem
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_W6ND[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AutoSettingsInputSubsystem");
		return ptr;
	}



};

// Class AutoSettings.AutoSettingsPlayer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAutoSettingsPlayer : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AutoSettingsPlayer");
		return ptr;
	}



	void SaveInputMappings(const struct FPlayerInputMappings& InputMappings);
	struct FString GetUniquePlayerIdentifier();
	bool GetInputMappings(struct FPlayerInputMappings* InputMappings);
	struct FInputMappingPreset GetDefaultInputMappingPreset();
};

// Class AutoSettings.AutoSettingsValidationSubsystem
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAutoSettingsValidationSubsystem : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AutoSettingsValidationSubsystem");
		return ptr;
	}



};

// Class AutoSettings.AutoSettingWidget
// 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
class UAutoSettingWidget : public UUserWidget
{
public:
	struct FName                                       CVarName;                                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ValueMask;                                                 // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSave;                                                 // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoApply;                                                // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHG9[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       SettingTags;                                               // 0x0278(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     CurrentValue;                                              // 0x0298(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasUnappliedChange;                                       // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasUnsavedChange;                                         // 0x02A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUpdatingSettingSelection;                                 // 0x02AA(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_77XL[0x5];                                     // 0x02AB(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AutoSettingWidget");
		return ptr;
	}



	void UpdateSelection(const struct FString& Value);
	void Save();
	bool HasUnsavedChange();
	bool HasUnappliedChange();
	void Cancel();
	void ApplySettingValue(const struct FString& Value, bool bSaveIfPossible);
	void Apply();
};

// Class AutoSettings.AxisLabel
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
class UAxisLabel : public UInputLabel
{
public:
	struct FName                                       AxisName;                                                  // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1WSP[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKeyLabel*                                   KeyLabel;                                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AxisLabel");
		return ptr;
	}



};

// Class AutoSettings.AxisMapping
// 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
class UAxisMapping : public UInputMapping
{
public:
	struct FName                                       AxisName;                                                  // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O7QA[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAxisLabel*                                  AxisLabel;                                                 // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.AxisMapping");
		return ptr;
	}



};

// Class AutoSettings.BindCaptureButton
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UBindCaptureButton : public UUserWidget
{
public:
	struct FGameplayTag                                KeyGroup;                                                  // 0x0260(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BindCapturePromptClass;                                    // 0x0268(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CapturePromptZOrder;                                       // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IHBU[0x14];                                    // 0x0274(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBindCapturePrompt*                          Prompt;                                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.BindCaptureButton");
		return ptr;
	}



	class UBindCapturePrompt* StartCapture();
	void InitializePrompt(class UBindCapturePrompt* PromptWidget);
	void ChordCaptured(const struct FInputChord& Chord);
};

// Class AutoSettings.BindCapturePrompt
// 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
class UBindCapturePrompt : public UUserWidget
{
public:
	bool                                               bIgnoreGameViewportInputWhileCapturing;                    // 0x0260(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictKeyGroup;                                         // 0x0261(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AutoSettings_EBindingCaptureMode                   CaptureMode;                                               // 0x0262(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97PT[0x1];                                     // 0x0263(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                KeyGroup;                                                  // 0x0264(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EO0J[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnChordCaptured;                                           // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChordRejected;                                           // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCapturePromptClosed;                                     // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                KeysDown;                                                  // 0x02A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               PreviousIgnoreInput;                                       // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NCE0[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   AccumulatedMouseDelta;                                     // 0x02B4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UTV6[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.BindCapturePrompt");
		return ptr;
	}



	bool IsKeyAllowed(const struct FKey& PrimaryKey);
	struct FGameplayTag GetKeyGroup();
	void Cancel();
};

// Class AutoSettings.ToggleSetting
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class UToggleSetting : public UAutoSettingWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ToggleSetting");
		return ptr;
	}



	void UpdateToggleState(bool State);
	void ToggleStateUpdated(bool State);
};

// Class AutoSettings.CheckBoxSetting
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UCheckBoxSetting : public UToggleSetting
{
public:
	class UCheckBox*                                   CheckBox;                                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.CheckBoxSetting");
		return ptr;
	}



	void CheckBoxStateChanged(bool IsChecked);
};

// Class AutoSettings.SelectSetting
// 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
class USelectSetting : public UAutoSettingWidget
{
public:
	TArray<struct FSettingOption>                      Options;                                                   // 0x02B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      OptionFactory;                                             // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdatingSettingOptions;                                   // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5FXN[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SelectSetting");
		return ptr;
	}



	void UpdateOptions(TArray<struct FSettingOption> InOptions);
	void RegenerateOptions();
};

// Class AutoSettings.ComboBoxSetting
// 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
class UComboBoxSetting : public USelectSetting
{
public:
	class UComboBoxString*                             ComboBox;                                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ComboBoxSetting");
		return ptr;
	}



	void ComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
};

// Class AutoSettings.ConsoleUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UConsoleUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ConsoleUtils");
		return ptr;
	}



	void STATIC_SetStringCVar(const struct FName& Name, const struct FString& Value);
	void STATIC_SetIntCVar(const struct FName& Name, int Value);
	void STATIC_SetFloatCVar(const struct FName& Name, float Value);
	void STATIC_SetBoolCVar(const struct FName& Name, bool Value);
	bool STATIC_IsCVarRegistered(const struct FName& Name);
	struct FString STATIC_GetStringCVar(const struct FName& Name);
	int STATIC_GetIntCVar(const struct FName& Name);
	float STATIC_GetFloatCVar(const struct FName& Name);
	bool STATIC_GetBoolCVar(const struct FName& Name);
};

// Class AutoSettings.CVarChangeListener
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UCVarChangeListener : public UObject
{
public:
	unsigned char                                      UnknownData_8ZIT[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.CVarChangeListener");
		return ptr;
	}



};

// Class AutoSettings.CVarChangeListenerManager
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UCVarChangeListenerManager : public UObject
{
public:
	TMap<struct FName, class UCVarChangeListener*>     Listeners;                                                 // 0x0028(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.CVarChangeListenerManager");
		return ptr;
	}



	void STATIC_AddStringCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_AddIntCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_AddFloatCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_AddBoolCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
};

// Class AutoSettings.GlobalKeyIconTagManager
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UGlobalKeyIconTagManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnGlobalKeyIconTagsModified;                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GlobalKeyIconTags;                                         // 0x0038(0x0020) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.GlobalKeyIconTagManager");
		return ptr;
	}



	void STATIC_SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags);
	class UTexture* STATIC_GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags);
};

// Class AutoSettings.InputMappingManager
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UInputMappingManager : public UObject
{
public:
	unsigned char                                      UnknownData_SFW0[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerInputMappings>                PlayerInputOverrides;                                      // 0x0038(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class APlayerController*>                   RegisteredPlayerControllers;                               // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.InputMappingManager");
		return ptr;
	}



	void STATIC_SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup);
	void STATIC_SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset);
	void STATIC_SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag);
	void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);
	bool STATIC_InitializePlayerInputOverridesStatic(class APlayerController* Player);
	struct FPlayerInputMappings STATIC_GetPlayerInputMappingsStatic(class APlayerController* Player);
	struct FInputAxisKeyMapping STATIC_GetPlayerAxisMappingStatic(class APlayerController* Player, const struct FName& AxisName, float Scale, int MappingGroup);
	struct FInputActionKeyMapping STATIC_GetPlayerActionMappingStatic(class APlayerController* Player, const struct FName& ActionName, int MappingGroup);
	TArray<struct FInputMappingPreset> STATIC_GetDefaultInputPresets();
	void STATIC_AddPlayerAxisOverrideStatic(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup);
	void AddPlayerAxisOverride(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup);
	void STATIC_AddPlayerActionOverrideStatic(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverride(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup);
};

// Class AutoSettings.KeyLabel
// 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
class UKeyLabel : public UUserWidget
{
public:
	struct FText                                       KeyInvalidText;                                            // 0x0260(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       LabelOverride;                                             // 0x0278(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IconTags;                                                  // 0x02A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.KeyLabel");
		return ptr;
	}



	void UpdateKeyLabel();
	void OnGlobalKeyIconTagsModified();
	bool HasValidKey();
	bool HasIcon();
	UMG_ESlateVisibility GetIconVisibility();
	struct FSlateBrush GetIconBrush();
	class UTexture* GetIcon();
	UMG_ESlateVisibility GetDisplayNameVisibility();
	struct FText GetDisplayName();
};

// Class AutoSettings.SliderSetting
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class USliderSetting : public UAutoSettingWidget
{
public:
	float                                              LeftValue;                                                 // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightValue;                                                // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SliderSetting");
		return ptr;
	}



	void UpdateSliderValue(float NormalizedValue, float RawValue);
	void SliderValueUpdated(float NormalizedValue);
	bool ShouldSaveCurrentValue();
	float RawValueToNormalized(float RawValue);
	void OnSliderValueUpdated(float NormalizedValue, float RawValue);
	float NormalizedValueToRaw(float NormalizedValue);
	float ClampRawValue(float RawValue);
};

// Class AutoSettings.NativeSliderSetting
// 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
class UNativeSliderSetting : public USliderSetting
{
public:
	class USlider*                                     Slider;                                                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMouseCaptureInProgress;                                   // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_39XG[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.NativeSliderSetting");
		return ptr;
	}



	void SliderValueChanged(float NewValue);
	void SliderMouseCaptureEnd();
	void SliderMouseCaptureBegin();
};

// Class AutoSettings.RadioButton
// 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
class URadioButton : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelected;                                                // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                     // 0x0270(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FString                                     Value;                                                     // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Selected;                                                  // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QNCZ[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.RadioButton");
		return ptr;
	}



	void UpdateSelected(bool InSelected);
	void UpdateLabel(const struct FText& InLabel);
	void TriggerSelection();
	void SetValue(const struct FString& InValue);
	void SetSelected(bool InSelected);
	void SetLabel(const struct FText& InLabel);
	struct FString GetValue();
	bool GetSelected();
	struct FText GetLabel();
};

// Class AutoSettings.RadioSelect
// 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
class URadioSelect : public UUserWidget
{
public:
	TArray<struct FSettingOption>                      Options;                                                   // 0x0260(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      RadioButtonClass;                                          // 0x0270(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SelectionChangedEvent;                                     // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPanelWidget*                                ButtonContainer;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URadioButton*>                        RadioButtons;                                              // 0x0290(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.RadioSelect");
		return ptr;
	}



	void SetOptions(TArray<struct FSettingOption> InOptions);
	void Select(const struct FString& Value);
	void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
	TArray<class URadioButton*> GetRadioButtonWidgets();
	TArray<struct FSettingOption> GetOptions();
	void ButtonSelected(const struct FString& Value);
};

// Class AutoSettings.RadioSelectSetting
// 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
class URadioSelectSetting : public USelectSetting
{
public:
	class UClass*                                      RadioButtonClass;                                          // 0x02D0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioSelect*                                RadioSelect;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.RadioSelectSetting");
		return ptr;
	}



	void RadioSelectionChanged(const struct FString& Value);
};

// Class AutoSettings.SettingOptionFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USettingOptionFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SettingOptionFactory");
		return ptr;
	}



	TArray<struct FSettingOption> ConstructOptions();
};

// Class AutoSettings.ResolutionOptionFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UResolutionOptionFactory : public USettingOptionFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ResolutionOptionFactory");
		return ptr;
	}



};

// Class AutoSettings.ResolutionStringUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UResolutionStringUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ResolutionStringUtils");
		return ptr;
	}



};

// Class AutoSettings.SettingValueMask
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USettingValueMask : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SettingValueMask");
		return ptr;
	}



	struct FString RecombineValues(const struct FString& SettingValue, const struct FString& ConsoleValue);
	struct FString MaskValue(const struct FString& ConsoleValue);
};

// Class AutoSettings.ResolutionValueMask
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UResolutionValueMask : public USettingValueMask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.ResolutionValueMask");
		return ptr;
	}



};

// Class AutoSettings.SettingContainerUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USettingContainerUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SettingContainerUtils");
		return ptr;
	}



	void STATIC_SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
	TArray<class UAutoSettingWidget*> STATIC_GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
	bool STATIC_DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);
	bool STATIC_DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);
	void STATIC_CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
	void STATIC_ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
};

// Class AutoSettings.SettingsManager
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USettingsManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSettingSaved;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     IniFilename;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SettingsManager");
		return ptr;
	}



	void STATIC_SaveSettingStatic(const struct FAutoSettingData& SettingData);
	void STATIC_RegisterStringCVarSettingWithCallback(const struct FName& Name, const struct FString& DefaultValue, const struct FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_RegisterStringCVarSetting(const struct FName& Name, const struct FString& DefaultValue, const struct FString& Help);
	void STATIC_RegisterIntCVarSettingWithCallback(const struct FName& Name, int DefaultValue, const struct FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_RegisterIntCVarSetting(const struct FName& Name, int DefaultValue, const struct FString& Help);
	void STATIC_RegisterFloatCVarSettingWithCallback(const struct FName& Name, float DefaultValue, const struct FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_RegisterFloatCVarSetting(const struct FName& Name, float DefaultValue, const struct FString& Help);
	void STATIC_RegisterBoolCVarSettingWithCallback(const struct FName& Name, bool DefaultValue, const struct FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately);
	void STATIC_RegisterBoolCVarSetting(const struct FName& Name, bool DefaultValue, const struct FString& Help);
	struct FString STATIC_GetValue(const struct FName& Key, bool bPreferConfigValue);
	void STATIC_AutoDetectSettingsStatic(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	void STATIC_ApplySettingStatic(const struct FAutoSettingData& SettingData);
};

// Class AutoSettings.Spinner
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class USpinner : public UUserWidget
{
public:
	TArray<struct FSettingOption>                      Options;                                                   // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bAllowWrapping;                                            // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ZBH[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SelectionChangedEvent;                                     // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2Q6K[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.Spinner");
		return ptr;
	}



	void SelectValue(const struct FString& Value);
	void SelectIndex(int Index);
	void Previous();
	void OnSelectionChanged(const struct FSettingOption& SelectedOption);
	void Next();
	bool HasValidPrevious();
	bool HasValidNext();
	struct FSettingOption GetCurrentOption();
	int GetCurrentIndex();
};

// Class AutoSettings.SpinnerSetting
// 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
class USpinnerSetting : public USelectSetting
{
public:
	class USpinner*                                    Spinner;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.SpinnerSetting");
		return ptr;
	}



	void SpinnerSelectionChanged(const struct FString& Value);
};

// Class AutoSettings.WindowModeValueMask
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWindowModeValueMask : public USettingValueMask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AutoSettings.WindowModeValueMask");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
