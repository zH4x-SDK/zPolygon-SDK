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

// Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.ConvertWorldPositionToMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector2D UUI_GameMenu_Map_PlayerIcon_C::ConvertWorldPositionToMap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.ConvertWorldPositionToMap");

	UUI_GameMenu_Map_PlayerIcon_C_ConvertWorldPositionToMap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GameMenu_Map_PlayerIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.Construct");

	UUI_GameMenu_Map_PlayerIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.SetPosition
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_Map_PlayerIcon_C::SetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.SetPosition");

	UUI_GameMenu_Map_PlayerIcon_C_SetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.ExecuteUbergraph_UI_GameMenu_Map_PlayerIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_PlayerIcon_C::ExecuteUbergraph_UI_GameMenu_Map_PlayerIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_PlayerIcon.UI_GameMenu_Map_PlayerIcon_C.ExecuteUbergraph_UI_GameMenu_Map_PlayerIcon");

	UUI_GameMenu_Map_PlayerIcon_C_ExecuteUbergraph_UI_GameMenu_Map_PlayerIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
