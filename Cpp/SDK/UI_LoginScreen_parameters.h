#pragma once

// Name: Polygon, Version: 0.3.13.76


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_LoginScreen.UI_LoginScreen_C.ConstructRequestPlayerCombinedInfo
struct UUI_LoginScreen_C_ConstructRequestPlayerCombinedInfo_Params
{
	class UPlayFabJsonObject*                          Request;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.ShowErrorMessage
struct UUI_LoginScreen_C_ShowErrorMessage_Params
{
	struct FPlayFabError                               PlayFabError;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F
struct UUI_LoginScreen_C_OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20
struct UUI_LoginScreen_C_OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06
struct UUI_LoginScreen_C_OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E
struct UUI_LoginScreen_C_OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Success
struct UUI_LoginScreen_C_LoginWithSteam_Success_Params
{
	struct FClientLoginResult                          Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Failure
struct UUI_LoginScreen_C_LoginWithSteam_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.Construct
struct UUI_LoginScreen_C_Construct_Params
{
};

// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam
struct UUI_LoginScreen_C_LoginWithSteam_Params
{
};

// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID
struct UUI_LoginScreen_C_LoginWithCustomID_Params
{
};

// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID_Success
struct UUI_LoginScreen_C_LoginWithCustomID_Success_Params
{
	struct FClientLoginResult                          Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithCustomID_Failure
struct UUI_LoginScreen_C_LoginWithCustomID_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.RequestPlayerCombinedInfo
struct UUI_LoginScreen_C_RequestPlayerCombinedInfo_Params
{
};

// Function UI_LoginScreen.UI_LoginScreen_C.Login
struct UUI_LoginScreen_C_Login_Params
{
};

// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Success
struct UUI_LoginScreen_C_GetPlayerCombinedInfo_Success_Params
{
	struct FClientGetPlayerCombinedInfoResult          Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Failure
struct UUI_LoginScreen_C_GetPlayerCombinedInfo_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Success
struct UUI_LoginScreen_C_UpdateUserTitleDisplayName_Success_Params
{
	struct FClientUpdateUserTitleDisplayNameResult     Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Failure
struct UUI_LoginScreen_C_UpdateUserTitleDisplayName_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoginScreen.UI_LoginScreen_C.ExecuteUbergraph_UI_LoginScreen
struct UUI_LoginScreen_C_ExecuteUbergraph_UI_LoginScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
