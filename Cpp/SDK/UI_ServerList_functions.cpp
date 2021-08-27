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

// Function UI_ServerList.UI_ServerList_C.JoinServerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::JoinServerHovered(bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.JoinServerHovered");

	UUI_ServerList_C_JoinServerHovered_Params params;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_BD2973D548B7F64DD83E2E9B2D8B15E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_BD2973D548B7F64DD83E2E9B2D8B15E5(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_BD2973D548B7F64DD83E2E9B2D8B15E5");

	UUI_ServerList_C_OnPlayFabResponse_BD2973D548B7F64DD83E2E9B2D8B15E5_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_B4DDA5C248B35DB4118C9E80A34AD65C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_B4DDA5C248B35DB4118C9E80A34AD65C(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_B4DDA5C248B35DB4118C9E80A34AD65C");

	UUI_ServerList_C_OnPlayFabResponse_B4DDA5C248B35DB4118C9E80A34AD65C_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_738F3FDE459B6330367912B572961A6A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_738F3FDE459B6330367912B572961A6A(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_738F3FDE459B6330367912B572961A6A");

	UUI_ServerList_C_OnPlayFabResponse_738F3FDE459B6330367912B572961A6A_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_9ACD67904F5F3ECC6486B0A9E6C35810
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_9ACD67904F5F3ECC6486B0A9E6C35810(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_9ACD67904F5F3ECC6486B0A9E6C35810");

	UUI_ServerList_C_OnPlayFabResponse_9ACD67904F5F3ECC6486B0A9E6C35810_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_10CB6463404A3C3214D6E8844F8844CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_10CB6463404A3C3214D6E8844F8844CC(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_10CB6463404A3C3214D6E8844F8844CC");

	UUI_ServerList_C_OnPlayFabResponse_10CB6463404A3C3214D6E8844F8844CC_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_38A57A7D4F46F3CE2CDF9484E3332243
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_38A57A7D4F46F3CE2CDF9484E3332243(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_38A57A7D4F46F3CE2CDF9484E3332243");

	UUI_ServerList_C_OnPlayFabResponse_38A57A7D4F46F3CE2CDF9484E3332243_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_8F36EB8A43A10DC98F7FFB8196B21934
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerList_C::OnPlayFabResponse_8F36EB8A43A10DC98F7FFB8196B21934(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnPlayFabResponse_8F36EB8A43A10DC98F7FFB8196B21934");

	UUI_ServerList_C_OnPlayFabResponse_8F36EB8A43A10DC98F7FFB8196B21934_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ServerList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.Construct");

	UUI_ServerList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.SearchServers
// (BlueprintCallable, BlueprintEvent)
void UUI_ServerList_C::SearchServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.SearchServers");

	UUI_ServerList_C_SearchServers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerList_C::BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_ServerList_C_BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.GetCurrentGames_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientCurrentGamesResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerList_C::GetCurrentGames_Success(const struct FClientCurrentGamesResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.GetCurrentGames_Success");

	UUI_ServerList_C_GetCurrentGames_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.GetCurrentGames_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerList_C::GetCurrentGames_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.GetCurrentGames_Failure");

	UUI_ServerList_C_GetCurrentGames_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.ServerSelected_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ServerInfo_C*        Server_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerList_C::ServerSelected_Event(class UUI_ServerInfo_C* Server_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.ServerSelected_Event");

	UUI_ServerList_C_ServerSelected_Event_Params params;
	params.Server_Info = Server_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UUI_ServerList_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.OnRemovedFromFocusPath");

	UUI_ServerList_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerList_C::BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_ServerList_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerList_C::BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_ServerList_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerList_C::BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerList_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerList.UI_ServerList_C.ExecuteUbergraph_UI_ServerList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerList_C::ExecuteUbergraph_UI_ServerList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerList.UI_ServerList_C.ExecuteUbergraph_UI_ServerList");

	UUI_ServerList_C_ExecuteUbergraph_UI_ServerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
