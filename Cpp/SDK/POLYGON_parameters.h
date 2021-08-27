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

// Function POLYGON.ChatSystemComponent.SentMessage_Multicast
struct UChatSystemComponent_SentMessage_Multicast_Params
{
	struct FChatMessage                                Message;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function POLYGON.ChatSystemComponent.SendMessage_Server
struct UChatSystemComponent_SendMessage_Server_Params
{
	struct FChatMessage                                Message;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientBackendComponent.SetPlayerId
struct UClientBackendComponent_SetPlayerId_Params
{
	struct FPlayerId                                   newPlayerId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientBackendComponent.SetPlayerCombinedInfo
struct UClientBackendComponent_SetPlayerCombinedInfo_Params
{
	class UPlayFabJsonObject*                          newPlayerCombinedInfo;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientBackendComponent.IsClientLoggedIn
struct UClientBackendComponent_IsClientLoggedIn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientBackendComponent.GetPlayerCombinedInfo
struct UClientBackendComponent_GetPlayerCombinedInfo_Params
{
	class UPlayFabJsonObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientTransfer.SetPlayerId
struct UClientTransfer_SetPlayerId_Params
{
	struct FPlayerId                                   newPlayerId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientTransfer.SetPlayerCombinedInfo
struct UClientTransfer_SetPlayerCombinedInfo_Params
{
	class UPlayFabJsonObject*                          newPlayerCombinedInfo;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientTransfer.SetMatchmakingTicket
struct UClientTransfer_SetMatchmakingTicket_Params
{
	struct FString                                     newTicket;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientTransfer.GetPlayerId
struct UClientTransfer_GetPlayerId_Params
{
	struct FPlayerId                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientTransfer.GetPlayerCombinedInfo
struct UClientTransfer_GetPlayerCombinedInfo_Params
{
	class UPlayFabJsonObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ClientTransfer.GetMatchmakingTicket
struct UClientTransfer_GetMatchmakingTicket_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ControlPoint.OnRep_IsCapture
struct AControlPoint_OnRep_IsCapture_Params
{
};

// Function POLYGON.ControlPoint.OnRep_CapturePointsRedTeam
struct AControlPoint_OnRep_CapturePointsRedTeam_Params
{
};

// Function POLYGON.ControlPoint.OnRep_CapturePointsBlueTeam
struct AControlPoint_OnRep_CapturePointsBlueTeam_Params
{
};

// Function POLYGON.ControlPoint.OnRep_CapturedTeam
struct AControlPoint_OnRep_CapturedTeam_Params
{
};

// Function POLYGON.ControlPoint.GetControlPointNameAsString
struct AControlPoint_GetControlPointNameAsString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ControlPoint.GetControlPointNameAsOneLetter
struct AControlPoint_GetControlPointNameAsOneLetter_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.DataManagerLibrary.GetDataTable_MapsInfo
struct UDataManagerLibrary_GetDataTable_MapsInfo_Params
{
	class UDataTable*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.DataManagerLibrary.GetDataTable_LevelInfo
struct UDataManagerLibrary_GetDataTable_LevelInfo_Params
{
	class UDataTable*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.DataManagerLibrary.GetDataTable_ItemReferences
struct UDataManagerLibrary_GetDataTable_ItemReferences_Params
{
	class UDataTable*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.HealthStatsComponent.OnRep_Health
struct UHealthStatsComponent_OnRep_Health_Params
{
};

// Function POLYGON.HealthStatsComponent.GetStamina
struct UHealthStatsComponent_GetStamina_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.HealthStatsComponent.GetHealth
struct UHealthStatsComponent_GetHealth_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.InteractInterface.StopInteract
struct UInteractInterface_StopInteract_Params
{
	class APG_Character*                               Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.InteractInterface.StartInteract
struct UInteractInterface_StartInteract_Params
{
	class APG_Character*                               Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.InteractInterface.SetPlayerLooks
struct UInteractInterface_SetPlayerLooks_Params
{
	bool                                               isLooks;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Module_Optic.ToggleAiming
struct AItem_Module_Optic_ToggleAiming_Params
{
	bool                                               IsAiming;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.StartReload_multicast
struct AItem_Weapon_General_StartReload_multicast_Params
{
	bool                                               bFullReload;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.SetWeaponModules
struct AItem_Weapon_General_SetWeaponModules_Params
{
	class UPlayFabJsonObject*                          modules;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.ResetWeapon
struct AItem_Weapon_General_ResetWeapon_Params
{
};

// Function POLYGON.Item_Weapon_General.RequestReload_server
struct AItem_Weapon_General_RequestReload_server_Params
{
	int8_t                                             CurrentNumberAmmo;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.OnRep_WeaponModules
struct AItem_Weapon_General_OnRep_WeaponModules_Params
{
};

// Function POLYGON.Item_Weapon_General.OnRep_CurrentStockAmmo
struct AItem_Weapon_General_OnRep_CurrentStockAmmo_Params
{
};

// Function POLYGON.Item_Weapon_General.NotifyServerOfMiss
struct AItem_Weapon_General_NotifyServerOfMiss_Params
{
};

// Function POLYGON.Item_Weapon_General.NotifyServerOfHitUnreliable
struct AItem_Weapon_General_NotifyServerOfHitUnreliable_Params
{
	struct FWeaponHitUnreliable                        weaponHit;                                                 // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.NotifyServerOfHitOnCharacter
struct AItem_Weapon_General_NotifyServerOfHitOnCharacter_Params
{
	struct FWeaponHitOnCharacter                       WeaponHitOnCharacter;                                      // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.GetWeaponModules
struct AItem_Weapon_General_GetWeaponModules_Params
{
	TArray<class AItem_Module_General*>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.GetWeaponMesh
struct AItem_Weapon_General_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.GetMagazine
struct AItem_Weapon_General_GetMagazine_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.GetForwardShot
struct AItem_Weapon_General_GetForwardShot_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.GetCurrentStockAmmo
struct AItem_Weapon_General_GetCurrentStockAmmo_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.AddStockAmmo_server
struct AItem_Weapon_General_AddStockAmmo_server_Params
{
	int8_t                                             addAmmo;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.Item_Weapon_General.ActionWhenShotWithoutHit_multicast
struct AItem_Weapon_General_ActionWhenShotWithoutHit_multicast_Params
{
};

// Function POLYGON.Item_Weapon_General.ActionWhenShotWithHit_multicast
struct AItem_Weapon_General_ActionWhenShotWithHit_multicast_Params
{
	struct FWeaponHitUnreliable                        weaponHit;                                                 // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function POLYGON.MenuCharacter.ParsePlayerCombinedInfo
struct AMenuCharacter_ParsePlayerCombinedInfo_Params
{
};

// Function POLYGON.PG_Character.TiltBody_server
struct APG_Character_TiltBody_server_Params
{
	int8_t                                             tintBodyAlpha;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.StopInteract_server
struct APG_Character_StopInteract_server_Params
{
};

// Function POLYGON.PG_Character.StopInteract
struct APG_Character_StopInteract_Params
{
};

// Function POLYGON.PG_Character.StartShooting
struct APG_Character_StartShooting_Params
{
};

// Function POLYGON.PG_Character.StartInteract_server
struct APG_Character_StartInteract_server_Params
{
};

// Function POLYGON.PG_Character.StartInteract
struct APG_Character_StartInteract_Params
{
};

// Function POLYGON.PG_Character.SetViewMode
struct APG_Character_SetViewMode_Params
{
	POLYGON_ECameraViewMode                            newViewMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.SetIsSprinting_server
struct APG_Character_SetIsSprinting_server_Params
{
	bool                                               NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.PlayerDead_multicast
struct APG_Character_PlayerDead_multicast_Params
{
	struct FVector_NetQuantize                         Impulse;                                                   // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BoneName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.PlayAnimMontage_multicast
struct APG_Character_PlayAnimMontage_multicast_Params
{
	class UAnimMontage*                                AnimMontage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreOwner;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.OnRep_PlayerAction
struct APG_Character_OnRep_PlayerAction_Params
{
};

// Function POLYGON.PG_Character.OnRep_CameraViewMode
struct APG_Character_OnRep_CameraViewMode_Params
{
};

// Function POLYGON.PG_Character.InteractPlayerLooks
struct APG_Character_InteractPlayerLooks_Params
{
};

// Function POLYGON.PG_Character.GetPlayerAction
struct APG_Character_GetPlayerAction_Params
{
	POLYGON_EPlayerAction                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.GetIsSprinting
struct APG_Character_GetIsSprinting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.GetActiveCamera
struct APG_Character_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.EventTakeDamage
struct APG_Character_EventTakeDamage_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.EventPlayerDead
struct APG_Character_EventPlayerDead_Params
{
};

// Function POLYGON.PG_Character.CameraNeutralizationEffectEvent
struct APG_Character_CameraNeutralizationEffectEvent_Params
{
	float                                              Damage;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_Character.ActionWhenTakeDamage_multicast
struct APG_Character_ActionWhenTakeDamage_multicast_Params
{
	unsigned char                                      Damage;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeadshot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         HitLocation;                                               // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Origin;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_FunctionLibraryKit.ParseOption
struct UPG_FunctionLibraryKit_ParseOption_Params
{
	struct FString                                     Options;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Separator;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_FunctionLibraryKit.GetRegionEnum
struct UPG_FunctionLibraryKit_GetRegionEnum_Params
{
	struct FString                                     regionName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlayFab_ERegion                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_FunctionLibraryKit.GetProjectVersion
struct UPG_FunctionLibraryKit_GetProjectVersion_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_FunctionLibraryKit.GetBuildNumber
struct UPG_FunctionLibraryKit_GetBuildNumber_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_FunctionLibraryKit.ExitGame
struct UPG_FunctionLibraryKit_ExitGame_Params
{
};

// Function POLYGON.PG_GameInstance.GetClientTransfer
struct UPG_GameInstance_GetClientTransfer_Params
{
	class UClientTransfer*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameMode_Game.LoginPlayer
struct APG_GameMode_Game_LoginPlayer_Params
{
	class APG_PlayerController_Game*                   PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     matchmakingTicket;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameState_Game.SetCanMovePlayers
struct APG_GameState_Game_SetCanMovePlayers_Params
{
	bool                                               newMoveState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameState_Game.OnRep_WinningTeam
struct APG_GameState_Game_OnRep_WinningTeam_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_TeamRed
struct APG_GameState_Game_OnRep_TeamRed_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_TeamBlue
struct APG_GameState_Game_OnRep_TeamBlue_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_ScoreRedTeam
struct APG_GameState_Game_OnRep_ScoreRedTeam_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_ScoreBlueTeam
struct APG_GameState_Game_OnRep_ScoreBlueTeam_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_Players
struct APG_GameState_Game_OnRep_Players_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_GameTimer
struct APG_GameState_Game_OnRep_GameTimer_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_GameState
struct APG_GameState_Game_OnRep_GameState_Params
{
};

// Function POLYGON.PG_GameState_Game.OnRep_CanMovePlayers
struct APG_GameState_Game_OnRep_CanMovePlayers_Params
{
};

// Function POLYGON.PG_GameState_Game.InformPlayerKilled_Multicast
struct APG_GameState_Game_InformPlayerKilled_Multicast_Params
{
	class APG_PlayerState_Game*                        Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APG_PlayerState_Game*                        killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isHeadshot;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isGrenade;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameState_Game.GetScoreRedTeam
struct APG_GameState_Game_GetScoreRedTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameState_Game.GetScoreBlueTeam
struct APG_GameState_Game_GetScoreBlueTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameState_Game.GetMaxScoreForWin
struct APG_GameState_Game_GetMaxScoreForWin_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_GameState_Game.GetGameTimer
struct APG_GameState_Game_GetGameTimer_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Base.ShowError
struct APG_PlayerController_Base_ShowError_Params
{
	struct FText                                       ErrorMessage;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ErrorDetails;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Base.SetGameFOV
struct APG_PlayerController_Base_SetGameFOV_Params
{
	float                                              NewFOV;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.StopInteractionEvent
struct APG_PlayerController_Game_StopInteractionEvent_Params
{
};

// Function POLYGON.PG_PlayerController_Game.StopInteraction_Client
struct APG_PlayerController_Game_StopInteraction_Client_Params
{
};

// Function POLYGON.PG_PlayerController_Game.StartInteractionEvent
struct APG_PlayerController_Game_StartInteractionEvent_Params
{
	float                                              interactionTime;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.StartInteraction_Client
struct APG_PlayerController_Game_StartInteraction_Client_Params
{
	float                                              interactionTime;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen
struct APG_PlayerController_Game_SetVisibleLoadingScreen_Params
{
	bool                                               IsVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.NotifyPlayerKilledEvent
struct APG_PlayerController_Game_NotifyPlayerKilledEvent_Params
{
	class APG_PlayerState_Game*                        killed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APG_PlayerState_Game*                        killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isHeadshot;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isGrenade;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.NotifyAddedGameScoreEvent
struct APG_PlayerController_Game_NotifyAddedGameScoreEvent_Params
{
	int                                                addedScore;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	POLYGON_EAccrualTypeGameScore                      addGameScoreType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     customString;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.NotifyAddedGameScore_Client
struct APG_PlayerController_Game_NotifyAddedGameScore_Client_Params
{
	int16_t                                            addedPoints;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	POLYGON_EAccrualTypeGameScore                      addGameScoreType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     customString;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.LoginPlayer_server
struct APG_PlayerController_Game_LoginPlayer_server_Params
{
	struct FString                                     matchmakingTicket;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent
struct APG_PlayerController_Game_DisplayMessageToChatEvent_Params
{
	struct FChatMessage                                Message;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo
struct APG_PlayerState_Base_UpdatePlayerCombinedInfo_Params
{
};

// Function POLYGON.PG_PlayerState_Base.SetPlayerName
struct APG_PlayerState_Base_SetPlayerName_Params
{
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerState_Game.SpawnCharacter_server
struct APG_PlayerState_Game_SpawnCharacter_server_Params
{
	POLYGON_EControlPoint                              spawnToControlPoint;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerState_Game.SetTeam
struct APG_PlayerState_Game_SetTeam_Params
{
	POLYGON_ETeam                                      newTeam;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PG_PlayerState_Game.OnRep_Team
struct APG_PlayerState_Game_OnRep_Team_Params
{
};

// Function POLYGON.PG_PlayerState_Game.OnRep_NumberKills
struct APG_PlayerState_Game_OnRep_NumberKills_Params
{
};

// Function POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths
struct APG_PlayerState_Game_OnRep_NumberDeaths_Params
{
};

// Function POLYGON.PlayerCoreComponent.ParsePlayerCombinedInfo
struct UPlayerCoreComponent_ParsePlayerCombinedInfo_Params
{
};

// Function POLYGON.PlayerCoreComponent.OnRep_TotalProgress
struct UPlayerCoreComponent_OnRep_TotalProgress_Params
{
};

// Function POLYGON.PlayerCoreComponent.GetNextLevelInfo
struct UPlayerCoreComponent_GetNextLevelInfo_Params
{
	struct FLevelInfo                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.PlayerCoreComponent.GetNextLevelByLevelID
struct UPlayerCoreComponent_GetNextLevelByLevelID_Params
{
	struct FName                                       LevelID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelInfo                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.PlayerCoreComponent.GetLevelByProgress
struct UPlayerCoreComponent_GetLevelByProgress_Params
{
	int                                                Progress;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelInfo                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.PlayerCoreComponent.GetCurrentLevelInfo
struct UPlayerCoreComponent_GetCurrentLevelInfo_Params
{
	struct FLevelInfo                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function POLYGON.PlayerCoreComponent.AddGameScore
struct UPlayerCoreComponent_AddGameScore_Params
{
	int                                                addScore;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	POLYGON_EAccrualTypeGameScore                      accrualTypeGameScore;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     customString;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.PlayerCoreComponent.AddCurrency
struct UPlayerCoreComponent_AddCurrency_Params
{
	int                                                AddCurrency;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.ServerBackendComponent.GetLobbyID
struct UServerBackendComponent_GetLobbyID_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.ToggleAiming_server
struct UWeaponComponent_ToggleAiming_server_Params
{
};

// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Yaw
struct UWeaponComponent_SetWeaponRecoilAlpha_Yaw_Params
{
	float                                              newYawRecoil;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Roll
struct UWeaponComponent_SetWeaponRecoilAlpha_Roll_Params
{
	float                                              newRollRecoil;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Pitch
struct UWeaponComponent_SetWeaponRecoilAlpha_Pitch_Params
{
	float                                              newPitchRecoil;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.SetWeaponRecoilAlpha_Backward
struct UWeaponComponent_SetWeaponRecoilAlpha_Backward_Params
{
	float                                              newBackwardRecoil;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.SetWantsToAiming_server
struct UWeaponComponent_SetWantsToAiming_server_Params
{
	bool                                               NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.SelectWeaponSlot_server
struct UWeaponComponent_SelectWeaponSlot_server_Params
{
	unsigned char                                      Slot;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.ParsePlayerCombinedInfo
struct UWeaponComponent_ParsePlayerCombinedInfo_Params
{
};

// Function POLYGON.WeaponComponent.OnRep_SecondaryWeapon
struct UWeaponComponent_OnRep_SecondaryWeapon_Params
{
};

// Function POLYGON.WeaponComponent.OnRep_PrimaryWeapon
struct UWeaponComponent_OnRep_PrimaryWeapon_Params
{
};

// Function POLYGON.WeaponComponent.OnRep_GrenadesNumber
struct UWeaponComponent_OnRep_GrenadesNumber_Params
{
};

// Function POLYGON.WeaponComponent.OnRep_CurrentWeapon
struct UWeaponComponent_OnRep_CurrentWeapon_Params
{
};

// Function POLYGON.WeaponComponent.NotifyServerThrowGrenade
struct UWeaponComponent_NotifyServerThrowGrenade_Params
{
};

// Function POLYGON.WeaponComponent.IsAiming
struct UWeaponComponent_IsAiming_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Yaw
struct UWeaponComponent_GetWeaponRecoilAlpha_Yaw_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Roll
struct UWeaponComponent_GetWeaponRecoilAlpha_Roll_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Pitch
struct UWeaponComponent_GetWeaponRecoilAlpha_Pitch_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.GetWeaponRecoilAlpha_Backward
struct UWeaponComponent_GetWeaponRecoilAlpha_Backward_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.GetIsShooting
struct UWeaponComponent_GetIsShooting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POLYGON.WeaponComponent.AddGrenate_server
struct UWeaponComponent_AddGrenate_server_Params
{
	unsigned char                                      Number;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
