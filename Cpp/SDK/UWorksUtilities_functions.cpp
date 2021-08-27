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

// Function UWorksUtilities.UWorksLibraryConversions.GetCurrentProcessId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryConversions::STATIC_GetCurrentProcessId()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.GetCurrentProcessId");

	UUWorksLibraryConversions_GetCurrentProcessId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryConversions.ConvertStringToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Data                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UUWorksLibraryConversions::STATIC_ConvertStringToBytes(const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.ConvertStringToBytes");

	UUWorksLibraryConversions_ConvertStringToBytes_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryConversions::STATIC_ConvertBytesToString(TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToString");

	UUWorksLibraryConversions_ConvertBytesToString_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToHEXString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryConversions::STATIC_ConvertBytesToHEXString(TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToHEXString");

	UUWorksLibraryConversions_ConvertBytesToHEXString_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.SetIdentifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Identifier                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibraryGameID::STATIC_SetIdentifier(struct FUWorksGameID* GameID, const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.SetIdentifier");

	UUWorksLibraryGameID_SetIdentifier_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;

}


// Function UWorksUtilities.UWorksLibraryGameID.Reset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibraryGameID::STATIC_Reset(struct FUWorksGameID* GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.Reset");

	UUWorksLibraryGameID_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;

}


// Function UWorksUtilities.UWorksLibraryGameID.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibraryGameID::STATIC_IsValid(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsValid");

	UUWorksLibraryGameID_IsValid_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.IsSteamApp
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibraryGameID::STATIC_IsSteamApp(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsSteamApp");

	UUWorksLibraryGameID_IsSteamApp_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.IsShortcut
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibraryGameID::STATIC_IsShortcut(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsShortcut");

	UUWorksLibraryGameID_IsShortcut_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.IsP2PFile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibraryGameID::STATIC_IsP2PFile(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsP2PFile");

	UUWorksLibraryGameID_IsP2PFile_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.IsMod
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibraryGameID::STATIC_IsMod(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsMod");

	UUWorksLibraryGameID_IsMod_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.IsIdenticalWith
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibraryGameID::STATIC_IsIdenticalWith(const struct FUWorksGameID& A, const struct FUWorksGameID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsIdenticalWith");

	UUWorksLibraryGameID_IsIdenticalWith_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.GetModID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksLibraryGameID::STATIC_GetModID(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.GetModID");

	UUWorksLibraryGameID_GetModID_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.GetIdentifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryGameID::STATIC_GetIdentifier(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.GetIdentifier");

	UUWorksLibraryGameID_GetIdentifier_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.GetAppID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksGameID           GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksLibraryGameID::STATIC_GetAppID(const struct FUWorksGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.GetAppID");

	UUWorksLibraryGameID_GetAppID_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersC
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ModID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksGameID UUWorksLibraryGameID::STATIC_ConstructFromParametersC(int AppID, int ModID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersC");

	UUWorksLibraryGameID_ConstructFromParametersC_Params params;
	params.AppID = AppID;
	params.ModID = ModID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersB
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksGameID UUWorksLibraryGameID::STATIC_ConstructFromParametersB(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersB");

	UUWorksLibraryGameID_ConstructFromParametersB_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersA
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksGameID           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksGameID UUWorksLibraryGameID::STATIC_ConstructFromParametersA(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersA");

	UUWorksLibraryGameID_ConstructFromParametersA_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteUGCUpdateHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCUpdateHandle  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCUpdateHandle UUWorksLibraryLex::STATIC_WriteUGCUpdateHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCUpdateHandle");

	UUWorksLibraryLex_WriteUGCUpdateHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteUGCQueryHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCQueryHandle   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksLibraryLex::STATIC_WriteUGCQueryHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCQueryHandle");

	UUWorksLibraryLex_WriteUGCQueryHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteUGCHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCHandle        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksUGCHandle UUWorksLibraryLex::STATIC_WriteUGCHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCHandle");

	UUWorksLibraryLex_WriteUGCHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteUGCFileWriteStreamHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksUGCFileWriteStreamHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCFileWriteStreamHandle UUWorksLibraryLex::STATIC_WriteUGCFileWriteStreamHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCFileWriteStreamHandle");

	UUWorksLibraryLex_WriteUGCFileWriteStreamHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteTicketHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksTicketHandle     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksTicketHandle UUWorksLibraryLex::STATIC_WriteTicketHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteTicketHandle");

	UUWorksLibraryLex_WriteTicketHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteSteamUser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamUser        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamUser UUWorksLibraryLex::STATIC_WriteSteamUser(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamUser");

	UUWorksLibraryLex_WriteSteamUser_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteSteamPipe
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamPipe        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamPipe UUWorksLibraryLex::STATIC_WriteSteamPipe(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamPipe");

	UUWorksLibraryLex_WriteSteamPipe_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboardEntries
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboardEntries ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamLeaderboardEntries UUWorksLibraryLex::STATIC_WriteSteamLeaderboardEntries(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboardEntries");

	UUWorksLibraryLex_WriteSteamLeaderboardEntries_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamLeaderboard ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamLeaderboard UUWorksLibraryLex::STATIC_WriteSteamLeaderboard(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboard");

	UUWorksLibraryLex_WriteSteamLeaderboard_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteSteamInventoryResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamInventoryResult ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamInventoryResult UUWorksLibraryLex::STATIC_WriteSteamInventoryResult(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamInventoryResult");

	UUWorksLibraryLex_WriteSteamInventoryResult_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteScreenshotHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksScreenshotHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksLibraryLex::STATIC_WriteScreenshotHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteScreenshotHandle");

	UUWorksLibraryLex_WriteScreenshotHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteFriendsGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksFriendsGroupID   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksFriendsGroupID UUWorksLibraryLex::STATIC_WriteFriendsGroupID(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteFriendsGroupID");

	UUWorksLibraryLex_WriteFriendsGroupID_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteControllerHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerHandle UUWorksLibraryLex::STATIC_WriteControllerHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerHandle");

	UUWorksLibraryLex_WriteControllerHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteControllerDigitalActionHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerDigitalActionHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerDigitalActionHandle UUWorksLibraryLex::STATIC_WriteControllerDigitalActionHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerDigitalActionHandle");

	UUWorksLibraryLex_WriteControllerDigitalActionHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteControllerAnalogActionHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerAnalogActionHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerAnalogActionHandle UUWorksLibraryLex::STATIC_WriteControllerAnalogActionHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerAnalogActionHandle");

	UUWorksLibraryLex_WriteControllerAnalogActionHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.WriteControllerActionSetHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksControllerActionSetHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerActionSetHandle UUWorksLibraryLex::STATIC_WriteControllerActionSetHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerActionSetHandle");

	UUWorksLibraryLex_WriteControllerActionSetHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadUGCUpdateHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksUGCUpdateHandle  Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadUGCUpdateHandle(const struct FUWorksUGCUpdateHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCUpdateHandle");

	UUWorksLibraryLex_ReadUGCUpdateHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadUGCQueryHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksUGCQueryHandle   Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadUGCQueryHandle(const struct FUWorksUGCQueryHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCQueryHandle");

	UUWorksLibraryLex_ReadUGCQueryHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadUGCHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksUGCHandle        Value                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadUGCHandle(const struct FUWorksUGCHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCHandle");

	UUWorksLibraryLex_ReadUGCHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadUGCFileWriteStreamHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksUGCFileWriteStreamHandle Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadUGCFileWriteStreamHandle(const struct FUWorksUGCFileWriteStreamHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCFileWriteStreamHandle");

	UUWorksLibraryLex_ReadUGCFileWriteStreamHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadTicketHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksTicketHandle     Value                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadTicketHandle(const struct FUWorksTicketHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadTicketHandle");

	UUWorksLibraryLex_ReadTicketHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadSteamUser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamUser        Value                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadSteamUser(const struct FUWorksSteamUser& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamUser");

	UUWorksLibraryLex_ReadSteamUser_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadSteamPipe
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamPipe        Value                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadSteamPipe(const struct FUWorksSteamPipe& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamPipe");

	UUWorksLibraryLex_ReadSteamPipe_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboardEntries
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamLeaderboardEntries Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadSteamLeaderboardEntries(const struct FUWorksSteamLeaderboardEntries& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboardEntries");

	UUWorksLibraryLex_ReadSteamLeaderboardEntries_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamLeaderboard Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadSteamLeaderboard(const struct FUWorksSteamLeaderboard& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboard");

	UUWorksLibraryLex_ReadSteamLeaderboard_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadSteamInventoryResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamInventoryResult Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadSteamInventoryResult(const struct FUWorksSteamInventoryResult& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamInventoryResult");

	UUWorksLibraryLex_ReadSteamInventoryResult_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadScreenshotHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksScreenshotHandle Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadScreenshotHandle(const struct FUWorksScreenshotHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadScreenshotHandle");

	UUWorksLibraryLex_ReadScreenshotHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadFriendsGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksFriendsGroupID   Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadFriendsGroupID(const struct FUWorksFriendsGroupID& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadFriendsGroupID");

	UUWorksLibraryLex_ReadFriendsGroupID_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadControllerHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksControllerHandle Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadControllerHandle(const struct FUWorksControllerHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerHandle");

	UUWorksLibraryLex_ReadControllerHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadControllerDigitalActionHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksControllerDigitalActionHandle Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadControllerDigitalActionHandle(const struct FUWorksControllerDigitalActionHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerDigitalActionHandle");

	UUWorksLibraryLex_ReadControllerDigitalActionHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadControllerAnalogActionHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksControllerAnalogActionHandle Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadControllerAnalogActionHandle(const struct FUWorksControllerAnalogActionHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerAnalogActionHandle");

	UUWorksLibraryLex_ReadControllerAnalogActionHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibraryLex.ReadControllerActionSetHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksControllerActionSetHandle Value                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibraryLex::STATIC_ReadControllerActionSetHandle(const struct FUWorksControllerActionSetHandle& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerActionSetHandle");

	UUWorksLibraryLex_ReadControllerActionSetHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.SetUniverse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetUniverse(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetUniverse");

	UUWorksLibrarySteamID_SetUniverse_Params params;
	params.Universe = Universe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.SetParametersC
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksAccountType  AccountType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountInstance                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetParametersC(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& AccountID, const struct FString& AccountInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetParametersC");

	UUWorksLibrarySteamID_SetParametersC_Params params;
	params.Universe = Universe;
	params.AccountType = AccountType;
	params.AccountID = AccountID;
	params.AccountInstance = AccountInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.SetParametersB
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksAccountType  AccountType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetParametersB(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& AccountID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetParametersB");

	UUWorksLibrarySteamID_SetParametersB_Params params;
	params.Universe = Universe;
	params.AccountType = AccountType;
	params.AccountID = AccountID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.SetParametersA
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksAccountType  AccountType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Identifier                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetParametersA(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetParametersA");

	UUWorksLibrarySteamID_SetParametersA_Params params;
	params.Universe = Universe;
	params.AccountType = AccountType;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.SetIdentifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Identifier                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetIdentifier(struct FUWorksSteamID* SteamID, const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetIdentifier");

	UUWorksLibrarySteamID_SetIdentifier_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.SetAccountInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountInstance                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetAccountInstance(struct FUWorksSteamID* SteamID, const struct FString& AccountInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetAccountInstance");

	UUWorksLibrarySteamID_SetAccountInstance_Params params;
	params.AccountInstance = AccountInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.SetAccountID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_SetAccountID(struct FUWorksSteamID* SteamID, const struct FString& AccountID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetAccountID");

	UUWorksLibrarySteamID_SetAccountID_Params params;
	params.AccountID = AccountID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsValid(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsValid");

	UUWorksLibrarySteamID_IsValid_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsPersistentGameServerAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsPersistentGameServerAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsPersistentGameServerAccount");

	UUWorksLibrarySteamID_IsPersistentGameServerAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsLobby(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsLobby");

	UUWorksLibrarySteamID_IsLobby_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsIndividualAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsIndividualAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsIndividualAccount");

	UUWorksLibrarySteamID_IsIndividualAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsIdenticalWith
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsIdenticalWith(const struct FUWorksSteamID& A, const struct FUWorksSteamID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsIdenticalWith");

	UUWorksLibrarySteamID_IsIdenticalWith_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsGameServerAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsGameServerAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsGameServerAccount");

	UUWorksLibrarySteamID_IsGameServerAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsContentServerAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsContentServerAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsContentServerAccount");

	UUWorksLibrarySteamID_IsContentServerAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsConsoleUserAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsConsoleUserAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsConsoleUserAccount");

	UUWorksLibrarySteamID_IsConsoleUserAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsClanAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsClanAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsClanAccount");

	UUWorksLibrarySteamID_IsClanAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsChatAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsChatAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsChatAccount");

	UUWorksLibrarySteamID_IsChatAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsBlankAnonAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsBlankAnonAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsBlankAnonAccount");

	UUWorksLibrarySteamID_IsBlankAnonAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsAnonUserAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsAnonUserAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsAnonUserAccount");

	UUWorksLibrarySteamID_IsAnonUserAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsAnonGameServerAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsAnonGameServerAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsAnonGameServerAccount");

	UUWorksLibrarySteamID_IsAnonGameServerAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.IsAnonAccount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_IsAnonAccount(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsAnonAccount");

	UUWorksLibrarySteamID_IsAnonAccount_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.HasNoIndividualInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksLibrarySteamID::STATIC_HasNoIndividualInstance(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.HasNoIndividualInstance");

	UUWorksLibrarySteamID_HasNoIndividualInstance_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.GetUniverse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUniverse UUWorksLibrarySteamID::STATIC_GetUniverse(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetUniverse");

	UUWorksLibrarySteamID_GetUniverse_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.GetStaticAccountKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibrarySteamID::STATIC_GetStaticAccountKey(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetStaticAccountKey");

	UUWorksLibrarySteamID_GetStaticAccountKey_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.GetIdentifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibrarySteamID::STATIC_GetIdentifier(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetIdentifier");

	UUWorksLibrarySteamID_GetIdentifier_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.GetAccountType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksAccountType  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksAccountType UUWorksLibrarySteamID::STATIC_GetAccountType(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetAccountType");

	UUWorksLibrarySteamID_GetAccountType_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.GetAccountInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibrarySteamID::STATIC_GetAccountInstance(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetAccountInstance");

	UUWorksLibrarySteamID_GetAccountInstance_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.GetAccountID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksLibrarySteamID::STATIC_GetAccountID(const struct FUWorksSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetAccountID");

	UUWorksLibrarySteamID_GetAccountID_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonUserLogon
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_CreateBlankAnonUserLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonUserLogon");

	UUWorksLibrarySteamID_CreateBlankAnonUserLogon_Params params;
	params.Universe = Universe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonLogon
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_CreateBlankAnonLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonLogon");

	UUWorksLibrarySteamID_CreateBlankAnonLogon_Params params;
	params.Universe = Universe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersC
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksAccountType  AccountType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountInstance                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksLibrarySteamID::STATIC_ConstructFromParametersC(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& AccountID, const struct FString& AccountInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersC");

	UUWorksLibrarySteamID_ConstructFromParametersC_Params params;
	params.Universe = Universe;
	params.AccountType = AccountType;
	params.AccountID = AccountID;
	params.AccountInstance = AccountInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersB
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UWorksCore_EUWorksUniverse     Universe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UWorksCore_EUWorksAccountType  AccountType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccountID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksLibrarySteamID::STATIC_ConstructFromParametersB(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& AccountID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersB");

	UUWorksLibrarySteamID_ConstructFromParametersB_Params params;
	params.Universe = Universe;
	params.AccountType = AccountType;
	params.AccountID = AccountID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersA
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUWorksSteamID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksLibrarySteamID::STATIC_ConstructFromParametersA(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersA");

	UUWorksLibrarySteamID_ConstructFromParametersA_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksLibrarySteamID.ClearIndividualInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_ClearIndividualInstance(struct FUWorksSteamID* SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ClearIndividualInstance");

	UUWorksLibrarySteamID_ClearIndividualInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksLibrarySteamID.Clear
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUWorksSteamID          SteamID                        (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksLibrarySteamID::STATIC_Clear(struct FUWorksSteamID* SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.Clear");

	UUWorksLibrarySteamID_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function UWorksUtilities.UWorksManagerNetwork.Refresh
// (Final, Native, Public, BlueprintCallable)
void UUWorksManagerNetwork::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.Refresh");

	UUWorksManagerNetwork_Refresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UWorksUtilities.UWorksManagerNetwork.GetNetDriverClassName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksManagerNetwork::GetNetDriverClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.GetNetDriverClassName");

	UUWorksManagerNetwork_GetNetDriverClassName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksManagerNetwork.GetManagerNetwork
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUWorksManagerNetwork*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksManagerNetwork* UUWorksManagerNetwork::STATIC_GetManagerNetwork()
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.GetManagerNetwork");

	UUWorksManagerNetwork_GetManagerNetwork_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UWorksUtilities.UWorksManagerNetwork.CreateSessionUWorks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPublicConnections           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsLANMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksManagerNetwork::CreateSessionUWorks(const struct FName& SessionName, int NumPublicConnections, bool bIsLANMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.CreateSessionUWorks");

	UUWorksManagerNetwork_CreateSessionUWorks_Params params;
	params.SessionName = SessionName;
	params.NumPublicConnections = NumPublicConnections;
	params.bIsLANMatch = bIsLANMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
