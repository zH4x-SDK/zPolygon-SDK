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

// Function UI_UpgradeLevelOfPlayer.UI_UpgradeLevelOfPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_UpgradeLevelOfPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UpgradeLevelOfPlayer.UI_UpgradeLevelOfPlayer_C.Construct");

	UUI_UpgradeLevelOfPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_UpgradeLevelOfPlayer.UI_UpgradeLevelOfPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_UpgradeLevelOfPlayer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UpgradeLevelOfPlayer.UI_UpgradeLevelOfPlayer_C.PreConstruct");

	UUI_UpgradeLevelOfPlayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_UpgradeLevelOfPlayer.UI_UpgradeLevelOfPlayer_C.ExecuteUbergraph_UI_UpgradeLevelOfPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_UpgradeLevelOfPlayer_C::ExecuteUbergraph_UI_UpgradeLevelOfPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UpgradeLevelOfPlayer.UI_UpgradeLevelOfPlayer_C.ExecuteUbergraph_UI_UpgradeLevelOfPlayer");

	UUI_UpgradeLevelOfPlayer_C_ExecuteUbergraph_UI_UpgradeLevelOfPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
