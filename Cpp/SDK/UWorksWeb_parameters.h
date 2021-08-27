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

// Function UWorksWeb.UWorksInterfaceWebApps.UpToDateCheckMinimal
struct UUWorksInterfaceWebApps_UpToDateCheckMinimal_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.UpToDateCheck
struct UUWorksInterfaceWebApps_UpToDateCheck_Params
{
	class UUWorksRequestWebUpToDateCheck*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLiveMinimal
struct UUWorksInterfaceWebApps_SetAppBuildLiveMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BetaKey;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.SetAppBuildLive
struct UUWorksInterfaceWebApps_SetAppBuildLive_Params
{
	class UUWorksRequestWebSetAppBuildLive*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddressMinimal
struct UUWorksInterfaceWebApps_GetServersAtAddressMinimal_Params
{
	struct FString                                     Addr;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetServersAtAddress
struct UUWorksInterfaceWebApps_GetServersAtAddress_Params
{
	class UUWorksRequestWebGetServersAtAddress*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetServerListMinimal
struct UUWorksInterfaceWebApps_GetServerListMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filter;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Limit;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetServerList
struct UUWorksInterfaceWebApps_GetServerList_Params
{
	class UUWorksRequestWebGetServerList*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetPlayersBannedMinimal
struct UUWorksInterfaceWebApps_GetPlayersBannedMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetPlayersBanned
struct UUWorksInterfaceWebApps_GetPlayersBanned_Params
{
	class UUWorksRequestWebGetPlayersBanned*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsListMinimal
struct UUWorksInterfaceWebApps_GetCheatingReportsListMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeBegin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReports;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBans;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportIDMin;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetCheatingReportsList
struct UUWorksInterfaceWebApps_GetCheatingReportsList_Params
{
	class UUWorksRequestWebGetCheatingReportsList*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppListMinimal
struct UUWorksInterfaceWebApps_GetAppListMinimal_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppList
struct UUWorksInterfaceWebApps_GetAppList_Params
{
	class UUWorksRequestWebGetAppList*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersionsMinimal
struct UUWorksInterfaceWebApps_GetAppDepotVersionsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppDepotVersions
struct UUWorksInterfaceWebApps_GetAppDepotVersions_Params
{
	class UUWorksRequestWebGetAppDepotVersions*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBuildsMinimal
struct UUWorksInterfaceWebApps_GetAppBuildsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBuilds
struct UUWorksInterfaceWebApps_GetAppBuilds_Params
{
	class UUWorksRequestWebGetAppBuilds*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBetasMinimal
struct UUWorksInterfaceWebApps_GetAppBetasMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebApps.GetAppBetas
struct UUWorksInterfaceWebApps_GetAppBetas_Params
{
	class UUWorksRequestWebGetAppBetas*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrameMinimal
struct UUWorksInterfaceWebBroadcast_PostGameDataFrameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BroadcastID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FrameData;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebBroadcast.PostGameDataFrame
struct UUWorksInterfaceWebBroadcast_PostGameDataFrame_Params
{
	class UUWorksRequestWebPostGameDataFrame*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSessionMinimal
struct UUWorksInterfaceWebCheatReporting_StartSecureMultiplayerSessionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.StartSecureMultiplayerSession
struct UUWorksInterfaceWebCheatReporting_StartSecureMultiplayerSession_Params
{
	class UUWorksRequestWebStartSecureMultiplayerSession* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUserMinimal
struct UUWorksInterfaceWebCheatReporting_RequestVacStatusForUserMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestVacStatusForUser
struct UUWorksInterfaceWebCheatReporting_RequestVacStatusForUser_Params
{
	class UUWorksRequestWebRequestVacStatusForUser*    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBanMinimal
struct UUWorksInterfaceWebCheatReporting_RequestPlayerGameBanMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReportID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatDescription;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDelayBan;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RequestPlayerGameBan
struct UUWorksInterfaceWebCheatReporting_RequestPlayerGameBan_Params
{
	class UUWorksRequestWebRequestPlayerGameBan*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheatingMinimal
struct UUWorksInterfaceWebCheatReporting_ReportPlayerCheatingMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDReporter;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppData;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeuristic;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetection;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerReport;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoReportID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SuspicionStartTime;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Severity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportPlayerCheating
struct UUWorksInterfaceWebCheatReporting_ReportPlayerCheating_Params
{
	class UUWorksRequestWebReportPlayerCheating*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatDataMinimal
struct UUWorksInterfaceWebCheatReporting_ReportCheatDataMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PathAndFileName;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WebCheatURL;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeNow;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeStarted;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeStopped;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameProcessID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CheatProcessID;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatParamA;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatParamB;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.ReportCheatData
struct UUWorksInterfaceWebCheatReporting_ReportCheatData_Params
{
	class UUWorksRequestWebReportCheatData*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBanMinimal
struct UUWorksInterfaceWebCheatReporting_RemovePlayerGameBanMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.RemovePlayerGameBan
struct UUWorksInterfaceWebCheatReporting_RemovePlayerGameBan_Params
{
	class UUWorksRequestWebRemovePlayerGameBan*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReportsMinimal
struct UUWorksInterfaceWebCheatReporting_GetCheatingReportsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeBegin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportIDMin;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReports;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBans;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.GetCheatingReports
struct UUWorksInterfaceWebCheatReporting_GetCheatingReports_Params
{
	class UUWorksRequestWebGetCheatingReports*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSessionMinimal
struct UUWorksInterfaceWebCheatReporting_EndSecureMultiplayerSessionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCheatReporting.EndSecureMultiplayerSession
struct UUWorksInterfaceWebCheatReporting_EndSecureMultiplayerSession_Params
{
	class UUWorksRequestWebEndSecureMultiplayerSession* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuseMinimal
struct UUWorksInterfaceWebCommunity_ReportAbuseMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDActor;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDTarget;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AbuseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ContentType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GID;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebCommunity.ReportAbuse
struct UUWorksInterfaceWebCommunity_ReportAbuse_Params
{
	class UUWorksRequestWebReportAbuse*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummaryMinimal
struct UUWorksInterfaceWebEcon_GetTradeOffersSummaryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeLastVisit;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersSummary
struct UUWorksInterfaceWebEcon_GetTradeOffersSummary_Params
{
	class UUWorksRequestWebGetTradeOffersSummary*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffersMinimal
struct UUWorksInterfaceWebEcon_GetTradeOffersMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetSentOffers;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetReceivedOffers;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetDescription;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActiveOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHistoricalOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeHistoricalCutoff;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffers
struct UUWorksInterfaceWebEcon_GetTradeOffers_Params
{
	class UUWorksRequestWebGetTradeOffers*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOfferMinimal
struct UUWorksInterfaceWebEcon_GetTradeOfferMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeOffer
struct UUWorksInterfaceWebEcon_GetTradeOffer_Params
{
	class UUWorksRequestWebGetTradeOffer*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistoryMinimal
struct UUWorksInterfaceWebEcon_GetTradeHistoryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTrades;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartAfterTime;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartAfterTradeID;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNavigatingBack;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetDescription;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeFailed;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeTotal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.GetTradeHistory
struct UUWorksInterfaceWebEcon_GetTradeHistory_Params
{
	class UUWorksRequestWebGetTradeHistory*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCacheMinimal
struct UUWorksInterfaceWebEcon_FlushInventoryCacheMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.FlushInventoryCache
struct UUWorksInterfaceWebEcon_FlushInventoryCache_Params
{
	class UUWorksRequestWebFlushInventoryCache*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.FlushContextCacheMinimal
struct UUWorksInterfaceWebEcon_FlushContextCacheMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.FlushContextCache
struct UUWorksInterfaceWebEcon_FlushContextCache_Params
{
	class UUWorksRequestWebFlushContextCache*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCacheMinimal
struct UUWorksInterfaceWebEcon_FlushAssetAppearanceCacheMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.FlushAssetAppearanceCache
struct UUWorksInterfaceWebEcon_FlushAssetAppearanceCache_Params
{
	class UUWorksRequestWebFlushAssetAppearanceCache*  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOfferMinimal
struct UUWorksInterfaceWebEcon_DeclineTradeOfferMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.DeclineTradeOffer
struct UUWorksInterfaceWebEcon_DeclineTradeOffer_Params
{
	class UUWorksRequestWebDeclineTradeOffer*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOfferMinimal
struct UUWorksInterfaceWebEcon_CancelTradeOfferMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEcon.CancelTradeOffer
struct UUWorksInterfaceWebEcon_CancelTradeOffer_Params
{
	class UUWorksRequestWebCancelTradeOffer*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetPopularMinimal
struct UUWorksInterfaceWebEconMarket_GetPopularMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rows;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FilterAppID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ECurrency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetPopular
struct UUWorksInterfaceWebEconMarket_GetPopular_Params
{
	class UUWorksRequestWebGetPopular*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibilityMinimal
struct UUWorksInterfaceWebEconMarket_GetMarketEligibilityMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetMarketEligibility
struct UUWorksInterfaceWebEconMarket_GetMarketEligibility_Params
{
	class UUWorksRequestWebGetMarketEligibility*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetIDMinimal
struct UUWorksInterfaceWebEconMarket_GetAssetIDMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ListingID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.GetAssetID
struct UUWorksInterfaceWebEconMarket_GetAssetID_Params
{
	class UUWorksRequestWebGetAssetID*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUserMinimal
struct UUWorksInterfaceWebEconMarket_CancelAppListingsForUserMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSynchronous;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconMarket.CancelAppListingsForUser
struct UUWorksInterfaceWebEconMarket_CancelAppListingsForUser_Params
{
	class UUWorksRequestWebCancelAppListingsForUser*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.StartTradeMinimal
struct UUWorksInterfaceWebEconomy_StartTradeMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              PartyA;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              PartyB;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.StartTrade
struct UUWorksInterfaceWebEconomy_StartTrade_Params
{
	class UUWorksRequestWebStartTrade*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransactionMinimal
struct UUWorksInterfaceWebEconomy_StartAssetTransactionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetID0;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AssetQuantity0;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Referrer;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClientAuth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.StartAssetTransaction
struct UUWorksInterfaceWebEconomy_StartAssetTransaction_Params
{
	class UUWorksRequestWebStartAssetTransaction*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPricesMinimal
struct UUWorksInterfaceWebEconomy_GetMarketPricesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetMarketPrices
struct UUWorksInterfaceWebEconomy_GetMarketPrices_Params
{
	class UUWorksRequestWebGetMarketPrices*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUserMinimal
struct UUWorksInterfaceWebEconomy_GetExportedAssetsForUserMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetExportedAssetsForUser
struct UUWorksInterfaceWebEconomy_GetExportedAssetsForUser_Params
{
	class UUWorksRequestWebGetExportedAssetsForUser*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPricesMinimal
struct UUWorksInterfaceWebEconomy_GetAssetPricesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetPrices
struct UUWorksInterfaceWebEconomy_GetAssetPrices_Params
{
	class UUWorksRequestWebGetAssetPrices*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfoMinimal
struct UUWorksInterfaceWebEconomy_GetAssetClassInfoMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClassCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClassID0;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID0;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.GetAssetClassInfo
struct UUWorksInterfaceWebEconomy_GetAssetClassInfo_Params
{
	class UUWorksRequestWebGetAssetClassInfo*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransactionMinimal
struct UUWorksInterfaceWebEconomy_FinalizeAssetTransactionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TxnID;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.FinalizeAssetTransaction
struct UUWorksInterfaceWebEconomy_FinalizeAssetTransaction_Params
{
	class UUWorksRequestWebFinalizeAssetTransaction*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.CanTradeMinimal
struct UUWorksInterfaceWebEconomy_CanTradeMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              TargetId;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebEconomy.CanTrade
struct UUWorksInterfaceWebEconomy_CanTrade_Params
{
	class UUWorksRequestWebCanTrade*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistoryMinimal
struct UUWorksInterfaceWebGameInventory_SupportGetAssetHistoryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.SupportGetAssetHistory
struct UUWorksInterfaceWebGameInventory_SupportGetAssetHistory_Params
{
	class UUWorksRequestWebSupportGetAssetHistory*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommandsMinimal
struct UUWorksInterfaceWebGameInventory_HistoryExecuteCommandsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActorId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.HistoryExecuteCommands
struct UUWorksInterfaceWebGameInventory_HistoryExecuteCommands_Params
{
	class UUWorksRequestWebHistoryExecuteCommands*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistoryMinimal
struct UUWorksInterfaceWebGameInventory_GetUserHistoryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetUserHistory
struct UUWorksInterfaceWebGameInventory_GetUserHistory_Params
{
	class UUWorksRequestWebGetUserHistory*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetailsMinimal
struct UUWorksInterfaceWebGameInventory_GetHistoryCommandDetailsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Arguments;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameInventory.GetHistoryCommandDetails
struct UUWorksInterfaceWebGameInventory_GetHistoryCommandDetails_Params
{
	class UUWorksRequestWebGetHistoryCommandDetails*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSessionMinimal
struct UUWorksInterfaceWebGameNotifications_UpdateSessionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTitle                                Title;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUsers                                Users;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.UpdateSession
struct UUWorksInterfaceWebGameNotifications_UpdateSession_Params
{
	class UUWorksRequestWebUpdateSession*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotificationsMinimal
struct UUWorksInterfaceWebGameNotifications_RequestNotificationsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.RequestNotifications
struct UUWorksInterfaceWebGameNotifications_RequestNotifications_Params
{
	class UUWorksRequestWebRequestNotifications*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForAppMinimal
struct UUWorksInterfaceWebGameNotifications_GetSessionDetailsForAppMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSessions                             Sessions;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.GetSessionDetailsForApp
struct UUWorksInterfaceWebGameNotifications_GetSessionDetailsForApp_Params
{
	class UUWorksRequestWebGetSessionDetailsForApp*    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForAppMinimal
struct UUWorksInterfaceWebGameNotifications_EnumerateSessionsForAppMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAllUserMessages;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAuthUserMessage;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.EnumerateSessionsForApp
struct UUWorksInterfaceWebGameNotifications_EnumerateSessionsForApp_Params
{
	class UUWorksRequestWebEnumerateSessionsForApp*    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionMinimal
struct UUWorksInterfaceWebGameNotifications_DeleteSessionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatchMinimal
struct UUWorksInterfaceWebGameNotifications_DeleteSessionBatchMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSessionBatch
struct UUWorksInterfaceWebGameNotifications_DeleteSessionBatch_Params
{
	class UUWorksRequestWebDeleteSessionBatch*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.DeleteSession
struct UUWorksInterfaceWebGameNotifications_DeleteSession_Params
{
	class UUWorksRequestWebDeleteSession*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSessionMinimal
struct UUWorksInterfaceWebGameNotifications_CreateSessionMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTitle                                Title;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUsers                                Users;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameNotifications.CreateSession
struct UUWorksInterfaceWebGameNotifications_CreateSession_Params
{
	class UUWorksRequestWebCreateSession*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.SetMemoMinimal
struct UUWorksInterfaceWebGameServers_SetMemoMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Memo;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.SetMemo
struct UUWorksInterfaceWebGameServers_SetMemo_Params
{
	class UUWorksRequestWebSetMemo*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatusMinimal
struct UUWorksInterfaceWebGameServers_SetBanStatusMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBanned;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.SetBanStatus
struct UUWorksInterfaceWebGameServers_SetBanStatus_Params
{
	class UUWorksRequestWebSetBanStatus*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginTokenMinimal
struct UUWorksInterfaceWebGameServers_ResetLoginTokenMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.ResetLoginToken
struct UUWorksInterfaceWebGameServers_ResetLoginToken_Params
{
	class UUWorksRequestWebResetLoginToken*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginTokenMinimal
struct UUWorksInterfaceWebGameServers_QueryLoginTokenMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginToken;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.QueryLoginToken
struct UUWorksInterfaceWebGameServers_QueryLoginToken_Params
{
	class UUWorksRequestWebQueryLoginToken*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIPMinimal
struct UUWorksInterfaceWebGameServers_GetServerSteamIDsByIPMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPs;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerSteamIDsByIP
struct UUWorksInterfaceWebGameServers_GetServerSteamIDsByIP_Params
{
	class UUWorksRequestWebGetServerSteamIDsByIP*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamIDMinimal
struct UUWorksInterfaceWebGameServers_GetServerIPsBySteamIDMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ServerSteamID;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetServerIPsBySteamID
struct UUWorksInterfaceWebGameServers_GetServerIPsBySteamID_Params
{
	class UUWorksRequestWebGetServerIPsBySteamID*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfoMinimal
struct UUWorksInterfaceWebGameServers_GetAccountPublicInfoMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountPublicInfo
struct UUWorksInterfaceWebGameServers_GetAccountPublicInfo_Params
{
	class UUWorksRequestWebGetAccountPublicInfo*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountListMinimal
struct UUWorksInterfaceWebGameServers_GetAccountListMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.GetAccountList
struct UUWorksInterfaceWebGameServers_GetAccountList_Params
{
	class UUWorksRequestWebGetAccountList*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccountMinimal
struct UUWorksInterfaceWebGameServers_DeleteAccountMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.DeleteAccount
struct UUWorksInterfaceWebGameServers_DeleteAccount_Params
{
	class UUWorksRequestWebDeleteAccount*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.CreateAccountMinimal
struct UUWorksInterfaceWebGameServers_CreateAccountMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Memo;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServers.CreateAccount
struct UUWorksInterfaceWebGameServers_CreateAccount_Params
{
	class UUWorksRequestWebCreateAccount*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGameMinimal
struct UUWorksInterfaceWebGameServerStats_GetGameServerPlayerStatsForGameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeStart;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeEnd;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebGameServerStats.GetGameServerPlayerStatsForGame
struct UUWorksInterfaceWebGameServerStats_GetGameServerPlayerStatsForGame_Params
{
	class UUWorksRequestWebGetGameServerPlayerStatsForGame* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetQuantityMinimal
struct UUWorksInterfaceWebInventory_GetQuantityMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefID;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetQuantity
struct UUWorksInterfaceWebInventory_GetQuantity_Params
{
	class UUWorksRequestWebGetQuantity*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheetMinimal
struct UUWorksInterfaceWebInventory_GetPriceSheetMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ECurrency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetPriceSheet
struct UUWorksInterfaceWebInventory_GetPriceSheet_Params
{
	class UUWorksRequestWebGetPriceSheet*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetItemDefsMinimal
struct UUWorksInterfaceWebInventory_GetItemDefsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModifiedSince;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefIDs;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 WorkshopIDs;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                CacheMaxAgeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetItemDefs
struct UUWorksInterfaceWebInventory_GetItemDefs_Params
{
	class UUWorksRequestWebGetItemDefs*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetInventoryMinimal
struct UUWorksInterfaceWebInventory_GetInventoryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.GetInventory
struct UUWorksInterfaceWebInventory_GetInventory_Params
{
	class UUWorksRequestWebGetInventory*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.ExchangeItemMinimal
struct UUWorksInterfaceWebInventory_ExchangeItemMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          MaterialsItemID;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        MaterialsQuantity;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         OutputItemDefID;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.ExchangeItem
struct UUWorksInterfaceWebInventory_ExchangeItem_Params
{
	class UUWorksRequestWebExchangeItem*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.ConsumeItemMinimal
struct UUWorksInterfaceWebInventory_ConsumeItemMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemInstanceID                  ItemId;                                                    // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.ConsumeItem
struct UUWorksInterfaceWebInventory_ConsumeItem_Params
{
	class UUWorksRequestWebConsumeItem*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.ConsolidateMinimal
struct UUWorksInterfaceWebInventory_ConsolidateMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefID;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.Consolidate
struct UUWorksInterfaceWebInventory_Consolidate_Params
{
	class UUWorksRequestWebConsolidate*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.AddPromoItemMinimal
struct UUWorksInterfaceWebInventory_AddPromoItemMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefID;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ItemPropsJSON;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.AddPromoItem
struct UUWorksInterfaceWebInventory_AddPromoItem_Params
{
	class UUWorksRequestWebAddPromoItem*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.AddItemMinimal
struct UUWorksInterfaceWebInventory_AddItemMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefID;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ItemPropsJSON;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebInventory.AddItem
struct UUWorksInterfaceWebInventory_AddItem_Params
{
	class UUWorksRequestWebAddItem*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScoreMinimal
struct UUWorksInterfaceWebLeaderboards_SetLeaderboardScoreMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScoreMethod;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Details;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.SetLeaderboardScore
struct UUWorksInterfaceWebLeaderboards_SetLeaderboardScore_Params
{
	class UUWorksRequestWebSetLeaderboardScore*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboardMinimal
struct UUWorksInterfaceWebLeaderboards_ResetLeaderboardMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.ResetLeaderboard
struct UUWorksInterfaceWebLeaderboards_ResetLeaderboard_Params
{
	class UUWorksRequestWebResetLeaderboard*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGameMinimal
struct UUWorksInterfaceWebLeaderboards_GetLeaderboardsForGameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardsForGame
struct UUWorksInterfaceWebLeaderboards_GetLeaderboardsForGame_Params
{
	class UUWorksRequestWebGetLeaderboardsForGame*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntriesMinimal
struct UUWorksInterfaceWebLeaderboards_GetLeaderboardEntriesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataRequest;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.GetLeaderboardEntries
struct UUWorksInterfaceWebLeaderboards_GetLeaderboardEntries_Params
{
	class UUWorksRequestWebGetLeaderboardEntries*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboardMinimal
struct UUWorksInterfaceWebLeaderboards_FindOrCreateLeaderboardMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SortMethod;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayType;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateIfNotFound;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyTrustedWrites;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyFriendsReads;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.FindOrCreateLeaderboard
struct UUWorksInterfaceWebLeaderboards_FindOrCreateLeaderboard_Params
{
	class UUWorksRequestWebFindOrCreateLeaderboard*    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboardMinimal
struct UUWorksInterfaceWebLeaderboards_DeleteLeaderboardMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebLeaderboards.DeleteLeaderboard
struct UUWorksInterfaceWebLeaderboards_DeleteLeaderboard_Params
{
	class UUWorksRequestWebDeleteLeaderboard*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxnMinimal
struct UUWorksInterfaceWebMicroTxn_RefundTxnMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.RefundTxn
struct UUWorksInterfaceWebMicroTxn_RefundTxn_Params
{
	class UUWorksRequestWebRefundTxn*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxnMinimal
struct UUWorksInterfaceWebMicroTxn_QueryTxnMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.QueryTxn
struct UUWorksInterfaceWebMicroTxn_QueryTxn_Params
{
	class UUWorksRequestWebQueryTxn*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreementMinimal
struct UUWorksInterfaceWebMicroTxn_ProcessAgreementMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.ProcessAgreement
struct UUWorksInterfaceWebMicroTxn_ProcessAgreement_Params
{
	class UUWorksRequestWebProcessAgreement*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxnMinimal
struct UUWorksInterfaceWebMicroTxn_InitTxnMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemIds;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Quantities;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Amounts;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Descriptions;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Categories;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        AssociatedBundles;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BillingTypes;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StartDates;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             EndDates;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Periods;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Frequencies;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RecurringAmounts;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                BundleCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        BundleIDs;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        BundleQuantities;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BundleDescriptions;                                        // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BundleCategories;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	UWorksWeb_EUWorksUserSession                       UserSession;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.InitTxn
struct UUWorksInterfaceWebMicroTxn_InitTxn_Params
{
	class UUWorksRequestWebInitTxn*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfoMinimal
struct UUWorksInterfaceWebMicroTxn_GetUserInfoMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserInfo
struct UUWorksInterfaceWebMicroTxn_GetUserInfo_Params
{
	class UUWorksRequestWebGetUserInfo*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfoMinimal
struct UUWorksInterfaceWebMicroTxn_GetUserAgreementInfoMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetUserAgreementInfo
struct UUWorksInterfaceWebMicroTxn_GetUserAgreementInfo_Params
{
	class UUWorksRequestWebGetUserAgreementInfo*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetReportMinimal
struct UUWorksInterfaceWebMicroTxn_GetReportMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksWeb_EUWorksReportType                        Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.GetReport
struct UUWorksInterfaceWebMicroTxn_GetReport_Params
{
	class UUWorksRequestWebGetReport*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxnMinimal
struct UUWorksInterfaceWebMicroTxn_FinalizeTxnMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.FinalizeTxn
struct UUWorksInterfaceWebMicroTxn_FinalizeTxn_Params
{
	class UUWorksRequestWebFinalizeTxn*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreementMinimal
struct UUWorksInterfaceWebMicroTxn_CancelAgreementMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.CancelAgreement
struct UUWorksInterfaceWebMicroTxn_CancelAgreement_Params
{
	class UUWorksRequestWebCancelAgreement*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreementMinimal
struct UUWorksInterfaceWebMicroTxn_AdjustAgreementMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NextProcessDate;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebMicroTxn.AdjustAgreement
struct UUWorksInterfaceWebMicroTxn_AdjustAgreement_Params
{
	class UUWorksRequestWebAdjustAgreement*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppMinimal
struct UUWorksInterfaceWebNews_GetNewsForAppMinimal_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Feeds;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthedMinimal
struct UUWorksInterfaceWebNews_GetNewsForAppAuthedMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Feeds;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForAppAuthed
struct UUWorksInterfaceWebNews_GetNewsForAppAuthed_Params
{
	class UUWorksRequestWebGetNewsForAppAuthed*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebNews.GetNewsForApp
struct UUWorksInterfaceWebNews_GetNewsForApp_Params
{
	class UUWorksRequestWebGetNewsForApp*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytimeMinimal
struct UUWorksInterfaceWebPlayer_RecordOfflinePlaytimeMinimal_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPlaySessions                         PlaySessions;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.RecordOfflinePlaytime
struct UUWorksInterfaceWebPlayer_RecordOfflinePlaytime_Params
{
	class UUWorksRequestWebRecordOfflinePlaytime*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGameMinimal
struct UUWorksInterfaceWebPlayer_IsPlayingSharedGameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppIDPlaying;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.IsPlayingSharedGame
struct UUWorksInterfaceWebPlayer_IsPlayingSharedGame_Params
{
	class UUWorksRequestWebIsPlayingSharedGame*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevelMinimal
struct UUWorksInterfaceWebPlayer_GetSteamLevelMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetSteamLevel
struct UUWorksInterfaceWebPlayer_GetSteamLevel_Params
{
	class UUWorksRequestWebGetSteamLevel*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGamesMinimal
struct UUWorksInterfaceWebPlayer_GetRecentlyPlayedGamesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetRecentlyPlayedGames
struct UUWorksInterfaceWebPlayer_GetRecentlyPlayedGames_Params
{
	class UUWorksRequestWebGetRecentlyPlayedGames*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGamesMinimal
struct UUWorksInterfaceWebPlayer_GetOwnedGamesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAppInfo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludePlayedFreeGames;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        AppIDsFilter;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetOwnedGames
struct UUWorksInterfaceWebPlayer_GetOwnedGames_Params
{
	class UUWorksRequestWebGetOwnedGames*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgressMinimal
struct UUWorksInterfaceWebPlayer_GetCommunityBadgeProgressMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadgeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetCommunityBadgeProgress
struct UUWorksInterfaceWebPlayer_GetCommunityBadgeProgress_Params
{
	class UUWorksRequestWebGetCommunityBadgeProgress*  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetBadgesMinimal
struct UUWorksInterfaceWebPlayer_GetBadgesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPlayer.GetBadges
struct UUWorksInterfaceWebPlayer_GetBadges_Params
{
	class UUWorksRequestWebGetBadges*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTagsMinimal
struct UUWorksInterfaceWebPublishedFile_UpdateTagsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AddTags;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RemoveTags;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedFile.UpdateTags
struct UUWorksInterfaceWebPublishedFile_UpdateTags_Params
{
	class UUWorksRequestWebUpdateTags*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadataMinimal
struct UUWorksInterfaceWebPublishedFile_SetDeveloperMetadataMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedFile.SetDeveloperMetadata
struct UUWorksInterfaceWebPublishedFile_SetDeveloperMetadata_Params
{
	class UUWorksRequestWebSetDeveloperMetadata*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFilesMinimal
struct UUWorksInterfaceWebPublishedFile_QueryFilesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      QueryType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Page;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CreatorAppID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredTags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExcludedTags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredFlags;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OmittedFlags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SearchText;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      ChildPublishedFileID;                                      // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeRecentVotesOnly;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksRequiredKVTags                       RequiredKVTags;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTotalOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIDsOnly;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnVoteData;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnTags;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnKVTags;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnPreviews;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnChildren;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnShortDescription;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnForSaleData;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnPlaytimeStats;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPerPage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchAllTags;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CacheMaxAgeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Language;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnMetadata;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedFile.QueryFiles
struct UUWorksInterfaceWebPublishedFile_QueryFiles_Params
{
	class UUWorksRequestWebQueryFiles*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummaryMinimal
struct UUWorksInterfaceWebPublishedItemSearch_ResultSetSummaryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.ResultSetSummary
struct UUWorksInterfaceWebPublishedItemSearch_ResultSetSummary_Params
{
	class UUWorksRequestWebResultSetSummary*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVoteMinimal
struct UUWorksInterfaceWebPublishedItemSearch_RankedByVoteMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByVote
struct UUWorksInterfaceWebPublishedItemSearch_RankedByVote_Params
{
	class UUWorksRequestWebRankedByVote*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrendMinimal
struct UUWorksInterfaceWebPublishedItemSearch_RankedByTrendMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByTrend
struct UUWorksInterfaceWebPublishedItemSearch_RankedByTrend_Params
{
	class UUWorksRequestWebRankedByTrend*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrderMinimal
struct UUWorksInterfaceWebPublishedItemSearch_RankedByPublicationOrderMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemSearch.RankedByPublicationOrder
struct UUWorksInterfaceWebPublishedItemSearch_RankedByPublicationOrder_Params
{
	class UUWorksRequestWebRankedByPublicationOrder*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummaryMinimal
struct UUWorksInterfaceWebPublishedItemVoting_UserVoteSummaryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.UserVoteSummary
struct UUWorksInterfaceWebPublishedItemVoting_UserVoteSummary_Params
{
	class UUWorksRequestWebUserVoteSummary*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummaryMinimal
struct UUWorksInterfaceWebPublishedItemVoting_ItemVoteSummaryMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebPublishedItemVoting.ItemVoteSummary
struct UUWorksInterfaceWebPublishedItemVoting_ItemVoteSummary_Params
{
	class UUWorksRequestWebItemVoteSummary*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFileMinimal
struct UUWorksInterfaceWebRemoteStorage_UnsubscribePublishedFileMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublishedFileID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.UnsubscribePublishedFile
struct UUWorksInterfaceWebRemoteStorage_UnsubscribePublishedFile_Params
{
	class UUWorksRequestWebUnsubscribePublishedFile*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFileMinimal
struct UUWorksInterfaceWebRemoteStorage_SubscribePublishedFileMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublishedFileID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SubscribePublishedFile
struct UUWorksInterfaceWebRemoteStorage_SubscribePublishedFile_Params
{
	class UUWorksRequestWebSubscribePublishedFile*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGCMinimal
struct UUWorksInterfaceWebRemoteStorage_SetUGCUsedByGCMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UGCID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.SetUGCUsedByGC
struct UUWorksInterfaceWebRemoteStorage_SetUGCUsedByGC_Params
{
	class UUWorksRequestWebSetUGCUsedByGC*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetailsMinimal
struct UUWorksInterfaceWebRemoteStorage_GetUGCFileDetailsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UGCID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetUGCFileDetails
struct UUWorksInterfaceWebRemoteStorage_GetUGCFileDetails_Params
{
	class UUWorksRequestWebGetUGCFileDetails*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetailsMinimal
struct UUWorksInterfaceWebRemoteStorage_GetPublishedFileDetailsMinimal_Params
{
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetPublishedFileDetails
struct UUWorksInterfaceWebRemoteStorage_GetPublishedFileDetails_Params
{
	class UUWorksRequestWebGetPublishedFileDetails*    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetailsMinimal
struct UUWorksInterfaceWebRemoteStorage_GetCollectionDetailsMinimal_Params
{
	int                                                CollectionCount;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.GetCollectionDetails
struct UUWorksInterfaceWebRemoteStorage_GetCollectionDetails_Params
{
	class UUWorksRequestWebGetCollectionDetails*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFilesMinimal
struct UUWorksInterfaceWebRemoteStorage_EnumerateUserSubscribedFilesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ListType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserSubscribedFiles
struct UUWorksInterfaceWebRemoteStorage_EnumerateUserSubscribedFiles_Params
{
	class UUWorksRequestWebEnumerateUserSubscribedFiles* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFilesMinimal
struct UUWorksInterfaceWebRemoteStorage_EnumerateUserPublishedFilesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebRemoteStorage.EnumerateUserPublishedFiles
struct UUWorksInterfaceWebRemoteStorage_EnumerateUserPublishedFiles_Params
{
	class UUWorksRequestWebEnumerateUserPublishedFiles* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURLMinimal
struct UUWorksInterfaceWebUser_ResolveVanityURLMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VanityURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      URLType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.ResolveVanityURL
struct UUWorksInterfaceWebUser_ResolveVanityURL_Params
{
	class UUWorksRequestWebResolveVanityURL*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GrantPackageMinimal
struct UUWorksInterfaceWebUser_GrantPackageMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PackageID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThirdPartyKey;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThirdPartyAppID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GrantPackage
struct UUWorksInterfaceWebUser_GrantPackage_Params
{
	class UUWorksRequestWebGrantPackage*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetUserGroupListMinimal
struct UUWorksInterfaceWebUser_GetUserGroupListMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetUserGroupList
struct UUWorksInterfaceWebUser_GetUserGroupList_Params
{
	class UUWorksRequestWebGetUserGroupList*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipMinimal
struct UUWorksInterfaceWebUser_GetPublisherAppOwnershipMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChangesMinimal
struct UUWorksInterfaceWebUser_GetPublisherAppOwnershipChangesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PackageRowVersion;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CDKeyRowVersion;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnershipChanges
struct UUWorksInterfaceWebUser_GetPublisherAppOwnershipChanges_Params
{
	class UUWorksRequestWebGetPublisherAppOwnershipChanges* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPublisherAppOwnership
struct UUWorksInterfaceWebUser_GetPublisherAppOwnership_Params
{
	class UUWorksRequestWebGetPublisherAppOwnership*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummariesMinimal
struct UUWorksInterfaceWebUser_GetPlayerSummariesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamIDs;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerSummaries
struct UUWorksInterfaceWebUser_GetPlayerSummaries_Params
{
	class UUWorksRequestWebGetPlayerSummaries*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerBansMinimal
struct UUWorksInterfaceWebUser_GetPlayerBansMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamIDs;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetPlayerBans
struct UUWorksInterfaceWebUser_GetPlayerBans_Params
{
	class UUWorksRequestWebGetPlayerBans*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetFriendListMinimal
struct UUWorksInterfaceWebUser_GetFriendListMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Relationship;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetFriendList
struct UUWorksInterfaceWebUser_GetFriendList_Params
{
	class UUWorksRequestWebGetFriendList*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfoMinimal
struct UUWorksInterfaceWebUser_GetAppPriceInfoMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AppIDs;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.GetAppPriceInfo
struct UUWorksInterfaceWebUser_GetAppPriceInfo_Params
{
	class UUWorksRequestWebGetAppPriceInfo*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnershipMinimal
struct UUWorksInterfaceWebUser_CheckAppOwnershipMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUser.CheckAppOwnership
struct UUWorksInterfaceWebUser_CheckAppOwnership_Params
{
	class UUWorksRequestWebCheckAppOwnership*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicketMinimal
struct UUWorksInterfaceWebUserAuth_AuthenticateUserTicketMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserTicket
struct UUWorksInterfaceWebUserAuth_AuthenticateUserTicket_Params
{
	class UUWorksRequestWebAuthenticateUserTicket*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUserMinimal
struct UUWorksInterfaceWebUserAuth_AuthenticateUserMinimal_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              SessionKey;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              EncryptedLoginKey;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserAuth.AuthenticateUser
struct UUWorksInterfaceWebUserAuth_AuthenticateUser_Params
{
	class UUWorksRequestWebAuthenticateUser*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGameMinimal
struct UUWorksInterfaceWebUserStats_SetUserStatsForGameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Name;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Value;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.SetUserStatsForGame
struct UUWorksInterfaceWebUserStats_SetUserStatsForGame_Params
{
	class UUWorksRequestWebSetUserStatsForGame*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGameMinimal
struct UUWorksInterfaceWebUserStats_GetUserStatsForGameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetUserStatsForGame
struct UUWorksInterfaceWebUserStats_GetUserStatsForGame_Params
{
	class UUWorksRequestWebGetUserStatsForGame*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGameMinimal
struct UUWorksInterfaceWebUserStats_GetSchemaForGameMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetSchemaForGame
struct UUWorksInterfaceWebUserStats_GetSchemaForGame_Params
{
	class UUWorksRequestWebGetSchemaForGame*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievementsMinimal
struct UUWorksInterfaceWebUserStats_GetPlayerAchievementsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetPlayerAchievements
struct UUWorksInterfaceWebUserStats_GetPlayerAchievements_Params
{
	class UUWorksRequestWebGetPlayerAchievements*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayersMinimal
struct UUWorksInterfaceWebUserStats_GetNumberOfCurrentPlayersMinimal_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetNumberOfCurrentPlayers
struct UUWorksInterfaceWebUserStats_GetNumberOfCurrentPlayers_Params
{
	class UUWorksRequestWebGetNumberOfCurrentPlayers*  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGameMinimal
struct UUWorksInterfaceWebUserStats_GetGlobalStatsForGameMinimal_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Name;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StartDate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalStatsForGame
struct UUWorksInterfaceWebUserStats_GetGlobalStatsForGame_Params
{
	class UUWorksRequestWebGetGlobalStatsForGame*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForAppMinimal
struct UUWorksInterfaceWebUserStats_GetGlobalAchievementPercentagesForAppMinimal_Params
{
	struct FUWorksGameID                               GameID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebUserStats.GetGlobalAchievementPercentagesForApp
struct UUWorksInterfaceWebUserStats_GetGlobalAchievementPercentagesForApp_Params
{
	class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRulesMinimal
struct UUWorksInterfaceWebWorkshop_SetItemPaymentRulesMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameItemID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksAssociatedWorkshopFiles              AssociatedWorkshopFiles;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPartnerAccounts                      PartnerAccounts;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMakeWorkshopFilesSubscribable;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidateOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.SetItemPaymentRules
struct UUWorksInterfaceWebWorkshop_SetItemPaymentRules_Params
{
	class UUWorksRequestWebSetItemPaymentRules*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptionsMinimal
struct UUWorksInterfaceWebWorkshop_PopulateItemDescriptionsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksLanguages                            Languages;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.PopulateItemDescriptions
struct UUWorksInterfaceWebWorkshop_PopulateItemDescriptions_Params
{
	class UUWorksRequestWebPopulateItemDescriptions*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenueMinimal
struct UUWorksInterfaceWebWorkshop_GetItemDailyRevenueMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetItemDailyRevenue
struct UUWorksInterfaceWebWorkshop_GetItemDailyRevenue_Params
{
	class UUWorksRequestWebGetItemDailyRevenue*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributorsMinimal
struct UUWorksInterfaceWebWorkshop_GetFinalizedContributorsMinimal_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameItemID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksInterfaceWebWorkshop.GetFinalizedContributors
struct UUWorksInterfaceWebWorkshop_GetFinalizedContributors_Params
{
	class UUWorksRequestWebGetFinalizedContributors*   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWeb.IsActive
struct UUWorksRequestWeb_IsActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWeb.GetStatus
struct UUWorksRequestWeb_GetStatus_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWeb.Deactivate
struct UUWorksRequestWeb_Deactivate_Params
{
};

// Function UWorksWeb.UWorksRequestWeb.Activate
struct UUWorksRequestWeb_Activate_Params
{
};

// Function UWorksWeb.UWorksRequestWebGetAppBetas.SetInput
struct UUWorksRequestWebGetAppBetas_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppBetas.GetOutput
struct UUWorksRequestWebGetAppBetas_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppBuilds.SetInput
struct UUWorksRequestWebGetAppBuilds_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppBuilds.GetOutput
struct UUWorksRequestWebGetAppBuilds_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppDepotVersions.SetInput
struct UUWorksRequestWebGetAppDepotVersions_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppDepotVersions.GetOutput
struct UUWorksRequestWebGetAppDepotVersions_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppList.GetOutput
struct UUWorksRequestWebGetAppList_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCheatingReportsList.SetInput
struct UUWorksRequestWebGetCheatingReportsList_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeBegin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReports;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBans;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportIDMin;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCheatingReportsList.GetOutput
struct UUWorksRequestWebGetCheatingReportsList_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayersBanned.SetInput
struct UUWorksRequestWebGetPlayersBanned_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayersBanned.GetOutput
struct UUWorksRequestWebGetPlayersBanned_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServerList.SetInput
struct UUWorksRequestWebGetServerList_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filter;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Limit;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServerList.GetOutput
struct UUWorksRequestWebGetServerList_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServersAtAddress.SetInput
struct UUWorksRequestWebGetServersAtAddress_SetInput_Params
{
	struct FString                                     Addr;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServersAtAddress.GetOutput
struct UUWorksRequestWebGetServersAtAddress_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetAppBuildLive.SetInput
struct UUWorksRequestWebSetAppBuildLive_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BetaKey;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetAppBuildLive.GetOutput
struct UUWorksRequestWebSetAppBuildLive_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUpToDateCheck.SetInput
struct UUWorksRequestWebUpToDateCheck_SetInput_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VersionToCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUpToDateCheck.GetOutput
struct UUWorksRequestWebUpToDateCheck_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebPostGameDataFrame.SetInput
struct UUWorksRequestWebPostGameDataFrame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BroadcastID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FrameData;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebPostGameDataFrame.GetOutput
struct UUWorksRequestWebPostGameDataFrame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebReportPlayerCheating.SetInput
struct UUWorksRequestWebReportPlayerCheating_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDReporter;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppData;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeuristic;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetection;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerReport;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoReportID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SuspicionStartTime;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Severity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebReportPlayerCheating.GetOutput
struct UUWorksRequestWebReportPlayerCheating_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRequestPlayerGameBan.SetInput
struct UUWorksRequestWebRequestPlayerGameBan_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReportID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatDescription;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDelayBan;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRequestPlayerGameBan.GetOutput
struct UUWorksRequestWebRequestPlayerGameBan_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRemovePlayerGameBan.SetInput
struct UUWorksRequestWebRemovePlayerGameBan_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRemovePlayerGameBan.GetOutput
struct UUWorksRequestWebRemovePlayerGameBan_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCheatingReports.SetInput
struct UUWorksRequestWebGetCheatingReports_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeBegin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportIDMin;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReports;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBans;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCheatingReports.GetOutput
struct UUWorksRequestWebGetCheatingReports_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRequestVacStatusForUser.SetInput
struct UUWorksRequestWebRequestVacStatusForUser_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRequestVacStatusForUser.GetOutput
struct UUWorksRequestWebRequestVacStatusForUser_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.SetInput
struct UUWorksRequestWebStartSecureMultiplayerSession_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession.GetOutput
struct UUWorksRequestWebStartSecureMultiplayerSession_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.SetInput
struct UUWorksRequestWebEndSecureMultiplayerSession_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession.GetOutput
struct UUWorksRequestWebEndSecureMultiplayerSession_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebReportCheatData.SetInput
struct UUWorksRequestWebReportCheatData_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PathAndFileName;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WebCheatURL;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeNow;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeStarted;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeStopped;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameProcessID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CheatProcessID;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatParamA;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatParamB;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebReportCheatData.GetOutput
struct UUWorksRequestWebReportCheatData_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebReportAbuse.SetInput
struct UUWorksRequestWebReportAbuse_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDActor;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDTarget;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AbuseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ContentType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GID;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebReportAbuse.GetOutput
struct UUWorksRequestWebReportAbuse_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeHistory.SetInput
struct UUWorksRequestWebGetTradeHistory_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTrades;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartAfterTime;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartAfterTradeID;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNavigatingBack;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetDescription;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeFailed;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeTotal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeHistory.GetOutput
struct UUWorksRequestWebGetTradeHistory_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFlushInventoryCache.SetInput
struct UUWorksRequestWebFlushInventoryCache_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFlushInventoryCache.GetOutput
struct UUWorksRequestWebFlushInventoryCache_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.SetInput
struct UUWorksRequestWebFlushAssetAppearanceCache_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache.GetOutput
struct UUWorksRequestWebFlushAssetAppearanceCache_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFlushContextCache.SetInput
struct UUWorksRequestWebFlushContextCache_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFlushContextCache.GetOutput
struct UUWorksRequestWebFlushContextCache_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeOffers.SetInput
struct UUWorksRequestWebGetTradeOffers_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetSentOffers;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetReceivedOffers;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetDescription;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActiveOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHistoricalOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeHistoricalCutoff;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeOffers.GetOutput
struct UUWorksRequestWebGetTradeOffers_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeOffer.SetInput
struct UUWorksRequestWebGetTradeOffer_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeOffer.GetOutput
struct UUWorksRequestWebGetTradeOffer_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeOffersSummary.SetInput
struct UUWorksRequestWebGetTradeOffersSummary_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeLastVisit;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetTradeOffersSummary.GetOutput
struct UUWorksRequestWebGetTradeOffersSummary_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeclineTradeOffer.SetInput
struct UUWorksRequestWebDeclineTradeOffer_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeclineTradeOffer.GetOutput
struct UUWorksRequestWebDeclineTradeOffer_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCancelTradeOffer.SetInput
struct UUWorksRequestWebCancelTradeOffer_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCancelTradeOffer.GetOutput
struct UUWorksRequestWebCancelTradeOffer_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetMarketEligibility.SetInput
struct UUWorksRequestWebGetMarketEligibility_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetMarketEligibility.GetOutput
struct UUWorksRequestWebGetMarketEligibility_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCancelAppListingsForUser.SetInput
struct UUWorksRequestWebCancelAppListingsForUser_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSynchronous;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCancelAppListingsForUser.GetOutput
struct UUWorksRequestWebCancelAppListingsForUser_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAssetID.SetInput
struct UUWorksRequestWebGetAssetID_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ListingID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAssetID.GetOutput
struct UUWorksRequestWebGetAssetID_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPopular.SetInput
struct UUWorksRequestWebGetPopular_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rows;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FilterAppID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ECurrency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPopular.GetOutput
struct UUWorksRequestWebGetPopular_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCanTrade.SetInput
struct UUWorksRequestWebCanTrade_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              TargetId;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCanTrade.GetOutput
struct UUWorksRequestWebCanTrade_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.SetInput
struct UUWorksRequestWebFinalizeAssetTransaction_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TxnID;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFinalizeAssetTransaction.GetOutput
struct UUWorksRequestWebFinalizeAssetTransaction_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAssetClassInfo.SetInput
struct UUWorksRequestWebGetAssetClassInfo_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClassCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClassID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAssetClassInfo.GetOutput
struct UUWorksRequestWebGetAssetClassInfo_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAssetPrices.SetInput
struct UUWorksRequestWebGetAssetPrices_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAssetPrices.GetOutput
struct UUWorksRequestWebGetAssetPrices_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.SetInput
struct UUWorksRequestWebGetExportedAssetsForUser_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetExportedAssetsForUser.GetOutput
struct UUWorksRequestWebGetExportedAssetsForUser_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetMarketPrices.SetInput
struct UUWorksRequestWebGetMarketPrices_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetMarketPrices.GetOutput
struct UUWorksRequestWebGetMarketPrices_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebStartAssetTransaction.SetInput
struct UUWorksRequestWebStartAssetTransaction_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AssetQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Referrer;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClientAuth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebStartAssetTransaction.GetOutput
struct UUWorksRequestWebStartAssetTransaction_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebStartTrade.SetInput
struct UUWorksRequestWebStartTrade_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              PartyA;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              PartyB;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebStartTrade.GetOutput
struct UUWorksRequestWebStartTrade_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.SetInput
struct UUWorksRequestWebGetHistoryCommandDetails_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Arguments;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetHistoryCommandDetails.GetOutput
struct UUWorksRequestWebGetHistoryCommandDetails_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserHistory.SetInput
struct UUWorksRequestWebGetUserHistory_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserHistory.GetOutput
struct UUWorksRequestWebGetUserHistory_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebHistoryExecuteCommands.SetInput
struct UUWorksRequestWebHistoryExecuteCommands_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActorId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebHistoryExecuteCommands.GetOutput
struct UUWorksRequestWebHistoryExecuteCommands_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSupportGetAssetHistory.SetInput
struct UUWorksRequestWebSupportGetAssetHistory_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSupportGetAssetHistory.GetOutput
struct UUWorksRequestWebSupportGetAssetHistory_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCreateSession.SetInput
struct UUWorksRequestWebCreateSession_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTitle                                Title;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUsers                                Users;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCreateSession.GetOutput
struct UUWorksRequestWebCreateSession_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUpdateSession.SetInput
struct UUWorksRequestWebUpdateSession_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTitle                                Title;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUsers                                Users;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUpdateSession.GetOutput
struct UUWorksRequestWebUpdateSession_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.SetInput
struct UUWorksRequestWebEnumerateSessionsForApp_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAllUserMessages;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAuthUserMessage;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEnumerateSessionsForApp.GetOutput
struct UUWorksRequestWebEnumerateSessionsForApp_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.SetInput
struct UUWorksRequestWebGetSessionDetailsForApp_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSessions                             Sessions;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetSessionDetailsForApp.GetOutput
struct UUWorksRequestWebGetSessionDetailsForApp_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRequestNotifications.SetInput
struct UUWorksRequestWebRequestNotifications_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRequestNotifications.GetOutput
struct UUWorksRequestWebRequestNotifications_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteSession.SetInput
struct UUWorksRequestWebDeleteSession_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteSession.GetOutput
struct UUWorksRequestWebDeleteSession_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteSessionBatch.SetInput
struct UUWorksRequestWebDeleteSessionBatch_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteSessionBatch.GetOutput
struct UUWorksRequestWebDeleteSessionBatch_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAccountList.SetInput
struct UUWorksRequestWebGetAccountList_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAccountList.GetOutput
struct UUWorksRequestWebGetAccountList_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCreateAccount.SetInput
struct UUWorksRequestWebCreateAccount_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Memo;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCreateAccount.GetOutput
struct UUWorksRequestWebCreateAccount_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetMemo.SetInput
struct UUWorksRequestWebSetMemo_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Memo;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetMemo.GetOutput
struct UUWorksRequestWebSetMemo_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResetLoginToken.SetInput
struct UUWorksRequestWebResetLoginToken_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResetLoginToken.GetOutput
struct UUWorksRequestWebResetLoginToken_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteAccount.SetInput
struct UUWorksRequestWebDeleteAccount_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteAccount.GetOutput
struct UUWorksRequestWebDeleteAccount_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAccountPublicInfo.SetInput
struct UUWorksRequestWebGetAccountPublicInfo_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAccountPublicInfo.GetOutput
struct UUWorksRequestWebGetAccountPublicInfo_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebQueryLoginToken.SetInput
struct UUWorksRequestWebQueryLoginToken_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginToken;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebQueryLoginToken.GetOutput
struct UUWorksRequestWebQueryLoginToken_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetBanStatus.SetInput
struct UUWorksRequestWebSetBanStatus_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBanned;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetBanStatus.GetOutput
struct UUWorksRequestWebSetBanStatus_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.SetInput
struct UUWorksRequestWebGetServerSteamIDsByIP_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPs;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP.GetOutput
struct UUWorksRequestWebGetServerSteamIDsByIP_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.SetInput
struct UUWorksRequestWebGetServerIPsBySteamID_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ServerSteamID;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetServerIPsBySteamID.GetOutput
struct UUWorksRequestWebGetServerIPsBySteamID_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.SetInput
struct UUWorksRequestWebGetGameServerPlayerStatsForGame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeStart;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeEnd;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame.GetOutput
struct UUWorksRequestWebGetGameServerPlayerStatsForGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAddItem.SetInput
struct UUWorksRequestWebAddItem_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefID;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ItemPropsJSON;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAddItem.GetOutput
struct UUWorksRequestWebAddItem_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAddPromoItem.SetInput
struct UUWorksRequestWebAddPromoItem_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefID;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ItemPropsJSON;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAddPromoItem.GetOutput
struct UUWorksRequestWebAddPromoItem_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebConsumeItem.SetInput
struct UUWorksRequestWebConsumeItem_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemInstanceID                  ItemId;                                                    // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebConsumeItem.GetOutput
struct UUWorksRequestWebConsumeItem_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebExchangeItem.SetInput
struct UUWorksRequestWebExchangeItem_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          MaterialsItemID;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        MaterialsQuantity;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         OutputItemDefID;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebExchangeItem.GetOutput
struct UUWorksRequestWebExchangeItem_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetInventory.SetInput
struct UUWorksRequestWebGetInventory_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetInventory.GetOutput
struct UUWorksRequestWebGetInventory_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetItemDefs.SetInput
struct UUWorksRequestWebGetItemDefs_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModifiedSince;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefIDs;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 WorkshopIDs;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                CacheMaxAgeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetItemDefs.GetOutput
struct UUWorksRequestWebGetItemDefs_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPriceSheet.SetInput
struct UUWorksRequestWebGetPriceSheet_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ECurrency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPriceSheet.GetOutput
struct UUWorksRequestWebGetPriceSheet_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebConsolidate.SetInput
struct UUWorksRequestWebConsolidate_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefID;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebConsolidate.GetOutput
struct UUWorksRequestWebConsolidate_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetQuantity.SetInput
struct UUWorksRequestWebGetQuantity_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefID;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetQuantity.GetOutput
struct UUWorksRequestWebGetQuantity_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteLeaderboard.SetInput
struct UUWorksRequestWebDeleteLeaderboard_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebDeleteLeaderboard.GetOutput
struct UUWorksRequestWebDeleteLeaderboard_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.SetInput
struct UUWorksRequestWebFindOrCreateLeaderboard_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SortMethod;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayType;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateIfNotFound;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyTrustedWrites;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyFriendsReads;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard.GetOutput
struct UUWorksRequestWebFindOrCreateLeaderboard_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetLeaderboardEntries.SetInput
struct UUWorksRequestWebGetLeaderboardEntries_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataRequest;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetLeaderboardEntries.GetOutput
struct UUWorksRequestWebGetLeaderboardEntries_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.SetInput
struct UUWorksRequestWebGetLeaderboardsForGame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetLeaderboardsForGame.GetOutput
struct UUWorksRequestWebGetLeaderboardsForGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResetLeaderboard.SetInput
struct UUWorksRequestWebResetLeaderboard_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResetLeaderboard.GetOutput
struct UUWorksRequestWebResetLeaderboard_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetLeaderboardScore.SetInput
struct UUWorksRequestWebSetLeaderboardScore_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScoreMethod;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Details;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetLeaderboardScore.GetOutput
struct UUWorksRequestWebSetLeaderboardScore_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAdjustAgreement.SetInput
struct UUWorksRequestWebAdjustAgreement_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NextProcessDate;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAdjustAgreement.GetOutput
struct UUWorksRequestWebAdjustAgreement_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCancelAgreement.SetInput
struct UUWorksRequestWebCancelAgreement_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCancelAgreement.GetOutput
struct UUWorksRequestWebCancelAgreement_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFinalizeTxn.SetInput
struct UUWorksRequestWebFinalizeTxn_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebFinalizeTxn.GetOutput
struct UUWorksRequestWebFinalizeTxn_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetReport.SetInput
struct UUWorksRequestWebGetReport_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksWeb_EUWorksReportType                        Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetReport.GetOutput
struct UUWorksRequestWebGetReport_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserAgreementInfo.SetInput
struct UUWorksRequestWebGetUserAgreementInfo_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserAgreementInfo.GetOutput
struct UUWorksRequestWebGetUserAgreementInfo_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserInfo.SetInput
struct UUWorksRequestWebGetUserInfo_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserInfo.GetOutput
struct UUWorksRequestWebGetUserInfo_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebInitTxn.SetInput
struct UUWorksRequestWebInitTxn_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemIds;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Quantities;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Amounts;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Descriptions;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Categories;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        AssociatedBundles;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BillingTypes;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StartDates;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             EndDates;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Periods;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Frequencies;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RecurringAmounts;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                BundleCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        BundleIDs;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        BundleQuantities;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BundleDescriptions;                                        // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BundleCategories;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	UWorksWeb_EUWorksUserSession                       UserSession;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebInitTxn.GetOutput
struct UUWorksRequestWebInitTxn_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebProcessAgreement.SetInput
struct UUWorksRequestWebProcessAgreement_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebProcessAgreement.GetOutput
struct UUWorksRequestWebProcessAgreement_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebQueryTxn.SetInput
struct UUWorksRequestWebQueryTxn_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebQueryTxn.GetOutput
struct UUWorksRequestWebQueryTxn_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRefundTxn.SetInput
struct UUWorksRequestWebRefundTxn_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRefundTxn.GetOutput
struct UUWorksRequestWebRefundTxn_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetNewsForApp.SetInput
struct UUWorksRequestWebGetNewsForApp_SetInput_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Feeds;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetNewsForApp.GetOutput
struct UUWorksRequestWebGetNewsForApp_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.SetInput
struct UUWorksRequestWebGetNewsForAppAuthed_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Feeds;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetNewsForAppAuthed.GetOutput
struct UUWorksRequestWebGetNewsForAppAuthed_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.SetInput
struct UUWorksRequestWebRecordOfflinePlaytime_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPlaySessions                         PlaySessions;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRecordOfflinePlaytime.GetOutput
struct UUWorksRequestWebRecordOfflinePlaytime_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.SetInput
struct UUWorksRequestWebGetRecentlyPlayedGames_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames.GetOutput
struct UUWorksRequestWebGetRecentlyPlayedGames_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetOwnedGames.SetInput
struct UUWorksRequestWebGetOwnedGames_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAppInfo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludePlayedFreeGames;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        AppIDsFilter;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetOwnedGames.GetOutput
struct UUWorksRequestWebGetOwnedGames_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetSteamLevel.SetInput
struct UUWorksRequestWebGetSteamLevel_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetSteamLevel.GetOutput
struct UUWorksRequestWebGetSteamLevel_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetBadges.SetInput
struct UUWorksRequestWebGetBadges_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetBadges.GetOutput
struct UUWorksRequestWebGetBadges_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.SetInput
struct UUWorksRequestWebGetCommunityBadgeProgress_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadgeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress.GetOutput
struct UUWorksRequestWebGetCommunityBadgeProgress_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebIsPlayingSharedGame.SetInput
struct UUWorksRequestWebIsPlayingSharedGame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppIDPlaying;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebIsPlayingSharedGame.GetOutput
struct UUWorksRequestWebIsPlayingSharedGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebQueryFiles.SetInput
struct UUWorksRequestWebQueryFiles_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      QueryType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Page;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CreatorAppID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredTags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExcludedTags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredFlags;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OmittedFlags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SearchText;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      ChildPublishedFileID;                                      // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeRecentVotesOnly;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksRequiredKVTags                       RequiredKVTags;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTotalOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIDsOnly;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnVoteData;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnTags;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnKVTags;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnPreviews;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnChildren;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnShortDescription;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnForSaleData;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnPlaytimeStats;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPerPage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchAllTags;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CacheMaxAgeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Language;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnMetadata;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebQueryFiles.GetOutput
struct UUWorksRequestWebQueryFiles_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetDeveloperMetadata.SetInput
struct UUWorksRequestWebSetDeveloperMetadata_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetDeveloperMetadata.GetOutput
struct UUWorksRequestWebSetDeveloperMetadata_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUpdateTags.SetInput
struct UUWorksRequestWebUpdateTags_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AddTags;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RemoveTags;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUpdateTags.GetOutput
struct UUWorksRequestWebUpdateTags_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRankedByPublicationOrder.SetInput
struct UUWorksRequestWebRankedByPublicationOrder_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRankedByPublicationOrder.GetOutput
struct UUWorksRequestWebRankedByPublicationOrder_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRankedByTrend.SetInput
struct UUWorksRequestWebRankedByTrend_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRankedByTrend.GetOutput
struct UUWorksRequestWebRankedByTrend_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRankedByVote.SetInput
struct UUWorksRequestWebRankedByVote_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebRankedByVote.GetOutput
struct UUWorksRequestWebRankedByVote_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResultSetSummary.SetInput
struct UUWorksRequestWebResultSetSummary_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResultSetSummary.GetOutput
struct UUWorksRequestWebResultSetSummary_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebItemVoteSummary.SetInput
struct UUWorksRequestWebItemVoteSummary_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebItemVoteSummary.GetOutput
struct UUWorksRequestWebItemVoteSummary_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUserVoteSummary.SetInput
struct UUWorksRequestWebUserVoteSummary_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUserVoteSummary.GetOutput
struct UUWorksRequestWebUserVoteSummary_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.SetInput
struct UUWorksRequestWebEnumerateUserPublishedFiles_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles.GetOutput
struct UUWorksRequestWebEnumerateUserPublishedFiles_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.SetInput
struct UUWorksRequestWebEnumerateUserSubscribedFiles_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ListType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles.GetOutput
struct UUWorksRequestWebEnumerateUserSubscribedFiles_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCollectionDetails.SetInput
struct UUWorksRequestWebGetCollectionDetails_SetInput_Params
{
	int                                                CollectionCount;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetCollectionDetails.GetOutput
struct UUWorksRequestWebGetCollectionDetails_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPublishedFileDetails.SetInput
struct UUWorksRequestWebGetPublishedFileDetails_SetInput_Params
{
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPublishedFileDetails.GetOutput
struct UUWorksRequestWebGetPublishedFileDetails_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUGCFileDetails.SetInput
struct UUWorksRequestWebGetUGCFileDetails_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UGCID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUGCFileDetails.GetOutput
struct UUWorksRequestWebGetUGCFileDetails_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetUGCUsedByGC.SetInput
struct UUWorksRequestWebSetUGCUsedByGC_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UGCID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetUGCUsedByGC.GetOutput
struct UUWorksRequestWebSetUGCUsedByGC_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSubscribePublishedFile.SetInput
struct UUWorksRequestWebSubscribePublishedFile_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublishedFileID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSubscribePublishedFile.GetOutput
struct UUWorksRequestWebSubscribePublishedFile_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.SetInput
struct UUWorksRequestWebUnsubscribePublishedFile_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublishedFileID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebUnsubscribePublishedFile.GetOutput
struct UUWorksRequestWebUnsubscribePublishedFile_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCheckAppOwnership.SetInput
struct UUWorksRequestWebCheckAppOwnership_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebCheckAppOwnership.GetOutput
struct UUWorksRequestWebCheckAppOwnership_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppPriceInfo.SetInput
struct UUWorksRequestWebGetAppPriceInfo_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AppIDs;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetAppPriceInfo.GetOutput
struct UUWorksRequestWebGetAppPriceInfo_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetFriendList.SetInput
struct UUWorksRequestWebGetFriendList_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Relationship;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetFriendList.GetOutput
struct UUWorksRequestWebGetFriendList_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayerBans.SetInput
struct UUWorksRequestWebGetPlayerBans_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamIDs;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayerBans.GetOutput
struct UUWorksRequestWebGetPlayerBans_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayerSummaries.SetInput
struct UUWorksRequestWebGetPlayerSummaries_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamIDs;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayerSummaries.GetOutput
struct UUWorksRequestWebGetPlayerSummaries_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.SetInput
struct UUWorksRequestWebGetPublisherAppOwnership_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnership.GetOutput
struct UUWorksRequestWebGetPublisherAppOwnership_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.SetInput
struct UUWorksRequestWebGetPublisherAppOwnershipChanges_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PackageRowVersion;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CDKeyRowVersion;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges.GetOutput
struct UUWorksRequestWebGetPublisherAppOwnershipChanges_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserGroupList.SetInput
struct UUWorksRequestWebGetUserGroupList_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserGroupList.GetOutput
struct UUWorksRequestWebGetUserGroupList_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGrantPackage.SetInput
struct UUWorksRequestWebGrantPackage_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PackageID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThirdPartyKey;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThirdPartyAppID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGrantPackage.GetOutput
struct UUWorksRequestWebGrantPackage_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResolveVanityURL.SetInput
struct UUWorksRequestWebResolveVanityURL_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VanityURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      URLType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebResolveVanityURL.GetOutput
struct UUWorksRequestWebResolveVanityURL_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAuthenticateUser.SetInput
struct UUWorksRequestWebAuthenticateUser_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              SessionKey;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              EncryptedLoginKey;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAuthenticateUser.GetOutput
struct UUWorksRequestWebAuthenticateUser_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAuthenticateUserTicket.SetInput
struct UUWorksRequestWebAuthenticateUserTicket_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebAuthenticateUserTicket.GetOutput
struct UUWorksRequestWebAuthenticateUserTicket_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.SetInput
struct UUWorksRequestWebGetGlobalAchievementPercentagesForApp_SetInput_Params
{
	struct FUWorksGameID                               GameID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp.GetOutput
struct UUWorksRequestWebGetGlobalAchievementPercentagesForApp_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.SetInput
struct UUWorksRequestWebGetGlobalStatsForGame_SetInput_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Name;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StartDate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetGlobalStatsForGame.GetOutput
struct UUWorksRequestWebGetGlobalStatsForGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.SetInput
struct UUWorksRequestWebGetNumberOfCurrentPlayers_SetInput_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers.GetOutput
struct UUWorksRequestWebGetNumberOfCurrentPlayers_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayerAchievements.SetInput
struct UUWorksRequestWebGetPlayerAchievements_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetPlayerAchievements.GetOutput
struct UUWorksRequestWebGetPlayerAchievements_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetSchemaForGame.SetInput
struct UUWorksRequestWebGetSchemaForGame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetSchemaForGame.GetOutput
struct UUWorksRequestWebGetSchemaForGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserStatsForGame.SetInput
struct UUWorksRequestWebGetUserStatsForGame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetUserStatsForGame.GetOutput
struct UUWorksRequestWebGetUserStatsForGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetUserStatsForGame.SetInput
struct UUWorksRequestWebSetUserStatsForGame_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Name;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Value;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetUserStatsForGame.GetOutput
struct UUWorksRequestWebSetUserStatsForGame_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetItemPaymentRules.SetInput
struct UUWorksRequestWebSetItemPaymentRules_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameItemID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksAssociatedWorkshopFiles              AssociatedWorkshopFiles;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPartnerAccounts                      PartnerAccounts;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMakeWorkshopFilesSubscribable;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidateOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebSetItemPaymentRules.GetOutput
struct UUWorksRequestWebSetItemPaymentRules_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetFinalizedContributors.SetInput
struct UUWorksRequestWebGetFinalizedContributors_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameItemID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetFinalizedContributors.GetOutput
struct UUWorksRequestWebGetFinalizedContributors_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetItemDailyRevenue.SetInput
struct UUWorksRequestWebGetItemDailyRevenue_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebGetItemDailyRevenue.GetOutput
struct UUWorksRequestWebGetItemDailyRevenue_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebPopulateItemDescriptions.SetInput
struct UUWorksRequestWebPopulateItemDescriptions_SetInput_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksLanguages                            Languages;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UWorksRequestWebPopulateItemDescriptions.GetOutput
struct UUWorksRequestWebPopulateItemDescriptions_GetOutput_Params
{
	struct FString                                     Content;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppBetasNode.OnRequestCompleted
struct UGetAppBetasNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppBetasNode.GetAppBetasNode
struct UGetAppBetasNode_GetAppBetasNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAppBetasNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppBuildsNode.OnRequestCompleted
struct UGetAppBuildsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppBuildsNode.GetAppBuildsNode
struct UGetAppBuildsNode_GetAppBuildsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAppBuildsNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppDepotVersionsNode.OnRequestCompleted
struct UGetAppDepotVersionsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppDepotVersionsNode.GetAppDepotVersionsNode
struct UGetAppDepotVersionsNode_GetAppDepotVersionsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAppDepotVersionsNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppListNode.OnRequestCompleted
struct UGetAppListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppListNode.GetAppListNode
struct UGetAppListNode_GetAppListNode_Params
{
	class UGetAppListNode*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCheatingReportsListNode.OnRequestCompleted
struct UGetCheatingReportsListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCheatingReportsListNode.GetCheatingReportsListNode
struct UGetCheatingReportsListNode_GetCheatingReportsListNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeBegin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReports;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBans;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportIDMin;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetCheatingReportsListNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayersBannedNode.OnRequestCompleted
struct UGetPlayersBannedNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayersBannedNode.GetPlayersBannedNode
struct UGetPlayersBannedNode_GetPlayersBannedNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPlayersBannedNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServerListNode.OnRequestCompleted
struct UGetServerListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServerListNode.GetServerListNode
struct UGetServerListNode_GetServerListNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filter;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Limit;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetServerListNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServersAtAddressNode.OnRequestCompleted
struct UGetServersAtAddressNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServersAtAddressNode.GetServersAtAddressNode
struct UGetServersAtAddressNode_GetServersAtAddressNode_Params
{
	struct FString                                     Addr;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetServersAtAddressNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetAppBuildLiveNode.SetAppBuildLiveNode
struct USetAppBuildLiveNode_SetAppBuildLiveNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BetaKey;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetAppBuildLiveNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetAppBuildLiveNode.OnRequestCompleted
struct USetAppBuildLiveNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UpToDateCheckNode.UpToDateCheckNode
struct UUpToDateCheckNode_UpToDateCheckNode_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpToDateCheckNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UpToDateCheckNode.OnRequestCompleted
struct UUpToDateCheckNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.PostGameDataFrameNode.PostGameDataFrameNode
struct UPostGameDataFrameNode_PostGameDataFrameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BroadcastID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FrameData;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostGameDataFrameNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.PostGameDataFrameNode.OnRequestCompleted
struct UPostGameDataFrameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ReportPlayerCheatingNode.ReportPlayerCheatingNode
struct UReportPlayerCheatingNode_ReportPlayerCheatingNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDReporter;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppData;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeuristic;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetection;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerReport;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoReportID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SuspicionStartTime;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Severity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReportPlayerCheatingNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ReportPlayerCheatingNode.OnRequestCompleted
struct UReportPlayerCheatingNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RequestPlayerGameBanNode.RequestPlayerGameBanNode
struct URequestPlayerGameBanNode_RequestPlayerGameBanNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReportID;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatDescription;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDelayBan;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URequestPlayerGameBanNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RequestPlayerGameBanNode.OnRequestCompleted
struct URequestPlayerGameBanNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RemovePlayerGameBanNode.RemovePlayerGameBanNode
struct URemovePlayerGameBanNode_RemovePlayerGameBanNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemovePlayerGameBanNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RemovePlayerGameBanNode.OnRequestCompleted
struct URemovePlayerGameBanNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCheatingReportsNode.OnRequestCompleted
struct UGetCheatingReportsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCheatingReportsNode.GetCheatingReportsNode
struct UGetCheatingReportsNode_GetCheatingReportsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeBegin;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportIDMin;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReports;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBans;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetCheatingReportsNode*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RequestVacStatusForUserNode.RequestVacStatusForUserNode
struct URequestVacStatusForUserNode_RequestVacStatusForUserNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URequestVacStatusForUserNode*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RequestVacStatusForUserNode.OnRequestCompleted
struct URequestVacStatusForUserNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.StartSecureMultiplayerSessionNode.StartSecureMultiplayerSessionNode
struct UStartSecureMultiplayerSessionNode_StartSecureMultiplayerSessionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartSecureMultiplayerSessionNode*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.StartSecureMultiplayerSessionNode.OnRequestCompleted
struct UStartSecureMultiplayerSessionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EndSecureMultiplayerSessionNode.OnRequestCompleted
struct UEndSecureMultiplayerSessionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EndSecureMultiplayerSessionNode.EndSecureMultiplayerSessionNode
struct UEndSecureMultiplayerSessionNode_EndSecureMultiplayerSessionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEndSecureMultiplayerSessionNode*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ReportCheatDataNode.ReportCheatDataNode
struct UReportCheatDataNode_ReportCheatDataNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PathAndFileName;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WebCheatURL;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeNow;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeStarted;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TimeStopped;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameProcessID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CheatProcessID;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatParamA;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CheatParamB;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReportCheatDataNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ReportCheatDataNode.OnRequestCompleted
struct UReportCheatDataNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ReportAbuseNode.ReportAbuseNode
struct UReportAbuseNode_ReportAbuseNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDActor;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDTarget;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AbuseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ContentType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GID;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReportAbuseNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ReportAbuseNode.OnRequestCompleted
struct UReportAbuseNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeHistoryNode.OnRequestCompleted
struct UGetTradeHistoryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeHistoryNode.GetTradeHistoryNode
struct UGetTradeHistoryNode_GetTradeHistoryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTrades;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartAfterTime;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartAfterTradeID;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNavigatingBack;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetDescription;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeFailed;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeTotal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetTradeHistoryNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FlushInventoryCacheNode.OnRequestCompleted
struct UFlushInventoryCacheNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FlushInventoryCacheNode.FlushInventoryCacheNode
struct UFlushInventoryCacheNode_FlushInventoryCacheNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFlushInventoryCacheNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FlushAssetAppearanceCacheNode.OnRequestCompleted
struct UFlushAssetAppearanceCacheNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FlushAssetAppearanceCacheNode.FlushAssetAppearanceCacheNode
struct UFlushAssetAppearanceCacheNode_FlushAssetAppearanceCacheNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFlushAssetAppearanceCacheNode*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FlushContextCacheNode.OnRequestCompleted
struct UFlushContextCacheNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FlushContextCacheNode.FlushContextCacheNode
struct UFlushContextCacheNode_FlushContextCacheNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFlushContextCacheNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeOffersNode.OnRequestCompleted
struct UGetTradeOffersNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeOffersNode.GetTradeOffersNode
struct UGetTradeOffersNode_GetTradeOffersNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetSentOffers;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetReceivedOffers;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGetDescription;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActiveOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHistoricalOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeHistoricalCutoff;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetTradeOffersNode*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeOfferNode.OnRequestCompleted
struct UGetTradeOfferNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeOfferNode.GetTradeOfferNode
struct UGetTradeOfferNode_GetTradeOfferNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetTradeOfferNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeOffersSummaryNode.OnRequestCompleted
struct UGetTradeOffersSummaryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetTradeOffersSummaryNode.GetTradeOffersSummaryNode
struct UGetTradeOffersSummaryNode_GetTradeOffersSummaryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeLastVisit;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetTradeOffersSummaryNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeclineTradeOfferNode.OnRequestCompleted
struct UDeclineTradeOfferNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeclineTradeOfferNode.DeclineTradeOfferNode
struct UDeclineTradeOfferNode_DeclineTradeOfferNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeclineTradeOfferNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CancelTradeOfferNode.OnRequestCompleted
struct UCancelTradeOfferNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CancelTradeOfferNode.CancelTradeOfferNode
struct UCancelTradeOfferNode_CancelTradeOfferNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeOfferID;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCancelTradeOfferNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetMarketEligibilityNode.OnRequestCompleted
struct UGetMarketEligibilityNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetMarketEligibilityNode.GetMarketEligibilityNode
struct UGetMarketEligibilityNode_GetMarketEligibilityNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMarketEligibilityNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CancelAppListingsForUserNode.OnRequestCompleted
struct UCancelAppListingsForUserNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CancelAppListingsForUserNode.CancelAppListingsForUserNode
struct UCancelAppListingsForUserNode_CancelAppListingsForUserNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSynchronous;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCancelAppListingsForUserNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAssetIDNode.OnRequestCompleted
struct UGetAssetIDNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAssetIDNode.GetAssetIDNode
struct UGetAssetIDNode_GetAssetIDNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ListingID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAssetIDNode*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPopularNode.OnRequestCompleted
struct UGetPopularNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPopularNode.GetPopularNode
struct UGetPopularNode_GetPopularNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rows;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FilterAppID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ECurrency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPopularNode*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CanTradeNode.OnRequestCompleted
struct UCanTradeNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CanTradeNode.CanTradeNode
struct UCanTradeNode_CanTradeNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              TargetId;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanTradeNode*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FinalizeAssetTransactionNode.OnRequestCompleted
struct UFinalizeAssetTransactionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FinalizeAssetTransactionNode.FinalizeAssetTransactionNode
struct UFinalizeAssetTransactionNode_FinalizeAssetTransactionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TxnID;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFinalizeAssetTransactionNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAssetClassInfoNode.OnRequestCompleted
struct UGetAssetClassInfoNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAssetClassInfoNode.GetAssetClassInfoNode
struct UGetAssetClassInfoNode_GetAssetClassInfoNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClassCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClassID0;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID0;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAssetClassInfoNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAssetPricesNode.OnRequestCompleted
struct UGetAssetPricesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAssetPricesNode.GetAssetPricesNode
struct UGetAssetPricesNode_GetAssetPricesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAssetPricesNode*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetExportedAssetsForUserNode.OnRequestCompleted
struct UGetExportedAssetsForUserNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetExportedAssetsForUserNode.GetExportedAssetsForUserNode
struct UGetExportedAssetsForUserNode_GetExportedAssetsForUserNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetExportedAssetsForUserNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetMarketPricesNode.OnRequestCompleted
struct UGetMarketPricesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetMarketPricesNode.GetMarketPricesNode
struct UGetMarketPricesNode_GetMarketPricesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMarketPricesNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.StartAssetTransactionNode.StartAssetTransactionNode
struct UStartAssetTransactionNode_StartAssetTransactionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetID0;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AssetQuantity0;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Referrer;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClientAuth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartAssetTransactionNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.StartAssetTransactionNode.OnRequestCompleted
struct UStartAssetTransactionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.StartTradeNode.StartTradeNode
struct UStartTradeNode_StartTradeNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              PartyA;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              PartyB;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartTradeNode*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.StartTradeNode.OnRequestCompleted
struct UStartTradeNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetHistoryCommandDetailsNode.OnRequestCompleted
struct UGetHistoryCommandDetailsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetHistoryCommandDetailsNode.GetHistoryCommandDetailsNode
struct UGetHistoryCommandDetailsNode_GetHistoryCommandDetailsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Arguments;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetHistoryCommandDetailsNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserHistoryNode.OnRequestCompleted
struct UGetUserHistoryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserHistoryNode.GetUserHistoryNode
struct UGetUserHistoryNode_GetUserHistoryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUserHistoryNode*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.HistoryExecuteCommandsNode.OnRequestCompleted
struct UHistoryExecuteCommandsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.HistoryExecuteCommandsNode.HistoryExecuteCommandsNode
struct UHistoryExecuteCommandsNode_HistoryExecuteCommandsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActorId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHistoryExecuteCommandsNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SupportGetAssetHistoryNode.SupportGetAssetHistoryNode
struct USupportGetAssetHistoryNode_SupportGetAssetHistoryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USupportGetAssetHistoryNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SupportGetAssetHistoryNode.OnRequestCompleted
struct USupportGetAssetHistoryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CreateSessionNode.OnRequestCompleted
struct UCreateSessionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CreateSessionNode.CreateSessionNode
struct UCreateSessionNode_CreateSessionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTitle                                Title;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUsers                                Users;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateSessionNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UpdateSessionNode.UpdateSessionNode
struct UUpdateSessionNode_UpdateSessionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTitle                                Title;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUsers                                Users;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpdateSessionNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UpdateSessionNode.OnRequestCompleted
struct UUpdateSessionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EnumerateSessionsForAppNode.OnRequestCompleted
struct UEnumerateSessionsForAppNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EnumerateSessionsForAppNode.EnumerateSessionsForAppNode
struct UEnumerateSessionsForAppNode_EnumerateSessionsForAppNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAllUserMessages;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAuthUserMessage;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnumerateSessionsForAppNode*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetSessionDetailsForAppNode.OnRequestCompleted
struct UGetSessionDetailsForAppNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetSessionDetailsForAppNode.GetSessionDetailsForAppNode
struct UGetSessionDetailsForAppNode_GetSessionDetailsForAppNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSessions                             Sessions;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetSessionDetailsForAppNode*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RequestNotificationsNode.RequestNotificationsNode
struct URequestNotificationsNode_RequestNotificationsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URequestNotificationsNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RequestNotificationsNode.OnRequestCompleted
struct URequestNotificationsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteSessionNode.OnRequestCompleted
struct UDeleteSessionNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteSessionNode.DeleteSessionNode
struct UDeleteSessionNode_DeleteSessionNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeleteSessionNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteSessionBatchNode.OnRequestCompleted
struct UDeleteSessionBatchNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteSessionBatchNode.DeleteSessionBatchNode
struct UDeleteSessionBatchNode_DeleteSessionBatchNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeleteSessionBatchNode*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAccountListNode.OnRequestCompleted
struct UGetAccountListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAccountListNode.GetAccountListNode
struct UGetAccountListNode_GetAccountListNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAccountListNode*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CreateAccountNode.OnRequestCompleted
struct UCreateAccountNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CreateAccountNode.CreateAccountNode
struct UCreateAccountNode_CreateAccountNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Memo;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateAccountNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetMemoNode.SetMemoNode
struct USetMemoNode_SetMemoNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Memo;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetMemoNode*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetMemoNode.OnRequestCompleted
struct USetMemoNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResetLoginTokenNode.ResetLoginTokenNode
struct UResetLoginTokenNode_ResetLoginTokenNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UResetLoginTokenNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResetLoginTokenNode.OnRequestCompleted
struct UResetLoginTokenNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteAccountNode.OnRequestCompleted
struct UDeleteAccountNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteAccountNode.DeleteAccountNode
struct UDeleteAccountNode_DeleteAccountNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeleteAccountNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAccountPublicInfoNode.OnRequestCompleted
struct UGetAccountPublicInfoNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAccountPublicInfoNode.GetAccountPublicInfoNode
struct UGetAccountPublicInfoNode_GetAccountPublicInfoNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAccountPublicInfoNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.QueryLoginTokenNode.QueryLoginTokenNode
struct UQueryLoginTokenNode_QueryLoginTokenNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginToken;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQueryLoginTokenNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.QueryLoginTokenNode.OnRequestCompleted
struct UQueryLoginTokenNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetBanStatusNode.SetBanStatusNode
struct USetBanStatusNode_SetBanStatusNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBanned;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetBanStatusNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetBanStatusNode.OnRequestCompleted
struct USetBanStatusNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServerSteamIDsByIPNode.OnRequestCompleted
struct UGetServerSteamIDsByIPNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServerSteamIDsByIPNode.GetServerSteamIDsByIPNode
struct UGetServerSteamIDsByIPNode_GetServerSteamIDsByIPNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPs;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetServerSteamIDsByIPNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServerIPsBySteamIDNode.OnRequestCompleted
struct UGetServerIPsBySteamIDNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetServerIPsBySteamIDNode.GetServerIPsBySteamIDNode
struct UGetServerIPsBySteamIDNode_GetServerIPsBySteamIDNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ServerSteamID;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetServerIPsBySteamIDNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetGameServerPlayerStatsForGameNode.OnRequestCompleted
struct UGetGameServerPlayerStatsForGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetGameServerPlayerStatsForGameNode.GetGameServerPlayerStatsForGameNode
struct UGetGameServerPlayerStatsForGameNode_GetGameServerPlayerStatsForGameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeStart;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeEnd;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetGameServerPlayerStatsForGameNode*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AddItemNode.OnRequestCompleted
struct UAddItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AddItemNode.AddItemNode
struct UAddItemNode_AddItemNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefID;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ItemPropsJSON;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAddItemNode*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AddPromoItemNode.OnRequestCompleted
struct UAddPromoItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AddPromoItemNode.AddPromoItemNode
struct UAddPromoItemNode_AddPromoItemNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefID;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ItemPropsJSON;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAddPromoItemNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ConsumeItemNode.OnRequestCompleted
struct UConsumeItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ConsumeItemNode.ConsumeItemNode
struct UConsumeItemNode_ConsumeItemNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemInstanceID                  ItemId;                                                    // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConsumeItemNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ExchangeItemNode.OnRequestCompleted
struct UExchangeItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ExchangeItemNode.ExchangeItemNode
struct UExchangeItemNode_ExchangeItemNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          MaterialsItemID;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        MaterialsQuantity;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         OutputItemDefID;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UExchangeItemNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetInventoryNode.OnRequestCompleted
struct UGetInventoryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetInventoryNode.GetInventoryNode
struct UGetInventoryNode_GetInventoryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetInventoryNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetItemDefsNode.OnRequestCompleted
struct UGetItemDefsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetItemDefsNode.GetItemDefsNode
struct UGetItemDefsNode_GetItemDefsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModifiedSince;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefIDs;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 WorkshopIDs;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                CacheMaxAgeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetItemDefsNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPriceSheetNode.OnRequestCompleted
struct UGetPriceSheetNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPriceSheetNode.GetPriceSheetNode
struct UGetPriceSheetNode_GetPriceSheetNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ECurrency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPriceSheetNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ConsolidateNode.OnRequestCompleted
struct UConsolidateNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ConsolidateNode.ConsolidateNode
struct UConsolidateNode_ConsolidateNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefID;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConsolidateNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetQuantityNode.OnRequestCompleted
struct UGetQuantityNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetQuantityNode.GetQuantityNode
struct UGetQuantityNode_GetQuantityNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefID;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetQuantityNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteLeaderboardNode.OnRequestCompleted
struct UDeleteLeaderboardNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.DeleteLeaderboardNode.DeleteLeaderboardNode
struct UDeleteLeaderboardNode_DeleteLeaderboardNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeleteLeaderboardNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FindOrCreateLeaderboardNode.OnRequestCompleted
struct UFindOrCreateLeaderboardNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
struct UFindOrCreateLeaderboardNode_FindOrCreateLeaderboardNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SortMethod;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayType;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateIfNotFound;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyTrustedWrites;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyFriendsReads;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFindOrCreateLeaderboardNode*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetLeaderboardEntriesNode.OnRequestCompleted
struct UGetLeaderboardEntriesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetLeaderboardEntriesNode.GetLeaderboardEntriesNode
struct UGetLeaderboardEntriesNode_GetLeaderboardEntriesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataRequest;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetLeaderboardEntriesNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetLeaderboardsForGameNode.OnRequestCompleted
struct UGetLeaderboardsForGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetLeaderboardsForGameNode.GetLeaderboardsForGameNode
struct UGetLeaderboardsForGameNode_GetLeaderboardsForGameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetLeaderboardsForGameNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResetLeaderboardNode.ResetLeaderboardNode
struct UResetLeaderboardNode_ResetLeaderboardNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UResetLeaderboardNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResetLeaderboardNode.OnRequestCompleted
struct UResetLeaderboardNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetLeaderboardScoreNode.SetLeaderboardScoreNode
struct USetLeaderboardScoreNode_SetLeaderboardScoreNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeaderboardID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScoreMethod;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Details;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USetLeaderboardScoreNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetLeaderboardScoreNode.OnRequestCompleted
struct USetLeaderboardScoreNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AdjustAgreementNode.OnRequestCompleted
struct UAdjustAgreementNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AdjustAgreementNode.AdjustAgreementNode
struct UAdjustAgreementNode_AdjustAgreementNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NextProcessDate;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAdjustAgreementNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CancelAgreementNode.OnRequestCompleted
struct UCancelAgreementNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CancelAgreementNode.CancelAgreementNode
struct UCancelAgreementNode_CancelAgreementNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCancelAgreementNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FinalizeTxnNode.OnRequestCompleted
struct UFinalizeTxnNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.FinalizeTxnNode.FinalizeTxnNode
struct UFinalizeTxnNode_FinalizeTxnNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFinalizeTxnNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetReportNode.OnRequestCompleted
struct UGetReportNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetReportNode.GetReportNode
struct UGetReportNode_GetReportNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksWeb_EUWorksReportType                        Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetReportNode*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserAgreementInfoNode.OnRequestCompleted
struct UGetUserAgreementInfoNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserAgreementInfoNode.GetUserAgreementInfoNode
struct UGetUserAgreementInfoNode_GetUserAgreementInfoNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUserAgreementInfoNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserInfoNode.OnRequestCompleted
struct UGetUserInfoNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserInfoNode.GetUserInfoNode
struct UGetUserInfoNode_GetUserInfoNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUserInfoNode*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.InitTxnNode.OnRequestCompleted
struct UInitTxnNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.InitTxnNode.InitTxnNode
struct UInitTxnNode_InitTxnNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemIds;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Quantities;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Amounts;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Descriptions;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Categories;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        AssociatedBundles;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BillingTypes;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StartDates;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             EndDates;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Periods;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Frequencies;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RecurringAmounts;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                BundleCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        BundleIDs;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        BundleQuantities;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BundleDescriptions;                                        // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BundleCategories;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	UWorksWeb_EUWorksUserSession                       UserSession;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInitTxnNode*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ProcessAgreementNode.ProcessAgreementNode
struct UProcessAgreementNode_ProcessAgreementNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AgreementID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProcessAgreementNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ProcessAgreementNode.OnRequestCompleted
struct UProcessAgreementNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.QueryTxnNode.QueryTxnNode
struct UQueryTxnNode_QueryTxnNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQueryTxnNode*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.QueryTxnNode.OnRequestCompleted
struct UQueryTxnNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RefundTxnNode.RefundTxnNode
struct URefundTxnNode_RefundTxnNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderID;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URefundTxnNode*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RefundTxnNode.OnRequestCompleted
struct URefundTxnNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetNewsForAppNode.OnRequestCompleted
struct UGetNewsForAppNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetNewsForAppNode.GetNewsForAppNode
struct UGetNewsForAppNode_GetNewsForAppNode_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Feeds;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetNewsForAppNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetNewsForAppAuthedNode.OnRequestCompleted
struct UGetNewsForAppAuthedNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetNewsForAppAuthedNode.GetNewsForAppAuthedNode
struct UGetNewsForAppAuthedNode_GetNewsForAppAuthedNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Feeds;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetNewsForAppAuthedNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RecordOfflinePlaytimeNode.RecordOfflinePlaytimeNode
struct URecordOfflinePlaytimeNode_RecordOfflinePlaytimeNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPlaySessions                         PlaySessions;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class URecordOfflinePlaytimeNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RecordOfflinePlaytimeNode.OnRequestCompleted
struct URecordOfflinePlaytimeNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetRecentlyPlayedGamesNode.OnRequestCompleted
struct UGetRecentlyPlayedGamesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetRecentlyPlayedGamesNode.GetRecentlyPlayedGamesNode
struct UGetRecentlyPlayedGamesNode_GetRecentlyPlayedGamesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetRecentlyPlayedGamesNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetOwnedGamesNode.OnRequestCompleted
struct UGetOwnedGamesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetOwnedGamesNode.GetOwnedGamesNode
struct UGetOwnedGamesNode_GetOwnedGamesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeAppInfo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludePlayedFreeGames;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        AppIDsFilter;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGetOwnedGamesNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetSteamLevelNode.OnRequestCompleted
struct UGetSteamLevelNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetSteamLevelNode.GetSteamLevelNode
struct UGetSteamLevelNode_GetSteamLevelNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetSteamLevelNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetBadgesNode.OnRequestCompleted
struct UGetBadgesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetBadgesNode.GetBadgesNode
struct UGetBadgesNode_GetBadgesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetBadgesNode*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCommunityBadgeProgressNode.OnRequestCompleted
struct UGetCommunityBadgeProgressNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCommunityBadgeProgressNode.GetCommunityBadgeProgressNode
struct UGetCommunityBadgeProgressNode_GetCommunityBadgeProgressNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadgeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetCommunityBadgeProgressNode*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.IsPlayingSharedGameNode.OnRequestCompleted
struct UIsPlayingSharedGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.IsPlayingSharedGameNode.IsPlayingSharedGameNode
struct UIsPlayingSharedGameNode_IsPlayingSharedGameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppIDPlaying;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIsPlayingSharedGameNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.QueryFilesNode.QueryFilesNode
struct UQueryFilesNode_QueryFilesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      QueryType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Page;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CreatorAppID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredTags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExcludedTags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredFlags;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OmittedFlags;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SearchText;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      ChildPublishedFileID;                                      // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeRecentVotesOnly;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksRequiredKVTags                       RequiredKVTags;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTotalOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIDsOnly;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnVoteData;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnTags;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnKVTags;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnPreviews;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnChildren;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnShortDescription;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnForSaleData;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnPlaytimeStats;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPerPage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchAllTags;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CacheMaxAgeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Language;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnMetadata;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQueryFilesNode*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.QueryFilesNode.OnRequestCompleted
struct UQueryFilesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetDeveloperMetadataNode.SetDeveloperMetadataNode
struct USetDeveloperMetadataNode_SetDeveloperMetadataNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetDeveloperMetadataNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetDeveloperMetadataNode.OnRequestCompleted
struct USetDeveloperMetadataNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UpdateTagsNode.UpdateTagsNode
struct UUpdateTagsNode_UpdateTagsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AddTags;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RemoveTags;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UUpdateTagsNode*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UpdateTagsNode.OnRequestCompleted
struct UUpdateTagsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RankedByPublicationOrderNode.RankedByPublicationOrderNode
struct URankedByPublicationOrderNode_RankedByPublicationOrderNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class URankedByPublicationOrderNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RankedByPublicationOrderNode.OnRequestCompleted
struct URankedByPublicationOrderNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RankedByTrendNode.RankedByTrendNode
struct URankedByTrendNode_RankedByTrendNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class URankedByTrendNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RankedByTrendNode.OnRequestCompleted
struct URankedByTrendNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RankedByVoteNode.RankedByVoteNode
struct URankedByVoteNode_RankedByVoteNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class URankedByVoteNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.RankedByVoteNode.OnRequestCompleted
struct URankedByVoteNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResultSetSummaryNode.ResultSetSummaryNode
struct UResultSetSummaryNode_ResultSetSummaryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TagCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserTagCount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAppAdminAccess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserTags;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UResultSetSummaryNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResultSetSummaryNode.OnRequestCompleted
struct UResultSetSummaryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ItemVoteSummaryNode.OnRequestCompleted
struct UItemVoteSummaryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ItemVoteSummaryNode.ItemVoteSummaryNode
struct UItemVoteSummaryNode_ItemVoteSummaryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UItemVoteSummaryNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UserVoteSummaryNode.UserVoteSummaryNode
struct UUserVoteSummaryNode_UserVoteSummaryNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UUserVoteSummaryNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UserVoteSummaryNode.OnRequestCompleted
struct UUserVoteSummaryNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EnumerateUserPublishedFilesNode.OnRequestCompleted
struct UEnumerateUserPublishedFilesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EnumerateUserPublishedFilesNode.EnumerateUserPublishedFilesNode
struct UEnumerateUserPublishedFilesNode_EnumerateUserPublishedFilesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnumerateUserPublishedFilesNode*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EnumerateUserSubscribedFilesNode.OnRequestCompleted
struct UEnumerateUserSubscribedFilesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.EnumerateUserSubscribedFilesNode.EnumerateUserSubscribedFilesNode
struct UEnumerateUserSubscribedFilesNode_EnumerateUserSubscribedFilesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ListType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnumerateUserSubscribedFilesNode*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCollectionDetailsNode.OnRequestCompleted
struct UGetCollectionDetailsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetCollectionDetailsNode.GetCollectionDetailsNode
struct UGetCollectionDetailsNode_GetCollectionDetailsNode_Params
{
	int                                                CollectionCount;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGetCollectionDetailsNode*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPublishedFileDetailsNode.OnRequestCompleted
struct UGetPublishedFileDetailsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPublishedFileDetailsNode.GetPublishedFileDetailsNode
struct UGetPublishedFileDetailsNode_GetPublishedFileDetailsNode_Params
{
	int                                                ItemCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PublishedFileIDs;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGetPublishedFileDetailsNode*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUGCFileDetailsNode.OnRequestCompleted
struct UGetUGCFileDetailsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUGCFileDetailsNode.GetUGCFileDetailsNode
struct UGetUGCFileDetailsNode_GetUGCFileDetailsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UGCID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUGCFileDetailsNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetUGCUsedByGCNode.SetUGCUsedByGCNode
struct USetUGCUsedByGCNode_SetUGCUsedByGCNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UGCID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetUGCUsedByGCNode*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetUGCUsedByGCNode.OnRequestCompleted
struct USetUGCUsedByGCNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SubscribePublishedFileNode.SubscribePublishedFileNode
struct USubscribePublishedFileNode_SubscribePublishedFileNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublishedFileID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubscribePublishedFileNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SubscribePublishedFileNode.OnRequestCompleted
struct USubscribePublishedFileNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UnsubscribePublishedFileNode.UnsubscribePublishedFileNode
struct UUnsubscribePublishedFileNode_UnsubscribePublishedFileNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublishedFileID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUnsubscribePublishedFileNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.UnsubscribePublishedFileNode.OnRequestCompleted
struct UUnsubscribePublishedFileNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CheckAppOwnershipNode.OnRequestCompleted
struct UCheckAppOwnershipNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.CheckAppOwnershipNode.CheckAppOwnershipNode
struct UCheckAppOwnershipNode_CheckAppOwnershipNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCheckAppOwnershipNode*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppPriceInfoNode.OnRequestCompleted
struct UGetAppPriceInfoNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetAppPriceInfoNode.GetAppPriceInfoNode
struct UGetAppPriceInfoNode_GetAppPriceInfoNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AppIDs;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetAppPriceInfoNode*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetFriendListNode.OnRequestCompleted
struct UGetFriendListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetFriendListNode.GetFriendListNode
struct UGetFriendListNode_GetFriendListNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Relationship;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetFriendListNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayerBansNode.OnRequestCompleted
struct UGetPlayerBansNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayerBansNode.GetPlayerBansNode
struct UGetPlayerBansNode_GetPlayerBansNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamIDs;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPlayerBansNode*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayerSummariesNode.OnRequestCompleted
struct UGetPlayerSummariesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayerSummariesNode.GetPlayerSummariesNode
struct UGetPlayerSummariesNode_GetPlayerSummariesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamIDs;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPlayerSummariesNode*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPublisherAppOwnershipNode.OnRequestCompleted
struct UGetPublisherAppOwnershipNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPublisherAppOwnershipNode.GetPublisherAppOwnershipNode
struct UGetPublisherAppOwnershipNode_GetPublisherAppOwnershipNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPublisherAppOwnershipNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPublisherAppOwnershipChangesNode.OnRequestCompleted
struct UGetPublisherAppOwnershipChangesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPublisherAppOwnershipChangesNode.GetPublisherAppOwnershipChangesNode
struct UGetPublisherAppOwnershipChangesNode_GetPublisherAppOwnershipChangesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PackageRowVersion;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CDKeyRowVersion;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPublisherAppOwnershipChangesNode*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserGroupListNode.OnRequestCompleted
struct UGetUserGroupListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserGroupListNode.GetUserGroupListNode
struct UGetUserGroupListNode_GetUserGroupListNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUserGroupListNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GrantPackageNode.OnRequestCompleted
struct UGrantPackageNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GrantPackageNode.GrantPackageNode
struct UGrantPackageNode_GrantPackageNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PackageID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThirdPartyKey;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThirdPartyAppID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrantPackageNode*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResolveVanityURLNode.ResolveVanityURLNode
struct UResolveVanityURLNode_ResolveVanityURLNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VanityURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      URLType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UResolveVanityURLNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.ResolveVanityURLNode.OnRequestCompleted
struct UResolveVanityURLNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AuthenticateUserNode.OnRequestCompleted
struct UAuthenticateUserNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AuthenticateUserNode.AuthenticateUserNode
struct UAuthenticateUserNode_AuthenticateUserNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              SessionKey;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              EncryptedLoginKey;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAuthenticateUserNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AuthenticateUserTicketNode.OnRequestCompleted
struct UAuthenticateUserTicketNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.AuthenticateUserTicketNode.AuthenticateUserTicketNode
struct UAuthenticateUserTicketNode_AuthenticateUserTicketNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAuthenticateUserTicketNode*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetGlobalAchievementPercentagesForAppNode.OnRequestCompleted
struct UGetGlobalAchievementPercentagesForAppNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetGlobalAchievementPercentagesForAppNode.GetGlobalAchievementPercentagesForAppNode
struct UGetGlobalAchievementPercentagesForAppNode_GetGlobalAchievementPercentagesForAppNode_Params
{
	struct FUWorksGameID                               GameID;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetGlobalAchievementPercentagesForAppNode*  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetGlobalStatsForGameNode.OnRequestCompleted
struct UGetGlobalStatsForGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetGlobalStatsForGameNode.GetGlobalStatsForGameNode
struct UGetGlobalStatsForGameNode_GetGlobalStatsForGameNode_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Name;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StartDate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetGlobalStatsForGameNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetNumberOfCurrentPlayersNode.OnRequestCompleted
struct UGetNumberOfCurrentPlayersNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
struct UGetNumberOfCurrentPlayersNode_GetNumberOfCurrentPlayersNode_Params
{
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetNumberOfCurrentPlayersNode*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayerAchievementsNode.OnRequestCompleted
struct UGetPlayerAchievementsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetPlayerAchievementsNode.GetPlayerAchievementsNode
struct UGetPlayerAchievementsNode_GetPlayerAchievementsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetPlayerAchievementsNode*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetSchemaForGameNode.OnRequestCompleted
struct UGetSchemaForGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetSchemaForGameNode.GetSchemaForGameNode
struct UGetSchemaForGameNode_GetSchemaForGameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetSchemaForGameNode*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserStatsForGameNode.OnRequestCompleted
struct UGetUserStatsForGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetUserStatsForGameNode.GetUserStatsForGameNode
struct UGetUserStatsForGameNode_GetUserStatsForGameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUserStatsForGameNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetUserStatsForGameNode.SetUserStatsForGameNode
struct USetUserStatsForGameNode_SetUserStatsForGameNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Name;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Value;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USetUserStatsForGameNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetUserStatsForGameNode.OnRequestCompleted
struct USetUserStatsForGameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetItemPaymentRulesNode.SetItemPaymentRulesNode
struct USetItemPaymentRulesNode_SetItemPaymentRulesNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameItemID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksAssociatedWorkshopFiles              AssociatedWorkshopFiles;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPartnerAccounts                      PartnerAccounts;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMakeWorkshopFilesSubscribable;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidateOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetItemPaymentRulesNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.SetItemPaymentRulesNode.OnRequestCompleted
struct USetItemPaymentRulesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetFinalizedContributorsNode.OnRequestCompleted
struct UGetFinalizedContributorsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetFinalizedContributorsNode.GetFinalizedContributorsNode
struct UGetFinalizedContributorsNode_GetFinalizedContributorsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameItemID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetFinalizedContributorsNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetItemDailyRevenueNode.OnRequestCompleted
struct UGetItemDailyRevenueNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.GetItemDailyRevenueNode.GetItemDailyRevenueNode
struct UGetItemDailyRevenueNode_GetItemDailyRevenueNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetItemDailyRevenueNode*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.PopulateItemDescriptionsNode.PopulateItemDescriptionsNode
struct UPopulateItemDescriptionsNode_PopulateItemDescriptionsNode_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksLanguages                            Languages;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPopulateItemDescriptionsNode*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksWeb.PopulateItemDescriptionsNode.OnRequestCompleted
struct UPopulateItemDescriptionsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
