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

// Function UI_KillLog.UI_KillLog_C.AddEntryToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APG_PlayerState_Game*    killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APG_PlayerState_Game*    killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isHeadshot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isGrenade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_KillLog_C::AddEntryToLog(class APG_PlayerState_Game* killed, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillLog.UI_KillLog_C.AddEntryToLog");

	UUI_KillLog_C_AddEntryToLog_Params params;
	params.killed = killed;
	params.killer = killer;
	params.isHeadshot = isHeadshot;
	params.isGrenade = isGrenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
