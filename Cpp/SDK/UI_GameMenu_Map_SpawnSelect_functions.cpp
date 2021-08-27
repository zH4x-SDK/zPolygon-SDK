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

// Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.SetNewPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_SpawnSelect_C::SetNewPosition(const struct FVector2D& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.SetNewPosition");

	UUI_GameMenu_Map_SpawnSelect_C_SetNewPosition_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_SpawnSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.Tick");

	UUI_GameMenu_Map_SpawnSelect_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_Map_SpawnSelect_C::ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect");

	UUI_GameMenu_Map_SpawnSelect_C_ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
