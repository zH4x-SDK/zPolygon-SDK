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

// Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.SetTeamName
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Map_TeamBaseMarker_C::SetTeamName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.SetTeamName");

	UUI_Map_TeamBaseMarker_C_SetTeamName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.FindCoord
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Degrees                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               NewVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_TeamBaseMarker_C::FindCoord(float Distance, float Degrees, struct FVector2D* NewVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.FindCoord");

	UUI_Map_TeamBaseMarker_C_FindCoord_Params params;
	params.Distance = Distance;
	params.Degrees = Degrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewVector != nullptr)
		*NewVector = params.NewVector;

}


// Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.FindAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Degrees                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_TeamBaseMarker_C::FindAngle(const struct FVector2D& A, float* Degrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.FindAngle");

	UUI_Map_TeamBaseMarker_C_FindAngle_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Degrees != nullptr)
		*Degrees = params.Degrees;

}


// Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Map_TeamBaseMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.Construct");

	UUI_Map_TeamBaseMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.CalculatePosition
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_TeamBaseMarker_C::CalculatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.CalculatePosition");

	UUI_Map_TeamBaseMarker_C_CalculatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.ExecuteUbergraph_UI_Map_TeamBaseMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_TeamBaseMarker_C::ExecuteUbergraph_UI_Map_TeamBaseMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C.ExecuteUbergraph_UI_Map_TeamBaseMarker");

	UUI_Map_TeamBaseMarker_C_ExecuteUbergraph_UI_Map_TeamBaseMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
