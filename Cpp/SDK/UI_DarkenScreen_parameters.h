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

// Function UI_DarkenScreen.UI_DarkenScreen_C.Construct
struct UUI_DarkenScreen_C_Construct_Params
{
};

// Function UI_DarkenScreen.UI_DarkenScreen_C.RemoveDarken
struct UUI_DarkenScreen_C_RemoveDarken_Params
{
};

// Function UI_DarkenScreen.UI_DarkenScreen_C.Tick
struct UUI_DarkenScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_DarkenScreen.UI_DarkenScreen_C.SmoothStartEvent
struct UUI_DarkenScreen_C_SmoothStartEvent_Params
{
};

// Function UI_DarkenScreen.UI_DarkenScreen_C.ExecuteUbergraph_UI_DarkenScreen
struct UUI_DarkenScreen_C_ExecuteUbergraph_UI_DarkenScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
