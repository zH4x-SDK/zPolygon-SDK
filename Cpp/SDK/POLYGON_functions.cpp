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

// Function POLYGON.ChatSystemComponent.SentMessage_Multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FChatMessage            Message                        (Parm, NativeAccessSpecifierPublic)
void UChatSystemComponent::SentMessage_Multicast(const struct FChatMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ChatSystemComponent.SentMessage_Multicast");

	UChatSystemComponent_SentMessage_Multicast_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ChatSystemComponent.SendMessage_Server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FChatMessage            Message                        (Parm, NativeAccessSpecifierPublic)
void UChatSystemComponent::SendMessage_Server(const struct FChatMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ChatSystemComponent.SendMessage_Server");

	UChatSystemComponent_SendMessage_Server_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ClientBackendComponent.SetPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPlayerId               newPlayerId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
void UClientBackendComponent::SetPlayerId(const struct FPlayerId& newPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientBackendComponent.SetPlayerId");

	UClientBackendComponent_SetPlayerId_Params params;
	params.newPlayerId = newPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ClientBackendComponent.SetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*      newPlayerCombinedInfo          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClientBackendComponent::SetPlayerCombinedInfo(class UPlayFabJsonObject* newPlayerCombinedInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientBackendComponent.SetPlayerCombinedInfo");

	UClientBackendComponent_SetPlayerCombinedInfo_Params params;
	params.newPlayerCombinedInfo = newPlayerCombinedInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ClientBackendComponent.IsClientLoggedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UClientBackendComponent::STATIC_IsClientLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientBackendComponent.IsClientLoggedIn");

	UClientBackendComponent_IsClientLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.ClientBackendComponent.GetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayFabJsonObject* UClientBackendComponent::GetPlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientBackendComponent.GetPlayerCombinedInfo");

	UClientBackendComponent_GetPlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.ClientTransfer.SetPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPlayerId               newPlayerId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
void UClientTransfer::SetPlayerId(const struct FPlayerId& newPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientTransfer.SetPlayerId");

	UClientTransfer_SetPlayerId_Params params;
	params.newPlayerId = newPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ClientTransfer.SetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*      newPlayerCombinedInfo          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClientTransfer::SetPlayerCombinedInfo(class UPlayFabJsonObject* newPlayerCombinedInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientTransfer.SetPlayerCombinedInfo");

	UClientTransfer_SetPlayerCombinedInfo_Params params;
	params.newPlayerCombinedInfo = newPlayerCombinedInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ClientTransfer.SetMatchmakingTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 newTicket                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClientTransfer::SetMatchmakingTicket(const struct FString& newTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientTransfer.SetMatchmakingTicket");

	UClientTransfer_SetMatchmakingTicket_Params params;
	params.newTicket = newTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ClientTransfer.GetPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerId               ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FPlayerId UClientTransfer::GetPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientTransfer.GetPlayerId");

	UClientTransfer_GetPlayerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.ClientTransfer.GetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayFabJsonObject* UClientTransfer::GetPlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientTransfer.GetPlayerCombinedInfo");

	UClientTransfer_GetPlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.ClientTransfer.GetMatchmakingTicket
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UClientTransfer::GetMatchmakingTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ClientTransfer.GetMatchmakingTicket");

	UClientTransfer_GetMatchmakingTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.ControlPoint.OnRep_IsCapture
// (Final, Native, Private, Const)
void AControlPoint::OnRep_IsCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ControlPoint.OnRep_IsCapture");

	AControlPoint_OnRep_IsCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ControlPoint.OnRep_CapturePointsRedTeam
// (Final, Native, Private, Const)
void AControlPoint::OnRep_CapturePointsRedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ControlPoint.OnRep_CapturePointsRedTeam");

	AControlPoint_OnRep_CapturePointsRedTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ControlPoint.OnRep_CapturePointsBlueTeam
// (Final, Native, Private, Const)
void AControlPoint::OnRep_CapturePointsBlueTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ControlPoint.OnRep_CapturePointsBlueTeam");

	AControlPoint_OnRep_CapturePointsBlueTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ControlPoint.OnRep_CapturedTeam
// (Final, Native, Private, Const)
void AControlPoint::OnRep_CapturedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ControlPoint.OnRep_CapturedTeam");

	AControlPoint_OnRep_CapturedTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ControlPoint.GetControlPointNameAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AControlPoint::GetControlPointNameAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ControlPoint.GetControlPointNameAsString");

	AControlPoint_GetControlPointNameAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.ControlPoint.GetControlPointNameAsOneLetter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AControlPoint::GetControlPointNameAsOneLetter()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ControlPoint.GetControlPointNameAsOneLetter");

	AControlPoint_GetControlPointNameAsOneLetter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.DataManagerLibrary.GetDataTable_MapsInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataTable*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDataTable* UDataManagerLibrary::STATIC_GetDataTable_MapsInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.DataManagerLibrary.GetDataTable_MapsInfo");

	UDataManagerLibrary_GetDataTable_MapsInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.DataManagerLibrary.GetDataTable_LevelInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataTable*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDataTable* UDataManagerLibrary::STATIC_GetDataTable_LevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.DataManagerLibrary.GetDataTable_LevelInfo");

	UDataManagerLibrary_GetDataTable_LevelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.DataManagerLibrary.GetDataTable_ItemReferences
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataTable*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDataTable* UDataManagerLibrary::STATIC_GetDataTable_ItemReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.DataManagerLibrary.GetDataTable_ItemReferences");

	UDataManagerLibrary_GetDataTable_ItemReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.HealthStatsComponent.OnRep_Health
// (Final, Native, Private)
void UHealthStatsComponent::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.HealthStatsComponent.OnRep_Health");

	UHealthStatsComponent_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.HealthStatsComponent.GetStamina
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UHealthStatsComponent::GetStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.HealthStatsComponent.GetStamina");

	UHealthStatsComponent_GetStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.HealthStatsComponent.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UHealthStatsComponent::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.HealthStatsComponent.GetHealth");

	UHealthStatsComponent_GetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.InteractInterface.StopInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APG_Character*           Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractInterface::StopInteract(class APG_Character* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.InteractInterface.StopInteract");

	UInteractInterface_StopInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.InteractInterface.StartInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APG_Character*           Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractInterface::StartInteract(class APG_Character* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.InteractInterface.StartInteract");

	UInteractInterface_StartInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.InteractInterface.SetPlayerLooks
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isLooks                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractInterface::SetPlayerLooks(bool isLooks)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.InteractInterface.SetPlayerLooks");

	UInteractInterface_SetPlayerLooks_Params params;
	params.isLooks = isLooks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Module_Optic.ToggleAiming
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsAiming                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AItem_Module_Optic::ToggleAiming(bool IsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Module_Optic.ToggleAiming");

	AItem_Module_Optic_ToggleAiming_Params params;
	params.IsAiming = IsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.StartReload_multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bFullReload                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AItem_Weapon_General::StartReload_multicast(bool bFullReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.StartReload_multicast");

	AItem_Weapon_General_StartReload_multicast_Params params;
	params.bFullReload = bFullReload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.SetWeaponModules
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*      modules                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AItem_Weapon_General::SetWeaponModules(class UPlayFabJsonObject* modules)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.SetWeaponModules");

	AItem_Weapon_General_SetWeaponModules_Params params;
	params.modules = modules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.ResetWeapon
// (Native, Event, Public, BlueprintEvent)
void AItem_Weapon_General::ResetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.ResetWeapon");

	AItem_Weapon_General_ResetWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.RequestReload_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int8_t                         CurrentNumberAmmo              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AItem_Weapon_General::RequestReload_server(int8_t CurrentNumberAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.RequestReload_server");

	AItem_Weapon_General_RequestReload_server_Params params;
	params.CurrentNumberAmmo = CurrentNumberAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.OnRep_WeaponModules
// (Final, Native, Private)
void AItem_Weapon_General::OnRep_WeaponModules()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.OnRep_WeaponModules");

	AItem_Weapon_General_OnRep_WeaponModules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.OnRep_CurrentStockAmmo
// (Final, Native, Private)
void AItem_Weapon_General::OnRep_CurrentStockAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.OnRep_CurrentStockAmmo");

	AItem_Weapon_General_OnRep_CurrentStockAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.NotifyServerOfMiss
// (Net, Native, Event, Public, NetServer, NetValidate)
void AItem_Weapon_General::NotifyServerOfMiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.NotifyServerOfMiss");

	AItem_Weapon_General_NotifyServerOfMiss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.NotifyServerOfHitUnreliable
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FWeaponHitUnreliable    weaponHit                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AItem_Weapon_General::NotifyServerOfHitUnreliable(const struct FWeaponHitUnreliable& weaponHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.NotifyServerOfHitUnreliable");

	AItem_Weapon_General_NotifyServerOfHitUnreliable_Params params;
	params.weaponHit = weaponHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.NotifyServerOfHitOnCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FWeaponHitOnCharacter   WeaponHitOnCharacter           (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AItem_Weapon_General::NotifyServerOfHitOnCharacter(const struct FWeaponHitOnCharacter& WeaponHitOnCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.NotifyServerOfHitOnCharacter");

	AItem_Weapon_General_NotifyServerOfHitOnCharacter_Params params;
	params.WeaponHitOnCharacter = WeaponHitOnCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.GetWeaponModules
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AItem_Module_General*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AItem_Module_General*> AItem_Weapon_General::GetWeaponModules()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.GetWeaponModules");

	AItem_Weapon_General_GetWeaponModules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.Item_Weapon_General.GetWeaponMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* AItem_Weapon_General::GetWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.GetWeaponMesh");

	AItem_Weapon_General_GetWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.Item_Weapon_General.GetMagazine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMeshComponent* AItem_Weapon_General::GetMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.GetMagazine");

	AItem_Weapon_General_GetMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.Item_Weapon_General.GetForwardShot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AItem_Weapon_General::GetForwardShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.GetForwardShot");

	AItem_Weapon_General_GetForwardShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.Item_Weapon_General.GetCurrentStockAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AItem_Weapon_General::GetCurrentStockAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.GetCurrentStockAmmo");

	AItem_Weapon_General_GetCurrentStockAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.Item_Weapon_General.AddStockAmmo_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int8_t                         addAmmo                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AItem_Weapon_General::AddStockAmmo_server(int8_t addAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.AddStockAmmo_server");

	AItem_Weapon_General_AddStockAmmo_server_Params params;
	params.addAmmo = addAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.ActionWhenShotWithoutHit_multicast
// (Net, Native, Event, NetMulticast, Public)
void AItem_Weapon_General::ActionWhenShotWithoutHit_multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.ActionWhenShotWithoutHit_multicast");

	AItem_Weapon_General_ActionWhenShotWithoutHit_multicast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.Item_Weapon_General.ActionWhenShotWithHit_multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FWeaponHitUnreliable    weaponHit                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AItem_Weapon_General::ActionWhenShotWithHit_multicast(const struct FWeaponHitUnreliable& weaponHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.Item_Weapon_General.ActionWhenShotWithHit_multicast");

	AItem_Weapon_General_ActionWhenShotWithHit_multicast_Params params;
	params.weaponHit = weaponHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.MenuCharacter.ParsePlayerCombinedInfo
// (Final, Native, Public)
void AMenuCharacter::ParsePlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.MenuCharacter.ParsePlayerCombinedInfo");

	AMenuCharacter_ParsePlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.TiltBody_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int8_t                         tintBodyAlpha                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::TiltBody_server(int8_t tintBodyAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.TiltBody_server");

	APG_Character_TiltBody_server_Params params;
	params.tintBodyAlpha = tintBodyAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.StopInteract_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void APG_Character::StopInteract_server()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.StopInteract_server");

	APG_Character_StopInteract_server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.StopInteract
// (Final, Native, Protected)
void APG_Character::StopInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.StopInteract");

	APG_Character_StopInteract_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.StartShooting
// (Event, Public, BlueprintEvent)
void APG_Character::StartShooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.StartShooting");

	APG_Character_StartShooting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.StartInteract_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void APG_Character::StartInteract_server()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.StartInteract_server");

	APG_Character_StartInteract_server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.StartInteract
// (Final, Native, Protected)
void APG_Character::StartInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.StartInteract");

	APG_Character_StartInteract_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.SetViewMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// POLYGON_ECameraViewMode        newViewMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::SetViewMode(POLYGON_ECameraViewMode newViewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.SetViewMode");

	APG_Character_SetViewMode_Params params;
	params.newViewMode = newViewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.SetIsSprinting_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                           NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::SetIsSprinting_server(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.SetIsSprinting_server");

	APG_Character_SetIsSprinting_server_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.PlayerDead_multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FVector_NetQuantize     Impulse                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BoneName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::PlayerDead_multicast(const struct FVector_NetQuantize& Impulse, const struct FString& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.PlayerDead_multicast");

	APG_Character_PlayerDead_multicast_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.PlayAnimMontage_multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreOwner                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::PlayAnimMontage_multicast(class UAnimMontage* AnimMontage, bool bIgnoreOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.PlayAnimMontage_multicast");

	APG_Character_PlayAnimMontage_multicast_Params params;
	params.AnimMontage = AnimMontage;
	params.bIgnoreOwner = bIgnoreOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.OnRep_PlayerAction
// (Final, Native, Private)
void APG_Character::OnRep_PlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.OnRep_PlayerAction");

	APG_Character_OnRep_PlayerAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.OnRep_CameraViewMode
// (Final, Native, Private)
void APG_Character::OnRep_CameraViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.OnRep_CameraViewMode");

	APG_Character_OnRep_CameraViewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.InteractPlayerLooks
// (Final, Native, Private)
void APG_Character::InteractPlayerLooks()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.InteractPlayerLooks");

	APG_Character_InteractPlayerLooks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.GetPlayerAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// POLYGON_EPlayerAction          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
POLYGON_EPlayerAction APG_Character::GetPlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.GetPlayerAction");

	APG_Character_GetPlayerAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_Character.GetIsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APG_Character::GetIsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.GetIsSprinting");

	APG_Character_GetIsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_Character.GetActiveCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCameraComponent* APG_Character::GetActiveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.GetActiveCamera");

	APG_Character_GetActiveCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_Character.EventTakeDamage
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::EventTakeDamage(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.EventTakeDamage");

	APG_Character_EventTakeDamage_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.EventPlayerDead
// (Event, Protected, BlueprintEvent)
void APG_Character::EventPlayerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.EventPlayerDead");

	APG_Character_EventPlayerDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.CameraNeutralizationEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::CameraNeutralizationEffectEvent(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.CameraNeutralizationEffectEvent");

	APG_Character_CameraNeutralizationEffectEvent_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_Character.ActionWhenTakeDamage_multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// unsigned char                  Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHeadshot                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     HitLocation                    (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal ImpactNormal                   (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     Origin                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_Character::ActionWhenTakeDamage_multicast(unsigned char Damage, bool bHeadshot, const struct FVector_NetQuantize& HitLocation, const struct FVector_NetQuantizeNormal& ImpactNormal, const struct FVector_NetQuantize& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_Character.ActionWhenTakeDamage_multicast");

	APG_Character_ActionWhenTakeDamage_multicast_Params params;
	params.Damage = Damage;
	params.bHeadshot = bHeadshot;
	params.HitLocation = HitLocation;
	params.ImpactNormal = ImpactNormal;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_FunctionLibraryKit.ParseOption
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Options                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Separator                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPG_FunctionLibraryKit::STATIC_ParseOption(const struct FString& Options, const struct FString& Key, const struct FString& Separator)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_FunctionLibraryKit.ParseOption");

	UPG_FunctionLibraryKit_ParseOption_Params params;
	params.Options = Options;
	params.Key = Key;
	params.Separator = Separator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_FunctionLibraryKit.GetRegionEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 regionName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// PlayFab_ERegion                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlayFab_ERegion UPG_FunctionLibraryKit::STATIC_GetRegionEnum(const struct FString& regionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_FunctionLibraryKit.GetRegionEnum");

	UPG_FunctionLibraryKit_GetRegionEnum_Params params;
	params.regionName = regionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_FunctionLibraryKit.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPG_FunctionLibraryKit::STATIC_GetProjectVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_FunctionLibraryKit.GetProjectVersion");

	UPG_FunctionLibraryKit_GetProjectVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_FunctionLibraryKit.GetBuildNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPG_FunctionLibraryKit::STATIC_GetBuildNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_FunctionLibraryKit.GetBuildNumber");

	UPG_FunctionLibraryKit_GetBuildNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_FunctionLibraryKit.ExitGame
// (Final, Native, Static, Public, BlueprintCallable)
void UPG_FunctionLibraryKit::STATIC_ExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_FunctionLibraryKit.ExitGame");

	UPG_FunctionLibraryKit_ExitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameInstance.GetClientTransfer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClientTransfer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClientTransfer* UPG_GameInstance::GetClientTransfer()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameInstance.GetClientTransfer");

	UPG_GameInstance_GetClientTransfer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_GameMode_Game.LoginPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APG_PlayerController_Game* PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 matchmakingTicket              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_GameMode_Game::LoginPlayer(class APG_PlayerController_Game* PlayerController, const struct FString& matchmakingTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameMode_Game.LoginPlayer");

	APG_GameMode_Game_LoginPlayer_Params params;
	params.PlayerController = PlayerController;
	params.matchmakingTicket = matchmakingTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.SetCanMovePlayers
// (Final, Native, Public)
// Parameters:
// bool                           newMoveState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_GameState_Game::SetCanMovePlayers(bool newMoveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.SetCanMovePlayers");

	APG_GameState_Game_SetCanMovePlayers_Params params;
	params.newMoveState = newMoveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_WinningTeam
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_WinningTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_WinningTeam");

	APG_GameState_Game_OnRep_WinningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_TeamRed
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_TeamRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_TeamRed");

	APG_GameState_Game_OnRep_TeamRed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_TeamBlue
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_TeamBlue()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_TeamBlue");

	APG_GameState_Game_OnRep_TeamBlue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_ScoreRedTeam
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_ScoreRedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_ScoreRedTeam");

	APG_GameState_Game_OnRep_ScoreRedTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_ScoreBlueTeam
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_ScoreBlueTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_ScoreBlueTeam");

	APG_GameState_Game_OnRep_ScoreBlueTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_Players
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_Players");

	APG_GameState_Game_OnRep_Players_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_GameTimer
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_GameTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_GameTimer");

	APG_GameState_Game_OnRep_GameTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_GameState
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_GameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_GameState");

	APG_GameState_Game_OnRep_GameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_CanMovePlayers
// (Final, Native, Private, Const)
void APG_GameState_Game::OnRep_CanMovePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.OnRep_CanMovePlayers");

	APG_GameState_Game_OnRep_CanMovePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.InformPlayerKilled_Multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class APG_PlayerState_Game*    Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APG_PlayerState_Game*    killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isHeadshot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isGrenade                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_GameState_Game::InformPlayerKilled_Multicast(class APG_PlayerState_Game* Player, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.InformPlayerKilled_Multicast");

	APG_GameState_Game_InformPlayerKilled_Multicast_Params params;
	params.Player = Player;
	params.killer = killer;
	params.isHeadshot = isHeadshot;
	params.isGrenade = isGrenade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_GameState_Game.GetScoreRedTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APG_GameState_Game::GetScoreRedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.GetScoreRedTeam");

	APG_GameState_Game_GetScoreRedTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_GameState_Game.GetScoreBlueTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APG_GameState_Game::GetScoreBlueTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.GetScoreBlueTeam");

	APG_GameState_Game_GetScoreBlueTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_GameState_Game.GetMaxScoreForWin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APG_GameState_Game::GetMaxScoreForWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.GetMaxScoreForWin");

	APG_GameState_Game_GetMaxScoreForWin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_GameState_Game.GetGameTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APG_GameState_Game::GetGameTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_GameState_Game.GetGameTimer");

	APG_GameState_Game_GetGameTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PG_PlayerController_Base.ShowError
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ErrorDetails                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void APG_PlayerController_Base::ShowError(const struct FText& ErrorMessage, const struct FText& ErrorDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Base.ShowError");

	APG_PlayerController_Base_ShowError_Params params;
	params.ErrorMessage = ErrorMessage;
	params.ErrorDetails = ErrorDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Base.SetGameFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFOV                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Base::SetGameFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Base.SetGameFOV");

	APG_PlayerController_Base_SetGameFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.StopInteractionEvent
// (Event, Protected, BlueprintEvent)
void APG_PlayerController_Game::StopInteractionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.StopInteractionEvent");

	APG_PlayerController_Game_StopInteractionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.StopInteraction_Client
// (Net, Native, Event, Public, NetClient)
void APG_PlayerController_Game::StopInteraction_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.StopInteraction_Client");

	APG_PlayerController_Game_StopInteraction_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.StartInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          interactionTime                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::StartInteractionEvent(float interactionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.StartInteractionEvent");

	APG_PlayerController_Game_StartInteractionEvent_Params params;
	params.interactionTime = interactionTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.StartInteraction_Client
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float                          interactionTime                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::StartInteraction_Client(float interactionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.StartInteraction_Client");

	APG_PlayerController_Game_StartInteraction_Client_Params params;
	params.interactionTime = interactionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::SetVisibleLoadingScreen(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen");

	APG_PlayerController_Game_SetVisibleLoadingScreen_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.NotifyPlayerKilledEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class APG_PlayerState_Game*    killed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APG_PlayerState_Game*    killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isHeadshot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isGrenade                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::NotifyPlayerKilledEvent(class APG_PlayerState_Game* killed, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.NotifyPlayerKilledEvent");

	APG_PlayerController_Game_NotifyPlayerKilledEvent_Params params;
	params.killed = killed;
	params.killer = killer;
	params.isHeadshot = isHeadshot;
	params.isGrenade = isGrenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.NotifyAddedGameScoreEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            addedScore                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// POLYGON_EAccrualTypeGameScore  addGameScoreType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 customString                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::NotifyAddedGameScoreEvent(int addedScore, POLYGON_EAccrualTypeGameScore addGameScoreType, const struct FString& customString)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.NotifyAddedGameScoreEvent");

	APG_PlayerController_Game_NotifyAddedGameScoreEvent_Params params;
	params.addedScore = addedScore;
	params.addGameScoreType = addGameScoreType;
	params.customString = customString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.NotifyAddedGameScore_Client
// (Net, Native, Event, Public, NetClient)
// Parameters:
// int16_t                        addedPoints                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// POLYGON_EAccrualTypeGameScore  addGameScoreType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 customString                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::NotifyAddedGameScore_Client(int16_t addedPoints, POLYGON_EAccrualTypeGameScore addGameScoreType, const struct FString& customString)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.NotifyAddedGameScore_Client");

	APG_PlayerController_Game_NotifyAddedGameScore_Client_Params params;
	params.addedPoints = addedPoints;
	params.addGameScoreType = addGameScoreType;
	params.customString = customString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.LoginPlayer_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FString                 matchmakingTicket              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::LoginPlayer_server(const struct FString& matchmakingTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.LoginPlayer_server");

	APG_PlayerController_Game_LoginPlayer_server_Params params;
	params.matchmakingTicket = matchmakingTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FChatMessage            Message                        (Parm, NativeAccessSpecifierPublic)
void APG_PlayerController_Game::DisplayMessageToChatEvent(const struct FChatMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent");

	APG_PlayerController_Game_DisplayMessageToChatEvent_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo
// (Native, Protected)
void APG_PlayerState_Base::UpdatePlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo");

	APG_PlayerState_Base_UpdatePlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Base.SetPlayerName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerState_Base::SetPlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Base.SetPlayerName");

	APG_PlayerState_Base_SetPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Game.SpawnCharacter_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// POLYGON_EControlPoint          spawnToControlPoint            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerState_Game::SpawnCharacter_server(POLYGON_EControlPoint spawnToControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Game.SpawnCharacter_server");

	APG_PlayerState_Game_SpawnCharacter_server_Params params;
	params.spawnToControlPoint = spawnToControlPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Game.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// POLYGON_ETeam                  newTeam                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APG_PlayerState_Game::SetTeam(POLYGON_ETeam newTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Game.SetTeam");

	APG_PlayerState_Game_SetTeam_Params params;
	params.newTeam = newTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_Team
// (Final, Native, Private)
void APG_PlayerState_Game::OnRep_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Game.OnRep_Team");

	APG_PlayerState_Game_OnRep_Team_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_NumberKills
// (Final, Native, Private)
void APG_PlayerState_Game::OnRep_NumberKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Game.OnRep_NumberKills");

	APG_PlayerState_Game_OnRep_NumberKills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths
// (Final, Native, Private)
void APG_PlayerState_Game::OnRep_NumberDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths");

	APG_PlayerState_Game_OnRep_NumberDeaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PlayerCoreComponent.ParsePlayerCombinedInfo
// (Final, Native, Private)
void UPlayerCoreComponent::ParsePlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.ParsePlayerCombinedInfo");

	UPlayerCoreComponent_ParsePlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PlayerCoreComponent.OnRep_TotalProgress
// (Final, Native, Private)
void UPlayerCoreComponent::OnRep_TotalProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.OnRep_TotalProgress");

	UPlayerCoreComponent_OnRep_TotalProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PlayerCoreComponent.GetNextLevelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLevelInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FLevelInfo UPlayerCoreComponent::GetNextLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.GetNextLevelInfo");

	UPlayerCoreComponent_GetNextLevelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PlayerCoreComponent.GetNextLevelByLevelID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   LevelID                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FLevelInfo UPlayerCoreComponent::STATIC_GetNextLevelByLevelID(const struct FName& LevelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.GetNextLevelByLevelID");

	UPlayerCoreComponent_GetNextLevelByLevelID_Params params;
	params.LevelID = LevelID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PlayerCoreComponent.GetLevelByProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FLevelInfo UPlayerCoreComponent::STATIC_GetLevelByProgress(int Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.GetLevelByProgress");

	UPlayerCoreComponent_GetLevelByProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PlayerCoreComponent.GetCurrentLevelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLevelInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FLevelInfo UPlayerCoreComponent::GetCurrentLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.GetCurrentLevelInfo");

	UPlayerCoreComponent_GetCurrentLevelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.PlayerCoreComponent.AddGameScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            addScore                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// POLYGON_EAccrualTypeGameScore  accrualTypeGameScore           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 customString                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerCoreComponent::AddGameScore(int addScore, POLYGON_EAccrualTypeGameScore accrualTypeGameScore, const struct FString& customString)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.AddGameScore");

	UPlayerCoreComponent_AddGameScore_Params params;
	params.addScore = addScore;
	params.accrualTypeGameScore = accrualTypeGameScore;
	params.customString = customString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.PlayerCoreComponent.AddCurrency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AddCurrency                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerCoreComponent::AddCurrency(int AddCurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.PlayerCoreComponent.AddCurrency");

	UPlayerCoreComponent_AddCurrency_Params params;
	params.AddCurrency = AddCurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.ServerBackendComponent.GetLobbyID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UServerBackendComponent::GetLobbyID()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.ServerBackendComponent.GetLobbyID");

	UServerBackendComponent_GetLobbyID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.ToggleAiming_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UWeaponComponent::ToggleAiming_server()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.ToggleAiming_server");

	UWeaponComponent_ToggleAiming_server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Yaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newYawRecoil                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::SetWeaponRecoilAlpha_Yaw(float newYawRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Yaw");

	UWeaponComponent_SetWeaponRecoilAlpha_Yaw_Params params;
	params.newYawRecoil = newYawRecoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Roll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newRollRecoil                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::SetWeaponRecoilAlpha_Roll(float newRollRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Roll");

	UWeaponComponent_SetWeaponRecoilAlpha_Roll_Params params;
	params.newRollRecoil = newRollRecoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Pitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newPitchRecoil                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::SetWeaponRecoilAlpha_Pitch(float newPitchRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Pitch");

	UWeaponComponent_SetWeaponRecoilAlpha_Pitch_Params params;
	params.newPitchRecoil = newPitchRecoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Backward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newBackwardRecoil              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::SetWeaponRecoilAlpha_Backward(float newBackwardRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Backward");

	UWeaponComponent_SetWeaponRecoilAlpha_Backward_Params params;
	params.newBackwardRecoil = newBackwardRecoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.SetWantsToAiming_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                           NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::SetWantsToAiming_server(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.SetWantsToAiming_server");

	UWeaponComponent_SetWantsToAiming_server_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.SelectWeaponSlot_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// unsigned char                  Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::SelectWeaponSlot_server(unsigned char Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.SelectWeaponSlot_server");

	UWeaponComponent_SelectWeaponSlot_server_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.ParsePlayerCombinedInfo
// (Final, Native, Private)
void UWeaponComponent::ParsePlayerCombinedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.ParsePlayerCombinedInfo");

	UWeaponComponent_ParsePlayerCombinedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.OnRep_SecondaryWeapon
// (Final, Native, Private)
void UWeaponComponent::OnRep_SecondaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.OnRep_SecondaryWeapon");

	UWeaponComponent_OnRep_SecondaryWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.OnRep_PrimaryWeapon
// (Final, Native, Private)
void UWeaponComponent::OnRep_PrimaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.OnRep_PrimaryWeapon");

	UWeaponComponent_OnRep_PrimaryWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.OnRep_GrenadesNumber
// (Final, Native, Private)
void UWeaponComponent::OnRep_GrenadesNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.OnRep_GrenadesNumber");

	UWeaponComponent_OnRep_GrenadesNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.OnRep_CurrentWeapon
// (Final, Native, Private)
void UWeaponComponent::OnRep_CurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.OnRep_CurrentWeapon");

	UWeaponComponent_OnRep_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.NotifyServerThrowGrenade
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UWeaponComponent::NotifyServerThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.NotifyServerThrowGrenade");

	UWeaponComponent_NotifyServerThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function POLYGON.WeaponComponent.IsAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWeaponComponent::IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.IsAiming");

	UWeaponComponent_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Yaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWeaponComponent::GetWeaponRecoilAlpha_Yaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Yaw");

	UWeaponComponent_GetWeaponRecoilAlpha_Yaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Roll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWeaponComponent::GetWeaponRecoilAlpha_Roll()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Roll");

	UWeaponComponent_GetWeaponRecoilAlpha_Roll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Pitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWeaponComponent::GetWeaponRecoilAlpha_Pitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Pitch");

	UWeaponComponent_GetWeaponRecoilAlpha_Pitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Backward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWeaponComponent::GetWeaponRecoilAlpha_Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Backward");

	UWeaponComponent_GetWeaponRecoilAlpha_Backward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.GetIsShooting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWeaponComponent::GetIsShooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.GetIsShooting");

	UWeaponComponent_GetIsShooting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function POLYGON.WeaponComponent.AddGrenate_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  Number                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWeaponComponent::AddGrenate_server(unsigned char Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function POLYGON.WeaponComponent.AddGrenate_server");

	UWeaponComponent_AddGrenate_server_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
