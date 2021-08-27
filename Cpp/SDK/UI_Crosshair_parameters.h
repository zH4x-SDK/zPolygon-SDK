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

// Function UI_Crosshair.UI_Crosshair_C.SetCrosshairPosition
struct UUI_Crosshair_C_SetCrosshairPosition_Params
{
	struct FVector2D                                   InPosition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Crosshair.UI_Crosshair_C.Construct
struct UUI_Crosshair_C_Construct_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.Tick
struct UUI_Crosshair_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Crosshair.UI_Crosshair_C.OnSetPawn_Event
struct UUI_Crosshair_C_OnSetPawn_Event_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.OnSetCurrentWeapon_Event
struct UUI_Crosshair_C_OnSetCurrentWeapon_Event_Params
{
};

// Function UI_Crosshair.UI_Crosshair_C.OnApplyWeaponDamage_Event
struct UUI_Crosshair_C_OnApplyWeaponDamage_Event_Params
{
	bool                                               bHeadshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair
struct UUI_Crosshair_C_ExecuteUbergraph_UI_Crosshair_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
