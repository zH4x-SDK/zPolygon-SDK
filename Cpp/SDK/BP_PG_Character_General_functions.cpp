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

// Function BP_PG_Character_General.BP_PG_Character_General_C.SetVisibleMarkerFromDistance
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PG_Character_General_C::SetVisibleMarkerFromDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.SetVisibleMarkerFromDistance");

	ABP_PG_Character_General_C_SetVisibleMarkerFromDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.AddPlayerMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PG_Character_General_C::AddPlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.AddPlayerMarker");

	ABP_PG_Character_General_C_AddPlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.Timeline_CameraRadialBlur__FinishedFunc
// (BlueprintEvent)
void ABP_PG_Character_General_C::Timeline_CameraRadialBlur__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.Timeline_CameraRadialBlur__FinishedFunc");

	ABP_PG_Character_General_C_Timeline_CameraRadialBlur__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.Timeline_CameraRadialBlur__UpdateFunc
// (BlueprintEvent)
void ABP_PG_Character_General_C::Timeline_CameraRadialBlur__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.Timeline_CameraRadialBlur__UpdateFunc");

	ABP_PG_Character_General_C_Timeline_CameraRadialBlur__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PG_Character_General_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.ReceiveBeginPlay");

	ABP_PG_Character_General_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.CameraNeutralizationEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PG_Character_General_C::CameraNeutralizationEffectEvent(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.CameraNeutralizationEffectEvent");

	ABP_PG_Character_General_C_CameraNeutralizationEffectEvent_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           isScope                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PG_Character_General_C::BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature(bool isScope)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature");

	ABP_PG_Character_General_C_BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature_Params params;
	params.isScope = isScope;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.EventTakeDamage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PG_Character_General_C::EventTakeDamage(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.EventTakeDamage");

	ABP_PG_Character_General_C_EventTakeDamage_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.EventPlayerDead
// (Event, Protected, BlueprintEvent)
void ABP_PG_Character_General_C::EventPlayerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.EventPlayerDead");

	ABP_PG_Character_General_C_EventPlayerDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PG_Character_General.BP_PG_Character_General_C.ExecuteUbergraph_BP_PG_Character_General
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PG_Character_General_C::ExecuteUbergraph_BP_PG_Character_General(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PG_Character_General.BP_PG_Character_General_C.ExecuteUbergraph_BP_PG_Character_General");

	ABP_PG_Character_General_C_ExecuteUbergraph_BP_PG_Character_General_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
