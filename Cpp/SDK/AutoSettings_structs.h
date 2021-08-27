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
// Enums
//---------------------------------------------------------------------------

// Enum AutoSettings.EBindingCaptureMode
enum class AutoSettings_EBindingCaptureMode : uint8_t
{
	EBindingCaptureMode__OnReleased = 0,
	EBindingCaptureMode__OnPressed = 1,
	EBindingCaptureMode__EBindingCaptureMode_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutoSettings.ConfigActionKeyMapping
// 0x0000 (0x0028 - 0x0028)
struct FConfigActionKeyMapping : public FInputActionKeyMapping
{

};

// ScriptStruct AutoSettings.ConfigAxisKeyMapping
// 0x0000 (0x0028 - 0x0028)
struct FConfigAxisKeyMapping : public FInputAxisKeyMapping
{

};

// ScriptStruct AutoSettings.MappingGroupLink
// 0x0010
struct FMappingGroupLink
{
	TArray<int>                                        MappingGroups;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.KeyScale
// 0x0020
struct FKeyScale
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HA38[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AutoSettings.AxisAssociation
// 0x0050
struct FAxisAssociation
{
	struct FKey                                        AxisKey;                                                   // 0x0000(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        AnalogKey;                                                 // 0x0018(0x0018) (Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyScale>                           ButtonKeys;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyScale>                           BooleanKeys;                                               // 0x0040(0x0010) (ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.SettingOption
// 0x0028
struct FSettingOption
{
	struct FText                                       Label;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.InputMappingGroup
// 0x0040
struct FInputMappingGroup
{
	TArray<struct FConfigActionKeyMapping>             ActionMappings;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigAxisKeyMapping>               AxisMappings;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigActionKeyMapping>             UnboundActionMappings;                                     // 0x0020(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigAxisKeyMapping>               UnboundAxisMappings;                                       // 0x0030(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.InputMappingLayout
// 0x0010
struct FInputMappingLayout
{
	TArray<struct FInputMappingGroup>                  MappingGroups;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.InputMappingPreset
// 0x0030
struct FInputMappingPreset
{
	struct FGameplayTag                                PresetTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseDefaultMappings;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KOT[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputMappingLayout                         InputLayout;                                               // 0x0010(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingGroup>                  MappingGroups;                                             // 0x0020(0x0010) (ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.KeyIconPair
// 0x0020
struct FKeyIconPair
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Icon;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.KeyIconSet
// 0x0030
struct FKeyIconSet
{
	struct FGameplayTagContainer                       Tags;                                                      // 0x0000(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyIconPair>                        Icons;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.KeyFriendlyName
// 0x0030
struct FKeyFriendlyName
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       FriendlyName;                                              // 0x0018(0x0018) (Edit, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.KeyGroup
// 0x0020
struct FKeyGroup
{
	struct FGameplayTag                                KeyGroupTag;                                               // 0x0000(0x0008) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGamepadKeys;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseNonGamepadKeys;                                        // 0x0009(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J8AR[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                Keys;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.PlayerInputMappings
// 0x0070
struct FPlayerInputMappings
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                BasePresetTag;                                             // 0x0014(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZBP[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputMappingLayout                         MappingOverrides;                                          // 0x0020(0x0010) (NativeAccessSpecifierPublic)
	bool                                               Custom;                                                    // 0x0030(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWB6[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputMappingPreset                         Preset;                                                    // 0x0038(0x0030) (Deprecated, NativeAccessSpecifierPublic)
	struct FGameplayTag                                PlayerKeyGroup;                                            // 0x0068(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutoSettings.AutoSettingData
// 0x0038
struct FAutoSettingData
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // 0x0018(0x0020) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
