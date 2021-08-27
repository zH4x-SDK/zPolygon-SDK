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

// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetGameInstance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*   MyGameIntance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UBP_FunctionLibrary_C::STATIC_GetGameInstance(class UObject* __WorldContext, class UBP_PG_GameInstance_C** MyGameIntance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetGameInstance");

	UBP_FunctionLibrary_C_GetGameInstance_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MyGameIntance != nullptr)
		*MyGameIntance = params.MyGameIntance;

}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetGameModeBP_Game
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PG_GameMode_Game_C*  MyGameMode                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UBP_FunctionLibrary_C::STATIC_GetGameModeBP_Game(class UObject* __WorldContext, class ABP_PG_GameMode_Game_C** MyGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetGameModeBP_Game");

	UBP_FunctionLibrary_C_GetGameModeBP_Game_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MyGameMode != nullptr)
		*MyGameMode = params.MyGameMode;

}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetGameStateBP
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PG_GameState_Game_C* MyGameState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UBP_FunctionLibrary_C::STATIC_GetGameStateBP(class UObject* __WorldContext, class ABP_PG_GameState_Game_C** MyGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetGameStateBP");

	UBP_FunctionLibrary_C_GetGameStateBP_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MyGameState != nullptr)
		*MyGameState = params.MyGameState;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
