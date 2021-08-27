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

// Function UI_CaptureProcess.UI_CaptureProcess_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CaptureProcess_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaptureProcess.UI_CaptureProcess_C.Construct");

	UUI_CaptureProcess_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CaptureProcess.UI_CaptureProcess_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CaptureProcess_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaptureProcess.UI_CaptureProcess_C.PreConstruct");

	UUI_CaptureProcess_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CaptureProcess.UI_CaptureProcess_C.OnCapturedTeam_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_CaptureProcess_C::OnCapturedTeam_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaptureProcess.UI_CaptureProcess_C.OnCapturedTeam_Event");

	UUI_CaptureProcess_C_OnCapturedTeam_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CaptureProcess.UI_CaptureProcess_C.OnChangeCapturePoints_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_CaptureProcess_C::OnChangeCapturePoints_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaptureProcess.UI_CaptureProcess_C.OnChangeCapturePoints_Event");

	UUI_CaptureProcess_C_OnChangeCapturePoints_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CaptureProcess.UI_CaptureProcess_C.ExecuteUbergraph_UI_CaptureProcess
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CaptureProcess_C::ExecuteUbergraph_UI_CaptureProcess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaptureProcess.UI_CaptureProcess_C.ExecuteUbergraph_UI_CaptureProcess");

	UUI_CaptureProcess_C_ExecuteUbergraph_UI_CaptureProcess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
