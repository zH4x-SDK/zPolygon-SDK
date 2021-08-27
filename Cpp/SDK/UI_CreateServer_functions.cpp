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

// Function UI_CreateServer.UI_CreateServer_C.GenerateTooltipForExperimentalMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_CreateServer_C::GenerateTooltipForExperimentalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.GenerateTooltipForExperimentalMode");

	UUI_CreateServer_C_GenerateTooltipForExperimentalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_CreateServer.UI_CreateServer_C.ParsePlayerCombinedInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CreateServer_C::ParsePlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.ParsePlayerCombinedInfo");

	UUI_CreateServer_C_ParsePlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.OnPlayFabResponse_97B0F78B43A4381A61C05E8774387836
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CreateServer_C::OnPlayFabResponse_97B0F78B43A4381A61C05E8774387836(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.OnPlayFabResponse_97B0F78B43A4381A61C05E8774387836");

	UUI_CreateServer_C_OnPlayFabResponse_97B0F78B43A4381A61C05E8774387836_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateServer_C::BndEvt__Button_137_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_CreateServer_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CreateServer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.PreConstruct");

	UUI_CreateServer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CreateServer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.Construct");

	UUI_CreateServer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.CreateServer_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateServer_C::CreateServer_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.CreateServer_Failure");

	UUI_CreateServer_C_CreateServer_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateServer_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_CreateServer_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_StartServer_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateServer_C::BndEvt__Button_StartServer_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_StartServer_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_CreateServer_C_BndEvt__Button_StartServer_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.CreateServer_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientStartGameResult  Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateServer_C::CreateServer_Success(const struct FClientStartGameResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.CreateServer_Success");

	UUI_CreateServer_C_CreateServer_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_NextMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateServer_C::BndEvt__Button_NextMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_NextMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_CreateServer_C_BndEvt__Button_NextMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_PreviousMap_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateServer_C::BndEvt__Button_PreviousMap_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.BndEvt__Button_PreviousMap_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_CreateServer_C_BndEvt__Button_PreviousMap_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.OnUpdatePlayerCombinedInfo_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_CreateServer_C::OnUpdatePlayerCombinedInfo_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.OnUpdatePlayerCombinedInfo_Event");

	UUI_CreateServer_C_OnUpdatePlayerCombinedInfo_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateServer.UI_CreateServer_C.ExecuteUbergraph_UI_CreateServer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateServer_C::ExecuteUbergraph_UI_CreateServer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateServer.UI_CreateServer_C.ExecuteUbergraph_UI_CreateServer");

	UUI_CreateServer_C_ExecuteUbergraph_UI_CreateServer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
