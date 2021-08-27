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

// Function UI_Map_OtherPlayerIcon.UI_Map_OtherPlayerIcon_C.FindCoord
struct UUI_Map_OtherPlayerIcon_C_FindCoord_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Degrees;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   NewVector;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map_OtherPlayerIcon.UI_Map_OtherPlayerIcon_C.FindAngle
struct UUI_Map_OtherPlayerIcon_C_FindAngle_Params
{
	struct FVector2D                                   In;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Degrees;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map_OtherPlayerIcon.UI_Map_OtherPlayerIcon_C.Construct
struct UUI_Map_OtherPlayerIcon_C_Construct_Params
{
};

// Function UI_Map_OtherPlayerIcon.UI_Map_OtherPlayerIcon_C.CalculatePosition
struct UUI_Map_OtherPlayerIcon_C_CalculatePosition_Params
{
};

// Function UI_Map_OtherPlayerIcon.UI_Map_OtherPlayerIcon_C.ExecuteUbergraph_UI_Map_OtherPlayerIcon
struct UUI_Map_OtherPlayerIcon_C_ExecuteUbergraph_UI_Map_OtherPlayerIcon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
