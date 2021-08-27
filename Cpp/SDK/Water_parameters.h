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

// Function Water.BuoyancyComponent.OnPontoonExitedWater
struct UBuoyancyComponent_OnPontoonExitedWater_Params
{
	struct FSphericalPontoon                           Pontoon;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Water.BuoyancyComponent.OnPontoonEnteredWater
struct UBuoyancyComponent_OnPontoonEnteredWater_Params
{
	struct FSphericalPontoon                           Pontoon;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Water.BuoyancyComponent.IsInWaterBody
struct UBuoyancyComponent_IsInWaterBody_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
struct UBuoyancyComponent_GetLastWaterSurfaceInfo_Params
{
	struct FVector                                     OutWaterPlaneLocation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutWaterPlaneNormal;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutWaterSurfacePosition;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutWaterDepth;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutWaterBodyIdx;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutWaterVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
struct UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params
{
	TArray<struct FGerstnerWave>                       OutWaves;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
struct UNiagaraWaterFunctionLibrary_SetWaterBody_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaterBody*                                  WaterBody;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.SetWaterWaves
struct AWaterBody_SetWaterWaves_Params
{
	class UWaterWavesBase*                             InWaterWaves;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.OnWaterBodyChanged
struct AWaterBody_OnWaterBodyChanged_Params
{
	bool                                               bShapeOrPositionChanged;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeightmapSettingsChanged;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetWaterSpline
struct AWaterBody_GetWaterSpline_Params
{
	class UWaterSplineComponent*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetWaterMaterialInstance
struct AWaterBody_GetWaterMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetWaterMaterial
struct AWaterBody_GetWaterMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
struct AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
struct AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
struct AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetMaxWaveHeight
struct AWaterBody_GetMaxWaveHeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetIslands
struct AWaterBody_GetIslands_Params
{
	TArray<class AWaterBodyIsland*>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Water.WaterBody.GetExclusionVolumes
struct AWaterBody_GetExclusionVolumes_Params
{
	TArray<class AWaterBodyExclusionVolume*>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Water.WaterBodyIsland.GetWaterSpline
struct AWaterBodyIsland_GetWaterSpline_Params
{
	class UWaterSplineComponent*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterMeshComponent.IsEnabled
struct UWaterMeshComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.SetOceanFloodHeight
struct UWaterSubsystem_SetOceanFloodHeight_Params
{
	float                                              InFloodHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.PrintToWaterLog
struct UWaterSubsystem_PrintToWaterLog_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWarning;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.IsWaterRenderingEnabled
struct UWaterSubsystem_IsWaterRenderingEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
struct UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
struct UWaterSubsystem_IsShallowWaterSimulationEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetWaterTimeSeconds
struct UWaterSubsystem_GetWaterTimeSeconds_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
struct UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
struct UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
struct UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
struct UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetOceanTotalHeight
struct UWaterSubsystem_GetOceanTotalHeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetOceanFloodHeight
struct UWaterSubsystem_GetOceanFloodHeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetOceanBaseHeight
struct UWaterSubsystem_GetOceanBaseHeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
struct UWaterSubsystem_GetCameraUnderwaterDepth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
