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

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetRegionWithMinPing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// PlayFab_ERegion                Region                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::GetRegionWithMinPing(PlayFab_ERegion* Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetRegionWithMinPing");

	UUI_GeneralMenuScreen_C_GetRegionWithMinPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ParsePlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::ParsePlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ParsePlayerInventory");

	UUI_GeneralMenuScreen_C_ParsePlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ParsePlayerProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::ParsePlayerProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ParsePlayerProgress");

	UUI_GeneralMenuScreen_C_ParsePlayerProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ActiveWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::ActiveWidgetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ActiveWidgetIndex");

	UUI_GeneralMenuScreen_C_ActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPlayFabResponse_CD1474F547DE7281825556B434C839BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_GeneralMenuScreen_C::OnPlayFabResponse_CD1474F547DE7281825556B434C839BA(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPlayFabResponse_CD1474F547DE7281825556B434C839BA");

	UUI_GeneralMenuScreen_C_OnPlayFabResponse_CD1474F547DE7281825556B434C839BA_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPlayFabResponse_EADE0AC846565E30975953AB28B095E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_GeneralMenuScreen_C::OnPlayFabResponse_EADE0AC846565E30975953AB28B095E4(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPlayFabResponse_EADE0AC846565E30975953AB28B095E4");

	UUI_GeneralMenuScreen_C_OnPlayFabResponse_EADE0AC846565E30975953AB28B095E4_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GeneralMenuScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Construct");

	UUI_GeneralMenuScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_GeneralMenuScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.PreConstruct");

	UUI_GeneralMenuScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::OnPressed_Event(class UUI_Button_Line_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPressed_Event");

	UUI_GeneralMenuScreen_C_OnPressed_Event_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Premium_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Button_Premium_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Premium_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Button_Premium_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Counter_C*           Counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature(class UUI_Counter_C* Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature_Params params;
	params.Counter = Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_GeneralMenuScreen_C::BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UUI_GeneralMenuScreen_C_BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnUpdatePlayerCombinedInfo_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::OnUpdatePlayerCombinedInfo_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnUpdatePlayerCombinedInfo_Event");

	UUI_GeneralMenuScreen_C_OnUpdatePlayerCombinedInfo_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.StartMatchmaking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LobbyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::StartMatchmaking(const struct FString& LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.StartMatchmaking");

	UUI_GeneralMenuScreen_C_StartMatchmaking_Params params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.RequestRegionPing
// (BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::RequestRegionPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.RequestRegionPing");

	UUI_GeneralMenuScreen_C_RequestRegionPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetGameServerRegions_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGameServerRegionsResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::GetGameServerRegions_Success(const struct FClientGameServerRegionsResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetGameServerRegions_Success");

	UUI_GeneralMenuScreen_C_GetGameServerRegions_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetGameServerRegions_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::GetGameServerRegions_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetGameServerRegions_Failure");

	UUI_GeneralMenuScreen_C_GetGameServerRegions_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnRequestComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*      Request                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::OnRequestComplete_Event(class UVaRestRequestJSON* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnRequestComplete_Event");

	UUI_GeneralMenuScreen_C_OnRequestComplete_Event_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Matchmake_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientMatchmakeResult  Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::Matchmake_Success(const struct FClientMatchmakeResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Matchmake_Success");

	UUI_GeneralMenuScreen_C_Matchmake_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Matchmake_False
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::Matchmake_False(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Matchmake_False");

	UUI_GeneralMenuScreen_C_Matchmake_False_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.StopMatchmaking
// (BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::StopMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.StopMatchmaking");

	UUI_GeneralMenuScreen_C_StopMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnSetPlayerId_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::OnSetPlayerId_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnSetPlayerId_Event");

	UUI_GeneralMenuScreen_C_OnSetPlayerId_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ExecuteUbergraph_UI_GeneralMenuScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GeneralMenuScreen_C::ExecuteUbergraph_UI_GeneralMenuScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ExecuteUbergraph_UI_GeneralMenuScreen");

	UUI_GeneralMenuScreen_C_ExecuteUbergraph_UI_GeneralMenuScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnChangeMatchmakingState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_GeneralMenuScreen_C::OnChangeMatchmakingState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnChangeMatchmakingState__DelegateSignature");

	UUI_GeneralMenuScreen_C_OnChangeMatchmakingState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
