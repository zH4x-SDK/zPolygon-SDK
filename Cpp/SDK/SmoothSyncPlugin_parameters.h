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

// Function SmoothSyncPlugin.SmoothSync.teleport
struct USmoothSync_teleport_Params
{
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
struct USmoothSync_SmoothSyncTeleportServerToClients_Params
{
	struct FVector                                     Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tempOwnerTime;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
struct USmoothSync_SmoothSyncTeleportClientToServer_Params
{
	struct FVector                                     Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tempOwnerTime;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
struct USmoothSync_SmoothSyncEnableServerToClients_Params
{
	bool                                               enable;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
struct USmoothSync_SmoothSyncEnableClientToServer_Params
{
	bool                                               enable;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
struct USmoothSync_setSceneComponentToSync_Params
{
	class USceneComponent*                             theComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
struct USmoothSync_ServerSendsTransformToEveryone_Params
{
	TArray<unsigned char>                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame
struct USmoothSync_forceStateSendNextFrame_Params
{
};

// Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
struct USmoothSync_enableSmoothSync_Params
{
	bool                                               enable;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
struct USmoothSync_ClientSendsTransformToServer_Params
{
	TArray<unsigned char>                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.clearBuffer
struct USmoothSync_clearBuffer_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
