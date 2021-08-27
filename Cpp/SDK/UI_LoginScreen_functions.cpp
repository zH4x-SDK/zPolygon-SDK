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

// Function UI_LoginScreen.UI_LoginScreen_C.ConstructRequestPlayerCombinedInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayFabJsonObject*      Request                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.ConstructRequestPlayerCombinedInfo");

	UUI_LoginScreen_C_ConstructRequestPlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

}


// Function UI_LoginScreen.UI_LoginScreen_C.ShowErrorMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           PlayFabError                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_LoginScreen_C::ShowErrorMessage(const struct FPlayFabError& PlayFabError)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.ShowErrorMessage");

	UUI_LoginScreen_C_ShowErrorMessage_Params params;
	params.PlayFabError = PlayFabError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoginScreen_C::OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F");

	UUI_LoginScreen_C_OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoginScreen_C::OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20");

	UUI_LoginScreen_C_OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoginScreen_C::OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06");

	UUI_LoginScreen_C_OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel       response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoginScreen_C::OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E");

	UUI_LoginScreen_C_OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientLoginResult      Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::LoginWithSteam_Success(const struct FClientLoginResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Success");

	UUI_LoginScreen_C_LoginWithSteam_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::LoginWithSteam_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Failure");

	UUI_LoginScreen_C_LoginWithSteam_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_LoginScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.Construct");

	UUI_LoginScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam
// (BlueprintCallable, BlueprintEvent)
void UUI_LoginScreen_C::LoginWithSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam");

	UUI_LoginScreen_C_LoginWithSteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID
// (BlueprintCallable, BlueprintEvent)
void UUI_LoginScreen_C::LoginWithCustomID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID");

	UUI_LoginScreen_C_LoginWithCustomID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientLoginResult      Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::LoginWithCustomID_Success(const struct FClientLoginResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID_Success");

	UUI_LoginScreen_C_LoginWithCustomID_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::LoginWithCustomID_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID_Failure");

	UUI_LoginScreen_C_LoginWithCustomID_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.RequestPlayerCombinedInfo
// (BlueprintCallable, BlueprintEvent)
void UUI_LoginScreen_C::RequestPlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.RequestPlayerCombinedInfo");

	UUI_LoginScreen_C_RequestPlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.Login
// (BlueprintCallable, BlueprintEvent)
void UUI_LoginScreen_C::Login()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.Login");

	UUI_LoginScreen_C_Login_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetPlayerCombinedInfoResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Success");

	UUI_LoginScreen_C_GetPlayerCombinedInfo_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::GetPlayerCombinedInfo_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Failure");

	UUI_LoginScreen_C_GetPlayerCombinedInfo_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientUpdateUserTitleDisplayNameResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::UpdateUserTitleDisplayName_Success(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Success");

	UUI_LoginScreen_C_UpdateUserTitleDisplayName_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError           Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::UpdateUserTitleDisplayName_Failure(const struct FPlayFabError& Error, class UObject* customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Failure");

	UUI_LoginScreen_C_UpdateUserTitleDisplayName_Failure_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoginScreen.UI_LoginScreen_C.ExecuteUbergraph_UI_LoginScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoginScreen_C::ExecuteUbergraph_UI_LoginScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoginScreen.UI_LoginScreen_C.ExecuteUbergraph_UI_LoginScreen");

	UUI_LoginScreen_C_ExecuteUbergraph_UI_LoginScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
