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

// Function UI_Indicators.UI_Indicators_C.Construct
struct UUI_Indicators_C_Construct_Params
{
};

// Function UI_Indicators.UI_Indicators_C.PreConstruct
struct UUI_Indicators_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Indicators.UI_Indicators_C.OnSetPawn_Event
struct UUI_Indicators_C_OnSetPawn_Event_Params
{
};

// Function UI_Indicators.UI_Indicators_C.OnChangeHealth_Event
struct UUI_Indicators_C_OnChangeHealth_Event_Params
{
};

// Function UI_Indicators.UI_Indicators_C.OnSetCurrentWeapon_Event
struct UUI_Indicators_C_OnSetCurrentWeapon_Event_Params
{
};

// Function UI_Indicators.UI_Indicators_C.OnChangeNumberGrenades_Event
struct UUI_Indicators_C_OnChangeNumberGrenades_Event_Params
{
};

// Function UI_Indicators.UI_Indicators_C.Tick
struct UUI_Indicators_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Indicators.UI_Indicators_C.OnChangeStockAmmo_Event
struct UUI_Indicators_C_OnChangeStockAmmo_Event_Params
{
};

// Function UI_Indicators.UI_Indicators_C.OnChangeCurrentNumberAmmo_Event
struct UUI_Indicators_C_OnChangeCurrentNumberAmmo_Event_Params
{
};

// Function UI_Indicators.UI_Indicators_C.ExecuteUbergraph_UI_Indicators
struct UUI_Indicators_C_ExecuteUbergraph_UI_Indicators_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
