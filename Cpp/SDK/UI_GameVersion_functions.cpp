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

// Function UI_GameVersion.UI_GameVersion_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GameVersion_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameVersion.UI_GameVersion_C.Construct");

	UUI_GameVersion_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameVersion.UI_GameVersion_C.SetPlayerPosition
// (BlueprintCallable, BlueprintEvent)
void UUI_GameVersion_C::SetPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameVersion.UI_GameVersion_C.SetPlayerPosition");

	UUI_GameVersion_C_SetPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameVersion.UI_GameVersion_C.ExecuteUbergraph_UI_GameVersion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameVersion_C::ExecuteUbergraph_UI_GameVersion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameVersion.UI_GameVersion_C.ExecuteUbergraph_UI_GameVersion");

	UUI_GameVersion_C_ExecuteUbergraph_UI_GameVersion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
