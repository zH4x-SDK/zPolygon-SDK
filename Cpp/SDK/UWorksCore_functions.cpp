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

// Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetNumInstalledApps()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps");

	UUWorksInterfaceCoreAppList_GetNumInstalledApps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    AppIDs                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            MaxAppIDs                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetInstalledApps(TArray<int>* AppIDs, int MaxAppIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps");

	UUWorksInterfaceCoreAppList_GetInstalledApps_Params params;
	params.MaxAppIDs = MaxAppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppIDs != nullptr)
		*AppIDs = params.AppIDs;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NameMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetAppName(int AppID, struct FString* Name, int NameMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName");

	UUWorksInterfaceCoreAppList_GetAppName_Params params;
	params.AppID = AppID;
	params.NameMaxLength = NameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreAppList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreAppList* UUWorksInterfaceCoreAppList::STATIC_GetAppList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList");

	UUWorksInterfaceCoreAppList_GetAppList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Directory                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DirectoryMaxLength             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetAppInstallDir(int AppID, struct FString* Directory, int DirectoryMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir");

	UUWorksInterfaceCoreAppList_GetAppInstallDir_Params params;
	params.AppID = AppID;
	params.DirectoryMaxLength = DirectoryMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Directory != nullptr)
		*Directory = params.Directory;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetAppBuildId(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId");

	UUWorksInterfaceCoreAppList_GetAppBuildId_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreApps::UninstallDLC(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC");

	UUWorksInterfaceCoreApps_UninstallDLC_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMissingFilesOnly              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt");

	UUWorksInterfaceCoreApps_MarkContentCorrupt_Params params;
	params.bMissingFilesOnly = bMissingFilesOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreApps::InstallDLC(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC");

	UUWorksInterfaceCoreApps_InstallDLC_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreApps::GetLaunchQueryParam(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam");

	UUWorksInterfaceCoreApps_GetLaunchQueryParam_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Depots                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            MaxDepots                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetInstalledDepots(int AppID, TArray<int>* Depots, int MaxDepots)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots");

	UUWorksInterfaceCoreApps_GetInstalledDepots_Params params;
	params.AppID = AppID;
	params.MaxDepots = MaxDepots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Depots != nullptr)
		*Depots = params.Depots;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreApps::GetFileDetailsMinimal(const struct FScriptDelegate& Completed, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal");

	UUWorksInterfaceCoreApps_GetFileDetailsMinimal_Params params;
	params.Completed = Completed;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreGetFileDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetFileDetails* UUWorksInterfaceCoreApps::GetFileDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails");

	UUWorksInterfaceCoreApps_GetFileDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetEarliestPurchaseUnixTime(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime");

	UUWorksInterfaceCoreApps_GetEarliestPurchaseUnixTime_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BytesDownloaded                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BytesTotal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::GetDlcDownloadProgress(int AppID, int* BytesDownloaded, int* BytesTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress");

	UUWorksInterfaceCoreApps_GetDlcDownloadProgress_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = params.BytesDownloaded;
	if (BytesTotal != nullptr)
		*BytesTotal = params.BytesTotal;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetDLCCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount");

	UUWorksInterfaceCoreApps_GetDLCCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreApps::GetCurrentGameLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage");

	UUWorksInterfaceCoreApps_GetCurrentGameLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NameMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::GetCurrentBetaName(struct FString* Name, int NameMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName");

	UUWorksInterfaceCoreApps_GetCurrentBetaName_Params params;
	params.NameMaxLength = NameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreApps::GetAvailableGameLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages");

	UUWorksInterfaceCoreApps_GetAvailableGameLanguages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetApps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreApps* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreApps* UUWorksInterfaceCoreApps::STATIC_GetApps()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetApps");

	UUWorksInterfaceCoreApps_GetApps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreApps::GetAppOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner");

	UUWorksInterfaceCoreApps_GetAppOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PathMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetAppInstallDir(int AppID, struct FString* Path, int PathMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir");

	UUWorksInterfaceCoreApps_GetAppInstallDir_Params params;
	params.AppID = AppID;
	params.PathMaxLength = PathMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetAppBuildId()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId");

	UUWorksInterfaceCoreApps_GetAppBuildId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsVACBanned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned");

	UUWorksInterfaceCoreApps_BIsVACBanned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsSubscribedFromFreeWeekend()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend");

	UUWorksInterfaceCoreApps_BIsSubscribedFromFreeWeekend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsSubscribedApp(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp");

	UUWorksInterfaceCoreApps_BIsSubscribedApp_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsSubscribed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed");

	UUWorksInterfaceCoreApps_BIsSubscribed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsLowViolence()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence");

	UUWorksInterfaceCoreApps_BIsLowViolence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsDlcInstalled(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled");

	UUWorksInterfaceCoreApps_BIsDlcInstalled_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsCybercafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe");

	UUWorksInterfaceCoreApps_BIsCybercafe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsAppInstalled(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled");

	UUWorksInterfaceCoreApps_BIsAppInstalled_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            DLC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NameMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BGetDLCDataByIndex(int DLC, int* AppID, bool* bAvailable, struct FString* Name, int NameMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex");

	UUWorksInterfaceCoreApps_BGetDLCDataByIndex_Params params;
	params.DLC = DLC;
	params.NameMaxLength = NameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            LeftSpeed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RightSpeed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::TriggerVibration(const struct FUWorksControllerHandle& ControllerHandle, int LeftSpeed, int RightSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration");

	UUWorksInterfaceCoreController_TriggerVibration_Params params;
	params.ControllerHandle = ControllerHandle;
	params.LeftSpeed = LeftSpeed;
	params.RightSpeed = RightSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksSteamControllerPad TargetPad                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DurationMicroSec               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OffMicroSec                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Repeat                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Flags                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::TriggerRepeatedHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int DurationMicroSec, int OffMicroSec, int Repeat, int Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse");

	UUWorksInterfaceCoreController_TriggerRepeatedHapticPulse_Params params;
	params.ControllerHandle = ControllerHandle;
	params.TargetPad = TargetPad;
	params.DurationMicroSec = DurationMicroSec;
	params.OffMicroSec = OffMicroSec;
	params.Repeat = Repeat;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksSteamControllerPad TargetPad                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DurationMicroSec               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::TriggerHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int DurationMicroSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse");

	UUWorksInterfaceCoreController_TriggerHapticPulse_Params params;
	params.ControllerHandle = ControllerHandle;
	params.TargetPad = TargetPad;
	params.DurationMicroSec = DurationMicroSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerAnalogActionHandle Action                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::StopAnalogActionMomentum(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum");

	UUWorksInterfaceCoreController_StopAnalogActionMomentum_Params params;
	params.ControllerHandle = ControllerHandle;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreController.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreController::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.Shutdown");

	UUWorksInterfaceCoreController_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreController::ShowBindingPanel(const struct FUWorksControllerHandle& ControllerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel");

	UUWorksInterfaceCoreController_ShowBindingPanel_Params params;
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// unsigned char                  ColorR                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ColorG                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ColorB                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksSteamControllerLEDFlag> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::SetLEDColor(const struct FUWorksControllerHandle& ControllerHandle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, TArray<UWorksCore_EUWorksSteamControllerLEDFlag> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor");

	UUWorksInterfaceCoreController_SetLEDColor_Params params;
	params.ControllerHandle = ControllerHandle;
	params.ColorR = ColorR;
	params.ColorG = ColorG;
	params.ColorB = ColorB;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreController.RunFrame
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreController::RunFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.RunFrame");

	UUWorksInterfaceCoreController_RunFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreController.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreController::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.Init");

	UUWorksInterfaceCoreController_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksControllerActionOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreController::GetStringForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin");

	UUWorksInterfaceCoreController_GetStringForActionOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetMotionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerMotionData ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerMotionData UUWorksInterfaceCoreController::GetMotionData(const struct FUWorksControllerHandle& ControllerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetMotionData");

	UUWorksInterfaceCoreController_GetMotionData_Params params;
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksControllerActionOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreController::GetGlyphForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin");

	UUWorksInterfaceCoreController_GetGlyphForActionOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetGamepadIndexForController(const struct FUWorksControllerHandle& ControllerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController");

	UUWorksInterfaceCoreController_GetGamepadIndexForController_Params params;
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerActionSetHandle ActionSetHandle                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerDigitalActionHandle DigitalActionHandle            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksControllerActionOrigin> OriginsOut                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetDigitalActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins");

	UUWorksInterfaceCoreController_GetDigitalActionOrigins_Params params;
	params.ControllerHandle = ControllerHandle;
	params.ActionSetHandle = ActionSetHandle;
	params.DigitalActionHandle = DigitalActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OriginsOut != nullptr)
		*OriginsOut = params.OriginsOut;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActionName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerDigitalActionHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerDigitalActionHandle UUWorksInterfaceCoreController::GetDigitalActionHandle(const struct FString& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle");

	UUWorksInterfaceCoreController_GetDigitalActionHandle_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerDigitalActionHandle DigitalActionHandle            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerDigitalActionData ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerDigitalActionData UUWorksInterfaceCoreController::GetDigitalActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData");

	UUWorksInterfaceCoreController_GetDigitalActionData_Params params;
	params.ControllerHandle = ControllerHandle;
	params.DigitalActionHandle = DigitalActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerActionSetHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetCurrentActionSet(const struct FUWorksControllerHandle& ControllerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet");

	UUWorksInterfaceCoreController_GetCurrentActionSet_Params params;
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerHandle UUWorksInterfaceCoreController::GetControllerForGamepadIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex");

	UUWorksInterfaceCoreController_GetControllerForGamepadIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreController* UUWorksInterfaceCoreController::STATIC_GetController()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetController");

	UUWorksInterfaceCoreController_GetController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksControllerHandle> HandlesOut                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetConnectedControllers(TArray<struct FUWorksControllerHandle>* HandlesOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers");

	UUWorksInterfaceCoreController_GetConnectedControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HandlesOut != nullptr)
		*HandlesOut = params.HandlesOut;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerActionSetHandle ActionSetHandle                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerAnalogActionHandle AnalogActionHandle             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksControllerActionOrigin> OriginsOut                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetAnalogActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins");

	UUWorksInterfaceCoreController_GetAnalogActionOrigins_Params params;
	params.ControllerHandle = ControllerHandle;
	params.ActionSetHandle = ActionSetHandle;
	params.AnalogActionHandle = AnalogActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OriginsOut != nullptr)
		*OriginsOut = params.OriginsOut;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActionName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerAnalogActionHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerAnalogActionHandle UUWorksInterfaceCoreController::GetAnalogActionHandle(const struct FString& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle");

	UUWorksInterfaceCoreController_GetAnalogActionHandle_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerAnalogActionHandle AnalogActionHandle             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerAnalogActionData ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerAnalogActionData UUWorksInterfaceCoreController::GetAnalogActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData");

	UUWorksInterfaceCoreController_GetAnalogActionData_Params params;
	params.ControllerHandle = ControllerHandle;
	params.AnalogActionHandle = AnalogActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActionSetName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerActionSetHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetActionSetHandle(const struct FString& ActionSetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle");

	UUWorksInterfaceCoreController_GetActionSetHandle_Params params;
	params.ActionSetName = ActionSetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksControllerHandle ControllerHandle               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksControllerActionSetHandle ActionSetHandle                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::ActivateActionSet(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet");

	UUWorksInterfaceCoreController_ActivateActionSet_Params params;
	params.ControllerHandle = ControllerHandle;
	params.ActionSetHandle = ActionSetHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::SetRichPresence(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence");

	UUWorksInterfaceCoreFriends_SetRichPresence_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUserPlayedWith          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::SetPlayedWith(const struct FUWorksSteamID& SteamIDUserPlayedWith)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith");

	UUWorksInterfaceCoreFriends_SetPlayedWith_Params params;
	params.SteamIDUserPlayedWith = SteamIDUserPlayedWith;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::SetPersonaNameMinimal(const struct FScriptDelegate& Completed, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal");

	UUWorksInterfaceCoreFriends_SetPersonaNameMinimal_Params params;
	params.Completed = Completed;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreSetPersonaName* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSetPersonaName* UUWorksInterfaceCoreFriends::SetPersonaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName");

	UUWorksInterfaceCoreFriends_SetPersonaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInterceptEnabled              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages");

	UUWorksInterfaceCoreFriends_SetListenForFriendsMessages_Params params;
	params.bInterceptEnabled = bInterceptEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSpeaking                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::SetInGameVoiceSpeaking(const struct FUWorksSteamID& SteamIDUser, bool bSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking");

	UUWorksInterfaceCoreFriends_SetInGameVoiceSpeaking_Params params;
	params.SteamIDUser = SteamIDUser;
	params.bSpeaking = bSpeaking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Text                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::SendClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage");

	UUWorksInterfaceCoreFriends_SendClanChatMessage_Params params;
	params.SteamIDClanChat = SteamIDClanChat;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRequireNameOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::RequestUserInformation(const struct FUWorksSteamID& SteamIDUser, bool bRequireNameOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation");

	UUWorksInterfaceCoreFriends_RequestUserInformation_Params params;
	params.SteamIDUser = SteamIDUser;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::RequestFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence");

	UUWorksInterfaceCoreFriends_RequestFriendRichPresence_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::RequestClanOfficerListMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal");

	UUWorksInterfaceCoreFriends_RequestClanOfficerListMinimal_Params params;
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestClanOfficerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestClanOfficerList* UUWorksInterfaceCoreFriends::RequestClanOfficerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList");

	UUWorksInterfaceCoreFriends_RequestClanOfficerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageToSend                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::ReplyToFriendMessage(const struct FUWorksSteamID& SteamIDFriend, const struct FString& MessageToSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage");

	UUWorksInterfaceCoreFriends_ReplyToFriendMessage_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.MessageToSend = MessageToSend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::OpenClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam");

	UUWorksInterfaceCoreFriends_OpenClanChatWindowInSteam_Params params;
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::LeaveClanChatRoom(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom");

	UUWorksInterfaceCoreFriends_LeaveClanChatRoom_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::JoinClanChatRoomMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal");

	UUWorksInterfaceCoreFriends_JoinClanChatRoomMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreJoinClanChatRoom* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreJoinClanChatRoom* UUWorksInterfaceCoreFriends::JoinClanChatRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom");

	UUWorksInterfaceCoreFriends_JoinClanChatRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDSource                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::IsUserInSource(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource");

	UUWorksInterfaceCoreFriends_IsUserInSource_Params params;
	params.SteamIDUser = SteamIDUser;
	params.SteamIDSource = SteamIDSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::IsFollowingMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal");

	UUWorksInterfaceCoreFriends_IsFollowingMinimal_Params params;
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreIsFollowing* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreIsFollowing* UUWorksInterfaceCoreFriends::IsFollowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing");

	UUWorksInterfaceCoreFriends_IsFollowing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::IsClanChatWindowOpenInSteam(const struct FUWorksSteamID& SteamIDClanChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam");

	UUWorksInterfaceCoreFriends_IsClanChatWindowOpenInSteam_Params params;
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::IsClanChatAdmin(const struct FUWorksSteamID& SteamIDClanChat, const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin");

	UUWorksInterfaceCoreFriends_IsClanChatAdmin_Params params;
	params.SteamIDClanChat = SteamIDClanChat;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ConnectString                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::InviteUserToGame(const struct FUWorksSteamID& SteamIDFriend, const struct FString& ConnectString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame");

	UUWorksInterfaceCoreFriends_InviteUserToGame_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.ConnectString = ConnectString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksFriendFlags> FriendFlags                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::HasFriend(const struct FUWorksSteamID& SteamIDFriend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend");

	UUWorksInterfaceCoreFriends_HasFriend_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.FriendFlags = FriendFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<UWorksCore_EUWorksUserRestriction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<UWorksCore_EUWorksUserRestriction> UUWorksInterfaceCoreFriends::GetUserRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions");

	UUWorksInterfaceCoreFriends_GetUserRestrictions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreFriends::GetSmallFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar");

	UUWorksInterfaceCoreFriends_GetSmallFriendAvatar_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDPlayer                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetPlayerNickname(const struct FUWorksSteamID& SteamIDPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname");

	UUWorksInterfaceCoreFriends_GetPlayerNickname_Params params;
	params.SteamIDPlayer = SteamIDPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksPersonaState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksPersonaState UUWorksInterfaceCoreFriends::GetPersonaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState");

	UUWorksInterfaceCoreFriends_GetPersonaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetPersonaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName");

	UUWorksInterfaceCoreFriends_GetPersonaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreFriends::GetMediumFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar");

	UUWorksInterfaceCoreFriends_GetMediumFriendAvatar_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreFriends::GetLargeFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar");

	UUWorksInterfaceCoreFriends_GetLargeFriendAvatar_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendSteamLevel(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel");

	UUWorksInterfaceCoreFriends_GetFriendSteamLevel_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksFriendsGroupID   FriendsGroupID                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendsGroupName(const struct FUWorksFriendsGroupID& FriendsGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName");

	UUWorksInterfaceCoreFriends_GetFriendsGroupName_Params params;
	params.FriendsGroupID = FriendsGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksFriendsGroupID   FriendsGroupID                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  SteamIDMembers                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            MembersCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::GetFriendsGroupMembersList(const struct FUWorksFriendsGroupID& FriendsGroupID, TArray<struct FUWorksSteamID>* SteamIDMembers, int MembersCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList");

	UUWorksInterfaceCoreFriends_GetFriendsGroupMembersList_Params params;
	params.FriendsGroupID = FriendsGroupID;
	params.MembersCount = MembersCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDMembers != nullptr)
		*SteamIDMembers = params.SteamIDMembers;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksFriendsGroupID   FriendsGroupID                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendsGroupMembersCount(const struct FUWorksFriendsGroupID& FriendsGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount");

	UUWorksInterfaceCoreFriends_GetFriendsGroupMembersCount_Params params;
	params.FriendsGroupID = FriendsGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FriendGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksFriendsGroupID   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksFriendsGroupID UUWorksInterfaceCoreFriends::GetFriendsGroupIDByIndex(int FriendGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex");

	UUWorksInterfaceCoreFriends_GetFriendsGroupIDByIndex_Params params;
	params.FriendGroup = FriendGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendsGroupCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount");

	UUWorksInterfaceCoreFriends_GetFriendsGroupCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreFriends* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreFriends* UUWorksInterfaceCoreFriends::STATIC_GetFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends");

	UUWorksInterfaceCoreFriends_GetFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyCount(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount");

	UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyCount_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyByIndex(const struct FUWorksSteamID& SteamIDFriend, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex");

	UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyByIndex_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence");

	UUWorksInterfaceCoreFriends_GetFriendRichPresence_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksFriendRelationship ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksFriendRelationship UUWorksInterfaceCoreFriends::GetFriendRelationship(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship");

	UUWorksInterfaceCoreFriends_GetFriendRelationship_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksPersonaState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksPersonaState UUWorksInterfaceCoreFriends::GetFriendPersonaState(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState");

	UUWorksInterfaceCoreFriends_GetFriendPersonaState_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PersonaName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendPersonaNameHistory(const struct FUWorksSteamID& SteamIDFriend, int PersonaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory");

	UUWorksInterfaceCoreFriends_GetFriendPersonaNameHistory_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.PersonaName = PersonaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendPersonaName(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName");

	UUWorksInterfaceCoreFriends_GetFriendPersonaName_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TextMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatEntryType ChatEntryType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendMessage(const struct FUWorksSteamID& SteamIDFriend, int MessageID, struct FString* Text, int TextMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage");

	UUWorksInterfaceCoreFriends_GetFriendMessage_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.MessageID = MessageID;
	params.TextMaxLength = TextMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameIP                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDLobby                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::GetFriendGamePlayed(const struct FUWorksSteamID& SteamIDFriend, struct FUWorksGameID* GameID, struct FString* GameIP, int* ConnectionPort, int* QueryPort, struct FUWorksSteamID* SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed");

	UUWorksInterfaceCoreFriends_GetFriendGamePlayed_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (GameIP != nullptr)
		*GameIP = params.GameIP;
	if (ConnectionPort != nullptr)
		*ConnectionPort = params.ConnectionPort;
	if (QueryPort != nullptr)
		*QueryPort = params.QueryPort;
	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDSource                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Friend                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendFromSourceByIndex(const struct FUWorksSteamID& SteamIDSource, int Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex");

	UUWorksInterfaceCoreFriends_GetFriendFromSourceByIndex_Params params;
	params.SteamIDSource = SteamIDSource;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDSource                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCountFromSource(const struct FUWorksSteamID& SteamIDSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource");

	UUWorksInterfaceCoreFriends_GetFriendCountFromSource_Params params;
	params.SteamIDSource = SteamIDSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<UWorksCore_EUWorksFriendFlags> FriendFlags                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCount(TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount");

	UUWorksInterfaceCoreFriends_GetFriendCount_Params params;
	params.FriendFlags = FriendFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCoplayTime(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime");

	UUWorksInterfaceCoreFriends_GetFriendCoplayTime_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCoplayGame(const struct FUWorksSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame");

	UUWorksInterfaceCoreFriends_GetFriendCoplayGame_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Friend                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksFriendFlags> FriendFlags                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendByIndex(int Friend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex");

	UUWorksInterfaceCoreFriends_GetFriendByIndex_Params params;
	params.Friend = Friend;
	params.FriendFlags = FriendFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::GetFollowerCountMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal");

	UUWorksInterfaceCoreFriends_GetFollowerCountMinimal_Params params;
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreGetFollowerCount* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetFollowerCount* UUWorksInterfaceCoreFriends::GetFollowerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount");

	UUWorksInterfaceCoreFriends_GetFollowerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetCoplayFriendCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount");

	UUWorksInterfaceCoreFriends_GetCoplayFriendCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CoplayFriend                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetCoplayFriend(int CoplayFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend");

	UUWorksInterfaceCoreFriends_GetCoplayFriend_Params params;
	params.CoplayFriend = CoplayFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetClanTag(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag");

	UUWorksInterfaceCoreFriends_GetClanTag_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOwner(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner");

	UUWorksInterfaceCoreFriends_GetClanOwner_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanOfficerCount(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount");

	UUWorksInterfaceCoreFriends_GetClanOfficerCount_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Officer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOfficerByIndex(const struct FUWorksSteamID& SteamIDClan, int Officer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex");

	UUWorksInterfaceCoreFriends_GetClanOfficerByIndex_Params params;
	params.SteamIDClan = SteamIDClan;
	params.Officer = Officer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetClanName(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName");

	UUWorksInterfaceCoreFriends_GetClanName_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount");

	UUWorksInterfaceCoreFriends_GetClanCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TextMax                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatEntryType ChatEntryType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDChatter                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, int MessageID, struct FString* Text, int TextMax, UWorksCore_EUWorksChatEntryType* ChatEntryType, struct FUWorksSteamID* SteamIDChatter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage");

	UUWorksInterfaceCoreFriends_GetClanChatMessage_Params params;
	params.SteamIDClanChat = SteamIDClanChat;
	params.MessageID = MessageID;
	params.TextMax = TextMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;
	if (SteamIDChatter != nullptr)
		*SteamIDChatter = params.SteamIDChatter;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanChatMemberCount(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount");

	UUWorksInterfaceCoreFriends_GetClanChatMemberCount_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Clan                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanByIndex(int Clan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex");

	UUWorksInterfaceCoreFriends_GetClanByIndex_Params params;
	params.Clan = Clan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Online                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InGame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Chatting                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::GetClanActivityCounts(const struct FUWorksSteamID& SteamIDClan, int* Online, int* InGame, int* Chatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts");

	UUWorksInterfaceCoreFriends_GetClanActivityCounts_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Online != nullptr)
		*Online = params.Online;
	if (InGame != nullptr)
		*InGame = params.InGame;
	if (Chatting != nullptr)
		*Chatting = params.Chatting;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            User                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetChatMemberByIndex(const struct FUWorksSteamID& SteamIDClan, int User)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex");

	UUWorksInterfaceCoreFriends_GetChatMemberByIndex_Params params;
	params.SteamIDClan = SteamIDClan;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::EnumerateFollowingListMinimal(const struct FScriptDelegate& Completed, int StartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal");

	UUWorksInterfaceCoreFriends_EnumerateFollowingListMinimal_Params params;
	params.Completed = Completed;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreEnumerateFollowingList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreEnumerateFollowingList* UUWorksInterfaceCoreFriends::EnumerateFollowingList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList");

	UUWorksInterfaceCoreFriends_EnumerateFollowingList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  SteamIDClans                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::DownloadClanActivityCountsMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksSteamID> SteamIDClans)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal");

	UUWorksInterfaceCoreFriends_DownloadClanActivityCountsMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDClans = SteamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreDownloadClanActivityCounts* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreDownloadClanActivityCounts* UUWorksInterfaceCoreFriends::DownloadClanActivityCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts");

	UUWorksInterfaceCoreFriends_DownloadClanActivityCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::CloseClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam");

	UUWorksInterfaceCoreFriends_CloseClanChatWindowInSteam_Params params;
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreFriends::ClearRichPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence");

	UUWorksInterfaceCoreFriends_ClearRichPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayToWebPage(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayToWebPage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksOverlaySpecific Dialog                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayToUser(UWorksCore_EUWorksOverlaySpecific Dialog, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayToUser_Params params;
	params.Dialog = Dialog;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksOverlayToStoreFlag Flag                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayToStore(int AppID, UWorksCore_EUWorksOverlayToStoreFlag Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayToStore_Params params;
	params.AppID = AppID;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayInviteDialog(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayInviteDialog_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksOverlayGeneric Dialog                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlay(UWorksCore_EUWorksOverlayGeneric Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay");

	UUWorksInterfaceCoreFriends_ActivateGameOverlay_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::WasRestartRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested");

	UUWorksInterfaceCoreGameServer_WasRestartRequested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUserHasLicenseForAppResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreGameServer::UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp");

	UUWorksInterfaceCoreGameServer_UserHasLicenseForApp_Params params;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ServerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetServerName(const struct FString& ServerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName");

	UUWorksInterfaceCoreGameServer_SetServerName_Params params;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Region                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetRegion(const struct FString& Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion");

	UUWorksInterfaceCoreGameServer_SetRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPasswordProtected             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected");

	UUWorksInterfaceCoreGameServer_SetPasswordProtected_Params params;
	params.bPasswordProtected = bPasswordProtected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PlayersMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetMaxPlayerCount(int PlayersMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount");

	UUWorksInterfaceCoreGameServer_SetMaxPlayerCount_Params params;
	params.PlayersMax = PlayersMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetMapName(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName");

	UUWorksInterfaceCoreGameServer_SetMapName_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetKeyValue(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue");

	UUWorksInterfaceCoreGameServer_SetKeyValue_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            HeartbeatInterval              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetHeartbeatInterval(int HeartbeatInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval");

	UUWorksInterfaceCoreGameServer_SetHeartbeatInterval_Params params;
	params.HeartbeatInterval = HeartbeatInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameTags                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetGameTags(const struct FString& GameTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags");

	UUWorksInterfaceCoreGameServer_SetGameTags_Params params;
	params.GameTags = GameTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetGameData(const struct FString& GameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData");

	UUWorksInterfaceCoreGameServer_SetGameData_Params params;
	params.GameData = GameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BotPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetBotPlayerCount(int BotPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount");

	UUWorksInterfaceCoreGameServer_SetBotPlayerCount_Params params;
	params.BotPlayers = BotPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDGroup                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::RequestUserGroupStatus(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus");

	UUWorksInterfaceCoreGameServer_RequestUserGroupStatus_Params params;
	params.SteamIDUser = SteamIDUser;
	params.SteamIDGroup = SteamIDGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreGameServer::GetSteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID");

	UUWorksInterfaceCoreGameServer_GetSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreGameServer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreGameServer* UUWorksInterfaceCoreGameServer::STATIC_GetGameServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer");

	UUWorksInterfaceCoreGameServer_GetGameServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Ticket                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksTicketHandle     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksTicketHandle UUWorksInterfaceCoreGameServer::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket");

	UUWorksInterfaceCoreGameServer_GetAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ticket != nullptr)
		*Ticket = params.Ticket;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreGameServer::ForceHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat");

	UUWorksInterfaceCoreGameServer_ForceHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::EndAuthSession(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession");

	UUWorksInterfaceCoreGameServer_EndAuthSession_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::EnableHeartbeats(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats");

	UUWorksInterfaceCoreGameServer_EnableHeartbeats_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDNewPlayer               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibilityMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal");

	UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibilityMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDNewPlayer = SteamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreComputeNewPlayerCompatibility* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreComputeNewPlayerCompatibility* UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility");

	UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreGameServer::ClearAllKeyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues");

	UUWorksInterfaceCoreGameServer_ClearAllKeyValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksTicketHandle     TicketHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket");

	UUWorksInterfaceCoreGameServer_CancelAuthTicket_Params params;
	params.TicketHandle = TicketHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::BSecure()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure");

	UUWorksInterfaceCoreGameServer_BSecure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::BLoggedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn");

	UUWorksInterfaceCoreGameServer_BLoggedOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Ticket                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksBeginAuthSessionResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksBeginAuthSessionResult UUWorksInterfaceCoreGameServer::BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession");

	UUWorksInterfaceCoreGameServer_BeginAuthSession_Params params;
	params.Ticket = Ticket;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::AssociateWithClanMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal");

	UUWorksInterfaceCoreGameServer_AssociateWithClanMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreAssociateWithClan* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreAssociateWithClan* UUWorksInterfaceCoreGameServer::AssociateWithClan()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan");

	UUWorksInterfaceCoreGameServer_AssociateWithClan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CountThisSession               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SessionLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::UpdateUserAvgRateStat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float CountThisSession, float SessionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat");

	UUWorksInterfaceCoreGameServerStats_UpdateUserAvgRateStat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.CountThisSession = CountThisSession;
	params.SessionLength = SessionLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServerStats::StoreUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal");

	UUWorksInterfaceCoreGameServerStats_StoreUserStatsMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreStoreUserStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStoreUserStats* UUWorksInterfaceCoreGameServerStats::StoreUserStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats");

	UUWorksInterfaceCoreGameServerStats_StoreUserStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger");

	UUWorksInterfaceCoreGameServerStats_SetUserStatFromInteger_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat");

	UUWorksInterfaceCoreGameServerStats_SetUserStatFromFloat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::SetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement");

	UUWorksInterfaceCoreGameServerStats_SetUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServerStats::RequestUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal");

	UUWorksInterfaceCoreGameServerStats_RequestUserStatsMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestUserStatsGS* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestUserStatsGS* UUWorksInterfaceCoreGameServerStats::RequestUserStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats");

	UUWorksInterfaceCoreGameServerStats_RequestUserStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger");

	UUWorksInterfaceCoreGameServerStats_GetUserStatAsInteger_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat");

	UUWorksInterfaceCoreGameServerStats_GetUserStatAsFloat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement");

	UUWorksInterfaceCoreGameServerStats_GetUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreGameServerStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreGameServerStats* UUWorksInterfaceCoreGameServerStats::STATIC_GetGameServerStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats");

	UUWorksInterfaceCoreGameServerStats_GetGameServerStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::ClearUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement");

	UUWorksInterfaceCoreGameServerStats_ClearUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefinition                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::TriggerItemDrop(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemDef& ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop");

	UUWorksInterfaceCoreInventory_TriggerItemDrop_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemInstanceID ItemSourceInstanceID           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ItemSourceQuantity             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemInstanceID ItemDestinationInstanceID      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::TransferItemQuantity(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemInstanceID& ItemSourceInstanceID, int ItemSourceQuantity, const struct FUWorksSteamItemInstanceID& ItemDestinationInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity");

	UUWorksInterfaceCoreInventory_TransferItemQuantity_Params params;
	params.ItemSourceInstanceID = ItemSourceInstanceID;
	params.ItemSourceQuantity = ItemSourceQuantity;
	params.ItemDestinationInstanceID = ItemDestinationInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDTradePartner            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> ItemsGiven                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    ItemsGivenQuantities           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> ItemsReceived                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    ItemsReceivedQuantities        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::TradeItems(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamID& SteamIDTradePartner, TArray<struct FUWorksSteamItemInstanceID> ItemsGiven, TArray<int> ItemsGivenQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsReceived, TArray<int> ItemsReceivedQuantities)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems");

	UUWorksInterfaceCoreInventory_TradeItems_Params params;
	params.SteamIDTradePartner = SteamIDTradePartner;
	params.ItemsGiven = ItemsGiven;
	params.ItemsGivenQuantities = ItemsGivenQuantities;
	params.ItemsReceived = ItemsReceived;
	params.ItemsReceivedQuantities = ItemsReceivedQuantities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::SerializeResult(const struct FUWorksSteamInventoryResult& Handle, TArray<unsigned char>* Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult");

	UUWorksInterfaceCoreInventory_SerializeResult_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buffer != nullptr)
		*Buffer = params.Buffer;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal");

	UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDsMinimal_Params params;
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs");

	UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::LoadItemDefinitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions");

	UUWorksInterfaceCoreInventory_LoadItemDefinitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GrantPromoItems(struct FUWorksSteamInventoryResult* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems");

	UUWorksInterfaceCoreInventory_GrantPromoItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreInventory::GetResultTimestamp(const struct FUWorksSteamInventoryResult& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp");

	UUWorksInterfaceCoreInventory_GetResultTimestamp_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksResult UUWorksInterfaceCoreInventory::GetResultStatus(const struct FUWorksSteamInventoryResult& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus");

	UUWorksInterfaceCoreInventory_GetResultStatus_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDetails> Items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetResultItems(const struct FUWorksSteamInventoryResult& Handle, TArray<struct FUWorksSteamItemDetails>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems");

	UUWorksInterfaceCoreInventory_GetResultItems_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> InstanceIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemsByID(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemInstanceID> InstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID");

	UUWorksInterfaceCoreInventory_GetItemsByID_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamItemDef     ItemDefinition                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyValue                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertyValue(const struct FUWorksSteamItemDef& ItemDefinition, const struct FString& PropertyName, struct FString* PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue");

	UUWorksInterfaceCoreInventory_GetItemDefinitionPropertyValue_Params params;
	params.ItemDefinition = ItemDefinition;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PropertyValue != nullptr)
		*PropertyValue = params.PropertyValue;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamItemDef     ItemDefinition                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         PropertiesNames                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertiesNames(const struct FUWorksSteamItemDef& ItemDefinition, TArray<struct FString>* PropertiesNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames");

	UUWorksInterfaceCoreInventory_GetItemDefinitionPropertiesNames_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PropertiesNames != nullptr)
		*PropertiesNames = params.PropertiesNames;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksSteamItemDef> ItemDefinitions                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemDefinitionIDs(TArray<struct FUWorksSteamItemDef>* ItemDefinitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs");

	UUWorksInterfaceCoreInventory_GetItemDefinitionIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDefinitions != nullptr)
		*ItemDefinitions = params.ItemDefinitions;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreInventory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreInventory* UUWorksInterfaceCoreInventory::STATIC_GetInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory");

	UUWorksInterfaceCoreInventory_GetInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefinitions                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetEligiblePromoItemDefinitionIDs(const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef>* ItemDefinitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs");

	UUWorksInterfaceCoreInventory_GetEligiblePromoItemDefinitionIDs_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDefinitions != nullptr)
		*ItemDefinitions = params.ItemDefinitions;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetAllItems(struct FUWorksSteamInventoryResult* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems");

	UUWorksInterfaceCoreInventory_GetAllItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefinitions                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    ItemQuantities                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GenerateItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions, TArray<int> ItemQuantities)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems");

	UUWorksInterfaceCoreInventory_GenerateItems_Params params;
	params.ItemDefinitions = ItemDefinitions;
	params.ItemQuantities = ItemQuantities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemsGenerated                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    ItemsGeneratedQuantities       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemInstanceID> ItemsDestroyed                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    ItemsDestroyedQuantities       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::ExchangeItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemsGenerated, TArray<int> ItemsGeneratedQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int> ItemsDestroyedQuantities)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems");

	UUWorksInterfaceCoreInventory_ExchangeItems_Params params;
	params.ItemsGenerated = ItemsGenerated;
	params.ItemsGeneratedQuantities = ItemsGeneratedQuantities;
	params.ItemsDestroyed = ItemsDestroyed;
	params.ItemsDestroyedQuantities = ItemsDestroyedQuantities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreInventory::DestroyResult(const struct FUWorksSteamInventoryResult& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult");

	UUWorksInterfaceCoreInventory_DestroyResult_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bReservedMustBeFalse           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::DeserializeResult(struct FUWorksSteamInventoryResult* Handle, TArray<unsigned char> Buffer, bool bReservedMustBeFalse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult");

	UUWorksInterfaceCoreInventory_DeserializeResult_Params params;
	params.Buffer = Buffer;
	params.bReservedMustBeFalse = bReservedMustBeFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemInstanceID ItemInstanceId                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::ConsumeItem(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemInstanceID& ItemInstanceId, int ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem");

	UUWorksInterfaceCoreInventory_ConsumeItem_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::CheckResultSteamID(const struct FUWorksSteamInventoryResult& Handle, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID");

	UUWorksInterfaceCoreInventory_CheckResultSteamID_Params params;
	params.Handle = Handle;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamItemDef> ItemDefinitions                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::AddPromoItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems");

	UUWorksInterfaceCoreInventory_AddPromoItems_Params params;
	params.ItemDefinitions = ItemDefinitions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamInventoryResult Handle                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamItemDef     ItemDefinition                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::AddPromoItem(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemDef& ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem");

	UUWorksInterfaceCoreInventory_AddPromoItem_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLobbyType    LobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyType(const struct FUWorksSteamID& SteamIDLobby, UWorksCore_EUWorksLobbyType LobbyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType");

	UUWorksInterfaceCoreMatchmaking_SetLobbyType_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.LobbyType = LobbyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDNewOwner                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDNewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner");

	UUWorksInterfaceCoreMatchmaking_SetLobbyOwner_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDNewOwner = SteamIDNewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby, int MaxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit");

	UUWorksInterfaceCoreMatchmaking_SetLobbyMemberLimit_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::SetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData");

	UUWorksInterfaceCoreMatchmaking_SetLobbyMemberData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLobbyJoinable                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyJoinable(const struct FUWorksSteamID& SteamIDLobby, bool bLobbyJoinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable");

	UUWorksInterfaceCoreMatchmaking_SetLobbyJoinable_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.bLobbyJoinable = bLobbyJoinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameServerIP                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameServerPort                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDGameServer              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::SetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, const struct FString& GameServerIP, int GameServerPort, const struct FUWorksSteamID& SteamIDGameServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer");

	UUWorksInterfaceCoreMatchmaking_SetLobbyGameServer_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.GameServerIP = GameServerIP;
	params.GameServerPort = GameServerPort;
	params.SteamIDGameServer = SteamIDGameServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData");

	UUWorksInterfaceCoreMatchmaking_SetLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDLobbyDependent          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLinkedLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDLobbyDependent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby");

	UUWorksInterfaceCoreMatchmaking_SetLinkedLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDLobbyDependent = SteamIDLobbyDependent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SendLobbyChatMsg(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg");

	UUWorksInterfaceCoreMatchmaking_SendLobbyChatMsg_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::RequestLobbyListMinimal(const struct FScriptDelegate& Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal");

	UUWorksInterfaceCoreMatchmaking_RequestLobbyListMinimal_Params params;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestLobbyList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestLobbyList* UUWorksInterfaceCoreMatchmaking::RequestLobbyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList");

	UUWorksInterfaceCoreMatchmaking_RequestLobbyList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::RequestLobbyData(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData");

	UUWorksInterfaceCoreMatchmaking_RequestLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksFavoriteFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::RemoveFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame");

	UUWorksInterfaceCoreMatchmaking_RemoveFavoriteGame_Params params;
	params.AppID = AppID;
	params.IP = IP;
	params.ConnectionPort = ConnectionPort;
	params.QueryPort = QueryPort;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::LeaveLobby(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby");

	UUWorksInterfaceCoreMatchmaking_LeaveLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::JoinLobbyMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal");

	UUWorksInterfaceCoreMatchmaking_JoinLobbyMinimal_Params params;
	params.Completed = Completed;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreJoinLobby* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreJoinLobby* UUWorksInterfaceCoreMatchmaking::JoinLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby");

	UUWorksInterfaceCoreMatchmaking_JoinLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDInvitee                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::InviteUserToLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDInvitee)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby");

	UUWorksInterfaceCoreMatchmaking_InviteUserToLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDInvitee = SteamIDInvitee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetNumLobbyMembers(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers");

	UUWorksInterfaceCoreMatchmaking_GetNumLobbyMembers_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreMatchmaking* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreMatchmaking* UUWorksInterfaceCoreMatchmaking::STATIC_GetMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking");

	UUWorksInterfaceCoreMatchmaking_GetMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner");

	UUWorksInterfaceCoreMatchmaking_GetLobbyOwner_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit");

	UUWorksInterfaceCoreMatchmaking_GetLobbyMemberLimit_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreMatchmaking::GetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDUser, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData");

	UUWorksInterfaceCoreMatchmaking_GetLobbyMemberData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDUser = SteamIDUser;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Member                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyMemberByIndex(const struct FUWorksSteamID& SteamIDLobby, int Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex");

	UUWorksInterfaceCoreMatchmaking_GetLobbyMemberByIndex_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameServerIP                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameServerPort                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDGameServer              (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::GetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, struct FString* GameServerIP, int* GameServerPort, struct FUWorksSteamID* SteamIDGameServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer");

	UUWorksInterfaceCoreMatchmaking_GetLobbyGameServer_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameServerIP != nullptr)
		*GameServerIP = params.GameServerIP;
	if (GameServerPort != nullptr)
		*GameServerPort = params.GameServerPort;
	if (SteamIDGameServer != nullptr)
		*SteamIDGameServer = params.SteamIDGameServer;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetLobbyDataCount(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount");

	UUWorksInterfaceCoreMatchmaking_GetLobbyDataCount_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LobbyData                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            KeyMaxLength                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ValueMaxLength                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::GetLobbyDataByIndex(const struct FUWorksSteamID& SteamIDLobby, int LobbyData, struct FString* Key, int KeyMaxLength, struct FString* Value, int ValueMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex");

	UUWorksInterfaceCoreMatchmaking_GetLobbyDataByIndex_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.LobbyData = LobbyData;
	params.KeyMaxLength = KeyMaxLength;
	params.ValueMaxLength = ValueMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreMatchmaking::GetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData");

	UUWorksInterfaceCoreMatchmaking_GetLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageMaxLength               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatEntryType ChatEntryType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetLobbyChatEntry(const struct FUWorksSteamID& SteamIDLobby, int MessageID, struct FUWorksSteamID* SteamIDUser, struct FString* Message, int MessageMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry");

	UUWorksInterfaceCoreMatchmaking_GetLobbyChatEntry_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.MessageID = MessageID;
	params.MessageMaxLength = MessageMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;
	if (Message != nullptr)
		*Message = params.Message;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Lobby                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyByIndex(int Lobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex");

	UUWorksInterfaceCoreMatchmaking_GetLobbyByIndex_Params params;
	params.Lobby = Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetFavoriteGameCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount");

	UUWorksInterfaceCoreMatchmaking_GetFavoriteGameCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Game                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksFavoriteFlags> Flags                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            TimeLastPlayedOnServer         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::GetFavoriteGame(int Game, int* AppID, struct FString* IP, int* ConnectionPort, int* QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags>* Flags, int* TimeLastPlayedOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame");

	UUWorksInterfaceCoreMatchmaking_GetFavoriteGame_Params params;
	params.Game = Game;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (IP != nullptr)
		*IP = params.IP;
	if (ConnectionPort != nullptr)
		*ConnectionPort = params.ConnectionPort;
	if (QueryPort != nullptr)
		*QueryPort = params.QueryPort;
	if (Flags != nullptr)
		*Flags = params.Flags;
	if (TimeLastPlayedOnServer != nullptr)
		*TimeLastPlayedOnServer = params.TimeLastPlayedOnServer;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::DeleteLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData");

	UUWorksInterfaceCoreMatchmaking_DeleteLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLobbyType    LobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::CreateLobbyMinimal(const struct FScriptDelegate& Completed, UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal");

	UUWorksInterfaceCoreMatchmaking_CreateLobbyMinimal_Params params;
	params.Completed = Completed;
	params.LobbyType = LobbyType;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreCreateLobby* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreCreateLobby* UUWorksInterfaceCoreMatchmaking::CreateLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby");

	UUWorksInterfaceCoreMatchmaking_CreateLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ValueToMatch                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLobbyComparison ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListStringFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListResultCountFilter(int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListResultCountFilter_Params params;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ValueToMatch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLobbyComparison ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNumericalFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ValueToBeCloseTo               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNearValueFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToBeCloseTo = ValueToBeCloseTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotsAvailable                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params params;
	params.SlotsAvailable = SlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksLobbyDistanceFilter LobbyDistanceFilter            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListDistanceFilter(UWorksCore_EUWorksLobbyDistanceFilter LobbyDistanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListDistanceFilter_Params params;
	params.LobbyDistanceFilter = LobbyDistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListCompatibleMembersFilter(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<UWorksCore_EUWorksFavoriteFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            TimeLastPlayedOnServer         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::AddFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags, int TimeLastPlayedOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame");

	UUWorksInterfaceCoreMatchmaking_AddFavoriteGame_Params params;
	params.AppID = AppID;
	params.IP = IP;
	params.ConnectionPort = ConnectionPort;
	params.QueryPort = QueryPort;
	params.Flags = Flags;
	params.TimeLastPlayedOnServer = TimeLastPlayedOnServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Updated                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksServerQueryType QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::ServerListMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, int AppID, UWorksCore_EUWorksServerQueryType QueryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal");

	UUWorksInterfaceCoreMatchmakingServers_ServerListMinimal_Params params;
	params.Completed = Completed;
	params.Updated = Updated;
	params.AppID = AppID;
	params.QueryType = QueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreServerList* UUWorksInterfaceCoreMatchmakingServers::ServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList");

	UUWorksInterfaceCoreMatchmakingServers_ServerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Updated                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::RulesMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal");

	UUWorksInterfaceCoreMatchmakingServers_RulesMinimal_Params params;
	params.Completed = Completed;
	params.Updated = Updated;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRules* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRules* UUWorksInterfaceCoreMatchmakingServers::Rules()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules");

	UUWorksInterfaceCoreMatchmakingServers_Rules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Updated                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::PlayersMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal");

	UUWorksInterfaceCoreMatchmakingServers_PlayersMinimal_Params params;
	params.Completed = Completed;
	params.Updated = Updated;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCorePlayers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCorePlayers* UUWorksInterfaceCoreMatchmakingServers::Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players");

	UUWorksInterfaceCoreMatchmakingServers_Players_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::PingMinimal(const struct FScriptDelegate& Completed, const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal");

	UUWorksInterfaceCoreMatchmakingServers_PingMinimal_Params params;
	params.Completed = Completed;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCorePing*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCorePing* UUWorksInterfaceCoreMatchmakingServers::Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping");

	UUWorksInterfaceCoreMatchmakingServers_Ping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreMatchmakingServers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreMatchmakingServers* UUWorksInterfaceCoreMatchmakingServers::STATIC_GetMatchmakingServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers");

	UUWorksInterfaceCoreMatchmakingServers_GetMatchmakingServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMusic::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume");

	UUWorksInterfaceCoreMusic_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::PlayPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious");

	UUWorksInterfaceCoreMusic_PlayPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::PlayNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext");

	UUWorksInterfaceCoreMusic_PlayNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMusic.Play
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.Play");

	UUWorksInterfaceCoreMusic_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMusic.Pause
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.Pause");

	UUWorksInterfaceCoreMusic_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUWorksInterfaceCoreMusic::GetVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume");

	UUWorksInterfaceCoreMusic_GetVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksAudioPlaybackStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksAudioPlaybackStatus UUWorksInterfaceCoreMusic::GetPlaybackStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus");

	UUWorksInterfaceCoreMusic_GetPlaybackStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreMusic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreMusic* UUWorksInterfaceCoreMusic::STATIC_GetMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic");

	UUWorksInterfaceCoreMusic_GetMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMusic::BIsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying");

	UUWorksInterfaceCoreMusic_BIsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMusic::BIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled");

	UUWorksInterfaceCoreMusic_BIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksP2PSend      P2PSendType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::SendP2PPacket(const struct FUWorksSteamID& SteamIDRemote, TArray<unsigned char> Data, UWorksCore_EUWorksP2PSend P2PSendType, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket");

	UUWorksInterfaceCoreNetworking_SendP2PPacket_Params params;
	params.SteamIDRemote = SteamIDRemote;
	params.Data = Data;
	params.P2PSendType = P2PSendType;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Data                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksP2PSend      P2PSendType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::SendP2PMessage(const struct FUWorksSteamID& SteamIDRemote, const struct FString& Data, UWorksCore_EUWorksP2PSend P2PSendType, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage");

	UUWorksInterfaceCoreNetworking_SendP2PMessage_Params params;
	params.SteamIDRemote = SteamIDRemote;
	params.Data = Data;
	params.P2PSendType = P2PSendType;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            DataMax                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDRemote                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::ReadP2PPacket(TArray<unsigned char>* Data, int DataMax, struct FUWorksSteamID* SteamIDRemote, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket");

	UUWorksInterfaceCoreNetworking_ReadP2PPacket_Params params;
	params.DataMax = DataMax;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (SteamIDRemote != nullptr)
		*SteamIDRemote = params.SteamIDRemote;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Data                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DataMax                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDRemote                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::ReadP2PMessage(struct FString* Data, int DataMax, struct FUWorksSteamID* SteamIDRemote, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage");

	UUWorksInterfaceCoreNetworking_ReadP2PMessage_Params params;
	params.DataMax = DataMax;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (SteamIDRemote != nullptr)
		*SteamIDRemote = params.SteamIDRemote;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            DataSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::IsP2PPacketAvailable(int* DataSize, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable");

	UUWorksInterfaceCoreNetworking_IsP2PPacketAvailable_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataSize != nullptr)
		*DataSize = params.DataSize;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksP2PSessionState  ConnectionState                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::GetP2PSessionState(const struct FUWorksSteamID& SteamIDRemote, struct FUWorksP2PSessionState* ConnectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState");

	UUWorksInterfaceCoreNetworking_GetP2PSessionState_Params params;
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConnectionState != nullptr)
		*ConnectionState = params.ConnectionState;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreNetworking* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreNetworking* UUWorksInterfaceCoreNetworking::STATIC_GetNetworking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking");

	UUWorksInterfaceCoreNetworking_GetNetworking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::CloseP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser");

	UUWorksInterfaceCoreNetworking_CloseP2PSessionWithUser_Params params;
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::CloseP2PChannelWithUser(const struct FUWorksSteamID& SteamIDRemote, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser");

	UUWorksInterfaceCoreNetworking_CloseP2PChannelWithUser_Params params;
	params.SteamIDRemote = SteamIDRemote;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::AllowP2PPacketRelay(bool bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay");

	UUWorksInterfaceCoreNetworking_AllowP2PPacketRelay_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::AcceptP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser");

	UUWorksInterfaceCoreNetworking_AcceptP2PSessionWithUser_Params params;
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksRemoteStoragePlatform RemoteStoragePlatform          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::SetSyncPlatforms(const struct FString& File, UWorksCore_EUWorksRemoteStoragePlatform RemoteStoragePlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms");

	UUWorksInterfaceCoreRemoteStorage_SetSyncPlatforms_Params params;
	params.File = File;
	params.RemoteStoragePlatform = RemoteStoragePlatform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreRemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp");

	UUWorksInterfaceCoreRemoteStorage_SetCloudEnabledForApp_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp");

	UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForApp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount");

	UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForAccount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksRemoteStoragePlatform ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksRemoteStoragePlatform UUWorksInterfaceCoreRemoteStorage::GetSyncPlatforms(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms");

	UUWorksInterfaceCoreRemoteStorage_GetSyncPlatforms_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreRemoteStorage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreRemoteStorage* UUWorksInterfaceCoreRemoteStorage::STATIC_GetRemoteStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage");

	UUWorksInterfaceCoreRemoteStorage_GetRemoteStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 TotalBytes                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AvailableBytes                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::GetQuota(struct FString* TotalBytes, struct FString* AvailableBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota");

	UUWorksInterfaceCoreRemoteStorage_GetQuota_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalBytes != nullptr)
		*TotalBytes = params.TotalBytes;
	if (AvailableBytes != nullptr)
		*AvailableBytes = params.AvailableBytes;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::GetFileTimestamp(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp");

	UUWorksInterfaceCoreRemoteStorage_GetFileTimestamp_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::GetFileSize(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize");

	UUWorksInterfaceCoreRemoteStorage_GetFileSize_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            File                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileSizeInBytes                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreRemoteStorage::GetFileNameAndSize(int File, int* FileSizeInBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize");

	UUWorksInterfaceCoreRemoteStorage_GetFileNameAndSize_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FileSizeInBytes != nullptr)
		*FileSizeInBytes = params.FileSizeInBytes;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::GetFileCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount");

	UUWorksInterfaceCoreRemoteStorage_GetFileCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCFileWriteStreamHandle Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamWriteChunk(const struct FUWorksUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamWriteChunk_Params params;
	params.Handle = Handle;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCFileWriteStreamHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCFileWriteStreamHandle UUWorksInterfaceCoreRemoteStorage::FileWriteStreamOpen(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamOpen_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCFileWriteStreamHandle Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamClose(const struct FUWorksUGCFileWriteStreamHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamClose_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCFileWriteStreamHandle Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamCancel(const struct FUWorksUGCFileWriteStreamHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamCancel_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreRemoteStorage::FileWriteAsyncMinimal(const struct FScriptDelegate& Completed, const struct FString& File, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal");

	UUWorksInterfaceCoreRemoteStorage_FileWriteAsyncMinimal_Params params;
	params.Completed = Completed;
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreFileWriteAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFileWriteAsync* UUWorksInterfaceCoreRemoteStorage::FileWriteAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync");

	UUWorksInterfaceCoreRemoteStorage_FileWriteAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWrite(const struct FString& File, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite");

	UUWorksInterfaceCoreRemoteStorage_FileWrite_Params params;
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BytesToRead                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreRemoteStorage::FileReadAsyncMinimal(const struct FScriptDelegate& Completed, const struct FString& File, int Offset, int BytesToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal");

	UUWorksInterfaceCoreRemoteStorage_FileReadAsyncMinimal_Params params;
	params.Completed = Completed;
	params.File = File;
	params.Offset = Offset;
	params.BytesToRead = BytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreFileReadAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFileReadAsync* UUWorksInterfaceCoreRemoteStorage::FileReadAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync");

	UUWorksInterfaceCoreRemoteStorage_FileReadAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            BufferSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::FileRead(const struct FString& File, TArray<unsigned char>* Buffer, int BufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead");

	UUWorksInterfaceCoreRemoteStorage_FileRead_Params params;
	params.File = File;
	params.BufferSize = BufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buffer != nullptr)
		*Buffer = params.Buffer;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FilePersisted(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted");

	UUWorksInterfaceCoreRemoteStorage_FilePersisted_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileForget(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget");

	UUWorksInterfaceCoreRemoteStorage_FileForget_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileExists(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists");

	UUWorksInterfaceCoreRemoteStorage_FileExists_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileDelete(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete");

	UUWorksInterfaceCoreRemoteStorage_FileDelete_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksScreenshotHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::WriteScreenshot(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot");

	UUWorksInterfaceCoreScreenshots_WriteScreenshot_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreScreenshots::TriggerScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot");

	UUWorksInterfaceCoreScreenshots_TriggerScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksScreenshotHandle Screenshot                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::TagUser(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser");

	UUWorksInterfaceCoreScreenshots_TagUser_Params params;
	params.Screenshot = Screenshot;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksScreenshotHandle Screenshot                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::TagPublishedFile(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile");

	UUWorksInterfaceCoreScreenshots_TagPublishedFile_Params params;
	params.Screenshot = Screenshot;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksScreenshotHandle Screenshot                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Location                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::SetLocation(const struct FUWorksScreenshotHandle& Screenshot, const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation");

	UUWorksInterfaceCoreScreenshots_SetLocation_Params params;
	params.Screenshot = Screenshot;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::IsScreenshotsHooked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked");

	UUWorksInterfaceCoreScreenshots_IsScreenshotsHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHook                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreScreenshots::HookScreenshots(bool bHook)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots");

	UUWorksInterfaceCoreScreenshots_HookScreenshots_Params params;
	params.bHook = bHook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreScreenshots* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreScreenshots* UUWorksInterfaceCoreScreenshots::STATIC_GetScreenshots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots");

	UUWorksInterfaceCoreScreenshots_GetScreenshots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksVRScreenshotType Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 VRFileName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksScreenshotHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddVRScreenshotToLibrary(UWorksCore_EUWorksVRScreenshotType Type, const struct FString& Filename, const struct FString& VRFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary");

	UUWorksInterfaceCoreScreenshots_AddVRScreenshotToLibrary_Params params;
	params.Type = Type;
	params.Filename = Filename;
	params.VRFileName = VRFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FileMame                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ThumbnailFileName              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksScreenshotHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddScreenshotToLibrary(const struct FString& FileMame, const struct FString& ThumbnailFileName, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary");

	UUWorksInterfaceCoreScreenshots_AddScreenshotToLibrary_Params params;
	params.FileMame = FileMame;
	params.ThumbnailFileName = ThumbnailFileName;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PreviewVideo                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::UpdateItemPreviewVideo(const struct FUWorksUGCUpdateHandle& Handle, int Index, const struct FString& PreviewVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo");

	UUWorksInterfaceCoreUGC_UpdateItemPreviewVideo_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewVideo = PreviewVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PreviewFile                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::UpdateItemPreviewFile(const struct FUWorksUGCUpdateHandle& Handle, int Index, const struct FString& PreviewFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile");

	UUWorksInterfaceCoreUGC_UpdateItemPreviewFile_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewFile = PreviewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::UnsubscribeItemMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal");

	UUWorksInterfaceCoreUGC_UnsubscribeItemMinimal_Params params;
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreUnsubscribeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreUnsubscribeItem* UUWorksInterfaceCoreUGC::UnsubscribeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem");

	UUWorksInterfaceCoreUGC_UnsubscribeItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SuspendDownloads(bool bSuspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads");

	UUWorksInterfaceCoreUGC_SuspendDownloads_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SubscribeItemMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal");

	UUWorksInterfaceCoreUGC_SubscribeItemMinimal_Params params;
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreSubscribeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSubscribeItem* UUWorksInterfaceCoreUGC::SubscribeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem");

	UUWorksInterfaceCoreUGC_SubscribeItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUGCUpdateHandle  UGCUpdateHandle                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ChangeNote                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SubmitItemUpdateMinimal(const struct FScriptDelegate& Completed, const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal");

	UUWorksInterfaceCoreUGC_SubmitItemUpdateMinimal_Params params;
	params.Completed = Completed;
	params.UGCUpdateHandle = UGCUpdateHandle;
	params.ChangeNote = ChangeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreSubmitItemUpdate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSubmitItemUpdate* UUWorksInterfaceCoreUGC::SubmitItemUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate");

	UUWorksInterfaceCoreUGC_SubmitItemUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksPublishedFileID> PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal");

	UUWorksInterfaceCoreUGC_StopPlaytimeTrackingMinimal_Params params;
	params.Completed = Completed;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItemsMinimal(const struct FScriptDelegate& Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal");

	UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItemsMinimal_Params params;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems");

	UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreStopPlaytimeTracking* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStopPlaytimeTracking* UUWorksInterfaceCoreUGC::StopPlaytimeTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking");

	UUWorksInterfaceCoreUGC_StopPlaytimeTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksPublishedFileID> PublishedFileID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::StartPlaytimeTrackingMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal");

	UUWorksInterfaceCoreUGC_StartPlaytimeTrackingMinimal_Params params;
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreStartPlaytimeTracking* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStartPlaytimeTracking* UUWorksInterfaceCoreUGC::StartPlaytimeTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking");

	UUWorksInterfaceCoreUGC_StartPlaytimeTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCUpdateHandle  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCUpdateHandle UUWorksInterfaceCoreUGC::StartItemUpdate(int ConsumerAppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate");

	UUWorksInterfaceCoreUGC_StartItemUpdate_Params params;
	params.ConsumerAppID = ConsumerAppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SetUserItemVoteMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal");

	UUWorksInterfaceCoreUGC_SetUserItemVoteMinimal_Params params;
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreSetUserItemVote* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSetUserItemVote* UUWorksInterfaceCoreUGC::SetUserItemVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote");

	UUWorksInterfaceCoreUGC_SetUserItemVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 SearchText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetSearchText(const struct FUWorksUGCQueryHandle& Handle, const struct FString& SearchText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText");

	UUWorksInterfaceCoreUGC_SetSearchText_Params params;
	params.Handle = Handle;
	params.SearchText = SearchText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnTotalOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnTotalOnly(const struct FUWorksUGCQueryHandle& Handle, bool bReturnTotalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly");

	UUWorksInterfaceCoreUGC_SetReturnTotalOnly_Params params;
	params.Handle = Handle;
	params.bReturnTotalOnly = bReturnTotalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnOnlyIDs                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnOnlyIDs(const struct FUWorksUGCQueryHandle& Handle, bool bReturnOnlyIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs");

	UUWorksInterfaceCoreUGC_SetReturnOnlyIDs_Params params;
	params.Handle = Handle;
	params.bReturnOnlyIDs = bReturnOnlyIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnMetadata                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnMetadata(const struct FUWorksUGCQueryHandle& Handle, bool bReturnMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata");

	UUWorksInterfaceCoreUGC_SetReturnMetadata_Params params;
	params.Handle = Handle;
	params.bReturnMetadata = bReturnMetadata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnLongDescription         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnLongDescription(const struct FUWorksUGCQueryHandle& Handle, bool bReturnLongDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription");

	UUWorksInterfaceCoreUGC_SetReturnLongDescription_Params params;
	params.Handle = Handle;
	params.bReturnLongDescription = bReturnLongDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnKeyValueTags            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnKeyValueTags(const struct FUWorksUGCQueryHandle& Handle, bool bReturnKeyValueTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags");

	UUWorksInterfaceCoreUGC_SetReturnKeyValueTags_Params params;
	params.Handle = Handle;
	params.bReturnKeyValueTags = bReturnKeyValueTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnChildren                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnChildren(const struct FUWorksUGCQueryHandle& Handle, bool bReturnChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren");

	UUWorksInterfaceCoreUGC_SetReturnChildren_Params params;
	params.Handle = Handle;
	params.bReturnChildren = bReturnChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bReturnAdditionalPreviews      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnAdditionalPreviews(const struct FUWorksUGCQueryHandle& Handle, bool bReturnAdditionalPreviews)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews");

	UUWorksInterfaceCoreUGC_SetReturnAdditionalPreviews_Params params;
	params.Handle = Handle;
	params.bReturnAdditionalPreviews = bReturnAdditionalPreviews;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetRankedByTrendDays(const struct FUWorksUGCQueryHandle& Handle, int Days)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays");

	UUWorksInterfaceCoreUGC_SetRankedByTrendDays_Params params;
	params.Handle = Handle;
	params.Days = Days;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bMatchAnyTag                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetMatchAnyTag(const struct FUWorksUGCQueryHandle& Handle, bool bMatchAnyTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag");

	UUWorksInterfaceCoreUGC_SetMatchAnyTag_Params params;
	params.Handle = Handle;
	params.bMatchAnyTag = bMatchAnyTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetLanguage(const struct FUWorksUGCQueryHandle& Handle, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage");

	UUWorksInterfaceCoreUGC_SetLanguage_Params params;
	params.Handle = Handle;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemVisibility(const struct FUWorksUGCUpdateHandle& Handle, UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility");

	UUWorksInterfaceCoreUGC_SetItemVisibility_Params params;
	params.Handle = Handle;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemUpdateLanguage(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage");

	UUWorksInterfaceCoreUGC_SetItemUpdateLanguage_Params params;
	params.Handle = Handle;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemTitle(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle");

	UUWorksInterfaceCoreUGC_SetItemTitle_Params params;
	params.Handle = Handle;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemTags(const struct FUWorksUGCUpdateHandle& Handle, TArray<struct FString> Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags");

	UUWorksInterfaceCoreUGC_SetItemTags_Params params;
	params.Handle = Handle;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PreviewFile                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemPreview(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& PreviewFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview");

	UUWorksInterfaceCoreUGC_SetItemPreview_Params params;
	params.Handle = Handle;
	params.PreviewFile = PreviewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemMetadata(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata");

	UUWorksInterfaceCoreUGC_SetItemMetadata_Params params;
	params.Handle = Handle;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemDescription(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription");

	UUWorksInterfaceCoreUGC_SetItemDescription_Params params;
	params.Handle = Handle;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ContentFolder                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemContent(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& ContentFolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent");

	UUWorksInterfaceCoreUGC_SetItemContent_Params params;
	params.Handle = Handle;
	params.ContentFolder = ContentFolder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 MatchCloudFileName             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetCloudFileNameFilter(const struct FUWorksUGCQueryHandle& Handle, const struct FString& MatchCloudFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter");

	UUWorksInterfaceCoreUGC_SetCloudFileNameFilter_Params params;
	params.Handle = Handle;
	params.MatchCloudFileName = MatchCloudFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            MaxAgeSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetAllowCachedResponse(const struct FUWorksUGCQueryHandle& Handle, int MaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse");

	UUWorksInterfaceCoreUGC_SetAllowCachedResponse_Params params;
	params.Handle = Handle;
	params.MaxAgeSeconds = MaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUGCQueryHandle   UGCQueryHandle                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SendQueryUGCRequestMinimal(const struct FScriptDelegate& Completed, const struct FUWorksUGCQueryHandle& UGCQueryHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal");

	UUWorksInterfaceCoreUGC_SendQueryUGCRequestMinimal_Params params;
	params.Completed = Completed;
	params.UGCQueryHandle = UGCQueryHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreSendQueryUGCRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSendQueryUGCRequest* UUWorksInterfaceCoreUGC::SendQueryUGCRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest");

	UUWorksInterfaceCoreUGC_SendQueryUGCRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::RemoveItemPreview(const struct FUWorksUGCUpdateHandle& Handle, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview");

	UUWorksInterfaceCoreUGC_RemoveItemPreview_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::RemoveItemKeyValueTags(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags");

	UUWorksInterfaceCoreUGC_RemoveItemKeyValueTags_Params params;
	params.Handle = Handle;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::RemoveItemFromFavoritesMinimal(const struct FScriptDelegate& Completed, int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal");

	UUWorksInterfaceCoreUGC_RemoveItemFromFavoritesMinimal_Params params;
	params.Completed = Completed;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRemoveItemFromFavorites* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRemoveItemFromFavorites* UUWorksInterfaceCoreUGC::RemoveItemFromFavorites()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites");

	UUWorksInterfaceCoreUGC_RemoveItemFromFavorites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::ReleaseQueryUGCRequest(const struct FUWorksUGCQueryHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest");

	UUWorksInterfaceCoreUGC_ReleaseQueryUGCRequest_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::GetUserItemVoteMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal");

	UUWorksInterfaceCoreUGC_GetUserItemVoteMinimal_Params params;
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreGetUserItemVote* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetUserItemVote* UUWorksInterfaceCoreUGC::GetUserItemVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote");

	UUWorksInterfaceCoreUGC_GetUserItemVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreUGC* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUGC* UUWorksInterfaceCoreUGC::STATIC_GetUGC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC");

	UUWorksInterfaceCoreUGC_GetUGC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksPublishedFileID> PublishedFileIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            MaxEntries                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetSubscribedItems(TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int MaxEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems");

	UUWorksInterfaceCoreUGC_GetSubscribedItems_Params params;
	params.MaxEntries = MaxEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileIDs != nullptr)
		*PublishedFileIDs = params.PublishedFileIDs;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksItemStatistic StatType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StatValue                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCStatistic(const struct FUWorksUGCQueryHandle& Handle, int Index, UWorksCore_EUWorksItemStatistic StatType, struct FString* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic");

	UUWorksInterfaceCoreUGC_GetQueryUGCStatistic_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.StatType = StatType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamUGCDetails  Details                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCResult(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FUWorksSteamUGCDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult");

	UUWorksInterfaceCoreUGC_GetQueryUGCResult_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            URLMaxLength                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCPreviewURL(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FString* URL, int URLMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL");

	UUWorksInterfaceCoreUGC_GetQueryUGCPreviewURL_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.URLMaxLength = URLMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URL != nullptr)
		*URL = params.URL;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetQueryUGCNumKeyValueTags(const struct FUWorksUGCQueryHandle& Handle, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags");

	UUWorksInterfaceCoreUGC_GetQueryUGCNumKeyValueTags_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetQueryUGCNumAdditionalPreviews(const struct FUWorksUGCQueryHandle& Handle, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews");

	UUWorksInterfaceCoreUGC_GetQueryUGCNumAdditionalPreviews_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MetadataMaxLength              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCMetadata(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FString* MetaData, int MetadataMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata");

	UUWorksInterfaceCoreUGC_GetQueryUGCMetadata_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.MetadataMaxLength = MetadataMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            KeyValueTagIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            KeyMaxLength                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ValueMaxLength                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCKeyValueTag(const struct FUWorksUGCQueryHandle& Handle, int Index, int KeyValueTagIndex, struct FString* Key, int KeyMaxLength, struct FString* Value, int ValueMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag");

	UUWorksInterfaceCoreUGC_GetQueryUGCKeyValueTag_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.KeyValueTagIndex = KeyValueTagIndex;
	params.KeyMaxLength = KeyMaxLength;
	params.ValueMaxLength = ValueMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksPublishedFileID> PublishedFileIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            MaxEntries                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCChildren(const struct FUWorksUGCQueryHandle& Handle, int Index, TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int MaxEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren");

	UUWorksInterfaceCoreUGC_GetQueryUGCChildren_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.MaxEntries = MaxEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileIDs != nullptr)
		*PublishedFileIDs = params.PublishedFileIDs;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URLOrVideoID                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            URLOrVideoIDMaxLength          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OriginalFileName               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OriginalFileNameMaxLength      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksItemPreviewType PreviewType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCAdditionalPreview(const struct FUWorksUGCQueryHandle& Handle, int Index, int PreviewIndex, struct FString* URLOrVideoID, int URLOrVideoIDMaxLength, struct FString* OriginalFileName, int OriginalFileNameMaxLength, UWorksCore_EUWorksItemPreviewType* PreviewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview");

	UUWorksInterfaceCoreUGC_GetQueryUGCAdditionalPreview_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewIndex = PreviewIndex;
	params.URLOrVideoIDMaxLength = URLOrVideoIDMaxLength;
	params.OriginalFileNameMaxLength = OriginalFileNameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URLOrVideoID != nullptr)
		*URLOrVideoID = params.URLOrVideoID;
	if (OriginalFileName != nullptr)
		*OriginalFileName = params.OriginalFileName;
	if (PreviewType != nullptr)
		*PreviewType = params.PreviewType;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetNumSubscribedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems");

	UUWorksInterfaceCoreUGC_GetNumSubscribedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 BytesProcessed                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BytesTotal                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksItemUpdateStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksItemUpdateStatus UUWorksInterfaceCoreUGC::GetItemUpdateProgress(const struct FUWorksUGCUpdateHandle& Handle, struct FString* BytesProcessed, struct FString* BytesTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress");

	UUWorksInterfaceCoreUGC_GetItemUpdateProgress_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BytesProcessed != nullptr)
		*BytesProcessed = params.BytesProcessed;
	if (BytesTotal != nullptr)
		*BytesTotal = params.BytesTotal;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetItemState(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState");

	UUWorksInterfaceCoreUGC_GetItemState_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SizeOnDisk                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PathMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timestamp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetItemInstallInfo(const struct FUWorksPublishedFileID& PublishedFileID, struct FString* SizeOnDisk, struct FString* Path, int PathMaxLength, int* Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo");

	UUWorksInterfaceCoreUGC_GetItemInstallInfo_Params params;
	params.PublishedFileID = PublishedFileID;
	params.PathMaxLength = PathMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeOnDisk != nullptr)
		*SizeOnDisk = params.SizeOnDisk;
	if (Path != nullptr)
		*Path = params.Path;
	if (Timestamp != nullptr)
		*Timestamp = params.Timestamp;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BytesDownloaded                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BytesTotal                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetItemDownloadInfo(const struct FUWorksPublishedFileID& PublishedFileID, struct FString* BytesDownloaded, struct FString* BytesTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo");

	UUWorksInterfaceCoreUGC_GetItemDownloadInfo_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = params.BytesDownloaded;
	if (BytesTotal != nullptr)
		*BytesTotal = params.BytesTotal;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHighPriority                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::DownloadItem(const struct FUWorksPublishedFileID& PublishedFileID, bool bHighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem");

	UUWorksInterfaceCoreUGC_DownloadItem_Params params;
	params.PublishedFileID = PublishedFileID;
	params.bHighPriority = bHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUserUGCList  ListType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCType                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUserUGCListSortOrder SortOrder                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCQueryHandle   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUserUGCRequest(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksUserUGCList ListType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCType, UWorksCore_EUWorksUserUGCListSortOrder SortOrder, int CreatorAppID, int ConsumerAppID, int Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest");

	UUWorksInterfaceCoreUGC_CreateQueryUserUGCRequest_Params params;
	params.SteamID = SteamID;
	params.ListType = ListType;
	params.MatchingUGCType = MatchingUGCType;
	params.SortOrder = SortOrder;
	params.CreatorAppID = CreatorAppID;
	params.ConsumerAppID = ConsumerAppID;
	params.Page = Page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksPublishedFileID> PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            NumPublishedFileIDs            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCQueryHandle   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUGCDetailsRequest(TArray<struct FUWorksPublishedFileID> PublishedFileIDs, int NumPublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest");

	UUWorksInterfaceCoreUGC_CreateQueryUGCDetailsRequest_Params params;
	params.PublishedFileIDs = PublishedFileIDs;
	params.NumPublishedFileIDs = NumPublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksUGCQuery     QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCTypeFileType        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCQueryHandle   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryAllUGCRequest(UWorksCore_EUWorksUGCQuery QueryType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int CreatorAppID, int ConsumerAppID, int Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest");

	UUWorksInterfaceCoreUGC_CreateQueryAllUGCRequest_Params params;
	params.QueryType = QueryType;
	params.MatchingUGCTypeFileType = MatchingUGCTypeFileType;
	params.CreatorAppID = CreatorAppID;
	params.ConsumerAppID = ConsumerAppID;
	params.Page = Page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksWorkshopFileType FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::CreateItemMinimal(const struct FScriptDelegate& Completed, int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal");

	UUWorksInterfaceCoreUGC_CreateItemMinimal_Params params;
	params.Completed = Completed;
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreCreateItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreCreateItem* UUWorksInterfaceCoreUGC::CreateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem");

	UUWorksInterfaceCoreUGC_CreateItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WorkshopDepotID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Folder                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::BInitWorkshopForGameServer(int WorkshopDepotID, const struct FString& Folder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer");

	UUWorksInterfaceCoreUGC_BInitWorkshopForGameServer_Params params;
	params.WorkshopDepotID = WorkshopDepotID;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 TagName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddRequiredTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& TagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag");

	UUWorksInterfaceCoreUGC_AddRequiredTag_Params params;
	params.Handle = Handle;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddRequiredKeyValueTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag");

	UUWorksInterfaceCoreUGC_AddRequiredKeyValueTag_Params params;
	params.Handle = Handle;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::AddItemToFavoritesMinimal(const struct FScriptDelegate& Completed, int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal");

	UUWorksInterfaceCoreUGC_AddItemToFavoritesMinimal_Params params;
	params.Completed = Completed;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreAddItemToFavorites* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreAddItemToFavorites* UUWorksInterfaceCoreUGC::AddItemToFavorites()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites");

	UUWorksInterfaceCoreUGC_AddItemToFavorites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 VideoID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddItemPreviewVideo(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& VideoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo");

	UUWorksInterfaceCoreUGC_AddItemPreviewVideo_Params params;
	params.Handle = Handle;
	params.VideoID = VideoID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PreviewFile                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksItemPreviewType Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddItemPreviewFile(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& PreviewFile, UWorksCore_EUWorksItemPreviewType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile");

	UUWorksInterfaceCoreUGC_AddItemPreviewFile_Params params;
	params.Handle = Handle;
	params.PreviewFile = PreviewFile;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddItemKeyValueTag(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag");

	UUWorksInterfaceCoreUGC_AddItemKeyValueTag_Params params;
	params.Handle = Handle;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   Handle                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 TagName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddExcludedTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& TagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag");

	UUWorksInterfaceCoreUGC_AddExcludedTag_Params params;
	params.Handle = Handle;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUserHasLicenseForAppResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreUser::UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp");

	UUWorksInterfaceCoreUser_UserHasLicenseForApp_Params params;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreUser::StopVoiceRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording");

	UUWorksInterfaceCoreUser_StopVoiceRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreUser::StartVoiceRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording");

	UUWorksInterfaceCoreUser_StartVoiceRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::RequestStoreAuthURLMinimal(const struct FScriptDelegate& Completed, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal");

	UUWorksInterfaceCoreUser_RequestStoreAuthURLMinimal_Params params;
	params.Completed = Completed;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestStoreAuthURL* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestStoreAuthURL* UUWorksInterfaceCoreUser::RequestStoreAuthURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL");

	UUWorksInterfaceCoreUser_RequestStoreAuthURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::RequestEncryptedAppTicketMinimal(const struct FScriptDelegate& Completed, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal");

	UUWorksInterfaceCoreUser_RequestEncryptedAppTicketMinimal_Params params;
	params.Completed = Completed;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestEncryptedAppTicket* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestEncryptedAppTicket* UUWorksInterfaceCoreUser::RequestEncryptedAppTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket");

	UUWorksInterfaceCoreUser_RequestEncryptedAppTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* UUWorksInterfaceCoreUser::GetVoiceChannel(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel");

	UUWorksInterfaceCoreUser_GetVoiceChannel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetVoice
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksVoiceResult  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksVoiceResult UUWorksInterfaceCoreUser::GetVoice(TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetVoice");

	UUWorksInterfaceCoreUser_GetVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetUser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUser* UUWorksInterfaceCoreUser::STATIC_GetUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetUser");

	UUWorksInterfaceCoreUser_GetUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreUser::GetSteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID");

	UUWorksInterfaceCoreUser_GetSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUser::GetPlayerSteamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel");

	UUWorksInterfaceCoreUser_GetPlayerSteamLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamUser        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamUser UUWorksInterfaceCoreUser::GetHSteamUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser");

	UUWorksInterfaceCoreUser_GetHSteamUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Series                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoil                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUser::GetGameBadgeLevel(int Series, bool bFoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel");

	UUWorksInterfaceCoreUser_GetGameBadgeLevel_Params params;
	params.Series = Series;
	params.bFoil = bFoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Ticket                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::GetEncryptedAppTicket(TArray<unsigned char>* Ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket");

	UUWorksInterfaceCoreUser_GetEncryptedAppTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ticket != nullptr)
		*Ticket = params.Ticket;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Ticket                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksTicketHandle     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksTicketHandle UUWorksInterfaceCoreUser::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket");

	UUWorksInterfaceCoreUser_GetAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ticket != nullptr)
		*Ticket = params.Ticket;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::EndAuthSession(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession");

	UUWorksInterfaceCoreUser_EndAuthSession_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          CompressedBuffer               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          UncompressedBuffer             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksVoiceResult  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksVoiceResult UUWorksInterfaceCoreUser::DecompressVoice(TArray<unsigned char> CompressedBuffer, TArray<unsigned char>* UncompressedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice");

	UUWorksInterfaceCoreUser_DecompressVoice_Params params;
	params.CompressedBuffer = CompressedBuffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UncompressedBuffer != nullptr)
		*UncompressedBuffer = params.UncompressedBuffer;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksTicketHandle     TicketHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket");

	UUWorksInterfaceCoreUser_CancelAuthTicket_Params params;
	params.TicketHandle = TicketHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BLoggedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn");

	UUWorksInterfaceCoreUser_BLoggedOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsTwoFactorEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled");

	UUWorksInterfaceCoreUser_BIsTwoFactorEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsPhoneVerified()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified");

	UUWorksInterfaceCoreUser_BIsPhoneVerified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsPhoneRequiringVerification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification");

	UUWorksInterfaceCoreUser_BIsPhoneRequiringVerification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsPhoneIdentifying()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying");

	UUWorksInterfaceCoreUser_BIsPhoneIdentifying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsBehindNAT()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT");

	UUWorksInterfaceCoreUser_BIsBehindNAT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Ticket                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksBeginAuthSessionResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksBeginAuthSessionResult UUWorksInterfaceCoreUser::BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession");

	UUWorksInterfaceCoreUser_BeginAuthSession_Params params;
	params.Ticket = Ticket;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDGameServer              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ServerIP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ServerPort                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::AdvertiseGame(const struct FUWorksSteamID& SteamIDGameServer, const struct FString& ServerIP, int ServerPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame");

	UUWorksInterfaceCoreUser_AdvertiseGame_Params params;
	params.SteamIDGameServer = SteamIDGameServer;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* UUWorksInterfaceCoreUser::AddBufferToVoiceChannel(TArray<unsigned char> Buffer, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel");

	UUWorksInterfaceCoreUser_AddBufferToVoiceChannel_Params params;
	params.Buffer = Buffer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ScoreDetails                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::UploadLeaderboardScoreMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal");

	UUWorksInterfaceCoreUserStats_UploadLeaderboardScoreMinimal_Params params;
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
	params.Score = Score;
	params.ScoreDetails = ScoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreUploadLeaderboardScore* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreUploadLeaderboardScore* UUWorksInterfaceCoreUserStats::UploadLeaderboardScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore");

	UUWorksInterfaceCoreUserStats_UploadLeaderboardScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CountThisSession               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SessionLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::UpdateAvgRateStat(const struct FString& Name, float CountThisSession, float SessionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat");

	UUWorksInterfaceCoreUserStats_UpdateAvgRateStat_Params params;
	params.Name = Name;
	params.CountThisSession = CountThisSession;
	params.SessionLength = SessionLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::StoreStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats");

	UUWorksInterfaceCoreUserStats_StoreStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::SetStatAsInteger(const struct FString& Name, int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger");

	UUWorksInterfaceCoreUserStats_SetStatAsInteger_Params params;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::SetStatAsFloat(const struct FString& Name, float Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat");

	UUWorksInterfaceCoreUserStats_SetStatAsFloat_Params params;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::SetAchievement(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement");

	UUWorksInterfaceCoreUserStats_SetAchievement_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAchievementsToo               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::ResetAllStats(bool bAchievementsToo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats");

	UUWorksInterfaceCoreUserStats_ResetAllStats_Params params;
	params.bAchievementsToo = bAchievementsToo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::RequestUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal");

	UUWorksInterfaceCoreUserStats_RequestUserStatsMinimal_Params params;
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestUserStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestUserStats* UUWorksInterfaceCoreUserStats::RequestUserStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats");

	UUWorksInterfaceCoreUserStats_RequestUserStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            HistoryDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::RequestGlobalStatsMinimal(const struct FScriptDelegate& Completed, int HistoryDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal");

	UUWorksInterfaceCoreUserStats_RequestGlobalStatsMinimal_Params params;
	params.Completed = Completed;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestGlobalStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestGlobalStats* UUWorksInterfaceCoreUserStats::RequestGlobalStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats");

	UUWorksInterfaceCoreUserStats_RequestGlobalStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentagesMinimal(const struct FScriptDelegate& Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal");

	UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentagesMinimal_Params params;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreRequestGlobalAchievementPercentages* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestGlobalAchievementPercentages* UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages");

	UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::RequestCurrentStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats");

	UUWorksInterfaceCoreUserStats_RequestCurrentStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CurrentProgress                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxProgress                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::IndicateAchievementProgress(const struct FString& Name, int CurrentProgress, int MaxProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress");

	UUWorksInterfaceCoreUserStats_IndicateAchievementProgress_Params params;
	params.Name = Name;
	params.CurrentProgress = CurrentProgress;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreUserStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUserStats* UUWorksInterfaceCoreUserStats::STATIC_GetUserStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats");

	UUWorksInterfaceCoreUserStats_GetUserStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserStatInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger");

	UUWorksInterfaceCoreUserStats_GetUserStatInteger_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserStatFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat");

	UUWorksInterfaceCoreUserStats_GetUserStatFloat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UnlockTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserAchievementAndUnlockTime(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved, int* UnlockTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime");

	UUWorksInterfaceCoreUserStats_GetUserAchievementAndUnlockTime_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;
	if (UnlockTime != nullptr)
		*UnlockTime = params.UnlockTime;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement");

	UUWorksInterfaceCoreUserStats_GetUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetStatAsInteger(const struct FString& Name, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger");

	UUWorksInterfaceCoreUserStats_GetStatAsInteger_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetStatAsFloat(const struct FString& Name, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat");

	UUWorksInterfaceCoreUserStats_GetStatAsFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayersMinimal(const struct FScriptDelegate& Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal");

	UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayersMinimal_Params params;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreGetNumberOfCurrentPlayers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetNumberOfCurrentPlayers* UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers");

	UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetNumAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements");

	UUWorksInterfaceCoreUserStats_GetNumAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            IteratorPrevious               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NameBufferLength               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetNextMostAchievedAchievementInfo(int IteratorPrevious, struct FString* Name, int NameBufferLength, float* Percent, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo");

	UUWorksInterfaceCoreUserStats_GetNextMostAchievedAchievementInfo_Params params;
	params.IteratorPrevious = IteratorPrevious;
	params.NameBufferLength = NameBufferLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Percent != nullptr)
		*Percent = params.Percent;
	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NameBufferLength               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetMostAchievedAchievementInfo(struct FString* Name, int NameBufferLength, float* Percent, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo");

	UUWorksInterfaceCoreUserStats_GetMostAchievedAchievementInfo_Params params;
	params.NameBufferLength = NameBufferLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Percent != nullptr)
		*Percent = params.Percent;
	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardSortMethod ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksLeaderboardSortMethod UUWorksInterfaceCoreUserStats::GetLeaderboardSortMethod(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod");

	UUWorksInterfaceCoreUserStats_GetLeaderboardSortMethod_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUserStats::GetLeaderboardName(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName");

	UUWorksInterfaceCoreUserStats_GetLeaderboardName_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetLeaderboardEntryCount(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount");

	UUWorksInterfaceCoreUserStats_GetLeaderboardEntryCount_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDisplayType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksLeaderboardDisplayType UUWorksInterfaceCoreUserStats::GetLeaderboardDisplayType(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType");

	UUWorksInterfaceCoreUserStats_GetLeaderboardDisplayType_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            HistoryDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromIntegers(const struct FString& StatName, TArray<struct FString>* Data, int HistoryDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers");

	UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromIntegers_Params params;
	params.StatName = StatName;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            HistoryDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromFloats(const struct FString& StatName, TArray<struct FString>* Data, int HistoryDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats");

	UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromFloats_Params params;
	params.StatName = StatName;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Data                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromInteger(const struct FString& StatName, struct FString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger");

	UUWorksInterfaceCoreUserStats_GetGlobalStatFromInteger_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Data                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromFloat(const struct FString& StatName, struct FString* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat");

	UUWorksInterfaceCoreUserStats_GetGlobalStatFromFloat_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboardEntries SteamLeaderboardEntries        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksLeaderboardEntry LeaderboardEntry               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<int>                    Details                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            DetailsMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetDownloadedLeaderboardEntry(const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int Index, struct FUWorksLeaderboardEntry* LeaderboardEntry, TArray<int>* Details, int DetailsMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry");

	UUWorksInterfaceCoreUserStats_GetDownloadedLeaderboardEntry_Params params;
	params.SteamLeaderboardEntries = SteamLeaderboardEntries;
	params.Index = Index;
	params.DetailsMax = DetailsMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeaderboardEntry != nullptr)
		*LeaderboardEntry = params.LeaderboardEntry;
	if (Details != nullptr)
		*Details = params.Details;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Achievement                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUserStats::GetAchievementName(int Achievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName");

	UUWorksInterfaceCoreUserStats_GetAchievementName_Params params;
	params.Achievement = Achievement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreUserStats::GetAchievementIcon(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon");

	UUWorksInterfaceCoreUserStats_GetAchievementIcon_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUserStats::GetAchievementDisplayAttribute(const struct FString& Name, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute");

	UUWorksInterfaceCoreUserStats_GetAchievementDisplayAttribute_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UnlockTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetAchievementAndUnlockTime(const struct FString& Name, bool* bAchieved, int* UnlockTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime");

	UUWorksInterfaceCoreUserStats_GetAchievementAndUnlockTime_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;
	if (UnlockTime != nullptr)
		*UnlockTime = params.UnlockTime;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetAchievementAchievedPercent(const struct FString& Name, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent");

	UUWorksInterfaceCoreUserStats_GetAchievementAchievedPercent_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetAchievement(const struct FString& Name, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement");

	UUWorksInterfaceCoreUserStats_GetAchievement_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboardMinimal(const struct FScriptDelegate& Completed, const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal");

	UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboardMinimal_Params params;
	params.Completed = Completed;
	params.LeaderboardName = LeaderboardName;
	params.LeaderboardSortMethod = LeaderboardSortMethod;
	params.LeaderboardDisplayType = LeaderboardDisplayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreFindOrCreateLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFindOrCreateLeaderboard* UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard");

	UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::FindLeaderboardMinimal(const struct FScriptDelegate& Completed, const struct FString& LeaderboardName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal");

	UUWorksInterfaceCoreUserStats_FindLeaderboardMinimal_Params params;
	params.Completed = Completed;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreFindLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFindLeaderboard* UUWorksInterfaceCoreUserStats::FindLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard");

	UUWorksInterfaceCoreUserStats_FindLeaderboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesMinimal_Params params;
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardDataRequest = LeaderboardDataRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  Users                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsersMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsersMinimal_Params params;
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreDownloadLeaderboardEntries* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreDownloadLeaderboardEntries* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::ClearAchievement(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement");

	UUWorksInterfaceCoreUserStats_ClearAchievement_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Completed                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUGCHandle        UGCHandle                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::AttachLeaderboardUGCMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal");

	UUWorksInterfaceCoreUserStats_AttachLeaderboardUGCMinimal_Params params;
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUWorksRequestCoreAttachLeaderboardUGC* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreAttachLeaderboardUGC* UUWorksInterfaceCoreUserStats::AttachLeaderboardUGC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC");

	UUWorksInterfaceCoreUserStats_AttachLeaderboardUGC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard
// (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreUtils::StartVRDashboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard");

	UUWorksInterfaceCoreUtils_StartVRDashboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksGamepadTextInputMode InputMode                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksGamepadTextInputLineMode LineInputMode                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CharMax                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ExistingText                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::ShowGamepadTextInput(UWorksCore_EUWorksGamepadTextInputMode InputMode, UWorksCore_EUWorksGamepadTextInputLineMode LineInputMode, const struct FString& Description, int CharMax, const struct FString& ExistingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput");

	UUWorksInterfaceCoreUtils_ShowGamepadTextInput_Params params;
	params.InputMode = InputMode;
	params.LineInputMode = LineInputMode;
	params.Description = Description;
	params.CharMax = CharMax;
	params.ExistingText = ExistingText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksNotificationPosition NotificationPosition           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUtils::SetOverlayNotificationPosition(UWorksCore_EUWorksNotificationPosition NotificationPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition");

	UUWorksInterfaceCoreUtils_SetOverlayNotificationPosition_Params params;
	params.NotificationPosition = NotificationPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            HorizontalInset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VerticalInset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUtils::SetOverlayNotificationInset(int HorizontalInset, int VerticalInset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset");

	UUWorksInterfaceCoreUtils_SetOverlayNotificationInset_Params params;
	params.HorizontalInset = HorizontalInset;
	params.VerticalInset = VerticalInset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::IsSteamRunningInVR()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR");

	UUWorksInterfaceCoreUtils_IsSteamRunningInVR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::IsSteamInBigPictureMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode");

	UUWorksInterfaceCoreUtils_IsSteamInBigPictureMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::IsOverlayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled");

	UUWorksInterfaceCoreUtils_IsOverlayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksInterfaceCoreUtils* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUtils* UUWorksInterfaceCoreUtils::STATIC_GetUtils()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils");

	UUWorksInterfaceCoreUtils_GetUtils_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUtils::GetSteamUILanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage");

	UUWorksInterfaceCoreUtils_GetSteamUILanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetServerRealTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime");

	UUWorksInterfaceCoreUtils_GetServerRealTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetSecondsSinceComputerActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive");

	UUWorksInterfaceCoreUtils_GetSecondsSinceComputerActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetSecondsSinceAppActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive");

	UUWorksInterfaceCoreUtils_GetSecondsSinceAppActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUtils::GetIPCountry()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry");

	UUWorksInterfaceCoreUtils_GetIPCountry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetIPCCallCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount");

	UUWorksInterfaceCoreUtils_GetIPCCallCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetEnteredGamepadTextLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength");

	UUWorksInterfaceCoreUtils_GetEnteredGamepadTextLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TextMaxLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::GetEnteredGamepadTextInput(struct FString* Text, int TextMaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput");

	UUWorksInterfaceCoreUtils_GetEnteredGamepadTextInput_Params params;
	params.TextMaxLength = TextMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UUWorksInterfaceCoreUtils::GetCurrentBatteryPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower");

	UUWorksInterfaceCoreUtils_GetCurrentBatteryPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksUniverse     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUniverse UUWorksInterfaceCoreUtils::GetConnectedUniverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse");

	UUWorksInterfaceCoreUtils_GetConnectedUniverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetAppID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID");

	UUWorksInterfaceCoreUtils_GetAppID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::BOverlayNeedsPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent");

	UUWorksInterfaceCoreUtils_BOverlayNeedsPresent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFileDetails::SetInput(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput");

	UUWorksRequestCoreGetFileDetails_SetInput_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetFileDetails::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive");

	UUWorksRequestCoreGetFileDetails_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FileSHA                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    FileFlags                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFileDetails::GetOutput(UWorksCore_EUWorksResult* Result, int* FileSize, struct FString* FileSHA, TArray<int>* FileFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput");

	UUWorksRequestCoreGetFileDetails_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (FileSize != nullptr)
		*FileSize = params.FileSize;
	if (FileSHA != nullptr)
		*FileSHA = params.FileSHA;
	if (FileFlags != nullptr)
		*FileFlags = params.FileFlags;

}


// Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFileDetails::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate");

	UUWorksRequestCoreGetFileDetails_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFileDetails::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate");

	UUWorksRequestCoreGetFileDetails_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetPersonaName::SetInput(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput");

	UUWorksRequestCoreSetPersonaName_SetInput_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSetPersonaName::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive");

	UUWorksRequestCoreSetPersonaName_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLocalSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetPersonaName::GetOutput(bool* bSuccess, bool* bLocalSuccess, UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput");

	UUWorksRequestCoreSetPersonaName_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (bLocalSuccess != nullptr)
		*bLocalSuccess = params.bLocalSuccess;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetPersonaName::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate");

	UUWorksRequestCoreSetPersonaName_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetPersonaName::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate");

	UUWorksRequestCoreSetPersonaName_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksSteamID>  SteamIDClans                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadClanActivityCounts::SetInput(TArray<struct FUWorksSteamID> SteamIDClans)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput");

	UUWorksRequestCoreDownloadClanActivityCounts_SetInput_Params params;
	params.SteamIDClans = SteamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreDownloadClanActivityCounts::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive");

	UUWorksRequestCoreDownloadClanActivityCounts_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadClanActivityCounts::GetOutput(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput");

	UUWorksRequestCoreDownloadClanActivityCounts_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadClanActivityCounts::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate");

	UUWorksRequestCoreDownloadClanActivityCounts_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadClanActivityCounts::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate");

	UUWorksRequestCoreDownloadClanActivityCounts_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestClanOfficerList::SetInput(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput");

	UUWorksRequestCoreRequestClanOfficerList_SetInput_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestClanOfficerList::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive");

	UUWorksRequestCoreRequestClanOfficerList_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Officers                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestClanOfficerList::GetOutput(struct FUWorksSteamID* SteamIDClan, int* Officers, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput");

	UUWorksRequestCoreRequestClanOfficerList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDClan != nullptr)
		*SteamIDClan = params.SteamIDClan;
	if (Officers != nullptr)
		*Officers = params.Officers;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestClanOfficerList::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate");

	UUWorksRequestCoreRequestClanOfficerList_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestClanOfficerList::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate");

	UUWorksRequestCoreRequestClanOfficerList_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinClanChatRoom::SetInput(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput");

	UUWorksRequestCoreJoinClanChatRoom_SetInput_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreJoinClanChatRoom::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive");

	UUWorksRequestCoreJoinClanChatRoom_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamIDClanChat                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinClanChatRoom::GetOutput(struct FUWorksSteamID* SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput");

	UUWorksRequestCoreJoinClanChatRoom_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDClanChat != nullptr)
		*SteamIDClanChat = params.SteamIDClanChat;
	if (ChatRoomEnterResponse != nullptr)
		*ChatRoomEnterResponse = params.ChatRoomEnterResponse;

}


// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinClanChatRoom::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate");

	UUWorksRequestCoreJoinClanChatRoom_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinClanChatRoom::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate");

	UUWorksRequestCoreJoinClanChatRoom_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFollowerCount::SetInput(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput");

	UUWorksRequestCoreGetFollowerCount_SetInput_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetFollowerCount::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive");

	UUWorksRequestCoreGetFollowerCount_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFollowerCount::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput");

	UUWorksRequestCoreGetFollowerCount_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFollowerCount::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate");

	UUWorksRequestCoreGetFollowerCount_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFollowerCount::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate");

	UUWorksRequestCoreGetFollowerCount_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreIsFollowing::SetInput(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput");

	UUWorksRequestCoreIsFollowing_SetInput_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreIsFollowing::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive");

	UUWorksRequestCoreIsFollowing_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsFollowing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreIsFollowing::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, bool* bIsFollowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput");

	UUWorksRequestCoreIsFollowing_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (bIsFollowing != nullptr)
		*bIsFollowing = params.bIsFollowing;

}


// Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreIsFollowing::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate");

	UUWorksRequestCoreIsFollowing_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreIsFollowing.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreIsFollowing::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.Activate");

	UUWorksRequestCoreIsFollowing_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreEnumerateFollowingList::SetInput(int StartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput");

	UUWorksRequestCoreEnumerateFollowingList_SetInput_Params params;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreEnumerateFollowingList::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive");

	UUWorksRequestCoreEnumerateFollowingList_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  SteamIDs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ResultsReturned                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TotalResultCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreEnumerateFollowingList::GetOutput(UWorksCore_EUWorksResult* Result, TArray<struct FUWorksSteamID>* SteamIDs, int* ResultsReturned, int* TotalResultCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput");

	UUWorksRequestCoreEnumerateFollowingList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDs != nullptr)
		*SteamIDs = params.SteamIDs;
	if (ResultsReturned != nullptr)
		*ResultsReturned = params.ResultsReturned;
	if (TotalResultCount != nullptr)
		*TotalResultCount = params.TotalResultCount;

}


// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreEnumerateFollowingList::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate");

	UUWorksRequestCoreEnumerateFollowingList_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreEnumerateFollowingList::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate");

	UUWorksRequestCoreEnumerateFollowingList_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAssociateWithClan::SetInput(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput");

	UUWorksRequestCoreAssociateWithClan_SetInput_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreAssociateWithClan::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive");

	UUWorksRequestCoreAssociateWithClan_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAssociateWithClan::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput");

	UUWorksRequestCoreAssociateWithClan_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAssociateWithClan::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate");

	UUWorksRequestCoreAssociateWithClan_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAssociateWithClan::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate");

	UUWorksRequestCoreAssociateWithClan_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDNewPlayer               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreComputeNewPlayerCompatibility::SetInput(const struct FUWorksSteamID& SteamIDNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput");

	UUWorksRequestCoreComputeNewPlayerCompatibility_SetInput_Params params;
	params.SteamIDNewPlayer = SteamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreComputeNewPlayerCompatibility::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive");

	UUWorksRequestCoreComputeNewPlayerCompatibility_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayersThatDontLikeCandidate   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayersThatCandidateDoesntLike (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ClanPlayersThatDontLikeCandidate (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDCandidate               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreComputeNewPlayerCompatibility::GetOutput(UWorksCore_EUWorksResult* Result, int* PlayersThatDontLikeCandidate, int* PlayersThatCandidateDoesntLike, int* ClanPlayersThatDontLikeCandidate, struct FUWorksSteamID* SteamIDCandidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput");

	UUWorksRequestCoreComputeNewPlayerCompatibility_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PlayersThatDontLikeCandidate != nullptr)
		*PlayersThatDontLikeCandidate = params.PlayersThatDontLikeCandidate;
	if (PlayersThatCandidateDoesntLike != nullptr)
		*PlayersThatCandidateDoesntLike = params.PlayersThatCandidateDoesntLike;
	if (ClanPlayersThatDontLikeCandidate != nullptr)
		*ClanPlayersThatDontLikeCandidate = params.ClanPlayersThatDontLikeCandidate;
	if (SteamIDCandidate != nullptr)
		*SteamIDCandidate = params.SteamIDCandidate;

}


// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreComputeNewPlayerCompatibility::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate");

	UUWorksRequestCoreComputeNewPlayerCompatibility_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreComputeNewPlayerCompatibility::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate");

	UUWorksRequestCoreComputeNewPlayerCompatibility_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStatsGS::SetInput(const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput");

	UUWorksRequestCoreRequestUserStatsGS_SetInput_Params params;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestUserStatsGS::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive");

	UUWorksRequestCoreRequestUserStatsGS_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStatsGS::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput");

	UUWorksRequestCoreRequestUserStatsGS_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStatsGS::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate");

	UUWorksRequestCoreRequestUserStatsGS_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStatsGS::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate");

	UUWorksRequestCoreRequestUserStatsGS_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStoreUserStats::SetInput(const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput");

	UUWorksRequestCoreStoreUserStats_SetInput_Params params;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStoreUserStats::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive");

	UUWorksRequestCoreStoreUserStats_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStoreUserStats::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput");

	UUWorksRequestCoreStoreUserStats_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;

}


// Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStoreUserStats::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate");

	UUWorksRequestCoreStoreUserStats_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStoreUserStats::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate");

	UUWorksRequestCoreStoreUserStats_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::SetInput(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_SetInput_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumEligiblePromoItemsDefinitionsIDs (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCachedData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, int* NumEligiblePromoItemsDefinitionsIDs, bool* bCachedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (NumEligiblePromoItemsDefinitionsIDs != nullptr)
		*NumEligiblePromoItemsDefinitionsIDs = params.NumEligiblePromoItemsDefinitionsIDs;
	if (bCachedData != nullptr)
		*bCachedData = params.bCachedData;

}


// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestLobbyList::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive");

	UUWorksRequestCoreRequestLobbyList_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            LobbiesMatching                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestLobbyList::GetOutput(int* LobbiesMatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput");

	UUWorksRequestCoreRequestLobbyList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbiesMatching != nullptr)
		*LobbiesMatching = params.LobbiesMatching;

}


// Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestLobbyList::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate");

	UUWorksRequestCoreRequestLobbyList_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestLobbyList::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate");

	UUWorksRequestCoreRequestLobbyList_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksLobbyType    LobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateLobby::SetInput(UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput");

	UUWorksRequestCoreCreateLobby_SetInput_Params params;
	params.LobbyType = LobbyType;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreCreateLobby::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive");

	UUWorksRequestCoreCreateLobby_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDLobby                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateLobby::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput");

	UUWorksRequestCoreCreateLobby_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;

}


// Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateLobby::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate");

	UUWorksRequestCoreCreateLobby_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreCreateLobby.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateLobby::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.Activate");

	UUWorksRequestCoreCreateLobby_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinLobby::SetInput(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput");

	UUWorksRequestCoreJoinLobby_SetInput_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreJoinLobby::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive");

	UUWorksRequestCoreJoinLobby_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          ChatPermissions                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinLobby::GetOutput(struct FUWorksSteamID* SteamIDLobby, TArray<unsigned char>* ChatPermissions, bool* bLocked, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput");

	UUWorksRequestCoreJoinLobby_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;
	if (ChatPermissions != nullptr)
		*ChatPermissions = params.ChatPermissions;
	if (bLocked != nullptr)
		*bLocked = params.bLocked;
	if (ChatRoomEnterResponse != nullptr)
		*ChatRoomEnterResponse = params.ChatRoomEnterResponse;

}


// Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinLobby::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate");

	UUWorksRequestCoreJoinLobby_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreJoinLobby.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinLobby::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.Activate");

	UUWorksRequestCoreJoinLobby_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksServerQueryType QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::SetInput(int AppID, UWorksCore_EUWorksServerQueryType QueryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.SetInput");

	UUWorksRequestCoreServerList_SetInput_Params params;
	params.AppID = AppID;
	params.QueryType = QueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreServerList::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.IsActive");

	UUWorksRequestCoreServerList_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreServerList.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksServerInfo       UpdatedServer                  (Parm, OutParm, NativeAccessSpecifierPublic)
// TArray<struct FUWorksServerInfo> Servers                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::GetOutput(struct FUWorksServerInfo* UpdatedServer, TArray<struct FUWorksServerInfo>* Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.GetOutput");

	UUWorksRequestCoreServerList_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpdatedServer != nullptr)
		*UpdatedServer = params.UpdatedServer;
	if (Servers != nullptr)
		*Servers = params.Servers;

}


// Function UWorksCore.UWorksRequestCoreServerList.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.Deactivate");

	UUWorksRequestCoreServerList_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterSecure()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure");

	UUWorksRequestCoreServerList_AddFilterSecure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterOr(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr");

	UUWorksRequestCoreServerList_AddFilterOr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterNotFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull");

	UUWorksRequestCoreServerList_AddFilterNotFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterNor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor");

	UUWorksRequestCoreServerList_AddFilterNor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterNoPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers");

	UUWorksRequestCoreServerList_AddFilterNoPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterNand(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand");

	UUWorksRequestCoreServerList_AddFilterNand_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterMap(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap");

	UUWorksRequestCoreServerList_AddFilterMap_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterLinux()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux");

	UUWorksRequestCoreServerList_AddFilterLinux_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterHasPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers");

	UUWorksRequestCoreServerList_AddFilterHasPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameTagsNor(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor");

	UUWorksRequestCoreServerList_AddFilterGameTagsNor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameTagsAnd(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd");

	UUWorksRequestCoreServerList_AddFilterGameTagsAnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameDataOr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr");

	UUWorksRequestCoreServerList_AddFilterGameDataOr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameDataNor(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor");

	UUWorksRequestCoreServerList_AddFilterGameDataNor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameDataAnd(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd");

	UUWorksRequestCoreServerList_AddFilterGameDataAnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameAddr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr");

	UUWorksRequestCoreServerList_AddFilterGameAddr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated");

	UUWorksRequestCoreServerList_AddFilterDedicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterAnd(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd");

	UUWorksRequestCoreServerList_AddFilterAnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterAddr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr");

	UUWorksRequestCoreServerList_AddFilterAddr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreServerList.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.Activate");

	UUWorksRequestCoreServerList_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCorePing.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCorePing::SetInput(const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.SetInput");

	UUWorksRequestCorePing_SetInput_Params params;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCorePing.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCorePing::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.IsActive");

	UUWorksRequestCorePing_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCorePing.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksServerInfo       Server                         (Parm, OutParm, NativeAccessSpecifierPublic)
void UUWorksRequestCorePing::GetOutput(struct FUWorksServerInfo* Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.GetOutput");

	UUWorksRequestCorePing_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Server != nullptr)
		*Server = params.Server;

}


// Function UWorksCore.UWorksRequestCorePing.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCorePing::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.Deactivate");

	UUWorksRequestCorePing_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCorePing.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCorePing::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.Activate");

	UUWorksRequestCorePing_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCorePlayers.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCorePlayers::SetInput(const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.SetInput");

	UUWorksRequestCorePlayers_SetInput_Params params;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCorePlayers.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCorePlayers::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.IsActive");

	UUWorksRequestCorePlayers_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCorePlayers.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksPlayerInfo       UpdatedPlayer                  (Parm, OutParm, NativeAccessSpecifierPublic)
// TArray<struct FUWorksPlayerInfo> Players                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCorePlayers::GetOutput(struct FUWorksPlayerInfo* UpdatedPlayer, TArray<struct FUWorksPlayerInfo>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.GetOutput");

	UUWorksRequestCorePlayers_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpdatedPlayer != nullptr)
		*UpdatedPlayer = params.UpdatedPlayer;
	if (Players != nullptr)
		*Players = params.Players;

}


// Function UWorksCore.UWorksRequestCorePlayers.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCorePlayers::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.Deactivate");

	UUWorksRequestCorePlayers_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCorePlayers.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCorePlayers::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.Activate");

	UUWorksRequestCorePlayers_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRules.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRules::SetInput(const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.SetInput");

	UUWorksRequestCoreRules_SetInput_Params params;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRules.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRules::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.IsActive");

	UUWorksRequestCoreRules_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRules.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksRuleInfo         UpdatedRule                    (Parm, OutParm, NativeAccessSpecifierPublic)
// TArray<struct FUWorksRuleInfo> Rules                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRules::GetOutput(struct FUWorksRuleInfo* UpdatedRule, TArray<struct FUWorksRuleInfo>* Rules)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.GetOutput");

	UUWorksRequestCoreRules_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpdatedRule != nullptr)
		*UpdatedRule = params.UpdatedRule;
	if (Rules != nullptr)
		*Rules = params.Rules;

}


// Function UWorksCore.UWorksRequestCoreRules.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRules::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.Deactivate");

	UUWorksRequestCoreRules_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRules.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRules::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.Activate");

	UUWorksRequestCoreRules_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileWriteAsync::SetInput(const struct FString& File, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput");

	UUWorksRequestCoreFileWriteAsync_SetInput_Params params;
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFileWriteAsync::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive");

	UUWorksRequestCoreFileWriteAsync_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileWriteAsync::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput");

	UUWorksRequestCoreFileWriteAsync_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileWriteAsync::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate");

	UUWorksRequestCoreFileWriteAsync_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileWriteAsync::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate");

	UUWorksRequestCoreFileWriteAsync_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BytesToRead                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileReadAsync::SetInput(const struct FString& File, int Offset, int BytesToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput");

	UUWorksRequestCoreFileReadAsync_SetInput_Params params;
	params.File = File;
	params.Offset = Offset;
	params.BytesToRead = BytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFileReadAsync::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive");

	UUWorksRequestCoreFileReadAsync_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileReadAsync::GetOutput(UWorksCore_EUWorksResult* Result, int* Offset, TArray<unsigned char>* Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput");

	UUWorksRequestCoreFileReadAsync_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Buffer != nullptr)
		*Buffer = params.Buffer;

}


// Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileReadAsync::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate");

	UUWorksRequestCoreFileReadAsync_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileReadAsync::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate");

	UUWorksRequestCoreFileReadAsync_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   UGCQueryHandle                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSendQueryUGCRequest::SetInput(const struct FUWorksUGCQueryHandle& UGCQueryHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput");

	UUWorksRequestCoreSendQueryUGCRequest_SetInput_Params params;
	params.UGCQueryHandle = UGCQueryHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSendQueryUGCRequest::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive");

	UUWorksRequestCoreSendQueryUGCRequest_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksUGCQueryHandle   UGCQueryHandle                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumResultsReturned             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TotalMatchingResults           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCachedData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSendQueryUGCRequest::GetOutput(struct FUWorksUGCQueryHandle* UGCQueryHandle, UWorksCore_EUWorksResult* Result, int* NumResultsReturned, int* TotalMatchingResults, bool* bCachedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput");

	UUWorksRequestCoreSendQueryUGCRequest_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UGCQueryHandle != nullptr)
		*UGCQueryHandle = params.UGCQueryHandle;
	if (Result != nullptr)
		*Result = params.Result;
	if (NumResultsReturned != nullptr)
		*NumResultsReturned = params.NumResultsReturned;
	if (TotalMatchingResults != nullptr)
		*TotalMatchingResults = params.TotalMatchingResults;
	if (bCachedData != nullptr)
		*bCachedData = params.bCachedData;

}


// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSendQueryUGCRequest::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate");

	UUWorksRequestCoreSendQueryUGCRequest_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSendQueryUGCRequest::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate");

	UUWorksRequestCoreSendQueryUGCRequest_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreCreateItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksWorkshopFileType FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateItem::SetInput(int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.SetInput");

	UUWorksRequestCoreCreateItem_SetInput_Params params;
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreCreateItem.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreCreateItem::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.IsActive");

	UUWorksRequestCoreCreateItem_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUserNeedsToAcceptWorkshopLegalAgreement (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateItem::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID, bool* bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput");

	UUWorksRequestCoreCreateItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (bUserNeedsToAcceptWorkshopLegalAgreement != nullptr)
		*bUserNeedsToAcceptWorkshopLegalAgreement = params.bUserNeedsToAcceptWorkshopLegalAgreement;

}


// Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateItem::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate");

	UUWorksRequestCoreCreateItem_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreCreateItem.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateItem::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.Activate");

	UUWorksRequestCoreCreateItem_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  UGCUpdateHandle                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ChangeNote                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubmitItemUpdate::SetInput(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput");

	UUWorksRequestCoreSubmitItemUpdate_SetInput_Params params;
	params.UGCUpdateHandle = UGCUpdateHandle;
	params.ChangeNote = ChangeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSubmitItemUpdate::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive");

	UUWorksRequestCoreSubmitItemUpdate_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUserNeedsToAcceptWorkshopLegalAgreement (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubmitItemUpdate::GetOutput(UWorksCore_EUWorksResult* Result, bool* bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput");

	UUWorksRequestCoreSubmitItemUpdate_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bUserNeedsToAcceptWorkshopLegalAgreement != nullptr)
		*bUserNeedsToAcceptWorkshopLegalAgreement = params.bUserNeedsToAcceptWorkshopLegalAgreement;

}


// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubmitItemUpdate::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate");

	UUWorksRequestCoreSubmitItemUpdate_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubmitItemUpdate::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate");

	UUWorksRequestCoreSubmitItemUpdate_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetUserItemVote::SetInput(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput");

	UUWorksRequestCoreSetUserItemVote_SetInput_Params params;
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSetUserItemVote::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive");

	UUWorksRequestCoreSetUserItemVote_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetUserItemVote::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput");

	UUWorksRequestCoreSetUserItemVote_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bVoteUp != nullptr)
		*bVoteUp = params.bVoteUp;

}


// Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetUserItemVote::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate");

	UUWorksRequestCoreSetUserItemVote_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetUserItemVote::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate");

	UUWorksRequestCoreSetUserItemVote_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetUserItemVote::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput");

	UUWorksRequestCoreGetUserItemVote_SetInput_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetUserItemVote::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive");

	UUWorksRequestCoreGetUserItemVote_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVotedUp                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVotedDown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteSkipped                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetUserItemVote::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bVotedUp, bool* bVotedDown, bool* bVoteSkipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput");

	UUWorksRequestCoreGetUserItemVote_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bVotedUp != nullptr)
		*bVotedUp = params.bVotedUp;
	if (bVotedDown != nullptr)
		*bVotedDown = params.bVotedDown;
	if (bVoteSkipped != nullptr)
		*bVoteSkipped = params.bVoteSkipped;

}


// Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetUserItemVote::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate");

	UUWorksRequestCoreGetUserItemVote_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetUserItemVote::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate");

	UUWorksRequestCoreGetUserItemVote_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAddItemToFavorites::SetInput(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput");

	UUWorksRequestCoreAddItemToFavorites_SetInput_Params params;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreAddItemToFavorites::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive");

	UUWorksRequestCoreAddItemToFavorites_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasAddRequest                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAddItemToFavorites::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bWasAddRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput");

	UUWorksRequestCoreAddItemToFavorites_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bWasAddRequest != nullptr)
		*bWasAddRequest = params.bWasAddRequest;

}


// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAddItemToFavorites::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate");

	UUWorksRequestCoreAddItemToFavorites_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAddItemToFavorites::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate");

	UUWorksRequestCoreAddItemToFavorites_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRemoveItemFromFavorites::SetInput(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput");

	UUWorksRequestCoreRemoveItemFromFavorites_SetInput_Params params;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRemoveItemFromFavorites::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive");

	UUWorksRequestCoreRemoveItemFromFavorites_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasAddRequest                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRemoveItemFromFavorites::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bWasAddRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput");

	UUWorksRequestCoreRemoveItemFromFavorites_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bWasAddRequest != nullptr)
		*bWasAddRequest = params.bWasAddRequest;

}


// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRemoveItemFromFavorites::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate");

	UUWorksRequestCoreRemoveItemFromFavorites_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRemoveItemFromFavorites::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate");

	UUWorksRequestCoreRemoveItemFromFavorites_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubscribeItem::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput");

	UUWorksRequestCoreSubscribeItem_SetInput_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSubscribeItem::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive");

	UUWorksRequestCoreSubscribeItem_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubscribeItem::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput");

	UUWorksRequestCoreSubscribeItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;

}


// Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubscribeItem::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate");

	UUWorksRequestCoreSubscribeItem_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubscribeItem::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate");

	UUWorksRequestCoreSubscribeItem_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUnsubscribeItem::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput");

	UUWorksRequestCoreUnsubscribeItem_SetInput_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreUnsubscribeItem::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive");

	UUWorksRequestCoreUnsubscribeItem_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUnsubscribeItem::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput");

	UUWorksRequestCoreUnsubscribeItem_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;

}


// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUnsubscribeItem::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate");

	UUWorksRequestCoreUnsubscribeItem_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUnsubscribeItem::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate");

	UUWorksRequestCoreUnsubscribeItem_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksPublishedFileID> PublishedFileID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStartPlaytimeTracking::SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput");

	UUWorksRequestCoreStartPlaytimeTracking_SetInput_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStartPlaytimeTracking::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive");

	UUWorksRequestCoreStartPlaytimeTracking_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStartPlaytimeTracking::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput");

	UUWorksRequestCoreStartPlaytimeTracking_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStartPlaytimeTracking::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate");

	UUWorksRequestCoreStartPlaytimeTracking_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStartPlaytimeTracking::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate");

	UUWorksRequestCoreStartPlaytimeTracking_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksPublishedFileID> PublishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStopPlaytimeTracking::SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput");

	UUWorksRequestCoreStopPlaytimeTracking_SetInput_Params params;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStopPlaytimeTracking::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive");

	UUWorksRequestCoreStopPlaytimeTracking_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStopPlaytimeTracking::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput");

	UUWorksRequestCoreStopPlaytimeTracking_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTracking::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate");

	UUWorksRequestCoreStopPlaytimeTracking_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTracking::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate");

	UUWorksRequestCoreStopPlaytimeTracking_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStopPlaytimeTrackingForAllItems::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEncryptedAppTicket::SetInput(TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput");

	UUWorksRequestCoreRequestEncryptedAppTicket_SetInput_Params params;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestEncryptedAppTicket::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive");

	UUWorksRequestCoreRequestEncryptedAppTicket_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEncryptedAppTicket::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput");

	UUWorksRequestCoreRequestEncryptedAppTicket_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEncryptedAppTicket::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate");

	UUWorksRequestCoreRequestEncryptedAppTicket_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEncryptedAppTicket::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate");

	UUWorksRequestCoreRequestEncryptedAppTicket_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestStoreAuthURL::SetInput(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput");

	UUWorksRequestCoreRequestStoreAuthURL_SetInput_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestStoreAuthURL::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive");

	UUWorksRequestCoreRequestStoreAuthURL_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 URL                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestStoreAuthURL::GetOutput(struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput");

	UUWorksRequestCoreRequestStoreAuthURL_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URL != nullptr)
		*URL = params.URL;

}


// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestStoreAuthURL::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate");

	UUWorksRequestCoreRequestStoreAuthURL_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestStoreAuthURL::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate");

	UUWorksRequestCoreRequestStoreAuthURL_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStats::SetInput(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput");

	UUWorksRequestCoreRequestUserStats_SetInput_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestUserStats::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive");

	UUWorksRequestCoreRequestUserStats_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStats::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput");

	UUWorksRequestCoreRequestUserStats_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStats::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate");

	UUWorksRequestCoreRequestUserStats_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStats::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate");

	UUWorksRequestCoreRequestUserStats_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindOrCreateLeaderboard::SetInput(const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput");

	UUWorksRequestCoreFindOrCreateLeaderboard_SetInput_Params params;
	params.LeaderboardName = LeaderboardName;
	params.LeaderboardSortMethod = LeaderboardSortMethod;
	params.LeaderboardDisplayType = LeaderboardDisplayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFindOrCreateLeaderboard::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive");

	UUWorksRequestCoreFindOrCreateLeaderboard_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bLeaderboardFound              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindOrCreateLeaderboard::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput");

	UUWorksRequestCoreFindOrCreateLeaderboard_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (bLeaderboardFound != nullptr)
		*bLeaderboardFound = params.bLeaderboardFound;

}


// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindOrCreateLeaderboard::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate");

	UUWorksRequestCoreFindOrCreateLeaderboard_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindOrCreateLeaderboard::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate");

	UUWorksRequestCoreFindOrCreateLeaderboard_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindLeaderboard::SetInput(const struct FString& LeaderboardName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput");

	UUWorksRequestCoreFindLeaderboard_SetInput_Params params;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFindLeaderboard::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive");

	UUWorksRequestCoreFindLeaderboard_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bLeaderboardFound              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindLeaderboard::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput");

	UUWorksRequestCoreFindLeaderboard_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (bLeaderboardFound != nullptr)
		*bLeaderboardFound = params.bLeaderboardFound;

}


// Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindLeaderboard::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate");

	UUWorksRequestCoreFindLeaderboard_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindLeaderboard::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate");

	UUWorksRequestCoreFindLeaderboard_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntries::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput");

	UUWorksRequestCoreDownloadLeaderboardEntries_SetInput_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardDataRequest = LeaderboardDataRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreDownloadLeaderboardEntries::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive");

	UUWorksRequestCoreDownloadLeaderboardEntries_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboardEntries SteamLeaderboardEntries        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntries::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int* EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput");

	UUWorksRequestCoreDownloadLeaderboardEntries_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (SteamLeaderboardEntries != nullptr)
		*SteamLeaderboardEntries = params.SteamLeaderboardEntries;
	if (EntryCount != nullptr)
		*EntryCount = params.EntryCount;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntries::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate");

	UUWorksRequestCoreDownloadLeaderboardEntries_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntries::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate");

	UUWorksRequestCoreDownloadLeaderboardEntries_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  Users                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_SetInput_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboardEntries SteamLeaderboardEntries        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int* EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (SteamLeaderboardEntries != nullptr)
		*SteamLeaderboardEntries = params.SteamLeaderboardEntries;
	if (EntryCount != nullptr)
		*EntryCount = params.EntryCount;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ScoreDetails                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUploadLeaderboardScore::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput");

	UUWorksRequestCoreUploadLeaderboardScore_SetInput_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
	params.Score = Score;
	params.ScoreDetails = ScoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreUploadLeaderboardScore::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive");

	UUWorksRequestCoreUploadLeaderboardScore_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bScoreChanged                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GlobalRankNew                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GlobalRankPrevious             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUploadLeaderboardScore::GetOutput(bool* bSuccess, struct FUWorksSteamLeaderboard* SteamLeaderboard, int* Score, bool* bScoreChanged, int* GlobalRankNew, int* GlobalRankPrevious)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput");

	UUWorksRequestCoreUploadLeaderboardScore_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (Score != nullptr)
		*Score = params.Score;
	if (bScoreChanged != nullptr)
		*bScoreChanged = params.bScoreChanged;
	if (GlobalRankNew != nullptr)
		*GlobalRankNew = params.GlobalRankNew;
	if (GlobalRankPrevious != nullptr)
		*GlobalRankPrevious = params.GlobalRankPrevious;

}


// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUploadLeaderboardScore::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate");

	UUWorksRequestCoreUploadLeaderboardScore_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUploadLeaderboardScore::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate");

	UUWorksRequestCoreUploadLeaderboardScore_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUGCHandle        UGCHandle                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAttachLeaderboardUGC::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput");

	UUWorksRequestCoreAttachLeaderboardUGC_SetInput_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreAttachLeaderboardUGC::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive");

	UUWorksRequestCoreAttachLeaderboardUGC_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAttachLeaderboardUGC::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamLeaderboard* SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput");

	UUWorksRequestCoreAttachLeaderboardUGC_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;

}


// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAttachLeaderboardUGC::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate");

	UUWorksRequestCoreAttachLeaderboardUGC_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAttachLeaderboardUGC::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate");

	UUWorksRequestCoreAttachLeaderboardUGC_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetNumberOfCurrentPlayers::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Players                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetNumberOfCurrentPlayers::GetOutput(bool* bSuccess, int* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (Players != nullptr)
		*Players = params.Players;

}


// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetNumberOfCurrentPlayers::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetNumberOfCurrentPlayers::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestGlobalAchievementPercentages::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestGlobalAchievementPercentages::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalAchievementPercentages::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalAchievementPercentages::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            HistoryDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestGlobalStats::SetInput(int HistoryDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput");

	UUWorksRequestCoreRequestGlobalStats_SetInput_Params params;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestGlobalStats::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive");

	UUWorksRequestCoreRequestGlobalStats_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestGlobalStats::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput");

	UUWorksRequestCoreRequestGlobalStats_GetOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalStats::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate");

	UUWorksRequestCoreRequestGlobalStats_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate
// (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalStats::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate");

	UUWorksRequestCoreRequestGlobalStats_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FileSHA                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    FileFlags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreGetFileDetailsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int FileSize, const struct FString& FileSHA, TArray<int> FileFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted");

	UCoreGetFileDetailsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.FileSize = FileSize;
	params.FileSHA = FileSHA;
	params.FileFlags = FileFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreGetFileDetailsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetFileDetailsNode* UCoreGetFileDetailsNode::STATIC_GetFileDetailsNode(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode");

	UCoreGetFileDetailsNode_GetFileDetailsNode_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreSetPersonaNameNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSetPersonaNameNode* UCoreSetPersonaNameNode::STATIC_SetPersonaNameNode(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode");

	UCoreSetPersonaNameNode_SetPersonaNameNode_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLocalSuccess                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSetPersonaNameNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted");

	UCoreSetPersonaNameNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;
	params.bLocalSuccess = bLocalSuccess;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreDownloadClanActivityCountsNode::OnRequestCompleted(bool bSuccessful, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted");

	UCoreDownloadClanActivityCountsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksSteamID>  SteamIDClans                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreDownloadClanActivityCountsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreDownloadClanActivityCountsNode* UCoreDownloadClanActivityCountsNode::STATIC_DownloadClanActivityCountsNode(TArray<struct FUWorksSteamID> SteamIDClans)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode");

	UCoreDownloadClanActivityCountsNode_DownloadClanActivityCountsNode_Params params;
	params.SteamIDClans = SteamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRequestClanOfficerListNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestClanOfficerListNode* UCoreRequestClanOfficerListNode::STATIC_RequestClanOfficerListNode(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode");

	UCoreRequestClanOfficerListNode_RequestClanOfficerListNode_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Officers                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestClanOfficerListNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClan, int Officers, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted");

	UCoreRequestClanOfficerListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamIDClan = SteamIDClan;
	params.Officers = Officers;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreJoinClanChatRoomNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted");

	UCoreJoinClanChatRoomNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamIDClanChat = SteamIDClanChat;
	params.ChatRoomEnterResponse = ChatRoomEnterResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreJoinClanChatRoomNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreJoinClanChatRoomNode* UCoreJoinClanChatRoomNode::STATIC_JoinClanChatRoomNode(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode");

	UCoreJoinClanChatRoomNode_JoinClanChatRoomNode_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGetFollowerCountNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted");

	UCoreGetFollowerCountNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamID = SteamID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreGetFollowerCountNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetFollowerCountNode* UCoreGetFollowerCountNode::STATIC_GetFollowerCountNode(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode");

	UCoreGetFollowerCountNode_GetFollowerCountNode_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsFollowing                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreIsFollowingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, bool bIsFollowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted");

	UCoreIsFollowingNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamID = SteamID;
	params.bIsFollowing = bIsFollowing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreIsFollowingNode.IsFollowingNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreIsFollowingNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreIsFollowingNode* UCoreIsFollowingNode::STATIC_IsFollowingNode(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreIsFollowingNode.IsFollowingNode");

	UCoreIsFollowingNode_IsFollowingNode_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  SteamIDs                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ResultsReturned                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TotalResultCount               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreEnumerateFollowingListNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, TArray<struct FUWorksSteamID> SteamIDs, int ResultsReturned, int TotalResultCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted");

	UCoreEnumerateFollowingListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDs = SteamIDs;
	params.ResultsReturned = ResultsReturned;
	params.TotalResultCount = TotalResultCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreEnumerateFollowingListNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreEnumerateFollowingListNode* UCoreEnumerateFollowingListNode::STATIC_EnumerateFollowingListNode(int StartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode");

	UCoreEnumerateFollowingListNode_EnumerateFollowingListNode_Params params;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreAssociateWithClanNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted");

	UCoreAssociateWithClanNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreAssociateWithClanNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreAssociateWithClanNode* UCoreAssociateWithClanNode::STATIC_AssociateWithClanNode(const struct FUWorksSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode");

	UCoreAssociateWithClanNode_AssociateWithClanNode_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayersThatDontLikeCandidate   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayersThatCandidateDoesntLike (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ClanPlayersThatDontLikeCandidate (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDCandidate               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreComputeNewPlayerCompatibilityNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int PlayersThatDontLikeCandidate, int PlayersThatCandidateDoesntLike, int ClanPlayersThatDontLikeCandidate, const struct FUWorksSteamID& SteamIDCandidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted");

	UCoreComputeNewPlayerCompatibilityNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PlayersThatDontLikeCandidate = PlayersThatDontLikeCandidate;
	params.PlayersThatCandidateDoesntLike = PlayersThatCandidateDoesntLike;
	params.ClanPlayersThatDontLikeCandidate = ClanPlayersThatDontLikeCandidate;
	params.SteamIDCandidate = SteamIDCandidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDNewPlayer               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreComputeNewPlayerCompatibilityNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreComputeNewPlayerCompatibilityNode* UCoreComputeNewPlayerCompatibilityNode::STATIC_ComputeNewPlayerCompatibilityNode(const struct FUWorksSteamID& SteamIDNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode");

	UCoreComputeNewPlayerCompatibilityNode_ComputeNewPlayerCompatibilityNode_Params params;
	params.SteamIDNewPlayer = SteamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRequestUserStatsGSNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestUserStatsGSNode* UCoreRequestUserStatsGSNode::STATIC_RequestUserStatsGSNode(const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode");

	UCoreRequestUserStatsGSNode_RequestUserStatsGSNode_Params params;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestUserStatsGSNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted");

	UCoreRequestUserStatsGSNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreStoreUserStatsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStoreUserStatsNode* UCoreStoreUserStatsNode::STATIC_StoreUserStatsNode(const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode");

	UCoreStoreUserStatsNode_StoreUserStatsNode_Params params;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStoreUserStatsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted");

	UCoreStoreUserStatsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRequestEligiblePromoItemDefinitionsIDsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestEligiblePromoItemDefinitionsIDsNode* UCoreRequestEligiblePromoItemDefinitionsIDsNode::STATIC_RequestEligiblePromoItemDefinitionsIDsNode(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode");

	UCoreRequestEligiblePromoItemDefinitionsIDsNode_RequestEligiblePromoItemDefinitionsIDsNode_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumEligiblePromoItemsDefinitionsIDs (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCachedData                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestEligiblePromoItemDefinitionsIDsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, int NumEligiblePromoItemsDefinitionsIDs, bool bCachedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted");

	UCoreRequestEligiblePromoItemDefinitionsIDsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamID = SteamID;
	params.NumEligiblePromoItemsDefinitionsIDs = NumEligiblePromoItemsDefinitionsIDs;
	params.bCachedData = bCachedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoreRequestLobbyListNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestLobbyListNode* UCoreRequestLobbyListNode::STATIC_RequestLobbyListNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode");

	UCoreRequestLobbyListNode_RequestLobbyListNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LobbiesMatching                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestLobbyListNode::OnRequestCompleted(bool bSuccessful, int LobbiesMatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted");

	UCoreRequestLobbyListNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.LobbiesMatching = LobbiesMatching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreCreateLobbyNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted");

	UCoreCreateLobbyNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWorksCore_EUWorksLobbyType    LobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreCreateLobbyNode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreCreateLobbyNode* UCoreCreateLobbyNode::STATIC_CreateLobbyNode(UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode");

	UCoreCreateLobbyNode_CreateLobbyNode_Params params;
	params.LobbyType = LobbyType;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          ChatPermissions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bLocked                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreJoinLobbyNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDLobby, TArray<unsigned char> ChatPermissions, bool bLocked, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted");

	UCoreJoinLobbyNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamIDLobby = SteamIDLobby;
	params.ChatPermissions = ChatPermissions;
	params.bLocked = bLocked;
	params.ChatRoomEnterResponse = ChatRoomEnterResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreJoinLobbyNode*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreJoinLobbyNode* UCoreJoinLobbyNode::STATIC_JoinLobbyNode(const struct FUWorksSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode");

	UCoreJoinLobbyNode_JoinLobbyNode_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreServerListNode.ServerListNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksServerQueryType QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxUpdates                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreServerListNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreServerListNode* UCoreServerListNode::STATIC_ServerListNode(int AppID, UWorksCore_EUWorksServerQueryType QueryType, int MaxUpdates)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreServerListNode.ServerListNode");

	UCoreServerListNode_ServerListNode_Params params;
	params.AppID = AppID;
	params.QueryType = QueryType;
	params.MaxUpdates = MaxUpdates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreServerListNode.OnRequestUpdated
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksServerInfo       Server                         (Parm, NativeAccessSpecifierPublic)
void UCoreServerListNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksServerInfo& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreServerListNode.OnRequestUpdated");

	UCoreServerListNode_OnRequestUpdated_Params params;
	params.bSuccessful = bSuccessful;
	params.Server = Server;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CorePingNode.PingNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCorePingNode*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCorePingNode* UCorePingNode::STATIC_PingNode(const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePingNode.PingNode");

	UCorePingNode_PingNode_Params params;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CorePingNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksServerInfo       Server                         (Parm, NativeAccessSpecifierPublic)
void UCorePingNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksServerInfo& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePingNode.OnRequestCompleted");

	UCorePingNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Server = Server;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CorePlayersNode.PlayersNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxUpdates                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCorePlayersNode*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCorePlayersNode* UCorePlayersNode::STATIC_PlayersNode(const struct FString& IP, int Port, int MaxUpdates)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePlayersNode.PlayersNode");

	UCorePlayersNode_PlayersNode_Params params;
	params.IP = IP;
	params.Port = Port;
	params.MaxUpdates = MaxUpdates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CorePlayersNode.OnRequestUpdated
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPlayerInfo       Player                         (Parm, NativeAccessSpecifierPublic)
void UCorePlayersNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksPlayerInfo& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePlayersNode.OnRequestUpdated");

	UCorePlayersNode_OnRequestUpdated_Params params;
	params.bSuccessful = bSuccessful;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRulesNode.RulesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxUpdates                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRulesNode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRulesNode* UCoreRulesNode::STATIC_RulesNode(const struct FString& IP, int Port, int MaxUpdates)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRulesNode.RulesNode");

	UCoreRulesNode_RulesNode_Params params;
	params.IP = IP;
	params.Port = Port;
	params.MaxUpdates = MaxUpdates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRulesNode.OnRequestUpdated
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksRuleInfo         Rule                           (Parm, NativeAccessSpecifierPublic)
void UCoreRulesNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksRuleInfo& Rule)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRulesNode.OnRequestUpdated");

	UCoreRulesNode_OnRequestUpdated_Params params;
	params.bSuccessful = bSuccessful;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreFileWriteAsyncNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted");

	UCoreFileWriteAsyncNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreFileWriteAsyncNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFileWriteAsyncNode* UCoreFileWriteAsyncNode::STATIC_FileWriteAsyncNode(const struct FString& File, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode");

	UCoreFileWriteAsyncNode_FileWriteAsyncNode_Params params;
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreFileReadAsyncNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted");

	UCoreFileReadAsyncNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BytesToRead                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreFileReadAsyncNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFileReadAsyncNode* UCoreFileReadAsyncNode::STATIC_FileReadAsyncNode(const struct FString& File, int Offset, int BytesToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode");

	UCoreFileReadAsyncNode_FileReadAsyncNode_Params params;
	params.File = File;
	params.Offset = Offset;
	params.BytesToRead = BytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCQueryHandle   UGCQueryHandle                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UCoreSendQueryUGCRequestNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSendQueryUGCRequestNode* UCoreSendQueryUGCRequestNode::STATIC_SendQueryUGCRequestNode(const struct FUWorksUGCQueryHandle& UGCQueryHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode");

	UCoreSendQueryUGCRequestNode_SendQueryUGCRequestNode_Params params;
	params.UGCQueryHandle = UGCQueryHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCQueryHandle   UGCQueryHandle                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumResultsReturned             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TotalMatchingResults           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCachedData                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSendQueryUGCRequestNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksUGCQueryHandle& UGCQueryHandle, UWorksCore_EUWorksResult Result, int NumResultsReturned, int TotalMatchingResults, bool bCachedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted");

	UCoreSendQueryUGCRequestNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.UGCQueryHandle = UGCQueryHandle;
	params.Result = Result;
	params.NumResultsReturned = NumResultsReturned;
	params.TotalMatchingResults = TotalMatchingResults;
	params.bCachedData = bCachedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreCreateItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUserNeedsToAcceptWorkshopLegalAgreement (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreCreateItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateItemNode.OnRequestCompleted");

	UCoreCreateItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PublishedFileID = PublishedFileID;
	params.bUserNeedsToAcceptWorkshopLegalAgreement = bUserNeedsToAcceptWorkshopLegalAgreement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreCreateItemNode.CreateItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksWorkshopFileType FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreCreateItemNode*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreCreateItemNode* UCoreCreateItemNode::STATIC_CreateItemNode(int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateItemNode.CreateItemNode");

	UCoreCreateItemNode_CreateItemNode_Params params;
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksUGCUpdateHandle  UGCUpdateHandle                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ChangeNote                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreSubmitItemUpdateNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSubmitItemUpdateNode* UCoreSubmitItemUpdateNode::STATIC_SubmitItemUpdateNode(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode");

	UCoreSubmitItemUpdateNode_SubmitItemUpdateNode_Params params;
	params.UGCUpdateHandle = UGCUpdateHandle;
	params.ChangeNote = ChangeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUserNeedsToAcceptWorkshopLegalAgreement (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSubmitItemUpdateNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted");

	UCoreSubmitItemUpdateNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.bUserNeedsToAcceptWorkshopLegalAgreement = bUserNeedsToAcceptWorkshopLegalAgreement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreSetUserItemVoteNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSetUserItemVoteNode* UCoreSetUserItemVoteNode::STATIC_SetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode");

	UCoreSetUserItemVoteNode_SetUserItemVoteNode_Params params;
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSetUserItemVoteNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted");

	UCoreSetUserItemVoteNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVotedUp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVotedDown                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteSkipped                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGetUserItemVoteNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted");

	UCoreGetUserItemVoteNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bVotedUp = bVotedUp;
	params.bVotedDown = bVotedDown;
	params.bVoteSkipped = bVoteSkipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreGetUserItemVoteNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetUserItemVoteNode* UCoreGetUserItemVoteNode::STATIC_GetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode");

	UCoreGetUserItemVoteNode_GetUserItemVoteNode_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasAddRequest                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreAddItemToFavoritesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bWasAddRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted");

	UCoreAddItemToFavoritesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bWasAddRequest = bWasAddRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreAddItemToFavoritesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreAddItemToFavoritesNode* UCoreAddItemToFavoritesNode::STATIC_AddItemToFavoritesNode(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode");

	UCoreAddItemToFavoritesNode_AddItemToFavoritesNode_Params params;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRemoveItemFromFavoritesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRemoveItemFromFavoritesNode* UCoreRemoveItemFromFavoritesNode::STATIC_RemoveItemFromFavoritesNode(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode");

	UCoreRemoveItemFromFavoritesNode_RemoveItemFromFavoritesNode_Params params;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasAddRequest                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRemoveItemFromFavoritesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bWasAddRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted");

	UCoreRemoveItemFromFavoritesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bWasAddRequest = bWasAddRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreSubscribeItemNode*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSubscribeItemNode* UCoreSubscribeItemNode::STATIC_SubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode");

	UCoreSubscribeItemNode_SubscribeItemNode_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSubscribeItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted");

	UCoreSubscribeItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreUnsubscribeItemNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreUnsubscribeItemNode* UCoreUnsubscribeItemNode::STATIC_UnsubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode");

	UCoreUnsubscribeItemNode_UnsubscribeItemNode_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksPublishedFileID  PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreUnsubscribeItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted");

	UCoreUnsubscribeItemNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksPublishedFileID> PublishedFileID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreStartPlaytimeTrackingNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStartPlaytimeTrackingNode* UCoreStartPlaytimeTrackingNode::STATIC_StartPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode");

	UCoreStartPlaytimeTrackingNode_StartPlaytimeTrackingNode_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStartPlaytimeTrackingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted");

	UCoreStartPlaytimeTrackingNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUWorksPublishedFileID> PublishedFileID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreStopPlaytimeTrackingNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStopPlaytimeTrackingNode* UCoreStopPlaytimeTrackingNode::STATIC_StopPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode");

	UCoreStopPlaytimeTrackingNode_StopPlaytimeTrackingNode_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStopPlaytimeTrackingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted");

	UCoreStopPlaytimeTrackingNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoreStopPlaytimeTrackingForAllItemsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStopPlaytimeTrackingForAllItemsNode* UCoreStopPlaytimeTrackingForAllItemsNode::STATIC_StopPlaytimeTrackingForAllItemsNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode");

	UCoreStopPlaytimeTrackingForAllItemsNode_StopPlaytimeTrackingForAllItemsNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStopPlaytimeTrackingForAllItemsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted");

	UCoreStopPlaytimeTrackingForAllItemsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreRequestEncryptedAppTicketNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestEncryptedAppTicketNode* UCoreRequestEncryptedAppTicketNode::STATIC_RequestEncryptedAppTicketNode(TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode");

	UCoreRequestEncryptedAppTicketNode_RequestEncryptedAppTicketNode_Params params;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestEncryptedAppTicketNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted");

	UCoreRequestEncryptedAppTicketNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRequestStoreAuthURLNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestStoreAuthURLNode* UCoreRequestStoreAuthURLNode::STATIC_RequestStoreAuthURLNode(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode");

	UCoreRequestStoreAuthURLNode_RequestStoreAuthURLNode_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestStoreAuthURLNode::OnRequestCompleted(bool bSuccessful, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted");

	UCoreRequestStoreAuthURLNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRequestUserStatsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestUserStatsNode* UCoreRequestUserStatsNode::STATIC_RequestUserStatsNode(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode");

	UCoreRequestUserStatsNode_RequestUserStatsNode_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestUserStatsNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted");

	UCoreRequestUserStatsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bLeaderboardFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreFindOrCreateLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted");

	UCoreFindOrCreateLeaderboardNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.bLeaderboardFound = bLeaderboardFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreFindOrCreateLeaderboardNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFindOrCreateLeaderboardNode* UCoreFindOrCreateLeaderboardNode::STATIC_FindOrCreateLeaderboardNode(const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode");

	UCoreFindOrCreateLeaderboardNode_FindOrCreateLeaderboardNode_Params params;
	params.LeaderboardName = LeaderboardName;
	params.LeaderboardSortMethod = LeaderboardSortMethod;
	params.LeaderboardDisplayType = LeaderboardDisplayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bLeaderboardFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreFindLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted");

	UCoreFindLeaderboardNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.bLeaderboardFound = bLeaderboardFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreFindLeaderboardNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFindLeaderboardNode* UCoreFindLeaderboardNode::STATIC_FindLeaderboardNode(const struct FString& LeaderboardName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode");

	UCoreFindLeaderboardNode_FindLeaderboardNode_Params params;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboardEntries SteamLeaderboardEntries        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreDownloadLeaderboardEntriesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted");

	UCoreDownloadLeaderboardEntriesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.SteamLeaderboardEntries = SteamLeaderboardEntries;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreDownloadLeaderboardEntriesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreDownloadLeaderboardEntriesNode* UCoreDownloadLeaderboardEntriesNode::STATIC_DownloadLeaderboardEntriesNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode");

	UCoreDownloadLeaderboardEntriesNode_DownloadLeaderboardEntriesNode_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardDataRequest = LeaderboardDataRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboardEntries SteamLeaderboardEntries        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreDownloadLeaderboardEntriesForUsersNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted");

	UCoreDownloadLeaderboardEntriesForUsersNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.SteamLeaderboardEntries = SteamLeaderboardEntries;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FUWorksSteamID>  Users                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreDownloadLeaderboardEntriesForUsersNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreDownloadLeaderboardEntriesForUsersNode* UCoreDownloadLeaderboardEntriesForUsersNode::STATIC_DownloadLeaderboardEntriesForUsersNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode");

	UCoreDownloadLeaderboardEntriesForUsersNode_DownloadLeaderboardEntriesForUsersNode_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ScoreDetails                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UCoreUploadLeaderboardScoreNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreUploadLeaderboardScoreNode* UCoreUploadLeaderboardScoreNode::STATIC_UploadLeaderboardScoreNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode");

	UCoreUploadLeaderboardScoreNode_UploadLeaderboardScoreNode_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
	params.Score = Score;
	params.ScoreDetails = ScoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bScoreChanged                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GlobalRankNew                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GlobalRankPrevious             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreUploadLeaderboardScoreNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, const struct FUWorksSteamLeaderboard& SteamLeaderboard, int Score, bool bScoreChanged, int GlobalRankNew, int GlobalRankPrevious)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted");

	UCoreUploadLeaderboardScoreNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Score = Score;
	params.bScoreChanged = bScoreChanged;
	params.GlobalRankNew = GlobalRankNew;
	params.GlobalRankPrevious = GlobalRankPrevious;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreAttachLeaderboardUGCNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted");

	UCoreAttachLeaderboardUGCNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUWorksSteamLeaderboard SteamLeaderboard               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUWorksUGCHandle        UGCHandle                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreAttachLeaderboardUGCNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreAttachLeaderboardUGCNode* UCoreAttachLeaderboardUGCNode::STATIC_AttachLeaderboardUGCNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode");

	UCoreAttachLeaderboardUGCNode_AttachLeaderboardUGCNode_Params params;
	params.SteamLeaderboard = SteamLeaderboard;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Players                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGetNumberOfCurrentPlayersNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, int Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted");

	UCoreGetNumberOfCurrentPlayersNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;
	params.Players = Players;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoreGetNumberOfCurrentPlayersNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetNumberOfCurrentPlayersNode* UCoreGetNumberOfCurrentPlayersNode::STATIC_GetNumberOfCurrentPlayersNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode");

	UCoreGetNumberOfCurrentPlayersNode_GetNumberOfCurrentPlayersNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoreRequestGlobalAchievementPercentagesNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestGlobalAchievementPercentagesNode* UCoreRequestGlobalAchievementPercentagesNode::STATIC_RequestGlobalAchievementPercentagesNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode");

	UCoreRequestGlobalAchievementPercentagesNode_RequestGlobalAchievementPercentagesNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestGlobalAchievementPercentagesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted");

	UCoreRequestGlobalAchievementPercentagesNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            HistoryDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCoreRequestGlobalStatsNode* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestGlobalStatsNode* UCoreRequestGlobalStatsNode::STATIC_RequestGlobalStatsNode(int HistoryDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode");

	UCoreRequestGlobalStatsNode_RequestGlobalStatsNode_Params params;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksResult       Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestGlobalStatsNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted");

	UCoreRequestGlobalStatsNode_OnRequestCompleted_Params params;
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
