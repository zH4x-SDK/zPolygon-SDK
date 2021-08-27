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

// Function Water.BuoyancyComponent.OnPontoonExitedWater
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon       Pontoon                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBuoyancyComponent::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonExitedWater");

	UBuoyancyComponent_OnPontoonExitedWater_Params params;
	params.Pontoon = Pontoon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.BuoyancyComponent.OnPontoonEnteredWater
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon       Pontoon                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBuoyancyComponent::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonEnteredWater");

	UBuoyancyComponent_OnPontoonEnteredWater_Params params;
	params.Pontoon = Pontoon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.BuoyancyComponent.IsInWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBuoyancyComponent::IsInWaterBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsInWaterBody");

	UBuoyancyComponent_IsInWaterBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OutWaterPlaneLocation          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutWaterPlaneNormal            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutWaterSurfacePosition        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutWaterDepth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutWaterBodyIdx                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutWaterVelocity               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo");

	UBuoyancyComponent_GetLastWaterSurfaceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = params.OutWaterPlaneLocation;
	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = params.OutWaterPlaneNormal;
	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = params.OutWaterSurfacePosition;
	if (OutWaterDepth != nullptr)
		*OutWaterDepth = params.OutWaterDepth;
	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = params.OutWaterBodyIdx;
	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = params.OutWaterVelocity;

}


// Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGerstnerWave>   OutWaves                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves");

	UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWaves != nullptr)
		*OutWaves = params.OutWaves;

}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWaterBody*              WaterBody                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraWaterFunctionLibrary::STATIC_SetWaterBody(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class AWaterBody* WaterBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBody");

	UNiagaraWaterFunctionLibrary_SetWaterBody_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.WaterBody = WaterBody;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterBody.SetWaterWaves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWaterWavesBase*         InWaterWaves                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterWaves");

	AWaterBody_SetWaterWaves_Params params;
	params.InWaterWaves = InWaterWaves;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterBody.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShapeOrPositionChanged        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWeightmapSettingsChanged      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyChanged");

	AWaterBody_OnWaterBodyChanged_Params params;
	params.bShapeOrPositionChanged = bShapeOrPositionChanged;
	params.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterBody.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWaterSplineComponent* AWaterBody::GetWaterSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterSpline");

	AWaterBody_GetWaterSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterialInstance");

	AWaterBody_GetWaterMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetWaterMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* AWaterBody::GetWaterMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterial");

	AWaterBody_GetWaterMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance");

	AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance");

	AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance");

	AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetMaxWaveHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWaterBody::GetMaxWaveHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetMaxWaveHeight");

	AWaterBody_GetMaxWaveHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyIsland*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetIslands");

	AWaterBody_GetIslands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBody.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyExclusionVolume*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetExclusionVolumes");

	AWaterBody_GetExclusionVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterBodyIsland.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBodyIsland.GetWaterSpline");

	AWaterBodyIsland_GetWaterSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterMeshComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWaterMeshComponent::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterMeshComponent.IsEnabled");

	UWaterMeshComponent_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.SetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFloodHeight                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.SetOceanFloodHeight");

	UWaterSubsystem_SetOceanFloodHeight_Params params;
	params.InFloodHeight = InFloodHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterSubsystem.PrintToWaterLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWarning                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWaterSubsystem::PrintToWaterLog(const struct FString& Message, bool bWarning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.PrintToWaterLog");

	UWaterSubsystem_PrintToWaterLog_Params params;
	params.Message = Message;
	params.bWarning = bWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsWaterRenderingEnabled");

	UWaterSubsystem_IsWaterRenderingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled");

	UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled");

	UWaterSubsystem_IsShallowWaterSimulationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetWaterTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWaterSubsystem::GetWaterTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetWaterTimeSeconds");

	UWaterSubsystem_GetWaterTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds");

	UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWaterSubsystem::STATIC_GetShallowWaterSimulationRenderTargetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize");

	UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWaterSubsystem::STATIC_GetShallowWaterMaxImpulseForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces");

	UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWaterSubsystem::STATIC_GetShallowWaterMaxDynamicForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces");

	UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanTotalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWaterSubsystem::GetOceanTotalHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanTotalHeight");

	UWaterSubsystem_GetOceanTotalHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWaterSubsystem::GetOceanFloodHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanFloodHeight");

	UWaterSubsystem_GetOceanFloodHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanBaseHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWaterSubsystem::GetOceanBaseHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanBaseHeight");

	UWaterSubsystem_GetOceanBaseHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetCameraUnderwaterDepth");

	UWaterSubsystem_GetCameraUnderwaterDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
