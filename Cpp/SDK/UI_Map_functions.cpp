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

// Function UI_Map.UI_Map_C.ConvertCharacterPositionToMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_C::ConvertCharacterPositionToMap(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map.UI_Map_C.ConvertCharacterPositionToMap");

	UUI_Map_C_ConvertCharacterPositionToMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function UI_Map.UI_Map_C.AddOtherPlayerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_C::AddOtherPlayerIcon(class APawn* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map.UI_Map_C.AddOtherPlayerIcon");

	UUI_Map_C_AddOtherPlayerIcon_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map.UI_Map_C.AddOtherIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_C::AddOtherIcon(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map.UI_Map_C.AddOtherIcon");

	UUI_Map_C_AddOtherIcon_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map.UI_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Map_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map.UI_Map_C.Construct");

	UUI_Map_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map.UI_Map_C.SetMapPosition
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_C::SetMapPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map.UI_Map_C.SetMapPosition");

	UUI_Map_C_SetMapPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map.UI_Map_C.ExecuteUbergraph_UI_Map
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_C::ExecuteUbergraph_UI_Map(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map.UI_Map_C.ExecuteUbergraph_UI_Map");

	UUI_Map_C_ExecuteUbergraph_UI_Map_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
