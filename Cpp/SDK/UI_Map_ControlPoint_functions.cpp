﻿// Name: Polygon, Version: 0.3.13.76

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

// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.FindCoord
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Degrees                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               NewVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_ControlPoint_C::FindCoord(float Distance, float Degrees, struct FVector2D* NewVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.FindCoord");

	UUI_Map_ControlPoint_C_FindCoord_Params params;
	params.Distance = Distance;
	params.Degrees = Degrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewVector != nullptr)
		*NewVector = params.NewVector;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.FindAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Degrees                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_ControlPoint_C::FindAngle(const struct FVector2D& In, float* Degrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.FindAngle");

	UUI_Map_ControlPoint_C_FindAngle_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Degrees != nullptr)
		*Degrees = params.Degrees;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Map_ControlPoint_C::SetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.SetName");

	UUI_Map_ControlPoint_C_SetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Map_ControlPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.Construct");

	UUI_Map_ControlPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_ControlPoint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.Tick");

	UUI_Map_ControlPoint_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.CalculatePosition
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_ControlPoint_C::CalculatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.CalculatePosition");

	UUI_Map_ControlPoint_C_CalculatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.OnCapturedTeam_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_ControlPoint_C::OnCapturedTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.OnCapturedTeam_Event");

	UUI_Map_ControlPoint_C_OnCapturedTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.OnIsCapture_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_ControlPoint_C::OnIsCapture_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.OnIsCapture_Event");

	UUI_Map_ControlPoint_C_OnIsCapture_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.ExecuteUbergraph_UI_Map_ControlPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_ControlPoint_C::ExecuteUbergraph_UI_Map_ControlPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_ControlPoint.UI_Map_ControlPoint_C.ExecuteUbergraph_UI_Map_ControlPoint");

	UUI_Map_ControlPoint_C_ExecuteUbergraph_UI_Map_ControlPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
