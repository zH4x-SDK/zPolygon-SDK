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

// Function SmoothSyncPlugin.SmoothSync.teleport
// (Final, Native, Public, BlueprintCallable)
void USmoothSync::teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.teleport");

	USmoothSync_teleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          tempOwnerTime                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmoothSync::SmoothSyncTeleportServerToClients(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float tempOwnerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients");

	USmoothSync_SmoothSyncTeleportServerToClients_Params params;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.tempOwnerTime = tempOwnerTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          tempOwnerTime                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmoothSync::SmoothSyncTeleportClientToServer(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float tempOwnerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer");

	USmoothSync_SmoothSyncTeleportClientToServer_Params params;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.tempOwnerTime = tempOwnerTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
// (Net, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmoothSync::SmoothSyncEnableServerToClients(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients");

	USmoothSync_SmoothSyncEnableServerToClients_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmoothSync::SmoothSyncEnableClientToServer(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer");

	USmoothSync_SmoothSyncEnableClientToServer_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         theComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmoothSync::setSceneComponentToSync(class USceneComponent* theComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync");

	USmoothSync_setSceneComponentToSync_Params params;
	params.theComponent = theComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
// (Net, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// TArray<unsigned char>          Value                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void USmoothSync::ServerSendsTransformToEveryone(TArray<unsigned char> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone");

	USmoothSync_ServerSendsTransformToEveryone_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame
// (Final, Native, Public, BlueprintCallable)
void USmoothSync::forceStateSendNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame");

	USmoothSync_forceStateSendNextFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmoothSync::enableSmoothSync(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.enableSmoothSync");

	USmoothSync_enableSmoothSync_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          Value                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void USmoothSync::ClientSendsTransformToServer(TArray<unsigned char> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer");

	USmoothSync_ClientSendsTransformToServer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmoothSyncPlugin.SmoothSync.clearBuffer
// (Final, Native, Public, BlueprintCallable)
void USmoothSync::clearBuffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.clearBuffer");

	USmoothSync_clearBuffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
