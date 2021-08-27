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

// Function UWorksWeb.UWorksInterfaceWebApps.UpToDateCheckMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_UpToDateCheckMinimal(int AppID, int Version, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.UpToDateCheckMinimal");

	UUWorksInterfaceWebApps_UpToDateCheckMinimal_Params params;
	params.AppID = AppID;
	params.Version = Version;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.UpToDateCheck
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebUpToDateCheck* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebUpToDateCheck* UUWorksInterfaceWebApps::STATIC_UpToDateCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.UpToDateCheck");

	UUWorksInterfaceWebApps_UpToDateCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLiveMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BuildId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BetaKey                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_SetAppBuildLiveMinimal(const struct FString& Key, int AppID, int BuildId, const struct FString& BetaKey, const struct FString& Description, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLiveMinimal");

	UUWorksInterfaceWebApps_SetAppBuildLiveMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.BuildId = BuildId;
	params.BetaKey = BetaKey;
	params.Description = Description;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetAppBuildLive* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetAppBuildLive* UUWorksInterfaceWebApps::STATIC_SetAppBuildLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLive");

	UUWorksInterfaceWebApps_SetAppBuildLive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddressMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Addr                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetServersAtAddressMinimal(const struct FString& Addr, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddressMinimal");

	UUWorksInterfaceWebApps_GetServersAtAddressMinimal_Params params;
	params.Addr = Addr;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetServersAtAddress* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetServersAtAddress* UUWorksInterfaceWebApps::STATIC_GetServersAtAddress()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddress");

	UUWorksInterfaceWebApps_GetServersAtAddress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetServerListMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filter                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetServerListMinimal(const struct FString& Key, const struct FString& Filter, int Limit, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetServerListMinimal");

	UUWorksInterfaceWebApps_GetServerListMinimal_Params params;
	params.Key = Key;
	params.Filter = Filter;
	params.Limit = Limit;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetServerList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetServerList* UUWorksInterfaceWebApps::STATIC_GetServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetServerList");

	UUWorksInterfaceWebApps_GetServerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetPlayersBannedMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetPlayersBannedMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetPlayersBannedMinimal");

	UUWorksInterfaceWebApps_GetPlayersBannedMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetPlayersBanned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPlayersBanned* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPlayersBanned* UUWorksInterfaceWebApps::STATIC_GetPlayersBanned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetPlayersBanned");

	UUWorksInterfaceWebApps_GetPlayersBanned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsListMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportIDMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetCheatingReportsListMinimal(const struct FString& Key, int AppID, int TimeBegin, int TimeEnd, bool bIncludeReports, bool bIncludeBans, const struct FString& ReportIDMin, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsListMinimal");

	UUWorksInterfaceWebApps_GetCheatingReportsListMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.TimeBegin = TimeBegin;
	params.TimeEnd = TimeEnd;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.ReportIDMin = ReportIDMin;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetCheatingReportsList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetCheatingReportsList* UUWorksInterfaceWebApps::STATIC_GetCheatingReportsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsList");

	UUWorksInterfaceWebApps_GetCheatingReportsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppListMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetAppListMinimal(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppListMinimal");

	UUWorksInterfaceWebApps_GetAppListMinimal_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAppList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAppList* UUWorksInterfaceWebApps::STATIC_GetAppList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppList");

	UUWorksInterfaceWebApps_GetAppList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersionsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetAppDepotVersionsMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersionsMinimal");

	UUWorksInterfaceWebApps_GetAppDepotVersionsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAppDepotVersions* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAppDepotVersions* UUWorksInterfaceWebApps::STATIC_GetAppDepotVersions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersions");

	UUWorksInterfaceWebApps_GetAppDepotVersions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBuildsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetAppBuildsMinimal(const struct FString& Key, int AppID, int Count, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppBuildsMinimal");

	UUWorksInterfaceWebApps_GetAppBuildsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Count = Count;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBuilds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAppBuilds* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAppBuilds* UUWorksInterfaceWebApps::STATIC_GetAppBuilds()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppBuilds");

	UUWorksInterfaceWebApps_GetAppBuilds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBetasMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebApps::STATIC_GetAppBetasMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppBetasMinimal");

	UUWorksInterfaceWebApps_GetAppBetasMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBetas
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAppBetas* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAppBetas* UUWorksInterfaceWebApps::STATIC_GetAppBetas()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebApps.GetAppBetas");

	UUWorksInterfaceWebApps_GetAppBetas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BroadcastID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FrameData                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebBroadcast::STATIC_PostGameDataFrameMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& BroadcastID, const struct FString& FrameData, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrameMinimal");

	UUWorksInterfaceWebBroadcast_PostGameDataFrameMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.BroadcastID = BroadcastID;
	params.FrameData = FrameData;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebPostGameDataFrame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebPostGameDataFrame* UUWorksInterfaceWebBroadcast::STATIC_PostGameDataFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrame");

	UUWorksInterfaceWebBroadcast_PostGameDataFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSessionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_StartSecureMultiplayerSessionMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSessionMinimal");

	UUWorksInterfaceWebCheatReporting_StartSecureMultiplayerSessionMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebStartSecureMultiplayerSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebStartSecureMultiplayerSession* UUWorksInterfaceWebCheatReporting::STATIC_StartSecureMultiplayerSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSession");

	UUWorksInterfaceWebCheatReporting_StartSecureMultiplayerSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUserMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_RequestVacStatusForUserMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUserMinimal");

	UUWorksInterfaceWebCheatReporting_RequestVacStatusForUserMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionId = SessionId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRequestVacStatusForUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRequestVacStatusForUser* UUWorksInterfaceWebCheatReporting::STATIC_RequestVacStatusForUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUser");

	UUWorksInterfaceWebCheatReporting_RequestVacStatusForUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBanMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReportID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDelayBan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_RequestPlayerGameBanMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& ReportID, const struct FString& CheatDescription, int Duration, bool bDelayBan, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBanMinimal");

	UUWorksInterfaceWebCheatReporting_RequestPlayerGameBanMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ReportID = ReportID;
	params.CheatDescription = CheatDescription;
	params.Duration = Duration;
	params.bDelayBan = bDelayBan;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBan
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRequestPlayerGameBan* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRequestPlayerGameBan* UUWorksInterfaceWebCheatReporting::STATIC_RequestPlayerGameBan()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBan");

	UUWorksInterfaceWebCheatReporting_RequestPlayerGameBan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheatingMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDReporter                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHeuristic                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDetection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerReport                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoReportID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SuspicionStartTime             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_ReportPlayerCheatingMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& SteamIDReporter, int AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int SuspicionStartTime, int Severity, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheatingMinimal");

	UUWorksInterfaceWebCheatReporting_ReportPlayerCheatingMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SteamIDReporter = SteamIDReporter;
	params.AppData = AppData;
	params.bHeuristic = bHeuristic;
	params.bDetection = bDetection;
	params.bPlayerReport = bPlayerReport;
	params.bNoReportID = bNoReportID;
	params.GameMode = GameMode;
	params.SuspicionStartTime = SuspicionStartTime;
	params.Severity = Severity;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheating
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebReportPlayerCheating* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebReportPlayerCheating* UUWorksInterfaceWebCheatReporting::STATIC_ReportPlayerCheating()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheating");

	UUWorksInterfaceWebCheatReporting_ReportPlayerCheating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatDataMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PathAndFileName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 WebCheatURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeNow                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeStarted                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeStopped                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameProcessID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CheatProcessID                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatParamA                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatParamB                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_ReportCheatDataMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& PathAndFileName, const struct FString& WebCheatURL, const struct FString& TimeNow, const struct FString& TimeStarted, const struct FString& TimeStopped, const struct FString& CheatName, int GameProcessID, int CheatProcessID, const struct FString& CheatParamA, const struct FString& CheatParamB, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatDataMinimal");

	UUWorksInterfaceWebCheatReporting_ReportCheatDataMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PathAndFileName = PathAndFileName;
	params.WebCheatURL = WebCheatURL;
	params.TimeNow = TimeNow;
	params.TimeStarted = TimeStarted;
	params.TimeStopped = TimeStopped;
	params.CheatName = CheatName;
	params.GameProcessID = GameProcessID;
	params.CheatProcessID = CheatProcessID;
	params.CheatParamA = CheatParamA;
	params.CheatParamB = CheatParamB;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebReportCheatData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebReportCheatData* UUWorksInterfaceWebCheatReporting::STATIC_ReportCheatData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatData");

	UUWorksInterfaceWebCheatReporting_ReportCheatData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBanMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_RemovePlayerGameBanMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBanMinimal");

	UUWorksInterfaceWebCheatReporting_RemovePlayerGameBanMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBan
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRemovePlayerGameBan* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRemovePlayerGameBan* UUWorksInterfaceWebCheatReporting::STATIC_RemovePlayerGameBan()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBan");

	UUWorksInterfaceWebCheatReporting_RemovePlayerGameBan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReportsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportIDMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_GetCheatingReportsMinimal(const struct FString& Key, int AppID, int TimeEnd, int TimeBegin, const struct FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReportsMinimal");

	UUWorksInterfaceWebCheatReporting_GetCheatingReportsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.TimeEnd = TimeEnd;
	params.TimeBegin = TimeBegin;
	params.ReportIDMin = ReportIDMin;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReports
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetCheatingReports* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetCheatingReports* UUWorksInterfaceWebCheatReporting::STATIC_GetCheatingReports()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReports");

	UUWorksInterfaceWebCheatReporting_GetCheatingReports_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSessionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCheatReporting::STATIC_EndSecureMultiplayerSessionMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSessionMinimal");

	UUWorksInterfaceWebCheatReporting_EndSecureMultiplayerSessionMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionId = SessionId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebEndSecureMultiplayerSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebEndSecureMultiplayerSession* UUWorksInterfaceWebCheatReporting::STATIC_EndSecureMultiplayerSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSession");

	UUWorksInterfaceWebCheatReporting_EndSecureMultiplayerSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuseMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDActor                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDTarget                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  AbuseType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GID                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebCommunity::STATIC_ReportAbuseMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int AppID, unsigned char AbuseType, unsigned char ContentType, const struct FString& Description, const struct FString& GID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuseMinimal");

	UUWorksInterfaceWebCommunity_ReportAbuseMinimal_Params params;
	params.Key = Key;
	params.SteamIDActor = SteamIDActor;
	params.SteamIDTarget = SteamIDTarget;
	params.AppID = AppID;
	params.AbuseType = AbuseType;
	params.ContentType = ContentType;
	params.Description = Description;
	params.GID = GID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebReportAbuse* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebReportAbuse* UUWorksInterfaceWebCommunity::STATIC_ReportAbuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuse");

	UUWorksInterfaceWebCommunity_ReportAbuse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummaryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeLastVisit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_GetTradeOffersSummaryMinimal(const struct FString& Key, int TimeLastVisit, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummaryMinimal");

	UUWorksInterfaceWebEcon_GetTradeOffersSummaryMinimal_Params params;
	params.Key = Key;
	params.TimeLastVisit = TimeLastVisit;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetTradeOffersSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetTradeOffersSummary* UUWorksInterfaceWebEcon::STATIC_GetTradeOffersSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummary");

	UUWorksInterfaceWebEcon_GetTradeOffersSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetSentOffers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetReceivedOffers             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescription                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHistoricalOnly                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeHistoricalCutoff           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_GetTradeOffersMinimal(const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int TimeHistoricalCutoff, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersMinimal");

	UUWorksInterfaceWebEcon_GetTradeOffersMinimal_Params params;
	params.Key = Key;
	params.bGetSentOffers = bGetSentOffers;
	params.bGetReceivedOffers = bGetReceivedOffers;
	params.bGetDescription = bGetDescription;
	params.Language = Language;
	params.bActiveOnly = bActiveOnly;
	params.bHistoricalOnly = bHistoricalOnly;
	params.TimeHistoricalCutoff = TimeHistoricalCutoff;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetTradeOffers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetTradeOffers* UUWorksInterfaceWebEcon::STATIC_GetTradeOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffers");

	UUWorksInterfaceWebEcon_GetTradeOffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOfferMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_GetTradeOfferMinimal(const struct FString& Key, const struct FString& TradeOfferID, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOfferMinimal");

	UUWorksInterfaceWebEcon_GetTradeOfferMinimal_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetTradeOffer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetTradeOffer* UUWorksInterfaceWebEcon::STATIC_GetTradeOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffer");

	UUWorksInterfaceWebEcon_GetTradeOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistoryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxTrades                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartAfterTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StartAfterTradeID              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNavigatingBack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescription                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeFailed                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeTotal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_GetTradeHistoryMinimal(const struct FString& Key, int MaxTrades, int StartAfterTime, const struct FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistoryMinimal");

	UUWorksInterfaceWebEcon_GetTradeHistoryMinimal_Params params;
	params.Key = Key;
	params.MaxTrades = MaxTrades;
	params.StartAfterTime = StartAfterTime;
	params.StartAfterTradeID = StartAfterTradeID;
	params.bNavigatingBack = bNavigatingBack;
	params.bGetDescription = bGetDescription;
	params.Language = Language;
	params.bIncludeFailed = bIncludeFailed;
	params.bIncludeTotal = bIncludeTotal;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetTradeHistory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetTradeHistory* UUWorksInterfaceWebEcon::STATIC_GetTradeHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistory");

	UUWorksInterfaceWebEcon_GetTradeHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCacheMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_FlushInventoryCacheMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCacheMinimal");

	UUWorksInterfaceWebEcon_FlushInventoryCacheMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ContextID = ContextID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebFlushInventoryCache* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebFlushInventoryCache* UUWorksInterfaceWebEcon::STATIC_FlushInventoryCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCache");

	UUWorksInterfaceWebEcon_FlushInventoryCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.FlushContextCacheMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_FlushContextCacheMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.FlushContextCacheMinimal");

	UUWorksInterfaceWebEcon_FlushContextCacheMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.FlushContextCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebFlushContextCache* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebFlushContextCache* UUWorksInterfaceWebEcon::STATIC_FlushContextCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.FlushContextCache");

	UUWorksInterfaceWebEcon_FlushContextCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCacheMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_FlushAssetAppearanceCacheMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCacheMinimal");

	UUWorksInterfaceWebEcon_FlushAssetAppearanceCacheMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebFlushAssetAppearanceCache* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebFlushAssetAppearanceCache* UUWorksInterfaceWebEcon::STATIC_FlushAssetAppearanceCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCache");

	UUWorksInterfaceWebEcon_FlushAssetAppearanceCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOfferMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_DeclineTradeOfferMinimal(const struct FString& Key, const struct FString& TradeOfferID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOfferMinimal");

	UUWorksInterfaceWebEcon_DeclineTradeOfferMinimal_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebDeclineTradeOffer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebDeclineTradeOffer* UUWorksInterfaceWebEcon::STATIC_DeclineTradeOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOffer");

	UUWorksInterfaceWebEcon_DeclineTradeOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOfferMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEcon::STATIC_CancelTradeOfferMinimal(const struct FString& Key, const struct FString& TradeOfferID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOfferMinimal");

	UUWorksInterfaceWebEcon_CancelTradeOfferMinimal_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCancelTradeOffer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCancelTradeOffer* UUWorksInterfaceWebEcon::STATIC_CancelTradeOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOffer");

	UUWorksInterfaceWebEcon_CancelTradeOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetPopularMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Rows                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FilterAppID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ECurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconMarket::STATIC_GetPopularMinimal(const struct FString& Key, const struct FString& Language, int Rows, int Start, int FilterAppID, int ECurrency, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.GetPopularMinimal");

	UUWorksInterfaceWebEconMarket_GetPopularMinimal_Params params;
	params.Key = Key;
	params.Language = Language;
	params.Rows = Rows;
	params.Start = Start;
	params.FilterAppID = FilterAppID;
	params.ECurrency = ECurrency;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetPopular
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPopular* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPopular* UUWorksInterfaceWebEconMarket::STATIC_GetPopular()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.GetPopular");

	UUWorksInterfaceWebEconMarket_GetPopular_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibilityMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconMarket::STATIC_GetMarketEligibilityMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibilityMinimal");

	UUWorksInterfaceWebEconMarket_GetMarketEligibilityMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetMarketEligibility* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetMarketEligibility* UUWorksInterfaceWebEconMarket::STATIC_GetMarketEligibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibility");

	UUWorksInterfaceWebEconMarket_GetMarketEligibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetIDMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ListingID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconMarket::STATIC_GetAssetIDMinimal(const struct FString& Key, int AppID, const struct FString& ListingID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetIDMinimal");

	UUWorksInterfaceWebEconMarket_GetAssetIDMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ListingID = ListingID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAssetID* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAssetID* UUWorksInterfaceWebEconMarket::STATIC_GetAssetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetID");

	UUWorksInterfaceWebEconMarket_GetAssetID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUserMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSynchronous                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconMarket::STATIC_CancelAppListingsForUserMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUserMinimal");

	UUWorksInterfaceWebEconMarket_CancelAppListingsForUserMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bSynchronous = bSynchronous;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCancelAppListingsForUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCancelAppListingsForUser* UUWorksInterfaceWebEconMarket::STATIC_CancelAppListingsForUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUser");

	UUWorksInterfaceWebEconMarket_CancelAppListingsForUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.StartTradeMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          PartyA                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          PartyB                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_StartTradeMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.StartTradeMinimal");

	UUWorksInterfaceWebEconomy_StartTradeMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.PartyA = PartyA;
	params.PartyB = PartyB;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.StartTrade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebStartTrade* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebStartTrade* UUWorksInterfaceWebEconomy::STATIC_StartTrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.StartTrade");

	UUWorksInterfaceWebEconomy_StartTrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransactionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AssetID0                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AssetQuantity0                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Referrer                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClientAuth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_StartAssetTransactionMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& AssetID0, int AssetQuantity0, const struct FString& Currency, const struct FString& Language, const struct FString& IPAddress, const struct FString& Referrer, bool bClientAuth, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransactionMinimal");

	UUWorksInterfaceWebEconomy_StartAssetTransactionMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.AssetID0 = AssetID0;
	params.AssetQuantity0 = AssetQuantity0;
	params.Currency = Currency;
	params.Language = Language;
	params.IPAddress = IPAddress;
	params.Referrer = Referrer;
	params.bClientAuth = bClientAuth;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransaction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebStartAssetTransaction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebStartAssetTransaction* UUWorksInterfaceWebEconomy::STATIC_StartAssetTransaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransaction");

	UUWorksInterfaceWebEconomy_StartAssetTransaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPricesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_GetMarketPricesMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPricesMinimal");

	UUWorksInterfaceWebEconomy_GetMarketPricesMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPrices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetMarketPrices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetMarketPrices* UUWorksInterfaceWebEconomy::STATIC_GetMarketPrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPrices");

	UUWorksInterfaceWebEconomy_GetMarketPrices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUserMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_GetExportedAssetsForUserMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUserMinimal");

	UUWorksInterfaceWebEconomy_GetExportedAssetsForUserMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ContextID = ContextID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetExportedAssetsForUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetExportedAssetsForUser* UUWorksInterfaceWebEconomy::STATIC_GetExportedAssetsForUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUser");

	UUWorksInterfaceWebEconomy_GetExportedAssetsForUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPricesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_GetAssetPricesMinimal(const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPricesMinimal");

	UUWorksInterfaceWebEconomy_GetAssetPricesMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Currency = Currency;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPrices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAssetPrices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAssetPrices* UUWorksInterfaceWebEconomy::STATIC_GetAssetPrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPrices");

	UUWorksInterfaceWebEconomy_GetAssetPrices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfoMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ClassCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ClassID0                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstanceID0                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_GetAssetClassInfoMinimal(const struct FString& Key, int AppID, int ClassCount, const struct FString& ClassID0, const struct FString& Language, const struct FString& InstanceID0, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfoMinimal");

	UUWorksInterfaceWebEconomy_GetAssetClassInfoMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ClassCount = ClassCount;
	params.ClassID0 = ClassID0;
	params.Language = Language;
	params.InstanceID0 = InstanceID0;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAssetClassInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAssetClassInfo* UUWorksInterfaceWebEconomy::STATIC_GetAssetClassInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfo");

	UUWorksInterfaceWebEconomy_GetAssetClassInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransactionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TxnID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_FinalizeAssetTransactionMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& TxnID, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransactionMinimal");

	UUWorksInterfaceWebEconomy_FinalizeAssetTransactionMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TxnID = TxnID;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransaction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebFinalizeAssetTransaction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebFinalizeAssetTransaction* UUWorksInterfaceWebEconomy::STATIC_FinalizeAssetTransaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransaction");

	UUWorksInterfaceWebEconomy_FinalizeAssetTransaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebEconomy.CanTradeMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          TargetId                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebEconomy::STATIC_CanTradeMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.CanTradeMinimal");

	UUWorksInterfaceWebEconomy_CanTradeMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TargetId = TargetId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebEconomy.CanTrade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCanTrade* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCanTrade* UUWorksInterfaceWebEconomy::STATIC_CanTrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebEconomy.CanTrade");

	UUWorksInterfaceWebEconomy_CanTrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistoryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AssetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameInventory::STATIC_SupportGetAssetHistoryMinimal(const struct FString& Key, int AppID, const struct FString& AssetID, const struct FString& ContextID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistoryMinimal");

	UUWorksInterfaceWebGameInventory_SupportGetAssetHistoryMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.AssetID = AssetID;
	params.ContextID = ContextID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSupportGetAssetHistory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSupportGetAssetHistory* UUWorksInterfaceWebGameInventory::STATIC_SupportGetAssetHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistory");

	UUWorksInterfaceWebGameInventory_SupportGetAssetHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommandsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ActorId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameInventory::STATIC_HistoryExecuteCommandsMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, const struct FString& ActorId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommandsMinimal");

	UUWorksInterfaceWebGameInventory_HistoryExecuteCommandsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ContextID = ContextID;
	params.ActorId = ActorId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommands
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebHistoryExecuteCommands* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebHistoryExecuteCommands* UUWorksInterfaceWebGameInventory::STATIC_HistoryExecuteCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommands");

	UUWorksInterfaceWebGameInventory_HistoryExecuteCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistoryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameInventory::STATIC_GetUserHistoryMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, int StartTime, int EndTime, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistoryMinimal");

	UUWorksInterfaceWebGameInventory_GetUserHistoryMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ContextID = ContextID;
	params.StartTime = StartTime;
	params.EndTime = EndTime;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetUserHistory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetUserHistory* UUWorksInterfaceWebGameInventory::STATIC_GetUserHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistory");

	UUWorksInterfaceWebGameInventory_GetUserHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetailsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Command                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Arguments                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameInventory::STATIC_GetHistoryCommandDetailsMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& Command, const struct FString& ContextID, const struct FString& Arguments, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetailsMinimal");

	UUWorksInterfaceWebGameInventory_GetHistoryCommandDetailsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Command = Command;
	params.ContextID = ContextID;
	params.Arguments = Arguments;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetHistoryCommandDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetHistoryCommandDetails* UUWorksInterfaceWebGameInventory::STATIC_GetHistoryCommandDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetails");

	UUWorksInterfaceWebGameInventory_GetHistoryCommandDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSessionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTitle            Title                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUsers            Users                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_UpdateSessionMinimal(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksTitle& Title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSessionMinimal");

	UUWorksInterfaceWebGameNotifications_UpdateSessionMinimal_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.Title = Title;
	params.Users = Users;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebUpdateSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebUpdateSession* UUWorksInterfaceWebGameNotifications::STATIC_UpdateSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSession");

	UUWorksInterfaceWebGameNotifications_UpdateSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotificationsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_RequestNotificationsMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotificationsMinimal");

	UUWorksInterfaceWebGameNotifications_RequestNotificationsMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotifications
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRequestNotifications* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRequestNotifications* UUWorksInterfaceWebGameNotifications::STATIC_RequestNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotifications");

	UUWorksInterfaceWebGameNotifications_RequestNotifications_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForAppMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSessions         Sessions                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_GetSessionDetailsForAppMinimal(const struct FString& Key, const struct FUWorksSessions& Sessions, int AppID, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForAppMinimal");

	UUWorksInterfaceWebGameNotifications_GetSessionDetailsForAppMinimal_Params params;
	params.Key = Key;
	params.Sessions = Sessions;
	params.AppID = AppID;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetSessionDetailsForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetSessionDetailsForApp* UUWorksInterfaceWebGameNotifications::STATIC_GetSessionDetailsForApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForApp");

	UUWorksInterfaceWebGameNotifications_GetSessionDetailsForApp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForAppMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAllUserMessages        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAuthUserMessage        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_EnumerateSessionsForAppMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForAppMinimal");

	UUWorksInterfaceWebGameNotifications_EnumerateSessionsForAppMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bIncludeAllUserMessages = bIncludeAllUserMessages;
	params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebEnumerateSessionsForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebEnumerateSessionsForApp* UUWorksInterfaceWebGameNotifications::STATIC_EnumerateSessionsForApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForApp");

	UUWorksInterfaceWebGameNotifications_EnumerateSessionsForApp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_DeleteSessionMinimal(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionMinimal");

	UUWorksInterfaceWebGameNotifications_DeleteSessionMinimal_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatchMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_DeleteSessionBatchMinimal(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatchMinimal");

	UUWorksInterfaceWebGameNotifications_DeleteSessionBatchMinimal_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebDeleteSessionBatch* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebDeleteSessionBatch* UUWorksInterfaceWebGameNotifications::STATIC_DeleteSessionBatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatch");

	UUWorksInterfaceWebGameNotifications_DeleteSessionBatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebDeleteSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebDeleteSession* UUWorksInterfaceWebGameNotifications::STATIC_DeleteSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSession");

	UUWorksInterfaceWebGameNotifications_DeleteSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSessionMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Context                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTitle            Title                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUsers            Users                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameNotifications::STATIC_CreateSessionMinimal(const struct FString& Key, int AppID, const struct FString& Context, const struct FUWorksTitle& Title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSessionMinimal");

	UUWorksInterfaceWebGameNotifications_CreateSessionMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Context = Context;
	params.Title = Title;
	params.Users = Users;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCreateSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCreateSession* UUWorksInterfaceWebGameNotifications::STATIC_CreateSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSession");

	UUWorksInterfaceWebGameNotifications_CreateSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.SetMemoMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_SetMemoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Memo, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.SetMemoMinimal");

	UUWorksInterfaceWebGameServers_SetMemoMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Memo = Memo;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.SetMemo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetMemo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetMemo* UUWorksInterfaceWebGameServers::STATIC_SetMemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.SetMemo");

	UUWorksInterfaceWebGameServers_SetMemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatusMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBanned                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BanSeconds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_SetBanStatusMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int BanSeconds, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatusMinimal");

	UUWorksInterfaceWebGameServers_SetBanStatusMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bBanned = bBanned;
	params.BanSeconds = BanSeconds;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetBanStatus* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetBanStatus* UUWorksInterfaceWebGameServers::STATIC_SetBanStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatus");

	UUWorksInterfaceWebGameServers_SetBanStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginTokenMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_ResetLoginTokenMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginTokenMinimal");

	UUWorksInterfaceWebGameServers_ResetLoginTokenMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebResetLoginToken* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebResetLoginToken* UUWorksInterfaceWebGameServers::STATIC_ResetLoginToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginToken");

	UUWorksInterfaceWebGameServers_ResetLoginToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginTokenMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LoginToken                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_QueryLoginTokenMinimal(const struct FString& Key, const struct FString& LoginToken, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginTokenMinimal");

	UUWorksInterfaceWebGameServers_QueryLoginTokenMinimal_Params params;
	params.Key = Key;
	params.LoginToken = LoginToken;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebQueryLoginToken* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebQueryLoginToken* UUWorksInterfaceWebGameServers::STATIC_QueryLoginToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginToken");

	UUWorksInterfaceWebGameServers_QueryLoginToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIPMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ServerIPs                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_GetServerSteamIDsByIPMinimal(const struct FString& Key, const struct FString& ServerIPs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIPMinimal");

	UUWorksInterfaceWebGameServers_GetServerSteamIDsByIPMinimal_Params params;
	params.Key = Key;
	params.ServerIPs = ServerIPs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetServerSteamIDsByIP* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetServerSteamIDsByIP* UUWorksInterfaceWebGameServers::STATIC_GetServerSteamIDsByIP()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIP");

	UUWorksInterfaceWebGameServers_GetServerSteamIDsByIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamIDMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ServerSteamID                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_GetServerIPsBySteamIDMinimal(const struct FString& Key, const struct FUWorksSteamID& ServerSteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamIDMinimal");

	UUWorksInterfaceWebGameServers_GetServerIPsBySteamIDMinimal_Params params;
	params.Key = Key;
	params.ServerSteamID = ServerSteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetServerIPsBySteamID* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetServerIPsBySteamID* UUWorksInterfaceWebGameServers::STATIC_GetServerIPsBySteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamID");

	UUWorksInterfaceWebGameServers_GetServerIPsBySteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfoMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_GetAccountPublicInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfoMinimal");

	UUWorksInterfaceWebGameServers_GetAccountPublicInfoMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAccountPublicInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAccountPublicInfo* UUWorksInterfaceWebGameServers::STATIC_GetAccountPublicInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfo");

	UUWorksInterfaceWebGameServers_GetAccountPublicInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountListMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_GetAccountListMinimal(const struct FString& Key, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountListMinimal");

	UUWorksInterfaceWebGameServers_GetAccountListMinimal_Params params;
	params.Key = Key;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAccountList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAccountList* UUWorksInterfaceWebGameServers::STATIC_GetAccountList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountList");

	UUWorksInterfaceWebGameServers_GetAccountList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccountMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_DeleteAccountMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccountMinimal");

	UUWorksInterfaceWebGameServers_DeleteAccountMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebDeleteAccount* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebDeleteAccount* UUWorksInterfaceWebGameServers::STATIC_DeleteAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccount");

	UUWorksInterfaceWebGameServers_DeleteAccount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServers.CreateAccountMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServers::STATIC_CreateAccountMinimal(const struct FString& Key, int AppID, const struct FString& Memo, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.CreateAccountMinimal");

	UUWorksInterfaceWebGameServers_CreateAccountMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Memo = Memo;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServers.CreateAccount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCreateAccount* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCreateAccount* UUWorksInterfaceWebGameServers::STATIC_CreateAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServers.CreateAccount");

	UUWorksInterfaceWebGameServers_CreateAccount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RangeStart                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RangeEnd                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebGameServerStats::STATIC_GetGameServerPlayerStatsForGameMinimal(const struct FString& Key, const struct FUWorksGameID& GameID, int AppID, const struct FString& RangeStart, const struct FString& RangeEnd, int MaxResults, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGameMinimal");

	UUWorksInterfaceWebGameServerStats_GetGameServerPlayerStatsForGameMinimal_Params params;
	params.Key = Key;
	params.GameID = GameID;
	params.AppID = AppID;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.MaxResults = MaxResults;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetGameServerPlayerStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetGameServerPlayerStatsForGame* UUWorksInterfaceWebGameServerStats::STATIC_GetGameServerPlayerStatsForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGame");

	UUWorksInterfaceWebGameServerStats_GetGameServerPlayerStatsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetQuantityMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_GetQuantityMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetQuantityMinimal");

	UUWorksInterfaceWebInventory_GetQuantityMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ItemDefID = ItemDefID;
	params.bForce = bForce;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetQuantity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetQuantity* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetQuantity* UUWorksInterfaceWebInventory::STATIC_GetQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetQuantity");

	UUWorksInterfaceWebInventory_GetQuantity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheetMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ECurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_GetPriceSheetMinimal(const struct FString& Key, int ECurrency, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheetMinimal");

	UUWorksInterfaceWebInventory_GetPriceSheetMinimal_Params params;
	params.Key = Key;
	params.ECurrency = ECurrency;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPriceSheet* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPriceSheet* UUWorksInterfaceWebInventory::STATIC_GetPriceSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheet");

	UUWorksInterfaceWebInventory_GetPriceSheet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetItemDefsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ModifiedSince                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> WorkshopIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            CacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_GetItemDefsMinimal(const struct FString& Key, int AppID, const struct FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int CacheMaxAgeSeconds, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetItemDefsMinimal");

	UUWorksInterfaceWebInventory_GetItemDefsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ModifiedSince = ModifiedSince;
	params.ItemDefIDs = ItemDefIDs;
	params.WorkshopIDs = WorkshopIDs;
	params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetItemDefs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetItemDefs* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetItemDefs* UUWorksInterfaceWebInventory::STATIC_GetItemDefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetItemDefs");

	UUWorksInterfaceWebInventory_GetItemDefs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetInventoryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_GetInventoryMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetInventoryMinimal");

	UUWorksInterfaceWebInventory_GetInventoryMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.GetInventory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetInventory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetInventory* UUWorksInterfaceWebInventory::STATIC_GetInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.GetInventory");

	UUWorksInterfaceWebInventory_GetInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.ExchangeItemMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    MaterialsQuantity              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     OutputItemDefID                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_ExchangeItemMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.ExchangeItemMinimal");

	UUWorksInterfaceWebInventory_ExchangeItemMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.MaterialsItemID = MaterialsItemID;
	params.MaterialsQuantity = MaterialsQuantity;
	params.OutputItemDefID = OutputItemDefID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.ExchangeItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebExchangeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebExchangeItem* UUWorksInterfaceWebInventory::STATIC_ExchangeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.ExchangeItem");

	UUWorksInterfaceWebInventory_ExchangeItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.ConsumeItemMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemInstanceID ItemId                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_ConsumeItemMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamItemInstanceID& ItemId, int Quantity, const struct FUWorksSteamID& SteamID, const struct FString& RequestId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.ConsumeItemMinimal");

	UUWorksInterfaceWebInventory_ConsumeItemMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.SteamID = SteamID;
	params.RequestId = RequestId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.ConsumeItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebConsumeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebConsumeItem* UUWorksInterfaceWebInventory::STATIC_ConsumeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.ConsumeItem");

	UUWorksInterfaceWebInventory_ConsumeItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.ConsolidateMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_ConsolidateMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.ConsolidateMinimal");

	UUWorksInterfaceWebInventory_ConsolidateMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ItemDefID = ItemDefID;
	params.bForce = bForce;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.Consolidate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebConsolidate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebConsolidate* UUWorksInterfaceWebInventory::STATIC_Consolidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.Consolidate");

	UUWorksInterfaceWebInventory_Consolidate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.AddPromoItemMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ItemPropsJSON                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_AddPromoItemMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamItemDef& ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.AddPromoItemMinimal");

	UUWorksInterfaceWebInventory_AddPromoItemMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemDefID = ItemDefID;
	params.ItemPropsJSON = ItemPropsJSON;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestId = RequestId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.AddPromoItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebAddPromoItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebAddPromoItem* UUWorksInterfaceWebInventory::STATIC_AddPromoItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.AddPromoItem");

	UUWorksInterfaceWebInventory_AddPromoItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebInventory.AddItemMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 ItemPropsJSON                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebInventory::STATIC_AddItemMinimal(const struct FString& Key, int AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestId, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.AddItemMinimal");

	UUWorksInterfaceWebInventory_AddItemMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemDefID = ItemDefID;
	params.ItemPropsJSON = ItemPropsJSON;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestId = RequestId;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebInventory.AddItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebAddItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebAddItem* UUWorksInterfaceWebInventory::STATIC_AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebInventory.AddItem");

	UUWorksInterfaceWebInventory_AddItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScoreMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ScoreMethod                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Details                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebLeaderboards::STATIC_SetLeaderboardScoreMinimal(const struct FString& Key, int AppID, int LeaderboardID, const struct FUWorksSteamID& SteamID, int Score, const struct FString& ScoreMethod, TArray<unsigned char> Details, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScoreMinimal");

	UUWorksInterfaceWebLeaderboards_SetLeaderboardScoreMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.LeaderboardID = LeaderboardID;
	params.SteamID = SteamID;
	params.Score = Score;
	params.ScoreMethod = ScoreMethod;
	params.Details = Details;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetLeaderboardScore* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetLeaderboardScore* UUWorksInterfaceWebLeaderboards::STATIC_SetLeaderboardScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScore");

	UUWorksInterfaceWebLeaderboards_SetLeaderboardScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboardMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebLeaderboards::STATIC_ResetLeaderboardMinimal(const struct FString& Key, int AppID, int LeaderboardID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboardMinimal");

	UUWorksInterfaceWebLeaderboards_ResetLeaderboardMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.LeaderboardID = LeaderboardID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebResetLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebResetLeaderboard* UUWorksInterfaceWebLeaderboards::STATIC_ResetLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboard");

	UUWorksInterfaceWebLeaderboards_ResetLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebLeaderboards::STATIC_GetLeaderboardsForGameMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGameMinimal");

	UUWorksInterfaceWebLeaderboards_GetLeaderboardsForGameMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetLeaderboardsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetLeaderboardsForGame* UUWorksInterfaceWebLeaderboards::STATIC_GetLeaderboardsForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGame");

	UUWorksInterfaceWebLeaderboards_GetLeaderboardsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntriesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebLeaderboards::STATIC_GetLeaderboardEntriesMinimal(const struct FString& Key, int AppID, int RangeStart, int RangeEnd, int LeaderboardID, int DataRequest, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntriesMinimal");

	UUWorksInterfaceWebLeaderboards_GetLeaderboardEntriesMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.LeaderboardID = LeaderboardID;
	params.DataRequest = DataRequest;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetLeaderboardEntries* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetLeaderboardEntries* UUWorksInterfaceWebLeaderboards::STATIC_GetLeaderboardEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntries");

	UUWorksInterfaceWebLeaderboards_GetLeaderboardEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboardMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SortMethod                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyTrustedWrites             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyFriendsReads              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebLeaderboards::STATIC_FindOrCreateLeaderboardMinimal(const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboardMinimal");

	UUWorksInterfaceWebLeaderboards_FindOrCreateLeaderboardMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;
	params.SortMethod = SortMethod;
	params.DisplayType = DisplayType;
	params.bCreateIfNotFound = bCreateIfNotFound;
	params.bOnlyTrustedWrites = bOnlyTrustedWrites;
	params.bOnlyFriendsReads = bOnlyFriendsReads;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebFindOrCreateLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebFindOrCreateLeaderboard* UUWorksInterfaceWebLeaderboards::STATIC_FindOrCreateLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboard");

	UUWorksInterfaceWebLeaderboards_FindOrCreateLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboardMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebLeaderboards::STATIC_DeleteLeaderboardMinimal(const struct FString& Key, int AppID, const struct FString& Name, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboardMinimal");

	UUWorksInterfaceWebLeaderboards_DeleteLeaderboardMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebDeleteLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebDeleteLeaderboard* UUWorksInterfaceWebLeaderboards::STATIC_DeleteLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboard");

	UUWorksInterfaceWebLeaderboards_DeleteLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxnMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_RefundTxnMinimal(const struct FString& Key, const struct FString& OrderID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxnMinimal");

	UUWorksInterfaceWebMicroTxn_RefundTxnMinimal_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRefundTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRefundTxn* UUWorksInterfaceWebMicroTxn::STATIC_RefundTxn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxn");

	UUWorksInterfaceWebMicroTxn_RefundTxn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxnMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TransID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_QueryTxnMinimal(const struct FString& Key, int AppID, const struct FString& OrderID, const struct FString& TransID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxnMinimal");

	UUWorksInterfaceWebMicroTxn_QueryTxnMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.OrderID = OrderID;
	params.TransID = TransID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebQueryTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebQueryTxn* UUWorksInterfaceWebMicroTxn::STATIC_QueryTxn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxn");

	UUWorksInterfaceWebMicroTxn_QueryTxn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreementMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_ProcessAgreementMinimal(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, int Amount, const struct FString& Currency, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreementMinimal");

	UUWorksInterfaceWebMicroTxn_ProcessAgreementMinimal_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.Amount = Amount;
	params.Currency = Currency;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebProcessAgreement* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebProcessAgreement* UUWorksInterfaceWebMicroTxn::STATIC_ProcessAgreement()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreement");

	UUWorksInterfaceWebMicroTxn_ProcessAgreement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxnMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemIds                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantities                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Amounts                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Descriptions                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Categories                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    AssociatedBundles              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BillingTypes                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         StartDates                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         EndDates                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Periods                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Frequencies                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RecurringAmounts               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            BundleCount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    BundleIDs                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    BundleQuantities               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BundleDescriptions             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BundleCategories               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// UWorksWeb_EUWorksUserSession   UserSession                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_InitTxnMinimal(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, int AppID, int ItemCount, const struct FString& Language, const struct FString& Currency, TArray<struct FUWorksSteamItemDef> ItemIds, TArray<int> Quantities, TArray<int> Amounts, TArray<struct FString> Descriptions, TArray<struct FString> Categories, TArray<int> AssociatedBundles, TArray<struct FString> BillingTypes, TArray<struct FString> StartDates, TArray<struct FString> EndDates, TArray<struct FString> Periods, TArray<int> Frequencies, TArray<struct FString> RecurringAmounts, int BundleCount, TArray<int> BundleIDs, TArray<int> BundleQuantities, TArray<struct FString> BundleDescriptions, TArray<struct FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const struct FString& IPAddress, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxnMinimal");

	UUWorksInterfaceWebMicroTxn_InitTxnMinimal_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ItemCount = ItemCount;
	params.Language = Language;
	params.Currency = Currency;
	params.ItemIds = ItemIds;
	params.Quantities = Quantities;
	params.Amounts = Amounts;
	params.Descriptions = Descriptions;
	params.Categories = Categories;
	params.AssociatedBundles = AssociatedBundles;
	params.BillingTypes = BillingTypes;
	params.StartDates = StartDates;
	params.EndDates = EndDates;
	params.Periods = Periods;
	params.Frequencies = Frequencies;
	params.RecurringAmounts = RecurringAmounts;
	params.BundleCount = BundleCount;
	params.BundleIDs = BundleIDs;
	params.BundleQuantities = BundleQuantities;
	params.BundleDescriptions = BundleDescriptions;
	params.BundleCategories = BundleCategories;
	params.UserSession = UserSession;
	params.IPAddress = IPAddress;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebInitTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebInitTxn* UUWorksInterfaceWebMicroTxn::STATIC_InitTxn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxn");

	UUWorksInterfaceWebMicroTxn_InitTxn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfoMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_GetUserInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& IPAddress, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfoMinimal");

	UUWorksInterfaceWebMicroTxn_GetUserInfoMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.IPAddress = IPAddress;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetUserInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetUserInfo* UUWorksInterfaceWebMicroTxn::STATIC_GetUserInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfo");

	UUWorksInterfaceWebMicroTxn_GetUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfoMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_GetUserAgreementInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfoMinimal");

	UUWorksInterfaceWebMicroTxn_GetUserAgreementInfoMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetUserAgreementInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetUserAgreementInfo* UUWorksInterfaceWebMicroTxn::STATIC_GetUserAgreementInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfo");

	UUWorksInterfaceWebMicroTxn_GetUserAgreementInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetReportMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksWeb_EUWorksReportType    Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_GetReportMinimal(const struct FString& Key, int AppID, const struct FString& Time, UWorksWeb_EUWorksReportType Type, int MaxResults, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetReportMinimal");

	UUWorksInterfaceWebMicroTxn_GetReportMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Time = Time;
	params.Type = Type;
	params.MaxResults = MaxResults;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetReport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetReport* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetReport* UUWorksInterfaceWebMicroTxn::STATIC_GetReport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetReport");

	UUWorksInterfaceWebMicroTxn_GetReport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxnMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_FinalizeTxnMinimal(const struct FString& Key, const struct FString& OrderID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxnMinimal");

	UUWorksInterfaceWebMicroTxn_FinalizeTxnMinimal_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebFinalizeTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebFinalizeTxn* UUWorksInterfaceWebMicroTxn::STATIC_FinalizeTxn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxn");

	UUWorksInterfaceWebMicroTxn_FinalizeTxn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreementMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_CancelAgreementMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreementMinimal");

	UUWorksInterfaceWebMicroTxn_CancelAgreementMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCancelAgreement* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCancelAgreement* UUWorksInterfaceWebMicroTxn::STATIC_CancelAgreement()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreement");

	UUWorksInterfaceWebMicroTxn_CancelAgreement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreementMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NextProcessDate                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebMicroTxn::STATIC_AdjustAgreementMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FString& NextProcessDate, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreementMinimal");

	UUWorksInterfaceWebMicroTxn_AdjustAgreementMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.NextProcessDate = NextProcessDate;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebAdjustAgreement* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebAdjustAgreement* UUWorksInterfaceWebMicroTxn::STATIC_AdjustAgreement()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreement");

	UUWorksInterfaceWebMicroTxn_AdjustAgreement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Feeds                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebNews::STATIC_GetNewsForAppMinimal(int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppMinimal");

	UUWorksInterfaceWebNews_GetNewsForAppMinimal_Params params;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.EndDate = EndDate;
	params.Count = Count;
	params.Feeds = Feeds;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthedMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Feeds                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebNews::STATIC_GetNewsForAppAuthedMinimal(const struct FString& Key, int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthedMinimal");

	UUWorksInterfaceWebNews_GetNewsForAppAuthedMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.EndDate = EndDate;
	params.Count = Count;
	params.Feeds = Feeds;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetNewsForAppAuthed* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetNewsForAppAuthed* UUWorksInterfaceWebNews::STATIC_GetNewsForAppAuthed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthed");

	UUWorksInterfaceWebNews_GetNewsForAppAuthed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetNewsForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetNewsForApp* UUWorksInterfaceWebNews::STATIC_GetNewsForApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForApp");

	UUWorksInterfaceWebNews_GetNewsForApp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytimeMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPlaySessions     PlaySessions                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_RecordOfflinePlaytimeMinimal(const struct FUWorksSteamID& SteamID, const struct FString& Ticket, const struct FUWorksPlaySessions& PlaySessions, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytimeMinimal");

	UUWorksInterfaceWebPlayer_RecordOfflinePlaytimeMinimal_Params params;
	params.SteamID = SteamID;
	params.Ticket = Ticket;
	params.PlaySessions = PlaySessions;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRecordOfflinePlaytime* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRecordOfflinePlaytime* UUWorksInterfaceWebPlayer::STATIC_RecordOfflinePlaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytime");

	UUWorksInterfaceWebPlayer_RecordOfflinePlaytime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppIDPlaying                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_IsPlayingSharedGameMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppIDPlaying, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGameMinimal");

	UUWorksInterfaceWebPlayer_IsPlayingSharedGameMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDPlaying = AppIDPlaying;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebIsPlayingSharedGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebIsPlayingSharedGame* UUWorksInterfaceWebPlayer::STATIC_IsPlayingSharedGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGame");

	UUWorksInterfaceWebPlayer_IsPlayingSharedGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevelMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_GetSteamLevelMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevelMinimal");

	UUWorksInterfaceWebPlayer_GetSteamLevelMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetSteamLevel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetSteamLevel* UUWorksInterfaceWebPlayer::STATIC_GetSteamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevel");

	UUWorksInterfaceWebPlayer_GetSteamLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGamesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_GetRecentlyPlayedGamesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int Count, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGamesMinimal");

	UUWorksInterfaceWebPlayer_GetRecentlyPlayedGamesMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Count = Count;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetRecentlyPlayedGames* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetRecentlyPlayedGames* UUWorksInterfaceWebPlayer::STATIC_GetRecentlyPlayedGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGames");

	UUWorksInterfaceWebPlayer_GetRecentlyPlayedGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGamesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAppInfo                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludePlayedFreeGames        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    AppIDsFilter                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_GetOwnedGamesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> AppIDsFilter, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGamesMinimal");

	UUWorksInterfaceWebPlayer_GetOwnedGamesMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bIncludeAppInfo = bIncludeAppInfo;
	params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	params.AppIDsFilter = AppIDsFilter;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetOwnedGames* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetOwnedGames* UUWorksInterfaceWebPlayer::STATIC_GetOwnedGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGames");

	UUWorksInterfaceWebPlayer_GetOwnedGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgressMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BadgeID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_GetCommunityBadgeProgressMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int BadgeID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgressMinimal");

	UUWorksInterfaceWebPlayer_GetCommunityBadgeProgressMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.BadgeID = BadgeID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetCommunityBadgeProgress* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetCommunityBadgeProgress* UUWorksInterfaceWebPlayer::STATIC_GetCommunityBadgeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgress");

	UUWorksInterfaceWebPlayer_GetCommunityBadgeProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetBadgesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPlayer::STATIC_GetBadgesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetBadgesMinimal");

	UUWorksInterfaceWebPlayer_GetBadgesMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPlayer.GetBadges
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetBadges* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetBadges* UUWorksInterfaceWebPlayer::STATIC_GetBadges()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPlayer.GetBadges");

	UUWorksInterfaceWebPlayer_GetBadges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTagsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         AddTags                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RemoveTags                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedFile::STATIC_UpdateTagsMinimal(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, TArray<struct FString> AddTags, TArray<struct FString> RemoveTags, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTagsMinimal");

	UUWorksInterfaceWebPublishedFile_UpdateTagsMinimal_Params params;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.AddTags = AddTags;
	params.RemoveTags = RemoveTags;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebUpdateTags* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebUpdateTags* UUWorksInterfaceWebPublishedFile::STATIC_UpdateTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTags");

	UUWorksInterfaceWebPublishedFile_UpdateTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadataMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedFile::STATIC_SetDeveloperMetadataMinimal(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, const struct FString& MetaData, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadataMinimal");

	UUWorksInterfaceWebPublishedFile_SetDeveloperMetadataMinimal_Params params;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.MetaData = MetaData;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadata
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetDeveloperMetadata* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetDeveloperMetadata* UUWorksInterfaceWebPublishedFile::STATIC_SetDeveloperMetadata()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadata");

	UUWorksInterfaceWebPublishedFile_SetDeveloperMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFilesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         RequiredTags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         ExcludedTags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RequiredFlags                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         OmittedFlags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 SearchText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  ChildPublishedFileID           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeRecentVotesOnly        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksRequiredKVTags   RequiredKVTags                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bTotalOnly                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIDsOnly                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnVoteData                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnTags                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnKVTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnPreviews                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnChildren                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnShortDescription        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnForSaleData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnPlaytimeStats            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPerPage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchAllTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Language                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnMetadata                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedFile::STATIC_QueryFilesMinimal(const struct FString& Key, unsigned char QueryType, int Page, int CreatorAppID, int AppID, TArray<struct FString> RequiredTags, TArray<struct FString> ExcludedTags, TArray<struct FString> RequiredFlags, TArray<struct FString> OmittedFlags, const struct FString& SearchText, unsigned char FileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int ReturnPlaytimeStats, int NumPerPage, bool bMatchAllTags, int CacheMaxAgeSeconds, int Language, bool bReturnMetadata, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFilesMinimal");

	UUWorksInterfaceWebPublishedFile_QueryFilesMinimal_Params params;
	params.Key = Key;
	params.QueryType = QueryType;
	params.Page = Page;
	params.CreatorAppID = CreatorAppID;
	params.AppID = AppID;
	params.RequiredTags = RequiredTags;
	params.ExcludedTags = ExcludedTags;
	params.RequiredFlags = RequiredFlags;
	params.OmittedFlags = OmittedFlags;
	params.SearchText = SearchText;
	params.FileType = FileType;
	params.ChildPublishedFileID = ChildPublishedFileID;
	params.Days = Days;
	params.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
	params.RequiredKVTags = RequiredKVTags;
	params.bTotalOnly = bTotalOnly;
	params.bIDsOnly = bIDsOnly;
	params.bReturnVoteData = bReturnVoteData;
	params.bReturnTags = bReturnTags;
	params.bReturnKVTags = bReturnKVTags;
	params.bReturnPreviews = bReturnPreviews;
	params.bReturnChildren = bReturnChildren;
	params.bReturnShortDescription = bReturnShortDescription;
	params.bReturnForSaleData = bReturnForSaleData;
	params.ReturnPlaytimeStats = ReturnPlaytimeStats;
	params.NumPerPage = NumPerPage;
	params.bMatchAllTags = bMatchAllTags;
	params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
	params.Language = Language;
	params.bReturnMetadata = bReturnMetadata;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebQueryFiles* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebQueryFiles* UUWorksInterfaceWebPublishedFile::STATIC_QueryFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFiles");

	UUWorksInterfaceWebPublishedFile_QueryFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummaryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedItemSearch::STATIC_ResultSetSummaryMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummaryMinimal");

	UUWorksInterfaceWebPublishedItemSearch_ResultSetSummaryMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebResultSetSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebResultSetSummary* UUWorksInterfaceWebPublishedItemSearch::STATIC_ResultSetSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummary");

	UUWorksInterfaceWebPublishedItemSearch_ResultSetSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVoteMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedItemSearch::STATIC_RankedByVoteMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVoteMinimal");

	UUWorksInterfaceWebPublishedItemSearch_RankedByVoteMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVote
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRankedByVote* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRankedByVote* UUWorksInterfaceWebPublishedItemSearch::STATIC_RankedByVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVote");

	UUWorksInterfaceWebPublishedItemSearch_RankedByVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrendMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedItemSearch::STATIC_RankedByTrendMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, int Days, TArray<struct FString> Tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrendMinimal");

	UUWorksInterfaceWebPublishedItemSearch_RankedByTrendMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Days = Days;
	params.Tags = Tags;
	params.UserTags = UserTags;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRankedByTrend* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRankedByTrend* UUWorksInterfaceWebPublishedItemSearch::STATIC_RankedByTrend()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrend");

	UUWorksInterfaceWebPublishedItemSearch_RankedByTrend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrderMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedItemSearch::STATIC_RankedByPublicationOrderMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrderMinimal");

	UUWorksInterfaceWebPublishedItemSearch_RankedByPublicationOrderMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebRankedByPublicationOrder* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebRankedByPublicationOrder* UUWorksInterfaceWebPublishedItemSearch::STATIC_RankedByPublicationOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrder");

	UUWorksInterfaceWebPublishedItemSearch_RankedByPublicationOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummaryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedItemVoting::STATIC_UserVoteSummaryMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummaryMinimal");

	UUWorksInterfaceWebPublishedItemVoting_UserVoteSummaryMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.PublishedFileIDs = PublishedFileIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebUserVoteSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebUserVoteSummary* UUWorksInterfaceWebPublishedItemVoting::STATIC_UserVoteSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummary");

	UUWorksInterfaceWebPublishedItemVoting_UserVoteSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummaryMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebPublishedItemVoting::STATIC_ItemVoteSummaryMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummaryMinimal");

	UUWorksInterfaceWebPublishedItemVoting_ItemVoteSummaryMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.PublishedFileIDs = PublishedFileIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebItemVoteSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebItemVoteSummary* UUWorksInterfaceWebPublishedItemVoting::STATIC_ItemVoteSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummary");

	UUWorksInterfaceWebPublishedItemVoting_ItemVoteSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFileMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublishedFileID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_UnsubscribePublishedFileMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFileMinimal");

	UUWorksInterfaceWebRemoteStorage_UnsubscribePublishedFileMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebUnsubscribePublishedFile* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebUnsubscribePublishedFile* UUWorksInterfaceWebRemoteStorage::STATIC_UnsubscribePublishedFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFile");

	UUWorksInterfaceWebRemoteStorage_UnsubscribePublishedFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFileMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublishedFileID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_SubscribePublishedFileMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFileMinimal");

	UUWorksInterfaceWebRemoteStorage_SubscribePublishedFileMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSubscribePublishedFile* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSubscribePublishedFile* UUWorksInterfaceWebRemoteStorage::STATIC_SubscribePublishedFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFile");

	UUWorksInterfaceWebRemoteStorage_SubscribePublishedFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGCMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UGCID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_SetUGCUsedByGCMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, bool bUsed, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGCMinimal");

	UUWorksInterfaceWebRemoteStorage_SetUGCUsedByGCMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;
	params.bUsed = bUsed;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGC
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetUGCUsedByGC* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetUGCUsedByGC* UUWorksInterfaceWebRemoteStorage::STATIC_SetUGCUsedByGC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGC");

	UUWorksInterfaceWebRemoteStorage_SetUGCUsedByGC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetailsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UGCID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_GetUGCFileDetailsMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetailsMinimal");

	UUWorksInterfaceWebRemoteStorage_GetUGCFileDetailsMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetUGCFileDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetUGCFileDetails* UUWorksInterfaceWebRemoteStorage::STATIC_GetUGCFileDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetails");

	UUWorksInterfaceWebRemoteStorage_GetUGCFileDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetailsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_GetPublishedFileDetailsMinimal(int ItemCount, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetailsMinimal");

	UUWorksInterfaceWebRemoteStorage_GetPublishedFileDetailsMinimal_Params params;
	params.ItemCount = ItemCount;
	params.PublishedFileIDs = PublishedFileIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPublishedFileDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPublishedFileDetails* UUWorksInterfaceWebRemoteStorage::STATIC_GetPublishedFileDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetails");

	UUWorksInterfaceWebRemoteStorage_GetPublishedFileDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetailsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            CollectionCount                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_GetCollectionDetailsMinimal(int CollectionCount, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetailsMinimal");

	UUWorksInterfaceWebRemoteStorage_GetCollectionDetailsMinimal_Params params;
	params.CollectionCount = CollectionCount;
	params.PublishedFileIDs = PublishedFileIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetCollectionDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetCollectionDetails* UUWorksInterfaceWebRemoteStorage::STATIC_GetCollectionDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetails");

	UUWorksInterfaceWebRemoteStorage_GetCollectionDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFilesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ListType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_EnumerateUserSubscribedFilesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int ListType, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFilesMinimal");

	UUWorksInterfaceWebRemoteStorage_EnumerateUserSubscribedFilesMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ListType = ListType;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebEnumerateUserSubscribedFiles* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebEnumerateUserSubscribedFiles* UUWorksInterfaceWebRemoteStorage::STATIC_EnumerateUserSubscribedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFiles");

	UUWorksInterfaceWebRemoteStorage_EnumerateUserSubscribedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFilesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebRemoteStorage::STATIC_EnumerateUserPublishedFilesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFilesMinimal");

	UUWorksInterfaceWebRemoteStorage_EnumerateUserPublishedFilesMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebEnumerateUserPublishedFiles* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebEnumerateUserPublishedFiles* UUWorksInterfaceWebRemoteStorage::STATIC_EnumerateUserPublishedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFiles");

	UUWorksInterfaceWebRemoteStorage_EnumerateUserPublishedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURLMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 VanityURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  URLType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_ResolveVanityURLMinimal(const struct FString& Key, const struct FString& VanityURL, unsigned char URLType, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURLMinimal");

	UUWorksInterfaceWebUser_ResolveVanityURLMinimal_Params params;
	params.Key = Key;
	params.VanityURL = VanityURL;
	params.URLType = URLType;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebResolveVanityURL* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebResolveVanityURL* UUWorksInterfaceWebUser::STATIC_ResolveVanityURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURL");

	UUWorksInterfaceWebUser_ResolveVanityURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GrantPackageMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PackageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ThirdPartyKey                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ThirdPartyAppID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GrantPackageMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int PackageID, const struct FString& IPAddress, const struct FString& ThirdPartyKey, int ThirdPartyAppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GrantPackageMinimal");

	UUWorksInterfaceWebUser_GrantPackageMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.PackageID = PackageID;
	params.IPAddress = IPAddress;
	params.ThirdPartyKey = ThirdPartyKey;
	params.ThirdPartyAppID = ThirdPartyAppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GrantPackage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGrantPackage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGrantPackage* UUWorksInterfaceWebUser::STATIC_GrantPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GrantPackage");

	UUWorksInterfaceWebUser_GrantPackage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetUserGroupListMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetUserGroupListMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetUserGroupListMinimal");

	UUWorksInterfaceWebUser_GetUserGroupListMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetUserGroupList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetUserGroupList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetUserGroupList* UUWorksInterfaceWebUser::STATIC_GetUserGroupList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetUserGroupList");

	UUWorksInterfaceWebUser_GetUserGroupList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetPublisherAppOwnershipMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipMinimal");

	UUWorksInterfaceWebUser_GetPublisherAppOwnershipMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChangesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PackageRowVersion              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CDKeyRowVersion                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetPublisherAppOwnershipChangesMinimal(const struct FString& Key, const struct FString& PackageRowVersion, const struct FString& CDKeyRowVersion, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChangesMinimal");

	UUWorksInterfaceWebUser_GetPublisherAppOwnershipChangesMinimal_Params params;
	params.Key = Key;
	params.PackageRowVersion = PackageRowVersion;
	params.CDKeyRowVersion = CDKeyRowVersion;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChanges
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPublisherAppOwnershipChanges* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPublisherAppOwnershipChanges* UUWorksInterfaceWebUser::STATIC_GetPublisherAppOwnershipChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChanges");

	UUWorksInterfaceWebUser_GetPublisherAppOwnershipChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnership
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPublisherAppOwnership* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPublisherAppOwnership* UUWorksInterfaceWebUser::STATIC_GetPublisherAppOwnership()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnership");

	UUWorksInterfaceWebUser_GetPublisherAppOwnership_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummariesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDs                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetPlayerSummariesMinimal(const struct FString& Key, const struct FString& SteamIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummariesMinimal");

	UUWorksInterfaceWebUser_GetPlayerSummariesMinimal_Params params;
	params.Key = Key;
	params.SteamIDs = SteamIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummaries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPlayerSummaries* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPlayerSummaries* UUWorksInterfaceWebUser::STATIC_GetPlayerSummaries()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummaries");

	UUWorksInterfaceWebUser_GetPlayerSummaries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerBansMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDs                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetPlayerBansMinimal(const struct FString& Key, const struct FString& SteamIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerBansMinimal");

	UUWorksInterfaceWebUser_GetPlayerBansMinimal_Params params;
	params.Key = Key;
	params.SteamIDs = SteamIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerBans
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPlayerBans* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPlayerBans* UUWorksInterfaceWebUser::STATIC_GetPlayerBans()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerBans");

	UUWorksInterfaceWebUser_GetPlayerBans_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetFriendListMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Relationship                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetFriendListMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Relationship, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetFriendListMinimal");

	UUWorksInterfaceWebUser_GetFriendListMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Relationship = Relationship;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetFriendList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetFriendList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetFriendList* UUWorksInterfaceWebUser::STATIC_GetFriendList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetFriendList");

	UUWorksInterfaceWebUser_GetFriendList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfoMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AppIDs                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_GetAppPriceInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AppIDs, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfoMinimal");

	UUWorksInterfaceWebUser_GetAppPriceInfoMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDs = AppIDs;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetAppPriceInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetAppPriceInfo* UUWorksInterfaceWebUser::STATIC_GetAppPriceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfo");

	UUWorksInterfaceWebUser_GetAppPriceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnershipMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUser::STATIC_CheckAppOwnershipMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnershipMinimal");

	UUWorksInterfaceWebUser_CheckAppOwnershipMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnership
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebCheckAppOwnership* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebCheckAppOwnership* UUWorksInterfaceWebUser::STATIC_CheckAppOwnership()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnership");

	UUWorksInterfaceWebUser_CheckAppOwnership_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicketMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserAuth::STATIC_AuthenticateUserTicketMinimal(const struct FString& Key, int AppID, const struct FString& Ticket, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicketMinimal");

	UUWorksInterfaceWebUserAuth_AuthenticateUserTicketMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Ticket = Ticket;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebAuthenticateUserTicket* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebAuthenticateUserTicket* UUWorksInterfaceWebUserAuth::STATIC_AuthenticateUserTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicket");

	UUWorksInterfaceWebUserAuth_AuthenticateUserTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          SessionKey                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          EncryptedLoginKey              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserAuth::STATIC_AuthenticateUserMinimal(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserMinimal");

	UUWorksInterfaceWebUserAuth_AuthenticateUserMinimal_Params params;
	params.SteamID = SteamID;
	params.SessionKey = SessionKey;
	params.EncryptedLoginKey = EncryptedLoginKey;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebAuthenticateUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebAuthenticateUser* UUWorksInterfaceWebUserAuth::STATIC_AuthenticateUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUser");

	UUWorksInterfaceWebUserAuth_AuthenticateUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Name                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Value                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_SetUserStatsForGameMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<struct FString> Name, TArray<int> Value, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGameMinimal");

	UUWorksInterfaceWebUserStats_SetUserStatsForGameMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.Name = Name;
	params.Value = Value;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetUserStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetUserStatsForGame* UUWorksInterfaceWebUserStats::STATIC_SetUserStatsForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGame");

	UUWorksInterfaceWebUserStats_SetUserStatsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_GetUserStatsForGameMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGameMinimal");

	UUWorksInterfaceWebUserStats_GetUserStatsForGameMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetUserStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetUserStatsForGame* UUWorksInterfaceWebUserStats::STATIC_GetUserStatsForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGame");

	UUWorksInterfaceWebUserStats_GetUserStatsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_GetSchemaForGameMinimal(const struct FString& Key, int AppID, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGameMinimal");

	UUWorksInterfaceWebUserStats_GetSchemaForGameMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetSchemaForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetSchemaForGame* UUWorksInterfaceWebUserStats::STATIC_GetSchemaForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGame");

	UUWorksInterfaceWebUserStats_GetSchemaForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievementsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_GetPlayerAchievementsMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& Language, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievementsMinimal");

	UUWorksInterfaceWebUserStats_GetPlayerAchievementsMinimal_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetPlayerAchievements* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetPlayerAchievements* UUWorksInterfaceWebUserStats::STATIC_GetPlayerAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievements");

	UUWorksInterfaceWebUserStats_GetPlayerAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayersMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_GetNumberOfCurrentPlayersMinimal(int AppID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayersMinimal");

	UUWorksInterfaceWebUserStats_GetNumberOfCurrentPlayersMinimal_Params params;
	params.AppID = AppID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetNumberOfCurrentPlayers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetNumberOfCurrentPlayers* UUWorksInterfaceWebUserStats::STATIC_GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayers");

	UUWorksInterfaceWebUserStats_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGameMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Name                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            StartDate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_GetGlobalStatsForGameMinimal(int AppID, int Count, TArray<struct FString> Name, int StartDate, int EndDate, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGameMinimal");

	UUWorksInterfaceWebUserStats_GetGlobalStatsForGameMinimal_Params params;
	params.AppID = AppID;
	params.Count = Count;
	params.Name = Name;
	params.StartDate = StartDate;
	params.EndDate = EndDate;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetGlobalStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetGlobalStatsForGame* UUWorksInterfaceWebUserStats::STATIC_GetGlobalStatsForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGame");

	UUWorksInterfaceWebUserStats_GetGlobalStatsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForAppMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebUserStats::STATIC_GetGlobalAchievementPercentagesForAppMinimal(const struct FUWorksGameID& GameID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForAppMinimal");

	UUWorksInterfaceWebUserStats_GetGlobalAchievementPercentagesForAppMinimal_Params params;
	params.GameID = GameID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* UUWorksInterfaceWebUserStats::STATIC_GetGlobalAchievementPercentagesForApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForApp");

	UUWorksInterfaceWebUserStats_GetGlobalAchievementPercentagesForApp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRulesMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameItemID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPartnerAccounts  PartnerAccounts                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bMakeWorkshopFilesSubscribable (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bValidateOnly                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebWorkshop::STATIC_SetItemPaymentRulesMinimal(const struct FString& Key, int AppID, int GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRulesMinimal");

	UUWorksInterfaceWebWorkshop_SetItemPaymentRulesMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.GameItemID = GameItemID;
	params.AssociatedWorkshopFiles = AssociatedWorkshopFiles;
	params.PartnerAccounts = PartnerAccounts;
	params.bMakeWorkshopFilesSubscribable = bMakeWorkshopFilesSubscribable;
	params.bValidateOnly = bValidateOnly;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRules
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebSetItemPaymentRules* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebSetItemPaymentRules* UUWorksInterfaceWebWorkshop::STATIC_SetItemPaymentRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRules");

	UUWorksInterfaceWebWorkshop_SetItemPaymentRules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptionsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksLanguages        Languages                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebWorkshop::STATIC_PopulateItemDescriptionsMinimal(const struct FString& Key, int AppID, const struct FUWorksLanguages& Languages, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptionsMinimal");

	UUWorksInterfaceWebWorkshop_PopulateItemDescriptionsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Languages = Languages;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebPopulateItemDescriptions* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebPopulateItemDescriptions* UUWorksInterfaceWebWorkshop::STATIC_PopulateItemDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptions");

	UUWorksInterfaceWebWorkshop_PopulateItemDescriptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenueMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DateStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DateEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebWorkshop::STATIC_GetItemDailyRevenueMinimal(const struct FString& Key, int AppID, const struct FString& ItemId, int DateStart, int DateEnd, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenueMinimal");

	UUWorksInterfaceWebWorkshop_GetItemDailyRevenueMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.DateStart = DateStart;
	params.DateEnd = DateEnd;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetItemDailyRevenue* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetItemDailyRevenue* UUWorksInterfaceWebWorkshop::STATIC_GetItemDailyRevenue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenue");

	UUWorksInterfaceWebWorkshop_GetItemDailyRevenue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributorsMinimal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameItemID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceWebWorkshop::STATIC_GetFinalizedContributorsMinimal(const struct FString& Key, int AppID, int GameItemID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributorsMinimal");

	UUWorksInterfaceWebWorkshop_GetFinalizedContributorsMinimal_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.GameItemID = GameItemID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestWebGetFinalizedContributors* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestWebGetFinalizedContributors* UUWorksInterfaceWebWorkshop::STATIC_GetFinalizedContributors()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributors");

	UUWorksInterfaceWebWorkshop_GetFinalizedContributors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksRequestWeb.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestWeb::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWeb.IsActive");

	UUWorksRequestWeb_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksRequestWeb.GetStatus
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksRequestWeb::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWeb.GetStatus");

	UUWorksRequestWeb_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UWorksRequestWeb.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestWeb::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWeb.Deactivate");

	UUWorksRequestWeb_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWeb.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestWeb::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWeb.Activate");

	UUWorksRequestWeb_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAppBetas.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppBetas::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppBetas.SetInput");

	UUWorksRequestWebGetAppBetas_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAppBetas.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppBetas::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppBetas.GetOutput");

	UUWorksRequestWebGetAppBetas_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAppBuilds.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppBuilds::SetInput(const struct FString& Key, int AppID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppBuilds.SetInput");

	UUWorksRequestWebGetAppBuilds_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAppBuilds.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppBuilds::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppBuilds.GetOutput");

	UUWorksRequestWebGetAppBuilds_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAppDepotVersions.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppDepotVersions::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppDepotVersions.SetInput");

	UUWorksRequestWebGetAppDepotVersions_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAppDepotVersions.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppDepotVersions::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppDepotVersions.GetOutput");

	UUWorksRequestWebGetAppDepotVersions_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAppList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppList::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppList.GetOutput");

	UUWorksRequestWebGetAppList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetCheatingReportsList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportIDMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCheatingReportsList::SetInput(const struct FString& Key, int AppID, int TimeBegin, int TimeEnd, bool bIncludeReports, bool bIncludeBans, const struct FString& ReportIDMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCheatingReportsList.SetInput");

	UUWorksRequestWebGetCheatingReportsList_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.TimeBegin = TimeBegin;
	params.TimeEnd = TimeEnd;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.ReportIDMin = ReportIDMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetCheatingReportsList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCheatingReportsList::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCheatingReportsList.GetOutput");

	UUWorksRequestWebGetCheatingReportsList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPlayersBanned.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayersBanned::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayersBanned.SetInput");

	UUWorksRequestWebGetPlayersBanned_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPlayersBanned.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayersBanned::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayersBanned.GetOutput");

	UUWorksRequestWebGetPlayersBanned_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetServerList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filter                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServerList::SetInput(const struct FString& Key, const struct FString& Filter, int Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServerList.SetInput");

	UUWorksRequestWebGetServerList_SetInput_Params params;
	params.Key = Key;
	params.Filter = Filter;
	params.Limit = Limit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetServerList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServerList::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServerList.GetOutput");

	UUWorksRequestWebGetServerList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetServersAtAddress.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Addr                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServersAtAddress::SetInput(const struct FString& Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServersAtAddress.SetInput");

	UUWorksRequestWebGetServersAtAddress_SetInput_Params params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetServersAtAddress.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServersAtAddress::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServersAtAddress.GetOutput");

	UUWorksRequestWebGetServersAtAddress_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetAppBuildLive.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BuildId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BetaKey                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetAppBuildLive::SetInput(const struct FString& Key, int AppID, int BuildId, const struct FString& BetaKey, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetAppBuildLive.SetInput");

	UUWorksRequestWebSetAppBuildLive_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.BuildId = BuildId;
	params.BetaKey = BetaKey;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetAppBuildLive.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetAppBuildLive::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetAppBuildLive.GetOutput");

	UUWorksRequestWebSetAppBuildLive_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebUpToDateCheck.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VersionToCheck                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUpToDateCheck::SetInput(int AppID, int VersionToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUpToDateCheck.SetInput");

	UUWorksRequestWebUpToDateCheck_SetInput_Params params;
	params.AppID = AppID;
	params.VersionToCheck = VersionToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebUpToDateCheck.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUpToDateCheck::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUpToDateCheck.GetOutput");

	UUWorksRequestWebUpToDateCheck_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebPostGameDataFrame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BroadcastID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FrameData                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebPostGameDataFrame::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& BroadcastID, const struct FString& FrameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebPostGameDataFrame.SetInput");

	UUWorksRequestWebPostGameDataFrame_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.BroadcastID = BroadcastID;
	params.FrameData = FrameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebPostGameDataFrame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebPostGameDataFrame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebPostGameDataFrame.GetOutput");

	UUWorksRequestWebPostGameDataFrame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebReportPlayerCheating.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDReporter                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHeuristic                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDetection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerReport                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoReportID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SuspicionStartTime             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebReportPlayerCheating::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& SteamIDReporter, int AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int SuspicionStartTime, int Severity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebReportPlayerCheating.SetInput");

	UUWorksRequestWebReportPlayerCheating_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SteamIDReporter = SteamIDReporter;
	params.AppData = AppData;
	params.bHeuristic = bHeuristic;
	params.bDetection = bDetection;
	params.bPlayerReport = bPlayerReport;
	params.bNoReportID = bNoReportID;
	params.GameMode = GameMode;
	params.SuspicionStartTime = SuspicionStartTime;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebReportPlayerCheating.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebReportPlayerCheating::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebReportPlayerCheating.GetOutput");

	UUWorksRequestWebReportPlayerCheating_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRequestPlayerGameBan.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReportID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDelayBan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRequestPlayerGameBan::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& ReportID, const struct FString& CheatDescription, int Duration, bool bDelayBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRequestPlayerGameBan.SetInput");

	UUWorksRequestWebRequestPlayerGameBan_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ReportID = ReportID;
	params.CheatDescription = CheatDescription;
	params.Duration = Duration;
	params.bDelayBan = bDelayBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRequestPlayerGameBan.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRequestPlayerGameBan::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRequestPlayerGameBan.GetOutput");

	UUWorksRequestWebRequestPlayerGameBan_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRemovePlayerGameBan.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRemovePlayerGameBan::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRemovePlayerGameBan.SetInput");

	UUWorksRequestWebRemovePlayerGameBan_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRemovePlayerGameBan.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRemovePlayerGameBan::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRemovePlayerGameBan.GetOutput");

	UUWorksRequestWebRemovePlayerGameBan_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetCheatingReports.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportIDMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCheatingReports::SetInput(const struct FString& Key, int AppID, int TimeEnd, int TimeBegin, const struct FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCheatingReports.SetInput");

	UUWorksRequestWebGetCheatingReports_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.TimeEnd = TimeEnd;
	params.TimeBegin = TimeBegin;
	params.ReportIDMin = ReportIDMin;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetCheatingReports.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCheatingReports::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCheatingReports.GetOutput");

	UUWorksRequestWebGetCheatingReports_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRequestVacStatusForUser.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRequestVacStatusForUser::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRequestVacStatusForUser.SetInput");

	UUWorksRequestWebRequestVacStatusForUser_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRequestVacStatusForUser.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRequestVacStatusForUser::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRequestVacStatusForUser.GetOutput");

	UUWorksRequestWebRequestVacStatusForUser_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebStartSecureMultiplayerSession::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.SetInput");

	UUWorksRequestWebStartSecureMultiplayerSession_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebStartSecureMultiplayerSession::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.GetOutput");

	UUWorksRequestWebStartSecureMultiplayerSession_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEndSecureMultiplayerSession::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.SetInput");

	UUWorksRequestWebEndSecureMultiplayerSession_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEndSecureMultiplayerSession::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.GetOutput");

	UUWorksRequestWebEndSecureMultiplayerSession_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebReportCheatData.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PathAndFileName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 WebCheatURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeNow                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeStarted                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeStopped                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameProcessID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CheatProcessID                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatParamA                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatParamB                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebReportCheatData::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& PathAndFileName, const struct FString& WebCheatURL, const struct FString& TimeNow, const struct FString& TimeStarted, const struct FString& TimeStopped, const struct FString& CheatName, int GameProcessID, int CheatProcessID, const struct FString& CheatParamA, const struct FString& CheatParamB)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebReportCheatData.SetInput");

	UUWorksRequestWebReportCheatData_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PathAndFileName = PathAndFileName;
	params.WebCheatURL = WebCheatURL;
	params.TimeNow = TimeNow;
	params.TimeStarted = TimeStarted;
	params.TimeStopped = TimeStopped;
	params.CheatName = CheatName;
	params.GameProcessID = GameProcessID;
	params.CheatProcessID = CheatProcessID;
	params.CheatParamA = CheatParamA;
	params.CheatParamB = CheatParamB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebReportCheatData.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebReportCheatData::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebReportCheatData.GetOutput");

	UUWorksRequestWebReportCheatData_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebReportAbuse.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDActor                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDTarget                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  AbuseType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GID                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebReportAbuse::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int AppID, unsigned char AbuseType, unsigned char ContentType, const struct FString& Description, const struct FString& GID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebReportAbuse.SetInput");

	UUWorksRequestWebReportAbuse_SetInput_Params params;
	params.Key = Key;
	params.SteamIDActor = SteamIDActor;
	params.SteamIDTarget = SteamIDTarget;
	params.AppID = AppID;
	params.AbuseType = AbuseType;
	params.ContentType = ContentType;
	params.Description = Description;
	params.GID = GID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebReportAbuse.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebReportAbuse::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebReportAbuse.GetOutput");

	UUWorksRequestWebReportAbuse_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetTradeHistory.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxTrades                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartAfterTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StartAfterTradeID              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNavigatingBack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescription                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeFailed                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeTotal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeHistory::SetInput(const struct FString& Key, int MaxTrades, int StartAfterTime, const struct FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeHistory.SetInput");

	UUWorksRequestWebGetTradeHistory_SetInput_Params params;
	params.Key = Key;
	params.MaxTrades = MaxTrades;
	params.StartAfterTime = StartAfterTime;
	params.StartAfterTradeID = StartAfterTradeID;
	params.bNavigatingBack = bNavigatingBack;
	params.bGetDescription = bGetDescription;
	params.Language = Language;
	params.bIncludeFailed = bIncludeFailed;
	params.bIncludeTotal = bIncludeTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetTradeHistory.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeHistory::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeHistory.GetOutput");

	UUWorksRequestWebGetTradeHistory_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebFlushInventoryCache.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFlushInventoryCache::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFlushInventoryCache.SetInput");

	UUWorksRequestWebFlushInventoryCache_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ContextID = ContextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebFlushInventoryCache.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFlushInventoryCache::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFlushInventoryCache.GetOutput");

	UUWorksRequestWebFlushInventoryCache_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFlushAssetAppearanceCache::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.SetInput");

	UUWorksRequestWebFlushAssetAppearanceCache_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFlushAssetAppearanceCache::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.GetOutput");

	UUWorksRequestWebFlushAssetAppearanceCache_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebFlushContextCache.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFlushContextCache::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFlushContextCache.SetInput");

	UUWorksRequestWebFlushContextCache_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebFlushContextCache.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFlushContextCache::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFlushContextCache.GetOutput");

	UUWorksRequestWebFlushContextCache_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetTradeOffers.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetSentOffers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetReceivedOffers             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescription                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHistoricalOnly                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeHistoricalCutoff           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeOffers::SetInput(const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int TimeHistoricalCutoff)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeOffers.SetInput");

	UUWorksRequestWebGetTradeOffers_SetInput_Params params;
	params.Key = Key;
	params.bGetSentOffers = bGetSentOffers;
	params.bGetReceivedOffers = bGetReceivedOffers;
	params.bGetDescription = bGetDescription;
	params.Language = Language;
	params.bActiveOnly = bActiveOnly;
	params.bHistoricalOnly = bHistoricalOnly;
	params.TimeHistoricalCutoff = TimeHistoricalCutoff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetTradeOffers.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeOffers::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeOffers.GetOutput");

	UUWorksRequestWebGetTradeOffers_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetTradeOffer.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeOffer::SetInput(const struct FString& Key, const struct FString& TradeOfferID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeOffer.SetInput");

	UUWorksRequestWebGetTradeOffer_SetInput_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetTradeOffer.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeOffer::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeOffer.GetOutput");

	UUWorksRequestWebGetTradeOffer_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetTradeOffersSummary.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeLastVisit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeOffersSummary::SetInput(const struct FString& Key, int TimeLastVisit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeOffersSummary.SetInput");

	UUWorksRequestWebGetTradeOffersSummary_SetInput_Params params;
	params.Key = Key;
	params.TimeLastVisit = TimeLastVisit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetTradeOffersSummary.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetTradeOffersSummary::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetTradeOffersSummary.GetOutput");

	UUWorksRequestWebGetTradeOffersSummary_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebDeclineTradeOffer.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeclineTradeOffer::SetInput(const struct FString& Key, const struct FString& TradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeclineTradeOffer.SetInput");

	UUWorksRequestWebDeclineTradeOffer_SetInput_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebDeclineTradeOffer.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeclineTradeOffer::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeclineTradeOffer.GetOutput");

	UUWorksRequestWebDeclineTradeOffer_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCancelTradeOffer.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCancelTradeOffer::SetInput(const struct FString& Key, const struct FString& TradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCancelTradeOffer.SetInput");

	UUWorksRequestWebCancelTradeOffer_SetInput_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCancelTradeOffer.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCancelTradeOffer::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCancelTradeOffer.GetOutput");

	UUWorksRequestWebCancelTradeOffer_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetMarketEligibility.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetMarketEligibility::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetMarketEligibility.SetInput");

	UUWorksRequestWebGetMarketEligibility_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetMarketEligibility.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetMarketEligibility::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetMarketEligibility.GetOutput");

	UUWorksRequestWebGetMarketEligibility_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCancelAppListingsForUser.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSynchronous                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCancelAppListingsForUser::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCancelAppListingsForUser.SetInput");

	UUWorksRequestWebCancelAppListingsForUser_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bSynchronous = bSynchronous;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCancelAppListingsForUser.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCancelAppListingsForUser::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCancelAppListingsForUser.GetOutput");

	UUWorksRequestWebCancelAppListingsForUser_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAssetID.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ListingID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAssetID::SetInput(const struct FString& Key, int AppID, const struct FString& ListingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAssetID.SetInput");

	UUWorksRequestWebGetAssetID_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ListingID = ListingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAssetID.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAssetID::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAssetID.GetOutput");

	UUWorksRequestWebGetAssetID_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPopular.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Rows                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FilterAppID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ECurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPopular::SetInput(const struct FString& Key, const struct FString& Language, int Rows, int Start, int FilterAppID, int ECurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPopular.SetInput");

	UUWorksRequestWebGetPopular_SetInput_Params params;
	params.Key = Key;
	params.Language = Language;
	params.Rows = Rows;
	params.Start = Start;
	params.FilterAppID = FilterAppID;
	params.ECurrency = ECurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPopular.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPopular::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPopular.GetOutput");

	UUWorksRequestWebGetPopular_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCanTrade.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          TargetId                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCanTrade::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCanTrade.SetInput");

	UUWorksRequestWebCanTrade_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCanTrade.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCanTrade::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCanTrade.GetOutput");

	UUWorksRequestWebCanTrade_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TxnID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFinalizeAssetTransaction::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& TxnID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.SetInput");

	UUWorksRequestWebFinalizeAssetTransaction_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TxnID = TxnID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFinalizeAssetTransaction::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.GetOutput");

	UUWorksRequestWebFinalizeAssetTransaction_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAssetClassInfo.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ClassCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ClassID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstanceID                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAssetClassInfo::SetInput(const struct FString& Key, int AppID, int ClassCount, const struct FString& ClassID, const struct FString& Language, const struct FString& InstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAssetClassInfo.SetInput");

	UUWorksRequestWebGetAssetClassInfo_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ClassCount = ClassCount;
	params.ClassID = ClassID;
	params.Language = Language;
	params.InstanceID = InstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAssetClassInfo.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAssetClassInfo::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAssetClassInfo.GetOutput");

	UUWorksRequestWebGetAssetClassInfo_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAssetPrices.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAssetPrices::SetInput(const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAssetPrices.SetInput");

	UUWorksRequestWebGetAssetPrices_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Currency = Currency;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAssetPrices.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAssetPrices::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAssetPrices.GetOutput");

	UUWorksRequestWebGetAssetPrices_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetExportedAssetsForUser::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.SetInput");

	UUWorksRequestWebGetExportedAssetsForUser_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ContextID = ContextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetExportedAssetsForUser::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.GetOutput");

	UUWorksRequestWebGetExportedAssetsForUser_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetMarketPrices.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetMarketPrices::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetMarketPrices.SetInput");

	UUWorksRequestWebGetMarketPrices_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetMarketPrices.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetMarketPrices::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetMarketPrices.GetOutput");

	UUWorksRequestWebGetMarketPrices_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebStartAssetTransaction.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AssetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AssetQuantity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Referrer                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClientAuth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebStartAssetTransaction::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& AssetID, int AssetQuantity, const struct FString& Currency, const struct FString& Language, const struct FString& IPAddress, const struct FString& Referrer, bool bClientAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebStartAssetTransaction.SetInput");

	UUWorksRequestWebStartAssetTransaction_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.AssetID = AssetID;
	params.AssetQuantity = AssetQuantity;
	params.Currency = Currency;
	params.Language = Language;
	params.IPAddress = IPAddress;
	params.Referrer = Referrer;
	params.bClientAuth = bClientAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebStartAssetTransaction.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebStartAssetTransaction::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebStartAssetTransaction.GetOutput");

	UUWorksRequestWebStartAssetTransaction_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebStartTrade.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          PartyA                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          PartyB                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebStartTrade::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebStartTrade.SetInput");

	UUWorksRequestWebStartTrade_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.PartyA = PartyA;
	params.PartyB = PartyB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebStartTrade.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebStartTrade::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebStartTrade.GetOutput");

	UUWorksRequestWebStartTrade_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Command                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Arguments                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetHistoryCommandDetails::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& Command, const struct FString& ContextID, const struct FString& Arguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.SetInput");

	UUWorksRequestWebGetHistoryCommandDetails_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Command = Command;
	params.ContextID = ContextID;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetHistoryCommandDetails::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.GetOutput");

	UUWorksRequestWebGetHistoryCommandDetails_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetUserHistory.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserHistory::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, int StartTime, int EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserHistory.SetInput");

	UUWorksRequestWebGetUserHistory_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ContextID = ContextID;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetUserHistory.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserHistory::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserHistory.GetOutput");

	UUWorksRequestWebGetUserHistory_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebHistoryExecuteCommands.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ActorId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebHistoryExecuteCommands::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, const struct FString& ActorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebHistoryExecuteCommands.SetInput");

	UUWorksRequestWebHistoryExecuteCommands_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ContextID = ContextID;
	params.ActorId = ActorId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebHistoryExecuteCommands.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebHistoryExecuteCommands::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebHistoryExecuteCommands.GetOutput");

	UUWorksRequestWebHistoryExecuteCommands_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSupportGetAssetHistory.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AssetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSupportGetAssetHistory::SetInput(const struct FString& Key, int AppID, const struct FString& AssetID, const struct FString& ContextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSupportGetAssetHistory.SetInput");

	UUWorksRequestWebSupportGetAssetHistory_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.AssetID = AssetID;
	params.ContextID = ContextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSupportGetAssetHistory.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSupportGetAssetHistory::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSupportGetAssetHistory.GetOutput");

	UUWorksRequestWebSupportGetAssetHistory_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCreateSession.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Context                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTitle            Title                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUsers            Users                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCreateSession::SetInput(const struct FString& Key, int AppID, const struct FString& Context, const struct FUWorksTitle& Title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCreateSession.SetInput");

	UUWorksRequestWebCreateSession_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Context = Context;
	params.Title = Title;
	params.Users = Users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCreateSession.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCreateSession::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCreateSession.GetOutput");

	UUWorksRequestWebCreateSession_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebUpdateSession.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTitle            Title                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUsers            Users                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUpdateSession::SetInput(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksTitle& Title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUpdateSession.SetInput");

	UUWorksRequestWebUpdateSession_SetInput_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.Title = Title;
	params.Users = Users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebUpdateSession.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUpdateSession::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUpdateSession.GetOutput");

	UUWorksRequestWebUpdateSession_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAllUserMessages        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAuthUserMessage        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEnumerateSessionsForApp::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.SetInput");

	UUWorksRequestWebEnumerateSessionsForApp_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bIncludeAllUserMessages = bIncludeAllUserMessages;
	params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEnumerateSessionsForApp::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.GetOutput");

	UUWorksRequestWebEnumerateSessionsForApp_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSessions         Sessions                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetSessionDetailsForApp::SetInput(const struct FString& Key, const struct FUWorksSessions& Sessions, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.SetInput");

	UUWorksRequestWebGetSessionDetailsForApp_SetInput_Params params;
	params.Key = Key;
	params.Sessions = Sessions;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetSessionDetailsForApp::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.GetOutput");

	UUWorksRequestWebGetSessionDetailsForApp_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRequestNotifications.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRequestNotifications::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRequestNotifications.SetInput");

	UUWorksRequestWebRequestNotifications_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRequestNotifications.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRequestNotifications::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRequestNotifications.GetOutput");

	UUWorksRequestWebRequestNotifications_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebDeleteSession.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteSession::SetInput(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteSession.SetInput");

	UUWorksRequestWebDeleteSession_SetInput_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebDeleteSession.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteSession::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteSession.GetOutput");

	UUWorksRequestWebDeleteSession_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebDeleteSessionBatch.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteSessionBatch::SetInput(const struct FString& Key, const struct FString& SessionId, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteSessionBatch.SetInput");

	UUWorksRequestWebDeleteSessionBatch_SetInput_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebDeleteSessionBatch.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteSessionBatch::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteSessionBatch.GetOutput");

	UUWorksRequestWebDeleteSessionBatch_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAccountList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAccountList::SetInput(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAccountList.SetInput");

	UUWorksRequestWebGetAccountList_SetInput_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAccountList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAccountList::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAccountList.GetOutput");

	UUWorksRequestWebGetAccountList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCreateAccount.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCreateAccount::SetInput(const struct FString& Key, int AppID, const struct FString& Memo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCreateAccount.SetInput");

	UUWorksRequestWebCreateAccount_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Memo = Memo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCreateAccount.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCreateAccount::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCreateAccount.GetOutput");

	UUWorksRequestWebCreateAccount_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetMemo.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetMemo::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Memo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetMemo.SetInput");

	UUWorksRequestWebSetMemo_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Memo = Memo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetMemo.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetMemo::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetMemo.GetOutput");

	UUWorksRequestWebSetMemo_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebResetLoginToken.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResetLoginToken::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResetLoginToken.SetInput");

	UUWorksRequestWebResetLoginToken_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebResetLoginToken.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResetLoginToken::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResetLoginToken.GetOutput");

	UUWorksRequestWebResetLoginToken_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebDeleteAccount.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteAccount::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteAccount.SetInput");

	UUWorksRequestWebDeleteAccount_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebDeleteAccount.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteAccount::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteAccount.GetOutput");

	UUWorksRequestWebDeleteAccount_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAccountPublicInfo.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAccountPublicInfo::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAccountPublicInfo.SetInput");

	UUWorksRequestWebGetAccountPublicInfo_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAccountPublicInfo.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAccountPublicInfo::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAccountPublicInfo.GetOutput");

	UUWorksRequestWebGetAccountPublicInfo_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebQueryLoginToken.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LoginToken                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebQueryLoginToken::SetInput(const struct FString& Key, const struct FString& LoginToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebQueryLoginToken.SetInput");

	UUWorksRequestWebQueryLoginToken_SetInput_Params params;
	params.Key = Key;
	params.LoginToken = LoginToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebQueryLoginToken.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebQueryLoginToken::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebQueryLoginToken.GetOutput");

	UUWorksRequestWebQueryLoginToken_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetBanStatus.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBanned                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BanSeconds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetBanStatus::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int BanSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetBanStatus.SetInput");

	UUWorksRequestWebSetBanStatus_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bBanned = bBanned;
	params.BanSeconds = BanSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetBanStatus.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetBanStatus::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetBanStatus.GetOutput");

	UUWorksRequestWebSetBanStatus_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ServerIPs                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServerSteamIDsByIP::SetInput(const struct FString& Key, const struct FString& ServerIPs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.SetInput");

	UUWorksRequestWebGetServerSteamIDsByIP_SetInput_Params params;
	params.Key = Key;
	params.ServerIPs = ServerIPs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServerSteamIDsByIP::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.GetOutput");

	UUWorksRequestWebGetServerSteamIDsByIP_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ServerSteamID                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServerIPsBySteamID::SetInput(const struct FString& Key, const struct FUWorksSteamID& ServerSteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.SetInput");

	UUWorksRequestWebGetServerIPsBySteamID_SetInput_Params params;
	params.Key = Key;
	params.ServerSteamID = ServerSteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetServerIPsBySteamID::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.GetOutput");

	UUWorksRequestWebGetServerIPsBySteamID_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RangeStart                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RangeEnd                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetGameServerPlayerStatsForGame::SetInput(const struct FString& Key, const struct FUWorksGameID& GameID, int AppID, const struct FString& RangeStart, const struct FString& RangeEnd, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.SetInput");

	UUWorksRequestWebGetGameServerPlayerStatsForGame_SetInput_Params params;
	params.Key = Key;
	params.GameID = GameID;
	params.AppID = AppID;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetGameServerPlayerStatsForGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.GetOutput");

	UUWorksRequestWebGetGameServerPlayerStatsForGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebAddItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 ItemPropsJSON                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAddItem::SetInput(const struct FString& Key, int AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAddItem.SetInput");

	UUWorksRequestWebAddItem_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemDefID = ItemDefID;
	params.ItemPropsJSON = ItemPropsJSON;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebAddItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAddItem::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAddItem.GetOutput");

	UUWorksRequestWebAddItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebAddPromoItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ItemPropsJSON                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAddPromoItem::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamItemDef& ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAddPromoItem.SetInput");

	UUWorksRequestWebAddPromoItem_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemDefID = ItemDefID;
	params.ItemPropsJSON = ItemPropsJSON;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebAddPromoItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAddPromoItem::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAddPromoItem.GetOutput");

	UUWorksRequestWebAddPromoItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebConsumeItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemInstanceID ItemId                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebConsumeItem::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamItemInstanceID& ItemId, int Quantity, const struct FUWorksSteamID& SteamID, const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebConsumeItem.SetInput");

	UUWorksRequestWebConsumeItem_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.SteamID = SteamID;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebConsumeItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebConsumeItem::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebConsumeItem.GetOutput");

	UUWorksRequestWebConsumeItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebExchangeItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    MaterialsQuantity              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     OutputItemDefID                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebExchangeItem::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebExchangeItem.SetInput");

	UUWorksRequestWebExchangeItem_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.MaterialsItemID = MaterialsItemID;
	params.MaterialsQuantity = MaterialsQuantity;
	params.OutputItemDefID = OutputItemDefID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebExchangeItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebExchangeItem::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebExchangeItem.GetOutput");

	UUWorksRequestWebExchangeItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetInventory.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetInventory::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetInventory.SetInput");

	UUWorksRequestWebGetInventory_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetInventory.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetInventory::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetInventory.GetOutput");

	UUWorksRequestWebGetInventory_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetItemDefs.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ModifiedSince                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> WorkshopIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            CacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetItemDefs::SetInput(const struct FString& Key, int AppID, const struct FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int CacheMaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetItemDefs.SetInput");

	UUWorksRequestWebGetItemDefs_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ModifiedSince = ModifiedSince;
	params.ItemDefIDs = ItemDefIDs;
	params.WorkshopIDs = WorkshopIDs;
	params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetItemDefs.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetItemDefs::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetItemDefs.GetOutput");

	UUWorksRequestWebGetItemDefs_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPriceSheet.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ECurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPriceSheet::SetInput(const struct FString& Key, int ECurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPriceSheet.SetInput");

	UUWorksRequestWebGetPriceSheet_SetInput_Params params;
	params.Key = Key;
	params.ECurrency = ECurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPriceSheet.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPriceSheet::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPriceSheet.GetOutput");

	UUWorksRequestWebGetPriceSheet_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebConsolidate.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebConsolidate::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebConsolidate.SetInput");

	UUWorksRequestWebConsolidate_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ItemDefID = ItemDefID;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebConsolidate.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebConsolidate::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebConsolidate.GetOutput");

	UUWorksRequestWebConsolidate_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetQuantity.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetQuantity::SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetQuantity.SetInput");

	UUWorksRequestWebGetQuantity_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ItemDefID = ItemDefID;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetQuantity.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetQuantity::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetQuantity.GetOutput");

	UUWorksRequestWebGetQuantity_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebDeleteLeaderboard.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteLeaderboard::SetInput(const struct FString& Key, int AppID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteLeaderboard.SetInput");

	UUWorksRequestWebDeleteLeaderboard_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebDeleteLeaderboard.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebDeleteLeaderboard::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebDeleteLeaderboard.GetOutput");

	UUWorksRequestWebDeleteLeaderboard_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SortMethod                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyTrustedWrites             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyFriendsReads              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFindOrCreateLeaderboard::SetInput(const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.SetInput");

	UUWorksRequestWebFindOrCreateLeaderboard_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;
	params.SortMethod = SortMethod;
	params.DisplayType = DisplayType;
	params.bCreateIfNotFound = bCreateIfNotFound;
	params.bOnlyTrustedWrites = bOnlyTrustedWrites;
	params.bOnlyFriendsReads = bOnlyFriendsReads;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFindOrCreateLeaderboard::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.GetOutput");

	UUWorksRequestWebFindOrCreateLeaderboard_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetLeaderboardEntries.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetLeaderboardEntries::SetInput(const struct FString& Key, int AppID, int RangeStart, int RangeEnd, int LeaderboardID, int DataRequest, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetLeaderboardEntries.SetInput");

	UUWorksRequestWebGetLeaderboardEntries_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.LeaderboardID = LeaderboardID;
	params.DataRequest = DataRequest;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetLeaderboardEntries.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetLeaderboardEntries::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetLeaderboardEntries.GetOutput");

	UUWorksRequestWebGetLeaderboardEntries_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetLeaderboardsForGame::SetInput(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.SetInput");

	UUWorksRequestWebGetLeaderboardsForGame_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetLeaderboardsForGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.GetOutput");

	UUWorksRequestWebGetLeaderboardsForGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebResetLeaderboard.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResetLeaderboard::SetInput(const struct FString& Key, int AppID, int LeaderboardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResetLeaderboard.SetInput");

	UUWorksRequestWebResetLeaderboard_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.LeaderboardID = LeaderboardID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebResetLeaderboard.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResetLeaderboard::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResetLeaderboard.GetOutput");

	UUWorksRequestWebResetLeaderboard_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetLeaderboardScore.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ScoreMethod                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Details                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetLeaderboardScore::SetInput(const struct FString& Key, int AppID, int LeaderboardID, const struct FUWorksSteamID& SteamID, int Score, const struct FString& ScoreMethod, TArray<unsigned char> Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetLeaderboardScore.SetInput");

	UUWorksRequestWebSetLeaderboardScore_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.LeaderboardID = LeaderboardID;
	params.SteamID = SteamID;
	params.Score = Score;
	params.ScoreMethod = ScoreMethod;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetLeaderboardScore.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetLeaderboardScore::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetLeaderboardScore.GetOutput");

	UUWorksRequestWebSetLeaderboardScore_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebAdjustAgreement.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NextProcessDate                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAdjustAgreement::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FString& NextProcessDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAdjustAgreement.SetInput");

	UUWorksRequestWebAdjustAgreement_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.NextProcessDate = NextProcessDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebAdjustAgreement.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAdjustAgreement::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAdjustAgreement.GetOutput");

	UUWorksRequestWebAdjustAgreement_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCancelAgreement.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCancelAgreement::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCancelAgreement.SetInput");

	UUWorksRequestWebCancelAgreement_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCancelAgreement.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCancelAgreement::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCancelAgreement.GetOutput");

	UUWorksRequestWebCancelAgreement_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebFinalizeTxn.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFinalizeTxn::SetInput(const struct FString& Key, const struct FString& OrderID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFinalizeTxn.SetInput");

	UUWorksRequestWebFinalizeTxn_SetInput_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebFinalizeTxn.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebFinalizeTxn::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebFinalizeTxn.GetOutput");

	UUWorksRequestWebFinalizeTxn_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetReport.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksWeb_EUWorksReportType    Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetReport::SetInput(const struct FString& Key, int AppID, const struct FString& Time, UWorksWeb_EUWorksReportType Type, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetReport.SetInput");

	UUWorksRequestWebGetReport_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Time = Time;
	params.Type = Type;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetReport.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetReport::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetReport.GetOutput");

	UUWorksRequestWebGetReport_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetUserAgreementInfo.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserAgreementInfo::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserAgreementInfo.SetInput");

	UUWorksRequestWebGetUserAgreementInfo_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetUserAgreementInfo.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserAgreementInfo::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserAgreementInfo.GetOutput");

	UUWorksRequestWebGetUserAgreementInfo_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetUserInfo.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserInfo::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserInfo.SetInput");

	UUWorksRequestWebGetUserInfo_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetUserInfo.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserInfo::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserInfo.GetOutput");

	UUWorksRequestWebGetUserInfo_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebInitTxn.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemIds                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantities                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Amounts                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Descriptions                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Categories                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    AssociatedBundles              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BillingTypes                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         StartDates                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         EndDates                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Periods                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Frequencies                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RecurringAmounts               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            BundleCount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    BundleIDs                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    BundleQuantities               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BundleDescriptions             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BundleCategories               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// UWorksWeb_EUWorksUserSession   UserSession                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebInitTxn::SetInput(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, int AppID, int ItemCount, const struct FString& Language, const struct FString& Currency, TArray<struct FUWorksSteamItemDef> ItemIds, TArray<int> Quantities, TArray<int> Amounts, TArray<struct FString> Descriptions, TArray<struct FString> Categories, TArray<int> AssociatedBundles, TArray<struct FString> BillingTypes, TArray<struct FString> StartDates, TArray<struct FString> EndDates, TArray<struct FString> Periods, TArray<int> Frequencies, TArray<struct FString> RecurringAmounts, int BundleCount, TArray<int> BundleIDs, TArray<int> BundleQuantities, TArray<struct FString> BundleDescriptions, TArray<struct FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebInitTxn.SetInput");

	UUWorksRequestWebInitTxn_SetInput_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ItemCount = ItemCount;
	params.Language = Language;
	params.Currency = Currency;
	params.ItemIds = ItemIds;
	params.Quantities = Quantities;
	params.Amounts = Amounts;
	params.Descriptions = Descriptions;
	params.Categories = Categories;
	params.AssociatedBundles = AssociatedBundles;
	params.BillingTypes = BillingTypes;
	params.StartDates = StartDates;
	params.EndDates = EndDates;
	params.Periods = Periods;
	params.Frequencies = Frequencies;
	params.RecurringAmounts = RecurringAmounts;
	params.BundleCount = BundleCount;
	params.BundleIDs = BundleIDs;
	params.BundleQuantities = BundleQuantities;
	params.BundleDescriptions = BundleDescriptions;
	params.BundleCategories = BundleCategories;
	params.UserSession = UserSession;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebInitTxn.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebInitTxn::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebInitTxn.GetOutput");

	UUWorksRequestWebInitTxn_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebProcessAgreement.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebProcessAgreement::SetInput(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, int Amount, const struct FString& Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebProcessAgreement.SetInput");

	UUWorksRequestWebProcessAgreement_SetInput_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.Amount = Amount;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebProcessAgreement.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebProcessAgreement::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebProcessAgreement.GetOutput");

	UUWorksRequestWebProcessAgreement_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebQueryTxn.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TransID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebQueryTxn::SetInput(const struct FString& Key, int AppID, const struct FString& OrderID, const struct FString& TransID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebQueryTxn.SetInput");

	UUWorksRequestWebQueryTxn_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.OrderID = OrderID;
	params.TransID = TransID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebQueryTxn.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebQueryTxn::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebQueryTxn.GetOutput");

	UUWorksRequestWebQueryTxn_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRefundTxn.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRefundTxn::SetInput(const struct FString& Key, const struct FString& OrderID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRefundTxn.SetInput");

	UUWorksRequestWebRefundTxn_SetInput_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRefundTxn.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRefundTxn::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRefundTxn.GetOutput");

	UUWorksRequestWebRefundTxn_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetNewsForApp.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Feeds                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetNewsForApp::SetInput(int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetNewsForApp.SetInput");

	UUWorksRequestWebGetNewsForApp_SetInput_Params params;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.EndDate = EndDate;
	params.Count = Count;
	params.Feeds = Feeds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetNewsForApp.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetNewsForApp::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetNewsForApp.GetOutput");

	UUWorksRequestWebGetNewsForApp_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Feeds                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetNewsForAppAuthed::SetInput(const struct FString& Key, int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.SetInput");

	UUWorksRequestWebGetNewsForAppAuthed_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.EndDate = EndDate;
	params.Count = Count;
	params.Feeds = Feeds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetNewsForAppAuthed::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.GetOutput");

	UUWorksRequestWebGetNewsForAppAuthed_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPlaySessions     PlaySessions                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebRecordOfflinePlaytime::SetInput(const struct FUWorksSteamID& SteamID, const struct FString& Ticket, const struct FUWorksPlaySessions& PlaySessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.SetInput");

	UUWorksRequestWebRecordOfflinePlaytime_SetInput_Params params;
	params.SteamID = SteamID;
	params.Ticket = Ticket;
	params.PlaySessions = PlaySessions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRecordOfflinePlaytime::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.GetOutput");

	UUWorksRequestWebRecordOfflinePlaytime_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetRecentlyPlayedGames::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.SetInput");

	UUWorksRequestWebGetRecentlyPlayedGames_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetRecentlyPlayedGames::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.GetOutput");

	UUWorksRequestWebGetRecentlyPlayedGames_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetOwnedGames.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAppInfo                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludePlayedFreeGames        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    AppIDsFilter                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetOwnedGames::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> AppIDsFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetOwnedGames.SetInput");

	UUWorksRequestWebGetOwnedGames_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bIncludeAppInfo = bIncludeAppInfo;
	params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	params.AppIDsFilter = AppIDsFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetOwnedGames.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetOwnedGames::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetOwnedGames.GetOutput");

	UUWorksRequestWebGetOwnedGames_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetSteamLevel.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetSteamLevel::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetSteamLevel.SetInput");

	UUWorksRequestWebGetSteamLevel_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetSteamLevel.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetSteamLevel::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetSteamLevel.GetOutput");

	UUWorksRequestWebGetSteamLevel_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetBadges.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetBadges::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetBadges.SetInput");

	UUWorksRequestWebGetBadges_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetBadges.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetBadges::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetBadges.GetOutput");

	UUWorksRequestWebGetBadges_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BadgeID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCommunityBadgeProgress::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int BadgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.SetInput");

	UUWorksRequestWebGetCommunityBadgeProgress_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.BadgeID = BadgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCommunityBadgeProgress::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.GetOutput");

	UUWorksRequestWebGetCommunityBadgeProgress_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebIsPlayingSharedGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppIDPlaying                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebIsPlayingSharedGame::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppIDPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebIsPlayingSharedGame.SetInput");

	UUWorksRequestWebIsPlayingSharedGame_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDPlaying = AppIDPlaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebIsPlayingSharedGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebIsPlayingSharedGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebIsPlayingSharedGame.GetOutput");

	UUWorksRequestWebIsPlayingSharedGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebQueryFiles.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         RequiredTags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         ExcludedTags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RequiredFlags                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         OmittedFlags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 SearchText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  ChildPublishedFileID           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeRecentVotesOnly        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksRequiredKVTags   RequiredKVTags                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bTotalOnly                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIDsOnly                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnVoteData                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnTags                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnKVTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnPreviews                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnChildren                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnShortDescription        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnForSaleData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnPlaytimeStats            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPerPage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchAllTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Language                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnMetadata                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebQueryFiles::SetInput(const struct FString& Key, unsigned char QueryType, int Page, int CreatorAppID, int AppID, TArray<struct FString> RequiredTags, TArray<struct FString> ExcludedTags, TArray<struct FString> RequiredFlags, TArray<struct FString> OmittedFlags, const struct FString& SearchText, unsigned char FileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int ReturnPlaytimeStats, int NumPerPage, bool bMatchAllTags, int CacheMaxAgeSeconds, int Language, bool bReturnMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebQueryFiles.SetInput");

	UUWorksRequestWebQueryFiles_SetInput_Params params;
	params.Key = Key;
	params.QueryType = QueryType;
	params.Page = Page;
	params.CreatorAppID = CreatorAppID;
	params.AppID = AppID;
	params.RequiredTags = RequiredTags;
	params.ExcludedTags = ExcludedTags;
	params.RequiredFlags = RequiredFlags;
	params.OmittedFlags = OmittedFlags;
	params.SearchText = SearchText;
	params.FileType = FileType;
	params.ChildPublishedFileID = ChildPublishedFileID;
	params.Days = Days;
	params.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
	params.RequiredKVTags = RequiredKVTags;
	params.bTotalOnly = bTotalOnly;
	params.bIDsOnly = bIDsOnly;
	params.bReturnVoteData = bReturnVoteData;
	params.bReturnTags = bReturnTags;
	params.bReturnKVTags = bReturnKVTags;
	params.bReturnPreviews = bReturnPreviews;
	params.bReturnChildren = bReturnChildren;
	params.bReturnShortDescription = bReturnShortDescription;
	params.bReturnForSaleData = bReturnForSaleData;
	params.ReturnPlaytimeStats = ReturnPlaytimeStats;
	params.NumPerPage = NumPerPage;
	params.bMatchAllTags = bMatchAllTags;
	params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
	params.Language = Language;
	params.bReturnMetadata = bReturnMetadata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebQueryFiles.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebQueryFiles::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebQueryFiles.GetOutput");

	UUWorksRequestWebQueryFiles_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetDeveloperMetadata.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetDeveloperMetadata::SetInput(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetDeveloperMetadata.SetInput");

	UUWorksRequestWebSetDeveloperMetadata_SetInput_Params params;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetDeveloperMetadata.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetDeveloperMetadata::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetDeveloperMetadata.GetOutput");

	UUWorksRequestWebSetDeveloperMetadata_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebUpdateTags.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         AddTags                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RemoveTags                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebUpdateTags::SetInput(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, TArray<struct FString> AddTags, TArray<struct FString> RemoveTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUpdateTags.SetInput");

	UUWorksRequestWebUpdateTags_SetInput_Params params;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.AddTags = AddTags;
	params.RemoveTags = RemoveTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebUpdateTags.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUpdateTags::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUpdateTags.GetOutput");

	UUWorksRequestWebUpdateTags_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRankedByPublicationOrder.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebRankedByPublicationOrder::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRankedByPublicationOrder.SetInput");

	UUWorksRequestWebRankedByPublicationOrder_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRankedByPublicationOrder.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRankedByPublicationOrder::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRankedByPublicationOrder.GetOutput");

	UUWorksRequestWebRankedByPublicationOrder_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRankedByTrend.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebRankedByTrend::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, int Days, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRankedByTrend.SetInput");

	UUWorksRequestWebRankedByTrend_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Days = Days;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRankedByTrend.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRankedByTrend::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRankedByTrend.GetOutput");

	UUWorksRequestWebRankedByTrend_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebRankedByVote.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebRankedByVote::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRankedByVote.SetInput");

	UUWorksRequestWebRankedByVote_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebRankedByVote.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebRankedByVote::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebRankedByVote.GetOutput");

	UUWorksRequestWebRankedByVote_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebResultSetSummary.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebResultSetSummary::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResultSetSummary.SetInput");

	UUWorksRequestWebResultSetSummary_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebResultSetSummary.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResultSetSummary::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResultSetSummary.GetOutput");

	UUWorksRequestWebResultSetSummary_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebItemVoteSummary.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebItemVoteSummary::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebItemVoteSummary.SetInput");

	UUWorksRequestWebItemVoteSummary_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebItemVoteSummary.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebItemVoteSummary::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebItemVoteSummary.GetOutput");

	UUWorksRequestWebItemVoteSummary_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebUserVoteSummary.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebUserVoteSummary::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUserVoteSummary.SetInput");

	UUWorksRequestWebUserVoteSummary_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebUserVoteSummary.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUserVoteSummary::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUserVoteSummary.GetOutput");

	UUWorksRequestWebUserVoteSummary_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEnumerateUserPublishedFiles::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.SetInput");

	UUWorksRequestWebEnumerateUserPublishedFiles_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEnumerateUserPublishedFiles::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.GetOutput");

	UUWorksRequestWebEnumerateUserPublishedFiles_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ListType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEnumerateUserSubscribedFiles::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int ListType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.SetInput");

	UUWorksRequestWebEnumerateUserSubscribedFiles_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ListType = ListType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebEnumerateUserSubscribedFiles::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.GetOutput");

	UUWorksRequestWebEnumerateUserSubscribedFiles_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetCollectionDetails.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CollectionCount                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCollectionDetails::SetInput(int CollectionCount, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCollectionDetails.SetInput");

	UUWorksRequestWebGetCollectionDetails_SetInput_Params params;
	params.CollectionCount = CollectionCount;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetCollectionDetails.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetCollectionDetails::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetCollectionDetails.GetOutput");

	UUWorksRequestWebGetCollectionDetails_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPublishedFileDetails.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPublishedFileDetails::SetInput(int ItemCount, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPublishedFileDetails.SetInput");

	UUWorksRequestWebGetPublishedFileDetails_SetInput_Params params;
	params.ItemCount = ItemCount;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPublishedFileDetails.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPublishedFileDetails::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPublishedFileDetails.GetOutput");

	UUWorksRequestWebGetPublishedFileDetails_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetUGCFileDetails.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UGCID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUGCFileDetails::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUGCFileDetails.SetInput");

	UUWorksRequestWebGetUGCFileDetails_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetUGCFileDetails.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUGCFileDetails::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUGCFileDetails.GetOutput");

	UUWorksRequestWebGetUGCFileDetails_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetUGCUsedByGC.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UGCID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetUGCUsedByGC::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, bool bUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetUGCUsedByGC.SetInput");

	UUWorksRequestWebSetUGCUsedByGC_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;
	params.bUsed = bUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetUGCUsedByGC.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetUGCUsedByGC::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetUGCUsedByGC.GetOutput");

	UUWorksRequestWebSetUGCUsedByGC_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSubscribePublishedFile.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublishedFileID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSubscribePublishedFile::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSubscribePublishedFile.SetInput");

	UUWorksRequestWebSubscribePublishedFile_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSubscribePublishedFile.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSubscribePublishedFile::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSubscribePublishedFile.GetOutput");

	UUWorksRequestWebSubscribePublishedFile_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublishedFileID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUnsubscribePublishedFile::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.SetInput");

	UUWorksRequestWebUnsubscribePublishedFile_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebUnsubscribePublishedFile::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.GetOutput");

	UUWorksRequestWebUnsubscribePublishedFile_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebCheckAppOwnership.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCheckAppOwnership::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCheckAppOwnership.SetInput");

	UUWorksRequestWebCheckAppOwnership_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebCheckAppOwnership.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebCheckAppOwnership::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebCheckAppOwnership.GetOutput");

	UUWorksRequestWebCheckAppOwnership_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetAppPriceInfo.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AppIDs                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppPriceInfo::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AppIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppPriceInfo.SetInput");

	UUWorksRequestWebGetAppPriceInfo_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDs = AppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetAppPriceInfo.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetAppPriceInfo::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetAppPriceInfo.GetOutput");

	UUWorksRequestWebGetAppPriceInfo_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetFriendList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Relationship                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetFriendList::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetFriendList.SetInput");

	UUWorksRequestWebGetFriendList_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Relationship = Relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetFriendList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetFriendList::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetFriendList.GetOutput");

	UUWorksRequestWebGetFriendList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPlayerBans.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDs                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayerBans::SetInput(const struct FString& Key, const struct FString& SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayerBans.SetInput");

	UUWorksRequestWebGetPlayerBans_SetInput_Params params;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPlayerBans.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayerBans::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayerBans.GetOutput");

	UUWorksRequestWebGetPlayerBans_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPlayerSummaries.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDs                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayerSummaries::SetInput(const struct FString& Key, const struct FString& SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayerSummaries.SetInput");

	UUWorksRequestWebGetPlayerSummaries_SetInput_Params params;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPlayerSummaries.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayerSummaries::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayerSummaries.GetOutput");

	UUWorksRequestWebGetPlayerSummaries_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPublisherAppOwnership::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.SetInput");

	UUWorksRequestWebGetPublisherAppOwnership_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPublisherAppOwnership::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.GetOutput");

	UUWorksRequestWebGetPublisherAppOwnership_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PackageRowVersion              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CDKeyRowVersion                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPublisherAppOwnershipChanges::SetInput(const struct FString& Key, const struct FString& PackageRowVersion, const struct FString& CDKeyRowVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.SetInput");

	UUWorksRequestWebGetPublisherAppOwnershipChanges_SetInput_Params params;
	params.Key = Key;
	params.PackageRowVersion = PackageRowVersion;
	params.CDKeyRowVersion = CDKeyRowVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPublisherAppOwnershipChanges::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.GetOutput");

	UUWorksRequestWebGetPublisherAppOwnershipChanges_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetUserGroupList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserGroupList::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserGroupList.SetInput");

	UUWorksRequestWebGetUserGroupList_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetUserGroupList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserGroupList::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserGroupList.GetOutput");

	UUWorksRequestWebGetUserGroupList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGrantPackage.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PackageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ThirdPartyKey                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ThirdPartyAppID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGrantPackage::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int PackageID, const struct FString& IPAddress, const struct FString& ThirdPartyKey, int ThirdPartyAppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGrantPackage.SetInput");

	UUWorksRequestWebGrantPackage_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.PackageID = PackageID;
	params.IPAddress = IPAddress;
	params.ThirdPartyKey = ThirdPartyKey;
	params.ThirdPartyAppID = ThirdPartyAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGrantPackage.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGrantPackage::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGrantPackage.GetOutput");

	UUWorksRequestWebGrantPackage_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebResolveVanityURL.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 VanityURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  URLType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResolveVanityURL::SetInput(const struct FString& Key, const struct FString& VanityURL, unsigned char URLType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResolveVanityURL.SetInput");

	UUWorksRequestWebResolveVanityURL_SetInput_Params params;
	params.Key = Key;
	params.VanityURL = VanityURL;
	params.URLType = URLType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebResolveVanityURL.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebResolveVanityURL::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebResolveVanityURL.GetOutput");

	UUWorksRequestWebResolveVanityURL_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebAuthenticateUser.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          SessionKey                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          EncryptedLoginKey              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebAuthenticateUser::SetInput(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAuthenticateUser.SetInput");

	UUWorksRequestWebAuthenticateUser_SetInput_Params params;
	params.SteamID = SteamID;
	params.SessionKey = SessionKey;
	params.EncryptedLoginKey = EncryptedLoginKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebAuthenticateUser.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAuthenticateUser::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAuthenticateUser.GetOutput");

	UUWorksRequestWebAuthenticateUser_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebAuthenticateUserTicket.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAuthenticateUserTicket::SetInput(const struct FString& Key, int AppID, const struct FString& Ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAuthenticateUserTicket.SetInput");

	UUWorksRequestWebAuthenticateUserTicket_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebAuthenticateUserTicket.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebAuthenticateUserTicket::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebAuthenticateUserTicket.GetOutput");

	UUWorksRequestWebAuthenticateUserTicket_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetGlobalAchievementPercentagesForApp::SetInput(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.SetInput");

	UUWorksRequestWebGetGlobalAchievementPercentagesForApp_SetInput_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetGlobalAchievementPercentagesForApp::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.GetOutput");

	UUWorksRequestWebGetGlobalAchievementPercentagesForApp_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Name                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            StartDate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetGlobalStatsForGame::SetInput(int AppID, int Count, TArray<struct FString> Name, int StartDate, int EndDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.SetInput");

	UUWorksRequestWebGetGlobalStatsForGame_SetInput_Params params;
	params.AppID = AppID;
	params.Count = Count;
	params.Name = Name;
	params.StartDate = StartDate;
	params.EndDate = EndDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetGlobalStatsForGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.GetOutput");

	UUWorksRequestWebGetGlobalStatsForGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetNumberOfCurrentPlayers::SetInput(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.SetInput");

	UUWorksRequestWebGetNumberOfCurrentPlayers_SetInput_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetNumberOfCurrentPlayers::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.GetOutput");

	UUWorksRequestWebGetNumberOfCurrentPlayers_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetPlayerAchievements.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayerAchievements::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayerAchievements.SetInput");

	UUWorksRequestWebGetPlayerAchievements_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetPlayerAchievements.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetPlayerAchievements::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetPlayerAchievements.GetOutput");

	UUWorksRequestWebGetPlayerAchievements_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetSchemaForGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetSchemaForGame::SetInput(const struct FString& Key, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetSchemaForGame.SetInput");

	UUWorksRequestWebGetSchemaForGame_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetSchemaForGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetSchemaForGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetSchemaForGame.GetOutput");

	UUWorksRequestWebGetSchemaForGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetUserStatsForGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserStatsForGame::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserStatsForGame.SetInput");

	UUWorksRequestWebGetUserStatsForGame_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetUserStatsForGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetUserStatsForGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetUserStatsForGame.GetOutput");

	UUWorksRequestWebGetUserStatsForGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetUserStatsForGame.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Name                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Value                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetUserStatsForGame::SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<struct FString> Name, TArray<int> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetUserStatsForGame.SetInput");

	UUWorksRequestWebSetUserStatsForGame_SetInput_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetUserStatsForGame.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetUserStatsForGame::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetUserStatsForGame.GetOutput");

	UUWorksRequestWebSetUserStatsForGame_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebSetItemPaymentRules.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameItemID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPartnerAccounts  PartnerAccounts                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bMakeWorkshopFilesSubscribable (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bValidateOnly                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetItemPaymentRules::SetInput(const struct FString& Key, int AppID, int GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetItemPaymentRules.SetInput");

	UUWorksRequestWebSetItemPaymentRules_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.GameItemID = GameItemID;
	params.AssociatedWorkshopFiles = AssociatedWorkshopFiles;
	params.PartnerAccounts = PartnerAccounts;
	params.bMakeWorkshopFilesSubscribable = bMakeWorkshopFilesSubscribable;
	params.bValidateOnly = bValidateOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebSetItemPaymentRules.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebSetItemPaymentRules::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebSetItemPaymentRules.GetOutput");

	UUWorksRequestWebSetItemPaymentRules_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetFinalizedContributors.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameItemID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetFinalizedContributors::SetInput(const struct FString& Key, int AppID, int GameItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetFinalizedContributors.SetInput");

	UUWorksRequestWebGetFinalizedContributors_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.GameItemID = GameItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetFinalizedContributors.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetFinalizedContributors::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetFinalizedContributors.GetOutput");

	UUWorksRequestWebGetFinalizedContributors_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebGetItemDailyRevenue.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DateStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DateEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetItemDailyRevenue::SetInput(const struct FString& Key, int AppID, const struct FString& ItemId, int DateStart, int DateEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetItemDailyRevenue.SetInput");

	UUWorksRequestWebGetItemDailyRevenue_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.DateStart = DateStart;
	params.DateEnd = DateEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebGetItemDailyRevenue.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebGetItemDailyRevenue::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebGetItemDailyRevenue.GetOutput");

	UUWorksRequestWebGetItemDailyRevenue_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.UWorksRequestWebPopulateItemDescriptions.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksLanguages        Languages                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestWebPopulateItemDescriptions::SetInput(const struct FString& Key, int AppID, const struct FUWorksLanguages& Languages)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebPopulateItemDescriptions.SetInput");

	UUWorksRequestWebPopulateItemDescriptions_SetInput_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Languages = Languages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UWorksRequestWebPopulateItemDescriptions.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestWebPopulateItemDescriptions::GetOutput(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UWorksRequestWebPopulateItemDescriptions.GetOutput");

	UUWorksRequestWebPopulateItemDescriptions_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function UWorksWeb.GetAppBetasNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAppBetasNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppBetasNode.OnRequestCompleted");

	UGetAppBetasNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAppBetasNode.GetAppBetasNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAppBetasNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAppBetasNode* UGetAppBetasNode::STATIC_GetAppBetasNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppBetasNode.GetAppBetasNode");

	UGetAppBetasNode_GetAppBetasNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAppBuildsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAppBuildsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppBuildsNode.OnRequestCompleted");

	UGetAppBuildsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAppBuildsNode.GetAppBuildsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAppBuildsNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAppBuildsNode* UGetAppBuildsNode::STATIC_GetAppBuildsNode(const struct FString& Key, int AppID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppBuildsNode.GetAppBuildsNode");

	UGetAppBuildsNode_GetAppBuildsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAppDepotVersionsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAppDepotVersionsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppDepotVersionsNode.OnRequestCompleted");

	UGetAppDepotVersionsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAppDepotVersionsNode.GetAppDepotVersionsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAppDepotVersionsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAppDepotVersionsNode* UGetAppDepotVersionsNode::STATIC_GetAppDepotVersionsNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppDepotVersionsNode.GetAppDepotVersionsNode");

	UGetAppDepotVersionsNode_GetAppDepotVersionsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAppListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAppListNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppListNode.OnRequestCompleted");

	UGetAppListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAppListNode.GetAppListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGetAppListNode*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAppListNode* UGetAppListNode::STATIC_GetAppListNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppListNode.GetAppListNode");

	UGetAppListNode_GetAppListNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetCheatingReportsListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetCheatingReportsListNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCheatingReportsListNode.OnRequestCompleted");

	UGetCheatingReportsListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetCheatingReportsListNode.GetCheatingReportsListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportIDMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetCheatingReportsListNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetCheatingReportsListNode* UGetCheatingReportsListNode::STATIC_GetCheatingReportsListNode(const struct FString& Key, int AppID, int TimeBegin, int TimeEnd, bool bIncludeReports, bool bIncludeBans, const struct FString& ReportIDMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCheatingReportsListNode.GetCheatingReportsListNode");

	UGetCheatingReportsListNode_GetCheatingReportsListNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.TimeBegin = TimeBegin;
	params.TimeEnd = TimeEnd;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.ReportIDMin = ReportIDMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPlayersBannedNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPlayersBannedNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayersBannedNode.OnRequestCompleted");

	UGetPlayersBannedNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPlayersBannedNode.GetPlayersBannedNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPlayersBannedNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPlayersBannedNode* UGetPlayersBannedNode::STATIC_GetPlayersBannedNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayersBannedNode.GetPlayersBannedNode");

	UGetPlayersBannedNode_GetPlayersBannedNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetServerListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetServerListNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServerListNode.OnRequestCompleted");

	UGetServerListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetServerListNode.GetServerListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filter                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetServerListNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetServerListNode* UGetServerListNode::STATIC_GetServerListNode(const struct FString& Key, const struct FString& Filter, int Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServerListNode.GetServerListNode");

	UGetServerListNode_GetServerListNode_Params params;
	params.Key = Key;
	params.Filter = Filter;
	params.Limit = Limit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetServersAtAddressNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetServersAtAddressNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServersAtAddressNode.OnRequestCompleted");

	UGetServersAtAddressNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetServersAtAddressNode.GetServersAtAddressNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Addr                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetServersAtAddressNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetServersAtAddressNode* UGetServersAtAddressNode::STATIC_GetServersAtAddressNode(const struct FString& Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServersAtAddressNode.GetServersAtAddressNode");

	UGetServersAtAddressNode_GetServersAtAddressNode_Params params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetAppBuildLiveNode.SetAppBuildLiveNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BuildId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BetaKey                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetAppBuildLiveNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetAppBuildLiveNode* USetAppBuildLiveNode::STATIC_SetAppBuildLiveNode(const struct FString& Key, int AppID, int BuildId, const struct FString& BetaKey, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetAppBuildLiveNode.SetAppBuildLiveNode");

	USetAppBuildLiveNode_SetAppBuildLiveNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.BuildId = BuildId;
	params.BetaKey = BetaKey;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetAppBuildLiveNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetAppBuildLiveNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetAppBuildLiveNode.OnRequestCompleted");

	USetAppBuildLiveNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UpToDateCheckNode.UpToDateCheckNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpToDateCheckNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpToDateCheckNode* UUpToDateCheckNode::STATIC_UpToDateCheckNode(int AppID, int Version)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UpToDateCheckNode.UpToDateCheckNode");

	UUpToDateCheckNode_UpToDateCheckNode_Params params;
	params.AppID = AppID;
	params.Version = Version;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UpToDateCheckNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUpToDateCheckNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UpToDateCheckNode.OnRequestCompleted");

	UUpToDateCheckNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.PostGameDataFrameNode.PostGameDataFrameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BroadcastID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FrameData                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPostGameDataFrameNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPostGameDataFrameNode* UPostGameDataFrameNode::STATIC_PostGameDataFrameNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& BroadcastID, const struct FString& FrameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.PostGameDataFrameNode.PostGameDataFrameNode");

	UPostGameDataFrameNode_PostGameDataFrameNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.BroadcastID = BroadcastID;
	params.FrameData = FrameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.PostGameDataFrameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPostGameDataFrameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.PostGameDataFrameNode.OnRequestCompleted");

	UPostGameDataFrameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ReportPlayerCheatingNode.ReportPlayerCheatingNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDReporter                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHeuristic                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDetection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerReport                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoReportID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SuspicionStartTime             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReportPlayerCheatingNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReportPlayerCheatingNode* UReportPlayerCheatingNode::STATIC_ReportPlayerCheatingNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& SteamIDReporter, int AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int SuspicionStartTime, int Severity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ReportPlayerCheatingNode.ReportPlayerCheatingNode");

	UReportPlayerCheatingNode_ReportPlayerCheatingNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SteamIDReporter = SteamIDReporter;
	params.AppData = AppData;
	params.bHeuristic = bHeuristic;
	params.bDetection = bDetection;
	params.bPlayerReport = bPlayerReport;
	params.bNoReportID = bNoReportID;
	params.GameMode = GameMode;
	params.SuspicionStartTime = SuspicionStartTime;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ReportPlayerCheatingNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReportPlayerCheatingNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ReportPlayerCheatingNode.OnRequestCompleted");

	UReportPlayerCheatingNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.RequestPlayerGameBanNode.RequestPlayerGameBanNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReportID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDelayBan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URequestPlayerGameBanNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URequestPlayerGameBanNode* URequestPlayerGameBanNode::STATIC_RequestPlayerGameBanNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& ReportID, const struct FString& CheatDescription, int Duration, bool bDelayBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RequestPlayerGameBanNode.RequestPlayerGameBanNode");

	URequestPlayerGameBanNode_RequestPlayerGameBanNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ReportID = ReportID;
	params.CheatDescription = CheatDescription;
	params.Duration = Duration;
	params.bDelayBan = bDelayBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RequestPlayerGameBanNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URequestPlayerGameBanNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RequestPlayerGameBanNode.OnRequestCompleted");

	URequestPlayerGameBanNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.RemovePlayerGameBanNode.RemovePlayerGameBanNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URemovePlayerGameBanNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemovePlayerGameBanNode* URemovePlayerGameBanNode::STATIC_RemovePlayerGameBanNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RemovePlayerGameBanNode.RemovePlayerGameBanNode");

	URemovePlayerGameBanNode_RemovePlayerGameBanNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RemovePlayerGameBanNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemovePlayerGameBanNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RemovePlayerGameBanNode.OnRequestCompleted");

	URemovePlayerGameBanNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetCheatingReportsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetCheatingReportsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCheatingReportsNode.OnRequestCompleted");

	UGetCheatingReportsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetCheatingReportsNode.GetCheatingReportsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportIDMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetCheatingReportsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetCheatingReportsNode* UGetCheatingReportsNode::STATIC_GetCheatingReportsNode(const struct FString& Key, int AppID, int TimeEnd, int TimeBegin, const struct FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCheatingReportsNode.GetCheatingReportsNode");

	UGetCheatingReportsNode_GetCheatingReportsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.TimeEnd = TimeEnd;
	params.TimeBegin = TimeBegin;
	params.ReportIDMin = ReportIDMin;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RequestVacStatusForUserNode.RequestVacStatusForUserNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URequestVacStatusForUserNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URequestVacStatusForUserNode* URequestVacStatusForUserNode::STATIC_RequestVacStatusForUserNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RequestVacStatusForUserNode.RequestVacStatusForUserNode");

	URequestVacStatusForUserNode_RequestVacStatusForUserNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RequestVacStatusForUserNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URequestVacStatusForUserNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RequestVacStatusForUserNode.OnRequestCompleted");

	URequestVacStatusForUserNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.StartSecureMultiplayerSessionNode.StartSecureMultiplayerSessionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStartSecureMultiplayerSessionNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStartSecureMultiplayerSessionNode* UStartSecureMultiplayerSessionNode::STATIC_StartSecureMultiplayerSessionNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.StartSecureMultiplayerSessionNode.StartSecureMultiplayerSessionNode");

	UStartSecureMultiplayerSessionNode_StartSecureMultiplayerSessionNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.StartSecureMultiplayerSessionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStartSecureMultiplayerSessionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.StartSecureMultiplayerSessionNode.OnRequestCompleted");

	UStartSecureMultiplayerSessionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EndSecureMultiplayerSessionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEndSecureMultiplayerSessionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EndSecureMultiplayerSessionNode.OnRequestCompleted");

	UEndSecureMultiplayerSessionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EndSecureMultiplayerSessionNode.EndSecureMultiplayerSessionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndSecureMultiplayerSessionNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndSecureMultiplayerSessionNode* UEndSecureMultiplayerSessionNode::STATIC_EndSecureMultiplayerSessionNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EndSecureMultiplayerSessionNode.EndSecureMultiplayerSessionNode");

	UEndSecureMultiplayerSessionNode_EndSecureMultiplayerSessionNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ReportCheatDataNode.ReportCheatDataNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PathAndFileName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 WebCheatURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeNow                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeStarted                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TimeStopped                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameProcessID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CheatProcessID                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatParamA                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CheatParamB                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReportCheatDataNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReportCheatDataNode* UReportCheatDataNode::STATIC_ReportCheatDataNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& PathAndFileName, const struct FString& WebCheatURL, const struct FString& TimeNow, const struct FString& TimeStarted, const struct FString& TimeStopped, const struct FString& CheatName, int GameProcessID, int CheatProcessID, const struct FString& CheatParamA, const struct FString& CheatParamB)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ReportCheatDataNode.ReportCheatDataNode");

	UReportCheatDataNode_ReportCheatDataNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PathAndFileName = PathAndFileName;
	params.WebCheatURL = WebCheatURL;
	params.TimeNow = TimeNow;
	params.TimeStarted = TimeStarted;
	params.TimeStopped = TimeStopped;
	params.CheatName = CheatName;
	params.GameProcessID = GameProcessID;
	params.CheatProcessID = CheatProcessID;
	params.CheatParamA = CheatParamA;
	params.CheatParamB = CheatParamB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ReportCheatDataNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReportCheatDataNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ReportCheatDataNode.OnRequestCompleted");

	UReportCheatDataNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ReportAbuseNode.ReportAbuseNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDActor                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDTarget                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  AbuseType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GID                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReportAbuseNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReportAbuseNode* UReportAbuseNode::STATIC_ReportAbuseNode(const struct FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int AppID, unsigned char AbuseType, unsigned char ContentType, const struct FString& Description, const struct FString& GID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ReportAbuseNode.ReportAbuseNode");

	UReportAbuseNode_ReportAbuseNode_Params params;
	params.Key = Key;
	params.SteamIDActor = SteamIDActor;
	params.SteamIDTarget = SteamIDTarget;
	params.AppID = AppID;
	params.AbuseType = AbuseType;
	params.ContentType = ContentType;
	params.Description = Description;
	params.GID = GID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ReportAbuseNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReportAbuseNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ReportAbuseNode.OnRequestCompleted");

	UReportAbuseNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetTradeHistoryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetTradeHistoryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeHistoryNode.OnRequestCompleted");

	UGetTradeHistoryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetTradeHistoryNode.GetTradeHistoryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxTrades                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartAfterTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StartAfterTradeID              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNavigatingBack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescription                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeFailed                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeTotal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetTradeHistoryNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetTradeHistoryNode* UGetTradeHistoryNode::STATIC_GetTradeHistoryNode(const struct FString& Key, int MaxTrades, int StartAfterTime, const struct FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeHistoryNode.GetTradeHistoryNode");

	UGetTradeHistoryNode_GetTradeHistoryNode_Params params;
	params.Key = Key;
	params.MaxTrades = MaxTrades;
	params.StartAfterTime = StartAfterTime;
	params.StartAfterTradeID = StartAfterTradeID;
	params.bNavigatingBack = bNavigatingBack;
	params.bGetDescription = bGetDescription;
	params.Language = Language;
	params.bIncludeFailed = bIncludeFailed;
	params.bIncludeTotal = bIncludeTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.FlushInventoryCacheNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlushInventoryCacheNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FlushInventoryCacheNode.OnRequestCompleted");

	UFlushInventoryCacheNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.FlushInventoryCacheNode.FlushInventoryCacheNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFlushInventoryCacheNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFlushInventoryCacheNode* UFlushInventoryCacheNode::STATIC_FlushInventoryCacheNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FlushInventoryCacheNode.FlushInventoryCacheNode");

	UFlushInventoryCacheNode_FlushInventoryCacheNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ContextID = ContextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.FlushAssetAppearanceCacheNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlushAssetAppearanceCacheNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FlushAssetAppearanceCacheNode.OnRequestCompleted");

	UFlushAssetAppearanceCacheNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.FlushAssetAppearanceCacheNode.FlushAssetAppearanceCacheNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFlushAssetAppearanceCacheNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFlushAssetAppearanceCacheNode* UFlushAssetAppearanceCacheNode::STATIC_FlushAssetAppearanceCacheNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FlushAssetAppearanceCacheNode.FlushAssetAppearanceCacheNode");

	UFlushAssetAppearanceCacheNode_FlushAssetAppearanceCacheNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.FlushContextCacheNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlushContextCacheNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FlushContextCacheNode.OnRequestCompleted");

	UFlushContextCacheNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.FlushContextCacheNode.FlushContextCacheNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFlushContextCacheNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFlushContextCacheNode* UFlushContextCacheNode::STATIC_FlushContextCacheNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FlushContextCacheNode.FlushContextCacheNode");

	UFlushContextCacheNode_FlushContextCacheNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetTradeOffersNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetTradeOffersNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeOffersNode.OnRequestCompleted");

	UGetTradeOffersNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetTradeOffersNode.GetTradeOffersNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetSentOffers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetReceivedOffers             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescription                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHistoricalOnly                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeHistoricalCutoff           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetTradeOffersNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetTradeOffersNode* UGetTradeOffersNode::STATIC_GetTradeOffersNode(const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int TimeHistoricalCutoff)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeOffersNode.GetTradeOffersNode");

	UGetTradeOffersNode_GetTradeOffersNode_Params params;
	params.Key = Key;
	params.bGetSentOffers = bGetSentOffers;
	params.bGetReceivedOffers = bGetReceivedOffers;
	params.bGetDescription = bGetDescription;
	params.Language = Language;
	params.bActiveOnly = bActiveOnly;
	params.bHistoricalOnly = bHistoricalOnly;
	params.TimeHistoricalCutoff = TimeHistoricalCutoff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetTradeOfferNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetTradeOfferNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeOfferNode.OnRequestCompleted");

	UGetTradeOfferNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetTradeOfferNode.GetTradeOfferNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetTradeOfferNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetTradeOfferNode* UGetTradeOfferNode::STATIC_GetTradeOfferNode(const struct FString& Key, const struct FString& TradeOfferID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeOfferNode.GetTradeOfferNode");

	UGetTradeOfferNode_GetTradeOfferNode_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetTradeOffersSummaryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetTradeOffersSummaryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeOffersSummaryNode.OnRequestCompleted");

	UGetTradeOffersSummaryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetTradeOffersSummaryNode.GetTradeOffersSummaryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TimeLastVisit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetTradeOffersSummaryNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetTradeOffersSummaryNode* UGetTradeOffersSummaryNode::STATIC_GetTradeOffersSummaryNode(const struct FString& Key, int TimeLastVisit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetTradeOffersSummaryNode.GetTradeOffersSummaryNode");

	UGetTradeOffersSummaryNode_GetTradeOffersSummaryNode_Params params;
	params.Key = Key;
	params.TimeLastVisit = TimeLastVisit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.DeclineTradeOfferNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeclineTradeOfferNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeclineTradeOfferNode.OnRequestCompleted");

	UDeclineTradeOfferNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeclineTradeOfferNode.DeclineTradeOfferNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeclineTradeOfferNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeclineTradeOfferNode* UDeclineTradeOfferNode::STATIC_DeclineTradeOfferNode(const struct FString& Key, const struct FString& TradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeclineTradeOfferNode.DeclineTradeOfferNode");

	UDeclineTradeOfferNode_DeclineTradeOfferNode_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.CancelTradeOfferNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCancelTradeOfferNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CancelTradeOfferNode.OnRequestCompleted");

	UCancelTradeOfferNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CancelTradeOfferNode.CancelTradeOfferNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCancelTradeOfferNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCancelTradeOfferNode* UCancelTradeOfferNode::STATIC_CancelTradeOfferNode(const struct FString& Key, const struct FString& TradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CancelTradeOfferNode.CancelTradeOfferNode");

	UCancelTradeOfferNode_CancelTradeOfferNode_Params params;
	params.Key = Key;
	params.TradeOfferID = TradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetMarketEligibilityNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetMarketEligibilityNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetMarketEligibilityNode.OnRequestCompleted");

	UGetMarketEligibilityNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetMarketEligibilityNode.GetMarketEligibilityNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetMarketEligibilityNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetMarketEligibilityNode* UGetMarketEligibilityNode::STATIC_GetMarketEligibilityNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetMarketEligibilityNode.GetMarketEligibilityNode");

	UGetMarketEligibilityNode_GetMarketEligibilityNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.CancelAppListingsForUserNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCancelAppListingsForUserNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CancelAppListingsForUserNode.OnRequestCompleted");

	UCancelAppListingsForUserNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CancelAppListingsForUserNode.CancelAppListingsForUserNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSynchronous                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCancelAppListingsForUserNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCancelAppListingsForUserNode* UCancelAppListingsForUserNode::STATIC_CancelAppListingsForUserNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CancelAppListingsForUserNode.CancelAppListingsForUserNode");

	UCancelAppListingsForUserNode_CancelAppListingsForUserNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bSynchronous = bSynchronous;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAssetIDNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAssetIDNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAssetIDNode.OnRequestCompleted");

	UGetAssetIDNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAssetIDNode.GetAssetIDNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ListingID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAssetIDNode*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAssetIDNode* UGetAssetIDNode::STATIC_GetAssetIDNode(const struct FString& Key, int AppID, const struct FString& ListingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAssetIDNode.GetAssetIDNode");

	UGetAssetIDNode_GetAssetIDNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ListingID = ListingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPopularNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPopularNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPopularNode.OnRequestCompleted");

	UGetPopularNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPopularNode.GetPopularNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Rows                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FilterAppID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ECurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPopularNode*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPopularNode* UGetPopularNode::STATIC_GetPopularNode(const struct FString& Key, const struct FString& Language, int Rows, int Start, int FilterAppID, int ECurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPopularNode.GetPopularNode");

	UGetPopularNode_GetPopularNode_Params params;
	params.Key = Key;
	params.Language = Language;
	params.Rows = Rows;
	params.Start = Start;
	params.FilterAppID = FilterAppID;
	params.ECurrency = ECurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.CanTradeNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanTradeNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CanTradeNode.OnRequestCompleted");

	UCanTradeNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CanTradeNode.CanTradeNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          TargetId                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanTradeNode*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanTradeNode* UCanTradeNode::STATIC_CanTradeNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CanTradeNode.CanTradeNode");

	UCanTradeNode_CanTradeNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.FinalizeAssetTransactionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFinalizeAssetTransactionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FinalizeAssetTransactionNode.OnRequestCompleted");

	UFinalizeAssetTransactionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.FinalizeAssetTransactionNode.FinalizeAssetTransactionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TxnID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFinalizeAssetTransactionNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFinalizeAssetTransactionNode* UFinalizeAssetTransactionNode::STATIC_FinalizeAssetTransactionNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& TxnID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FinalizeAssetTransactionNode.FinalizeAssetTransactionNode");

	UFinalizeAssetTransactionNode_FinalizeAssetTransactionNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TxnID = TxnID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAssetClassInfoNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAssetClassInfoNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAssetClassInfoNode.OnRequestCompleted");

	UGetAssetClassInfoNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAssetClassInfoNode.GetAssetClassInfoNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ClassCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ClassID0                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstanceID0                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAssetClassInfoNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAssetClassInfoNode* UGetAssetClassInfoNode::STATIC_GetAssetClassInfoNode(const struct FString& Key, int AppID, int ClassCount, const struct FString& ClassID0, const struct FString& Language, const struct FString& InstanceID0)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAssetClassInfoNode.GetAssetClassInfoNode");

	UGetAssetClassInfoNode_GetAssetClassInfoNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ClassCount = ClassCount;
	params.ClassID0 = ClassID0;
	params.Language = Language;
	params.InstanceID0 = InstanceID0;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAssetPricesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAssetPricesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAssetPricesNode.OnRequestCompleted");

	UGetAssetPricesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAssetPricesNode.GetAssetPricesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAssetPricesNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAssetPricesNode* UGetAssetPricesNode::STATIC_GetAssetPricesNode(const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAssetPricesNode.GetAssetPricesNode");

	UGetAssetPricesNode_GetAssetPricesNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Currency = Currency;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetExportedAssetsForUserNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetExportedAssetsForUserNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetExportedAssetsForUserNode.OnRequestCompleted");

	UGetExportedAssetsForUserNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetExportedAssetsForUserNode.GetExportedAssetsForUserNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetExportedAssetsForUserNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetExportedAssetsForUserNode* UGetExportedAssetsForUserNode::STATIC_GetExportedAssetsForUserNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetExportedAssetsForUserNode.GetExportedAssetsForUserNode");

	UGetExportedAssetsForUserNode_GetExportedAssetsForUserNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ContextID = ContextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetMarketPricesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetMarketPricesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetMarketPricesNode.OnRequestCompleted");

	UGetMarketPricesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetMarketPricesNode.GetMarketPricesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetMarketPricesNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetMarketPricesNode* UGetMarketPricesNode::STATIC_GetMarketPricesNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetMarketPricesNode.GetMarketPricesNode");

	UGetMarketPricesNode_GetMarketPricesNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.StartAssetTransactionNode.StartAssetTransactionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AssetID0                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AssetQuantity0                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Referrer                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClientAuth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStartAssetTransactionNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStartAssetTransactionNode* UStartAssetTransactionNode::STATIC_StartAssetTransactionNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& AssetID0, int AssetQuantity0, const struct FString& Currency, const struct FString& Language, const struct FString& IPAddress, const struct FString& Referrer, bool bClientAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.StartAssetTransactionNode.StartAssetTransactionNode");

	UStartAssetTransactionNode_StartAssetTransactionNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.AssetID0 = AssetID0;
	params.AssetQuantity0 = AssetQuantity0;
	params.Currency = Currency;
	params.Language = Language;
	params.IPAddress = IPAddress;
	params.Referrer = Referrer;
	params.bClientAuth = bClientAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.StartAssetTransactionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStartAssetTransactionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.StartAssetTransactionNode.OnRequestCompleted");

	UStartAssetTransactionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.StartTradeNode.StartTradeNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          PartyA                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          PartyB                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStartTradeNode*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStartTradeNode* UStartTradeNode::STATIC_StartTradeNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.StartTradeNode.StartTradeNode");

	UStartTradeNode_StartTradeNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.PartyA = PartyA;
	params.PartyB = PartyB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.StartTradeNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStartTradeNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.StartTradeNode.OnRequestCompleted");

	UStartTradeNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetHistoryCommandDetailsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetHistoryCommandDetailsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetHistoryCommandDetailsNode.OnRequestCompleted");

	UGetHistoryCommandDetailsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetHistoryCommandDetailsNode.GetHistoryCommandDetailsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Command                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Arguments                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetHistoryCommandDetailsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetHistoryCommandDetailsNode* UGetHistoryCommandDetailsNode::STATIC_GetHistoryCommandDetailsNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& Command, const struct FString& ContextID, const struct FString& Arguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetHistoryCommandDetailsNode.GetHistoryCommandDetailsNode");

	UGetHistoryCommandDetailsNode_GetHistoryCommandDetailsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Command = Command;
	params.ContextID = ContextID;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetUserHistoryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetUserHistoryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserHistoryNode.OnRequestCompleted");

	UGetUserHistoryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetUserHistoryNode.GetUserHistoryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUserHistoryNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserHistoryNode* UGetUserHistoryNode::STATIC_GetUserHistoryNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, int StartTime, int EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserHistoryNode.GetUserHistoryNode");

	UGetUserHistoryNode_GetUserHistoryNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ContextID = ContextID;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.HistoryExecuteCommandsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHistoryExecuteCommandsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.HistoryExecuteCommandsNode.OnRequestCompleted");

	UHistoryExecuteCommandsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.HistoryExecuteCommandsNode.HistoryExecuteCommandsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ActorId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHistoryExecuteCommandsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHistoryExecuteCommandsNode* UHistoryExecuteCommandsNode::STATIC_HistoryExecuteCommandsNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, const struct FString& ActorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.HistoryExecuteCommandsNode.HistoryExecuteCommandsNode");

	UHistoryExecuteCommandsNode_HistoryExecuteCommandsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ContextID = ContextID;
	params.ActorId = ActorId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SupportGetAssetHistoryNode.SupportGetAssetHistoryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AssetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ContextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USupportGetAssetHistoryNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USupportGetAssetHistoryNode* USupportGetAssetHistoryNode::STATIC_SupportGetAssetHistoryNode(const struct FString& Key, int AppID, const struct FString& AssetID, const struct FString& ContextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SupportGetAssetHistoryNode.SupportGetAssetHistoryNode");

	USupportGetAssetHistoryNode_SupportGetAssetHistoryNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.AssetID = AssetID;
	params.ContextID = ContextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SupportGetAssetHistoryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USupportGetAssetHistoryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SupportGetAssetHistoryNode.OnRequestCompleted");

	USupportGetAssetHistoryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CreateSessionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCreateSessionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CreateSessionNode.OnRequestCompleted");

	UCreateSessionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CreateSessionNode.CreateSessionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Context                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTitle            Title                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUsers            Users                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionNode* UCreateSessionNode::STATIC_CreateSessionNode(const struct FString& Key, int AppID, const struct FString& Context, const struct FUWorksTitle& Title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CreateSessionNode.CreateSessionNode");

	UCreateSessionNode_CreateSessionNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Context = Context;
	params.Title = Title;
	params.Users = Users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UpdateSessionNode.UpdateSessionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTitle            Title                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUsers            Users                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateSessionNode* UUpdateSessionNode::STATIC_UpdateSessionNode(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksTitle& Title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UpdateSessionNode.UpdateSessionNode");

	UUpdateSessionNode_UpdateSessionNode_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.Title = Title;
	params.Users = Users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UpdateSessionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUpdateSessionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UpdateSessionNode.OnRequestCompleted");

	UUpdateSessionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EnumerateSessionsForAppNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnumerateSessionsForAppNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EnumerateSessionsForAppNode.OnRequestCompleted");

	UEnumerateSessionsForAppNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EnumerateSessionsForAppNode.EnumerateSessionsForAppNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAllUserMessages        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAuthUserMessage        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnumerateSessionsForAppNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnumerateSessionsForAppNode* UEnumerateSessionsForAppNode::STATIC_EnumerateSessionsForAppNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EnumerateSessionsForAppNode.EnumerateSessionsForAppNode");

	UEnumerateSessionsForAppNode_EnumerateSessionsForAppNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bIncludeAllUserMessages = bIncludeAllUserMessages;
	params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetSessionDetailsForAppNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetSessionDetailsForAppNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetSessionDetailsForAppNode.OnRequestCompleted");

	UGetSessionDetailsForAppNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetSessionDetailsForAppNode.GetSessionDetailsForAppNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSessions         Sessions                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetSessionDetailsForAppNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetSessionDetailsForAppNode* UGetSessionDetailsForAppNode::STATIC_GetSessionDetailsForAppNode(const struct FString& Key, const struct FUWorksSessions& Sessions, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetSessionDetailsForAppNode.GetSessionDetailsForAppNode");

	UGetSessionDetailsForAppNode_GetSessionDetailsForAppNode_Params params;
	params.Key = Key;
	params.Sessions = Sessions;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RequestNotificationsNode.RequestNotificationsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URequestNotificationsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URequestNotificationsNode* URequestNotificationsNode::STATIC_RequestNotificationsNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RequestNotificationsNode.RequestNotificationsNode");

	URequestNotificationsNode_RequestNotificationsNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RequestNotificationsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URequestNotificationsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RequestNotificationsNode.OnRequestCompleted");

	URequestNotificationsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeleteSessionNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeleteSessionNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteSessionNode.OnRequestCompleted");

	UDeleteSessionNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeleteSessionNode.DeleteSessionNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeleteSessionNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeleteSessionNode* UDeleteSessionNode::STATIC_DeleteSessionNode(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteSessionNode.DeleteSessionNode");

	UDeleteSessionNode_DeleteSessionNode_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.DeleteSessionBatchNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeleteSessionBatchNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteSessionBatchNode.OnRequestCompleted");

	UDeleteSessionBatchNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeleteSessionBatchNode.DeleteSessionBatchNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeleteSessionBatchNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeleteSessionBatchNode* UDeleteSessionBatchNode::STATIC_DeleteSessionBatchNode(const struct FString& Key, const struct FString& SessionId, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteSessionBatchNode.DeleteSessionBatchNode");

	UDeleteSessionBatchNode_DeleteSessionBatchNode_Params params;
	params.Key = Key;
	params.SessionId = SessionId;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAccountListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAccountListNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAccountListNode.OnRequestCompleted");

	UGetAccountListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAccountListNode.GetAccountListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAccountListNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAccountListNode* UGetAccountListNode::STATIC_GetAccountListNode(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAccountListNode.GetAccountListNode");

	UGetAccountListNode_GetAccountListNode_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.CreateAccountNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCreateAccountNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CreateAccountNode.OnRequestCompleted");

	UCreateAccountNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CreateAccountNode.CreateAccountNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateAccountNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateAccountNode* UCreateAccountNode::STATIC_CreateAccountNode(const struct FString& Key, int AppID, const struct FString& Memo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CreateAccountNode.CreateAccountNode");

	UCreateAccountNode_CreateAccountNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Memo = Memo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetMemoNode.SetMemoNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetMemoNode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetMemoNode* USetMemoNode::STATIC_SetMemoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Memo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetMemoNode.SetMemoNode");

	USetMemoNode_SetMemoNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Memo = Memo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetMemoNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetMemoNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetMemoNode.OnRequestCompleted");

	USetMemoNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ResetLoginTokenNode.ResetLoginTokenNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UResetLoginTokenNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UResetLoginTokenNode* UResetLoginTokenNode::STATIC_ResetLoginTokenNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResetLoginTokenNode.ResetLoginTokenNode");

	UResetLoginTokenNode_ResetLoginTokenNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ResetLoginTokenNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UResetLoginTokenNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResetLoginTokenNode.OnRequestCompleted");

	UResetLoginTokenNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeleteAccountNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeleteAccountNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteAccountNode.OnRequestCompleted");

	UDeleteAccountNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeleteAccountNode.DeleteAccountNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeleteAccountNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeleteAccountNode* UDeleteAccountNode::STATIC_DeleteAccountNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteAccountNode.DeleteAccountNode");

	UDeleteAccountNode_DeleteAccountNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAccountPublicInfoNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAccountPublicInfoNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAccountPublicInfoNode.OnRequestCompleted");

	UGetAccountPublicInfoNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAccountPublicInfoNode.GetAccountPublicInfoNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAccountPublicInfoNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAccountPublicInfoNode* UGetAccountPublicInfoNode::STATIC_GetAccountPublicInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAccountPublicInfoNode.GetAccountPublicInfoNode");

	UGetAccountPublicInfoNode_GetAccountPublicInfoNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.QueryLoginTokenNode.QueryLoginTokenNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LoginToken                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQueryLoginTokenNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQueryLoginTokenNode* UQueryLoginTokenNode::STATIC_QueryLoginTokenNode(const struct FString& Key, const struct FString& LoginToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.QueryLoginTokenNode.QueryLoginTokenNode");

	UQueryLoginTokenNode_QueryLoginTokenNode_Params params;
	params.Key = Key;
	params.LoginToken = LoginToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.QueryLoginTokenNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQueryLoginTokenNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.QueryLoginTokenNode.OnRequestCompleted");

	UQueryLoginTokenNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.SetBanStatusNode.SetBanStatusNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBanned                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BanSeconds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetBanStatusNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetBanStatusNode* USetBanStatusNode::STATIC_SetBanStatusNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int BanSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetBanStatusNode.SetBanStatusNode");

	USetBanStatusNode_SetBanStatusNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bBanned = bBanned;
	params.BanSeconds = BanSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetBanStatusNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetBanStatusNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetBanStatusNode.OnRequestCompleted");

	USetBanStatusNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetServerSteamIDsByIPNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetServerSteamIDsByIPNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServerSteamIDsByIPNode.OnRequestCompleted");

	UGetServerSteamIDsByIPNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetServerSteamIDsByIPNode.GetServerSteamIDsByIPNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ServerIPs                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetServerSteamIDsByIPNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetServerSteamIDsByIPNode* UGetServerSteamIDsByIPNode::STATIC_GetServerSteamIDsByIPNode(const struct FString& Key, const struct FString& ServerIPs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServerSteamIDsByIPNode.GetServerSteamIDsByIPNode");

	UGetServerSteamIDsByIPNode_GetServerSteamIDsByIPNode_Params params;
	params.Key = Key;
	params.ServerIPs = ServerIPs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetServerIPsBySteamIDNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetServerIPsBySteamIDNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServerIPsBySteamIDNode.OnRequestCompleted");

	UGetServerIPsBySteamIDNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetServerIPsBySteamIDNode.GetServerIPsBySteamIDNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ServerSteamID                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetServerIPsBySteamIDNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetServerIPsBySteamIDNode* UGetServerIPsBySteamIDNode::STATIC_GetServerIPsBySteamIDNode(const struct FString& Key, const struct FUWorksSteamID& ServerSteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetServerIPsBySteamIDNode.GetServerIPsBySteamIDNode");

	UGetServerIPsBySteamIDNode_GetServerIPsBySteamIDNode_Params params;
	params.Key = Key;
	params.ServerSteamID = ServerSteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetGameServerPlayerStatsForGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetGameServerPlayerStatsForGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetGameServerPlayerStatsForGameNode.OnRequestCompleted");

	UGetGameServerPlayerStatsForGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetGameServerPlayerStatsForGameNode.GetGameServerPlayerStatsForGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RangeStart                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RangeEnd                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetGameServerPlayerStatsForGameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetGameServerPlayerStatsForGameNode* UGetGameServerPlayerStatsForGameNode::STATIC_GetGameServerPlayerStatsForGameNode(const struct FString& Key, const struct FUWorksGameID& GameID, int AppID, const struct FString& RangeStart, const struct FString& RangeEnd, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetGameServerPlayerStatsForGameNode.GetGameServerPlayerStatsForGameNode");

	UGetGameServerPlayerStatsForGameNode_GetGameServerPlayerStatsForGameNode_Params params;
	params.Key = Key;
	params.GameID = GameID;
	params.AppID = AppID;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.AddItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddItemNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AddItemNode.OnRequestCompleted");

	UAddItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AddItemNode.AddItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 ItemPropsJSON                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAddItemNode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAddItemNode* UAddItemNode::STATIC_AddItemNode(const struct FString& Key, int AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AddItemNode.AddItemNode");

	UAddItemNode_AddItemNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemDefID = ItemDefID;
	params.ItemPropsJSON = ItemPropsJSON;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.AddPromoItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddPromoItemNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AddPromoItemNode.OnRequestCompleted");

	UAddPromoItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AddPromoItemNode.AddPromoItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ItemPropsJSON                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAddPromoItemNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAddPromoItemNode* UAddPromoItemNode::STATIC_AddPromoItemNode(const struct FString& Key, int AppID, const struct FUWorksSteamItemDef& ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AddPromoItemNode.AddPromoItemNode");

	UAddPromoItemNode_AddPromoItemNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemDefID = ItemDefID;
	params.ItemPropsJSON = ItemPropsJSON;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ConsumeItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UConsumeItemNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ConsumeItemNode.OnRequestCompleted");

	UConsumeItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ConsumeItemNode.ConsumeItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemInstanceID ItemId                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConsumeItemNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConsumeItemNode* UConsumeItemNode::STATIC_ConsumeItemNode(const struct FString& Key, int AppID, const struct FUWorksSteamItemInstanceID& ItemId, int Quantity, const struct FUWorksSteamID& SteamID, const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ConsumeItemNode.ConsumeItemNode");

	UConsumeItemNode_ConsumeItemNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.SteamID = SteamID;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ExchangeItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExchangeItemNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ExchangeItemNode.OnRequestCompleted");

	UExchangeItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ExchangeItemNode.ExchangeItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    MaterialsQuantity              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     OutputItemDefID                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UExchangeItemNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UExchangeItemNode* UExchangeItemNode::STATIC_ExchangeItemNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ExchangeItemNode.ExchangeItemNode");

	UExchangeItemNode_ExchangeItemNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.MaterialsItemID = MaterialsItemID;
	params.MaterialsQuantity = MaterialsQuantity;
	params.OutputItemDefID = OutputItemDefID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetInventoryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetInventoryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetInventoryNode.OnRequestCompleted");

	UGetInventoryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetInventoryNode.GetInventoryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetInventoryNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetInventoryNode* UGetInventoryNode::STATIC_GetInventoryNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetInventoryNode.GetInventoryNode");

	UGetInventoryNode_GetInventoryNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetItemDefsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetItemDefsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetItemDefsNode.OnRequestCompleted");

	UGetItemDefsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetItemDefsNode.GetItemDefsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ModifiedSince                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> WorkshopIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            CacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetItemDefsNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetItemDefsNode* UGetItemDefsNode::STATIC_GetItemDefsNode(const struct FString& Key, int AppID, const struct FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int CacheMaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetItemDefsNode.GetItemDefsNode");

	UGetItemDefsNode_GetItemDefsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ModifiedSince = ModifiedSince;
	params.ItemDefIDs = ItemDefIDs;
	params.WorkshopIDs = WorkshopIDs;
	params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPriceSheetNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPriceSheetNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPriceSheetNode.OnRequestCompleted");

	UGetPriceSheetNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPriceSheetNode.GetPriceSheetNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ECurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPriceSheetNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPriceSheetNode* UGetPriceSheetNode::STATIC_GetPriceSheetNode(const struct FString& Key, int ECurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPriceSheetNode.GetPriceSheetNode");

	UGetPriceSheetNode_GetPriceSheetNode_Params params;
	params.Key = Key;
	params.ECurrency = ECurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ConsolidateNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UConsolidateNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ConsolidateNode.OnRequestCompleted");

	UConsolidateNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ConsolidateNode.ConsolidateNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConsolidateNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConsolidateNode* UConsolidateNode::STATIC_ConsolidateNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ConsolidateNode.ConsolidateNode");

	UConsolidateNode_ConsolidateNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ItemDefID = ItemDefID;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetQuantityNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetQuantityNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetQuantityNode.OnRequestCompleted");

	UGetQuantityNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetQuantityNode.GetQuantityNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefID                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetQuantityNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetQuantityNode* UGetQuantityNode::STATIC_GetQuantityNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetQuantityNode.GetQuantityNode");

	UGetQuantityNode_GetQuantityNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.ItemDefID = ItemDefID;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.DeleteLeaderboardNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeleteLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteLeaderboardNode.OnRequestCompleted");

	UDeleteLeaderboardNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.DeleteLeaderboardNode.DeleteLeaderboardNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeleteLeaderboardNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeleteLeaderboardNode* UDeleteLeaderboardNode::STATIC_DeleteLeaderboardNode(const struct FString& Key, int AppID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.DeleteLeaderboardNode.DeleteLeaderboardNode");

	UDeleteLeaderboardNode_DeleteLeaderboardNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.FindOrCreateLeaderboardNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFindOrCreateLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FindOrCreateLeaderboardNode.OnRequestCompleted");

	UFindOrCreateLeaderboardNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.FindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SortMethod                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyTrustedWrites             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyFriendsReads              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindOrCreateLeaderboardNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindOrCreateLeaderboardNode* UFindOrCreateLeaderboardNode::STATIC_FindOrCreateLeaderboardNode(const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode");

	UFindOrCreateLeaderboardNode_FindOrCreateLeaderboardNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;
	params.SortMethod = SortMethod;
	params.DisplayType = DisplayType;
	params.bCreateIfNotFound = bCreateIfNotFound;
	params.bOnlyTrustedWrites = bOnlyTrustedWrites;
	params.bOnlyFriendsReads = bOnlyFriendsReads;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetLeaderboardEntriesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetLeaderboardEntriesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetLeaderboardEntriesNode.OnRequestCompleted");

	UGetLeaderboardEntriesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetLeaderboardEntriesNode.GetLeaderboardEntriesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetLeaderboardEntriesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetLeaderboardEntriesNode* UGetLeaderboardEntriesNode::STATIC_GetLeaderboardEntriesNode(const struct FString& Key, int AppID, int RangeStart, int RangeEnd, int LeaderboardID, int DataRequest, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetLeaderboardEntriesNode.GetLeaderboardEntriesNode");

	UGetLeaderboardEntriesNode_GetLeaderboardEntriesNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.LeaderboardID = LeaderboardID;
	params.DataRequest = DataRequest;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetLeaderboardsForGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetLeaderboardsForGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetLeaderboardsForGameNode.OnRequestCompleted");

	UGetLeaderboardsForGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetLeaderboardsForGameNode.GetLeaderboardsForGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetLeaderboardsForGameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetLeaderboardsForGameNode* UGetLeaderboardsForGameNode::STATIC_GetLeaderboardsForGameNode(const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetLeaderboardsForGameNode.GetLeaderboardsForGameNode");

	UGetLeaderboardsForGameNode_GetLeaderboardsForGameNode_Params params;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ResetLeaderboardNode.ResetLeaderboardNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UResetLeaderboardNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UResetLeaderboardNode* UResetLeaderboardNode::STATIC_ResetLeaderboardNode(const struct FString& Key, int AppID, int LeaderboardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResetLeaderboardNode.ResetLeaderboardNode");

	UResetLeaderboardNode_ResetLeaderboardNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.LeaderboardID = LeaderboardID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ResetLeaderboardNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UResetLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResetLeaderboardNode.OnRequestCompleted");

	UResetLeaderboardNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.SetLeaderboardScoreNode.SetLeaderboardScoreNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LeaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ScoreMethod                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Details                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USetLeaderboardScoreNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetLeaderboardScoreNode* USetLeaderboardScoreNode::STATIC_SetLeaderboardScoreNode(const struct FString& Key, int AppID, int LeaderboardID, const struct FUWorksSteamID& SteamID, int Score, const struct FString& ScoreMethod, TArray<unsigned char> Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetLeaderboardScoreNode.SetLeaderboardScoreNode");

	USetLeaderboardScoreNode_SetLeaderboardScoreNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.LeaderboardID = LeaderboardID;
	params.SteamID = SteamID;
	params.Score = Score;
	params.ScoreMethod = ScoreMethod;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetLeaderboardScoreNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetLeaderboardScoreNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetLeaderboardScoreNode.OnRequestCompleted");

	USetLeaderboardScoreNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AdjustAgreementNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdjustAgreementNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AdjustAgreementNode.OnRequestCompleted");

	UAdjustAgreementNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AdjustAgreementNode.AdjustAgreementNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NextProcessDate                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAdjustAgreementNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAdjustAgreementNode* UAdjustAgreementNode::STATIC_AdjustAgreementNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FString& NextProcessDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AdjustAgreementNode.AdjustAgreementNode");

	UAdjustAgreementNode_AdjustAgreementNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.NextProcessDate = NextProcessDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.CancelAgreementNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCancelAgreementNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CancelAgreementNode.OnRequestCompleted");

	UCancelAgreementNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CancelAgreementNode.CancelAgreementNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCancelAgreementNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCancelAgreementNode* UCancelAgreementNode::STATIC_CancelAgreementNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CancelAgreementNode.CancelAgreementNode");

	UCancelAgreementNode_CancelAgreementNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.FinalizeTxnNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFinalizeTxnNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FinalizeTxnNode.OnRequestCompleted");

	UFinalizeTxnNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.FinalizeTxnNode.FinalizeTxnNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFinalizeTxnNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFinalizeTxnNode* UFinalizeTxnNode::STATIC_FinalizeTxnNode(const struct FString& Key, const struct FString& OrderID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.FinalizeTxnNode.FinalizeTxnNode");

	UFinalizeTxnNode_FinalizeTxnNode_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetReportNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetReportNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetReportNode.OnRequestCompleted");

	UGetReportNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetReportNode.GetReportNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksWeb_EUWorksReportType    Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetReportNode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetReportNode* UGetReportNode::STATIC_GetReportNode(const struct FString& Key, int AppID, const struct FString& Time, UWorksWeb_EUWorksReportType Type, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetReportNode.GetReportNode");

	UGetReportNode_GetReportNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Time = Time;
	params.Type = Type;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetUserAgreementInfoNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetUserAgreementInfoNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserAgreementInfoNode.OnRequestCompleted");

	UGetUserAgreementInfoNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetUserAgreementInfoNode.GetUserAgreementInfoNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUserAgreementInfoNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserAgreementInfoNode* UGetUserAgreementInfoNode::STATIC_GetUserAgreementInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserAgreementInfoNode.GetUserAgreementInfoNode");

	UGetUserAgreementInfoNode_GetUserAgreementInfoNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetUserInfoNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetUserInfoNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserInfoNode.OnRequestCompleted");

	UGetUserInfoNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetUserInfoNode.GetUserInfoNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUserInfoNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserInfoNode* UGetUserInfoNode::STATIC_GetUserInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserInfoNode.GetUserInfoNode");

	UGetUserInfoNode_GetUserInfoNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.InitTxnNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInitTxnNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.InitTxnNode.OnRequestCompleted");

	UInitTxnNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.InitTxnNode.InitTxnNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemIds                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantities                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Amounts                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Descriptions                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Categories                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    AssociatedBundles              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BillingTypes                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         StartDates                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         EndDates                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Periods                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Frequencies                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RecurringAmounts               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            BundleCount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    BundleIDs                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    BundleQuantities               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BundleDescriptions             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         BundleCategories               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// UWorksWeb_EUWorksUserSession   UserSession                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInitTxnNode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInitTxnNode* UInitTxnNode::STATIC_InitTxnNode(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, int AppID, int ItemCount, const struct FString& Language, const struct FString& Currency, TArray<struct FUWorksSteamItemDef> ItemIds, TArray<int> Quantities, TArray<int> Amounts, TArray<struct FString> Descriptions, TArray<struct FString> Categories, TArray<int> AssociatedBundles, TArray<struct FString> BillingTypes, TArray<struct FString> StartDates, TArray<struct FString> EndDates, TArray<struct FString> Periods, TArray<int> Frequencies, TArray<struct FString> RecurringAmounts, int BundleCount, TArray<int> BundleIDs, TArray<int> BundleQuantities, TArray<struct FString> BundleDescriptions, TArray<struct FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.InitTxnNode.InitTxnNode");

	UInitTxnNode_InitTxnNode_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ItemCount = ItemCount;
	params.Language = Language;
	params.Currency = Currency;
	params.ItemIds = ItemIds;
	params.Quantities = Quantities;
	params.Amounts = Amounts;
	params.Descriptions = Descriptions;
	params.Categories = Categories;
	params.AssociatedBundles = AssociatedBundles;
	params.BillingTypes = BillingTypes;
	params.StartDates = StartDates;
	params.EndDates = EndDates;
	params.Periods = Periods;
	params.Frequencies = Frequencies;
	params.RecurringAmounts = RecurringAmounts;
	params.BundleCount = BundleCount;
	params.BundleIDs = BundleIDs;
	params.BundleQuantities = BundleQuantities;
	params.BundleDescriptions = BundleDescriptions;
	params.BundleCategories = BundleCategories;
	params.UserSession = UserSession;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ProcessAgreementNode.ProcessAgreementNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AgreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProcessAgreementNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UProcessAgreementNode* UProcessAgreementNode::STATIC_ProcessAgreementNode(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, int Amount, const struct FString& Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ProcessAgreementNode.ProcessAgreementNode");

	UProcessAgreementNode_ProcessAgreementNode_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.SteamID = SteamID;
	params.AgreementID = AgreementID;
	params.AppID = AppID;
	params.Amount = Amount;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ProcessAgreementNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProcessAgreementNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ProcessAgreementNode.OnRequestCompleted");

	UProcessAgreementNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.QueryTxnNode.QueryTxnNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TransID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQueryTxnNode*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQueryTxnNode* UQueryTxnNode::STATIC_QueryTxnNode(const struct FString& Key, int AppID, const struct FString& OrderID, const struct FString& TransID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.QueryTxnNode.QueryTxnNode");

	UQueryTxnNode_QueryTxnNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.OrderID = OrderID;
	params.TransID = TransID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.QueryTxnNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQueryTxnNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.QueryTxnNode.OnRequestCompleted");

	UQueryTxnNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.RefundTxnNode.RefundTxnNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URefundTxnNode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URefundTxnNode* URefundTxnNode::STATIC_RefundTxnNode(const struct FString& Key, const struct FString& OrderID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RefundTxnNode.RefundTxnNode");

	URefundTxnNode_RefundTxnNode_Params params;
	params.Key = Key;
	params.OrderID = OrderID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RefundTxnNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URefundTxnNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RefundTxnNode.OnRequestCompleted");

	URefundTxnNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetNewsForAppNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetNewsForAppNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetNewsForAppNode.OnRequestCompleted");

	UGetNewsForAppNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetNewsForAppNode.GetNewsForAppNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Feeds                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetNewsForAppNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetNewsForAppNode* UGetNewsForAppNode::STATIC_GetNewsForAppNode(int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetNewsForAppNode.GetNewsForAppNode");

	UGetNewsForAppNode_GetNewsForAppNode_Params params;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.EndDate = EndDate;
	params.Count = Count;
	params.Feeds = Feeds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetNewsForAppAuthedNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetNewsForAppAuthedNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetNewsForAppAuthedNode.OnRequestCompleted");

	UGetNewsForAppAuthedNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetNewsForAppAuthedNode.GetNewsForAppAuthedNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Feeds                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetNewsForAppAuthedNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetNewsForAppAuthedNode* UGetNewsForAppAuthedNode::STATIC_GetNewsForAppAuthedNode(const struct FString& Key, int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetNewsForAppAuthedNode.GetNewsForAppAuthedNode");

	UGetNewsForAppAuthedNode_GetNewsForAppAuthedNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.EndDate = EndDate;
	params.Count = Count;
	params.Feeds = Feeds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RecordOfflinePlaytimeNode.RecordOfflinePlaytimeNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPlaySessions     PlaySessions                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class URecordOfflinePlaytimeNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URecordOfflinePlaytimeNode* URecordOfflinePlaytimeNode::STATIC_RecordOfflinePlaytimeNode(const struct FUWorksSteamID& SteamID, const struct FString& Ticket, const struct FUWorksPlaySessions& PlaySessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RecordOfflinePlaytimeNode.RecordOfflinePlaytimeNode");

	URecordOfflinePlaytimeNode_RecordOfflinePlaytimeNode_Params params;
	params.SteamID = SteamID;
	params.Ticket = Ticket;
	params.PlaySessions = PlaySessions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RecordOfflinePlaytimeNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URecordOfflinePlaytimeNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RecordOfflinePlaytimeNode.OnRequestCompleted");

	URecordOfflinePlaytimeNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetRecentlyPlayedGamesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetRecentlyPlayedGamesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetRecentlyPlayedGamesNode.OnRequestCompleted");

	UGetRecentlyPlayedGamesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetRecentlyPlayedGamesNode.GetRecentlyPlayedGamesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetRecentlyPlayedGamesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetRecentlyPlayedGamesNode* UGetRecentlyPlayedGamesNode::STATIC_GetRecentlyPlayedGamesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetRecentlyPlayedGamesNode.GetRecentlyPlayedGamesNode");

	UGetRecentlyPlayedGamesNode_GetRecentlyPlayedGamesNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetOwnedGamesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetOwnedGamesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetOwnedGamesNode.OnRequestCompleted");

	UGetOwnedGamesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetOwnedGamesNode.GetOwnedGamesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAppInfo                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludePlayedFreeGames        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    AppIDsFilter                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGetOwnedGamesNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetOwnedGamesNode* UGetOwnedGamesNode::STATIC_GetOwnedGamesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> AppIDsFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetOwnedGamesNode.GetOwnedGamesNode");

	UGetOwnedGamesNode_GetOwnedGamesNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bIncludeAppInfo = bIncludeAppInfo;
	params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	params.AppIDsFilter = AppIDsFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetSteamLevelNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetSteamLevelNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetSteamLevelNode.OnRequestCompleted");

	UGetSteamLevelNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetSteamLevelNode.GetSteamLevelNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetSteamLevelNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetSteamLevelNode* UGetSteamLevelNode::STATIC_GetSteamLevelNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetSteamLevelNode.GetSteamLevelNode");

	UGetSteamLevelNode_GetSteamLevelNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetBadgesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetBadgesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetBadgesNode.OnRequestCompleted");

	UGetBadgesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetBadgesNode.GetBadgesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetBadgesNode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetBadgesNode* UGetBadgesNode::STATIC_GetBadgesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetBadgesNode.GetBadgesNode");

	UGetBadgesNode_GetBadgesNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetCommunityBadgeProgressNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetCommunityBadgeProgressNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCommunityBadgeProgressNode.OnRequestCompleted");

	UGetCommunityBadgeProgressNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetCommunityBadgeProgressNode.GetCommunityBadgeProgressNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BadgeID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetCommunityBadgeProgressNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetCommunityBadgeProgressNode* UGetCommunityBadgeProgressNode::STATIC_GetCommunityBadgeProgressNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int BadgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCommunityBadgeProgressNode.GetCommunityBadgeProgressNode");

	UGetCommunityBadgeProgressNode_GetCommunityBadgeProgressNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.BadgeID = BadgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.IsPlayingSharedGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayingSharedGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.IsPlayingSharedGameNode.OnRequestCompleted");

	UIsPlayingSharedGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.IsPlayingSharedGameNode.IsPlayingSharedGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppIDPlaying                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UIsPlayingSharedGameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UIsPlayingSharedGameNode* UIsPlayingSharedGameNode::STATIC_IsPlayingSharedGameNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppIDPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.IsPlayingSharedGameNode.IsPlayingSharedGameNode");

	UIsPlayingSharedGameNode_IsPlayingSharedGameNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDPlaying = AppIDPlaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.QueryFilesNode.QueryFilesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         RequiredTags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         ExcludedTags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RequiredFlags                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         OmittedFlags                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 SearchText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  ChildPublishedFileID           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeRecentVotesOnly        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksRequiredKVTags   RequiredKVTags                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bTotalOnly                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIDsOnly                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnVoteData                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnTags                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnKVTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnPreviews                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnChildren                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnShortDescription        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnForSaleData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnPlaytimeStats            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPerPage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchAllTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Language                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnMetadata                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQueryFilesNode*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQueryFilesNode* UQueryFilesNode::STATIC_QueryFilesNode(const struct FString& Key, unsigned char QueryType, int Page, int CreatorAppID, int AppID, TArray<struct FString> RequiredTags, TArray<struct FString> ExcludedTags, TArray<struct FString> RequiredFlags, TArray<struct FString> OmittedFlags, const struct FString& SearchText, unsigned char FileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int ReturnPlaytimeStats, int NumPerPage, bool bMatchAllTags, int CacheMaxAgeSeconds, int Language, bool bReturnMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.QueryFilesNode.QueryFilesNode");

	UQueryFilesNode_QueryFilesNode_Params params;
	params.Key = Key;
	params.QueryType = QueryType;
	params.Page = Page;
	params.CreatorAppID = CreatorAppID;
	params.AppID = AppID;
	params.RequiredTags = RequiredTags;
	params.ExcludedTags = ExcludedTags;
	params.RequiredFlags = RequiredFlags;
	params.OmittedFlags = OmittedFlags;
	params.SearchText = SearchText;
	params.FileType = FileType;
	params.ChildPublishedFileID = ChildPublishedFileID;
	params.Days = Days;
	params.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
	params.RequiredKVTags = RequiredKVTags;
	params.bTotalOnly = bTotalOnly;
	params.bIDsOnly = bIDsOnly;
	params.bReturnVoteData = bReturnVoteData;
	params.bReturnTags = bReturnTags;
	params.bReturnKVTags = bReturnKVTags;
	params.bReturnPreviews = bReturnPreviews;
	params.bReturnChildren = bReturnChildren;
	params.bReturnShortDescription = bReturnShortDescription;
	params.bReturnForSaleData = bReturnForSaleData;
	params.ReturnPlaytimeStats = ReturnPlaytimeStats;
	params.NumPerPage = NumPerPage;
	params.bMatchAllTags = bMatchAllTags;
	params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
	params.Language = Language;
	params.bReturnMetadata = bReturnMetadata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.QueryFilesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQueryFilesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.QueryFilesNode.OnRequestCompleted");

	UQueryFilesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.SetDeveloperMetadataNode.SetDeveloperMetadataNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetDeveloperMetadataNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetDeveloperMetadataNode* USetDeveloperMetadataNode::STATIC_SetDeveloperMetadataNode(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetDeveloperMetadataNode.SetDeveloperMetadataNode");

	USetDeveloperMetadataNode_SetDeveloperMetadataNode_Params params;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetDeveloperMetadataNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetDeveloperMetadataNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetDeveloperMetadataNode.OnRequestCompleted");

	USetDeveloperMetadataNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UpdateTagsNode.UpdateTagsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         AddTags                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         RemoveTags                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UUpdateTagsNode*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateTagsNode* UUpdateTagsNode::STATIC_UpdateTagsNode(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, TArray<struct FString> AddTags, TArray<struct FString> RemoveTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UpdateTagsNode.UpdateTagsNode");

	UUpdateTagsNode_UpdateTagsNode_Params params;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.AddTags = AddTags;
	params.RemoveTags = RemoveTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UpdateTagsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUpdateTagsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UpdateTagsNode.OnRequestCompleted");

	UUpdateTagsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.RankedByPublicationOrderNode.RankedByPublicationOrderNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class URankedByPublicationOrderNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URankedByPublicationOrderNode* URankedByPublicationOrderNode::STATIC_RankedByPublicationOrderNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RankedByPublicationOrderNode.RankedByPublicationOrderNode");

	URankedByPublicationOrderNode_RankedByPublicationOrderNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RankedByPublicationOrderNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URankedByPublicationOrderNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RankedByPublicationOrderNode.OnRequestCompleted");

	URankedByPublicationOrderNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.RankedByTrendNode.RankedByTrendNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class URankedByTrendNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URankedByTrendNode* URankedByTrendNode::STATIC_RankedByTrendNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, int Days, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RankedByTrendNode.RankedByTrendNode");

	URankedByTrendNode_RankedByTrendNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Days = Days;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RankedByTrendNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URankedByTrendNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RankedByTrendNode.OnRequestCompleted");

	URankedByTrendNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.RankedByVoteNode.RankedByVoteNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class URankedByVoteNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URankedByVoteNode* URankedByVoteNode::STATIC_RankedByVoteNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RankedByVoteNode.RankedByVoteNode");

	URankedByVoteNode_RankedByVoteNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.StartIndex = StartIndex;
	params.Count = Count;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.RankedByVoteNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URankedByVoteNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.RankedByVoteNode.OnRequestCompleted");

	URankedByVoteNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ResultSetSummaryNode.ResultSetSummaryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TagCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTagCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTags                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UResultSetSummaryNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UResultSetSummaryNode* UResultSetSummaryNode::STATIC_ResultSetSummaryNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tags, TArray<struct FString> UserTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResultSetSummaryNode.ResultSetSummaryNode");

	UResultSetSummaryNode_ResultSetSummaryNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.TagCount = TagCount;
	params.UserTagCount = UserTagCount;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tags = Tags;
	params.UserTags = UserTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ResultSetSummaryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UResultSetSummaryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResultSetSummaryNode.OnRequestCompleted");

	UResultSetSummaryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ItemVoteSummaryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UItemVoteSummaryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ItemVoteSummaryNode.OnRequestCompleted");

	UItemVoteSummaryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.ItemVoteSummaryNode.ItemVoteSummaryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UItemVoteSummaryNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UItemVoteSummaryNode* UItemVoteSummaryNode::STATIC_ItemVoteSummaryNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ItemVoteSummaryNode.ItemVoteSummaryNode");

	UItemVoteSummaryNode_ItemVoteSummaryNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UserVoteSummaryNode.UserVoteSummaryNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UUserVoteSummaryNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserVoteSummaryNode* UUserVoteSummaryNode::STATIC_UserVoteSummaryNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UserVoteSummaryNode.UserVoteSummaryNode");

	UUserVoteSummaryNode_UserVoteSummaryNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UserVoteSummaryNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserVoteSummaryNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UserVoteSummaryNode.OnRequestCompleted");

	UUserVoteSummaryNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EnumerateUserPublishedFilesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnumerateUserPublishedFilesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EnumerateUserPublishedFilesNode.OnRequestCompleted");

	UEnumerateUserPublishedFilesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EnumerateUserPublishedFilesNode.EnumerateUserPublishedFilesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnumerateUserPublishedFilesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnumerateUserPublishedFilesNode* UEnumerateUserPublishedFilesNode::STATIC_EnumerateUserPublishedFilesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EnumerateUserPublishedFilesNode.EnumerateUserPublishedFilesNode");

	UEnumerateUserPublishedFilesNode_EnumerateUserPublishedFilesNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.EnumerateUserSubscribedFilesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnumerateUserSubscribedFilesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EnumerateUserSubscribedFilesNode.OnRequestCompleted");

	UEnumerateUserSubscribedFilesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.EnumerateUserSubscribedFilesNode.EnumerateUserSubscribedFilesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ListType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnumerateUserSubscribedFilesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnumerateUserSubscribedFilesNode* UEnumerateUserSubscribedFilesNode::STATIC_EnumerateUserSubscribedFilesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int ListType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.EnumerateUserSubscribedFilesNode.EnumerateUserSubscribedFilesNode");

	UEnumerateUserSubscribedFilesNode_EnumerateUserSubscribedFilesNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.ListType = ListType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetCollectionDetailsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetCollectionDetailsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCollectionDetailsNode.OnRequestCompleted");

	UGetCollectionDetailsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetCollectionDetailsNode.GetCollectionDetailsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            CollectionCount                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGetCollectionDetailsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetCollectionDetailsNode* UGetCollectionDetailsNode::STATIC_GetCollectionDetailsNode(int CollectionCount, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetCollectionDetailsNode.GetCollectionDetailsNode");

	UGetCollectionDetailsNode_GetCollectionDetailsNode_Params params;
	params.CollectionCount = CollectionCount;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPublishedFileDetailsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPublishedFileDetailsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPublishedFileDetailsNode.OnRequestCompleted");

	UGetPublishedFileDetailsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPublishedFileDetailsNode.GetPublishedFileDetailsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGetPublishedFileDetailsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPublishedFileDetailsNode* UGetPublishedFileDetailsNode::STATIC_GetPublishedFileDetailsNode(int ItemCount, TArray<int> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPublishedFileDetailsNode.GetPublishedFileDetailsNode");

	UGetPublishedFileDetailsNode_GetPublishedFileDetailsNode_Params params;
	params.ItemCount = ItemCount;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetUGCFileDetailsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetUGCFileDetailsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUGCFileDetailsNode.OnRequestCompleted");

	UGetUGCFileDetailsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetUGCFileDetailsNode.GetUGCFileDetailsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UGCID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUGCFileDetailsNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUGCFileDetailsNode* UGetUGCFileDetailsNode::STATIC_GetUGCFileDetailsNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUGCFileDetailsNode.GetUGCFileDetailsNode");

	UGetUGCFileDetailsNode_GetUGCFileDetailsNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetUGCUsedByGCNode.SetUGCUsedByGCNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UGCID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetUGCUsedByGCNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetUGCUsedByGCNode* USetUGCUsedByGCNode::STATIC_SetUGCUsedByGCNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, bool bUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetUGCUsedByGCNode.SetUGCUsedByGCNode");

	USetUGCUsedByGCNode_SetUGCUsedByGCNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;
	params.bUsed = bUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetUGCUsedByGCNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetUGCUsedByGCNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetUGCUsedByGCNode.OnRequestCompleted");

	USetUGCUsedByGCNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.SubscribePublishedFileNode.SubscribePublishedFileNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublishedFileID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubscribePublishedFileNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USubscribePublishedFileNode* USubscribePublishedFileNode::STATIC_SubscribePublishedFileNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SubscribePublishedFileNode.SubscribePublishedFileNode");

	USubscribePublishedFileNode_SubscribePublishedFileNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SubscribePublishedFileNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubscribePublishedFileNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SubscribePublishedFileNode.OnRequestCompleted");

	USubscribePublishedFileNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.UnsubscribePublishedFileNode.UnsubscribePublishedFileNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublishedFileID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUnsubscribePublishedFileNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUnsubscribePublishedFileNode* UUnsubscribePublishedFileNode::STATIC_UnsubscribePublishedFileNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UnsubscribePublishedFileNode.UnsubscribePublishedFileNode");

	UUnsubscribePublishedFileNode_UnsubscribePublishedFileNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.UnsubscribePublishedFileNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUnsubscribePublishedFileNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.UnsubscribePublishedFileNode.OnRequestCompleted");

	UUnsubscribePublishedFileNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CheckAppOwnershipNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckAppOwnershipNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CheckAppOwnershipNode.OnRequestCompleted");

	UCheckAppOwnershipNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.CheckAppOwnershipNode.CheckAppOwnershipNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCheckAppOwnershipNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCheckAppOwnershipNode* UCheckAppOwnershipNode::STATIC_CheckAppOwnershipNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.CheckAppOwnershipNode.CheckAppOwnershipNode");

	UCheckAppOwnershipNode_CheckAppOwnershipNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetAppPriceInfoNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetAppPriceInfoNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppPriceInfoNode.OnRequestCompleted");

	UGetAppPriceInfoNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetAppPriceInfoNode.GetAppPriceInfoNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AppIDs                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetAppPriceInfoNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetAppPriceInfoNode* UGetAppPriceInfoNode::STATIC_GetAppPriceInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AppIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetAppPriceInfoNode.GetAppPriceInfoNode");

	UGetAppPriceInfoNode_GetAppPriceInfoNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDs = AppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetFriendListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetFriendListNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetFriendListNode.OnRequestCompleted");

	UGetFriendListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetFriendListNode.GetFriendListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Relationship                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetFriendListNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetFriendListNode* UGetFriendListNode::STATIC_GetFriendListNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetFriendListNode.GetFriendListNode");

	UGetFriendListNode_GetFriendListNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Relationship = Relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPlayerBansNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPlayerBansNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayerBansNode.OnRequestCompleted");

	UGetPlayerBansNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPlayerBansNode.GetPlayerBansNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDs                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPlayerBansNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPlayerBansNode* UGetPlayerBansNode::STATIC_GetPlayerBansNode(const struct FString& Key, const struct FString& SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayerBansNode.GetPlayerBansNode");

	UGetPlayerBansNode_GetPlayerBansNode_Params params;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPlayerSummariesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPlayerSummariesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayerSummariesNode.OnRequestCompleted");

	UGetPlayerSummariesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPlayerSummariesNode.GetPlayerSummariesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDs                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPlayerSummariesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPlayerSummariesNode* UGetPlayerSummariesNode::STATIC_GetPlayerSummariesNode(const struct FString& Key, const struct FString& SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayerSummariesNode.GetPlayerSummariesNode");

	UGetPlayerSummariesNode_GetPlayerSummariesNode_Params params;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPublisherAppOwnershipNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPublisherAppOwnershipNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPublisherAppOwnershipNode.OnRequestCompleted");

	UGetPublisherAppOwnershipNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPublisherAppOwnershipNode.GetPublisherAppOwnershipNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPublisherAppOwnershipNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPublisherAppOwnershipNode* UGetPublisherAppOwnershipNode::STATIC_GetPublisherAppOwnershipNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPublisherAppOwnershipNode.GetPublisherAppOwnershipNode");

	UGetPublisherAppOwnershipNode_GetPublisherAppOwnershipNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPublisherAppOwnershipChangesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPublisherAppOwnershipChangesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPublisherAppOwnershipChangesNode.OnRequestCompleted");

	UGetPublisherAppOwnershipChangesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPublisherAppOwnershipChangesNode.GetPublisherAppOwnershipChangesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PackageRowVersion              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CDKeyRowVersion                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPublisherAppOwnershipChangesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPublisherAppOwnershipChangesNode* UGetPublisherAppOwnershipChangesNode::STATIC_GetPublisherAppOwnershipChangesNode(const struct FString& Key, const struct FString& PackageRowVersion, const struct FString& CDKeyRowVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPublisherAppOwnershipChangesNode.GetPublisherAppOwnershipChangesNode");

	UGetPublisherAppOwnershipChangesNode_GetPublisherAppOwnershipChangesNode_Params params;
	params.Key = Key;
	params.PackageRowVersion = PackageRowVersion;
	params.CDKeyRowVersion = CDKeyRowVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetUserGroupListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetUserGroupListNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserGroupListNode.OnRequestCompleted");

	UGetUserGroupListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetUserGroupListNode.GetUserGroupListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUserGroupListNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserGroupListNode* UGetUserGroupListNode::STATIC_GetUserGroupListNode(const struct FString& Key, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserGroupListNode.GetUserGroupListNode");

	UGetUserGroupListNode_GetUserGroupListNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GrantPackageNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGrantPackageNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GrantPackageNode.OnRequestCompleted");

	UGrantPackageNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GrantPackageNode.GrantPackageNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PackageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IPAddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ThirdPartyKey                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ThirdPartyAppID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrantPackageNode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGrantPackageNode* UGrantPackageNode::STATIC_GrantPackageNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int PackageID, const struct FString& IPAddress, const struct FString& ThirdPartyKey, int ThirdPartyAppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GrantPackageNode.GrantPackageNode");

	UGrantPackageNode_GrantPackageNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.PackageID = PackageID;
	params.IPAddress = IPAddress;
	params.ThirdPartyKey = ThirdPartyKey;
	params.ThirdPartyAppID = ThirdPartyAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ResolveVanityURLNode.ResolveVanityURLNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 VanityURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  URLType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UResolveVanityURLNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UResolveVanityURLNode* UResolveVanityURLNode::STATIC_ResolveVanityURLNode(const struct FString& Key, const struct FString& VanityURL, unsigned char URLType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResolveVanityURLNode.ResolveVanityURLNode");

	UResolveVanityURLNode_ResolveVanityURLNode_Params params;
	params.Key = Key;
	params.VanityURL = VanityURL;
	params.URLType = URLType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.ResolveVanityURLNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UResolveVanityURLNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.ResolveVanityURLNode.OnRequestCompleted");

	UResolveVanityURLNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AuthenticateUserNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthenticateUserNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AuthenticateUserNode.OnRequestCompleted");

	UAuthenticateUserNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AuthenticateUserNode.AuthenticateUserNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          SessionKey                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          EncryptedLoginKey              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UAuthenticateUserNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAuthenticateUserNode* UAuthenticateUserNode::STATIC_AuthenticateUserNode(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AuthenticateUserNode.AuthenticateUserNode");

	UAuthenticateUserNode_AuthenticateUserNode_Params params;
	params.SteamID = SteamID;
	params.SessionKey = SessionKey;
	params.EncryptedLoginKey = EncryptedLoginKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.AuthenticateUserTicketNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthenticateUserTicketNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AuthenticateUserTicketNode.OnRequestCompleted");

	UAuthenticateUserTicketNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.AuthenticateUserTicketNode.AuthenticateUserTicketNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAuthenticateUserTicketNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAuthenticateUserTicketNode* UAuthenticateUserTicketNode::STATIC_AuthenticateUserTicketNode(const struct FString& Key, int AppID, const struct FString& Ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.AuthenticateUserTicketNode.AuthenticateUserTicketNode");

	UAuthenticateUserTicketNode_AuthenticateUserTicketNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetGlobalAchievementPercentagesForAppNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetGlobalAchievementPercentagesForAppNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetGlobalAchievementPercentagesForAppNode.OnRequestCompleted");

	UGetGlobalAchievementPercentagesForAppNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetGlobalAchievementPercentagesForAppNode.GetGlobalAchievementPercentagesForAppNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetGlobalAchievementPercentagesForAppNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetGlobalAchievementPercentagesForAppNode* UGetGlobalAchievementPercentagesForAppNode::STATIC_GetGlobalAchievementPercentagesForAppNode(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetGlobalAchievementPercentagesForAppNode.GetGlobalAchievementPercentagesForAppNode");

	UGetGlobalAchievementPercentagesForAppNode_GetGlobalAchievementPercentagesForAppNode_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetGlobalStatsForGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetGlobalStatsForGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetGlobalStatsForGameNode.OnRequestCompleted");

	UGetGlobalStatsForGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetGlobalStatsForGameNode.GetGlobalStatsForGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Name                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            StartDate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetGlobalStatsForGameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetGlobalStatsForGameNode* UGetGlobalStatsForGameNode::STATIC_GetGlobalStatsForGameNode(int AppID, int Count, TArray<struct FString> Name, int StartDate, int EndDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetGlobalStatsForGameNode.GetGlobalStatsForGameNode");

	UGetGlobalStatsForGameNode_GetGlobalStatsForGameNode_Params params;
	params.AppID = AppID;
	params.Count = Count;
	params.Name = Name;
	params.StartDate = StartDate;
	params.EndDate = EndDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetNumberOfCurrentPlayersNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetNumberOfCurrentPlayersNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetNumberOfCurrentPlayersNode.OnRequestCompleted");

	UGetNumberOfCurrentPlayersNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetNumberOfCurrentPlayersNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetNumberOfCurrentPlayersNode* UGetNumberOfCurrentPlayersNode::STATIC_GetNumberOfCurrentPlayersNode(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode");

	UGetNumberOfCurrentPlayersNode_GetNumberOfCurrentPlayersNode_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetPlayerAchievementsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetPlayerAchievementsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayerAchievementsNode.OnRequestCompleted");

	UGetPlayerAchievementsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetPlayerAchievementsNode.GetPlayerAchievementsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetPlayerAchievementsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPlayerAchievementsNode* UGetPlayerAchievementsNode::STATIC_GetPlayerAchievementsNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetPlayerAchievementsNode.GetPlayerAchievementsNode");

	UGetPlayerAchievementsNode_GetPlayerAchievementsNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetSchemaForGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetSchemaForGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetSchemaForGameNode.OnRequestCompleted");

	UGetSchemaForGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetSchemaForGameNode.GetSchemaForGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetSchemaForGameNode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetSchemaForGameNode* UGetSchemaForGameNode::STATIC_GetSchemaForGameNode(const struct FString& Key, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetSchemaForGameNode.GetSchemaForGameNode");

	UGetSchemaForGameNode_GetSchemaForGameNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetUserStatsForGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetUserStatsForGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserStatsForGameNode.OnRequestCompleted");

	UGetUserStatsForGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetUserStatsForGameNode.GetUserStatsForGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUserStatsForGameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserStatsForGameNode* UGetUserStatsForGameNode::STATIC_GetUserStatsForGameNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetUserStatsForGameNode.GetUserStatsForGameNode");

	UGetUserStatsForGameNode_GetUserStatsForGameNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetUserStatsForGameNode.SetUserStatsForGameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Name                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Value                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USetUserStatsForGameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetUserStatsForGameNode* USetUserStatsForGameNode::STATIC_SetUserStatsForGameNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<struct FString> Name, TArray<int> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetUserStatsForGameNode.SetUserStatsForGameNode");

	USetUserStatsForGameNode_SetUserStatsForGameNode_Params params;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Count = Count;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetUserStatsForGameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetUserStatsForGameNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetUserStatsForGameNode.OnRequestCompleted");

	USetUserStatsForGameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.SetItemPaymentRulesNode.SetItemPaymentRulesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameItemID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPartnerAccounts  PartnerAccounts                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bMakeWorkshopFilesSubscribable (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bValidateOnly                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetItemPaymentRulesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetItemPaymentRulesNode* USetItemPaymentRulesNode::STATIC_SetItemPaymentRulesNode(const struct FString& Key, int AppID, int GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetItemPaymentRulesNode.SetItemPaymentRulesNode");

	USetItemPaymentRulesNode_SetItemPaymentRulesNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.GameItemID = GameItemID;
	params.AssociatedWorkshopFiles = AssociatedWorkshopFiles;
	params.PartnerAccounts = PartnerAccounts;
	params.bMakeWorkshopFilesSubscribable = bMakeWorkshopFilesSubscribable;
	params.bValidateOnly = bValidateOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.SetItemPaymentRulesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USetItemPaymentRulesNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.SetItemPaymentRulesNode.OnRequestCompleted");

	USetItemPaymentRulesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetFinalizedContributorsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetFinalizedContributorsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetFinalizedContributorsNode.OnRequestCompleted");

	UGetFinalizedContributorsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetFinalizedContributorsNode.GetFinalizedContributorsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameItemID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetFinalizedContributorsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetFinalizedContributorsNode* UGetFinalizedContributorsNode::STATIC_GetFinalizedContributorsNode(const struct FString& Key, int AppID, int GameItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetFinalizedContributorsNode.GetFinalizedContributorsNode");

	UGetFinalizedContributorsNode_GetFinalizedContributorsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.GameItemID = GameItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.GetItemDailyRevenueNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetItemDailyRevenueNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetItemDailyRevenueNode.OnRequestCompleted");

	UGetItemDailyRevenueNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksWeb.GetItemDailyRevenueNode.GetItemDailyRevenueNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DateStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DateEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetItemDailyRevenueNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetItemDailyRevenueNode* UGetItemDailyRevenueNode::STATIC_GetItemDailyRevenueNode(const struct FString& Key, int AppID, const struct FString& ItemId, int DateStart, int DateEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.GetItemDailyRevenueNode.GetItemDailyRevenueNode");

	UGetItemDailyRevenueNode_GetItemDailyRevenueNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.DateStart = DateStart;
	params.DateEnd = DateEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.PopulateItemDescriptionsNode.PopulateItemDescriptionsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksLanguages        Languages                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UPopulateItemDescriptionsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPopulateItemDescriptionsNode* UPopulateItemDescriptionsNode::STATIC_PopulateItemDescriptionsNode(const struct FString& Key, int AppID, const struct FUWorksLanguages& Languages)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.PopulateItemDescriptionsNode.PopulateItemDescriptionsNode");

	UPopulateItemDescriptionsNode_PopulateItemDescriptionsNode_Params params;
	params.Key = Key;
	params.AppID = AppID;
	params.Languages = Languages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksWeb.PopulateItemDescriptionsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPopulateItemDescriptionsNode::OnRequestCompleted(bool bSuccessful, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksWeb.PopulateItemDescriptionsNode.OnRequestCompleted");

	UPopulateItemDescriptionsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
